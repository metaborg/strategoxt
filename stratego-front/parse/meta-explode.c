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
ATerm term_b_16;
ATerm term_y_15;
ATerm term_l_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_b_14;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_u_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_p_7;
ATerm term_u_5;
ATerm term_m_5;
ATerm term_j_5;
ATerm term_i_5;
void init_constant_terms (void)
{
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_Cong_2, term_i_5, (ATerm) ATempty);
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_Op_2, term_i_5, (ATerm) ATempty);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym__3, term_m_16, term_n_16, term_p_7);
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
ATerm foldr_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm TrmConc_0_0 (ATerm);
ATerm TrmAnno_0_0 (ATerm);
ATerm TrmFromStr_0_0 (ATerm);
ATerm TrmFromApp_0_0 (ATerm);
ATerm TrmFromTerm_0_0 (ATerm);
ATerm trm_explode_0_0 (ATerm);
ATerm alltd_1_0 (ATerm w_79 (ATerm), ATerm);
ATerm MetaExplode_0_0 (ATerm);
ATerm _2_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm x_95 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_97 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm l_101 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm q_102 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm o_102 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm meta_explode_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm str_explode_0_0 (ATerm t)
{
  ATerm z_4 = t;
  int a_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_0 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          m_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_0), (ATerm) ATempty);
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
            t = TrmFromTerm_0_0(t);
            ;
            LocalPopChoice(c_5);
          }
        else
          {
            t = b_5;
            {
              ATerm d_5 = t;
              int e_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromStr_0_0(t);
                  ;
                  LocalPopChoice(e_5);
                }
              else
                {
                  t = d_5;
                  {
                    ATerm e_1 (ATerm o_0, ATerm t)
                    {
                      ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL;
                      t = SSL_explode_term(o_0);
                      if(match_cons(t, sym__2))
                        {
                          q_0 = ATgetArgument(t, 0);
                          r_0 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_0;
                      t = map_1_0(str_explode_0_0, t);
                      s_0 = t;
                      t = (ATerm) ATmakeAppl(sym_Cong_2, q_0, s_0);
                      return(t);
                    }
                    ATerm t_0 = NULL,v_0 = NULL,w_0 = NULL;
                    w_0 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        ATerm f_5 = t;
                        int g_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = term_j_5;
                            ;
                            LocalPopChoice(g_5);
                          }
                        else
                          {
                            t = f_5;
                            t = e_1(w_0, t);
                          }
                      }
                    else
                      {
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            t_0 = ATgetFirst((ATermList) t);
                            v_0 = (ATerm) ATgetNext((ATermList) t);
                            {
                              ATerm k_5 = t;
                              int l_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_1 = NULL,c_1 = NULL;
                                  t = t_0;
                                  t = str_explode_0_0(t);
                                  a_1 = t;
                                  t = v_0;
                                  t = str_explode_0_0(t);
                                  c_1 = t;
                                  t = (ATerm) ATmakeAppl(sym_Cong_2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, c_1), a_1));
                                  ;
                                  LocalPopChoice(l_5);
                                }
                              else
                                {
                                  t = k_5;
                                  t = e_1(w_0, t);
                                }
                            }
                          }
                        else
                          {
                            t = e_1(w_0, t);
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
  ATerm g_1 = NULL,i_1 = NULL,k_1 = NULL,n_1 = NULL;
  g_1 = t;
  t = SSL_explode_term(g_1);
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_1;
  t = map_1_0(trm_explode_0_0, t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, i_1, n_1);
  return(t);
}
ATerm TrmCons_0_0 (ATerm t)
{
  ATerm p_1 = NULL,v_1 = NULL,w_1 = NULL,b_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_1 = ATgetFirst((ATermList) t);
      v_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_1;
  t = trm_explode_0_0(t);
  w_1 = t;
  t = v_1;
  t = trm_explode_0_0(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, b_2), w_1));
  return(t);
}
ATerm foldr_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm o_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_89(t);
      ;
      LocalPopChoice(r_5);
    }
  else
    {
      t = o_5;
      {
        ATerm m_2 = NULL,n_2 = NULL,r_2 = NULL,s_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_2 = ATgetFirst((ATermList) t);
            n_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_2;
        t = b_90(t);
        r_2 = t;
        t = n_2;
        t = foldr_3_0(z_89, a_90, b_90, t);
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_2, s_2);
        t = a_90(t);
      }
    }
  return(t);
}
ATerm TrmConc_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym_Conc_2))
    {
      w_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_2;
  {
    ATerm b_0 (ATerm t)
    {
      ATerm x_2 = NULL;
      if(match_cons(t, sym_meta_listvar_1))
        {
          x_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, x_2)));
      return(t);
    }
    t = try_1_0(b_0, t);
    {
      ATerm f_0 (ATerm t)
      {
        t = v_2;
        {
          ATerm s_5 = t;
          int t_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_2 = NULL;
              if(match_cons(t, sym_meta_listvar_1))
                {
                  z_2 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Op_2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, term_u_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, z_2))));
              ;
              LocalPopChoice(t_5);
            }
          else
            {
              t = s_5;
              t = trm_explode_0_0(t);
            }
        }
        return(t);
      }
      ATerm k_0 (ATerm t)
      {
        ATerm e_3 = NULL,z_0 = NULL,h_1 = NULL;
        e_3 = t;
        t = SSL_explode_term(e_3);
        if(match_cons(t, sym__2))
          {
            ATerm v_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_5 = ATgetArgument(t, 1);
              if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
                {
                  z_0 = ATgetFirst((ATermList) w_5);
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
        t = SSL_explode_term(e_3);
        if(match_cons(t, sym__2))
          {
            ATerm z_5 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_5) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_6 = ATgetArgument(t, 1);
              if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
                {
                  ATerm e_6 = ATgetFirst((ATermList) d_6);
                  ATerm f_6 = (ATerm) ATgetNext((ATermList) d_6);
                  if(((ATgetType(f_6) == AT_LIST) && !(ATisEmpty(f_6))))
                    {
                      h_1 = ATgetFirst((ATermList) f_6);
                      {
                        ATerm i_6 = (ATerm) ATgetNext((ATermList) f_6);
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
        t = (ATerm) ATmakeAppl(sym_Op_2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, h_1), z_0));
        return(t);
      }
      t = foldr_3_0(f_0, k_0, trm_explode_0_0, t);
    }
  }
  return(t);
}
ATerm TrmAnno_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,k_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym_WithAnno_2))
    {
      h_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_3;
  t = trm_explode_0_0(t);
  k_3 = t;
  t = i_3;
  t = MetaExplode_0_0(t);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Anno_2, k_3, m_3);
  return(t);
}
ATerm TrmFromStr_0_0 (ATerm t)
{
  ATerm n_3 = NULL;
  if(match_cons(t, sym_FromStrategy_1))
    {
      n_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_3;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm TrmFromApp_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym_FromApp_1))
    {
      o_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_3;
  t = MetaExplode_0_0(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_RootApp_1, p_3);
  return(t);
}
ATerm TrmFromTerm_0_0 (ATerm t)
{
  ATerm q_3 = NULL;
  if(match_cons(t, sym_FromTerm_1))
    {
      q_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_3;
  t = MetaExplode_0_0(t);
  return(t);
}
ATerm trm_explode_0_0 (ATerm t)
{
  ATerm j_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 = NULL;
      if(match_cons(t, sym_meta_var_1))
        {
          e_4 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Var_1, e_4);
        }
      else
        {
          if(match_cons(t, sym_meta_listvar_1))
            {
              e_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, term_m_5, (ATerm) ATinsert(ATinsert(ATempty, term_u_5), (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, e_4))));
        }
      ;
      LocalPopChoice(l_6);
    }
  else
    {
      t = j_6;
      {
        ATerm m_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,o_1 = NULL;
            o_1 = t;
            t = SSL_is_string(o_1);
            m_1 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, m_1);
            ;
            LocalPopChoice(p_6);
          }
        else
          {
            t = m_6;
            {
              ATerm q_6 = t;
              int r_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = TrmFromTerm_0_0(t);
                  ;
                  LocalPopChoice(r_6);
                }
              else
                {
                  t = q_6;
                  {
                    ATerm z_6 = t;
                    int a_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = TrmFromApp_0_0(t);
                        ;
                        LocalPopChoice(a_7);
                      }
                    else
                      {
                        t = z_6;
                        {
                          ATerm b_7 = t;
                          int d_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = TrmFromStr_0_0(t);
                              ;
                              LocalPopChoice(d_7);
                            }
                          else
                            {
                              t = b_7;
                              {
                                ATerm e_7 = t;
                                int f_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = TrmAnno_0_0(t);
                                    ;
                                    LocalPopChoice(f_7);
                                  }
                                else
                                  {
                                    t = e_7;
                                    {
                                      ATerm g_7 = t;
                                      int h_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = TrmConc_0_0(t);
                                          ;
                                          LocalPopChoice(h_7);
                                        }
                                      else
                                        {
                                          t = g_7;
                                          {
                                            ATerm i_7 = t;
                                            int j_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                  _fail(t);
                                                t = term_u_5;
                                                ;
                                                LocalPopChoice(j_7);
                                              }
                                            else
                                              {
                                                t = i_7;
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
ATerm alltd_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_79(t);
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        t = SRTS_all(u_4, t);
      }
    return(t);
  }
  t = u_4(t);
  return(t);
}
ATerm MetaExplode_0_0 (ATerm t)
{
  ATerm l_0 (ATerm t)
  {
    ATerm h_5 = NULL;
    if(match_cons(t, sym_ToTerm_1))
      {
        h_5 = ATgetArgument(t, 0);
        t = h_5;
        t = trm_explode_0_0(t);
      }
    else
      {
        if(match_cons(t, sym_ToBuild_1))
          {
            h_5 = ATgetArgument(t, 0);
            {
              ATerm n_5 = NULL;
              t = h_5;
              t = trm_explode_0_0(t);
              n_5 = t;
              t = (ATerm) ATmakeAppl(sym_Build_1, n_5);
            }
          }
        else
          {
            if(match_cons(t, sym_ToStrategy_1))
              {
                h_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_5;
            t = str_explode_0_0(t);
          }
      }
    return(t);
  }
  t = alltd_1_0(l_0, t);
  return(t);
}
ATerm _2_0 (ATerm o_61 (ATerm), ATerm p_61 (ATerm), ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym__2))
    {
      q_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_6);
  p_5 = t;
  t = q_5;
  t = o_61(t);
  a_6 = t;
  t = y_5;
  t = p_61(t);
  b_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_6, b_6), p_5);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL;
  g_6 = t;
  t = term_p_7;
  t = whoami_0_0(t);
  h_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), h_6), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = g_6;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = q_7;
      {
        ATerm k_6 = NULL,o_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_6 = ATgetFirst((ATermList) t);
            o_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_6;
        {
          ATerm n_0 (ATerm t)
          {
            t = o_6;
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
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  t = SSL_explode_term(s_6);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    ATerm w_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_6, t);
        ;
        LocalPopChoice(z_7);
      }
    else
      {
        t = w_7;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_84(t);
      }
    return(t);
  }
  t = u_6(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      w_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6;
  {
    ATerm p_0 (ATerm t)
    {
      t = v_6;
      return(t);
    }
    t = at_end_1_0(p_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = a_8;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm y_6 = NULL;
    y_6 = t;
    t = SSL_explode_string(y_6);
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm c_7 = NULL;
    c_7 = t;
    t = SSL_explode_string(c_7);
    return(t);
  }
  t = _2_0(u_0, x_0, t);
  t = conc_0_0(t);
  x_6 = t;
  t = SSL_implode_string(x_6);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_7 = NULL;
      m_7 = t;
      t = SSL_is_string(m_7);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = e_8;
      {
        ATerm k_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(y_0, t);
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            {
              ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
              r_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_7 = ATgetArgument(t, 0);
                  t = s_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_7 = ATgetArgument(t, 0);
                      t = s_7;
                      {
                        ATerm b_9 = t;
                        int c_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_9);
                          }
                        else
                          {
                            t = b_9;
                            {
                              ATerm b_1 (ATerm t)
                              {
                                t = term_d_9;
                                return(t);
                              }
                              t = debug_1_0(b_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm x_7 = NULL,y_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_7 = ATgetArgument(t, 0);
                          t_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_7;
                      t = eval_config_0_0(t);
                      x_7 = t;
                      t = t_7;
                      t = eval_config_0_0(t);
                      y_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_7, y_7);
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
  ATerm b_8 = NULL;
  b_8 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_8);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm c_8 = NULL;
      t = eval_config_0_0(t);
      c_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), b_8, c_8);
      t = c_8;
      return(t);
    }
    t = try_1_0(d_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm f_8 = NULL,h_8 = NULL;
    f_8 = t;
    t = term_e_9;
    t = get_config_0_0(t);
    h_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_8, term_f_9);
    t = geq_0_0(t);
    t = f_8;
    t = p_97(t);
    return(t);
  }
  t = try_1_0(f_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm i_8 = NULL,j_8 = NULL,m_8 = NULL,n_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm g_9 = ATgetArgument(t, 0);
        if(match_cons(g_9, sym_Stream_1))
          {
            i_8 = ATgetArgument(g_9, 0);
          }
        else
          _fail(t);
        j_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(i_8, j_8);
    m_8 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), m_8);
    n_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
    return(t);
  }
  t = WriteToFile_1_0(j_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_8, term_h_9);
  t = open_stream_0_0(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, p_8);
  t = l_96(t);
  t = fclose_0_0(t);
  t = p_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_9 = ATgetArgument(t, 0);
        if(match_cons(j_9, sym_Stream_1))
          {
            r_8 = ATgetArgument(j_9, 0);
          }
        else
          _fail(t);
        s_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(r_8, s_8);
    t_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, t_8);
    return(t);
  }
  t = WriteToFile_1_0(l_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm k_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(r_1, t);
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = k_9;
          t = term_u_9;
          if(((v_8 != NULL) && (v_8 != t)))
            _fail(t);
          else
            v_8 = t;
        }
      return(t);
    }
    t = _2_0(q_1, _id, t);
    t = u_8;
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          t = not_null(v_8);
          return(t);
        }
        t = split_2_0(t_1, _id, t);
        return(t);
      }
      t = _2_0(_id, s_1, t);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(x_1, t);
              return(t);
            }
            t = _2_0(u_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
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
ATerm apply_strategy_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  w_8 = t;
  t = dtime_0_0(t);
  t = w_8;
  t = n_99(t);
  x_8 = t;
  t = dtime_0_0(t);
  y_8 = t;
  t = x_8;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_8), (ATerm) ATmakeAppl(sym_Runtime_1, y_8)), a_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_9 (ATerm i_9, ATerm t)
  {
    t = SSL_fclose(i_9);
    return(t);
  }
  ATerm l_9 = NULL,m_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_9 = ATgetArgument(t, 0);
      {
        ATerm k_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_9);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = k_10;
            t = o_9(m_9, t);
          }
      }
    }
  else
    {
      t = o_9(m_9, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL;
  p_9 = t;
  t = x_95(t);
  q_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_9), q_9));
  t = p_9;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  t = SSL_stdin_stream();
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  t = SSL_stdout_stream();
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_9 = NULL;
  t = SSL_stderr_stream();
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_9);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      ATerm s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL,g_2 = NULL;
        e_2 = t;
        t = SSL_explode_term(e_2);
        if(match_cons(t, sym__2))
          {
            ATerm d_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_11 = ATgetArgument(t, 1);
              if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
                {
                  g_2 = ATgetFirst((ATermList) e_11);
                  {
                    ATerm k_11 = (ATerm) ATgetNext((ATermList) e_11);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = w_10;
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
              ATerm y_1 (ATerm t)
              {
                ATerm b_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_10;
                return(t);
              }
              t = _2_0(y_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_9 = ATgetArgument(t, 0);
                  z_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_9, z_9);
              a_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_10);
              ;
              LocalPopChoice(m_11);
            }
          else
            {
              t = l_11;
              {
                ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL;
                ATerm z_1 (ATerm t)
                {
                  ATerm f_10 = NULL;
                  f_10 = t;
                  t = SSL_is_string(f_10);
                  return(t);
                }
                t = _2_0(z_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_10 = ATgetArgument(t, 0);
                    d_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_10, d_10);
                e_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  ATerm o_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_10 = NULL;
      j_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_10, term_t_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = o_11;
      {
        ATerm a_2 (ATerm t)
        {
          t = term_w_11;
          return(t);
        }
        t = debug_1_0(a_2, t);
        _fail(t);
      }
    }
  g_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_10);
  h_10 = t;
  t = g_10;
  t = fclose_0_0(t);
  t = h_10;
  return(t);
}
ATerm split_2_0 (ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,p_10 = NULL;
  l_10 = t;
  t = m_91(t);
  m_10 = t;
  t = l_10;
  t = n_91(t);
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_10, p_10);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  q_10 = t;
  {
    ATerm x_11 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((r_10 != NULL) && (r_10 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                r_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(c_2, t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = x_11;
        t = term_f_12;
        r_10 = t;
      }
    t = q_10;
    {
      ATerm d_2 (ATerm t)
      {
        t = not_null(r_10);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, d_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm t_10 = NULL;
    t_10 = t;
    if(match_string(t, "-k"))
      {
        t = t_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = t_10;
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm u_10 = NULL,v_10 = NULL;
    u_10 = t;
    t = SSL_string_to_int(u_10);
    v_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), v_10);
    t = u_10;
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    t = term_g_12;
    return(t);
  }
  t = ArgOption_3_0(f_2, h_2, i_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm x_10 = NULL;
        x_10 = t;
        if(match_string(t, "-S"))
          {
            t = x_10;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = x_10;
          }
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_k_12;
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        t = term_l_12;
        return(t);
      }
      t = Option_3_0(j_2, k_2, l_2, t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm p_2 (ATerm t)
            {
              ATerm y_10 = NULL,z_10 = NULL;
              y_10 = t;
              t = SSL_string_to_int(y_10);
              z_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_10);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, y_10);
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              t = term_t_12;
              return(t);
            }
            t = ArgOption_3_0(o_2, p_2, q_2, t);
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm t_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_w_12;
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_y_12;
                return(t);
              }
              t = Option_3_0(t_2, u_2, y_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm b_11 = NULL;
    b_11 = t;
    if(match_string(t, "-o"))
      {
        t = b_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = b_11;
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm c_11 = NULL;
    c_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), c_11);
    t = (ATerm) ATmakeAppl(sym_Output_1, c_11);
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_d_13;
    return(t);
  }
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm d_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_13;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_s_13;
          return(t);
        }
        t = Option_3_0(d_3, f_3, g_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL;
  f_11 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_11;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm n_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_11 = ATgetFirst((ATermList) t);
          h_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_11 = ATgetFirst((ATermList) t);
          j_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_11;
      t = h_0(t);
      t = i_11;
      t = i_0(t);
      n_11 = t;
      t = (ATerm) ATinsert(CheckATermList(j_11), n_11);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm p_11 = NULL;
    p_11 = t;
    if(match_string(t, "-i"))
      {
        t = p_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = p_11;
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm q_11 = NULL;
    q_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), q_11);
    t = (ATerm) ATmakeAppl(sym_Input_1, q_11);
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_u_13;
    return(t);
  }
  t = ArgOption_3_0(j_3, l_3, r_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_7;
  t = whoami_0_0(t);
  r_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), r_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_89 (ATerm), ATerm y_89 (ATerm), ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_89(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm u_11 = NULL,v_11 = NULL,y_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_11;
        t = foldr_2_0(x_89, y_89, t);
        y_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, y_11);
        t = y_89(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm q_93 (ATerm), ATerm r_93 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  z_11 = t;
  t = SSL_explode_term(z_11);
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12;
  t = foldr_2_0(q_93, r_93, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = times_0_0(t);
  {
    ATerm s_3 (ATerm t)
    {
      t = term_j_12;
      return(t);
    }
    ATerm t_3 (ATerm t)
    {
      ATerm c_12 = NULL,d_12 = NULL;
      if(match_cons(t, sym__2))
        {
          c_12 = ATgetArgument(t, 0);
          d_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm j_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(c_12, d_12);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = j_14;
            t = SSL_addr(c_12, d_12);
          }
      }
      return(t);
    }
    t = crush_2_0(s_3, t_3, t);
    b_12 = t;
    t = SSL_TicksToSeconds(b_12);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_12;
        if((n_12 != t))
          {
            _fail(t);
          }
        t = m_12;
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = m_12;
        {
          ATerm s_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_12, o_12);
              ;
              LocalPopChoice(a_15);
            }
          else
            {
              t = s_14;
              t = SSL_gtr(n_12, o_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_12, o_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm r_12 = NULL,s_12 = NULL;
    r_12 = t;
    t = term_e_9;
    t = get_config_0_0(t);
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_12, term_b_15);
    t = geq_0_0(t);
    t = r_12;
    t = o_97(t);
    return(t);
  }
  t = try_1_0(u_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL;
    t = run_time_0_0(t);
    u_12 = t;
    t = term_p_7;
    t = whoami_0_0(t);
    v_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_12), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_12));
    t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_15), u_12), term_d_15), v_12));
    return(t);
  }
  t = if_verbose1_1_0(v_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm h_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = h_15;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              {
                ATerm o_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = o_15;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(w_3, t);
      }
    }
  t = l_100(t);
  return(t);
}
ATerm map_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = Cons_2_0(v_83, x_12, t);
      }
    return(t);
  }
  t = x_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      a_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_13 = NULL,f_13 = NULL;
        t = a_13;
        t = g_0(t);
        e_13 = t;
        t = z_12;
        t = e_0(t);
        f_13 = t;
        t = a_13;
        {
          ATerm x_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(e_13), f_13);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, y_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_13);
  g_13 = t;
  t = h_13;
  t = c_69(t);
  i_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, i_13), g_13);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_15);
    }
  else
    {
      t = v_15;
      {
        ATerm z_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(z_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_y_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm a_4 (ATerm t)
    {
      ATerm m_13 = NULL;
      m_13 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_13), term_b_16);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(a_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_13);
  n_13 = t;
  t = o_13;
  t = d_69(t);
  p_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_13), n_13);
  return(t);
}
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm t_13 (ATerm t)
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_84, _id, t);
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        t = Cons_2_0(_id, t_13, t);
      }
    return(t);
  }
  t = t_13(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm l_101 (ATerm), ATerm t)
{
  t = fetch_1_0(l_101, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_16 = ATgetFirst((ATermList) t);
                ATerm h_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_13;
          }
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = (ATerm) ATinsert(ATempty, v_13);
      }
    w_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), w_13);
    t = v_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_76(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_o_16;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_p_16;
        return(t);
      }
      t = Option_3_0(b_4, c_4, d_4, t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm f_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_q_16;
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_r_16;
          return(t);
        }
        t = Option_3_0(f_4, g_4, h_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__3))
    {
      c_14 = ATgetArgument(t, 0);
      d_14 = ATgetArgument(t, 1);
      e_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
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
        t = SSL_table_get(c_14, d_14);
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = (ATerm) ATempty;
      }
    f_14 = t;
    t = SSL_table_put(c_14, d_14, (ATerm) ATinsert(CheckATermList(f_14), e_14));
    t = (ATerm) ATmakeAppl(sym__3, c_14, d_14, e_14);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm k_14 = NULL;
  t = term_p_7;
  t = q_102(t);
  k_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_16, term_x_16, k_14);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = m_14;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm r_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_14 = ATgetFirst((ATermList) t);
          o_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_14;
      t = a_0(t);
      t = term_p_7;
      t = c_0(t);
      r_14 = t;
      t = (ATerm) ATinsert(CheckATermList(o_14), r_14);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm t_14 = NULL;
    t_14 = t;
    if(match_string(t, "--help"))
      {
        t = t_14;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = t_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = t_14;
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_y_16;
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_z_16;
    return(t);
  }
  t = Option_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm x_62 (ATerm), ATerm y_62 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  z_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_14 = ATgetFirst((ATermList) t);
      w_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_14);
  u_14 = t;
  t = v_14;
  t = x_62(t);
  x_14 = t;
  t = w_14;
  t = y_62(t);
  y_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_14), x_14), u_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  {
    ATerm l_4 (ATerm t)
    {
      t = term_a_17;
      t = o_102(t);
      return(t);
    }
    t = try_1_0(l_4, t);
    t = f_15;
    {
      ATerm m_4 (ATerm t)
      {
        ATerm g_15 = NULL;
        g_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, g_15);
        return(t);
      }
      ATerm n_4 (ATerm t)
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
                t = o_102(t);
                t = Cons_2_0(_id, n_4, t);
              }
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            {
              ATerm i_15 = NULL,j_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_15 = ATgetFirst((ATermList) t);
                  j_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_15), (ATerm) ATmakeAppl(sym_Undefined_1, i_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_4, n_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_15;
  {
    ATerm o_4 (ATerm t)
    {
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_102(t);
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
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm j_17 = t;
        int k_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_15 = NULL;
            w_15 = t;
            {
              ATerm l_17 = t;
              int m_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_15;
                  {
                    ATerm n_17 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_l_15;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = n_17;
                        {
                          ATerm q_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(q_4, t);
                        }
                      }
                    t = w_15;
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
                  t = w_15;
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
              ATerm r_4 (ATerm t)
              {
                ATerm s_4 (ATerm t)
                {
                  if(((q_15 != NULL) && (q_15 != t)))
                    _fail(t);
                  else
                    q_15 = t;
                  return(t);
                }
                t = Undefined_1_0(s_4, t);
                return(t);
              }
              t = option_defined_1_0(r_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_c_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), term_p_17));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(p_4, t);
      r_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm n_6 = NULL;
  t = parse_options_1_0(n_100, t);
  n_6 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), n_6);
  t = n_6;
  t = p_100(t);
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_100, t);
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
              t = q_100(t);
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
ATerm iowrap_4_0 (ATerm c_100 (ATerm), ATerm d_100 (ATerm), ATerm e_100 (ATerm), ATerm f_100 (ATerm), ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_100(t);
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
  ATerm v_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(c_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(t_4, e_100, f_100, v_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm y_99 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm x_4 (ATerm t)
    {
      ATerm z_15 = NULL,a_16 = NULL;
      z_15 = t;
      t = term_b_14;
      t = get_config_0_0(t);
      a_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_16));
      t = z_15;
      return(t);
    }
    t = if_verbose2_1_0(x_4, t);
    return(t);
  }
  t = iowrap_4_0(w_99, x_99, y_99, w_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm t)
{
  t = iowrap_3_0(u_99, v_99, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    t = _2_0(_id, r_99, t);
    return(t);
  }
  t = iowrap_2_0(y_4, _fail, t);
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

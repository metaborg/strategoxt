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
ATerm term_i_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_y_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_v_7;
ATerm term_n_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_k_6;
ATerm term_e_6;
ATerm term_a_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_t_5;
void init_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_j_8);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_t_5);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_d_9, term_f_9);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_t_5);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_t_5);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_t_5);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_t_5);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm crush_3_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm y_3 (ATerm u_41, ATerm v_41, ATerm);
ATerm z_3 (ATerm i_45, ATerm j_45, ATerm);
ATerm b_4 (ATerm o_86 (ATerm), ATerm y_408, ATerm m_45, ATerm);
ATerm a_4 (ATerm e_45, ATerm f_45, ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm i_6 (ATerm s_5, ATerm u_5, ATerm);
ATerm m_6 (ATerm c_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_4 (ATerm k_45, ATerm);
ATerm d_4 (ATerm w_41, ATerm x_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_9 (ATerm o_7, ATerm);
ATerm r_9 (ATerm u_7, ATerm x_7, ATerm y_7, ATerm);
ATerm u_9 (ATerm m_8, ATerm p_8, ATerm r_8, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm x_3 (ATerm k_36, ATerm l_36, ATerm);
ATerm debug_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm o_13 (ATerm o_12, ATerm);
ATerm f_1 (ATerm);
ATerm p_13 (ATerm b_13, ATerm c_13, ATerm);
ATerm k_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm q_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm i_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_4 (ATerm l_46, ATerm m_46, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_4 (ATerm j_51, ATerm k_51, ATerm i_51, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm h_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_4 (ATerm u_38, ATerm v_38, ATerm);
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm);
ATerm crush_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm r_18 (ATerm h_18, ATerm i_18, ATerm j_18, ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm m_19 (ATerm f_19, ATerm g_19, ATerm);
ATerm need_help_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_4 (ATerm a_53, ATerm b_53, ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm r_92 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm k_23 (ATerm v_22, ATerm);
ATerm l_23 (ATerm y_22, ATerm);
ATerm b_5 (ATerm);
ATerm parse_options_1_0 (ATerm q_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm iowrap_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL;
  c_0 = t;
  t = term_t_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_v_5;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_5), e_0), term_w_5);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = term_y_5;
  k_0 = t;
  t = SSL_exit(k_0);
  t = c_0;
  return(t);
}
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL;
  q_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_0;
      t = c_80(t);
    }
  else
    {
      ATerm a_1 = NULL,c_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_0 = ATgetFirst((ATermList) t);
          s_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_0;
      t = e_80(t);
      a_1 = t;
      t = s_0;
      t = foldr_3_0(c_80, d_80, e_80, t);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_1, c_1);
      t = d_80(t);
    }
  return(t);
}
ATerm crush_3_0 (ATerm v_83 (ATerm), ATerm w_83 (ATerm), ATerm x_83 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  i_1 = t;
  t = SSL_explode_term(i_1);
  if(match_cons(t, sym__2))
    {
      ATerm z_5 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_1;
  t = foldr_3_0(v_83, w_83, x_83, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_y_5;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm o_1 = NULL,u_1 = NULL;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(o_1, u_1, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  t = crush_3_0(t_0, v_0, term_size_0_0, t);
  return(t);
}
ATerm y_3 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm w_1 = NULL;
  t = SSL_fputc(u_41, v_41);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_1);
  return(t);
}
ATerm z_3 (ATerm i_45, ATerm j_45, ATerm t)
{
  ATerm x_1 = NULL;
  t = SSL_write_term_to_stream_text(i_45, j_45);
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_1);
  return(t);
}
ATerm b_4 (ATerm o_86 (ATerm), ATerm y_408, ATerm m_45, ATerm t)
{
  ATerm z_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_408, term_a_6);
  t = open_stream_0_0(t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, m_45);
  t = o_86(t);
  t = fclose_0_0(t);
  t = m_45;
  return(t);
}
ATerm a_4 (ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm a_2 = NULL;
  t = SSL_write_term_to_stream_baf(e_45, f_45);
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_2);
  return(t);
}
ATerm w_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_6 = ATgetArgument(t, 0);
      if(match_cons(b_6, sym_Stream_1))
        {
          j_3 = ATgetArgument(b_6, 0);
        }
      else
        _fail(t);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(j_3, k_3, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_6 = ATgetArgument(t, 0);
      if(match_cons(d_6, sym_Stream_1))
        {
          v_4 = ATgetArgument(d_6, 0);
        }
      else
        _fail(t);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(v_4, w_4, t);
  r_4 = t;
  t = term_e_6;
  s_4 = t;
  t = r_4;
  if(match_cons(t, sym_Stream_1))
    {
      u_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_6, r_4);
  t = y_3(s_4, u_4, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL,t_2 = NULL;
  ATerm a_5 (ATerm v_2, ATerm w_2, ATerm t)
  {
    ATerm x_2 = NULL,c_3 = NULL,d_3 = NULL,f_3 = NULL,g_3 = NULL,p_0 = NULL;
    t = SSLgetAnnotations(not_null(m_2));
    x_2 = t;
    t = v_2;
    t = fetch_1_0(w_0, t);
    c_3 = t;
    t = w_2;
    if(match_cons(t, sym__2))
      {
        f_3 = ATgetArgument(t, 0);
        g_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_4(x_0, f_3, g_3, t);
    d_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_3, d_3);
    p_0 = t;
    t = SSLsetAnnotations(p_0, x_2);
    return(t);
  }
  ATerm c_5 (ATerm o_3, ATerm p_3, ATerm t)
  {
    ATerm v_3 = NULL,m_4 = NULL,n_4 = NULL,q_4 = NULL,u_0 = NULL;
    t = SSLgetAnnotations(not_null(m_2));
    v_3 = t;
    t = p_3;
    if(match_cons(t, sym__2))
      {
        n_4 = ATgetArgument(t, 0);
        q_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = b_4(y_0, n_4, q_4, t);
    m_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_3, m_4);
    u_0 = t;
    t = SSLsetAnnotations(u_0, v_3);
    return(t);
  }
  ATerm y_4 = NULL,z_4 = NULL,o_0 = NULL,n_0 = NULL;
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  if(match_cons(t, sym__2))
    {
      if(((o_2 != NULL) && (o_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_2 = ATgetArgument(t, 0);
      if(((q_2 != NULL) && (q_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(g_2));
  if(((n_2 != NULL) && (n_2 != t)))
    _fail(t);
  else
    n_2 = t;
  t = not_null(o_2);
  {
    ATerm f_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_2 != NULL) && (f_2 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        ;
        LocalPopChoice(j_6);
      }
    else
      {
        t = f_6;
        t = term_k_6;
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
      }
    if(((t_2 != NULL) && (t_2 != t)))
      _fail(t);
    else
      t_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_2), not_null(q_2));
    if(((n_0 != NULL) && (n_0 != t)))
      _fail(t);
    else
      n_0 = t;
    t = SSLsetAnnotations(not_null(n_0), not_null(n_2));
    t = not_null(g_2);
    if(match_cons(t, sym__2))
      {
        if(((j_2 != NULL) && (j_2 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_2 = ATgetArgument(t, 0);
        if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          k_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_2));
    if(((h_2 != NULL) && (h_2 != t)))
      _fail(t);
    else
      h_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_2), not_null(k_2));
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_2), (ATerm) ATmakeAppl(sym__2, not_null(f_2), not_null(k_2)));
    if(((o_0 != NULL) && (o_0 != t)))
      _fail(t);
    else
      o_0 = t;
    t = SSLsetAnnotations(not_null(o_0), not_null(h_2));
    if(((m_2 != NULL) && (m_2 != t)))
      _fail(t);
    else
      m_2 = t;
    if(match_cons(t, sym__2))
      {
        if(((y_4 != NULL) && (y_4 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_4 = ATgetArgument(t, 0);
        if(((z_4 != NULL) && (z_4 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm l_6 = t;
      int q_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_5(not_null(y_4), not_null(z_4), t);
          ;
          LocalPopChoice(q_6);
        }
      else
        {
          t = l_6;
          t = c_5(not_null(y_4), not_null(z_4), t);
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
ATerm apply_strategy_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,g_5 = NULL,j_5 = NULL,k_5 = NULL;
  k_5 = t;
  t = dtime_0_0(t);
  t = k_5;
  t = q_89(t);
  j_5 = t;
  t = dtime_0_0(t);
  d_5 = t;
  t = j_5;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_5), (ATerm) ATmakeAppl(sym_Runtime_1, d_5)), g_5);
  return(t);
}
ATerm i_6 (ATerm s_5, ATerm u_5, ATerm t)
{
  t = SSL_fclose(s_5);
  return(t);
}
ATerm m_6 (ATerm c_6, ATerm t)
{
  t = SSL_fclose(c_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL;
  h_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_6 = ATgetArgument(t, 0);
      {
        ATerm s_6 = t;
        int t_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_6(g_6, h_6, t);
            ;
            LocalPopChoice(t_6);
          }
        else
          {
            t = s_6;
            t = m_6(h_6, t);
          }
      }
    }
  else
    {
      t = m_6(h_6, t);
    }
  return(t);
}
ATerm c_4 (ATerm k_45, ATerm t)
{
  t = SSL_read_term_from_stream(k_45);
  return(t);
}
ATerm d_4 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm n_6 = NULL;
  t = SSL_fopen(w_41, x_41);
  n_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_6 = NULL;
  t = SSL_stdin_stream();
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  t = SSL_stdout_stream();
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_6 = NULL;
  t = SSL_stderr_stream();
  r_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_6);
  return(t);
}
ATerm q_9 (ATerm o_7, ATerm t)
{
  ATerm r_7 = NULL;
  t = SSL_explode_term(o_7);
  if(match_cons(t, sym__2))
    {
      ATerm u_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_6 = ATgetArgument(t, 1);
        if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
          {
            r_7 = ATgetFirst((ATermList) v_6);
            {
              ATerm w_6 = (ATerm) ATgetNext((ATermList) v_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_7;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_9 (ATerm u_7, ATerm x_7, ATerm y_7, ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,e_8 = NULL,k_8 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(y_7);
  e_8 = t;
  t = u_7;
  if(match_cons(t, sym_Path_1))
    {
      k_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_8, x_7);
  b_1 = t;
  t = SSLsetAnnotations(b_1, e_8);
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(z_7, a_8, t);
  return(t);
}
ATerm u_9 (ATerm m_8, ATerm p_8, ATerm r_8, ATerm t)
{
  ATerm t_8 = NULL,w_8 = NULL,y_8 = NULL,e_9 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(r_8);
  y_8 = t;
  t = SSL_is_string(m_8);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, p_8);
  d_1 = t;
  t = SSLsetAnnotations(d_1, y_8);
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(t_8, w_8, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm h_9 = NULL,k_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      ATerm y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  h_9 = t;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_9(h_9, t);
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            {
              ATerm b_7 = t;
              int c_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_9(k_9, m_9, h_9, t);
                  ;
                  LocalPopChoice(c_7);
                }
              else
                {
                  t = b_7;
                  t = u_9(k_9, m_9, h_9, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_9(h_9, t);
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL,e_10 = NULL;
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_10 = NULL;
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_10, term_g_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      t = debug_1_0(e_1, t);
      _fail(t);
    }
  w_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(e_10, t);
  v_9 = t;
  t = w_9;
  t = fclose_0_0(t);
  t = v_9;
  return(t);
}
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm v_11 (ATerm t)
  {
    ATerm w_11 (ATerm m_10, ATerm n_10, ATerm q_10, ATerm t)
    {
      ATerm r_10 = NULL,w_10 = NULL,g_1 = NULL;
      t = SSLgetAnnotations(q_10);
      r_10 = t;
      t = m_10;
      t = h_74(t);
      w_10 = t;
      t = (ATerm) ATinsert(CheckATermList(n_10), w_10);
      g_1 = t;
      t = SSLsetAnnotations(g_1, r_10);
      return(t);
    }
    ATerm x_11 (ATerm z_10, ATerm a_11, ATerm b_11, ATerm t)
    {
      ATerm e_11 = NULL,i_11 = NULL,j_1 = NULL;
      t = SSLgetAnnotations(b_11);
      e_11 = t;
      t = a_11;
      t = v_11(t);
      i_11 = t;
      t = (ATerm) ATinsert(CheckATermList(i_11), z_10);
      j_1 = t;
      t = SSLsetAnnotations(j_1, e_11);
      return(t);
    }
    ATerm q_11 = NULL,t_11 = NULL,u_11 = NULL;
    q_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_11 = ATgetFirst((ATermList) t);
        u_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_7 = t;
      int i_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_11(t_11, u_11, q_11, t);
          ;
          LocalPopChoice(i_7);
        }
      else
        {
          t = h_7;
          t = x_11(t_11, u_11, q_11, t);
        }
    }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm x_3 (ATerm k_36, ATerm l_36, ATerm t)
{
  t = SSL_strcat(k_36, l_36);
  return(t);
}
ATerm debug_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  z_11 = t;
  t = m_86(t);
  a_12 = t;
  t = term_v_5;
  b_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_11), a_12);
  c_12 = t;
  t = SSL_printnl(b_12, c_12);
  t = z_11;
  return(t);
}
ATerm o_13 (ATerm o_12, ATerm t)
{
  t = SSL_is_string(o_12);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
    }
  return(t);
}
ATerm p_13 (ATerm b_13, ATerm c_13, ATerm t)
{
  t = b_13;
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = debug_1_0(k_1, t);
        _fail(t);
      }
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL;
      x_12 = t;
      t = o_13(x_12, t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_1, t);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
              f_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_13 = ATgetArgument(t, 0);
                  t = g_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_13 = ATgetArgument(t, 0);
                      t = p_13(g_13, f_13, t);
                    }
                  else
                    {
                      ATerm m_13 = NULL,n_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_13 = ATgetArgument(t, 0);
                          h_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_13;
                      t = eval_config_0_0(t);
                      m_13 = t;
                      t = h_13;
                      t = eval_config_0_0(t);
                      n_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
                      t = x_3(m_13, n_13, t);
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
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  t = term_v_7;
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, v_13);
  t = g_4(w_13, v_13, t);
  {
    ATerm w_7 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL,y_13 = NULL;
        t = eval_config_0_0(t);
        x_13 = t;
        t = term_v_7;
        y_13 = t;
        t = SSL_table_put(y_13, v_13, x_13);
        t = x_13;
        ;
        LocalPopChoice(b_8);
      }
    else
      {
        t = w_7;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        r_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_14, term_g_8);
        t = geq_0_0(t);
        t = n_14;
        t = z_87(t);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = n_14;
      }
  }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  if(match_string(t, "-k"))
    {
      t = x_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_14;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  t = SSL_string_to_int(b_15);
  c_15 = t;
  t = term_h_8;
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, c_15);
  t = j_4(d_15, c_15, t);
  t = b_15;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_1, n_1, q_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  if(match_string(t, "-S"))
    {
      t = i_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_15;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  t = term_f_8;
  l_15 = t;
  t = term_j_8;
  m_15 = t;
  t = term_l_8;
  t = j_4(l_15, m_15, t);
  t = term_n_8;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm d_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  t = SSL_string_to_int(n_15);
  o_15 = t;
  t = term_f_8;
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, o_15);
  t = j_4(p_15, o_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_15);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_q_8;
  return(t);
}
ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  t = term_s_8;
  q_15 = t;
  t = term_t_5;
  r_15 = t;
  t = term_u_8;
  t = j_4(q_15, r_15, t);
  t = term_v_8;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_1, v_1, b_2, t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_2, i_2, p_2, t);
            ;
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            t = Option_3_0(r_2, s_2, u_2, t);
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm s_15 = NULL;
  t = term_v_7;
  s_15 = t;
  t = SSL_table_put(s_15, l_46, m_46);
  t = (ATerm) ATmakeAppl(sym__3, term_v_7, l_46, m_46);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
      t = term_t_5;
      t = d_0(t);
      d_16 = t;
      t = term_d_9;
      e_16 = t;
      t = term_f_9;
      f_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_9, term_f_9, d_16);
      t = h_4(e_16, f_16, d_16, t);
      _fail(t);
    }
  else
    {
      ATerm l_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_15 = ATgetFirst((ATermList) t);
          a_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_15;
      t = a_0(t);
      t = term_t_5;
      t = b_0(t);
      l_16 = t;
      t = (ATerm) ATinsert(CheckATermList(a_16), l_16);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm n_16 = NULL;
  n_16 = t;
  if(match_string(t, "-o"))
    {
      t = n_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_16;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  o_16 = t;
  t = term_g_9;
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, o_16);
  t = j_4(p_16, o_16, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_16);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_i_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm h_4 (ATerm j_51, ATerm k_51, ATerm i_51, ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
  {
    ATerm j_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_9 = ATgetArgument(t, 0);
            ATerm o_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
        t = g_4(j_51, k_51, t);
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = j_9;
        t = (ATerm) ATempty;
      }
    s_16 = t;
    t = (ATerm) ATinsert(CheckATermList(s_16), i_51);
    t_16 = t;
    t = SSL_table_put(j_51, k_51, t_16);
    t = r_16;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
      t = term_t_5;
      t = j_0(t);
      e_17 = t;
      t = term_d_9;
      f_17 = t;
      t = term_f_9;
      g_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_9, term_f_9, e_17);
      t = h_4(f_17, g_17, e_17, t);
      _fail(t);
    }
  else
    {
      ATerm k_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_17 = ATgetFirst((ATermList) t);
          b_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_17 = ATgetFirst((ATermList) t);
          d_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_17;
      t = h_0(t);
      t = c_17;
      t = i_0(t);
      k_17 = t;
      t = (ATerm) ATinsert(CheckATermList(d_17), k_17);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm m_17 = NULL;
  m_17 = t;
  if(match_string(t, "-i"))
    {
      t = m_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_17;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL;
  n_17 = t;
  t = term_p_9;
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, n_17);
  t = j_4(o_17, n_17, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_17);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, e_3, h_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_5;
  t = whoami_0_0(t);
  p_17 = t;
  t = term_v_5;
  r_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_9), p_17);
  s_17 = t;
  t = SSL_printnl(r_17, s_17);
  t = term_y_5;
  q_17 = t;
  t = SSL_exit(q_17);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_9;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_4 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_38, v_38);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = SSL_addr(u_38, v_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_17;
      t = a_80(t);
    }
  else
    {
      ATerm z_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_17 = ATgetFirst((ATermList) t);
          w_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_17;
      t = foldr_2_0(a_80, b_80, t);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_17, z_17);
      t = b_80(t);
    }
  return(t);
}
ATerm crush_2_0 (ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL;
  b_18 = t;
  t = SSL_explode_term(b_18);
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_18;
  t = foldr_2_0(t_83, u_83, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_j_8;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(d_18, e_18, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  t = times_0_0(t);
  t = crush_2_0(i_3, l_3, t);
  c_18 = t;
  t = SSL_TicksToSeconds(c_18);
  return(t);
}
ATerm r_18 (ATerm h_18, ATerm i_18, ATerm j_18, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, h_18, i_18);
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(h_18, i_18);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = SSL_gtr(h_18, i_18);
      }
    t = (ATerm) ATmakeAppl(sym__2, h_18, i_18);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_18;
        if((o_18 != t))
          {
            _fail(t);
          }
        t = n_18;
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = r_18(o_18, p_18, n_18, t);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm t_18 = NULL;
  t_18 = t;
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        v_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_18, term_y_5);
        t = geq_0_0(t);
        t = t_18;
        t = y_87(t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        t = t_18;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,a_19 = NULL,b_19 = NULL;
  t = run_time_0_0(t);
  x_18 = t;
  t = term_t_5;
  t = whoami_0_0(t);
  y_18 = t;
  t = term_v_5;
  a_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_10), x_18), term_j_10), y_18);
  b_19 = t;
  t = SSL_printnl(a_19, b_19);
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_10), x_18), term_j_10), y_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_8;
  c_19 = t;
  t = SSL_exit(c_19);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_19;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_19 = ATgetArgument(t, 0);
          t = m_19(l_19, k_19, t);
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_19;
        }
    }
  return(t);
}
ATerm m_19 (ATerm f_19, ATerm g_19, ATerm t)
{
  ATerm h_19 = NULL,m_1 = NULL;
  t = SSLgetAnnotations(f_19);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_19);
  m_1 = t;
  t = SSLsetAnnotations(m_1, h_19);
  return(t);
}
ATerm need_help_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm l_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = l_10;
      t = fetch_1_0(n_3, t);
    }
  t = o_90(t);
  return(t);
}
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm b_20 (ATerm t)
  {
    ATerm c_20 (ATerm p_19, ATerm q_19, ATerm r_19, ATerm t)
    {
      ATerm s_19 = NULL,v_19 = NULL,w_19 = NULL,p_1 = NULL;
      t = SSLgetAnnotations(r_19);
      s_19 = t;
      t = p_19;
      t = x_73(t);
      v_19 = t;
      t = q_19;
      t = b_20(t);
      w_19 = t;
      t = (ATerm) ATinsert(CheckATermList(w_19), v_19);
      p_1 = t;
      t = SSLsetAnnotations(p_1, s_19);
      return(t);
    }
    ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
    y_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_19;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_19 = ATgetFirst((ATermList) t);
            a_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_20(z_19, a_20, y_19, t);
      }
    return(t);
  }
  t = b_20(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_20 = ATgetFirst((ATermList) t);
      f_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_20 = NULL,k_20 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_20)), not_null(k_20));
          return(t);
        }
        t = not_null(f_20);
        t = g_0(t);
        if(((j_20 != NULL) && (j_20 != t)))
          _fail(t);
        else
          j_20 = t;
        t = not_null(e_20);
        t = f_0(t);
        if(((k_20 != NULL) && (k_20 != t)))
          _fail(t);
        else
          k_20 = t;
        t = not_null(f_20);
        t = reverse_acc_2_0(f_0, q_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_5;
      t = g_0(t);
    }
  return(t);
}
ATerm g_4 (ATerm a_53, ATerm b_53, ATerm t)
{
  t = SSL_table_get(a_53, b_53);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_1 = NULL;
  q_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_20);
  r_1 = t;
  t = SSLsetAnnotations(r_1, o_20);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_20), term_s_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      t = fetch_1_0(r_3, t);
    }
  t = term_v_10;
  t = echo_0_0(t);
  t = term_d_9;
  m_20 = t;
  t = term_f_9;
  n_20 = t;
  t = term_x_10;
  t = g_4(m_20, n_20, t);
  t = reverse_acc_2_0(_id, s_3, t);
  t = map_1_0(t_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL;
  u_20 = t;
  {
    ATerm y_10 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_11 = ATgetFirst((ATermList) t);
                ATerm f_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_20;
          }
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = y_10;
        t = (ATerm) ATinsert(ATempty, u_20);
      }
    v_20 = t;
    t = term_k_6;
    w_20 = t;
    t = SSL_printnl(w_20, v_20);
    t = u_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_9;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  t = term_g_11;
  a_21 = t;
  t = term_t_5;
  b_21 = t;
  t = term_h_11;
  t = j_4(a_21, b_21, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL;
  t = term_g_11;
  e_21 = t;
  t = term_t_5;
  f_21 = t;
  t = term_h_11;
  t = j_4(e_21, f_21, t);
  t = term_k_11;
  c_21 = t;
  t = term_t_5;
  d_21 = t;
  t = term_l_11;
  t = j_4(c_21, d_21, t);
  t = term_m_11;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_3, w_3, f_4, t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = Option_3_0(i_4, k_4, l_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,t_1 = NULL;
  l_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_21 = ATgetFirst((ATermList) t);
      i_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_21);
  g_21 = t;
  t = h_21;
  t = q_60(t);
  j_21 = t;
  t = i_21;
  t = r_60(t);
  k_21 = t;
  t = (ATerm) ATinsert(CheckATermList(k_21), j_21);
  t_1 = t;
  t = SSLsetAnnotations(t_1, g_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL,w_21 = NULL,y_1 = NULL;
  if(((q_21 != NULL) && (q_21 != t)))
    _fail(t);
  else
    q_21 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_11;
        t = r_92(t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
      }
    t = not_null(q_21);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_21 != NULL) && (s_21 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_21 = ATgetFirst((ATermList) t);
        if(((t_21 != NULL) && (t_21 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          t_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(q_21));
    if(((r_21 != NULL) && (r_21 != t)))
      _fail(t);
    else
      r_21 = t;
    t = term_x_9;
    if(((w_21 != NULL) && (w_21 != t)))
      _fail(t);
    else
      w_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_9, not_null(s_21));
    t = j_4(not_null(w_21), not_null(s_21), t);
    t = not_null(t_21);
    {
      ATerm g_22 (ATerm t)
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_12 = t;
            int g_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_21 = NULL;
                z_21 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_21;
                ;
                LocalPopChoice(g_12);
              }
            else
              {
                t = f_12;
                t = r_92(t);
                t = Cons_2_0(_id, g_22, t);
              }
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            {
              ATerm c_22 = NULL,d_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_22 = ATgetFirst((ATermList) t);
                  d_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_22), (ATerm) ATmakeAppl(sym_Undefined_1, c_22));
            }
          }
        return(t);
      }
      t = g_22(t);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_21)), (ATerm) ATmakeAppl(sym_Program_1, not_null(s_21)));
      if(((y_1 != NULL) && (y_1 != t)))
        _fail(t);
      else
        y_1 = t;
      t = SSLsetAnnotations(not_null(y_1), not_null(r_21));
    }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  if(match_string(t, "--help"))
    {
      t = s_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_22;
        }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  t = term_p_10;
  t_22 = t;
  t = term_t_5;
  u_22 = t;
  t = term_h_12;
  t = j_4(t_22, u_22, t);
  t = term_i_12;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm k_23 (ATerm v_22, ATerm t)
{
  ATerm x_22 = NULL;
  t = v_22;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_10;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = fetch_1_0(b_5, t);
      }
    t = v_22;
    t = default_system_usage_0_0(t);
    t = term_j_8;
    x_22 = t;
    t = SSL_exit(x_22);
  }
  return(t);
}
ATerm l_23 (ATerm y_22, ATerm t)
{
  ATerm a_23 = NULL;
  t = term_g_11;
  t = get_config_0_0(t);
  t = y_22;
  t = default_system_about_0_0(t);
  t = term_j_8;
  a_23 = t;
  t = SSL_exit(a_23);
  return(t);
}
ATerm b_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  if(((n_22 != NULL) && (n_22 != t)))
    _fail(t);
  else
    n_22 = t;
  t = term_d_9;
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  t = term_f_9;
  if(((q_22 != NULL) && (q_22 != t)))
    _fail(t);
  else
    q_22 = t;
  t = (ATerm) ATempty;
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  t = SSL_table_put(not_null(p_22), not_null(q_22), not_null(r_22));
  t = not_null(n_22);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm m_12 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_92(t);
          ;
          LocalPopChoice(n_12);
        }
      else
        {
          t = m_12;
          {
            ATerm p_12 = t;
            int q_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_4, t_4, x_4, t);
                ;
                LocalPopChoice(q_12);
              }
            else
              {
                t = p_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_23 = NULL;
          b_23 = t;
          {
            ATerm t_12 = t;
            int u_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_23(b_23, t);
                ;
                LocalPopChoice(u_12);
              }
            else
              {
                t = t_12;
                t = l_23(b_23, t);
              }
          }
          ;
          LocalPopChoice(s_12);
        }
      else
        {
          t = r_12;
          {
            ATerm v_12 = t;
            int w_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
                ATerm f_5 (ATerm t)
                {
                  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,c_2 = NULL;
                  h_23 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_23);
                  f_23 = t;
                  t = g_23;
                  if(((l_22 != NULL) && (l_22 != t)))
                    _fail(t);
                  else
                    l_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_23);
                  c_2 = t;
                  t = SSLsetAnnotations(c_2, f_23);
                  return(t);
                }
                t = fetch_1_0(f_5, t);
                t = term_v_5;
                if(((d_23 != NULL) && (d_23 != t)))
                  _fail(t);
                else
                  d_23 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_22)), term_y_12);
                if(((e_23 != NULL) && (e_23 != t)))
                  _fail(t);
                else
                  e_23 = t;
                t = SSL_printnl(not_null(d_23), not_null(e_23));
                t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_22)), term_y_12));
                t = default_system_usage_0_0(t);
                t = term_y_5;
                if(((c_23 != NULL) && (c_23 != t)))
                  _fail(t);
                else
                  c_23 = t;
                t = SSL_exit(not_null(c_23));
                ;
                LocalPopChoice(w_12);
              }
            else
              {
                t = v_12;
              }
          }
        }
      if(((m_22 != NULL) && (m_22 != t)))
        _fail(t);
      else
        m_22 = t;
      t = term_d_9;
      if(((o_22 != NULL) && (o_22 != t)))
        _fail(t);
      else
        o_22 = t;
      t = SSL_table_destroy(not_null(o_22));
      t = not_null(m_22);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  t = parse_options_1_0(q_90, t);
  m_23 = t;
  t = term_z_12;
  p_23 = t;
  t = SSL_table_create(p_23);
  t = term_z_12;
  n_23 = t;
  t = term_a_13;
  o_23 = t;
  t = SSL_table_put(n_23, o_23, m_23);
  t = m_23;
  t = s_90(t);
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_90, t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm i_13 = t;
          int j_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_13);
            }
          else
            {
              t = i_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = if_verbose2_1_0(p_5, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  t = term_k_13;
  q_23 = t;
  t = term_t_5;
  r_23 = t;
  t = term_l_13;
  t = j_4(q_23, r_23, t);
  t = term_q_13;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  s_23 = t;
  t = term_x_9;
  t = get_config_0_0(t);
  t_23 = t;
  t = term_v_5;
  u_23 = t;
  t = (ATerm) ATinsert(ATempty, t_23);
  v_23 = t;
  t = SSL_printnl(u_23, v_23);
  t = s_23;
  return(t);
}
ATerm iowrap_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_90(t);
        ;
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm u_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_13);
            }
          else
            {
              t = u_13;
              {
                ATerm a_14 = t;
                int b_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(b_14);
                  }
                else
                  {
                    t = a_14;
                    {
                      ATerm c_14 = t;
                      int d_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_5, n_5, o_5, t);
                          ;
                          LocalPopChoice(d_14);
                        }
                      else
                        {
                          t = c_14;
                          {
                            ATerm e_14 = t;
                            int f_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_14);
                              }
                            else
                              {
                                t = e_14;
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
  ATerm l_5 (ATerm t)
  {
    ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
    if(((x_23 != NULL) && (x_23 != t)))
      _fail(t);
    else
      x_23 = t;
    {
      ATerm g_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_23 != NULL) && (w_23 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_5, t);
          ;
          LocalPopChoice(h_14);
        }
      else
        {
          t = g_14;
          t = term_i_14;
          if(((w_23 != NULL) && (w_23 != t)))
            _fail(t);
          else
            w_23 = t;
        }
      t = not_null(w_23);
      t = ReadFromFile_0_0(t);
      if(((y_23 != NULL) && (y_23 != t)))
        _fail(t);
      else
        y_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_23), not_null(y_23));
      t = apply_strategy_1_0(z_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_5, b_90, i_5, l_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_2 = NULL;
  d_24 = t;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_24);
  z_23 = t;
  t = b_24;
  t = term_size_0_0(t);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_24, c_24);
  e_2 = t;
  t = SSLsetAnnotations(e_2, z_23);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_5, _fail, default_usage_0_0, t);
  return(t);
}

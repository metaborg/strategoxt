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
ATerm term_j_16;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_k_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_v_7;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_w_6;
ATerm term_q_6;
ATerm term_j_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_s_5;
void init_constant_terms (void)
{
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_v_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_8);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__2, term_f_9, term_s_5);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_x_9);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_s_5);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_s_5);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_s_5);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_s_5);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm term_size_0_0 (ATerm);
ATerm _2_0 (ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm);
ATerm y_3 (ATerm u_41, ATerm v_41, ATerm);
ATerm z_3 (ATerm i_45, ATerm j_45, ATerm);
ATerm b_4 (ATerm o_86 (ATerm), ATerm y_408, ATerm m_45, ATerm);
ATerm a_4 (ATerm e_45, ATerm f_45, ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm o_5 (ATerm g_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_4 (ATerm k_45, ATerm);
ATerm d_4 (ATerm w_41, ATerm x_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm x_3 (ATerm k_36, ATerm l_36, ATerm);
ATerm debug_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm p_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm a_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_4 (ATerm l_46, ATerm m_46, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_4 (ATerm j_51, ATerm k_51, ATerm i_51, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_4 (ATerm u_38, ATerm v_38, ATerm);
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm need_help_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_4 (ATerm a_53, ATerm b_53, ATerm);
ATerm Program_1_0 (ATerm g_66 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_66 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm r_92 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm parse_options_1_0 (ATerm q_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm iowrap_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm q_5 (ATerm);
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
  t = term_s_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_v_5;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_5), e_0), term_w_5);
  l_0 = t;
  t = SSL_printnl(k_0, l_0);
  t = term_y_5;
  m_0 = t;
  t = SSL_exit(m_0);
  t = c_0;
  return(t);
}
ATerm foldr_3_0 (ATerm c_80 (ATerm), ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_80(t);
      ;
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm r_0 = NULL,s_0 = NULL,i_1 = NULL,j_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_0 = ATgetFirst((ATermList) t);
            s_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_0;
        t = e_80(t);
        i_1 = t;
        t = s_0;
        t = foldr_3_0(c_80, d_80, e_80, t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_1, j_1);
        t = d_80(t);
      }
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_y_5;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      x_0 = ATgetArgument(t, 0);
      y_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(x_0, y_0, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL;
  o_0 = t;
  t = SSL_explode_term(o_0);
  if(match_cons(t, sym__2))
    {
      ATerm i_6 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_0;
  t = foldr_3_0(b_1, c_1, term_size_0_0, t);
  return(t);
}
ATerm _2_0 (ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,n_0 = NULL,q_0 = NULL;
  g_2 = t;
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_2);
  z_1 = t;
  t = a_2;
  t = b_56(t);
  d_2 = t;
  t = c_2;
  t = c_56(t);
  f_2 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, f_2);
  n_0 = t;
  t = SSLsetAnnotations(n_0, z_1);
  return(t);
}
ATerm y_3 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm k_2 = NULL;
  t = SSL_fputc(u_41, v_41);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_2);
  return(t);
}
ATerm z_3 (ATerm i_45, ATerm j_45, ATerm t)
{
  ATerm l_2 = NULL;
  t = SSL_write_term_to_stream_text(i_45, j_45);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_2);
  return(t);
}
ATerm b_4 (ATerm o_86 (ATerm), ATerm y_408, ATerm m_45, ATerm t)
{
  ATerm m_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_408, term_j_6);
  t = open_stream_0_0(t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, m_45);
  t = o_86(t);
  t = fclose_0_0(t);
  t = m_45;
  return(t);
}
ATerm a_4 (ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm n_2 = NULL;
  t = SSL_write_term_to_stream_baf(e_45, f_45);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_2);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = fetch_1_0(l_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(m_1, w_2, x_2, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_6 = ATgetArgument(t, 0);
      if(match_cons(o_6, sym_Stream_1))
        {
          y_2 = ATgetArgument(o_6, 0);
        }
      else
        _fail(t);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(y_2, z_2, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      d_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(o_1, b_3, d_3, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,h_3 = NULL,j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(match_cons(p_6, sym_Stream_1))
        {
          f_3 = ATgetArgument(p_6, 0);
        }
      else
        _fail(t);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(f_3, h_3, t);
  e_3 = t;
  t = term_q_6;
  j_3 = t;
  t = e_3;
  if(match_cons(t, sym_Stream_1))
    {
      k_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, e_3);
  t = y_3(j_3, k_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_2 = NULL,t_2 = NULL;
  o_2 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm s_6 = t;
      int t_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_1, t);
          ;
          LocalPopChoice(t_6);
        }
      else
        {
          t = s_6;
          t = term_w_6;
          if(((t_2 != NULL) && (t_2 != t)))
            _fail(t);
          else
            t_2 = t;
        }
      return(t);
    }
    t = _2_0(d_1, _id, t);
    t = o_2;
    {
      ATerm f_1 (ATerm t)
      {
        ATerm v_2 = NULL;
        v_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_2), v_2);
        return(t);
      }
      t = _2_0(_id, f_1, t);
      {
        ATerm x_6 = t;
        int z_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(g_1, h_1, t);
            ;
            LocalPopChoice(z_6);
          }
        else
          {
            t = x_6;
            t = _2_0(_id, n_1, t);
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
ATerm apply_strategy_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,w_3 = NULL,m_4 = NULL,n_4 = NULL;
  n_3 = t;
  t = dtime_0_0(t);
  t = n_3;
  t = q_89(t);
  o_3 = t;
  t = dtime_0_0(t);
  w_3 = t;
  t = o_3;
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_4), (ATerm) ATmakeAppl(sym_Runtime_1, w_3)), n_4);
  return(t);
}
ATerm o_5 (ATerm g_5, ATerm t)
{
  t = SSL_fclose(g_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_5 = ATgetArgument(t, 0);
      {
        ATerm b_7 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_5);
            ;
            LocalPopChoice(c_7);
          }
        else
          {
            t = b_7;
            t = o_5(l_5, t);
          }
      }
    }
  else
    {
      t = o_5(l_5, t);
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
  ATerm p_5 = NULL;
  t = SSL_fopen(w_41, x_41);
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_5);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_5 = NULL;
  t = SSL_stdin_stream();
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t = SSL_stdout_stream();
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_5 = NULL;
  t = SSL_stderr_stream();
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_5);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm e_6 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      e_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm h_6 = NULL;
  h_6 = t;
  t = SSL_is_string(h_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      ATerm e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL,k_1 = NULL;
        b_6 = t;
        t = SSL_explode_term(b_6);
        if(match_cons(t, sym__2))
          {
            ATerm h_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_7 = ATgetArgument(t, 1);
              if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
                {
                  k_1 = ATgetFirst((ATermList) i_7);
                  {
                    ATerm j_7 = (ATerm) ATgetNext((ATermList) i_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_6 = NULL,d_6 = NULL;
              t = _2_0(p_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_6 = ATgetArgument(t, 0);
                  d_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_4(c_6, d_6, t);
              ;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              {
                ATerm f_6 = NULL,g_6 = NULL;
                t = _2_0(q_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_6 = ATgetArgument(t, 0);
                    g_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_4(f_6, g_6, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL;
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_6 = NULL;
      n_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_6, term_q_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      t = debug_1_0(r_1, t);
      _fail(t);
    }
  k_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(m_6, t);
  l_6 = t;
  t = k_6;
  t = fclose_0_0(t);
  t = l_6;
  return(t);
}
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_74, _id, t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        t = Cons_2_0(_id, r_6, t);
      }
    return(t);
  }
  t = r_6(t);
  return(t);
}
ATerm x_3 (ATerm k_36, ATerm l_36, ATerm t)
{
  t = SSL_strcat(k_36, l_36);
  return(t);
}
ATerm debug_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,y_6 = NULL,a_7 = NULL;
  u_6 = t;
  t = m_86(t);
  v_6 = t;
  t = term_v_5;
  y_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_6), v_6);
  a_7 = t;
  t = SSL_printnl(y_6, a_7);
  t = u_6;
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_v_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_7 = NULL;
      n_7 = t;
      t = SSL_is_string(n_7);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_1, t);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL;
              y_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_7 = ATgetArgument(t, 0);
                  t = z_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_7 = ATgetArgument(t, 0);
                      t = z_7;
                      {
                        ATerm d_8 = t;
                        int f_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_8);
                          }
                        else
                          {
                            t = d_8;
                            t = debug_1_0(t_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_8 = NULL,g_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_7 = ATgetArgument(t, 0);
                          a_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_7;
                      t = eval_config_0_0(t);
                      e_8 = t;
                      t = a_8;
                      t = eval_config_0_0(t);
                      g_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_8, g_8);
                      t = x_3(e_8, g_8, t);
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
  ATerm p_8 = NULL,q_8 = NULL;
  p_8 = t;
  t = term_h_8;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, p_8);
  t = g_4(q_8, p_8, t);
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL,s_8 = NULL;
        t = eval_config_0_0(t);
        r_8 = t;
        t = term_h_8;
        s_8 = t;
        t = SSL_table_put(s_8, p_8, r_8);
        t = r_8;
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_8 = NULL,z_8 = NULL;
      u_8 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_8, term_n_8);
      t = geq_0_0(t);
      t = u_8;
      t = z_87(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  if(match_string(t, "-k"))
    {
      t = b_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_9;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  t = SSL_string_to_int(c_9);
  d_9 = t;
  t = term_o_8;
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, d_9);
  t = j_4(e_9, d_9, t);
  t = c_9;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_t_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, v_1, w_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  if(match_string(t, "-S"))
    {
      t = i_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_9;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm j_9 = NULL,o_9 = NULL;
  t = term_m_8;
  j_9 = t;
  t = term_v_8;
  o_9 = t;
  t = term_w_8;
  t = j_4(j_9, o_9, t);
  t = term_x_8;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  t = SSL_string_to_int(p_9);
  q_9 = t;
  t = term_m_8;
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, q_9);
  t = j_4(r_9, q_9, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_9);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm s_9 = NULL,v_9 = NULL;
  t = term_f_9;
  s_9 = t;
  t = term_s_5;
  v_9 = t;
  t = term_g_9;
  t = j_4(s_9, v_9, t);
  t = term_h_9;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_1, y_1, h_2, t);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_2, j_2, p_2, t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = n_9;
            t = Option_3_0(s_2, u_2, a_3, t);
          }
      }
    }
  return(t);
}
ATerm j_4 (ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm w_9 = NULL;
  t = term_h_8;
  w_9 = t;
  t = SSL_table_put(w_9, l_46, m_46);
  t = (ATerm) ATmakeAppl(sym__3, term_h_8, l_46, m_46);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_10 = NULL,e_10 = NULL,f_10 = NULL;
      t = term_s_5;
      t = d_0(t);
      c_10 = t;
      t = term_u_9;
      e_10 = t;
      t = term_x_9;
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_x_9, c_10);
      t = h_4(e_10, f_10, c_10, t);
      _fail(t);
    }
  else
    {
      ATerm k_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_9 = ATgetFirst((ATermList) t);
          a_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_9;
      t = a_0(t);
      t = term_s_5;
      t = b_0(t);
      k_10 = t;
      t = (ATerm) ATinsert(CheckATermList(a_10), k_10);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  if(match_string(t, "-o"))
    {
      t = n_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_10;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  t = term_y_9;
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, o_10);
  t = j_4(p_10, o_10, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_10);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, g_3, i_3, t);
  return(t);
}
ATerm h_4 (ATerm j_51, ATerm k_51, ATerm i_51, ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_10 = ATgetArgument(t, 0);
            ATerm i_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_51, k_51);
        t = g_4(j_51, k_51, t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATempty;
      }
    s_10 = t;
    t = (ATerm) ATinsert(CheckATermList(s_10), i_51);
    t_10 = t;
    t = SSL_table_put(j_51, k_51, t_10);
    t = r_10;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_11 = NULL,o_11 = NULL,p_11 = NULL;
      t = term_s_5;
      t = j_0(t);
      h_11 = t;
      t = term_u_9;
      o_11 = t;
      t = term_x_9;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_x_9, h_11);
      t = h_4(o_11, p_11, h_11, t);
      _fail(t);
    }
  else
    {
      ATerm u_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_11 = ATgetFirst((ATermList) t);
          e_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_11 = ATgetFirst((ATermList) t);
          g_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_11;
      t = h_0(t);
      t = f_11;
      t = i_0(t);
      u_11 = t;
      t = (ATerm) ATinsert(CheckATermList(g_11), u_11);
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  if(match_string(t, "-i"))
    {
      t = w_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_11;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm x_11 = NULL,z_11 = NULL;
  x_11 = t;
  t = term_j_10;
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, x_11);
  t = j_4(z_11, x_11, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_11);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, p_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_5;
  t = whoami_0_0(t);
  c_12 = t;
  t = term_v_5;
  d_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_10), c_12);
  e_12 = t;
  t = SSL_printnl(d_12, e_12);
  t = term_y_5;
  f_12 = t;
  t = SSL_exit(f_12);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_4 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_38, v_38);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = SSL_addr(u_38, v_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_80(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm i_12 = NULL,j_12 = NULL,n_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_12 = ATgetFirst((ATermList) t);
            j_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_12;
        t = foldr_2_0(a_80, b_80, t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_12, n_12);
        t = b_80(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_v_8;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4(q_2, r_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_12 = NULL,b_2 = NULL,e_2 = NULL;
  t = times_0_0(t);
  b_2 = t;
  t = SSL_explode_term(b_2);
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_2;
  t = foldr_2_0(q_3, r_3, t);
  t_12 = t;
  t = SSL_TicksToSeconds(t_12);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_13 = NULL,t_13 = NULL,v_13 = NULL;
  p_13 = t;
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_13;
        if((t_13 != t))
          {
            _fail(t);
          }
        t = p_13;
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATmakeAppl(sym__2, t_13, v_13);
        {
          ATerm b_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_13, v_13);
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = b_11;
              t = SSL_gtr(t_13, v_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_13, v_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_14 = NULL,c_14 = NULL;
      a_14 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_14, term_y_5);
      t = geq_0_0(t);
      t = a_14;
      t = y_87(t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  t = run_time_0_0(t);
  e_14 = t;
  t = term_s_5;
  t = whoami_0_0(t);
  f_14 = t;
  t = term_v_5;
  g_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), e_14), term_k_11), f_14);
  h_14 = t;
  t = SSL_printnl(g_14, h_14);
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_11), e_14), term_k_11), f_14));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_8;
  i_14 = t;
  t = SSL_exit(i_14);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_90 (ATerm), ATerm t)
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
      t = fetch_1_0(u_3, t);
    }
  t = o_90(t);
  return(t);
}
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm j_14 (ATerm t)
  {
    ATerm y_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = y_11;
        t = Cons_2_0(x_73, j_14, t);
      }
    return(t);
  }
  t = j_14(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_14 = ATgetFirst((ATermList) t);
      m_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_14 = NULL,v_14 = NULL;
        t = m_14;
        t = g_0(t);
        s_14 = t;
        t = l_14;
        t = f_0(t);
        v_14 = t;
        t = m_14;
        {
          ATerm v_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_14), v_14);
            return(t);
          }
          t = reverse_acc_2_0(f_0, v_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_5;
      t = g_0(t);
    }
  return(t);
}
ATerm g_4 (ATerm a_53, ATerm b_53, ATerm t)
{
  t = SSL_table_get(a_53, b_53);
  return(t);
}
ATerm Program_1_0 (ATerm g_66 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,t_0 = NULL,u_0 = NULL;
  b_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_15);
  w_14 = t;
  t = z_14;
  t = g_66(t);
  a_15 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_15);
  t_0 = t;
  t = SSLsetAnnotations(t_0, w_14);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_15), term_b_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = fetch_1_0(i_4, t);
    }
  t = term_k_12;
  t = echo_0_0(t);
  t = term_u_9;
  g_15 = t;
  t = term_x_9;
  h_15 = t;
  t = term_l_12;
  t = g_4(g_15, h_15, t);
  t = reverse_acc_2_0(_id, k_4, t);
  t = map_1_0(l_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_66 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,v_0 = NULL,w_0 = NULL;
  n_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_15);
  k_15 = t;
  t = l_15;
  t = h_66(t);
  m_15 = t;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_15);
  v_0 = t;
  t = SSLsetAnnotations(v_0, k_15);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  r_15 = t;
  {
    ATerm m_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_12 = ATgetFirst((ATermList) t);
                ATerm q_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_15;
          }
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATinsert(ATempty, r_15);
      }
    s_15 = t;
    t = term_w_6;
    t_15 = t;
    t = SSL_printnl(t_15, s_15);
    t = r_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  t = term_r_12;
  x_15 = t;
  t = term_s_5;
  y_15 = t;
  t = term_s_12;
  t = j_4(x_15, y_15, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  t = term_r_12;
  z_15 = t;
  t = term_s_5;
  a_16 = t;
  t = term_s_12;
  t = j_4(z_15, a_16, t);
  t = term_v_12;
  b_16 = t;
  t = term_s_5;
  c_16 = t;
  t = term_w_12;
  t = j_4(b_16, c_16, t);
  t = term_x_12;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, q_4, t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = Option_3_0(r_4, s_4, t_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,z_0 = NULL,a_1 = NULL;
  i_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_16 = ATgetFirst((ATermList) t);
      f_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  d_16 = t;
  t = e_16;
  t = q_60(t);
  g_16 = t;
  t = f_16;
  t = r_60(t);
  h_16 = t;
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(h_16), g_16);
  z_0 = t;
  t = SSLsetAnnotations(z_0, d_16);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  n_16 = t;
  t = term_q_10;
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, n_16);
  t = j_4(o_16, n_16, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_16);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm m_16 = NULL;
  m_16 = t;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_13;
        t = r_92(t);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
      }
    t = m_16;
    {
      ATerm v_4 (ATerm t)
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_13 = t;
            int h_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_13);
              }
            else
              {
                t = g_13;
                t = r_92(t);
                t = Cons_2_0(_id, v_4, t);
              }
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            {
              ATerm q_16 = NULL,r_16 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_16 = ATgetFirst((ATermList) t);
                  r_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_16), (ATerm) ATmakeAppl(sym_Undefined_1, q_16));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_4, v_4, t);
    }
  }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm f_17 = NULL;
  f_17 = t;
  if(match_string(t, "--help"))
    {
      t = f_17;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_17;
        }
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  t = term_v_11;
  g_17 = t;
  t = term_s_5;
  h_17 = t;
  t = term_i_13;
  t = j_4(g_17, h_17, t);
  t = term_j_13;
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  y_16 = t;
  t = term_u_9;
  b_17 = t;
  t = term_x_9;
  c_17 = t;
  t = (ATerm) ATempty;
  d_17 = t;
  t = SSL_table_put(b_17, c_17, d_17);
  t = y_16;
  {
    ATerm w_4 (ATerm t)
    {
      ATerm l_13 = t;
      int m_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_92(t);
          ;
          LocalPopChoice(m_13);
        }
      else
        {
          t = l_13;
          {
            ATerm n_13 = t;
            int o_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_4, y_4, z_4, t);
                ;
                LocalPopChoice(o_13);
              }
            else
              {
                t = n_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_4, t);
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_17 = NULL;
          o_17 = t;
          {
            ATerm s_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_3 = NULL;
                t = o_17;
                {
                  ATerm w_13 = t;
                  int x_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_13);
                    }
                  else
                    {
                      t = w_13;
                      t = fetch_1_0(a_5, t);
                    }
                  t = o_17;
                  t = default_system_usage_0_0(t);
                  t = term_v_8;
                  s_3 = t;
                  t = SSL_exit(s_3);
                }
                ;
                LocalPopChoice(u_13);
              }
            else
              {
                t = s_13;
                {
                  ATerm f_4 = NULL;
                  t = term_r_12;
                  t = get_config_0_0(t);
                  t = o_17;
                  t = default_system_about_0_0(t);
                  t = term_v_8;
                  f_4 = t;
                  t = SSL_exit(f_4);
                }
              }
          }
          ;
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
                ATerm b_5 (ATerm t)
                {
                  ATerm c_5 (ATerm t)
                  {
                    if(((z_16 != NULL) && (z_16 != t)))
                      _fail(t);
                    else
                      z_16 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_5, t);
                  return(t);
                }
                t = fetch_1_0(b_5, t);
                t = term_v_5;
                p_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_16)), term_b_14);
                q_17 = t;
                t = SSL_printnl(p_17, q_17);
                t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_16)), term_b_14));
                t = default_system_usage_0_0(t);
                t = term_y_5;
                r_17 = t;
                t = SSL_exit(r_17);
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
              }
          }
        }
      a_17 = t;
      t = term_u_9;
      e_17 = t;
      t = SSL_table_destroy(e_17);
      t = a_17;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  t = parse_options_1_0(q_90, t);
  u_17 = t;
  t = term_d_14;
  v_17 = t;
  t = SSL_table_create(v_17);
  t = term_d_14;
  w_17 = t;
  t = term_k_14;
  x_17 = t;
  t = SSL_table_put(w_17, x_17, u_17);
  t = u_17;
  t = s_90(t);
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_90, t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = if_verbose2_1_0(m_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  t = term_r_14;
  y_17 = t;
  t = term_s_5;
  z_17 = t;
  t = term_t_14;
  t = j_4(y_17, z_17, t);
  t = term_u_14;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL;
  a_18 = t;
  t = term_q_10;
  t = get_config_0_0(t);
  b_18 = t;
  t = term_v_5;
  c_18 = t;
  t = (ATerm) ATinsert(ATempty, b_18);
  d_18 = t;
  t = SSL_printnl(c_18, d_18);
  t = a_18;
  return(t);
}
ATerm iowrap_3_0 (ATerm z_89 (ATerm), ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm y_14 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_90(t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = y_14;
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              {
                ATerm f_15 = t;
                int i_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_15);
                  }
                else
                  {
                    t = f_15;
                    {
                      ATerm o_15 = t;
                      int p_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_5, i_5, j_5, t);
                          ;
                          LocalPopChoice(p_15);
                        }
                      else
                        {
                          t = o_15;
                          {
                            ATerm q_15 = t;
                            int u_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_15);
                              }
                            else
                              {
                                t = q_15;
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
  ATerm f_5 (ATerm t)
  {
    ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
    e_18 = t;
    {
      ATerm v_15 = t;
      int w_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_18 != NULL) && (f_18 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_5, t);
          ;
          LocalPopChoice(w_15);
        }
      else
        {
          t = v_15;
          t = term_j_16;
          f_18 = t;
        }
      t = not_null(f_18);
      t = ReadFromFile_0_0(t);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_18, g_18);
      t = apply_strategy_1_0(z_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(d_5, b_90, e_5, f_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = _2_0(_id, term_size_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_5, _fail, default_usage_0_0, t);
  return(t);
}

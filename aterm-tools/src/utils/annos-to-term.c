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
Symbol sym_Anno_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_q_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_x_7;
ATerm term_m_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_i_6;
ATerm term_y_5;
ATerm term_r_5;
ATerm term_m_5;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_a_1;
void init_constant_terms (void)
{
  ATprotect(&(term_a_1));
  term_a_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_k_8, term_p_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_a_1);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_k_9);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_a_1);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__2, term_z_10, term_a_1);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_a_1);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_a_1);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm catch_annos_0_0 (ATerm);
ATerm w_3 (ATerm l_41, ATerm m_41, ATerm);
ATerm x_3 (ATerm z_44, ATerm a_45, ATerm);
ATerm z_3 (ATerm j_86 (ATerm), ATerm t_405, ATerm d_45, ATerm);
ATerm y_3 (ATerm v_44, ATerm w_44, ATerm);
ATerm f_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_89 (ATerm), ATerm);
ATerm d_6 (ATerm p_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_4 (ATerm b_45, ATerm);
ATerm b_4 (ATerm n_41, ATerm o_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_9 (ATerm s_6, ATerm);
ATerm e_9 (ATerm h_7, ATerm i_7, ATerm o_7, ATerm);
ATerm h_9 (ATerm a_8, ATerm b_8, ATerm f_8, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm v_3 (ATerm k_36, ATerm l_36, ATerm);
ATerm debug_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_4 (ATerm c_46, ATerm d_46, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_4 (ATerm a_51, ATerm b_51, ATerm z_50, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_4 (ATerm l_38, ATerm m_38, ATerm);
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm d_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm need_help_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm e_4 (ATerm r_52, ATerm s_52, ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_92 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm parse_options_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm iowrap_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_0 = NULL,l_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  k_0 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_i_5;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_5), l_0), term_j_5);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_m_5;
  o_0 = t;
  t = SSL_exit(o_0);
  t = k_0;
  return(t);
}
ATerm catch_annos_0_0 (ATerm t)
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 = NULL;
      r_0 = t;
      t = SSLgetAnnotations(r_0);
      {
        ATerm q_5 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_5;
          }
        t = r_0;
      }
      LocalPopChoice(o_5);
      {
        ATerm u_0 = NULL,v_0 = NULL,y_0 = NULL;
        y_0 = t;
        t = ATremoveAnnotations(y_0);
        t = SRTS_all(catch_annos_0_0, t);
        u_0 = t;
        t = SSLgetAnnotations(y_0);
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, u_0, v_0);
      }
    }
  else
    {
      t = n_5;
      t = SRTS_all(catch_annos_0_0, t);
    }
  return(t);
}
ATerm w_3 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm g_1 = NULL;
  t = SSL_fputc(l_41, m_41);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_1);
  return(t);
}
ATerm x_3 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm r_1 = NULL;
  t = SSL_write_term_to_stream_text(z_44, a_45);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_1);
  return(t);
}
ATerm z_3 (ATerm j_86 (ATerm), ATerm t_405, ATerm d_45, ATerm t)
{
  ATerm s_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_405, term_r_5);
  t = open_stream_0_0(t);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_1, d_45);
  t = j_86(t);
  t = fclose_0_0(t);
  t = d_45;
  return(t);
}
ATerm y_3 (ATerm v_44, ATerm w_44, ATerm t)
{
  ATerm u_1 = NULL;
  t = SSL_write_term_to_stream_baf(v_44, w_44);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_1);
  return(t);
}
ATerm f_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_5 = ATgetArgument(t, 0);
      if(match_cons(s_5, sym_Stream_1))
        {
          c_1 = ATgetArgument(s_5, 0);
        }
      else
        _fail(t);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(c_1, d_1, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_5 = ATgetArgument(t, 0);
      if(match_cons(t_5, sym_Stream_1))
        {
          v_1 = ATgetArgument(t_5, 0);
        }
      else
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(v_1, w_1, t);
  p_1 = t;
  t = term_y_5;
  q_1 = t;
  t = p_1;
  if(match_cons(t, sym_Stream_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, p_1);
  t = w_3(q_1, t_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,r_4 = NULL,s_4 = NULL,n_2 = NULL,n_0 = NULL;
  if(((b_2 != NULL) && (b_2 != t)))
    _fail(t);
  else
    b_2 = t;
  if(match_cons(t, sym__2))
    {
      if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_2 = ATgetArgument(t, 0);
      if(((l_2 != NULL) && (l_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(b_2));
  if(((j_2 != NULL) && (j_2 != t)))
    _fail(t);
  else
    j_2 = t;
  t = not_null(k_2);
  {
    ATerm z_5 = t;
    int b_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_1 != NULL) && (z_1 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_0, t);
        ;
        LocalPopChoice(b_6);
      }
    else
      {
        t = z_5;
        t = term_i_6;
        if(((z_1 != NULL) && (z_1 != t)))
          _fail(t);
        else
          z_1 = t;
      }
    if(((m_2 != NULL) && (m_2 != t)))
      _fail(t);
    else
      m_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_2), not_null(l_2));
    if(((n_0 != NULL) && (n_0 != t)))
      _fail(t);
    else
      n_0 = t;
    t = SSLsetAnnotations(not_null(n_0), not_null(j_2));
    t = not_null(b_2);
    if(match_cons(t, sym__2))
      {
        if(((e_2 != NULL) && (e_2 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_2 = ATgetArgument(t, 0);
        if(((f_2 != NULL) && (f_2 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          f_2 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_2));
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_2), (ATerm) ATmakeAppl(sym__2, not_null(z_1), not_null(f_2)));
    if(((n_2 != NULL) && (n_2 != t)))
      _fail(t);
    else
      n_2 = t;
    t = SSLsetAnnotations(not_null(n_2), not_null(d_2));
    if(((i_2 != NULL) && (i_2 != t)))
      _fail(t);
    else
      i_2 = t;
    if(match_cons(t, sym__2))
      {
        if(((r_4 != NULL) && (r_4 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_4 = ATgetArgument(t, 0);
        if(((s_4 != NULL) && (s_4 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm j_6 = t;
      int k_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_0 = NULL,w_0 = NULL,x_0 = NULL,z_0 = NULL,b_1 = NULL,r_2 = NULL;
          t = SSLgetAnnotations(not_null(i_2));
          m_0 = t;
          t = not_null(r_4);
          t = fetch_1_0(f_0, t);
          w_0 = t;
          t = not_null(s_4);
          if(match_cons(t, sym__2))
            {
              z_0 = ATgetArgument(t, 0);
              b_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_3(s_0, z_0, b_1, t);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_0, x_0);
          r_2 = t;
          t = SSLsetAnnotations(r_2, m_0);
          ;
          LocalPopChoice(k_6);
        }
      else
        {
          t = j_6;
          {
            ATerm j_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(not_null(i_2));
            j_1 = t;
            t = not_null(s_4);
            if(match_cons(t, sym__2))
              {
                n_1 = ATgetArgument(t, 0);
                o_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_3(t_0, n_1, o_1, t);
            m_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_4), m_1);
            t_2 = t;
            t = SSLsetAnnotations(t_2, j_1);
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
ATerm apply_strategy_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  t = dtime_0_0(t);
  t = a_5;
  t = l_89(t);
  z_4 = t;
  t = dtime_0_0(t);
  w_4 = t;
  t = z_4;
  if(match_cons(t, sym__2))
    {
      x_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_4), (ATerm) ATmakeAppl(sym_Runtime_1, w_4)), y_4);
  return(t);
}
ATerm d_6 (ATerm p_5, ATerm t)
{
  t = SSL_fclose(p_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_5 = ATgetArgument(t, 0);
      {
        ATerm l_6 = t;
        int m_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_5);
            ;
            LocalPopChoice(m_6);
          }
        else
          {
            t = l_6;
            t = d_6(w_5, t);
          }
      }
    }
  else
    {
      t = d_6(w_5, t);
    }
  return(t);
}
ATerm a_4 (ATerm b_45, ATerm t)
{
  t = SSL_read_term_from_stream(b_45);
  return(t);
}
ATerm b_4 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm e_6 = NULL;
  t = SSL_fopen(n_41, o_41);
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_6);
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
ATerm d_9 (ATerm s_6, ATerm t)
{
  ATerm y_6 = NULL;
  t = SSL_explode_term(s_6);
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_6 = ATgetArgument(t, 1);
        if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
          {
            y_6 = ATgetFirst((ATermList) o_6);
            {
              ATerm p_6 = (ATerm) ATgetNext((ATermList) o_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_6;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_6;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_6;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_6;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_9 (ATerm h_7, ATerm i_7, ATerm o_7, ATerm t)
{
  ATerm p_7 = NULL,s_7 = NULL,t_7 = NULL,y_7 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(o_7);
  t_7 = t;
  t = h_7;
  if(match_cons(t, sym_Path_1))
    {
      y_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_7, i_7);
  a_3 = t;
  t = SSLsetAnnotations(a_3, t_7);
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(p_7, s_7, t);
  return(t);
}
ATerm h_9 (ATerm a_8, ATerm b_8, ATerm f_8, ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,l_8 = NULL,r_8 = NULL,b_3 = NULL;
  t = SSLgetAnnotations(f_8);
  l_8 = t;
  t = SSL_is_string(a_8);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, b_8);
  b_3 = t;
  t = SSLsetAnnotations(b_3, l_8);
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4(g_8, h_8, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm u_8 = NULL,x_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      ATerm r_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  u_8 = t;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
      {
        ATerm t_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_9(u_8, t);
            ;
            LocalPopChoice(v_6);
          }
        else
          {
            t = t_6;
            {
              ATerm w_6 = t;
              int x_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_9(x_8, z_8, u_8, t);
                  ;
                  LocalPopChoice(x_6);
                }
              else
                {
                  t = w_6;
                  t = h_9(x_8, z_8, u_8, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_9(u_8, t);
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_9 = NULL,n_9 = NULL,r_9 = NULL;
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_9 = NULL;
      s_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_9, term_c_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      t = debug_1_0(e_1, t);
      _fail(t);
    }
  n_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_4(r_9, t);
  l_9 = t;
  t = n_9;
  t = fclose_0_0(t);
  t = l_9;
  return(t);
}
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm d_11 = NULL,f_11 = NULL,g_11 = NULL;
    d_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_11 = ATgetFirst((ATermList) t);
        g_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_3 = NULL,j_3 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(d_11);
          c_3 = t;
          t = f_11;
          t = h_74(t);
          j_3 = t;
          t = (ATerm) ATinsert(CheckATermList(g_11), j_3);
          h_3 = t;
          t = SSLsetAnnotations(h_3, c_3);
          ;
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          {
            ATerm j_4 = NULL,u_4 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(d_11);
            j_4 = t;
            t = g_11;
            t = h_11(t);
            u_4 = t;
            t = (ATerm) ATinsert(CheckATermList(u_4), f_11);
            i_3 = t;
            t = SSLsetAnnotations(i_3, j_4);
          }
        }
    }
    return(t);
  }
  t = h_11(t);
  return(t);
}
ATerm v_3 (ATerm k_36, ATerm l_36, ATerm t)
{
  t = SSL_strcat(k_36, l_36);
  return(t);
}
ATerm debug_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,x_11 = NULL;
  s_11 = t;
  t = h_86(t);
  t_11 = t;
  t = term_i_5;
  u_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_11), t_11);
  x_11 = t;
  t = SSL_printnl(u_11, x_11);
  t = s_11;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm g_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_7);
    }
  else
    {
      t = g_7;
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_12 = NULL;
      l_12 = t;
      t = SSL_is_string(l_12);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = n_7;
      {
        ATerm r_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_1, t);
            ;
            LocalPopChoice(u_7);
          }
        else
          {
            t = r_7;
            {
              ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
              y_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_12 = ATgetArgument(t, 0);
                  t = z_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_12 = ATgetArgument(t, 0);
                      t = z_12;
                      {
                        ATerm v_7 = t;
                        int w_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_7);
                          }
                        else
                          {
                            t = v_7;
                            t = debug_1_0(h_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_13 = NULL,g_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_12 = ATgetArgument(t, 0);
                          a_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_12;
                      t = eval_config_0_0(t);
                      e_13 = t;
                      t = a_13;
                      t = eval_config_0_0(t);
                      g_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_13, g_13);
                      t = v_3(e_13, g_13, t);
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
  ATerm m_13 = NULL,n_13 = NULL;
  m_13 = t;
  t = term_x_7;
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, m_13);
  t = e_4(n_13, m_13, t);
  {
    ATerm z_7 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,p_13 = NULL;
        t = eval_config_0_0(t);
        o_13 = t;
        t = term_x_7;
        p_13 = t;
        t = SSL_table_put(p_13, m_13, o_13);
        t = o_13;
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = z_7;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm x_13 = NULL;
  x_13 = t;
  {
    ATerm e_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, term_m_8);
        t = geq_0_0(t);
        t = x_13;
        t = u_87(t);
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = e_8;
        t = x_13;
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  if(match_string(t, "-k"))
    {
      t = m_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_14;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = SSL_string_to_int(n_14);
  o_14 = t;
  t = term_n_8;
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, o_14);
  t = h_4(p_14, o_14, t);
  t = n_14;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_o_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_1, k_1, l_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  if(match_string(t, "-S"))
    {
      t = t_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_14;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm u_14 = NULL,y_14 = NULL;
  t = term_k_8;
  u_14 = t;
  t = term_p_8;
  y_14 = t;
  t = term_q_8;
  t = h_4(u_14, y_14, t);
  t = term_s_8;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_t_8;
  return(t);
}
ATerm c_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,h_15 = NULL;
  c_15 = t;
  t = SSL_string_to_int(c_15);
  d_15 = t;
  t = term_k_8;
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, d_15);
  t = h_4(h_15, d_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_15);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_v_8;
  return(t);
}
ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  t = term_w_8;
  k_15 = t;
  t = term_a_1;
  l_15 = t;
  t = term_y_8;
  t = h_4(k_15, l_15, t);
  t = term_a_9;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_1, y_1, a_2, t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = c_9;
      {
        ATerm g_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_2, g_2, h_2, t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = g_9;
            t = Option_3_0(o_2, p_2, q_2, t);
          }
      }
    }
  return(t);
}
ATerm h_4 (ATerm c_46, ATerm d_46, ATerm t)
{
  ATerm m_15 = NULL;
  t = term_x_7;
  m_15 = t;
  t = SSL_table_put(m_15, c_46, d_46);
  t = (ATerm) ATmakeAppl(sym__3, term_x_7, c_46, d_46);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
      t = term_a_1;
      t = d_0(t);
      r_15 = t;
      t = term_j_9;
      s_15 = t;
      t = term_k_9;
      t_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_9, term_k_9, r_15);
      t = f_4(s_15, t_15, r_15, t);
      _fail(t);
    }
  else
    {
      ATerm a_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_15 = ATgetFirst((ATermList) t);
          q_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_15;
      t = a_0(t);
      t = term_a_1;
      t = c_0(t);
      a_16 = t;
      t = (ATerm) ATinsert(CheckATermList(q_15), a_16);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  if(match_string(t, "-o"))
    {
      t = e_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_16;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  t = term_m_9;
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, f_16);
  t = h_4(g_16, f_16, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_16);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, u_2, v_2, t);
  return(t);
}
ATerm f_4 (ATerm a_51, ATerm b_51, ATerm z_50, ATerm t)
{
  ATerm k_16 = NULL,m_16 = NULL,n_16 = NULL;
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_51, b_51);
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_9 = ATgetArgument(t, 0);
            ATerm u_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_51, b_51);
        t = e_4(a_51, b_51, t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = (ATerm) ATempty;
      }
    m_16 = t;
    t = (ATerm) ATinsert(CheckATermList(m_16), z_50);
    n_16 = t;
    t = SSL_table_put(a_51, b_51, n_16);
    t = k_16;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
      t = term_a_1;
      t = j_0(t);
      y_16 = t;
      t = term_j_9;
      z_16 = t;
      t = term_k_9;
      a_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_9, term_k_9, y_16);
      t = f_4(z_16, a_17, y_16, t);
      _fail(t);
    }
  else
    {
      ATerm e_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_16 = ATgetFirst((ATermList) t);
          v_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_16 = ATgetFirst((ATermList) t);
          x_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_16;
      t = h_0(t);
      t = w_16;
      t = i_0(t);
      e_17 = t;
      t = (ATerm) ATinsert(CheckATermList(x_16), e_17);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm g_17 = NULL;
  g_17 = t;
  if(match_string(t, "-i"))
    {
      t = g_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_17;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  h_17 = t;
  t = term_v_9;
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, h_17);
  t = h_4(i_17, h_17, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_17);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_w_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, x_2, y_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_1;
  t = whoami_0_0(t);
  j_17 = t;
  t = term_i_5;
  l_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_9), j_17);
  m_17 = t;
  t = SSL_printnl(l_17, m_17);
  t = term_m_5;
  k_17 = t;
  t = SSL_exit(k_17);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_9;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_4 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_38, m_38);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      t = SSL_addr(l_38, m_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_17;
      t = a_80(t);
    }
  else
    {
      ATerm t_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_17 = ATgetFirst((ATermList) t);
          q_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_17;
      t = foldr_2_0(a_80, b_80, t);
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_17, t_17);
      t = b_80(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(a_6, c_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_17 = NULL,v_5 = NULL,x_5 = NULL;
  t = times_0_0(t);
  x_5 = t;
  t = SSL_explode_term(x_5);
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5;
  t = foldr_2_0(z_2, d_3, t);
  w_17 = t;
  t = SSL_TicksToSeconds(w_17);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_18;
        if((i_18 != t))
          {
            _fail(t);
          }
        t = h_18;
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
        {
          ATerm e_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_18, j_18);
              ;
              LocalPopChoice(f_10);
            }
          else
            {
              t = e_10;
              t = SSL_gtr(i_18, j_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_18 = NULL;
        t = term_k_8;
        t = get_config_0_0(t);
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_18, term_m_5);
        t = geq_0_0(t);
        t = n_18;
        t = t_87(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = n_18;
      }
  }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL,v_18 = NULL;
  t = run_time_0_0(t);
  r_18 = t;
  t = term_a_1;
  t = whoami_0_0(t);
  s_18 = t;
  t = term_i_5;
  u_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_10), r_18), term_i_10), s_18);
  v_18 = t;
  t = SSL_printnl(u_18, v_18);
  t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_10), r_18), term_i_10), s_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  w_18 = t;
  t = SSL_exit(w_18);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_19;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm u_6 = NULL,s_3 = NULL;
            t = SSLgetAnnotations(f_19);
            u_6 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_19);
            s_3 = t;
            t = SSLsetAnnotations(s_3, u_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_19;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = fetch_1_0(f_3, t);
    }
  t = j_90(t);
  return(t);
}
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm v_19 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
    s_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_19;
      }
    else
      {
        ATerm f_7 = NULL,k_7 = NULL,l_7 = NULL,d_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_19 = ATgetFirst((ATermList) t);
            u_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_19);
        f_7 = t;
        t = t_19;
        t = x_73(t);
        k_7 = t;
        t = u_19;
        t = v_19(t);
        l_7 = t;
        t = (ATerm) ATinsert(CheckATermList(l_7), k_7);
        d_4 = t;
        t = SSLsetAnnotations(d_4, f_7);
      }
    return(t);
  }
  t = v_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_19 = ATgetFirst((ATermList) t);
      z_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_20 = NULL,e_20 = NULL;
        ATerm g_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_20)), not_null(e_20));
          return(t);
        }
        t = not_null(z_19);
        t = g_0(t);
        if(((d_20 != NULL) && (d_20 != t)))
          _fail(t);
        else
          d_20 = t;
        t = not_null(y_19);
        t = e_0(t);
        if(((e_20 != NULL) && (e_20 != t)))
          _fail(t);
        else
          e_20 = t;
        t = not_null(z_19);
        t = reverse_acc_2_0(e_0, g_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_1;
      t = g_0(t);
    }
  return(t);
}
ATerm e_4 (ATerm r_52, ATerm s_52, ATerm t)
{
  t = SSL_table_get(r_52, s_52);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,i_4 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_20);
  i_4 = t;
  t = SSLsetAnnotations(i_4, i_20);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_20), term_n_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = fetch_1_0(k_3, t);
    }
  t = term_q_10;
  t = echo_0_0(t);
  t = term_j_9;
  g_20 = t;
  t = term_k_9;
  h_20 = t;
  t = term_r_10;
  t = e_4(g_20, h_20, t);
  t = reverse_acc_2_0(_id, l_3, t);
  t = map_1_0(m_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_10 = ATgetFirst((ATermList) t);
                ATerm v_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_20;
          }
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATinsert(ATempty, o_20);
      }
    p_20 = t;
    t = term_i_6;
    q_20 = t;
    t = SSL_printnl(q_20, p_20);
    t = o_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_9;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  t = term_w_10;
  u_20 = t;
  t = term_a_1;
  v_20 = t;
  t = term_x_10;
  t = h_4(u_20, v_20, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  t = term_w_10;
  y_20 = t;
  t = term_a_1;
  z_20 = t;
  t = term_x_10;
  t = h_4(y_20, z_20, t);
  t = term_z_10;
  w_20 = t;
  t = term_a_1;
  x_20 = t;
  t = term_a_11;
  t = h_4(w_20, x_20, t);
  t = term_b_11;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, o_3, p_3, t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = e_11;
      t = Option_3_0(q_3, r_3, t_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,l_4 = NULL;
  f_21 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_21 = ATgetFirst((ATermList) t);
      c_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_21);
  a_21 = t;
  t = b_21;
  t = q_60(t);
  d_21 = t;
  t = c_21;
  t = r_60(t);
  e_21 = t;
  t = (ATerm) ATinsert(CheckATermList(e_21), d_21);
  l_4 = t;
  t = SSLsetAnnotations(l_4, a_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_92 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,p_21 = NULL,q_21 = NULL,n_4 = NULL;
  if(((k_21 != NULL) && (k_21 != t)))
    _fail(t);
  else
    k_21 = t;
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_11;
        t = m_92(t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
      }
    t = not_null(k_21);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_21 != NULL) && (m_21 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_21 = ATgetFirst((ATermList) t);
        if(((n_21 != NULL) && (n_21 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          n_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(k_21));
    if(((l_21 != NULL) && (l_21 != t)))
      _fail(t);
    else
      l_21 = t;
    t = term_y_9;
    if(((q_21 != NULL) && (q_21 != t)))
      _fail(t);
    else
      q_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_9, not_null(m_21));
    t = h_4(not_null(q_21), not_null(m_21), t);
    t = not_null(n_21);
    {
      ATerm a_22 (ATerm t)
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_11 = t;
            int p_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_21 = NULL;
                t_21 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_21;
                ;
                LocalPopChoice(p_11);
              }
            else
              {
                t = o_11;
                t = m_92(t);
                t = Cons_2_0(_id, a_22, t);
              }
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm w_21 = NULL,x_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_21 = ATgetFirst((ATermList) t);
                  x_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_21), (ATerm) ATmakeAppl(sym_Undefined_1, w_21));
            }
          }
        return(t);
      }
      t = a_22(t);
      if(((p_21 != NULL) && (p_21 != t)))
        _fail(t);
      else
        p_21 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(p_21)), (ATerm) ATmakeAppl(sym_Program_1, not_null(m_21)));
      if(((n_4 != NULL) && (n_4 != t)))
        _fail(t);
      else
        n_4 = t;
      t = SSLsetAnnotations(not_null(n_4), not_null(l_21));
    }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  if(match_string(t, "--help"))
    {
      t = m_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_22;
        }
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  t = term_m_10;
  n_22 = t;
  t = term_a_1;
  o_22 = t;
  t = term_q_11;
  t = h_4(n_22, o_22, t);
  t = term_r_11;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  if(((h_22 != NULL) && (h_22 != t)))
    _fail(t);
  else
    h_22 = t;
  t = term_j_9;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  t = term_k_9;
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  t = (ATerm) ATempty;
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  t = SSL_table_put(not_null(j_22), not_null(k_22), not_null(l_22));
  t = not_null(h_22);
  {
    ATerm u_3 (ATerm t)
    {
      ATerm w_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_92(t);
          ;
          LocalPopChoice(y_11);
        }
      else
        {
          t = w_11;
          {
            ATerm z_11 = t;
            int a_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_4, k_4, m_4, t);
                ;
                LocalPopChoice(a_12);
              }
            else
              {
                t = z_11;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_3, t);
    {
      ATerm b_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_22 = NULL;
          v_22 = t;
          {
            ATerm d_12 = t;
            int e_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_8 = NULL;
                t = v_22;
                {
                  ATerm f_12 = t;
                  int g_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_10;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_12);
                    }
                  else
                    {
                      t = f_12;
                      t = fetch_1_0(o_4, t);
                    }
                  t = v_22;
                  t = default_system_usage_0_0(t);
                  t = term_p_8;
                  c_8 = t;
                  t = SSL_exit(c_8);
                }
                ;
                LocalPopChoice(e_12);
              }
            else
              {
                t = d_12;
                {
                  ATerm j_8 = NULL;
                  t = term_w_10;
                  t = get_config_0_0(t);
                  t = v_22;
                  t = default_system_about_0_0(t);
                  t = term_p_8;
                  j_8 = t;
                  t = SSL_exit(j_8);
                }
              }
          }
          ;
          LocalPopChoice(c_12);
        }
      else
        {
          t = b_12;
          {
            ATerm h_12 = t;
            int i_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
                ATerm p_4 (ATerm t)
                {
                  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,v_4 = NULL;
                  b_23 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      a_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_23);
                  z_22 = t;
                  t = a_23;
                  if(((f_22 != NULL) && (f_22 != t)))
                    _fail(t);
                  else
                    f_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_23);
                  v_4 = t;
                  t = SSLsetAnnotations(v_4, z_22);
                  return(t);
                }
                t = fetch_1_0(p_4, t);
                t = term_i_5;
                if(((x_22 != NULL) && (x_22 != t)))
                  _fail(t);
                else
                  x_22 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_22)), term_j_12);
                if(((y_22 != NULL) && (y_22 != t)))
                  _fail(t);
                else
                  y_22 = t;
                t = SSL_printnl(not_null(x_22), not_null(y_22));
                t = (ATerm) ATmakeAppl(sym__2, term_i_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_22)), term_j_12));
                t = default_system_usage_0_0(t);
                t = term_m_5;
                if(((w_22 != NULL) && (w_22 != t)))
                  _fail(t);
                else
                  w_22 = t;
                t = SSL_exit(not_null(w_22));
                ;
                LocalPopChoice(i_12);
              }
            else
              {
                t = h_12;
              }
          }
        }
      if(((g_22 != NULL) && (g_22 != t)))
        _fail(t);
      else
        g_22 = t;
      t = term_j_9;
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = SSL_table_destroy(not_null(i_22));
      t = not_null(g_22);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  t = parse_options_1_0(l_90, t);
  g_23 = t;
  t = term_k_12;
  j_23 = t;
  t = SSL_table_create(j_23);
  t = term_k_12;
  h_23 = t;
  t = term_m_12;
  i_23 = t;
  t = SSL_table_put(h_23, i_23, g_23);
  t = g_23;
  t = n_90(t);
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_90, t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_90(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = if_verbose2_1_0(f_5, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  t = term_r_12;
  k_23 = t;
  t = term_a_1;
  l_23 = t;
  t = term_s_12;
  t = h_4(k_23, l_23, t);
  t = term_t_12;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  m_23 = t;
  t = term_y_9;
  t = get_config_0_0(t);
  n_23 = t;
  t = term_i_5;
  o_23 = t;
  t = (ATerm) ATinsert(ATempty, n_23);
  p_23 = t;
  t = SSL_printnl(o_23, p_23);
  t = m_23;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_89(t);
        ;
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm x_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(b_13);
            }
          else
            {
              t = x_12;
              {
                ATerm c_13 = t;
                int d_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(d_13);
                  }
                else
                  {
                    t = c_13;
                    {
                      ATerm f_13 = t;
                      int h_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_5, d_5, e_5, t);
                          ;
                          LocalPopChoice(h_13);
                        }
                      else
                        {
                          t = f_13;
                          {
                            ATerm i_13 = t;
                            int j_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_13);
                              }
                            else
                              {
                                t = i_13;
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
  ATerm b_5 (ATerm t)
  {
    ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
    if(((r_23 != NULL) && (r_23 != t)))
      _fail(t);
    else
      r_23 = t;
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((q_23 != NULL) && (q_23 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_5, t);
          ;
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          t = term_q_13;
          if(((q_23 != NULL) && (q_23 != t)))
            _fail(t);
          else
            q_23 = t;
        }
      t = not_null(q_23);
      t = ReadFromFile_0_0(t);
      if(((s_23 != NULL) && (s_23 != t)))
        _fail(t);
      else
        s_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), not_null(s_23));
      t = apply_strategy_1_0(u_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_4, w_89, t_4, b_5, t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,l_5 = NULL;
  x_23 = t;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_23);
  t_23 = t;
  t = v_23;
  t = catch_annos_0_0(t);
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_23, w_23);
  l_5 = t;
  t = SSLsetAnnotations(l_5, t_23);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_5, _fail, default_usage_0_0, t);
  return(t);
}

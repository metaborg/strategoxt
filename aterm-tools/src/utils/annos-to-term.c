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
ATerm term_d_16;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_y_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_w_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_g_8;
ATerm term_t_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_j_6;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_p_1;
void init_constant_terms (void)
{
  ATprotect(&(term_p_1));
  term_p_1 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_m_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_8);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_p_1);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_v_9);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_p_1);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_p_1);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_p_1);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_p_1);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm catch_annos_0_0 (ATerm);
ATerm _2_0 (ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm);
ATerm w_3 (ATerm l_41, ATerm m_41, ATerm);
ATerm x_3 (ATerm z_44, ATerm a_45, ATerm);
ATerm z_3 (ATerm j_86 (ATerm), ATerm t_405, ATerm d_45, ATerm);
ATerm y_3 (ATerm v_44, ATerm w_44, ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_89 (ATerm), ATerm);
ATerm e_5 (ATerm s_4, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_4 (ATerm b_45, ATerm);
ATerm b_4 (ATerm n_41, ATerm o_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm v_3 (ATerm k_36, ATerm l_36, ATerm);
ATerm debug_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm s_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_87 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_4 (ATerm c_46, ATerm d_46, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_4 (ATerm a_51, ATerm b_51, ATerm z_50, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_4 (ATerm l_38, ATerm m_38, ATerm);
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm need_help_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm e_4 (ATerm r_52, ATerm s_52, ATerm);
ATerm Program_1_0 (ATerm e_66 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_66 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm m_92 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm parse_options_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm iowrap_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_0 = NULL,m_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  k_0 = t;
  t = term_p_1;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_p_5;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_5), m_0), term_q_5);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_s_5;
  q_0 = t;
  t = SSL_exit(q_0);
  t = k_0;
  return(t);
}
ATerm catch_annos_0_0 (ATerm t)
{
  ATerm t_5 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 = NULL;
      r_0 = t;
      t = SSLgetAnnotations(r_0);
      {
        ATerm g_6 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_6;
          }
        t = r_0;
      }
      LocalPopChoice(b_6);
      {
        ATerm a_1 = NULL,g_1 = NULL,h_1 = NULL;
        a_1 = t;
        t = ATremoveAnnotations(a_1);
        t = SRTS_all(catch_annos_0_0, t);
        g_1 = t;
        t = SSLgetAnnotations(a_1);
        h_1 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, g_1, h_1);
      }
    }
  else
    {
      t = t_5;
      t = SRTS_all(catch_annos_0_0, t);
    }
  return(t);
}
ATerm _2_0 (ATerm b_56 (ATerm), ATerm c_56 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL,b_0 = NULL,f_0 = NULL;
  a_2 = t;
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_2);
  t_1 = t;
  t = u_1;
  t = b_56(t);
  x_1 = t;
  t = w_1;
  t = c_56(t);
  y_1 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, y_1);
  b_0 = t;
  t = SSLsetAnnotations(b_0, t_1);
  return(t);
}
ATerm w_3 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm e_2 = NULL;
  t = SSL_fputc(l_41, m_41);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_2);
  return(t);
}
ATerm x_3 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm g_2 = NULL;
  t = SSL_write_term_to_stream_text(z_44, a_45);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_2);
  return(t);
}
ATerm z_3 (ATerm j_86 (ATerm), ATerm t_405, ATerm d_45, ATerm t)
{
  ATerm h_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_405, term_j_6);
  t = open_stream_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_2, d_45);
  t = j_86(t);
  t = fclose_0_0(t);
  t = d_45;
  return(t);
}
ATerm y_3 (ATerm v_44, ATerm w_44, ATerm t)
{
  ATerm i_2 = NULL;
  t = SSL_write_term_to_stream_baf(v_44, w_44);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_2);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = fetch_1_0(d_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm m_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(e_1, m_2, r_2, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if(match_cons(n_6, sym_Stream_1))
        {
          s_2 = ATgetArgument(n_6, 0);
        }
      else
        _fail(t);
      t_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(s_2, t_2, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(i_1, u_2, v_2, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_6 = ATgetArgument(t, 0);
      if(match_cons(o_6, sym_Stream_1))
        {
          x_2 = ATgetArgument(o_6, 0);
        }
      else
        _fail(t);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(x_2, b_3, t);
  w_2 = t;
  t = term_p_6;
  c_3 = t;
  t = w_2;
  if(match_cons(t, sym_Stream_1))
    {
      d_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_6, w_2);
  t = w_3(c_3, d_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  j_2 = t;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm q_6 = t;
      int r_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((k_2 != NULL) && (k_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_2 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_0, t);
          ;
          LocalPopChoice(r_6);
        }
      else
        {
          t = q_6;
          t = term_s_6;
          if(((k_2 != NULL) && (k_2 != t)))
            _fail(t);
          else
            k_2 = t;
        }
      return(t);
    }
    t = _2_0(w_0, _id, t);
    t = j_2;
    {
      ATerm z_0 (ATerm t)
      {
        ATerm l_2 = NULL;
        l_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_2), l_2);
        return(t);
      }
      t = _2_0(_id, z_0, t);
      {
        ATerm t_6 = t;
        int u_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(b_1, c_1, t);
            ;
            LocalPopChoice(u_6);
          }
        else
          {
            t = t_6;
            t = _2_0(_id, f_1, t);
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
  ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL,l_3 = NULL,m_3 = NULL;
  f_3 = t;
  t = dtime_0_0(t);
  t = f_3;
  t = l_89(t);
  h_3 = t;
  t = dtime_0_0(t);
  i_3 = t;
  t = h_3;
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_3), (ATerm) ATmakeAppl(sym_Runtime_1, i_3)), m_3);
  return(t);
}
ATerm e_5 (ATerm s_4, ATerm t)
{
  t = SSL_fclose(s_4);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_5 = ATgetArgument(t, 0);
      {
        ATerm v_6 = t;
        int x_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_5);
            ;
            LocalPopChoice(x_6);
          }
        else
          {
            t = v_6;
            t = e_5(b_5, t);
          }
      }
    }
  else
    {
      t = e_5(b_5, t);
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
  ATerm f_5 = NULL;
  t = SSL_fopen(n_41, o_41);
  f_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_5);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_5 = NULL;
  t = SSL_stdin_stream();
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_5);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  t = SSL_stdout_stream();
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_5);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_5 = NULL;
  t = SSL_stderr_stream();
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_5);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm x_5 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm a_6 = NULL;
  a_6 = t;
  t = SSL_is_string(a_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      ATerm z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_5 = NULL,x_0 = NULL;
        u_5 = t;
        t = SSL_explode_term(u_5);
        if(match_cons(t, sym__2))
          {
            ATerm c_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_7) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_7 = ATgetArgument(t, 1);
              if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
                {
                  x_0 = ATgetFirst((ATermList) d_7);
                  {
                    ATerm e_7 = (ATerm) ATgetNext((ATermList) d_7);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_0;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_0;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_0;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_0;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_5 = NULL,w_5 = NULL;
              t = _2_0(j_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_5 = ATgetArgument(t, 0);
                  w_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_4(v_5, w_5, t);
              ;
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              {
                ATerm y_5 = NULL,z_5 = NULL;
                t = _2_0(k_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_5 = ATgetArgument(t, 0);
                    z_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_4(y_5, z_5, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  ATerm j_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6 = NULL;
      f_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_6, term_n_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = j_7;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  c_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_4(e_6, t);
  d_6 = t;
  t = c_6;
  t = fclose_0_0(t);
  t = d_6;
  return(t);
}
ATerm fetch_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_74, _id, t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = Cons_2_0(_id, h_6, t);
      }
    return(t);
  }
  t = h_6(t);
  return(t);
}
ATerm v_3 (ATerm k_36, ATerm l_36, ATerm t)
{
  t = SSL_strcat(k_36, l_36);
  return(t);
}
ATerm debug_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  i_6 = t;
  t = h_86(t);
  k_6 = t;
  t = term_p_5;
  l_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_6), k_6);
  m_6 = t;
  t = SSL_printnl(l_6, m_6);
  t = i_6;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_6 = NULL;
      w_6 = t;
      t = SSL_is_string(w_6);
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_1, t);
            ;
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            {
              ATerm h_7 = NULL,k_7 = NULL,l_7 = NULL;
              h_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_7 = ATgetArgument(t, 0);
                  t = k_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_7 = ATgetArgument(t, 0);
                      t = k_7;
                      {
                        ATerm z_7 = t;
                        int a_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_8);
                          }
                        else
                          {
                            t = z_7;
                            t = debug_1_0(s_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_7 = NULL,y_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_7 = ATgetArgument(t, 0);
                          l_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_7;
                      t = eval_config_0_0(t);
                      q_7 = t;
                      t = l_7;
                      t = eval_config_0_0(t);
                      y_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_7, y_7);
                      t = v_3(q_7, y_7, t);
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
  ATerm b_8 = NULL,c_8 = NULL;
  b_8 = t;
  t = term_g_8;
  c_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, b_8);
  t = e_4(c_8, b_8, t);
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL,e_8 = NULL;
        t = eval_config_0_0(t);
        d_8 = t;
        t = term_g_8;
        e_8 = t;
        t = SSL_table_put(e_8, b_8, d_8);
        t = d_8;
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm j_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_8 = NULL,k_8 = NULL;
      f_8 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      k_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_8, term_n_8);
      t = geq_0_0(t);
      t = f_8;
      t = u_87(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = j_8;
    }
  return(t);
}
ATerm v_1 (ATerm t)
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
ATerm z_1 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  t = SSL_string_to_int(r_8);
  s_8 = t;
  t = term_o_8;
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, s_8);
  t = h_4(t_8, s_8, t);
  t = r_8;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_1, z_1, b_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  if(match_string(t, "-S"))
    {
      t = y_8;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_8;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  t = term_m_8;
  a_9 = t;
  t = term_u_8;
  b_9 = t;
  t = term_v_8;
  t = h_4(a_9, b_9, t);
  t = term_w_8;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_x_8;
  return(t);
}
ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  t = SSL_string_to_int(c_9);
  d_9 = t;
  t = term_m_8;
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, d_9);
  t = h_4(e_9, d_9, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_9);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_z_8;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm f_9 = NULL,i_9 = NULL;
  t = term_g_9;
  f_9 = t;
  t = term_p_1;
  i_9 = t;
  t = term_h_9;
  t = h_4(f_9, i_9, t);
  t = term_k_9;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_2, d_2, f_2, t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_2, o_2, p_2, t);
            ;
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = Option_3_0(q_2, y_2, z_2, t);
          }
      }
    }
  return(t);
}
ATerm h_4 (ATerm c_46, ATerm d_46, ATerm t)
{
  ATerm j_9 = NULL;
  t = term_g_8;
  j_9 = t;
  t = SSL_table_put(j_9, c_46, d_46);
  t = (ATerm) ATmakeAppl(sym__3, term_g_8, c_46, d_46);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_9 = NULL,t_9 = NULL,w_9 = NULL;
      t = term_p_1;
      t = d_0(t);
      s_9 = t;
      t = term_u_9;
      t_9 = t;
      t = term_v_9;
      w_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_v_9, s_9);
      t = f_4(t_9, w_9, s_9, t);
      _fail(t);
    }
  else
    {
      ATerm z_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_9 = ATgetFirst((ATermList) t);
          r_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_9;
      t = a_0(t);
      t = term_p_1;
      t = c_0(t);
      z_9 = t;
      t = (ATerm) ATinsert(CheckATermList(r_9), z_9);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  if(match_string(t, "-o"))
    {
      t = b_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_10;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm d_10 = NULL,f_10 = NULL;
  d_10 = t;
  t = term_x_9;
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, d_10);
  t = h_4(f_10, d_10, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_10);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, g_3, j_3, t);
  return(t);
}
ATerm f_4 (ATerm a_51, ATerm b_51, ATerm z_50, ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_51, b_51);
  {
    ATerm a_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_10 = ATgetArgument(t, 0);
            ATerm g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_51, b_51);
        t = e_4(a_51, b_51, t);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = a_10;
        t = (ATerm) ATempty;
      }
    k_10 = t;
    t = (ATerm) ATinsert(CheckATermList(k_10), z_50);
    l_10 = t;
    t = SSL_table_put(a_51, b_51, l_10);
    t = j_10;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,y_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
      t = term_p_1;
      t = j_0(t);
      z_10 = t;
      t = term_u_9;
      a_11 = t;
      t = term_v_9;
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_v_9, z_10);
      t = f_4(a_11, b_11, z_10, t);
      _fail(t);
    }
  else
    {
      ATerm g_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_10 = ATgetFirst((ATermList) t);
          u_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_10 = ATgetFirst((ATermList) t);
          y_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_10;
      t = h_0(t);
      t = v_10;
      t = i_0(t);
      g_11 = t;
      t = (ATerm) ATinsert(CheckATermList(y_10), g_11);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  if(match_string(t, "-i"))
    {
      t = i_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_11;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  p_11 = t;
  t = term_h_10;
  q_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, p_11);
  t = h_4(q_11, p_11, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_11);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, o_3, p_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_1;
  t = whoami_0_0(t);
  r_11 = t;
  t = term_p_5;
  s_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_10), r_11);
  t_11 = t;
  t = SSL_printnl(s_11, t_11);
  t = term_s_5;
  v_11 = t;
  t = SSL_exit(v_11);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_4 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_38, m_38);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = SSL_addr(l_38, m_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t)
{
  ATerm q_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_80(t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = q_10;
      {
        ATerm y_11 = NULL,a_12 = NULL,f_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_11 = ATgetFirst((ATermList) t);
            a_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_12;
        t = foldr_2_0(a_80, b_80, t);
        f_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_11, f_12);
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
  t = term_u_8;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      q_1 = ATgetArgument(t, 0);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_4(q_1, r_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_12 = NULL,l_1 = NULL,m_1 = NULL;
  t = times_0_0(t);
  l_1 = t;
  t = SSL_explode_term(l_1);
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  t = foldr_2_0(q_3, r_3, t);
  i_12 = t;
  t = SSL_TicksToSeconds(i_12);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_12 = NULL,d_13 = NULL,g_13 = NULL;
  x_12 = t;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_13;
        if((d_13 != t))
          {
            _fail(t);
          }
        t = x_12;
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATmakeAppl(sym__2, d_13, g_13);
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_13, g_13);
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              t = SSL_gtr(d_13, g_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_13, g_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_13 = NULL,p_13 = NULL;
      l_13 = t;
      t = term_m_8;
      t = get_config_0_0(t);
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_13, term_s_5);
      t = geq_0_0(t);
      t = l_13;
      t = t_87(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm u_13 = NULL,w_13 = NULL,z_13 = NULL,a_14 = NULL;
  t = run_time_0_0(t);
  u_13 = t;
  t = term_p_1;
  t = whoami_0_0(t);
  w_13 = t;
  t = term_p_5;
  z_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_11), u_13), term_h_11), w_13);
  a_14 = t;
  t = SSL_printnl(z_13, a_14);
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_11), u_13), term_h_11), w_13));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_8;
  b_14 = t;
  t = SSL_exit(b_14);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm o_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = o_11;
      t = fetch_1_0(t_3, t);
    }
  t = j_90(t);
  return(t);
}
ATerm map_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm c_14 (ATerm t)
  {
    ATerm x_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = x_11;
        t = Cons_2_0(x_73, c_14, t);
      }
    return(t);
  }
  t = c_14(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_14 = ATgetFirst((ATermList) t);
      f_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_14 = NULL,k_14 = NULL;
        t = f_14;
        t = g_0(t);
        j_14 = t;
        t = e_14;
        t = e_0(t);
        k_14 = t;
        t = f_14;
        {
          ATerm u_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_14), k_14);
            return(t);
          }
          t = reverse_acc_2_0(e_0, u_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_1;
      t = g_0(t);
    }
  return(t);
}
ATerm e_4 (ATerm r_52, ATerm s_52, ATerm t)
{
  t = SSL_table_get(r_52, s_52);
  return(t);
}
ATerm Program_1_0 (ATerm e_66 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,l_0 = NULL,n_0 = NULL;
  o_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_14);
  l_14 = t;
  t = m_14;
  t = e_66(t);
  n_14 = t;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_14);
  l_0 = t;
  t = SSLsetAnnotations(l_0, l_14);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_14), term_b_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_14 = NULL,w_14 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = fetch_1_0(d_4, t);
    }
  t = term_e_12;
  t = echo_0_0(t);
  t = term_u_9;
  t_14 = t;
  t = term_v_9;
  w_14 = t;
  t = term_g_12;
  t = e_4(t_14, w_14, t);
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(i_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_66 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,f_15 = NULL,s_0 = NULL,t_0 = NULL;
  f_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  a_15 = t;
  t = b_15;
  t = f_66(t);
  c_15 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_15);
  s_0 = t;
  t = SSLsetAnnotations(s_0, a_15);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  {
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_12 = ATgetFirst((ATermList) t);
                ATerm l_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_15;
          }
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = h_12;
        t = (ATerm) ATinsert(ATempty, k_15);
      }
    l_15 = t;
    t = term_s_6;
    m_15 = t;
    t = SSL_printnl(m_15, l_15);
    t = k_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  t = term_m_12;
  q_15 = t;
  t = term_p_1;
  r_15 = t;
  t = term_n_12;
  t = h_4(q_15, r_15, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t = term_m_12;
  s_15 = t;
  t = term_p_1;
  t_15 = t;
  t = term_n_12;
  t = h_4(s_15, t_15, t);
  t = term_p_12;
  u_15 = t;
  t = term_p_1;
  v_15 = t;
  t = term_q_12;
  t = h_4(u_15, v_15, t);
  t = term_r_12;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_4, k_4, l_4, t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = Option_3_0(m_4, n_4, o_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_60 (ATerm), ATerm r_60 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,u_0 = NULL,v_0 = NULL;
  b_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_15 = ATgetFirst((ATermList) t);
      y_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  w_15 = t;
  t = x_15;
  t = q_60(t);
  z_15 = t;
  t = y_15;
  t = r_60(t);
  a_16 = t;
  v_0 = t;
  t = (ATerm) ATinsert(CheckATermList(a_16), z_15);
  u_0 = t;
  t = SSLsetAnnotations(u_0, w_15);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  g_16 = t;
  t = term_n_10;
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, g_16);
  t = h_4(h_16, g_16, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, g_16);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_92 (ATerm), ATerm t)
{
  ATerm f_16 = NULL;
  f_16 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_12;
        t = m_92(t);
        ;
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
      }
    t = f_16;
    {
      ATerm q_4 (ATerm t)
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_13);
              }
            else
              {
                t = b_13;
                t = m_92(t);
                t = Cons_2_0(_id, q_4, t);
              }
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm j_16 = NULL,k_16 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_16 = ATgetFirst((ATermList) t);
                  k_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_16), (ATerm) ATmakeAppl(sym_Undefined_1, j_16));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_4, q_4, t);
    }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  if(match_string(t, "--help"))
    {
      t = y_16;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_16;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_16;
        }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  t = term_w_11;
  z_16 = t;
  t = term_p_1;
  a_17 = t;
  t = term_e_13;
  t = h_4(z_16, a_17, t);
  t = term_f_13;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  r_16 = t;
  t = term_u_9;
  u_16 = t;
  t = term_v_9;
  v_16 = t;
  t = (ATerm) ATempty;
  w_16 = t;
  t = SSL_table_put(u_16, v_16, w_16);
  t = r_16;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_92(t);
          ;
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm k_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_4, u_4, v_4, t);
                ;
                LocalPopChoice(m_13);
              }
            else
              {
                t = k_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_4, t);
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_17 = NULL;
          h_17 = t;
          {
            ATerm q_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_3 = NULL;
                t = h_17;
                {
                  ATerm s_13 = t;
                  int t_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_13);
                    }
                  else
                    {
                      t = s_13;
                      t = fetch_1_0(w_4, t);
                    }
                  t = h_17;
                  t = default_system_usage_0_0(t);
                  t = term_u_8;
                  a_3 = t;
                  t = SSL_exit(a_3);
                }
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = q_13;
                {
                  ATerm k_3 = NULL;
                  t = term_m_12;
                  t = get_config_0_0(t);
                  t = h_17;
                  t = default_system_about_0_0(t);
                  t = term_u_8;
                  k_3 = t;
                  t = SSL_exit(k_3);
                }
              }
          }
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          {
            ATerm v_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
                ATerm x_4 (ATerm t)
                {
                  ATerm y_4 (ATerm t)
                  {
                    if(((s_16 != NULL) && (s_16 != t)))
                      _fail(t);
                    else
                      s_16 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_4, t);
                  return(t);
                }
                t = fetch_1_0(x_4, t);
                t = term_p_5;
                i_17 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_16)), term_y_13);
                j_17 = t;
                t = SSL_printnl(i_17, j_17);
                t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_16)), term_y_13));
                t = default_system_usage_0_0(t);
                t = term_s_5;
                k_17 = t;
                t = SSL_exit(k_17);
                ;
                LocalPopChoice(x_13);
              }
            else
              {
                t = v_13;
              }
          }
        }
      t_16 = t;
      t = term_u_9;
      x_16 = t;
      t = SSL_table_destroy(x_16);
      t = t_16;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  t = parse_options_1_0(l_90, t);
  n_17 = t;
  t = term_d_14;
  o_17 = t;
  t = SSL_table_create(o_17);
  t = term_d_14;
  p_17 = t;
  t = term_g_14;
  q_17 = t;
  t = SSL_table_put(p_17, q_17, n_17);
  t = n_17;
  t = n_90(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_90, t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_90(t);
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
ATerm c_5 (ATerm t)
{
  t = if_verbose2_1_0(m_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  t = term_r_14;
  r_17 = t;
  t = term_p_1;
  s_17 = t;
  t = term_s_14;
  t = h_4(r_17, s_17, t);
  t = term_u_14;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
  t_17 = t;
  t = term_n_10;
  t = get_config_0_0(t);
  u_17 = t;
  t = term_p_5;
  v_17 = t;
  t = (ATerm) ATinsert(ATempty, u_17);
  w_17 = t;
  t = SSL_printnl(v_17, w_17);
  t = t_17;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_89 (ATerm), ATerm v_89 (ATerm), ATerm w_89 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_89(t);
        ;
        LocalPopChoice(z_14);
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
                ATerm g_15 = t;
                int h_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(h_15);
                  }
                else
                  {
                    t = g_15;
                    {
                      ATerm i_15 = t;
                      int j_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(g_5, j_5, l_5, t);
                          ;
                          LocalPopChoice(j_15);
                        }
                      else
                        {
                          t = i_15;
                          {
                            ATerm n_15 = t;
                            int o_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(o_15);
                              }
                            else
                              {
                                t = n_15;
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
  ATerm d_5 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
    x_17 = t;
    {
      ATerm p_15 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_17 != NULL) && (y_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_5, t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = p_15;
          t = term_d_16;
          y_17 = t;
        }
      t = not_null(y_17);
      t = ReadFromFile_0_0(t);
      z_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, z_17);
      t = apply_strategy_1_0(u_89, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_4, w_89, c_5, d_5, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = _2_0(_id, catch_annos_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(o_5, _fail, default_usage_0_0, t);
  return(t);
}

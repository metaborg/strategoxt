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
Symbol sym_GraphXML_2;
Symbol sym_graph_2;
Symbol sym_node_2;
Symbol sym_name_1;
Symbol sym_edge1_1;
Symbol sym_name_1;
Symbol sym_source_1;
Symbol sym_target_1;
Symbol sym_label_2;
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
  sym_GraphXML_2 = ATmakeSymbol("GraphXML", 2, ATfalse);
  ATprotectSymbol(sym_GraphXML_2);
  sym_graph_2 = ATmakeSymbol("graph", 2, ATfalse);
  ATprotectSymbol(sym_graph_2);
  sym_node_2 = ATmakeSymbol("node", 2, ATfalse);
  ATprotectSymbol(sym_node_2);
  sym_name_1 = ATmakeSymbol("name", 1, ATfalse);
  ATprotectSymbol(sym_name_1);
  sym_edge1_1 = ATmakeSymbol("edge1", 1, ATfalse);
  ATprotectSymbol(sym_edge1_1);
  sym_name_1 = ATmakeSymbol("name", 1, ATfalse);
  ATprotectSymbol(sym_name_1);
  sym_source_1 = ATmakeSymbol("source", 1, ATfalse);
  ATprotectSymbol(sym_source_1);
  sym_target_1 = ATmakeSymbol("target", 1, ATfalse);
  ATprotectSymbol(sym_target_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
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
ATerm term_v_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_z_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_e_12;
ATerm term_b_11;
ATerm term_p_10;
ATerm term_h_10;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_k_2;
void init_constant_terms (void)
{
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__3, term_t_17, term_u_17, term_k_2);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm BuildNode_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm BuildEdge_0_0 (ATerm);
ATerm MkEdges_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm);
ATerm TreeViz_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm NewNodeName_0_0 (ATerm);
ATerm Treeviz_0_0 (ATerm);
ATerm _2_0 (ATerm d_60 (ATerm), ATerm e_60 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm r_93 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm t_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm u_6 (ATerm l_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm h_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm s_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm k_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_95 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm need_help_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm f_73 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm h_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm g_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_99 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm parse_options_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm iowrap_3_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_k_2;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm BuildNode_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,f_0 = NULL,i_0 = NULL,u_0 = NULL,w_0 = NULL,z_0 = NULL,d_1 = NULL,f_1 = NULL,j_1 = NULL,k_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      n_0 = ATgetArgument(t, 0);
      o_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_0;
  {
    ATerm z_3 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_0 = NULL;
        t = SSL_is_int(n_0);
        r_0 = t;
        t = SSL_int_to_string(r_0);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = z_3;
        {
          ATerm s_7 = t;
          int t_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_7;
              ;
              LocalPopChoice(t_7);
            }
          else
            {
              t = s_7;
            }
        }
      }
    f_0 = t;
    t = SSL_explode_string(f_0);
    t = escape_chars_0_0(t);
    i_0 = t;
    t = SSL_implode_string(i_0);
    u_0 = t;
    t = SSL_explode_string(u_0);
    z_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_7, z_0);
    t = quote_chars_0_0(t);
    w_0 = t;
    t = SSL_implode_string(w_0);
    p_0 = t;
    t = o_0;
    {
      ATerm x_7 = t;
      int y_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_0 = NULL;
          t = SSL_is_int(o_0);
          t_0 = t;
          t = SSL_int_to_string(t_0);
          ;
          LocalPopChoice(y_7);
        }
      else
        {
          t = x_7;
          {
            ATerm b_8 = t;
            int c_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_u_7;
                ;
                LocalPopChoice(c_8);
              }
            else
              {
                t = b_8;
              }
          }
        }
      d_1 = t;
      t = SSL_explode_string(d_1);
      t = escape_chars_0_0(t);
      f_1 = t;
      t = SSL_implode_string(f_1);
      j_1 = t;
      t = SSL_explode_string(j_1);
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, m_1);
      t = quote_chars_0_0(t);
      k_1 = t;
      t = SSL_implode_string(k_1);
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym_node_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_name_1, p_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_label_2, (ATerm)ATempty, q_0)));
    }
  }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm y_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      y_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_1), y_0), (ATerm) ATinsert(ATempty, y_0));
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_8 = ATgetArgument(t, 0);
            ATerm g_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(a_1), y_0);
        {
          ATerm m_0 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, y_0);
            return(t);
          }
          t = at_end_1_0(m_0, t);
        }
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        {
          ATerm q_1 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_1), y_0), (ATerm) ATinsert(ATempty, y_0)));
          if(match_cons(t, sym__2))
            {
              ATerm h_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_1;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm j_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm t_8 = ATgetFirst((ATermList) t);
              if(((ATgetType(t_8) != AT_INT) || (ATgetInt((ATermInt) t_8) != 34)))
                _fail(t);
              w_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_1), term_v_7), term_u_8);
          ;
          LocalPopChoice(s_8);
        }
      else
        {
          t = p_8;
          {
            ATerm c_2 = NULL,g_2 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_2 = ATgetFirst((ATermList) t);
                g_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_2;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(g_2), term_u_8), term_u_8);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(g_2), term_v_8), term_u_8);
              }
          }
        }
      t = Cons_2_0(_id, s_0, t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = j_8;
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm BuildEdge_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,v_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,e_2 = NULL,f_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_2;
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL;
        t = SSL_is_int(m_2);
        r_2 = t;
        t = SSL_int_to_string(r_2);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        {
          ATerm c_9 = t;
          int d_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_7;
              ;
              LocalPopChoice(d_9);
            }
          else
            {
              t = c_9;
            }
        }
      }
    r_1 = t;
    t = SSL_explode_string(r_1);
    t = escape_chars_0_0(t);
    s_1 = t;
    t = SSL_implode_string(s_1);
    u_1 = t;
    t = SSL_explode_string(u_1);
    z_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_7, z_1);
    t = quote_chars_0_0(t);
    v_1 = t;
    t = SSL_implode_string(v_1);
    o_2 = t;
    t = n_2;
    {
      ATerm f_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 = NULL;
          t = SSL_is_int(n_2);
          u_2 = t;
          t = SSL_int_to_string(u_2);
          ;
          LocalPopChoice(j_9);
        }
      else
        {
          t = f_9;
          {
            ATerm k_9 = t;
            int l_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_u_7;
                ;
                LocalPopChoice(l_9);
              }
            else
              {
                t = k_9;
              }
          }
        }
      a_2 = t;
      t = SSL_explode_string(a_2);
      t = escape_chars_0_0(t);
      b_2 = t;
      t = SSL_implode_string(b_2);
      e_2 = t;
      t = SSL_explode_string(e_2);
      l_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_7, l_2);
      t = quote_chars_0_0(t);
      f_2 = t;
      t = SSL_implode_string(f_2);
      q_2 = t;
      t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, q_2)), (ATerm) ATmakeAppl(sym_source_1, o_2)));
    }
  }
  return(t);
}
ATerm MkEdges_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,h_3 = NULL;
  x_2 = t;
  t = SSL_explode_term(x_2);
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_2;
  {
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL;
        t = SSL_is_int(y_2);
        j_3 = t;
        t = SSL_int_to_string(j_3);
        ;
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_7;
              ;
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
            }
        }
      }
    t = NewNodeName_0_0(t);
    a_3 = t;
    t = term_k_2;
    t = m_73(t);
    b_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_3, b_3);
    t = BuildEdge_0_0(t);
    c_3 = t;
    t = (ATerm) ATmakeAppl(sym__3, a_3, y_2, z_2);
    t = n_73(t);
    h_3 = t;
    t = (ATerm) ATinsert(CheckATermList(h_3), c_3);
  }
  return(t);
}
ATerm TreeViz_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__3))
    {
      v_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
      y_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm t_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(w_9);
        }
      else
        {
          t = t_9;
          t = y_3;
          {
            ATerm v_0 (ATerm t)
            {
              ATerm x_0 (ATerm t)
              {
                t = v_3;
                return(t);
              }
              t = MkEdges_2_0(x_0, TreeViz_0_0, t);
              return(t);
            }
            t = map_1_0(v_0, t);
            t = concat_0_0(t);
          }
        }
    }
  else
    {
      t = y_3;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = v_3;
            return(t);
          }
          t = MkEdges_2_0(c_1, TreeViz_0_0, t);
          return(t);
        }
        t = map_1_0(b_1, t);
        t = concat_0_0(t);
      }
    }
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, w_3);
  t = BuildNode_0_0(t);
  t_3 = t;
  t = (ATerm) ATinsert(CheckATermList(s_3), t_3);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm d_4 = NULL;
  d_4 = t;
  t = SSL_explode_string(d_4);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm c_4 = NULL;
  t = map_1_0(e_1, t);
  t = concat_0_0(t);
  c_4 = t;
  t = SSL_implode_string(c_4);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm y_9 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
        _fail(t);
      t = term_h_10;
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = y_9;
    }
  return(t);
}
ATerm NewNodeName_0_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  o_4 = t;
  t = term_k_2;
  t = new_0_0(t);
  p_4 = t;
  t = SSL_explode_string(o_4);
  t = map_1_0(g_1, t);
  r_4 = t;
  t = SSL_implode_string(r_4);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), p_4);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm Treeviz_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL;
  t_4 = t;
  t = SSL_explode_term(t_4);
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4;
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_5 = NULL;
        t = SSL_is_int(u_4);
        a_5 = t;
        t = SSL_int_to_string(a_5);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        {
          ATerm k_10 = t;
          int o_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_7;
              ;
              LocalPopChoice(o_10);
            }
          else
            {
              t = k_10;
            }
        }
      }
    t = NewNodeName_0_0(t);
    x_4 = t;
    t = (ATerm) ATmakeAppl(sym__3, x_4, u_4, w_4);
    t = TreeViz_0_0(t);
    z_4 = t;
    t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, z_4)));
  }
  return(t);
}
ATerm _2_0 (ATerm d_60 (ATerm), ATerm e_60 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_5);
  b_5 = t;
  t = c_5;
  t = d_60(t);
  e_5 = t;
  t = d_5;
  t = e_60(t);
  f_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, e_5, f_5), b_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_5, term_p_10);
  t = open_stream_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, l_5);
  t = r_93(t);
  t = fclose_0_0(t);
  t = l_5;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = fetch_1_0(p_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = WriteToFile_1_0(t_1, t);
  return(t);
}
ATerm p_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      if(match_cons(r_10, sym_Stream_1))
        {
          q_5 = ATgetArgument(r_10, 0);
        }
      else
        _fail(t);
      r_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(q_5, r_5);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_5);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = WriteToFile_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      if(match_cons(s_10, sym_Stream_1))
        {
          t_5 = ATgetArgument(s_10, 0);
        }
      else
        _fail(t);
      u_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(t_5, u_5);
  v_5 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), v_5);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_5);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  o_5 = t;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm v_10 = t;
      int w_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((p_5 != NULL) && (p_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_1, t);
          ;
          LocalPopChoice(w_10);
        }
      else
        {
          t = v_10;
          t = term_b_11;
          if(((p_5 != NULL) && (p_5 != t)))
            _fail(t);
          else
            p_5 = t;
        }
      return(t);
    }
    t = _2_0(h_1, _id, t);
    t = o_5;
    {
      ATerm l_1 (ATerm t)
      {
        ATerm p_2 = NULL;
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_5), p_2);
        return(t);
      }
      t = _2_0(_id, l_1, t);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(n_1, o_1, t);
            ;
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = _2_0(_id, x_1, t);
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
ATerm apply_strategy_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
  x_5 = t;
  t = dtime_0_0(t);
  t = x_5;
  t = t_96(t);
  y_5 = t;
  t = dtime_0_0(t);
  z_5 = t;
  t = y_5;
  if(match_cons(t, sym__2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_6), (ATerm) ATmakeAppl(sym_Runtime_1, z_5)), b_6);
  return(t);
}
ATerm u_6 (ATerm l_6, ATerm t)
{
  t = SSL_fclose(l_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_6 = ATgetArgument(t, 0);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_6);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            t = u_6(s_6, t);
          }
      }
    }
  else
    {
      t = u_6(s_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_6 = NULL;
  t = SSL_stdin_stream();
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  t = SSL_stdout_stream();
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_stderr_stream();
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_6);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm h_7 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_7;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm l_7 = NULL;
  l_7 = t;
  t = SSL_is_string(l_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      ATerm h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL,a_4 = NULL;
        x_3 = t;
        t = SSL_explode_term(x_3);
        if(match_cons(t, sym__2))
          {
            ATerm p_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_11 = ATgetArgument(t, 1);
              if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
                {
                  a_4 = ATgetFirst((ATermList) q_11);
                  {
                    ATerm r_11 = (ATerm) ATgetNext((ATermList) q_11);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = a_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = a_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = a_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL;
              t = _2_0(d_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  d_7 = ATgetArgument(t, 0);
                  f_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(d_7, f_7);
              g_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, g_7);
              ;
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              {
                ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL;
                t = _2_0(h_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_7 = ATgetArgument(t, 0);
                    j_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(i_7, j_7);
                k_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, k_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL;
      p_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_7, term_e_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm b_4 = NULL;
        b_4 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_4), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = b_4;
        _fail(t);
      }
    }
  m_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(o_7);
  n_7 = t;
  t = m_7;
  t = fclose_0_0(t);
  t = n_7;
  return(t);
}
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    ATerm f_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(m_81, _id, t);
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = f_12;
        t = Cons_2_0(_id, w_7, t);
      }
    return(t);
  }
  t = w_7(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm z_7 = NULL,a_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_7 = ATgetFirst((ATermList) t);
            a_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_7;
        {
          ATerm i_2 (ATerm t)
          {
            t = a_8;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm k_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, i_8, t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = k_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_81(t);
      }
    return(t);
  }
  t = i_8(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  t = SSL_explode_string(m_8);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm n_8 = NULL;
  n_8 = t;
  t = SSL_explode_string(n_8);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = _2_0(j_2, s_2, t);
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,r_8 = NULL;
        if(match_cons(t, sym__2))
          {
            q_8 = ATgetArgument(t, 0);
            r_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_8;
        {
          ATerm t_2 (ATerm t)
          {
            t = r_8;
            return(t);
          }
          t = at_end_1_0(t_2, t);
        }
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        {
          ATerm i_4 = NULL,j_4 = NULL;
          i_4 = t;
          t = SSL_explode_term(i_4);
          if(match_cons(t, sym__2))
            {
              ATerm p_12 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_12) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              j_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_4;
          t = concat_0_0(t);
        }
      }
    l_8 = t;
    t = SSL_implode_string(l_8);
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL;
      b_9 = t;
      t = SSL_is_string(b_9);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm w_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_2, t);
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = w_12;
            {
              ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
              g_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_9 = ATgetArgument(t, 0);
                  t = h_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_9 = ATgetArgument(t, 0);
                      t = h_9;
                      {
                        ATerm a_13 = t;
                        int b_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_9);
                            {
                              ATerm d_13 = t;
                              int f_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_7 = NULL;
                                  t = eval_config_0_0(t);
                                  e_7 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), h_9, e_7);
                                  t = e_7;
                                  ;
                                  LocalPopChoice(f_13);
                                }
                              else
                                {
                                  t = d_13;
                                }
                            }
                            ;
                            LocalPopChoice(b_13);
                          }
                        else
                          {
                            t = a_13;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_9), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = h_9;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_9 = NULL,n_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_9 = ATgetArgument(t, 0);
                          i_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_9;
                      t = eval_config_0_0(t);
                      m_9 = t;
                      t = i_9;
                      t = eval_config_0_0(t);
                      n_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_9, n_9);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm g_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_9 = NULL,u_9 = NULL;
      s_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            t = eval_config_0_0(t);
            k_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_8);
            t = k_8;
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
          }
        u_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_p_13);
        t = geq_0_0(t);
        t = s_9;
        t = c_95(t);
      }
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = g_13;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm x_9 = NULL;
  x_9 = t;
  if(match_string(t, "-k"))
    {
      t = x_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_9;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL;
  z_9 = t;
  t = SSL_string_to_int(z_9);
  a_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_10);
  t = z_9;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, d_3, e_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  if(match_string(t, "-S"))
    {
      t = c_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_10;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_x_13;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  f_10 = t;
  t = SSL_string_to_int(f_10);
  g_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_10);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_10);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_14;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_3, g_3, i_3, t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = e_14;
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_3, l_3, m_3, t);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = Option_3_0(n_3, o_3, p_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_10 = NULL;
      t = term_k_2;
      t = d_0(t);
      n_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_14, term_r_14, n_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_10 = ATgetFirst((ATermList) t);
          m_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_10;
      t = a_0(t);
      t = term_k_2;
      t = b_0(t);
      q_10 = t;
      t = (ATerm) ATinsert(CheckATermList(m_10), q_10);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  if(match_string(t, "-o"))
    {
      t = t_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_10;
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm u_10 = NULL;
  u_10 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_10);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_10);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, u_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__3))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
      z_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_10, y_10);
  {
    ATerm t_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_15 = ATgetArgument(t, 0);
            ATerm c_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_10, y_10);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = t_14;
        t = (ATerm) ATempty;
      }
    a_11 = t;
    t = SSL_table_put(x_10, y_10, (ATerm) ATinsert(CheckATermList(a_11), z_10));
    t = (ATerm) ATmakeAppl(sym__3, x_10, y_10, z_10);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_11 = NULL;
      t = term_k_2;
      t = l_0(t);
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_14, term_r_14, o_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_11 = ATgetFirst((ATermList) t);
          l_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_11 = ATgetFirst((ATermList) t);
          n_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_11;
      t = j_0(t);
      t = m_11;
      t = k_0(t);
      s_11 = t;
      t = (ATerm) ATinsert(CheckATermList(n_11), s_11);
    }
  return(t);
}
ATerm e_4 (ATerm t)
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
ATerm f_4 (ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_11);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_11);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, g_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_2;
  t = whoami_0_0(t);
  w_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 = NULL;
        t = eval_config_0_0(t);
        y_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_8);
        t = y_8;
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm d_87 (ATerm), ATerm e_87 (ATerm), ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_87(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
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
        t = foldr_2_0(d_87, e_87, t);
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_11, d_12);
        t = e_87(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(b_10, d_10);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = SSL_addr(b_10, d_10);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_12 = NULL,e_9 = NULL,v_9 = NULL;
  t = times_0_0(t);
  e_9 = t;
  t = SSL_explode_term(e_9);
  if(match_cons(t, sym__2))
    {
      ATerm s_15 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9;
  t = foldr_2_0(h_4, k_4, t);
  g_12 = t;
  t = SSL_TicksToSeconds(g_12);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,z_12 = NULL;
  u_12 = t;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_12;
        if((v_12 != t))
          {
            _fail(t);
          }
        t = u_12;
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        t = u_12;
        {
          ATerm v_15 = t;
          int x_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_12, z_12);
              ;
              LocalPopChoice(x_15);
            }
          else
            {
              t = v_15;
              t = SSL_gtr(v_12, z_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_12, z_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm y_15 = t;
  int e_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL,e_13 = NULL;
      c_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_11 = NULL;
            t = eval_config_0_0(t);
            t_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_11);
            t = t_11;
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = f_16;
          }
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, term_i_16);
        t = geq_0_0(t);
        t = c_13;
        t = b_95(t);
      }
      ;
      LocalPopChoice(e_16);
    }
  else
    {
      t = y_15;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  t = run_time_0_0(t);
  h_13 = t;
  t = term_k_2;
  t = whoami_0_0(t);
  i_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_13), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_13));
  t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_16), h_13), term_k_16), i_13));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm m_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = m_16;
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_12 = NULL;
            t = eval_config_0_0(t);
            l_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), l_12);
            t = l_12;
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
          }
      }
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = fetch_1_0(m_4, t);
    }
  t = r_97(t);
  return(t);
}
ATerm map_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = Cons_2_0(b_81, j_13, t);
      }
    return(t);
  }
  t = j_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_13 = ATgetFirst((ATermList) t);
      m_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_13 = NULL,r_13 = NULL;
        t = m_13;
        t = h_0(t);
        q_13 = t;
        t = l_13;
        t = g_0(t);
        r_13 = t;
        t = m_13;
        {
          ATerm n_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_13), r_13);
            return(t);
          }
          t = reverse_acc_2_0(g_0, n_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_2;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm f_73 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,y_13 = NULL,z_13 = NULL;
  z_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_13);
  v_13 = t;
  t = w_13;
  t = f_73(t);
  y_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_13), v_13);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_14), term_z_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_14 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm c_17 = t;
        int d_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 = NULL;
            t = eval_config_0_0(t);
            x_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_12);
            t = x_12;
            ;
            LocalPopChoice(d_17);
          }
        else
          {
            t = c_17;
          }
        f_14 = t;
      }
      ;
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm v_4 (ATerm t)
          {
            if(((f_14 != NULL) && (f_14 != t)))
              _fail(t);
            else
              f_14 = t;
            return(t);
          }
          t = Program_1_0(v_4, t);
          return(t);
        }
        t = fetch_1_0(s_4, t);
      }
    }
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_17), not_null(f_14)), term_g_17);
        t = echo_0_0(t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
      }
    t = term_i_17;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_acc_2_0(_id, y_4, t);
    t = map_1_0(h_5, t);
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_m_17), term_l_17);
          t = echo_0_0(t);
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm g_73 (ATerm), ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_14);
  i_14 = t;
  t = j_14;
  t = g_73(t);
  k_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_14), i_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  p_14 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_17 = ATgetFirst((ATermList) t);
                ATerm q_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_14;
          }
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = (ATerm) ATinsert(ATempty, p_14);
      }
    q_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), q_14);
    t = p_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL;
        t = eval_config_0_0(t);
        s_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_13);
        t = s_13;
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_17;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_17;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_5, k_5, n_5, t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      t = Option_3_0(c_6, d_6, e_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_64 (ATerm), ATerm t_64 (ATerm), ATerm t)
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
  t = s_64(t);
  x_14 = t;
  t = w_14;
  t = t_64(t);
  y_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(y_14), x_14), u_14);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm e_15 = NULL;
  e_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_15);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_99 (ATerm), ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_18;
        t = u_99(t);
        ;
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
      }
    t = d_15;
    {
      ATerm g_6 (ATerm t)
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_18 = t;
            int h_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_18);
              }
            else
              {
                t = g_18;
                t = u_99(t);
                t = Cons_2_0(_id, g_6, t);
              }
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            {
              ATerm g_15 = NULL,h_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_15 = ATgetFirst((ATermList) t);
                  h_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_15), (ATerm) ATmakeAppl(sym_Undefined_1, g_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_6, g_6, t);
    }
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm r_15 = NULL;
  r_15 = t;
  if(match_string(t, "--help"))
    {
      t = r_15;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_15;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_15;
        }
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_18;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_15;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm k_18 = t;
      int l_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_99(t);
          ;
          LocalPopChoice(l_18);
        }
      else
        {
          t = k_18;
          {
            ATerm m_18 = t;
            int n_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_6, j_6, k_6, t);
                ;
                LocalPopChoice(n_18);
              }
            else
              {
                t = m_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_6, t);
    {
      ATerm o_18 = t;
      int p_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_15 = NULL;
          w_15 = t;
          {
            ATerm q_18 = t;
            int r_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_15;
                {
                  ATerm s_18 = t;
                  int t_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm u_18 = t;
                        int v_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_16 = NULL;
                            t = eval_config_0_0(t);
                            g_16 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), g_16);
                            t = g_16;
                            ;
                            LocalPopChoice(v_18);
                          }
                        else
                          {
                            t = u_18;
                          }
                      }
                      ;
                      LocalPopChoice(t_18);
                    }
                  else
                    {
                      t = s_18;
                      t = fetch_1_0(m_6, t);
                    }
                  t = w_15;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(r_18);
              }
            else
              {
                t = q_18;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm w_18 = t;
                  int x_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_16 = NULL;
                      t = eval_config_0_0(t);
                      n_16 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), n_16);
                      t = n_16;
                      ;
                      LocalPopChoice(x_18);
                    }
                  else
                    {
                      t = w_18;
                    }
                  t = w_15;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(p_18);
        }
      else
        {
          t = o_18;
          {
            ATerm y_18 = t;
            int z_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_6 (ATerm t)
                {
                  ATerm o_6 (ATerm t)
                  {
                    if(((p_15 != NULL) && (p_15 != t)))
                      _fail(t);
                    else
                      p_15 = t;
                    return(t);
                  }
                  t = Undefined_1_0(o_6, t);
                  return(t);
                }
                t = fetch_1_0(n_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_j_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_15)), term_a_19));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(z_18);
              }
            else
              {
                t = y_18;
              }
          }
        }
      q_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm z_15 = NULL;
  t = parse_options_1_0(t_97, t);
  z_15 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_15);
  t = z_15;
  t = v_97(t);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_97, t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = if_verbose2_1_0(b_7, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_f_19;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  a_16 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_16 = NULL;
        t = eval_config_0_0(t);
        r_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_16);
        t = r_16;
        ;
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
      }
    b_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_16));
    t = a_16;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm c_97 (ATerm), ATerm d_97 (ATerm), ATerm e_97 (ATerm), ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        ;
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              {
                ATerm n_19 = t;
                int o_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(o_19);
                  }
                else
                  {
                    t = n_19;
                    {
                      ATerm p_19 = t;
                      int q_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_6, z_6, a_7, t);
                          ;
                          LocalPopChoice(q_19);
                        }
                      else
                        {
                          t = p_19;
                          {
                            ATerm r_19 = t;
                            int s_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(s_19);
                              }
                            else
                              {
                                t = r_19;
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
  ATerm t_6 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL,u_16 = NULL;
    c_16 = t;
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_16 != NULL) && (d_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_7, t);
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          t = term_v_19;
          d_16 = t;
        }
      t = not_null(d_16);
      t = ReadFromFile_0_0(t);
      u_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_16, u_16);
      t = apply_strategy_1_0(c_97, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(p_6, e_97, q_6, t_6, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = _2_0(_id, Treeviz_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_7, _fail, default_usage_0_0, t);
  return(t);
}

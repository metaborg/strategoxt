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
ATerm term_u_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_p_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_c_12;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_l_10;
ATerm term_f_10;
ATerm term_s_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_e_6;
ATerm term_a_6;
ATerm term_v_5;
ATerm term_f_5;
ATerm term_k_3;
ATerm term_d_2;
void init_constant_terms (void)
{
  ATprotect(&(term_d_2));
  term_d_2 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_9);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__3, term_l_15, term_m_15, term_v_5);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm BuildNode_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm escape_0_0 (ATerm);
ATerm BuildEdge_0_0 (ATerm);
ATerm MkEdges_2_0 (ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm);
ATerm TreeViz_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm NewNodeName_0_0 (ATerm);
ATerm NodeName_0_0 (ATerm);
ATerm Treeviz_0_0 (ATerm);
ATerm _2_0 (ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm z_74 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm);
ATerm crush_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm v_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_74 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_66 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_66 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm t_74 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm v_91 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm y_66 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm a_93 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_58 (ATerm), ATerm b_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm y_92 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm treeviz_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm BuildNode_0_0 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL,w_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_0;
  t = NodeName_0_0(t);
  t = escape_0_0(t);
  t = double_quote_0_0(t);
  w_0 = t;
  t = u_0;
  t = NodeName_0_0(t);
  t = escape_0_0(t);
  t = double_quote_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_node_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_name_1, w_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_label_2, (ATerm)ATempty, y_0)));
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      a_1 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_0), a_1), (ATerm) ATinsert(ATempty, a_1));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm c_1 = NULL;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_2, c_1);
  t = quote_chars_0_0(t);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_1 = ATgetFirst((ATermList) t);
      q_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_1;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(q_1), term_d_2), term_k_3);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_1), term_k_3), term_k_3);
        }
      else
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(q_1), term_f_5), term_k_3);
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm h_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm c_0 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, c_0, t);
      }
      ;
      LocalPopChoice(j_5);
    }
  else
    {
      t = h_5;
      {
        ATerm l_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(u_5);
          }
        else
          {
            t = l_5;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm string_as_chars_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL;
  f_2 = t;
  t = SSL_explode_string(f_2);
  t = w_83(t);
  g_2 = t;
  t = SSL_implode_string(g_2);
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(escape_chars_0_0, t);
  return(t);
}
ATerm BuildEdge_0_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      h_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_2;
  t = NodeName_0_0(t);
  t = escape_0_0(t);
  t = double_quote_0_0(t);
  k_2 = t;
  t = j_2;
  t = NodeName_0_0(t);
  t = escape_0_0(t);
  t = double_quote_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, l_2)), (ATerm) ATmakeAppl(sym_source_1, k_2)));
  return(t);
}
ATerm MkEdges_2_0 (ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL;
  m_2 = t;
  t = SSL_explode_term(m_2);
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_2;
  t = NodeName_0_0(t);
  t = NewNodeName_0_0(t);
  q_2 = t;
  t = term_v_5;
  t = u_66(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, r_2);
  t = BuildEdge_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_2, n_2, p_2);
  t = v_66(t);
  t_2 = t;
  t = (ATerm) ATinsert(CheckATermList(t_2), s_2);
  return(t);
}
ATerm TreeViz_0_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
  if(match_cons(t, sym__3))
    {
      h_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      j_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm w_5 = t;
      int z_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(z_5);
        }
      else
        {
          t = w_5;
          t = j_3;
          {
            ATerm i_0 (ATerm t)
            {
              ATerm m_0 (ATerm t)
              {
                t = h_3;
                return(t);
              }
              t = MkEdges_2_0(m_0, TreeViz_0_0, t);
              return(t);
            }
            t = map_1_0(i_0, t);
            t = concat_0_0(t);
          }
        }
    }
  else
    {
      t = j_3;
      {
        ATerm n_0 (ATerm t)
        {
          ATerm o_0 (ATerm t)
          {
            t = h_3;
            return(t);
          }
          t = MkEdges_2_0(o_0, TreeViz_0_0, t);
          return(t);
        }
        t = map_1_0(n_0, t);
        t = concat_0_0(t);
      }
    }
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, i_3);
  t = BuildNode_0_0(t);
  d_3 = t;
  t = (ATerm) ATinsert(CheckATermList(c_3), d_3);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm l_3 = NULL;
  ATerm p_0 (ATerm t)
  {
    ATerm m_3 = NULL;
    m_3 = t;
    t = SSL_explode_string(m_3);
    return(t);
  }
  t = map_1_0(p_0, t);
  t = concat_0_0(t);
  l_3 = t;
  t = SSL_implode_string(l_3);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm NewNodeName_0_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,r_3 = NULL,s_3 = NULL;
  n_3 = t;
  t = term_v_5;
  t = new_0_0(t);
  o_3 = t;
  t = SSL_explode_string(n_3);
  {
    ATerm q_0 (ATerm t)
    {
      ATerm r_0 (ATerm t)
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
          _fail(t);
        t = term_a_6;
        return(t);
      }
      t = try_1_0(r_0, t);
      return(t);
    }
    t = map_1_0(q_0, t);
    s_3 = t;
    t = SSL_implode_string(s_3);
    r_3 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, r_3), o_3);
    t = concat_strings_0_0(t);
  }
  return(t);
}
ATerm NodeName_0_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL,e_0 = NULL;
        b_5 = t;
        t = SSL_is_int(b_5);
        e_0 = t;
        t = SSL_int_to_string(e_0);
        ;
        LocalPopChoice(d_6);
      }
    else
      {
        t = c_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = term_e_6;
      }
    return(t);
  }
  t = try_1_0(s_0, t);
  return(t);
}
ATerm Treeviz_0_0 (ATerm t)
{
  ATerm g_5 = NULL,i_5 = NULL,k_5 = NULL,m_5 = NULL,n_5 = NULL;
  g_5 = t;
  t = SSL_explode_term(g_5);
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5;
  t = NodeName_0_0(t);
  t = NewNodeName_0_0(t);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_5, i_5, k_5);
  t = TreeViz_0_0(t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, n_5)));
  return(t);
}
ATerm _2_0 (ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
  t_5 = t;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_5);
  o_5 = t;
  t = p_5;
  t = r_56(t);
  r_5 = t;
  t = q_5;
  t = s_56(t);
  s_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_5, s_5), o_5);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  x_5 = t;
  t = term_v_5;
  t = whoami_0_0(t);
  y_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_5), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_5;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      {
        ATerm b_6 = NULL,f_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_6 = ATgetFirst((ATermList) t);
            f_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_6;
        {
          ATerm v_0 (ATerm t)
          {
            t = f_6;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_0, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL;
  j_6 = t;
  t = SSL_explode_term(j_6);
  if(match_cons(t, sym__2))
    {
      ATerm i_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  ATerm l_6 (ATerm t)
  {
    ATerm m_6 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_6, t);
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = m_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_74(t);
      }
    return(t);
  }
  t = l_6(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6;
  {
    ATerm x_0 (ATerm t)
    {
      t = n_6;
      return(t);
    }
    t = at_end_1_0(x_0, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm q_6 = NULL;
    q_6 = t;
    t = SSL_explode_string(q_6);
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm r_6 = NULL;
    r_6 = t;
    t = SSL_explode_string(r_6);
    return(t);
  }
  t = _2_0(b_1, d_1, t);
  t = conc_0_0(t);
  p_6 = t;
  t = SSL_implode_string(p_6);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_6 = t;
  int w_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_7 = NULL;
      a_7 = t;
      t = SSL_is_string(a_7);
      ;
      LocalPopChoice(w_6);
    }
  else
    {
      t = v_6;
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(e_1, t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            {
              ATerm e_7 = NULL,f_7 = NULL,j_7 = NULL;
              e_7 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_7 = ATgetArgument(t, 0);
                  t = f_7;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_7 = ATgetArgument(t, 0);
                      t = f_7;
                      {
                        ATerm z_6 = t;
                        int b_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_7);
                          }
                        else
                          {
                            t = z_6;
                            {
                              ATerm h_1 (ATerm t)
                              {
                                t = term_c_7;
                                return(t);
                              }
                              t = debug_1_0(h_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm o_7 = NULL,p_7 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_7 = ATgetArgument(t, 0);
                          j_7 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_7;
                      t = eval_config_0_0(t);
                      o_7 = t;
                      t = j_7;
                      t = eval_config_0_0(t);
                      p_7 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_7, p_7);
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
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_7);
  {
    ATerm i_1 (ATerm t)
    {
      ATerm x_7 = NULL;
      t = eval_config_0_0(t);
      x_7 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_7, x_7);
      t = x_7;
      return(t);
    }
    t = try_1_0(i_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm y_7 = NULL,z_7 = NULL;
    y_7 = t;
    t = term_d_7;
    t = get_config_0_0(t);
    z_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_7, term_g_7);
    t = geq_0_0(t);
    t = y_7;
    t = z_87(t);
    return(t);
  }
  t = try_1_0(j_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_7 = ATgetArgument(t, 0);
        if(match_cons(h_7, sym_Stream_1))
          {
            a_8 = ATgetArgument(h_7, 0);
          }
        else
          _fail(t);
        b_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(a_8, b_8);
    c_8 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), c_8);
    d_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
    return(t);
  }
  t = WriteToFile_1_0(k_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  if(match_cons(t, sym__2))
    {
      e_8 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_8, term_i_7);
  t = open_stream_0_0(t);
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_8, f_8);
  t = v_86(t);
  t = fclose_0_0(t);
  t = f_8;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_7 = ATgetArgument(t, 0);
        if(match_cons(k_7, sym_Stream_1))
          {
            h_8 = ATgetArgument(k_7, 0);
          }
        else
          _fail(t);
        i_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(h_8, i_8);
    j_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
    return(t);
  }
  t = WriteToFile_1_0(l_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_8 = NULL,o_8 = NULL;
  m_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm l_7 = t;
      int m_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                o_8 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(n_1, t);
          ;
          LocalPopChoice(m_7);
        }
      else
        {
          t = l_7;
          t = term_n_7;
          o_8 = t;
        }
      return(t);
    }
    t = _2_0(m_1, _id, t);
    t = m_8;
    {
      ATerm o_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          t = not_null(o_8);
          return(t);
        }
        t = split_2_0(r_1, _id, t);
        return(t);
      }
      t = _2_0(_id, o_1, t);
      {
        ATerm q_7 = t;
        int r_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(t_1, t);
              return(t);
            }
            t = _2_0(s_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(r_7);
          }
        else
          {
            t = q_7;
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
ATerm apply_strategy_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  p_8 = t;
  t = dtime_0_0(t);
  t = p_8;
  t = x_89(t);
  q_8 = t;
  t = dtime_0_0(t);
  t_8 = t;
  t = q_8;
  if(match_cons(t, sym__2))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_8), (ATerm) ATmakeAppl(sym_Runtime_1, t_8)), v_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_9 (ATerm d_9, ATerm t)
  {
    t = SSL_fclose(d_9);
    return(t);
  }
  ATerm g_9 = NULL,h_9 = NULL;
  h_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_9 = ATgetArgument(t, 0);
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_9);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = j_9(h_9, t);
          }
      }
    }
  else
    {
      t = j_9(h_9, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  k_9 = t;
  t = h_86(t);
  l_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_9), l_9));
  t = k_9;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_9 = NULL;
  t = SSL_stdin_stream();
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_9 = NULL;
  t = SSL_stdout_stream();
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  t = SSL_stderr_stream();
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_9);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      ATerm v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL,g_1 = NULL;
        f_1 = t;
        t = SSL_explode_term(f_1);
        if(match_cons(t, sym__2))
          {
            ATerm n_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_8 = ATgetArgument(t, 1);
              if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
                {
                  g_1 = ATgetFirst((ATermList) r_8);
                  {
                    ATerm s_8 = (ATerm) ATgetNext((ATermList) r_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm w_8 = t;
          int x_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
              ATerm u_1 (ATerm t)
              {
                ATerm w_9 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    w_9 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_9;
                return(t);
              }
              t = _2_0(u_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  t_9 = ATgetArgument(t, 0);
                  u_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(t_9, u_9);
              v_9 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, v_9);
              ;
              LocalPopChoice(x_8);
            }
          else
            {
              t = w_8;
              {
                ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
                ATerm v_1 (ATerm t)
                {
                  ATerm a_10 = NULL;
                  a_10 = t;
                  t = SSL_is_string(a_10);
                  return(t);
                }
                t = _2_0(v_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_9 = ATgetArgument(t, 0);
                    y_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(x_9, y_9);
                z_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, z_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_10 = NULL;
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_10, term_a_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm w_1 (ATerm t)
        {
          t = term_b_9;
          return(t);
        }
        t = debug_1_0(w_1, t);
        _fail(t);
      }
    }
  b_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(d_10);
  c_10 = t;
  t = b_10;
  t = fclose_0_0(t);
  t = c_10;
  return(t);
}
ATerm split_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  t = z_81(t);
  h_10 = t;
  t = g_10;
  t = a_82(t);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  j_10 = t;
  {
    ATerm c_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              k_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(x_1, t);
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = c_9;
        t = term_f_9;
        k_10 = t;
      }
    t = j_10;
    {
      ATerm y_1 (ATerm t)
      {
        t = not_null(k_10);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, y_1, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    ATerm m_10 = NULL;
    m_10 = t;
    if(match_string(t, "-k"))
      {
        t = m_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = m_10;
      }
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    ATerm n_10 = NULL,o_10 = NULL;
    n_10 = t;
    t = SSL_string_to_int(n_10);
    o_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), o_10);
    t = n_10;
    return(t);
  }
  ATerm b_2 (ATerm t)
  {
    t = term_i_9;
    return(t);
  }
  t = ArgOption_3_0(z_1, a_2, b_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm q_10 = NULL;
        q_10 = t;
        if(match_string(t, "-S"))
          {
            t = q_10;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = q_10;
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_f_10;
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_l_10;
        return(t);
      }
      t = Option_3_0(c_2, e_2, i_2, t);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = p_9;
      {
        ATerm p_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm u_2 (ATerm t)
            {
              ATerm r_10 = NULL,s_10 = NULL;
              r_10 = t;
              t = SSL_string_to_int(r_10);
              s_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_10);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, r_10);
              return(t);
            }
            ATerm v_2 (ATerm t)
            {
              t = term_u_10;
              return(t);
            }
            t = ArgOption_3_0(o_2, u_2, v_2, t);
            ;
            LocalPopChoice(t_10);
          }
        else
          {
            t = p_10;
            {
              ATerm w_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_v_10;
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_y_10;
                return(t);
              }
              t = Option_3_0(w_2, x_2, y_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = z_10;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm w_10 = NULL;
    w_10 = t;
    if(match_string(t, "-o"))
      {
        t = w_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = w_10;
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    ATerm x_10 = NULL;
    x_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), x_10);
    t = (ATerm) ATmakeAppl(sym_Output_1, x_10);
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_g_11;
    return(t);
  }
  t = ArgOption_3_0(z_2, a_3, b_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = h_11;
      {
        ATerm e_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_n_11;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_o_11;
          return(t);
        }
        t = Option_3_0(e_3, f_3, g_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
  a_11 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = a_11;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm i_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_11 = ATgetFirst((ATermList) t);
          c_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_11 = ATgetFirst((ATermList) t);
          e_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_11;
      t = j_0(t);
      t = d_11;
      t = k_0(t);
      i_11 = t;
      t = (ATerm) ATinsert(CheckATermList(e_11), i_11);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm k_11 = NULL;
    k_11 = t;
    if(match_string(t, "-i"))
      {
        t = k_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = k_11;
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    ATerm l_11 = NULL;
    l_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), l_11);
    t = (ATerm) ATmakeAppl(sym_Input_1, l_11);
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_r_11;
    return(t);
  }
  t = ArgOption_3_0(p_3, q_3, t_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = s_11;
      {
        ATerm a_12 = t;
        int b_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(b_12);
          }
        else
          {
            t = a_12;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_11 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_5;
  t = whoami_0_0(t);
  m_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_11));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_80(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm p_11 = NULL,q_11 = NULL,t_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_11 = ATgetFirst((ATermList) t);
            q_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_11;
        t = foldr_2_0(k_80, l_80, t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_11, t_11);
        t = l_80(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  u_11 = t;
  t = SSL_explode_term(u_11);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11;
  t = foldr_2_0(d_84, e_84, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = times_0_0(t);
  {
    ATerm u_3 (ATerm t)
    {
      t = term_s_9;
      return(t);
    }
    ATerm v_3 (ATerm t)
    {
      ATerm x_11 = NULL,y_11 = NULL;
      if(match_cons(t, sym__2))
        {
          x_11 = ATgetArgument(t, 0);
          y_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm g_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(x_11, y_11);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = g_12;
            t = SSL_addr(x_11, y_11);
          }
      }
      return(t);
    }
    t = crush_2_0(u_3, v_3, t);
    w_11 = t;
    t = SSL_TicksToSeconds(w_11);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_12;
        if((i_12 != t))
          {
            _fail(t);
          }
        t = h_12;
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = l_12;
        t = h_12;
        {
          ATerm r_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_12, j_12);
              ;
              LocalPopChoice(t_12);
            }
          else
            {
              t = r_12;
              t = SSL_gtr(i_12, j_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm m_12 = NULL,n_12 = NULL;
    m_12 = t;
    t = term_d_7;
    t = get_config_0_0(t);
    n_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_12, term_w_12);
    t = geq_0_0(t);
    t = m_12;
    t = y_87(t);
    return(t);
  }
  t = try_1_0(w_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm p_12 = NULL,q_12 = NULL;
    t = run_time_0_0(t);
    p_12 = t;
    t = term_v_5;
    t = whoami_0_0(t);
    q_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_12), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), q_12));
    t = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_13), p_12), term_y_12), q_12));
    return(t);
  }
  t = if_verbose1_1_0(x_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              {
                ATerm t_13 = t;
                int w_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(w_13);
                  }
                else
                  {
                    t = t_13;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(y_3, t);
      }
    }
  t = v_90(t);
  return(t);
}
ATerm map_1_0 (ATerm j_74 (ATerm), ATerm t)
{
  ATerm s_12 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = Cons_2_0(j_74, s_12, t);
      }
    return(t);
  }
  t = s_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_12 = ATgetFirst((ATermList) t);
      v_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_12 = NULL,a_13 = NULL;
        t = v_12;
        t = h_0(t);
        z_12 = t;
        t = u_12;
        t = g_0(t);
        a_13 = t;
        t = v_12;
        {
          ATerm z_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_12), a_13);
            return(t);
          }
          t = reverse_acc_2_0(g_0, z_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_5;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, a_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm b_13 = NULL;
  t = term_v_5;
  t = f_0(t);
  b_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_14), b_13), term_z_13);
  return(t);
}
ATerm Program_1_0 (ATerm n_66 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_13);
  c_13 = t;
  t = d_13;
  t = n_66(t);
  e_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_13), c_13);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_13 = NULL;
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_12;
      t = get_config_0_0(t);
      j_13 = t;
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm c_4 (ATerm t)
          {
            j_13 = t;
            return(t);
          }
          t = Program_1_0(c_4, t);
          return(t);
        }
        t = option_defined_1_0(b_4, t);
      }
    }
  {
    ATerm d_4 (ATerm t)
    {
      ATerm e_4 (ATerm t)
      {
        t = j_13;
        return(t);
      }
      t = short_description_1_0(e_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(d_4, t);
    t = term_h_14;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm f_4 (ATerm t)
      {
        ATerm k_13 = NULL;
        k_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, k_13), term_i_14);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(f_4, t);
      {
        ATerm g_4 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATempty, term_o_14), term_k_14);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(g_4, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_66 (ATerm), ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      m_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_13);
  l_13 = t;
  t = m_13;
  t = o_66(t);
  n_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, n_13), l_13);
  return(t);
}
ATerm fetch_1_0 (ATerm t_74 (ATerm), ATerm t)
{
  ATerm s_13 (ATerm t)
  {
    ATerm p_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(t_74, _id, t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = p_14;
        t = Cons_2_0(_id, s_13, t);
      }
    return(t);
  }
  t = s_13(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  t = fetch_1_0(v_91, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  u_13 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_15 = ATgetFirst((ATermList) t);
                ATerm c_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_13;
          }
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATinsert(ATempty, u_13);
      }
    v_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_13);
    t = u_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm y_66 (ATerm), ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_66(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_n_15;
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = term_o_15;
        return(t);
      }
      t = Option_3_0(h_4, i_4, j_4, t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = h_15;
      {
        ATerm k_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm l_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_15;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = term_t_15;
          return(t);
        }
        t = Option_3_0(k_4, l_4, m_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  if(match_cons(t, sym__3))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      d_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_14, c_14);
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_15 = ATgetArgument(t, 0);
            ATerm y_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_14, c_14);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        t = (ATerm) ATempty;
      }
    e_14 = t;
    t = SSL_table_put(b_14, c_14, (ATerm) ATinsert(CheckATermList(e_14), d_14));
    t = (ATerm) ATmakeAppl(sym__3, b_14, c_14, d_14);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm j_14 = NULL;
  t = term_v_5;
  t = a_93(t);
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_16, term_c_16, j_14);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = l_14;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm q_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_14 = ATgetFirst((ATermList) t);
          n_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_14;
      t = a_0(t);
      t = term_v_5;
      t = b_0(t);
      q_14 = t;
      t = (ATerm) ATinsert(CheckATermList(n_14), q_14);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm s_14 = NULL;
    s_14 = t;
    if(match_string(t, "--help"))
      {
        t = s_14;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = s_14;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = s_14;
          }
      }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_16;
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  t = Option_3_0(n_4, o_4, p_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm a_58 (ATerm), ATerm b_58 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  y_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_14 = ATgetFirst((ATermList) t);
      v_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_14);
  t_14 = t;
  t = u_14;
  t = a_58(t);
  w_14 = t;
  t = v_14;
  t = b_58(t);
  x_14 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(x_14), w_14), t_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_92 (ATerm), ATerm t)
{
  ATerm f_15 = NULL;
  f_15 = t;
  {
    ATerm q_4 (ATerm t)
    {
      t = term_f_16;
      t = y_92(t);
      return(t);
    }
    t = try_1_0(q_4, t);
    t = f_15;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm g_15 = NULL;
        g_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, g_15);
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_16);
              }
            else
              {
                t = i_16;
                t = y_92(t);
                t = Cons_2_0(_id, s_4, t);
              }
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = g_16;
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
      t = Cons_2_0(r_4, s_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_15;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm k_16 = t;
      int l_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_92(t);
          ;
          LocalPopChoice(l_16);
        }
      else
        {
          t = k_16;
          {
            ATerm m_16 = t;
            int n_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_16);
              }
            else
              {
                t = m_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_4, t);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_15 = NULL;
            w_15 = t;
            {
              ATerm q_16 = t;
              int r_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_15;
                  {
                    ATerm s_16 = t;
                    int t_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_p_13;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(t_16);
                      }
                    else
                      {
                        t = s_16;
                        {
                          ATerm v_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(v_4, t);
                        }
                      }
                    t = w_15;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(r_16);
                }
              else
                {
                  t = q_16;
                  t = term_m_15;
                  t = get_config_0_0(t);
                  t = w_15;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            {
              ATerm w_4 (ATerm t)
              {
                ATerm x_4 (ATerm t)
                {
                  q_15 = t;
                  return(t);
                }
                t = Undefined_1_0(x_4, t);
                return(t);
              }
              t = option_defined_1_0(w_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_x_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_15)), term_u_16));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(u_4, t);
      r_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm), ATerm a_91 (ATerm), ATerm t)
{
  ATerm c_5 = NULL;
  t = parse_options_1_0(x_90, t);
  c_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_5);
  t = c_5;
  t = z_90(t);
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_90, t);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_90(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(m_90, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(y_4, o_90, p_90, z_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm z_15 = NULL,a_16 = NULL;
      z_15 = t;
      t = term_c_12;
      t = get_config_0_0(t);
      a_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, a_16));
      t = z_15;
      return(t);
    }
    t = if_verbose2_1_0(d_5, t);
    return(t);
  }
  t = iowrap_4_0(g_90, h_90, i_90, a_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  t = iowrap_3_0(e_90, f_90, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    t = _2_0(_id, b_90, t);
    return(t);
  }
  t = iowrap_2_0(e_5, _fail, t);
  return(t);
}
ATerm treeviz_0_0 (ATerm t)
{
  t = iowrap_1_0(Treeviz_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = treeviz_0_0(t);
  return(t);
}

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
ATerm term_o_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_t_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_w_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_d_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_v_12;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_b_11;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_n_2;
void init_constant_terms (void)
{
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("[ ]", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("This program outputs a term in abstract GraphXML format.", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__3, term_o_18, term_p_18, term_n_2);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm BuildNode_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm BuildEdge_0_0 (ATerm);
ATerm MkEdges_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm TreeViz_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm NewNodeName_0_0 (ATerm);
ATerm Treeviz_0_0 (ATerm);
ATerm _2_0 (ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_75 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm h_75 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_88 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm g_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm u_66 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_66 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_93 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,m_0 = NULL;
  b_0 = t;
  t = term_n_2;
  t = whoami_0_0(t);
  m_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm BuildNode_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,t_0 = NULL,e_0 = NULL,f_0 = NULL,o_0 = NULL,s_0 = NULL,x_0 = NULL,k_1 = NULL,l_1 = NULL,n_1 = NULL,o_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym__2))
    {
      p_0 = ATgetArgument(t, 0);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_0;
  {
    ATerm v_4 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = SSL_is_int(p_0);
        u_0 = t;
        t = SSL_int_to_string(u_0);
        ;
        LocalPopChoice(g_7);
      }
    else
      {
        t = v_4;
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_7;
              ;
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
            }
        }
      }
    e_0 = t;
    t = SSL_explode_string(e_0);
    t = escape_chars_0_0(t);
    f_0 = t;
    t = SSL_implode_string(f_0);
    o_0 = t;
    t = SSL_explode_string(o_0);
    x_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_0), term_k_7), (ATerm) ATinsert(ATempty, term_k_7));
    {
      ATerm s_7 = t;
      int v_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm z_7 = ATgetArgument(t, 0);
              ATerm a_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(x_0), term_k_7);
          {
            ATerm i_0 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_k_7);
              return(t);
            }
            t = at_end_1_0(i_0, t);
          }
          ;
          LocalPopChoice(v_7);
        }
      else
        {
          t = s_7;
          {
            ATerm i_1 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_0), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
            if(match_cons(t, sym__2))
              {
                ATerm b_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_8) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                i_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_1;
            t = concat_0_0(t);
          }
        }
      s_0 = t;
      t = SSL_implode_string(s_0);
      r_0 = t;
      t = q_0;
      {
        ATerm c_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_1 = NULL;
            t = SSL_is_int(q_0);
            e_1 = t;
            t = SSL_int_to_string(e_1);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = c_8;
            {
              ATerm i_8 = t;
              int j_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_7;
                  ;
                  LocalPopChoice(j_8);
                }
              else
                {
                  t = i_8;
                }
            }
          }
        k_1 = t;
        t = SSL_explode_string(k_1);
        t = escape_chars_0_0(t);
        l_1 = t;
        t = SSL_implode_string(l_1);
        n_1 = t;
        t = SSL_explode_string(n_1);
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_1), term_k_7), (ATerm) ATinsert(ATempty, term_k_7));
        {
          ATerm k_8 = t;
          int l_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm m_8 = ATgetArgument(t, 0);
                  ATerm p_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_1), term_k_7);
              {
                ATerm n_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_k_7);
                  return(t);
                }
                t = at_end_1_0(n_0, t);
              }
              ;
              LocalPopChoice(l_8);
            }
          else
            {
              t = k_8;
              {
                ATerm b_2 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_1), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                if(match_cons(t, sym__2))
                  {
                    ATerm s_8 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    b_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_2;
                t = concat_0_0(t);
              }
            }
          o_1 = t;
          t = SSL_implode_string(o_1);
          t_0 = t;
          t = (ATerm) ATmakeAppl(sym_node_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_name_1, r_0)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_label_2, (ATerm)ATempty, t_0)));
        }
      }
    }
  }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm u_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_2 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_9 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_9) != AT_INT) || (ATgetInt((ATermInt) a_9) != 34)))
                _fail(t);
              g_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_2), term_k_7), term_b_9);
          ;
          LocalPopChoice(z_8);
        }
      else
        {
          t = y_8;
          {
            ATerm j_2 = NULL,k_2 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_2 = ATgetFirst((ATermList) t);
                k_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_2;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_2), term_b_9), term_b_9);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(k_2), term_c_9), term_b_9);
              }
          }
        }
      {
        ATerm v_0 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, v_0, t);
      }
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = u_8;
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm BuildEdge_0_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,y_2 = NULL,d_2 = NULL,e_2 = NULL,i_2 = NULL,o_2 = NULL,q_2 = NULL,f_3 = NULL,g_3 = NULL,q_3 = NULL,t_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_2;
  {
    ATerm f_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 = NULL;
        t = SSL_is_int(r_2);
        a_3 = t;
        t = SSL_int_to_string(a_3);
        ;
        LocalPopChoice(h_9);
      }
    else
      {
        t = f_9;
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_7;
              ;
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
            }
        }
      }
    d_2 = t;
    t = SSL_explode_string(d_2);
    t = escape_chars_0_0(t);
    e_2 = t;
    t = SSL_implode_string(e_2);
    i_2 = t;
    t = SSL_explode_string(i_2);
    q_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_2), term_k_7), (ATerm) ATinsert(ATempty, term_k_7));
    {
      ATerm m_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm p_9 = ATgetArgument(t, 0);
              ATerm q_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(q_2), term_k_7);
          {
            ATerm w_0 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_k_7);
              return(t);
            }
            t = at_end_1_0(w_0, t);
          }
          ;
          LocalPopChoice(o_9);
        }
      else
        {
          t = m_9;
          {
            ATerm e_3 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_2), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
            if(match_cons(t, sym__2))
              {
                ATerm r_9 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_9) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                e_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_3;
            t = concat_0_0(t);
          }
        }
      o_2 = t;
      t = SSL_implode_string(o_2);
      t_2 = t;
      t = s_2;
      {
        ATerm s_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 = NULL;
            t = SSL_is_int(s_2);
            j_3 = t;
            t = SSL_int_to_string(j_3);
            ;
            LocalPopChoice(v_9);
          }
        else
          {
            t = s_9;
            {
              ATerm w_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_7;
                  ;
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = w_9;
                }
            }
          }
        f_3 = t;
        t = SSL_explode_string(f_3);
        t = escape_chars_0_0(t);
        g_3 = t;
        t = SSL_implode_string(g_3);
        q_3 = t;
        t = SSL_explode_string(q_3);
        v_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_3), term_k_7), (ATerm) ATinsert(ATempty, term_k_7));
        {
          ATerm y_9 = t;
          int z_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm b_10 = ATgetArgument(t, 0);
                  ATerm d_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_3), term_k_7);
              {
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_k_7);
                  return(t);
                }
                t = at_end_1_0(y_0, t);
              }
              ;
              LocalPopChoice(z_9);
            }
          else
            {
              t = y_9;
              {
                ATerm c_4 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_3), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                if(match_cons(t, sym__2))
                  {
                    ATerm h_10 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_10) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    c_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_4;
                t = concat_0_0(t);
              }
            }
          t_3 = t;
          t = SSL_implode_string(t_3);
          y_2 = t;
          t = (ATerm) ATmakeAppl(sym_edge1_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_target_1, y_2)), (ATerm) ATmakeAppl(sym_source_1, t_2)));
        }
      }
    }
  }
  return(t);
}
ATerm MkEdges_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,r_3 = NULL,s_3 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL;
  o_3 = t;
  t = SSL_explode_term(o_3);
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_3;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL;
        t = SSL_is_int(r_3);
        h_4 = t;
        t = SSL_int_to_string(h_4);
        ;
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        {
          ATerm n_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_7;
              ;
              LocalPopChoice(r_10);
            }
          else
            {
              t = n_10;
            }
        }
      }
    t = NewNodeName_0_0(t);
    d_4 = t;
    t = term_n_2;
    t = b_67(t);
    e_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
    t = BuildEdge_0_0(t);
    f_4 = t;
    t = (ATerm) ATmakeAppl(sym__3, d_4, r_3, s_3);
    t = c_67(t);
    g_4 = t;
    t = (ATerm) ATinsert(CheckATermList(g_4), f_4);
  }
  return(t);
}
ATerm TreeViz_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__3))
    {
      s_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      u_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm s_10 = t;
      int u_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(u_10);
        }
      else
        {
          t = s_10;
          t = u_4;
          {
            ATerm z_0 (ATerm t)
            {
              ATerm a_1 (ATerm t)
              {
                t = s_4;
                return(t);
              }
              t = MkEdges_2_0(a_1, TreeViz_0_0, t);
              return(t);
            }
            t = map_1_0(z_0, t);
            t = concat_0_0(t);
          }
        }
    }
  else
    {
      t = u_4;
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            t = s_4;
            return(t);
          }
          t = MkEdges_2_0(c_1, TreeViz_0_0, t);
          return(t);
        }
        t = map_1_0(b_1, t);
        t = concat_0_0(t);
      }
    }
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_4, t_4);
  t = BuildNode_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(CheckATermList(p_4), q_4);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm x_4 = NULL;
    x_4 = t;
    t = SSL_explode_string(x_4);
    return(t);
  }
  t = map_1_0(d_1, t);
  t = concat_0_0(t);
  w_4 = t;
  t = SSL_implode_string(w_4);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm NewNodeName_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  z_4 = t;
  t = term_n_2;
  t = new_0_0(t);
  a_5 = t;
  t = SSL_explode_string(z_4);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm x_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
            _fail(t);
          t = term_b_11;
          ;
          LocalPopChoice(z_10);
        }
      else
        {
          t = x_10;
        }
      return(t);
    }
    t = map_1_0(f_1, t);
    c_5 = t;
    t = SSL_implode_string(c_5);
    b_5 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, b_5), a_5);
    t = concat_strings_0_0(t);
  }
  return(t);
}
ATerm Treeviz_0_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,i_5 = NULL,j_5 = NULL;
  e_5 = t;
  t = SSL_explode_term(e_5);
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_5 = NULL;
        t = SSL_is_int(f_5);
        l_5 = t;
        t = SSL_int_to_string(l_5);
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_7;
              ;
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
            }
        }
      }
    t = NewNodeName_0_0(t);
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_5, f_5, g_5);
    t = TreeViz_0_0(t);
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym_GraphXML_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_graph_2, (ATerm)ATempty, j_5)));
  }
  return(t);
}
ATerm _2_0 (ATerm y_56 (ATerm), ATerm z_56 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  m_5 = t;
  t = n_5;
  t = y_56(t);
  p_5 = t;
  t = o_5;
  t = z_56(t);
  q_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_5, q_5), m_5);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_5 = ATgetArgument(t, 0);
      v_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_5, term_j_11);
  t = open_stream_0_0(t);
  w_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_5, v_5);
  t = g_87(t);
  t = fclose_0_0(t);
  t = v_5;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_5 = NULL,y_5 = NULL;
  x_5 = t;
  {
    ATerm g_1 (ATerm t)
    {
      ATerm k_11 = t;
      int l_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_5 != NULL) && (y_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_1, t);
          ;
          LocalPopChoice(l_11);
        }
      else
        {
          t = k_11;
          t = term_m_11;
          if(((y_5 != NULL) && (y_5 != t)))
            _fail(t);
          else
            y_5 = t;
        }
      return(t);
    }
    t = _2_0(g_1, _id, t);
    t = x_5;
    {
      ATerm j_1 (ATerm t)
      {
        ATerm i_4 = NULL;
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_5), i_4);
        return(t);
      }
      t = _2_0(_id, j_1, t);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm q_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(q_1, t);
              return(t);
            }
            ATerm p_1 (ATerm t)
            {
              ATerm r_1 (ATerm t)
              {
                ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm q_11 = ATgetArgument(t, 0);
                    if(match_cons(q_11, sym_Stream_1))
                      {
                        z_5 = ATgetArgument(q_11, 0);
                      }
                    else
                      _fail(t);
                    a_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(z_5, a_6);
                b_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_6);
                return(t);
              }
              t = WriteToFile_1_0(r_1, t);
              return(t);
            }
            t = _2_0(m_1, p_1, t);
            ;
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            {
              ATerm t_1 (ATerm t)
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_11 = ATgetArgument(t, 0);
                      if(match_cons(w_11, sym_Stream_1))
                        {
                          c_6 = ATgetArgument(w_11, 0);
                        }
                      else
                        _fail(t);
                      d_6 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(c_6, d_6);
                  e_6 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), e_6);
                  f_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, f_6);
                  return(t);
                }
                t = WriteToFile_1_0(u_1, t);
                return(t);
              }
              t = _2_0(_id, t_1, t);
            }
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
ATerm apply_strategy_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  g_6 = t;
  t = dtime_0_0(t);
  t = g_6;
  t = i_90(t);
  h_6 = t;
  t = dtime_0_0(t);
  i_6 = t;
  t = h_6;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_6), (ATerm) ATmakeAppl(sym_Runtime_1, i_6)), k_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_6 (ATerm s_6, ATerm t)
  {
    t = SSL_fclose(s_6);
    return(t);
  }
  ATerm v_6 = NULL,w_6 = NULL;
  w_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_6 = ATgetArgument(t, 0);
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_6);
            ;
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            t = y_6(w_6, t);
          }
      }
    }
  else
    {
      t = y_6(w_6, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_7 = NULL;
  t = SSL_stdin_stream();
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_7);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  t = SSL_stdout_stream();
  c_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_7);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  t = SSL_stderr_stream();
  e_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      ATerm h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL,d_7 = NULL;
        b_7 = t;
        t = SSL_explode_term(b_7);
        if(match_cons(t, sym__2))
          {
            ATerm n_12 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_12) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_12 = ATgetArgument(t, 1);
              if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
                {
                  d_7 = ATgetFirst((ATermList) o_12);
                  {
                    ATerm q_12 = (ATerm) ATgetNext((ATermList) o_12);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = d_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = d_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
              ATerm v_1 (ATerm t)
              {
                ATerm o_7 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    o_7 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_7;
                return(t);
              }
              t = _2_0(v_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_7 = ATgetArgument(t, 0);
                  m_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_7, m_7);
              n_7 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_7);
              ;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              {
                ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
                ATerm w_1 (ATerm t)
                {
                  ATerm t_7 = NULL;
                  t_7 = t;
                  t = SSL_is_string(t_7);
                  return(t);
                }
                t = _2_0(w_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_7 = ATgetArgument(t, 0);
                    q_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_7, q_7);
                r_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_7);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_7 = NULL,w_7 = NULL,x_7 = NULL;
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 = NULL;
      y_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_7, term_v_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm f_7 = NULL;
        f_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = f_7;
        _fail(t);
      }
    }
  u_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_7);
  w_7 = t;
  t = u_7;
  t = fclose_0_0(t);
  t = w_7;
  return(t);
}
ATerm fetch_1_0 (ATerm b_75 (ATerm), ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(b_75, _id, t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        t = Cons_2_0(_id, d_8, t);
      }
    return(t);
  }
  t = d_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm g_8 = NULL,h_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_8 = ATgetFirst((ATermList) t);
            h_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = g_8;
        {
          ATerm x_1 (ATerm t)
          {
            t = h_8;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_75 (ATerm), ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, n_8, t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_75(t);
      }
    return(t);
  }
  t = n_8(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm r_8 = NULL;
    r_8 = t;
    t = SSL_explode_string(r_8);
    return(t);
  }
  ATerm z_1 (ATerm t)
  {
    ATerm t_8 = NULL;
    t_8 = t;
    t = SSL_explode_string(t_8);
    return(t);
  }
  t = _2_0(y_1, z_1, t);
  {
    ATerm g_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL,w_8 = NULL;
        if(match_cons(t, sym__2))
          {
            v_8 = ATgetArgument(t, 0);
            w_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_8;
        {
          ATerm a_2 (ATerm t)
          {
            t = w_8;
            return(t);
          }
          t = at_end_1_0(a_2, t);
        }
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = g_13;
        {
          ATerm e_8 = NULL,o_8 = NULL;
          e_8 = t;
          t = SSL_explode_term(e_8);
          if(match_cons(t, sym__2))
            {
              ATerm l_13 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) l_13) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              o_8 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_8;
          t = concat_0_0(t);
        }
      }
    q_8 = t;
    t = SSL_implode_string(q_8);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL;
      g_9 = t;
      t = SSL_is_string(g_9);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = p_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              ATerm v_13 = t;
              int w_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(w_13);
                }
              else
                {
                  t = v_13;
                }
              return(t);
            }
            t = map_1_0(c_2, t);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm k_9 = NULL,l_9 = NULL,n_9 = NULL;
              k_9 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_9 = ATgetArgument(t, 0);
                  t = l_9;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_9 = ATgetArgument(t, 0);
                      t = l_9;
                      {
                        ATerm x_13 = t;
                        int e_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_9);
                            {
                              ATerm f_14 = t;
                              int g_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_10 = NULL;
                                  t = eval_config_0_0(t);
                                  y_10 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_9, y_10);
                                  t = y_10;
                                  ;
                                  LocalPopChoice(g_14);
                                }
                              else
                                {
                                  t = f_14;
                                }
                            }
                            ;
                            LocalPopChoice(e_14);
                          }
                        else
                          {
                            t = x_13;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_9), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = l_9;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_9 = NULL,u_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_9 = ATgetArgument(t, 0);
                          n_9 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_9;
                      t = eval_config_0_0(t);
                      t_9 = t;
                      t = n_9;
                      t = eval_config_0_0(t);
                      u_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_9, u_9);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_10 = NULL,c_10 = NULL;
      a_10 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm p_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_11 = NULL;
            t = eval_config_0_0(t);
            n_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_11);
            t = n_11;
            ;
            LocalPopChoice(r_14);
          }
        else
          {
            t = p_14;
          }
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, term_s_14);
        t = geq_0_0(t);
        t = a_10;
        t = k_88(t);
      }
      ;
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm e_10 = NULL;
    e_10 = t;
    if(match_string(t, "-k"))
      {
        t = e_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = e_10;
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm f_10 = NULL,g_10 = NULL;
    f_10 = t;
    t = SSL_string_to_int(f_10);
    g_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_10);
    t = f_10;
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    t = term_v_14;
    return(t);
  }
  t = ArgOption_3_0(f_2, h_2, l_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 (ATerm t)
      {
        ATerm i_10 = NULL;
        i_10 = t;
        if(match_string(t, "-S"))
          {
            t = i_10;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = i_10;
          }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_b_15;
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_c_15;
        return(t);
      }
      t = Option_3_0(m_2, p_2, u_2, t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm g_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              ATerm j_10 = NULL,k_10 = NULL;
              j_10 = t;
              t = SSL_string_to_int(j_10);
              k_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_10);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, j_10);
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              t = term_k_15;
              return(t);
            }
            t = ArgOption_3_0(v_2, w_2, x_2, t);
            ;
            LocalPopChoice(j_15);
          }
        else
          {
            t = g_15;
            {
              ATerm z_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm b_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_l_15;
                return(t);
              }
              ATerm c_3 (ATerm t)
              {
                t = term_o_15;
                return(t);
              }
              t = Option_3_0(z_2, b_3, c_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_10 = NULL;
      t = term_n_2;
      t = d_0(t);
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, q_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_10 = ATgetFirst((ATermList) t);
          p_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_10;
      t = a_0(t);
      t = term_n_2;
      t = c_0(t);
      t_10 = t;
      t = (ATerm) ATinsert(CheckATermList(p_10), t_10);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    ATerm v_10 = NULL;
    v_10 = t;
    if(match_string(t, "-o"))
      {
        t = v_10;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_10;
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm w_10 = NULL;
    w_10 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_10);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_10);
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_t_15;
    return(t);
  }
  t = ArgOption_3_0(d_3, h_3, i_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL,d_11 = NULL,g_11 = NULL;
  if(match_cons(t, sym__3))
    {
      a_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
      d_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_11, c_11);
  {
    ATerm u_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_16 = ATgetArgument(t, 0);
            ATerm c_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_11, c_11);
        ;
        LocalPopChoice(w_15);
      }
    else
      {
        t = u_15;
        t = (ATerm) ATempty;
      }
    g_11 = t;
    t = SSL_table_put(a_11, c_11, (ATerm) ATinsert(CheckATermList(g_11), d_11));
    t = (ATerm) ATmakeAppl(sym__3, a_11, c_11, d_11);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_11 = NULL;
      t = term_n_2;
      t = l_0(t);
      v_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_15, term_s_15, v_11);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_11 = ATgetFirst((ATermList) t);
          s_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_11 = ATgetFirst((ATermList) t);
          u_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_11;
      t = j_0(t);
      t = t_11;
      t = k_0(t);
      z_11 = t;
      t = (ATerm) ATinsert(CheckATermList(u_11), z_11);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm b_12 = NULL;
    b_12 = t;
    if(match_string(t, "-i"))
      {
        t = b_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = b_12;
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm d_12 = NULL;
    d_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), d_12);
    t = (ATerm) ATmakeAppl(sym_Input_1, d_12);
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_d_16;
    return(t);
  }
  t = ArgOption_3_0(k_3, l_3, m_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_2;
  t = whoami_0_0(t);
  f_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm e_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL;
        t = eval_config_0_0(t);
        c_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_12);
        t = c_12;
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = e_16;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm s_80 (ATerm), ATerm t_80 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_80(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = h_16;
      {
        ATerm i_12 = NULL,j_12 = NULL,m_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_12 = ATgetFirst((ATermList) t);
            j_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_12;
        t = foldr_2_0(s_80, t_80, t);
        m_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_12, m_12);
        t = t_80(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_12 = NULL,e_12 = NULL,g_12 = NULL;
  t = times_0_0(t);
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_12;
  {
    ATerm n_3 (ATerm t)
    {
      t = term_y_14;
      return(t);
    }
    ATerm p_3 (ATerm t)
    {
      ATerm j_13 = NULL,k_13 = NULL;
      if(match_cons(t, sym__2))
        {
          j_13 = ATgetArgument(t, 0);
          k_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(j_13, k_13);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            t = SSL_addr(j_13, k_13);
          }
      }
      return(t);
    }
    t = foldr_2_0(n_3, p_3, t);
    p_12 = t;
    t = SSL_TicksToSeconds(p_12);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_13;
        if((b_13 != t))
          {
            _fail(t);
          }
        t = a_13;
        ;
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = a_13;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_13, c_13);
              ;
              LocalPopChoice(v_16);
            }
          else
            {
              t = u_16;
              t = SSL_gtr(b_13, c_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_13, c_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_13 = NULL,h_13 = NULL;
      f_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL;
            t = eval_config_0_0(t);
            t_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_14);
            t = t_14;
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
          }
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_13, term_a_17);
        t = geq_0_0(t);
        t = f_13;
        t = j_88(t);
      }
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL;
    t = run_time_0_0(t);
    m_13 = t;
    t = term_n_2;
    t = whoami_0_0(t);
    n_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), m_13), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), n_13));
    t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_17), m_13), term_c_17), n_13));
    return(t);
  }
  t = if_verbose1_1_0(u_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm f_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm h_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_15 = NULL;
            t = eval_config_0_0(t);
            d_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_15);
            t = d_15;
            ;
            LocalPopChoice(i_17);
          }
        else
          {
            t = h_17;
          }
      }
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = f_17;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
              {
                ATerm m_17 = t;
                int o_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(o_17);
                  }
                else
                  {
                    t = m_17;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(w_3, t);
      }
    }
  t = g_91(t);
  return(t);
}
ATerm map_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm p_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = p_17;
        t = Cons_2_0(q_74, o_13, t);
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_13 = ATgetFirst((ATermList) t);
      r_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_13 = NULL,z_13 = NULL;
        t = r_13;
        t = h_0(t);
        y_13 = t;
        t = q_13;
        t = g_0(t);
        z_13 = t;
        t = r_13;
        {
          ATerm x_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_13), z_13);
            return(t);
          }
          t = reverse_acc_2_0(g_0, x_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_2;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm u_66 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  d_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_14);
  a_14 = t;
  t = b_14;
  t = u_66(t);
  c_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_14), a_14);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL;
            t = eval_config_0_0(t);
            v_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_15);
            t = v_15;
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
          }
        h_14 = t;
      }
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm y_3 (ATerm t)
        {
          ATerm z_3 (ATerm t)
          {
            if(((h_14 != NULL) && (h_14 != t)))
              _fail(t);
            else
              h_14 = t;
            return(t);
          }
          t = Program_1_0(z_3, t);
          return(t);
        }
        t = fetch_1_0(y_3, t);
      }
    }
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_17), not_null(h_14)), term_y_17);
        t = echo_0_0(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
      }
    t = term_a_18;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    {
      ATerm a_4 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, a_4, t);
      {
        ATerm b_4 (ATerm t)
        {
          ATerm i_14 = NULL;
          i_14 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, i_14), term_b_18);
          t = echo_0_0(t);
          return(t);
        }
        t = map_1_0(b_4, t);
        {
          ATerm c_18 = t;
          int d_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(ATempty, term_f_18), term_e_18);
              t = echo_0_0(t);
              ;
              LocalPopChoice(d_18);
            }
          else
            {
              t = c_18;
            }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm v_66 (ATerm), ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_14);
  j_14 = t;
  t = k_14;
  t = v_66(t);
  l_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_14), j_14);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_14 = NULL,u_14 = NULL;
  q_14 = t;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_18 = ATgetFirst((ATermList) t);
                ATerm j_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_14;
          }
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = (ATerm) ATinsert(ATempty, q_14);
      }
    u_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), u_14);
    t = q_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_16 = NULL;
        t = eval_config_0_0(t);
        p_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_16);
        t = p_16;
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_q_18;
        return(t);
      }
      ATerm l_4 (ATerm t)
      {
        t = term_r_18;
        return(t);
      }
      t = Option_3_0(j_4, k_4, l_4, t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      {
        ATerm m_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_s_18;
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_t_18;
          return(t);
        }
        t = Option_3_0(m_4, n_4, o_4, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_58 (ATerm), ATerm i_58 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL,i_15 = NULL;
  i_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      e_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_15);
  z_14 = t;
  t = a_15;
  t = h_58(t);
  f_15 = t;
  t = e_15;
  t = i_58(t);
  h_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(h_15), f_15), z_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm m_15 = NULL;
  m_15 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_18;
        t = j_93(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
      }
    t = m_15;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm n_15 = NULL;
        n_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, n_15);
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_19);
              }
            else
              {
                t = z_18;
                t = j_93(t);
                t = Cons_2_0(_id, y_4, t);
              }
            ;
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm p_15 = NULL,q_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_15 = ATgetFirst((ATermList) t);
                  q_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_15), (ATerm) ATmakeAppl(sym_Undefined_1, p_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_4, y_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_15;
  {
    ATerm d_5 (ATerm t)
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_93(t);
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
                ATerm h_5 (ATerm t)
                {
                  ATerm a_16 = NULL;
                  a_16 = t;
                  if(match_string(t, "--help"))
                    {
                      t = a_16;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = a_16;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = a_16;
                        }
                    }
                  return(t);
                }
                ATerm k_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_f_19;
                  return(t);
                }
                ATerm s_5 (ATerm t)
                {
                  t = term_g_19;
                  return(t);
                }
                t = Option_3_0(h_5, k_5, s_5, t);
                ;
                LocalPopChoice(e_19);
              }
            else
              {
                t = d_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_5, t);
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_16 = NULL;
          f_16 = t;
          {
            ATerm j_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_16;
                {
                  ATerm l_19 = t;
                  int m_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm n_19 = t;
                        int o_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_17 = NULL;
                            t = eval_config_0_0(t);
                            d_17 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_17);
                            t = d_17;
                            ;
                            LocalPopChoice(o_19);
                          }
                        else
                          {
                            t = n_19;
                          }
                      }
                      ;
                      LocalPopChoice(m_19);
                    }
                  else
                    {
                      t = l_19;
                      {
                        ATerm t_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(t_5, t);
                      }
                    }
                  t = f_16;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(k_19);
              }
            else
              {
                t = j_19;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm p_19 = t;
                  int q_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_17 = NULL;
                      t = eval_config_0_0(t);
                      j_17 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), j_17);
                      t = j_17;
                      ;
                      LocalPopChoice(q_19);
                    }
                  else
                    {
                      t = p_19;
                    }
                  t = f_16;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(i_19);
        }
      else
        {
          t = h_19;
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_6 (ATerm t)
                {
                  ATerm m_6 (ATerm t)
                  {
                    if(((y_15 != NULL) && (y_15 != t)))
                      _fail(t);
                    else
                      y_15 = t;
                    return(t);
                  }
                  t = Undefined_1_0(m_6, t);
                  return(t);
                }
                t = fetch_1_0(l_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_b_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), term_t_19));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(s_19);
              }
            else
              {
                t = r_19;
              }
          }
        }
      z_15 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_15;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t)
{
  ATerm i_16 = NULL;
  t = parse_options_1_0(i_91, t);
  i_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_16);
  t = i_16;
  t = k_91(t);
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_91, t);
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_90(t);
        ;
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              {
                ATerm c_20 = t;
                int d_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(d_20);
                  }
                else
                  {
                    t = c_20;
                    {
                      ATerm e_20 = t;
                      int f_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_6 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm r_6 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_g_20;
                            return(t);
                          }
                          ATerm t_6 (ATerm t)
                          {
                            t = term_h_20;
                            return(t);
                          }
                          t = Option_3_0(q_6, r_6, t_6, t);
                          ;
                          LocalPopChoice(f_20);
                        }
                      else
                        {
                          t = e_20;
                          {
                            ATerm i_20 = t;
                            int j_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_20);
                              }
                            else
                              {
                                t = i_20;
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
  ATerm o_6 (ATerm t)
  {
    ATerm u_6 (ATerm t)
    {
      ATerm j_16 = NULL,k_16 = NULL;
      j_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_17 = NULL;
            t = eval_config_0_0(t);
            n_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_17);
            t = n_17;
            ;
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
          }
        k_16 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, k_16));
        t = j_16;
      }
      return(t);
    }
    t = if_verbose2_1_0(u_6, t);
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    ATerm l_16 = NULL,m_16 = NULL,q_17 = NULL;
    l_16 = t;
    {
      ATerm m_20 = t;
      int n_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_16 != NULL) && (m_16 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_16 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_6, t);
          ;
          LocalPopChoice(n_20);
        }
      else
        {
          t = m_20;
          t = term_o_20;
          m_16 = t;
        }
      t = not_null(m_16);
      t = ReadFromFile_0_0(t);
      q_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_16, q_17);
      t = apply_strategy_1_0(r_90, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_6, t_90, o_6, p_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    t = _2_0(_id, Treeviz_0_0, t);
    return(t);
  }
  t = iowrap_3_0(z_6, _fail, default_usage_0_0, t);
  return(t);
}

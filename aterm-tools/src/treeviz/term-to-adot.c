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
Symbol sym_Graph_0;
Symbol sym_Tree_0;
Symbol sym_DotDigraph_2;
Symbol sym_AttrId_2;
Symbol sym_Node_2;
Symbol sym_Id_1;
Symbol sym_Attrs_1;
Symbol sym_EdgeNoAttrs_2;
Symbol sym_Arrow_1;
Symbol sym_Some_1;
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
  sym_Graph_0 = ATmakeSymbol("Graph", 0, ATfalse);
  ATprotectSymbol(sym_Graph_0);
  sym_Tree_0 = ATmakeSymbol("Tree", 0, ATfalse);
  ATprotectSymbol(sym_Tree_0);
  sym_DotDigraph_2 = ATmakeSymbol("DotDigraph", 2, ATfalse);
  ATprotectSymbol(sym_DotDigraph_2);
  sym_AttrId_2 = ATmakeSymbol("AttrId", 2, ATfalse);
  ATprotectSymbol(sym_AttrId_2);
  sym_Node_2 = ATmakeSymbol("Node", 2, ATfalse);
  ATprotectSymbol(sym_Node_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_Attrs_1 = ATmakeSymbol("Attrs", 1, ATfalse);
  ATprotectSymbol(sym_Attrs_1);
  sym_EdgeNoAttrs_2 = ATmakeSymbol("EdgeNoAttrs", 2, ATfalse);
  ATprotectSymbol(sym_EdgeNoAttrs_2);
  sym_Arrow_1 = ATmakeSymbol("Arrow", 1, ATfalse);
  ATprotectSymbol(sym_Arrow_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
ATerm term_c_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_h_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_i_14;
ATerm term_f_13;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_x_10;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_j_8;
ATerm term_f_8;
ATerm term_c_8;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_x_0;
void init_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_AttrId_2, term_j_9, term_o_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__3, term_y_19, term_z_19, term_x_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm ListEdgeToDot_0_0 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm union_1_0 (ATerm x_74 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm q_84 (ATerm), ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_71 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_71 (ATerm), ATerm);
ATerm _2_0 (ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_84 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_84 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_70 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm a_63 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_63 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_89 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm l_89 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL;
  b_0 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  f_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), f_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_0;
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm g_5 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_0 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm n_0 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_k_7;
        return(t);
      }
      ATerm o_0 (ATerm t)
      {
        t = term_q_7;
        return(t);
      }
      t = Option_3_0(k_0, n_0, o_0, t);
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = g_5;
      {
        ATerm q_0 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_7;
          return(t);
        }
        ATerm u_0 (ATerm t)
        {
          t = term_t_7;
          return(t);
        }
        t = Option_3_0(q_0, t_0, u_0, t);
      }
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm l_0 = NULL;
  ATerm v_0 (ATerm t)
  {
    ATerm m_0 = NULL;
    m_0 = t;
    t = SSL_explode_string(m_0);
    return(t);
  }
  t = map_1_0(v_0, t);
  t = concat_0_0(t);
  l_0 = t;
  t = SSL_implode_string(l_0);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 = t;
      int y_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_0 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_7 = ATgetFirst((ATermList) t);
              if(((ATgetType(z_7) != AT_INT) || (ATgetInt((ATermInt) z_7) != 34)))
                _fail(t);
              p_0 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(p_0), term_f_8), term_c_8);
          ;
          LocalPopChoice(y_7);
        }
      else
        {
          t = w_7;
          {
            ATerm r_0 = NULL,s_0 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_0 = ATgetFirst((ATermList) t);
                s_0 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_0;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(s_0), term_c_8), term_c_8);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(s_0), term_j_8), term_c_8);
              }
          }
        }
      {
        ATerm w_0 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, w_0, t);
      }
      ;
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm k_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL;
  i_3 = t;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,d_2 = NULL,m_2 = NULL,p_2 = NULL,q_2 = NULL,t_2 = NULL;
        t = SSL_explode_term(k_3);
        if(match_cons(t, sym__2))
          {
            z_1 = ATgetArgument(t, 0);
            a_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(z_1);
        t = escape_chars_0_0(t);
        m_2 = t;
        t = SSL_implode_string(m_2);
        p_2 = t;
        t = SSL_explode_string(p_2);
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_2), term_f_8), (ATerm) ATinsert(ATempty, term_f_8));
        {
          ATerm r_8 = t;
          int u_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm z_8 = ATgetArgument(t, 0);
                  ATerm f_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_2), term_f_8);
              {
                ATerm y_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_f_8);
                  return(t);
                }
                t = at_end_1_0(y_0, t);
              }
              ;
              LocalPopChoice(u_8);
            }
          else
            {
              t = r_8;
              {
                ATerm p_3 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_2), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                if(match_cons(t, sym__2))
                  {
                    ATerm h_9 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    p_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_3;
                t = concat_0_0(t);
              }
            }
          q_2 = t;
          t = SSL_implode_string(q_2);
          b_2 = t;
          t = a_2;
          {
            ATerm z_0 (ATerm t)
            {
              ATerm k_2 = NULL;
              k_2 = t;
              t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, j_3), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, k_2))));
              return(t);
            }
            t = map_1_0(z_0, t);
            d_2 = t;
            t = (ATerm) ATinsert(CheckATermList(d_2), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, j_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_j_9, b_2))))));
          }
        }
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm y_3 = NULL,e_4 = NULL,h_4 = NULL,i_4 = NULL;
          t = SSL_is_int(k_3);
          t = SSL_int_to_string(k_3);
          h_4 = t;
          t = SSL_explode_string(h_4);
          t = escape_chars_0_0(t);
          i_4 = t;
          t = SSL_implode_string(i_4);
          y_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), y_3), term_k_9);
          t = concat_strings_0_0(t);
          e_4 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, j_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_j_9, e_4))))));
        }
      }
  }
  return(t);
}
ATerm ListEdgeToDot_0_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm m_9 = ATgetFirst((ATermList) t);
          ATerm n_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_3;
    }
  t = u_3;
  {
    ATerm a_1 (ATerm t)
    {
      ATerm c_4 = NULL;
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, t_3), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, c_4))));
      return(t);
    }
    t = map_1_0(a_1, t);
    v_3 = t;
    t = (ATerm) ATinsert(CheckATermList(v_3), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, t_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_q_9)))));
  }
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm g_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,u_4 = NULL,v_4 = NULL;
  g_4 = t;
  t = SSL_address(g_4);
  k_4 = t;
  t = SSL_int_to_string(k_4);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, l_4);
  t = conc_strings_0_0(t);
  j_4 = t;
  t = g_4;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 (ATerm t)
        {
          ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
          z_4 = t;
          t = SSL_address(z_4);
          y_4 = t;
          t = SSL_int_to_string(y_4);
          a_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_9, a_5);
          t = conc_strings_0_0(t);
          return(t);
        }
        t = map_1_0(b_1, t);
        ;
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        {
          ATerm c_1 (ATerm t)
          {
            ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL;
            c_5 = t;
            t = SSL_address(c_5);
            b_5 = t;
            t = SSL_int_to_string(b_5);
            d_5 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_r_9, d_5);
            t = conc_strings_0_0(t);
            return(t);
          }
          t = SRTS_all(c_1, t);
        }
      }
    u_4 = t;
    t = g_4;
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm e_5 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_5 = ATgetArgument(t, 0);
                  if((e_5 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(f_1, t);
            return(t);
          }
          t = foldr_3_0(d_1, e_1, term_to_graph_0_0, t);
          ;
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            ATerm o_4 = NULL;
            t = SSL_explode_term(g_4);
            if(match_cons(t, sym__2))
              {
                ATerm y_9 = ATgetArgument(t, 0);
                o_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_4;
            {
              ATerm g_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm h_1 (ATerm t)
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm s_4 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      s_4 = ATgetArgument(t, 0);
                      if((s_4 != ATgetArgument(t, 1)))
                        {
                          _fail(ATgetArgument(t, 1));
                        }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = union_1_0(i_1, t);
                return(t);
              }
              t = foldr_3_0(g_1, h_1, term_to_graph_0_0, t);
            }
          }
        }
      v_4 = t;
      t = (ATerm) ATinsert(CheckATermList(v_4), (ATerm) ATmakeAppl(sym__2, j_4, u_4));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm z_9 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_5;
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = z_9;
          {
            ATerm f_10 = t;
            int h_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_4 = NULL,w_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    t_4 = ATgetFirst((ATermList) t);
                    w_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_5;
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm x_4 = NULL;
                    x_4 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_4, x_4);
                    t = x_74(t);
                    return(t);
                  }
                  t = fetch_1_0(j_1, t);
                  t = w_4;
                  t = m_5(t);
                }
                ;
                LocalPopChoice(h_10);
              }
            else
              {
                t = f_10;
                t = Cons_2_0(_id, m_5, t);
              }
          }
        }
      return(t);
    }
    t = m_5(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t)
{
  ATerm j_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_76(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = j_10;
      {
        ATerm s_5 = NULL,u_5 = NULL,x_5 = NULL,y_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_5 = ATgetFirst((ATermList) t);
            u_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_5;
        t = z_76(t);
        x_5 = t;
        t = u_5;
        t = foldr_3_0(x_76, y_76, z_76, t);
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_5, y_5);
        t = y_76(t);
      }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1_0 (ATerm q_84 (ATerm), ATerm t)
{
  ATerm n_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_6 = NULL,g_6 = NULL;
      c_6 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm t_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_6 = NULL;
            t = eval_config_0_0(t);
            f_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_6);
            t = f_6;
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = t_10;
          }
        g_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_6, term_x_10);
        t = geq_0_0(t);
        t = c_6;
        t = q_84(t);
      }
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = n_10;
    }
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm h_6 = NULL,i_6 = NULL;
  ATerm k_1 (ATerm t)
  {
    ATerm t_6 = NULL;
    t_6 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_6), (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue))));
    t = t_6;
    return(t);
  }
  t = if_verbose5_1_0(k_1, t);
  h_6 = t;
  t = new_0_0(t);
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_6, h_6);
  {
    ATerm s_6 (ATerm t)
    {
      ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,v_8 = NULL;
      ATerm l_1 (ATerm t)
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 (ATerm t)
            {
              ATerm m_6 = NULL,n_6 = NULL;
              m_6 = t;
              t = new_0_0(t);
              n_6 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_6, m_6);
              return(t);
            }
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            {
              ATerm n_1 (ATerm t)
              {
                ATerm o_6 = NULL,p_6 = NULL;
                o_6 = t;
                t = new_0_0(t);
                p_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_6, o_6);
                return(t);
              }
              t = SRTS_all(n_1, t);
            }
          }
        return(t);
      }
      t = _2_0(_id, l_1, t);
      j_6 = t;
      {
        ATerm o_1 (ATerm t)
        {
          ATerm a_11 = t;
          int b_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_1 (ATerm t)
              {
                ATerm s_7 = NULL,e_8 = NULL;
                s_7 = t;
                t = SSL_explode_term(s_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_11 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm f_11 = ATgetArgument(t, 1);
                      if(((ATgetType(f_11) == AT_LIST) && !(ATisEmpty(f_11))))
                        {
                          e_8 = ATgetFirst((ATermList) f_11);
                          {
                            ATerm g_11 = (ATerm) ATgetNext((ATermList) f_11);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = e_8;
                return(t);
              }
              t = map_1_0(p_1, t);
              ;
              LocalPopChoice(b_11);
            }
          else
            {
              t = a_11;
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm m_8 = NULL,n_8 = NULL;
                  m_8 = t;
                  t = SSL_explode_term(m_8);
                  if(match_cons(t, sym__2))
                    {
                      ATerm i_11 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) i_11) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm j_11 = ATgetArgument(t, 1);
                        if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
                          {
                            n_8 = ATgetFirst((ATermList) j_11);
                            {
                              ATerm k_11 = (ATerm) ATgetNext((ATermList) j_11);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = n_8;
                  return(t);
                }
                t = SRTS_all(q_1, t);
              }
            }
          return(t);
        }
        t = _2_0(_id, o_1, t);
        k_6 = t;
        t = SSL_explode_term(j_6);
        if(match_cons(t, sym__2))
          {
            ATerm o_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_11 = ATgetArgument(t, 1);
              if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
                {
                  ATerm q_11 = ATgetFirst((ATermList) p_11);
                  ATerm t_11 = (ATerm) ATgetNext((ATermList) p_11);
                  if(((ATgetType(t_11) == AT_LIST) && !(ATisEmpty(t_11))))
                    {
                      v_8 = ATgetFirst((ATermList) t_11);
                      {
                        ATerm u_11 = (ATerm) ATgetNext((ATermList) t_11);
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
        t = v_8;
        {
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_1 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              ATerm s_1 (ATerm t)
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm q_6 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      q_6 = ATgetArgument(t, 0);
                      if((q_6 != ATgetArgument(t, 1)))
                        {
                          _fail(ATgetArgument(t, 1));
                        }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = union_1_0(t_1, t);
                return(t);
              }
              t = foldr_3_0(r_1, s_1, s_6, t);
              ;
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              {
                ATerm b_9 = NULL;
                t = SSL_explode_term(v_8);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_11 = ATgetArgument(t, 0);
                    b_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_9;
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm v_1 (ATerm t)
                  {
                    ATerm w_1 (ATerm t)
                    {
                      ATerm l_9 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          l_9 = ATgetArgument(t, 0);
                          if((l_9 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(w_1, t);
                    return(t);
                  }
                  t = foldr_3_0(u_1, v_1, s_6, t);
                }
              }
            }
          l_6 = t;
          t = (ATerm) ATinsert(CheckATermList(l_6), k_6);
        }
      }
      return(t);
    }
    t = s_6(t);
  }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm c_11 = NULL,u_6 = NULL;
  u_6 = t;
  {
    ATerm a_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)));
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_10 = NULL;
              t = eval_config_0_0(t);
              e_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), e_10);
              t = e_10;
              ;
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
            }
          t = u_6;
          t = term_to_tree_0_0(t);
        }
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = a_12;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)));
        {
          ATerm k_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_10 = NULL;
              t = eval_config_0_0(t);
              o_10 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), o_10);
              t = o_10;
              ;
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
            }
          t = u_6;
          t = term_to_graph_0_0(t);
        }
      }
    {
      ATerm x_1 (ATerm t)
      {
        ATerm m_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ListEdgeToDot_0_0(t);
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = m_12;
            t = EdgeToDot_0_0(t);
          }
        return(t);
      }
      t = map_1_0(x_1, t);
      t = concat_0_0(t);
      c_11 = t;
      t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_r_12, c_11);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, term_t_12);
  t = open_stream_0_0(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, z_6);
  t = j_83(t);
  t = fclose_0_0(t);
  t = z_6;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  b_7 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_2, t);
          ;
          LocalPopChoice(w_12);
        }
      else
        {
          t = v_12;
          t = term_f_13;
          if(((c_7 != NULL) && (c_7 != t)))
            _fail(t);
          else
            c_7 = t;
        }
      return(t);
    }
    t = _2_0(y_1, _id, t);
    t = b_7;
    {
      ATerm e_2 (ATerm t)
      {
        ATerm d_11 = NULL;
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), d_11);
        return(t);
      }
      t = _2_0(_id, e_2, t);
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 (ATerm t)
            {
              ATerm h_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(h_2, t);
              return(t);
            }
            ATerm g_2 (ATerm t)
            {
              ATerm i_2 (ATerm t)
              {
                ATerm d_7 = NULL,e_7 = NULL,f_7 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm i_13 = ATgetArgument(t, 0);
                    if(match_cons(i_13, sym_Stream_1))
                      {
                        d_7 = ATgetArgument(i_13, 0);
                      }
                    else
                      _fail(t);
                    e_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(d_7, e_7);
                f_7 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_7);
                return(t);
              }
              t = WriteToFile_1_0(i_2, t);
              return(t);
            }
            t = _2_0(f_2, g_2, t);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm j_2 (ATerm t)
              {
                ATerm l_2 (ATerm t)
                {
                  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_13 = ATgetArgument(t, 0);
                      if(match_cons(j_13, sym_Stream_1))
                        {
                          g_7 = ATgetArgument(j_13, 0);
                        }
                      else
                        _fail(t);
                      h_7 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(g_7, h_7);
                  i_7 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), i_7);
                  j_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, j_7);
                  return(t);
                }
                t = WriteToFile_1_0(l_2, t);
                return(t);
              }
              t = _2_0(_id, j_2, t);
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
ATerm apply_strategy_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  l_7 = t;
  t = dtime_0_0(t);
  t = l_7;
  t = l_86(t);
  m_7 = t;
  t = dtime_0_0(t);
  n_7 = t;
  t = m_7;
  if(match_cons(t, sym__2))
    {
      o_7 = ATgetArgument(t, 0);
      p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_7), (ATerm) ATmakeAppl(sym_Runtime_1, n_7)), p_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_8 (ATerm x_7, ATerm t)
  {
    t = SSL_fclose(x_7);
    return(t);
  }
  ATerm a_8 = NULL,b_8 = NULL;
  b_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_8 = ATgetArgument(t, 0);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_8);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            t = d_8(b_8, t);
          }
      }
    }
  else
    {
      t = d_8(b_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_8 = NULL;
  t = SSL_stdin_stream();
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  t = SSL_stdout_stream();
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_stderr_stream();
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_13 = ATgetArgument(t, 0);
      ATerm r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_12 = NULL,z_12 = NULL;
        x_12 = t;
        t = SSL_explode_term(x_12);
        if(match_cons(t, sym__2))
          {
            ATerm x_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm y_13 = ATgetArgument(t, 1);
              if(((ATgetType(y_13) == AT_LIST) && !(ATisEmpty(y_13))))
                {
                  z_12 = ATgetFirst((ATermList) y_13);
                  {
                    ATerm a_14 = (ATerm) ATgetNext((ATermList) y_13);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = z_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = z_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = z_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_8 = NULL,s_8 = NULL,t_8 = NULL;
              ATerm n_2 (ATerm t)
              {
                ATerm w_8 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    w_8 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_8;
                return(t);
              }
              t = _2_0(n_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_8 = ATgetArgument(t, 0);
                  s_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_8, s_8);
              t_8 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, t_8);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm x_8 = NULL,y_8 = NULL,a_9 = NULL;
                ATerm o_2 (ATerm t)
                {
                  ATerm c_9 = NULL;
                  c_9 = t;
                  t = SSL_is_string(c_9);
                  return(t);
                }
                t = _2_0(o_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    x_8 = ATgetArgument(t, 0);
                    y_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(x_8, y_8);
                a_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, a_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,g_9 = NULL;
  ATerm d_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 = NULL;
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_9, term_i_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = d_14;
      {
        ATerm a_13 = NULL;
        a_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_13), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = a_13;
        _fail(t);
      }
    }
  d_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(g_9);
  e_9 = t;
  t = d_9;
  t = fclose_0_0(t);
  t = e_9;
  return(t);
}
ATerm fetch_1_0 (ATerm e_71 (ATerm), ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    ATerm j_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(e_71, _id, t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = j_14;
        t = Cons_2_0(_id, p_9, t);
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = n_14;
      {
        ATerm s_9 = NULL,t_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_9 = ATgetFirst((ATermList) t);
            t_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_9;
        {
          ATerm r_2 (ATerm t)
          {
            t = t_9;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_10, t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_71(t);
      }
    return(t);
  }
  t = a_10(t);
  return(t);
}
ATerm _2_0 (ATerm u_54 (ATerm), ATerm v_54 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,g_10 = NULL,i_10 = NULL,k_10 = NULL,l_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_10);
  c_10 = t;
  t = d_10;
  t = u_54(t);
  i_10 = t;
  t = g_10;
  t = v_54(t);
  k_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, i_10, k_10), c_10);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  ATerm s_2 (ATerm t)
  {
    ATerm r_10 = NULL;
    r_10 = t;
    t = SSL_explode_string(r_10);
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm s_10 = NULL;
    s_10 = t;
    t = SSL_explode_string(s_10);
    return(t);
  }
  t = _2_0(s_2, u_2, t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_10 = NULL,v_10 = NULL;
        if(match_cons(t, sym__2))
          {
            u_10 = ATgetArgument(t, 0);
            v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_10;
        {
          ATerm v_2 (ATerm t)
          {
            t = v_10;
            return(t);
          }
          t = at_end_1_0(v_2, t);
        }
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        {
          ATerm s_13 = NULL,t_13 = NULL;
          s_13 = t;
          t = SSL_explode_term(s_13);
          if(match_cons(t, sym__2))
            {
              ATerm v_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              t_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_13;
          t = concat_0_0(t);
        }
      }
    p_10 = t;
    t = SSL_implode_string(p_10);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL;
      h_11 = t;
      t = SSL_is_string(h_11);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_2 (ATerm t)
            {
              ATerm a_15 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(b_15);
                }
              else
                {
                  t = a_15;
                }
              return(t);
            }
            t = map_1_0(w_2, t);
            ;
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            {
              ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
              l_11 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_11 = ATgetArgument(t, 0);
                  t = m_11;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_11 = ATgetArgument(t, 0);
                      t = m_11;
                      {
                        ATerm f_15 = t;
                        int g_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_11);
                            {
                              ATerm i_15 = t;
                              int k_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_17 = NULL;
                                  t = eval_config_0_0(t);
                                  j_17 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_11, j_17);
                                  t = j_17;
                                  ;
                                  LocalPopChoice(k_15);
                                }
                              else
                                {
                                  t = i_15;
                                }
                            }
                            ;
                            LocalPopChoice(g_15);
                          }
                        else
                          {
                            t = f_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_11), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = m_11;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_11 = NULL,s_11 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_11 = ATgetArgument(t, 0);
                          n_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_11;
                      t = eval_config_0_0(t);
                      r_11 = t;
                      t = n_11;
                      t = eval_config_0_0(t);
                      s_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_11, s_11);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm o_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_11 = NULL,z_11 = NULL;
      x_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_18 = NULL;
            t = eval_config_0_0(t);
            h_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_18);
            t = h_18;
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
          }
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_11, term_a_16);
        t = geq_0_0(t);
        t = x_11;
        t = n_84(t);
      }
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = o_15;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm b_12 = NULL;
    b_12 = t;
    if(match_string(t, "-k"))
      {
        t = b_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = b_12;
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm c_12 = NULL,d_12 = NULL;
    c_12 = t;
    t = SSL_string_to_int(c_12);
    d_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), d_12);
    t = c_12;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm f_12 = NULL;
        f_12 = t;
        if(match_string(t, "-S"))
          {
            t = f_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = f_12;
          }
        return(t);
      }
      ATerm b_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_m_16;
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_n_16;
        return(t);
      }
      t = Option_3_0(a_3, b_3, c_3, t);
      ;
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      {
        ATerm o_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              ATerm g_12 = NULL,h_12 = NULL;
              g_12 = t;
              t = SSL_string_to_int(g_12);
              h_12 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_12);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, g_12);
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              t = term_w_16;
              return(t);
            }
            t = ArgOption_3_0(d_3, e_3, f_3, t);
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = o_16;
            {
              ATerm g_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_x_16;
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                t = term_a_17;
                return(t);
              }
              t = Option_3_0(g_3, h_3, l_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_12 = NULL;
      t = term_x_0;
      t = d_0(t);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_17, term_e_17, p_12);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_12 = ATgetFirst((ATermList) t);
          o_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_12;
      t = a_0(t);
      t = term_x_0;
      t = c_0(t);
      s_12 = t;
      t = (ATerm) ATinsert(CheckATermList(o_12), s_12);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm u_12 = NULL;
    u_12 = t;
    if(match_string(t, "-o"))
      {
        t = u_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_12;
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm y_12 = NULL;
    y_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), y_12);
    t = (ATerm) ATmakeAppl(sym_Output_1, y_12);
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__3))
    {
      b_13 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
      d_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_13, c_13);
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            ATerm o_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_13, c_13);
        ;
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        t = (ATerm) ATempty;
      }
    e_13 = t;
    t = SSL_table_put(b_13, c_13, (ATerm) ATinsert(CheckATermList(e_13), d_13));
    t = (ATerm) ATmakeAppl(sym__3, b_13, c_13, d_13);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_13 = NULL;
      t = term_x_0;
      t = j_0(t);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_17, term_e_17, u_13);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_13 = ATgetFirst((ATermList) t);
          o_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_13 = ATgetFirst((ATermList) t);
          q_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_13;
      t = h_0(t);
      t = p_13;
      t = i_0(t);
      z_13 = t;
      t = (ATerm) ATinsert(CheckATermList(q_13), z_13);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm e_14 = NULL;
    e_14 = t;
    if(match_string(t, "-i"))
      {
        t = e_14;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_14;
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm f_14 = NULL;
    f_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_14);
    t = (ATerm) ATmakeAppl(sym_Input_1, f_14);
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_p_17;
    return(t);
  }
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  h_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), h_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_18 = NULL;
        t = eval_config_0_0(t);
        l_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_18);
        t = l_18;
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_76(t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm k_14 = NULL,l_14 = NULL,o_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_14 = ATgetFirst((ATermList) t);
            l_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_14;
        t = foldr_2_0(v_76, w_76, t);
        o_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_14, o_14);
        t = w_76(t);
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
  ATerm r_14 = NULL,m_18 = NULL,n_18 = NULL;
  t = times_0_0(t);
  m_18 = t;
  t = SSL_explode_term(m_18);
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_18;
  {
    ATerm w_3 (ATerm t)
    {
      t = term_j_16;
      return(t);
    }
    ATerm x_3 (ATerm t)
    {
      ATerm q_18 = NULL,r_18 = NULL;
      if(match_cons(t, sym__2))
        {
          q_18 = ATgetArgument(t, 0);
          r_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm c_18 = t;
        int d_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_18, r_18);
            ;
            LocalPopChoice(d_18);
          }
        else
          {
            t = c_18;
            t = SSL_addr(q_18, r_18);
          }
      }
      return(t);
    }
    t = foldr_2_0(w_3, x_3, t);
    r_14 = t;
    t = SSL_TicksToSeconds(r_14);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_15;
        if((d_15 != t))
          {
            _fail(t);
          }
        t = c_15;
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = c_15;
        {
          ATerm g_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_15, e_15);
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = g_18;
              t = SSL_gtr(d_15, e_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_15, e_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm j_18 = t;
  int k_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_15 = NULL,j_15 = NULL;
      h_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_19 = NULL;
            t = eval_config_0_0(t);
            b_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_19);
            t = b_19;
            ;
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
          }
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_15, term_s_18);
        t = geq_0_0(t);
        t = h_15;
        t = m_84(t);
      }
      ;
      LocalPopChoice(k_18);
    }
  else
    {
      t = j_18;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL;
    t = run_time_0_0(t);
    l_15 = t;
    t = term_x_0;
    t = whoami_0_0(t);
    m_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_15));
    t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_18), l_15), term_u_18), m_15));
    return(t);
  }
  t = if_verbose1_1_0(z_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm w_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_19 = NULL;
            t = eval_config_0_0(t);
            f_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_19);
            t = f_19;
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
          }
      }
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = w_18;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm a_19 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(c_19);
            }
          else
            {
              t = a_19;
              {
                ATerm d_19 = t;
                int e_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(e_19);
                  }
                else
                  {
                    t = d_19;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(a_4, t);
      }
    }
  t = j_87(t);
  return(t);
}
ATerm map_1_0 (ATerm t_70 (ATerm), ATerm t)
{
  ATerm n_15 (ATerm t)
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = Cons_2_0(t_70, n_15, t);
      }
    return(t);
  }
  t = n_15(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_15 = ATgetFirst((ATermList) t);
      q_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_15 = NULL,v_15 = NULL;
        t = q_15;
        t = g_0(t);
        u_15 = t;
        t = p_15;
        t = e_0(t);
        v_15 = t;
        t = q_15;
        {
          ATerm b_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(u_15), v_15);
            return(t);
          }
          t = reverse_acc_2_0(e_0, b_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_0;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm a_63 (ATerm), ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  z_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_15);
  w_15 = t;
  t = x_15;
  t = a_63(t);
  y_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, y_15), w_15);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = NULL;
            t = eval_config_0_0(t);
            j_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_19);
            t = j_19;
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
          }
      }
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = i_19;
      {
        ATerm d_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(d_4, t);
      }
    }
  t = term_o_19;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm f_4 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, f_4, t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm c_16 = NULL;
        c_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_16), term_p_19);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(m_4, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm b_63 (ATerm), ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  g_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_16);
  d_16 = t;
  t = e_16;
  t = b_63(t);
  f_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_16), d_16);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  k_16 = t;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_19 = ATgetFirst((ATermList) t);
                ATerm t_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_16;
          }
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATinsert(ATempty, k_16);
      }
    l_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), l_16);
    t = k_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL;
        t = eval_config_0_0(t);
        n_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_19);
        t = n_19;
        ;
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_a_20;
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = term_c_20;
        return(t);
      }
      t = Option_3_0(n_4, p_4, q_4, t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm r_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_d_20;
          return(t);
        }
        ATerm h_5 (ATerm t)
        {
          t = term_e_20;
          return(t);
        }
        t = Option_3_0(r_4, f_5, h_5, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_56 (ATerm), ATerm e_56 (ATerm), ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      r_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  p_16 = t;
  t = q_16;
  t = d_56(t);
  s_16 = t;
  t = r_16;
  t = e_56(t);
  t_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_16), s_16), p_16);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_89 (ATerm), ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_20;
        t = m_89(t);
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
      }
    t = y_16;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm z_16 = NULL;
        z_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_16);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_16);
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = t;
            int n_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(n_20);
              }
            else
              {
                t = m_20;
                t = m_89(t);
                t = Cons_2_0(_id, j_5, t);
              }
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm b_17 = NULL,c_17 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_17 = ATgetFirst((ATermList) t);
                  c_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_17), (ATerm) ATmakeAppl(sym_Undefined_1, b_17));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_5, j_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = k_17;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm p_20 = t;
      int q_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_89(t);
          ;
          LocalPopChoice(q_20);
        }
      else
        {
          t = p_20;
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm n_17 = NULL;
                  n_17 = t;
                  if(match_string(t, "--help"))
                    {
                      t = n_17;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = n_17;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = n_17;
                        }
                    }
                  return(t);
                }
                ATerm p_5 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_t_20;
                  return(t);
                }
                ATerm q_5 (ATerm t)
                {
                  t = term_u_20;
                  return(t);
                }
                t = Option_3_0(o_5, p_5, q_5, t);
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_5, t);
    {
      ATerm v_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_17 = NULL;
          s_17 = t;
          {
            ATerm x_20 = t;
            int y_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = s_17;
                {
                  ATerm z_20 = t;
                  int a_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm b_21 = t;
                        int c_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_20 = NULL;
                            t = eval_config_0_0(t);
                            b_20 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), b_20);
                            t = b_20;
                            ;
                            LocalPopChoice(c_21);
                          }
                        else
                          {
                            t = b_21;
                          }
                      }
                      ;
                      LocalPopChoice(a_21);
                    }
                  else
                    {
                      t = z_20;
                      {
                        ATerm r_5 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(r_5, t);
                      }
                    }
                  t = s_17;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(y_20);
              }
            else
              {
                t = x_20;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm d_21 = t;
                  int e_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_20 = NULL;
                      t = eval_config_0_0(t);
                      h_20 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), h_20);
                      t = h_20;
                      ;
                      LocalPopChoice(e_21);
                    }
                  else
                    {
                      t = d_21;
                    }
                  t = s_17;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(w_20);
        }
      else
        {
          t = v_20;
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm v_5 (ATerm t)
                  {
                    if(((l_17 != NULL) && (l_17 != t)))
                      _fail(t);
                    else
                      l_17 = t;
                    return(t);
                  }
                  t = Undefined_1_0(v_5, t);
                  return(t);
                }
                t = fetch_1_0(t_5, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_17)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_17)), term_h_21));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
              }
          }
        }
      m_17 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = m_17;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t)
{
  ATerm v_17 = NULL;
  t = parse_options_1_0(l_87, t);
  v_17 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), v_17);
  t = v_17;
  t = n_87(t);
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_87, t);
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_87(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_86(t);
        ;
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm q_21 = t;
                int r_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_21);
                  }
                else
                  {
                    t = q_21;
                    {
                      ATerm s_21 = t;
                      int t_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_6 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm d_6 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_u_21;
                            return(t);
                          }
                          ATerm e_6 (ATerm t)
                          {
                            t = term_v_21;
                            return(t);
                          }
                          t = Option_3_0(b_6, d_6, e_6, t);
                          ;
                          LocalPopChoice(t_21);
                        }
                      else
                        {
                          t = s_21;
                          {
                            ATerm w_21 = t;
                            int x_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(x_21);
                              }
                            else
                              {
                                t = w_21;
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
  ATerm z_5 (ATerm t)
  {
    ATerm r_6 (ATerm t)
    {
      ATerm w_17 = NULL,x_17 = NULL;
      w_17 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_20 = NULL;
            t = eval_config_0_0(t);
            l_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_20);
            t = l_20;
            ;
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
          }
        x_17 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, x_17));
        t = w_17;
      }
      return(t);
    }
    t = if_verbose2_1_0(r_6, t);
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm y_17 = NULL,z_17 = NULL,o_20 = NULL;
    y_17 = t;
    {
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_17 != NULL) && (z_17 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_6, t);
          ;
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          t = term_c_22;
          z_17 = t;
        }
      t = not_null(z_17);
      t = ReadFromFile_0_0(t);
      o_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_17, o_20);
      t = apply_strategy_1_0(u_86, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(w_5, w_86, z_5, a_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm a_18 = NULL;
    if(match_cons(t, sym__2))
      {
        a_18 = ATgetArgument(t, 0);
        {
          ATerm d_22 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = a_18;
    t = to_adot_0_0(t);
    return(t);
  }
  t = iowrap_3_0(w_6, term_to_adot_options_0_0, default_usage_0_0, t);
  return(t);
}

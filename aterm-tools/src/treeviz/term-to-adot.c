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
ATerm term_v_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_y_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_i_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_a_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_k_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_s_12;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_d_6;
void init_constant_terms (void)
{
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_AttrId_2, term_i_7, term_o_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__3, term_s_18, term_t_18, term_s_10);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm term_to_adot_options_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm Escape_0_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm escape_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm ListEdgeToDot_0_0 (ATerm);
ATerm graph_to_adot_0_0 (ATerm);
ATerm NodeId_0_0 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm union_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm crush_3_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm f_84 (ATerm), ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm c_71 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm c_84 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm y_82 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_86 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_82 (ATerm), ATerm);
ATerm _2_0 (ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm t_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm w_70 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm b_63 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm d_89 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_55 (ATerm), ATerm x_55 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_89 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm a_89 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm);
ATerm term_to_adot_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm h_1 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_d_6;
        return(t);
      }
      ATerm k_0 (ATerm t)
      {
        t = term_f_6;
        return(t);
      }
      t = Option_3_0(c_0, e_0, k_0, t);
      ;
      LocalPopChoice(j_5);
    }
  else
    {
      t = h_1;
      {
        ATerm l_0 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_0 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_g_6;
          return(t);
        }
        ATerm n_0 (ATerm t)
        {
          t = term_h_6;
          return(t);
        }
        t = Option_3_0(l_0, m_0, n_0, t);
      }
    }
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm r_0 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm s_0 = NULL;
    s_0 = t;
    t = SSL_explode_string(s_0);
    return(t);
  }
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  r_0 = t;
  t = SSL_implode_string(r_0);
  return(t);
}
ATerm Escape_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_0 = ATgetFirst((ATermList) t);
      z_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_0;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_0), term_j_6), term_i_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_0), term_i_6), term_i_6);
        }
      else
        {
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_0), term_m_6), term_i_6);
        }
    }
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm n_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0_0(t);
      {
        ATerm p_0 (ATerm t)
        {
          t = Cons_2_0(_id, escape_chars_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, p_0, t);
      }
      ;
      LocalPopChoice(q_6);
    }
  else
    {
      t = n_6;
      {
        ATerm r_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = r_6;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm escape_0_0 (ATerm t)
{
  t = string_as_chars_1_0(escape_chars_0_0, t);
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm j_1 = NULL,l_1 = NULL;
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_1), l_1), (ATerm) ATinsert(ATempty, l_1));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, p_1);
  t = quote_chars_0_0(t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL;
  r_1 = t;
  t = SSL_explode_string(r_1);
  t = z_79(t);
  s_1 = t;
  t = SSL_implode_string(s_1);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm EdgeToDot_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL,l_3 = NULL;
  j_3 = t;
  if(match_cons(t, sym__2))
    {
      k_3 = ATgetArgument(t, 0);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL,g_1 = NULL,i_1 = NULL,k_1 = NULL;
        t = SSL_explode_term(l_3);
        if(match_cons(t, sym__2))
          {
            f_1 = ATgetArgument(t, 0);
            g_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_1;
        t = escape_0_0(t);
        t = double_quote_0_0(t);
        i_1 = t;
        t = g_1;
        {
          ATerm q_0 (ATerm t)
          {
            ATerm m_1 = NULL;
            m_1 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, k_3), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, m_1))));
            return(t);
          }
          t = map_1_0(q_0, t);
          k_1 = t;
          t = (ATerm) ATinsert(CheckATermList(k_1), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, k_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_i_7, i_1))))));
        }
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        {
          ATerm v_1 = NULL,w_1 = NULL;
          t = SSL_is_int(l_3);
          t = SSL_int_to_string(l_3);
          t = escape_0_0(t);
          v_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_7), v_1), term_j_7);
          t = concat_strings_0_0(t);
          w_1 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, k_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_i_7, w_1))))));
        }
      }
  }
  return(t);
}
ATerm ListEdgeToDot_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm k_7 = ATgetFirst((ATermList) t);
          ATerm n_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_3;
    }
  t = t_3;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm a_4 = NULL;
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, s_3), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, a_4))));
      return(t);
    }
    t = map_1_0(t_0, t);
    u_3 = t;
    t = (ATerm) ATinsert(CheckATermList(u_3), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, s_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_q_7)))));
  }
  return(t);
}
ATerm graph_to_adot_0_0 (ATerm t)
{
  ATerm c_4 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = ListEdgeToDot_0_0(t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        t = EdgeToDot_0_0(t);
      }
    return(t);
  }
  t = map_1_0(u_0, t);
  t = concat_0_0(t);
  c_4 = t;
  t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_u_7, c_4);
  return(t);
}
ATerm NodeId_0_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  d_4 = t;
  t = SSL_int_to_string(d_4);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, e_4);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,j_4 = NULL,k_4 = NULL;
  f_4 = t;
  t = SSL_address(f_4);
  t = NodeId_0_0(t);
  g_4 = t;
  t = f_4;
  {
    ATerm w_7 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 (ATerm t)
        {
          ATerm r_4 = NULL;
          r_4 = t;
          t = SSL_address(r_4);
          t = NodeId_0_0(t);
          return(t);
        }
        t = map_1_0(v_0, t);
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = w_7;
        {
          ATerm w_0 (ATerm t)
          {
            ATerm h_5 = NULL;
            h_5 = t;
            t = SSL_address(h_5);
            t = NodeId_0_0(t);
            return(t);
          }
          t = SRTS_all(w_0, t);
        }
      }
    j_4 = t;
    t = f_4;
    {
      ATerm f_8 = t;
      int g_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = foldr_3_0(x_0, union_0_0, term_to_graph_0_0, t);
          ;
          LocalPopChoice(g_8);
        }
      else
        {
          t = f_8;
          {
            ATerm a_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3_0(a_1, union_0_0, term_to_graph_0_0, t);
          }
        }
      k_4 = t;
      t = (ATerm) ATinsert(CheckATermList(k_4), (ATerm) ATmakeAppl(sym__2, g_4, j_4));
    }
  }
  return(t);
}
ATerm HdMember_p__2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_5 = ATgetFirst((ATermList) t);
      n_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_74(t);
  {
    ATerm b_1 (ATerm t)
    {
      ATerm x_5 = NULL;
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_5, x_5);
      t = t_74(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
    t = n_5;
  }
  return(t);
}
ATerm union_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_5;
          ;
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm k_8 = t;
            int l_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_1 (ATerm t)
                {
                  t = y_5;
                  return(t);
                }
                t = HdMember_p__2_0(p_74, c_1, t);
                t = a_6(t);
                ;
                LocalPopChoice(l_8);
              }
            else
              {
                t = k_8;
                t = Cons_2_0(_id, a_6, t);
              }
          }
        }
      return(t);
    }
    t = a_6(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm b_6 = NULL;
    if(match_cons(t, sym__2))
      {
        b_6 = ATgetArgument(t, 0);
        if((b_6 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(d_1, t);
  return(t);
}
ATerm crush_3_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t)
{
  ATerm c_6 = NULL,e_6 = NULL;
  c_6 = t;
  t = SSL_explode_term(c_6);
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6;
  t = foldr_3_0(i_80, j_80, k_80, t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_76 (ATerm), ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_76(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      {
        ATerm k_6 = NULL,l_6 = NULL,o_6 = NULL,p_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_6 = ATgetFirst((ATermList) t);
            l_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_6;
        t = r_76(t);
        o_6 = t;
        t = l_6;
        t = foldr_3_0(p_76, q_76, r_76, t);
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_6, p_6);
        t = q_76(t);
      }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm s_6 = NULL,t_6 = NULL;
    s_6 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    t_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_6, term_s_8);
    t = geq_0_0(t);
    t = s_6;
    t = f_84(t);
    return(t);
  }
  t = try_1_0(e_1, t);
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL;
  ATerm n_1 (ATerm t)
  {
    ATerm o_1 (ATerm t)
    {
      t = term_t_8;
      return(t);
    }
    t = debug_1_0(o_1, t);
    return(t);
  }
  t = if_verbose5_1_0(n_1, t);
  u_6 = t;
  t = new_0_0(t);
  v_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_6, u_6);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,m_2 = NULL;
      ATerm q_1 (ATerm t)
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm z_6 = NULL,d_7 = NULL;
              z_6 = t;
              t = new_0_0(t);
              d_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_7, z_6);
              return(t);
            }
            t = map_1_0(t_1, t);
            ;
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            {
              ATerm u_1 (ATerm t)
              {
                ATerm e_7 = NULL,f_7 = NULL;
                e_7 = t;
                t = new_0_0(t);
                f_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_7, e_7);
                return(t);
              }
              t = SRTS_all(u_1, t);
            }
          }
        return(t);
      }
      t = _2_0(_id, q_1, t);
      w_6 = t;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm z_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_1 (ATerm t)
              {
                ATerm z_1 = NULL,b_2 = NULL;
                z_1 = t;
                t = SSL_explode_term(z_1);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_9 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_9 = ATgetArgument(t, 1);
                      if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
                        {
                          b_2 = ATgetFirst((ATermList) e_9);
                          {
                            ATerm f_9 = (ATerm) ATgetNext((ATermList) e_9);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = b_2;
                return(t);
              }
              t = map_1_0(y_1, t);
              ;
              LocalPopChoice(a_9);
            }
          else
            {
              t = z_8;
              {
                ATerm a_2 (ATerm t)
                {
                  ATerm f_2 = NULL,g_2 = NULL;
                  f_2 = t;
                  t = SSL_explode_term(f_2);
                  if(match_cons(t, sym__2))
                    {
                      ATerm i_9 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm j_9 = ATgetArgument(t, 1);
                        if(((ATgetType(j_9) == AT_LIST) && !(ATisEmpty(j_9))))
                          {
                            g_2 = ATgetFirst((ATermList) j_9);
                            {
                              ATerm l_9 = (ATerm) ATgetNext((ATermList) j_9);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = g_2;
                  return(t);
                }
                t = SRTS_all(a_2, t);
              }
            }
          return(t);
        }
        t = _2_0(_id, x_1, t);
        x_6 = t;
        t = SSL_explode_term(w_6);
        if(match_cons(t, sym__2))
          {
            ATerm p_9 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_9 = ATgetArgument(t, 1);
              if(((ATgetType(q_9) == AT_LIST) && !(ATisEmpty(q_9))))
                {
                  ATerm g_10 = ATgetFirst((ATermList) q_9);
                  ATerm h_10 = (ATerm) ATgetNext((ATermList) q_9);
                  if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
                    {
                      m_2 = ATgetFirst((ATermList) h_10);
                      {
                        ATerm i_10 = (ATerm) ATgetNext((ATermList) h_10);
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
        t = m_2;
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_2 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = foldr_3_0(c_2, union_0_0, g_7, t);
              ;
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              {
                ATerm d_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(d_2, union_0_0, g_7, t);
              }
            }
          y_6 = t;
          t = (ATerm) ATinsert(CheckATermList(y_6), x_6);
        }
      }
      return(t);
    }
    t = g_7(t);
  }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm h_7 = NULL;
  h_7 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_10;
        t = get_config_0_0(t);
        t = h_7;
        t = term_to_tree_0_0(t);
        ;
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = term_p_10;
        t = get_config_0_0(t);
        t = h_7;
        t = term_to_graph_0_0(t);
      }
    t = graph_to_adot_0_0(t);
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  l_7 = t;
  t = term_s_10;
  t = whoami_0_0(t);
  m_7 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), m_7), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = l_7;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm p_7 = NULL,t_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_7 = ATgetFirst((ATermList) t);
            t_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_7;
        {
          ATerm e_2 (ATerm t)
          {
            t = t_7;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(e_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  x_7 = t;
  t = SSL_explode_term(x_7);
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_71 (ATerm), ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm i_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_7, t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = i_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_71(t);
      }
    return(t);
  }
  t = z_7(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL;
  if(match_cons(t, sym__2))
    {
      b_8 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8;
  {
    ATerm h_2 (ATerm t)
    {
      t = a_8;
      return(t);
    }
    t = at_end_1_0(h_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = l_11;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm c_8 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm d_8 = NULL;
    d_8 = t;
    t = SSL_explode_string(d_8);
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm h_8 = NULL;
    h_8 = t;
    t = SSL_explode_string(h_8);
    return(t);
  }
  t = _2_0(i_2, j_2, t);
  t = conc_0_0(t);
  c_8 = t;
  t = SSL_implode_string(c_8);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_8 = NULL;
      r_8 = t;
      t = SSL_is_string(r_8);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = t_11;
      {
        ATerm g_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(k_2, t);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = g_12;
            {
              ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
              w_8 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_8 = ATgetArgument(t, 0);
                  t = x_8;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_8 = ATgetArgument(t, 0);
                      t = x_8;
                      {
                        ATerm o_12 = t;
                        int r_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_12);
                          }
                        else
                          {
                            t = o_12;
                            {
                              ATerm l_2 (ATerm t)
                              {
                                t = term_s_12;
                                return(t);
                              }
                              t = debug_1_0(l_2, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm c_9 = NULL,d_9 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_8 = ATgetArgument(t, 0);
                          y_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_8;
                      t = eval_config_0_0(t);
                      c_9 = t;
                      t = y_8;
                      t = eval_config_0_0(t);
                      d_9 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_9, d_9);
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
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_9);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm h_9 = NULL;
      t = eval_config_0_0(t);
      h_9 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), g_9, h_9);
      t = h_9;
      return(t);
    }
    t = try_1_0(n_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm k_9 = NULL,m_9 = NULL;
    k_9 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_9, term_y_12);
    t = geq_0_0(t);
    t = k_9;
    t = c_84(t);
    return(t);
  }
  t = try_1_0(o_2, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm n_9 = NULL,o_9 = NULL,r_9 = NULL,s_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm z_12 = ATgetArgument(t, 0);
        if(match_cons(z_12, sym_Stream_1))
          {
            n_9 = ATgetArgument(z_12, 0);
          }
        else
          _fail(t);
        o_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(n_9, o_9);
    r_9 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), r_9);
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, s_9);
    return(t);
  }
  t = WriteToFile_1_0(p_2, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_9, term_a_13);
  t = open_stream_0_0(t);
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_9, u_9);
  t = y_82(t);
  t = fclose_0_0(t);
  t = u_9;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_13 = ATgetArgument(t, 0);
        if(match_cons(c_13, sym_Stream_1))
          {
            w_9 = ATgetArgument(c_13, 0);
          }
        else
          _fail(t);
        x_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(w_9, x_9);
    y_9 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, y_9);
    return(t);
  }
  t = WriteToFile_1_0(q_2, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL;
  z_9 = t;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                a_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(s_2, t);
          ;
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          t = term_k_13;
          a_10 = t;
        }
      return(t);
    }
    t = _2_0(r_2, _id, t);
    t = z_9;
    {
      ATerm t_2 (ATerm t)
      {
        ATerm u_2 (ATerm t)
        {
          t = not_null(a_10);
          return(t);
        }
        t = split_2_0(u_2, _id, t);
        return(t);
      }
      t = _2_0(_id, t_2, t);
      {
        ATerm l_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              ATerm w_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(w_2, t);
              return(t);
            }
            t = _2_0(v_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = l_13;
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
ATerm apply_strategy_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  b_10 = t;
  t = dtime_0_0(t);
  t = b_10;
  t = a_86(t);
  c_10 = t;
  t = dtime_0_0(t);
  d_10 = t;
  t = c_10;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_10), (ATerm) ATmakeAppl(sym_Runtime_1, d_10)), f_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_10 (ATerm n_10, ATerm t)
  {
    t = SSL_fclose(n_10);
    return(t);
  }
  ATerm q_10 = NULL,r_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_10 = ATgetArgument(t, 0);
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_10);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = t_10(r_10, t);
          }
      }
    }
  else
    {
      t = t_10(r_10, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t = k_82(t);
  v_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_10), v_10));
  t = u_10;
  return(t);
}
ATerm _2_0 (ATerm n_54 (ATerm), ATerm o_54 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym__2))
    {
      x_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_11);
  w_10 = t;
  t = x_10;
  t = n_54(t);
  z_10 = t;
  t = y_10;
  t = o_54(t);
  a_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, z_10, a_11), w_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  t = SSL_stdin_stream();
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_11 = NULL;
  t = SSL_stdout_stream();
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_11 = NULL;
  t = SSL_stderr_stream();
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_11);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      ATerm w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 = NULL,r_3 = NULL;
        q_3 = t;
        t = SSL_explode_term(q_3);
        if(match_cons(t, sym__2))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_14 = ATgetArgument(t, 1);
              if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
                {
                  r_3 = ATgetFirst((ATermList) d_14);
                  {
                    ATerm e_14 = (ATerm) ATgetNext((ATermList) d_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm h_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL;
              ATerm x_2 (ATerm t)
              {
                ATerm p_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    p_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_11;
                return(t);
              }
              t = _2_0(x_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_11 = ATgetArgument(t, 0);
                  n_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_11, n_11);
              o_11 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_11);
              ;
              LocalPopChoice(k_14);
            }
          else
            {
              t = h_14;
              {
                ATerm q_11 = NULL,r_11 = NULL,u_11 = NULL;
                ATerm y_2 (ATerm t)
                {
                  ATerm v_11 = NULL;
                  v_11 = t;
                  t = SSL_is_string(v_11);
                  return(t);
                }
                t = _2_0(y_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_11 = ATgetArgument(t, 0);
                    r_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_11, r_11);
                u_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  ATerm m_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL;
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_11, term_q_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = m_14;
      {
        ATerm z_2 (ATerm t)
        {
          t = term_r_14;
          return(t);
        }
        t = debug_1_0(z_2, t);
        _fail(t);
      }
    }
  w_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_11);
  x_11 = t;
  t = w_11;
  t = fclose_0_0(t);
  t = x_11;
  return(t);
}
ATerm split_2_0 (ATerm c_78 (ATerm), ATerm d_78 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  t = c_78(t);
  c_12 = t;
  t = b_12;
  t = d_78(t);
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_12, d_12);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_3 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              f_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(a_3, t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = term_a_15;
        f_12 = t;
      }
    t = e_12;
    {
      ATerm b_3 (ATerm t)
      {
        t = not_null(f_12);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, b_3, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm h_12 = NULL;
    h_12 = t;
    if(match_string(t, "-k"))
      {
        t = h_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = h_12;
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm i_12 = NULL,j_12 = NULL;
    i_12 = t;
    t = SSL_string_to_int(i_12);
    j_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_12);
    t = i_12;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_g_15;
    return(t);
  }
  t = ArgOption_3_0(c_3, d_3, e_3, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm l_12 = NULL;
        l_12 = t;
        if(match_string(t, "-S"))
          {
            t = l_12;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = l_12;
          }
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_n_15;
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_o_15;
        return(t);
      }
      t = Option_3_0(f_3, g_3, h_3, t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm m_12 = NULL,n_12 = NULL;
              m_12 = t;
              t = SSL_string_to_int(m_12);
              n_12 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), n_12);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, m_12);
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_r_15;
              return(t);
            }
            t = ArgOption_3_0(i_3, m_3, n_3, t);
            ;
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm o_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_w_15;
                return(t);
              }
              ATerm v_3 (ATerm t)
              {
                t = term_x_15;
                return(t);
              }
              t = Option_3_0(o_3, p_3, v_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm p_12 = NULL;
    p_12 = t;
    if(match_string(t, "-o"))
      {
        t = p_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = p_12;
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm q_12 = NULL;
    q_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_12);
    t = (ATerm) ATmakeAppl(sym_Output_1, q_12);
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm z_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_i_16;
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_q_16;
          return(t);
        }
        t = Option_3_0(z_3, b_4, h_4, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  t_12 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = t_12;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm b_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_12 = ATgetFirst((ATermList) t);
          v_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_12 = ATgetFirst((ATermList) t);
          x_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = h_0(t);
      t = w_12;
      t = i_0(t);
      b_13 = t;
      t = (ATerm) ATinsert(CheckATermList(x_12), b_13);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm d_13 = NULL;
    d_13 = t;
    if(match_string(t, "-i"))
      {
        t = d_13;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = d_13;
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    ATerm e_13 = NULL;
    e_13 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_13);
    t = (ATerm) ATmakeAppl(sym_Input_1, e_13);
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = ArgOption_3_0(i_4, l_4, m_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_10;
  t = whoami_0_0(t);
  f_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_13));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_76(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm i_13 = NULL,j_13 = NULL,m_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_13 = ATgetFirst((ATermList) t);
            j_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_13;
        t = foldr_2_0(n_76, o_76, t);
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_13, m_13);
        t = o_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  n_13 = t;
  t = SSL_explode_term(n_13);
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      o_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_13;
  t = foldr_2_0(g_80, h_80, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_13 = NULL;
  t = times_0_0(t);
  {
    ATerm n_4 (ATerm t)
    {
      t = term_k_15;
      return(t);
    }
    ATerm o_4 (ATerm t)
    {
      ATerm q_13 = NULL,r_13 = NULL;
      if(match_cons(t, sym__2))
        {
          q_13 = ATgetArgument(t, 0);
          r_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_13, r_13);
            ;
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            t = SSL_addr(q_13, r_13);
          }
      }
      return(t);
    }
    t = crush_2_0(n_4, o_4, t);
    p_13 = t;
    t = SSL_TicksToSeconds(p_13);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  a_14 = t;
  if(match_cons(t, sym__2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_14;
        if((b_14 != t))
          {
            _fail(t);
          }
        t = a_14;
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = a_14;
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_14, c_14);
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              t = SSL_gtr(b_14, c_14);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_14, c_14);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm p_4 (ATerm t)
  {
    ATerm f_14 = NULL,g_14 = NULL;
    f_14 = t;
    t = term_p_8;
    t = get_config_0_0(t);
    g_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_14, term_o_17);
    t = geq_0_0(t);
    t = f_14;
    t = b_84(t);
    return(t);
  }
  t = try_1_0(p_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm i_14 = NULL,j_14 = NULL;
    t = run_time_0_0(t);
    i_14 = t;
    t = term_s_10;
    t = whoami_0_0(t);
    j_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), i_14), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), j_14));
    t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_17), i_14), term_t_17), j_14));
    return(t);
  }
  t = if_verbose1_1_0(q_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              {
                ATerm a_18 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = a_18;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(s_4, t);
      }
    }
  t = y_86(t);
  return(t);
}
ATerm map_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm l_14 (ATerm t)
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = Cons_2_0(m_70, l_14, t);
      }
    return(t);
  }
  t = l_14(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_14 = ATgetFirst((ATermList) t);
      o_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_14 = NULL,t_14 = NULL;
        t = o_14;
        t = g_0(t);
        s_14 = t;
        t = n_14;
        t = f_0(t);
        t_14 = t;
        t = o_14;
        {
          ATerm t_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_14), t_14);
            return(t);
          }
          t = reverse_acc_2_0(f_0, t_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_10;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, u_4, t);
  return(t);
}
ATerm Program_1_0 (ATerm t_62 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_14);
  u_14 = t;
  t = v_14;
  t = t_62(t);
  w_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_14), u_14);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm v_4 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(v_4, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_g_18;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm w_4 (ATerm t)
    {
      ATerm b_15 = NULL;
      b_15 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, b_15), term_h_18);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(w_4, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_62 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      d_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  c_15 = t;
  t = d_15;
  t = u_62(t);
  e_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, e_15), c_15);
  return(t);
}
ATerm fetch_1_0 (ATerm w_70 (ATerm), ATerm t)
{
  ATerm j_15 (ATerm t)
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(w_70, _id, t);
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = Cons_2_0(_id, j_15, t);
      }
    return(t);
  }
  t = j_15(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  t = fetch_1_0(y_87, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  l_15 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_15;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_18 = ATgetFirst((ATermList) t);
                ATerm n_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_15;
          }
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = (ATerm) ATinsert(ATempty, l_15);
      }
    m_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_15);
    t = l_15;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm b_63 (ATerm), ATerm t)
{
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_63(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_u_18;
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_v_18;
        return(t);
      }
      t = Option_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm a_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_w_18;
          return(t);
        }
        ATerm c_5 (ATerm t)
        {
          t = term_x_18;
          return(t);
        }
        t = Option_3_0(a_5, b_5, c_5, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__3))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
      u_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_15, t_15);
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(s_15, t_15);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = (ATerm) ATempty;
      }
    v_15 = t;
    t = SSL_table_put(s_15, t_15, (ATerm) ATinsert(CheckATermList(v_15), u_15));
    t = (ATerm) ATmakeAppl(sym__3, s_15, t_15, u_15);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm a_16 = NULL;
  t = term_s_10;
  t = d_89(t);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_19, term_d_19, a_16);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  c_16 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = c_16;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm h_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_16 = ATgetFirst((ATermList) t);
          e_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_16;
      t = a_0(t);
      t = term_s_10;
      t = b_0(t);
      h_16 = t;
      t = (ATerm) ATinsert(CheckATermList(e_16), h_16);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm j_16 = NULL;
    j_16 = t;
    if(match_string(t, "--help"))
      {
        t = j_16;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = j_16;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = j_16;
          }
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_e_19;
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_f_19;
    return(t);
  }
  t = Option_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_55 (ATerm), ATerm x_55 (ATerm), ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  p_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_16 = ATgetFirst((ATermList) t);
      m_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_16);
  k_16 = t;
  t = l_16;
  t = w_55(t);
  n_16 = t;
  t = m_16;
  t = x_55(t);
  o_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(o_16), n_16), k_16);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_89 (ATerm), ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  {
    ATerm g_5 (ATerm t)
    {
      t = term_g_19;
      t = b_89(t);
      return(t);
    }
    t = try_1_0(g_5, t);
    t = w_16;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm x_16 = NULL;
        x_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_16);
        t = (ATerm) ATmakeAppl(sym_Program_1, x_16);
        return(t);
      }
      ATerm k_5 (ATerm t)
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_19);
              }
            else
              {
                t = j_19;
                t = b_89(t);
                t = Cons_2_0(_id, k_5, t);
              }
            ;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm z_16 = NULL,a_17 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_16 = ATgetFirst((ATermList) t);
                  a_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_17), (ATerm) ATmakeAppl(sym_Undefined_1, z_16));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_5, k_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = g_17;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_89(t);
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
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(o_19);
              }
            else
              {
                t = n_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_5, t);
    {
      ATerm o_5 (ATerm t)
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_17 = NULL;
            n_17 = t;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_17;
                  {
                    ATerm t_19 = t;
                    int u_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_x_17;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(u_19);
                      }
                    else
                      {
                        t = t_19;
                        {
                          ATerm p_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(p_5, t);
                        }
                      }
                    t = n_17;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  t = term_t_18;
                  t = get_config_0_0(t);
                  t = n_17;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm q_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  h_17 = t;
                  return(t);
                }
                t = Undefined_1_0(r_5, t);
                return(t);
              }
              t = option_defined_1_0(q_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_17)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_17)), term_v_19));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_5, t);
      i_17 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = i_17;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_87 (ATerm), ATerm b_87 (ATerm), ATerm c_87 (ATerm), ATerm d_87 (ATerm), ATerm t)
{
  ATerm q_8 = NULL;
  t = parse_options_1_0(a_87, t);
  q_8 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), q_8);
  t = q_8;
  t = c_87(t);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_87, t);
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_87(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm p_86 (ATerm), ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_86(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(p_86, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(s_5, r_86, s_86, t_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm q_17 = NULL,r_17 = NULL;
      q_17 = t;
      t = term_y_16;
      t = get_config_0_0(t);
      r_17 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, r_17));
      t = q_17;
      return(t);
    }
    t = if_verbose2_1_0(v_5, t);
    return(t);
  }
  t = iowrap_4_0(j_86, k_86, l_86, u_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm t)
{
  t = iowrap_3_0(h_86, i_86, default_usage_0_0, t);
  return(t);
}
ATerm term_to_adot_0_0 (ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm s_17 = NULL;
    if(match_cons(t, sym__2))
      {
        s_17 = ATgetArgument(t, 0);
        {
          ATerm c_20 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = s_17;
    t = to_adot_0_0(t);
    return(t);
  }
  t = iowrap_2_0(w_5, term_to_adot_options_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = term_to_adot_0_0(t);
  return(t);
}

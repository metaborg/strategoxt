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
ATerm term_e_22;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_r_19;
ATerm term_k_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_r_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_k_14;
ATerm term_l_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_b_11;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_y_4;
ATerm term_x_0;
void init_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(sym_Graph_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--graph           visualize term keeping graph structure", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Tree_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--tree            visualize as tree ", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("label", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"[]\"", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_AttrId_2, term_o_9, term_t_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("node", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Term", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__3, term_y_19, term_z_19, term_x_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm l_0 (ATerm);
ATerm n_0 (ATerm);
ATerm o_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm term_to_adot_options_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm y_0 (ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm EdgeToDot_0_0 (ATerm);
ATerm ListEdgeToDot_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm term_to_graph_0_0 (ATerm);
ATerm union_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm i_91 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm term_to_tree_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm to_adot_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_92 (ATerm), ATerm);
ATerm k_8 (ATerm b_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm _2_0 (ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_91 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm k_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_91 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm need_help_1_0 (ATerm u_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm l_69 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm);
ATerm p_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm x_95 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm z_5 (ATerm);
ATerm parse_options_1_0 (ATerm w_95 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm t_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm d_7 (ATerm);
ATerm iowrap_3_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm);
ATerm t_7 (ATerm);
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
  t = term_x_0;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm l_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--graph", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_4;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm q_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--tree", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_v_7;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_w_7;
  return(t);
}
ATerm term_to_adot_options_0_0 (ATerm t)
{
  ATerm x_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_0, n_0, o_0, t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = x_7;
      t = Option_3_0(q_0, t_0, u_0, t);
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm m_0 = NULL;
  m_0 = t;
  t = SSL_explode_string(m_0);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm k_0 = NULL;
  t = map_1_0(w_0, t);
  t = concat_0_0(t);
  k_0 = t;
  t = SSL_implode_string(k_0);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = Cons_2_0(_id, escape_chars_0_0, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = t;
      int g_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_0 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_8 = ATgetFirst((ATermList) t);
              if(((ATgetType(h_8) != AT_INT) || (ATgetInt((ATermInt) h_8) != 34)))
                _fail(t);
              p_0 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(p_0), term_l_8), term_j_8);
          ;
          LocalPopChoice(g_8);
        }
      else
        {
          t = e_8;
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
                t = (ATerm) ATinsert(ATinsert(CheckATermList(s_0), term_j_8), term_j_8);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(s_0), term_p_8), term_j_8);
              }
          }
        }
      t = Cons_2_0(_id, y_0, t);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = a_8;
      {
        ATerm r_8 = t;
        int s_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, escape_chars_0_0, t);
            ;
            LocalPopChoice(s_8);
          }
        else
          {
            t = r_8;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  if(match_cons(t, sym__2))
    {
      b_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_1), b_1), (ATerm) ATinsert(ATempty, b_1));
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_8 = ATgetArgument(t, 0);
            ATerm z_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(c_1), b_1);
        {
          ATerm z_0 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, b_1);
            return(t);
          }
          t = at_end_1_0(z_0, t);
        }
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          ATerm v_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_1), b_1), (ATerm) ATinsert(ATempty, b_1)));
          if(match_cons(t, sym__2))
            {
              ATerm b_9 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_9) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_0;
          t = concat_0_0(t);
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
    ATerm d_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,p_2 = NULL,r_2 = NULL,u_2 = NULL,w_2 = NULL;
        t = SSL_explode_term(k_3);
        if(match_cons(t, sym__2))
          {
            z_1 = ATgetArgument(t, 0);
            e_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_explode_string(z_1);
        t = escape_chars_0_0(t);
        p_2 = t;
        t = SSL_implode_string(p_2);
        r_2 = t;
        t = SSL_explode_string(r_2);
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_8, w_2);
        t = quote_chars_0_0(t);
        u_2 = t;
        t = SSL_implode_string(u_2);
        f_2 = t;
        t = e_2;
        {
          ATerm a_1 (ATerm t)
          {
            ATerm j_2 = NULL;
            j_2 = t;
            t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, j_3), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, j_2))));
            return(t);
          }
          t = map_1_0(a_1, t);
          h_2 = t;
          t = (ATerm) ATinsert(CheckATermList(h_2), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, j_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_o_9, f_2))))));
        }
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = d_9;
        {
          ATerm h_3 = NULL,l_3 = NULL,z_3 = NULL,a_4 = NULL;
          t = SSL_is_int(k_3);
          t = SSL_int_to_string(k_3);
          z_3 = t;
          t = SSL_explode_string(z_3);
          t = escape_chars_0_0(t);
          a_4 = t;
          t = SSL_implode_string(a_4);
          h_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), h_3), term_p_9);
          t = concat_strings_0_0(t);
          l_3 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, j_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AttrId_2, term_o_9, l_3))))));
        }
      }
  }
  return(t);
}
ATerm ListEdgeToDot_0_0 (ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_3;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_9 = ATgetFirst((ATermList) t);
          ATerm s_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_3;
    }
  t = s_3;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm x_3 = NULL;
      x_3 = t;
      t = (ATerm) ATmakeAppl(sym_EdgeNoAttrs_2, (ATerm)ATmakeAppl(sym_Id_1, q_3), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Arrow_1, (ATerm) ATmakeAppl(sym_Id_1, x_3))));
      return(t);
    }
    t = map_1_0(d_1, t);
    t_3 = t;
    t = (ATerm) ATinsert(CheckATermList(t_3), (ATerm) ATmakeAppl(sym_Node_2, (ATerm)ATmakeAppl(sym_Id_1, q_3), (ATerm) ATmakeAppl(sym_Some_1, (ATerm) ATmakeAppl(sym_Attrs_1, (ATerm) ATinsert(ATempty, term_w_9)))));
  }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
  p_4 = t;
  t = SSL_address(p_4);
  o_4 = t;
  t = SSL_int_to_string(o_4);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, q_4);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  s_4 = t;
  t = SSL_address(s_4);
  r_4 = t;
  t = SSL_int_to_string(r_4);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, t_4);
  t = conc_strings_0_0(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = union_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      if((u_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = union_1_0(l_1, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      if((v_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_graph_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,n_4 = NULL;
  f_4 = t;
  t = SSL_address(f_4);
  h_4 = t;
  t = SSL_int_to_string(h_4);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, i_4);
  t = conc_strings_0_0(t);
  g_4 = t;
  t = f_4;
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = map_1_0(e_1, t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = SRTS_all(f_1, t);
      }
    j_4 = t;
    t = f_4;
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = foldr_3_0(g_1, h_1, term_to_graph_0_0, t);
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          {
            ATerm e_4 = NULL;
            t = SSL_explode_term(f_4);
            if(match_cons(t, sym__2))
              {
                ATerm c_10 = ATgetArgument(t, 0);
                e_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_4;
            t = foldr_3_0(j_1, k_1, term_to_graph_0_0, t);
          }
        }
      n_4 = t;
      t = (ATerm) ATinsert(CheckATermList(n_4), (ATerm) ATmakeAppl(sym__2, g_4, j_4));
    }
  }
  return(t);
}
ATerm union_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm j_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_5;
          ;
          LocalPopChoice(l_10);
        }
      else
        {
          t = j_10;
          {
            ATerm o_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_4 = NULL,z_4 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_4 = ATgetFirst((ATermList) t);
                    z_4 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_5;
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm a_5 = NULL;
                    a_5 = t;
                    t = (ATerm) ATmakeAppl(sym__2, w_4, a_5);
                    t = j_81(t);
                    return(t);
                  }
                  t = fetch_1_0(m_1, t);
                  t = z_4;
                  t = o_5(t);
                }
                ;
                LocalPopChoice(p_10);
              }
            else
              {
                t = o_10;
                t = Cons_2_0(_id, o_5, t);
              }
          }
        }
      return(t);
    }
    t = o_5(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm q_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_83(t);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = q_10;
      {
        ATerm t_5 = NULL,u_5 = NULL,x_5 = NULL,y_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_5 = ATgetFirst((ATermList) t);
            u_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_5;
        t = k_83(t);
        x_5 = t;
        t = u_5;
        t = foldr_3_0(i_83, j_83, k_83, t);
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_5, y_5);
        t = j_83(t);
      }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_91 (ATerm), ATerm t)
{
  ATerm v_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_6 = NULL,d_6 = NULL;
      b_6 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 = NULL;
            t = eval_config_0_0(t);
            g_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_5);
            t = g_5;
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
          }
        d_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_6, term_b_11);
        t = geq_0_0(t);
        t = b_6;
        t = i_91(t);
      }
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = v_10;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm h_5 = NULL;
  h_5 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_5), (ATerm) ATmakeAppl(ATmakeSymbol("term-to-tree: ", 0, ATtrue))));
  t = h_5;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL;
  l_6 = t;
  t = new_0_0(t);
  m_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_6, l_6);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  n_6 = t;
  t = new_0_0(t);
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_6, n_6);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm p_6 = NULL,r_6 = NULL;
  p_6 = t;
  t = SSL_explode_term(p_6);
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_11 = ATgetArgument(t, 1);
        if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
          {
            r_6 = ATgetFirst((ATermList) d_11);
            {
              ATerm e_11 = (ATerm) ATgetNext((ATermList) d_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_6;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm f_7 = NULL,m_7 = NULL;
  f_7 = t;
  t = SSL_explode_term(f_7);
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
          {
            m_7 = ATgetFirst((ATermList) g_11);
            {
              ATerm h_11 = (ATerm) ATgetNext((ATermList) g_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_7;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = union_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
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
ATerm x_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = union_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      if((o_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_tree_0_0 (ATerm t)
{
  ATerm e_6 = NULL,g_6 = NULL;
  t = if_verbose5_1_0(n_1, t);
  e_6 = t;
  t = new_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, e_6);
  {
    ATerm u_6 (ATerm t)
    {
      ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,y_7 = NULL;
      ATerm o_1 (ATerm t)
      {
        ATerm i_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_1, t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = i_11;
            t = SRTS_all(q_1, t);
          }
        return(t);
      }
      t = _2_0(_id, o_1, t);
      i_6 = t;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map_1_0(s_1, t);
              ;
              LocalPopChoice(m_11);
            }
          else
            {
              t = l_11;
              t = SRTS_all(t_1, t);
            }
          return(t);
        }
        t = _2_0(_id, r_1, t);
        j_6 = t;
        t = SSL_explode_term(i_6);
        if(match_cons(t, sym__2))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_11 = ATgetArgument(t, 1);
              if(((ATgetType(r_11) == AT_LIST) && !(ATisEmpty(r_11))))
                {
                  ATerm s_11 = ATgetFirst((ATermList) r_11);
                  ATerm v_11 = (ATerm) ATgetNext((ATermList) r_11);
                  if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
                    {
                      y_7 = ATgetFirst((ATermList) v_11);
                      {
                        ATerm w_11 = (ATerm) ATgetNext((ATermList) v_11);
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
        t = y_7;
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = foldr_3_0(u_1, v_1, u_6, t);
              ;
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              {
                ATerm d_8 = NULL;
                t = SSL_explode_term(y_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_12 = ATgetArgument(t, 0);
                    d_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_8;
                t = foldr_3_0(x_1, y_1, u_6, t);
              }
            }
          k_6 = t;
          t = (ATerm) ATinsert(CheckATermList(k_6), j_6);
        }
      }
      return(t);
    }
    t = u_6(t);
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm c_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ListEdgeToDot_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = c_12;
      t = EdgeToDot_0_0(t);
    }
  return(t);
}
ATerm to_adot_0_0 (ATerm t)
{
  ATerm e_10 = NULL,v_6 = NULL;
  v_6 = t;
  {
    ATerm k_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)));
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_8 = NULL;
              t = eval_config_0_0(t);
              v_8 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--tree", 0, ATtrue)), v_8);
              t = v_8;
              ;
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
            }
          t = v_6;
          t = term_to_tree_0_0(t);
        }
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = k_12;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)));
        {
          ATerm v_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_9 = NULL;
              t = eval_config_0_0(t);
              f_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--graph", 0, ATtrue)), f_9);
              t = f_9;
              ;
              LocalPopChoice(x_12);
            }
          else
            {
              t = v_12;
            }
          t = v_6;
          t = term_to_graph_0_0(t);
        }
      }
    t = map_1_0(b_2, t);
    t = concat_0_0(t);
    e_10 = t;
    t = (ATerm) ATmakeAppl(sym_DotDigraph_2, term_y_12, e_10);
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_6, term_z_12);
  t = open_stream_0_0(t);
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_7, z_6);
  t = u_89(t);
  t = fclose_0_0(t);
  t = z_6;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = fetch_1_0(l_2, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = WriteToFile_1_0(m_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(match_cons(h_13, sym_Stream_1))
        {
          e_7 = ATgetArgument(h_13, 0);
        }
      else
        _fail(t);
      g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(e_7, g_7);
  h_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_7);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = WriteToFile_1_0(o_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      if(match_cons(i_13, sym_Stream_1))
        {
          i_7 = ATgetArgument(i_13, 0);
        }
      else
        _fail(t);
      j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(i_7, j_7);
  k_7 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), k_7);
  l_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_7);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  b_7 = t;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm j_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_2 (ATerm t)
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
          t = fetch_1_0(d_2, t);
          ;
          LocalPopChoice(k_13);
        }
      else
        {
          t = j_13;
          t = term_l_13;
          if(((c_7 != NULL) && (c_7 != t)))
            _fail(t);
          else
            c_7 = t;
        }
      return(t);
    }
    t = _2_0(c_2, _id, t);
    t = b_7;
    {
      ATerm g_2 (ATerm t)
      {
        ATerm f_10 = NULL;
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_7), f_10);
        return(t);
      }
      t = _2_0(_id, g_2, t);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(i_2, k_2, t);
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = _2_0(_id, n_2, t);
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
ATerm apply_strategy_1_0 (ATerm w_92 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  n_7 = t;
  t = dtime_0_0(t);
  t = n_7;
  t = w_92(t);
  o_7 = t;
  t = dtime_0_0(t);
  p_7 = t;
  t = o_7;
  if(match_cons(t, sym__2))
    {
      q_7 = ATgetArgument(t, 0);
      r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_7), (ATerm) ATmakeAppl(sym_Runtime_1, p_7)), r_7);
  return(t);
}
ATerm k_8 (ATerm b_8, ATerm t)
{
  t = SSL_fclose(b_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_8 = NULL,i_8 = NULL;
  i_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_8 = ATgetArgument(t, 0);
      {
        ATerm o_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_8);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = o_13;
            t = k_8(i_8, t);
          }
      }
    }
  else
    {
      t = k_8(i_8, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stdin_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_8 = NULL;
  t = SSL_stdout_stream();
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_8 = NULL;
  t = SSL_stderr_stream();
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_8);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm c_9 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      c_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_9;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm i_9 = NULL;
  i_9 = t;
  t = SSL_is_string(i_9);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      ATerm v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL,m_12 = NULL;
        l_12 = t;
        t = SSL_explode_term(l_12);
        if(match_cons(t, sym__2))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_13) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_14 = ATgetArgument(t, 1);
              if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
                {
                  m_12 = ATgetFirst((ATermList) a_14);
                  {
                    ATerm c_14 = (ATerm) ATgetNext((ATermList) a_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_12;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_12;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_12;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_12;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_8 = NULL,y_8 = NULL,a_9 = NULL;
              t = _2_0(q_2, _id, t);
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
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              {
                ATerm e_9 = NULL,g_9 = NULL,h_9 = NULL;
                t = _2_0(s_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_9 = ATgetArgument(t, 0);
                    g_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_9, g_9);
                h_9 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, h_9);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  ATerm f_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_9 = NULL;
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_9, term_k_14);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = f_14;
      {
        ATerm n_12 = NULL;
        n_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_12), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = n_12;
        _fail(t);
      }
    }
  j_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(l_9);
  k_9 = t;
  t = j_9;
  t = fclose_0_0(t);
  t = k_9;
  return(t);
}
ATerm fetch_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm r_9 (ATerm t)
  {
    ATerm l_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_77, _id, t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = l_14;
        t = Cons_2_0(_id, r_9, t);
      }
    return(t);
  }
  t = r_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = p_14;
      {
        ATerm u_9 = NULL,v_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_9 = ATgetFirst((ATermList) t);
            v_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_9;
        {
          ATerm t_2 (ATerm t)
          {
            t = v_9;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_2, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm s_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, d_10, t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = s_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_77(t);
      }
    return(t);
  }
  t = d_10(t);
  return(t);
}
ATerm _2_0 (ATerm z_57 (ATerm), ATerm a_58 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,k_10 = NULL,m_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_10);
  g_10 = t;
  t = h_10;
  t = z_57(t);
  k_10 = t;
  t = i_10;
  t = a_58(t);
  m_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_10, m_10), g_10);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm t_10 = NULL;
  t_10 = t;
  t = SSL_explode_string(t_10);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm u_10 = NULL;
  u_10 = t;
  t = SSL_explode_string(u_10);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = _2_0(v_2, x_2, t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL,x_10 = NULL;
        if(match_cons(t, sym__2))
          {
            w_10 = ATgetArgument(t, 0);
            x_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_10;
        {
          ATerm y_2 (ATerm t)
          {
            t = x_10;
            return(t);
          }
          t = at_end_1_0(y_2, t);
        }
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        {
          ATerm b_13 = NULL,c_13 = NULL;
          b_13 = t;
          t = SSL_explode_term(b_13);
          if(match_cons(t, sym__2))
            {
              ATerm x_14 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_14) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_13;
          t = concat_0_0(t);
        }
      }
    r_10 = t;
    t = SSL_implode_string(r_10);
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = SSL_is_string(j_11);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_2, t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            {
              ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
              n_11 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_11 = ATgetArgument(t, 0);
                  t = o_11;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_11 = ATgetArgument(t, 0);
                      t = o_11;
                      {
                        ATerm h_15 = t;
                        int i_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_11);
                            {
                              ATerm k_15 = t;
                              int m_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_17 = NULL;
                                  t = eval_config_0_0(t);
                                  i_17 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), o_11, i_17);
                                  t = i_17;
                                  ;
                                  LocalPopChoice(m_15);
                                }
                              else
                                {
                                  t = k_15;
                                }
                            }
                            ;
                            LocalPopChoice(i_15);
                          }
                        else
                          {
                            t = h_15;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, o_11), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = o_11;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_11 = NULL,u_11 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_11 = ATgetArgument(t, 0);
                          p_11 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_11;
                      t = eval_config_0_0(t);
                      t_11 = t;
                      t = p_11;
                      t = eval_config_0_0(t);
                      u_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm q_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,b_12 = NULL;
      z_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_18 = NULL;
            t = eval_config_0_0(t);
            g_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_18);
            t = g_18;
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
          }
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, term_c_16);
        t = geq_0_0(t);
        t = z_11;
        t = f_91(t);
      }
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = q_15;
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  if(match_string(t, "-k"))
    {
      t = d_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_12;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  t = SSL_string_to_int(e_12);
  f_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_12);
  t = e_12;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  if(match_string(t, "-S"))
    {
      t = h_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_12;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_k_16;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_l_16;
  return(t);
}
ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  i_12 = t;
  t = SSL_string_to_int(i_12);
  j_12 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_12);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_12);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_o_16;
  return(t);
}
ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_16;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_3, e_3, f_3, t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm z_16 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_3, m_3, n_3, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = z_16;
            t = Option_3_0(o_3, p_3, r_3, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_12 = NULL;
      t = term_x_0;
      t = d_0(t);
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, r_12);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm u_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_12 = ATgetFirst((ATermList) t);
          q_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_12;
      t = a_0(t);
      t = term_x_0;
      t = b_0(t);
      u_12 = t;
      t = (ATerm) ATinsert(CheckATermList(q_12), u_12);
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  if(match_string(t, "-o"))
    {
      t = w_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_12;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), a_13);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_13);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, v_3, w_3, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__3))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
      f_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_13, e_13);
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            ATerm q_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_13, e_13);
        ;
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        t = (ATerm) ATempty;
      }
    g_13 = t;
    t = SSL_table_put(d_13, e_13, (ATerm) ATinsert(CheckATermList(g_13), f_13));
    t = (ATerm) ATmakeAppl(sym__3, d_13, e_13, f_13);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_13 = NULL;
      t = term_x_0;
      t = j_0(t);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_17, term_g_17, w_13);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_13 = ATgetFirst((ATermList) t);
          q_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_13 = ATgetFirst((ATermList) t);
          s_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_13;
      t = h_0(t);
      t = r_13;
      t = i_0(t);
      b_14 = t;
      t = (ATerm) ATinsert(CheckATermList(s_13), b_14);
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  if(match_string(t, "-i"))
    {
      t = g_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_14;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), h_14);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_14);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_3, b_4, c_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  j_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), j_14));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_18 = NULL;
        t = eval_config_0_0(t);
        k_18 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_18);
        t = k_18;
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_83(t);
      ;
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm m_14 = NULL,n_14 = NULL,q_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_14 = ATgetFirst((ATermList) t);
            n_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_14;
        t = foldr_2_0(g_83, h_83, t);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_14, q_14);
        t = h_83(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_18, q_18);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = SSL_addr(p_18, q_18);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_14 = NULL,l_18 = NULL,m_18 = NULL;
  t = times_0_0(t);
  l_18 = t;
  t = SSL_explode_term(l_18);
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_18;
  t = foldr_2_0(d_4, k_4, t);
  t_14 = t;
  t = SSL_TicksToSeconds(t_14);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_15;
        if((f_15 != t))
          {
            _fail(t);
          }
        t = e_15;
        ;
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        t = e_15;
        {
          ATerm j_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_15, g_15);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = j_18;
              t = SSL_gtr(f_15, g_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_91 (ATerm), ATerm t)
{
  ATerm o_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_15 = NULL,l_15 = NULL;
      j_15 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm s_18 = t;
        int t_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_19 = NULL;
            t = eval_config_0_0(t);
            d_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_19);
            t = d_19;
            ;
            LocalPopChoice(t_18);
          }
        else
          {
            t = s_18;
          }
        l_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, term_u_18);
        t = geq_0_0(t);
        t = j_15;
        t = e_91(t);
      }
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = o_18;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL;
  t = run_time_0_0(t);
  n_15 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  o_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), n_15), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), o_15));
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_18), n_15), term_w_18), o_15));
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
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm c_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_19 = NULL;
            t = eval_config_0_0(t);
            h_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), h_19);
            t = h_19;
            ;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
          }
      }
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = c_19;
      t = fetch_1_0(m_4, t);
    }
  t = u_93(t);
  return(t);
}
ATerm map_1_0 (ATerm e_77 (ATerm), ATerm t)
{
  ATerm p_15 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = Cons_2_0(e_77, p_15, t);
      }
    return(t);
  }
  t = p_15(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_15 = ATgetFirst((ATermList) t);
      s_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_15 = NULL,x_15 = NULL;
        t = s_15;
        t = g_0(t);
        w_15 = t;
        t = r_15;
        t = f_0(t);
        x_15 = t;
        t = s_15;
        {
          ATerm x_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_15), x_15);
            return(t);
          }
          t = reverse_acc_2_0(f_0, x_4, t);
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
ATerm Program_1_0 (ATerm l_69 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  y_15 = t;
  t = z_15;
  t = l_69(t);
  a_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, a_16), y_15);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_16), term_k_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm o_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_19 = NULL;
            t = eval_config_0_0(t);
            l_19 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_19);
            t = l_19;
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = o_19;
          }
      }
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      t = fetch_1_0(b_5, t);
    }
  t = term_r_19;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, c_5, t);
  t = map_1_0(d_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm m_69 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  i_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  f_16 = t;
  t = g_16;
  t = m_69(t);
  h_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, h_16), f_16);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_19 = ATgetFirst((ATermList) t);
                ATerm v_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_16;
          }
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATinsert(ATempty, m_16);
      }
    n_16 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_16);
    t = m_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_19 = NULL;
        t = eval_config_0_0(t);
        p_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_19);
        t = p_19;
        ;
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_a_20;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_c_20;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_5, f_5, i_5, t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = Option_3_0(j_5, k_5, l_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_62 (ATerm), ATerm p_62 (ATerm), ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  w_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_16 = ATgetFirst((ATermList) t);
      t_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  r_16 = t;
  t = s_16;
  t = o_62(t);
  u_16 = t;
  t = t_16;
  t = p_62(t);
  v_16 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(v_16), u_16), r_16);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm b_17 = NULL;
  b_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), b_17);
  t = (ATerm) ATmakeAppl(sym_Program_1, b_17);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm a_17 = NULL;
  a_17 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_20;
        t = x_95(t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
      }
    t = a_17;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm k_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_20 = t;
            int o_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(o_20);
              }
            else
              {
                t = n_20;
                t = x_95(t);
                t = Cons_2_0(_id, q_5, t);
              }
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = k_20;
            {
              ATerm d_17 = NULL,e_17 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_17 = ATgetFirst((ATermList) t);
                  e_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_17), (ATerm) ATmakeAppl(sym_Undefined_1, d_17));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_5, q_5, t);
    }
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  if(match_string(t, "--help"))
    {
      t = p_17;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_17;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_17;
        }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_20;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_95 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = m_17;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_95(t);
          ;
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_5, v_5, w_5, t);
                ;
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_5, t);
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_17 = NULL;
          u_17 = t;
          {
            ATerm z_20 = t;
            int a_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_17;
                {
                  ATerm b_21 = t;
                  int c_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm d_21 = t;
                        int e_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_20 = NULL;
                            t = eval_config_0_0(t);
                            e_20 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), e_20);
                            t = e_20;
                            ;
                            LocalPopChoice(e_21);
                          }
                        else
                          {
                            t = d_21;
                          }
                      }
                      ;
                      LocalPopChoice(c_21);
                    }
                  else
                    {
                      t = b_21;
                      t = fetch_1_0(z_5, t);
                    }
                  t = u_17;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(a_21);
              }
            else
              {
                t = z_20;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm f_21 = t;
                  int g_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_20 = NULL;
                      t = eval_config_0_0(t);
                      l_20 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), l_20);
                      t = l_20;
                      ;
                      LocalPopChoice(g_21);
                    }
                  else
                    {
                      t = f_21;
                    }
                  t = u_17;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          {
            ATerm h_21 = t;
            int i_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_6 (ATerm t)
                {
                  ATerm c_6 (ATerm t)
                  {
                    if(((n_17 != NULL) && (n_17 != t)))
                      _fail(t);
                    else
                      n_17 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_6, t);
                  return(t);
                }
                t = fetch_1_0(a_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(n_17)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_17)), term_j_21));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(i_21);
              }
            else
              {
                t = h_21;
              }
          }
        }
      o_17 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_17;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm z_93 (ATerm), ATerm t)
{
  ATerm x_17 = NULL;
  t = parse_options_1_0(w_93, t);
  x_17 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), x_17);
  t = x_17;
  t = y_93(t);
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_93, t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_93(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = if_verbose2_1_0(d_7, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_21;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL;
        t = eval_config_0_0(t);
        p_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_20);
        t = p_20;
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
      }
    z_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, z_17));
    t = y_17;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm f_93 (ATerm), ATerm g_93 (ATerm), ATerm h_93 (ATerm), ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_93(t);
        ;
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              {
                ATerm w_21 = t;
                int x_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_21);
                  }
                else
                  {
                    t = w_21;
                    {
                      ATerm y_21 = t;
                      int z_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_6, w_6, x_6, t);
                          ;
                          LocalPopChoice(z_21);
                        }
                      else
                        {
                          t = y_21;
                          {
                            ATerm a_22 = t;
                            int b_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(b_22);
                              }
                            else
                              {
                                t = a_22;
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
  ATerm s_6 (ATerm t)
  {
    ATerm a_18 = NULL,b_18 = NULL,s_20 = NULL;
    a_18 = t;
    {
      ATerm c_22 = t;
      int d_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_18 != NULL) && (b_18 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_7, t);
          ;
          LocalPopChoice(d_22);
        }
      else
        {
          t = c_22;
          t = term_e_22;
          b_18 = t;
        }
      t = not_null(b_18);
      t = ReadFromFile_0_0(t);
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_18, s_20);
      t = apply_strategy_1_0(f_93, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_6, h_93, h_6, s_6, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      c_18 = ATgetArgument(t, 0);
      {
        ATerm f_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_18;
  t = to_adot_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_7, term_to_adot_options_0_0, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Seq_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Path_2;
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
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Assign_1 = ATmakeSymbol("Assign", 1, ATfalse);
  ATprotectSymbol(sym_Assign_1);
  sym_Fun_2 = ATmakeSymbol("Fun", 2, ATfalse);
  ATprotectSymbol(sym_Fun_2);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
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
ATerm term_o_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_c_22;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_j_14;
ATerm term_m_7;
void init_constant_terms (void)
{
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__3, term_m_19, term_j_22, term_m_7);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm k_84 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm i_85 (ATerm), ATerm);
ATerm _2_0 (ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm x_14 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm e_6 (ATerm y_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm o_15 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm j_16 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm k_16 (ATerm);
ATerm need_help_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_90 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm m_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm);
ATerm v_16 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_109 (ATerm), ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm parse_options_1_0 (ATerm r_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm);
ATerm f_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm iowrap_3_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  f_0 = t;
  t = term_m_7;
  t = whoami_0_0(t);
  l_0 = t;
  n_0 = t;
  t = term_j_14;
  k_0 = t;
  t = n_0;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_17), l_0), term_q_17);
  m_0 = t;
  t = SSL_printnl(k_0, m_0);
  q_0 = t;
  t = term_s_17;
  p_0 = t;
  t = SSL_exit(p_0);
  t = f_0;
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm s_0 = NULL,z_0 = NULL,h_1 = NULL,i_1 = NULL,n_1 = NULL,r_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      v_1 = ATgetArgument(t, 0);
      x_1 = ATgetArgument(t, 1);
      t = v_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_1 = ATgetFirst((ATermList) t);
          n_1 = (ATerm) ATgetNext((ATermList) t);
          t = r_1;
          if(match_cons(t, sym_Alt_3))
            {
              s_0 = ATgetArgument(t, 0);
              h_1 = ATgetArgument(t, 1);
              i_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = s_0;
          if(match_cons(t, sym_Real_1))
            {
              z_0 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, z_0)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  z_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, z_0)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      z_0 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, z_0)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          z_0 = ATgetArgument(t, 0);
                          {
                            ATerm t_17 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, z_0, h_1)), i_1, (ATerm) ATmakeAppl(sym_Case_2, n_1, x_1));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_1;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          v_1 = ATgetArgument(t, 0);
          x_1 = ATgetArgument(t, 1);
          y_1 = ATgetArgument(t, 2);
          t = v_1;
          if(match_cons(t, sym_Var_1))
            {
              r_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_Case_2, x_1, y_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm u_17 = ATgetArgument(t, 0);
              x_1 = ATgetArgument(t, 1);
              y_1 = ATgetArgument(t, 2);
              z_1 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, x_1, y_1, z_1);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      z_3 = ATgetArgument(t, 0);
      t = z_3;
      if(match_cons(t, sym_Var_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_4));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          z_3 = ATgetArgument(t, 0);
          b_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_3;
      if(match_cons(t, sym_Var_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_4), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_4)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_84(t);
        t = i_4(t);
        ;
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
      }
    return(t);
  }
  t = i_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  t = i_85(t);
  {
    ATerm s_14 (ATerm t)
    {
      t = topdown_1_0(i_85, t);
      return(t);
    }
    t = SRTS_all(s_14, t);
  }
  return(t);
}
ATerm _2_0 (ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,o_4 = NULL,q_4 = NULL,r_0 = NULL,t_0 = NULL;
  q_4 = t;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_4);
  j_4 = t;
  t = k_4;
  t = j_65(t);
  m_4 = t;
  t = l_4;
  t = k_65(t);
  o_4 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_4, o_4);
  r_0 = t;
  t = SSLsetAnnotations(r_0, j_4);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm t_4 = NULL,w_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, term_x_17);
  t = open_stream_0_0(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, w_4);
  t = p_103(t);
  t = fclose_0_0(t);
  t = w_4;
  return(t);
}
ATerm x_14 (ATerm t)
{
  t = fetch_1_0(e_15, t);
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = WriteToFile_1_0(f_15, t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      if(match_cons(y_17, sym_Stream_1))
        {
          c_5 = ATgetArgument(y_17, 0);
        }
      else
        _fail(t);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(c_5, d_5);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_5);
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = WriteToFile_1_0(h_15, t);
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      if(match_cons(z_17, sym_Stream_1))
        {
          f_5 = ATgetArgument(z_17, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(f_5, g_5);
  h_5 = t;
  v_0 = t;
  t = term_a_18;
  u_0 = t;
  t = SSL_fputc(u_0, h_5);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_5);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_4 = NULL,a_5 = NULL;
  y_4 = t;
  {
    ATerm t_14 (ATerm t)
    {
      ATerm b_18 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((a_5 != NULL) && (a_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_14, t);
          ;
          LocalPopChoice(c_18);
        }
      else
        {
          t = b_18;
          t = term_d_18;
          if(((a_5 != NULL) && (a_5 != t)))
            _fail(t);
          else
            a_5 = t;
        }
      return(t);
    }
    t = _2_0(t_14, _id, t);
    t = y_4;
    {
      ATerm w_14 (ATerm t)
      {
        ATerm b_0 = NULL;
        b_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_5), b_0);
        return(t);
      }
      t = _2_0(_id, w_14, t);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(x_14, d_15, t);
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = _2_0(_id, g_15, t);
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
ATerm apply_strategy_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
  k_5 = t;
  t = dtime_0_0(t);
  t = k_5;
  t = r_106(t);
  l_5 = t;
  t = dtime_0_0(t);
  m_5 = t;
  t = l_5;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_5), (ATerm) ATmakeAppl(sym_Runtime_1, m_5)), o_5);
  return(t);
}
ATerm e_6 (ATerm y_5, ATerm t)
{
  t = SSL_fclose(y_5);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_6 = ATgetArgument(t, 0);
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_6);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = e_6(c_6, t);
          }
      }
    }
  else
    {
      t = e_6(c_6, t);
    }
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
ATerm i_15 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6;
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm t_6 = NULL;
  t_6 = t;
  t = SSL_is_string(t_6);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      ATerm j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,d_1 = NULL;
        c_1 = t;
        t = SSL_explode_term(c_1);
        if(match_cons(t, sym__2))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_18 = ATgetArgument(t, 1);
              if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
                {
                  d_1 = ATgetFirst((ATermList) n_18);
                  {
                    ATerm o_18 = (ATerm) ATgetNext((ATermList) n_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = d_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = d_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = d_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm p_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL;
              t = _2_0(i_15, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_6 = ATgetArgument(t, 0);
                  n_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_6, n_6);
              o_6 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_6);
              ;
              LocalPopChoice(q_18);
            }
          else
            {
              t = p_18;
              {
                ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL;
                t = _2_0(j_15, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_6 = ATgetArgument(t, 0);
                    r_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_6, r_6);
                s_6 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_6);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_6 = NULL;
      x_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_6, term_t_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm e_1 = NULL,w_0 = NULL,x_0 = NULL,y_0 = NULL,a_1 = NULL;
        e_1 = t;
        t = term_u_18;
        y_0 = t;
        t = term_j_14;
        w_0 = t;
        t = y_0;
        a_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_1), term_u_18);
        x_0 = t;
        t = SSL_printnl(w_0, x_0);
        t = e_1;
        _fail(t);
      }
    }
  u_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_6);
  v_6 = t;
  t = u_6;
  t = fclose_0_0(t);
  t = v_6;
  return(t);
}
ATerm fetch_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm f_7 (ATerm t)
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_91, _id, t);
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = Cons_2_0(_id, f_7, t);
      }
    return(t);
  }
  t = f_7(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_18);
    }
  else
    {
      t = x_18;
      {
        ATerm i_7 = NULL,j_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_7 = ATgetFirst((ATermList) t);
            j_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_7;
        {
          ATerm k_15 (ATerm t)
          {
            t = j_7;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_15, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_91 (ATerm), ATerm t)
{
  ATerm s_7 (ATerm t)
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, s_7, t);
        ;
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_91(t);
      }
    return(t);
  }
  t = s_7(t);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm v_7 = NULL;
  v_7 = t;
  t = SSL_explode_string(v_7);
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  t = SSL_explode_string(w_7);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  t = _2_0(l_15, m_15, t);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL,a_8 = NULL;
        if(match_cons(t, sym__2))
          {
            z_7 = ATgetArgument(t, 0);
            a_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_7;
        {
          ATerm n_15 (ATerm t)
          {
            t = a_8;
            return(t);
          }
          t = at_end_1_0(n_15, t);
        }
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        {
          ATerm l_1 = NULL,m_1 = NULL;
          l_1 = t;
          t = SSL_explode_term(l_1);
          if(match_cons(t, sym__2))
            {
              ATerm d_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              m_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_1;
          t = concat_0_0(t);
        }
      }
    u_7 = t;
    t = SSL_implode_string(u_7);
  }
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL;
      n_8 = t;
      t = SSL_is_string(n_8);
      ;
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm i_19 = t;
        int j_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_15, t);
            ;
            LocalPopChoice(j_19);
          }
        else
          {
            t = i_19;
            {
              ATerm s_8 = NULL,w_8 = NULL,x_8 = NULL;
              s_8 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_8 = ATgetArgument(t, 0);
                  t = w_8;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_8 = ATgetArgument(t, 0);
                      t = w_8;
                      {
                        ATerm k_19 = t;
                        int l_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm b_1 = NULL,f_1 = NULL;
                            f_1 = t;
                            t = term_m_19;
                            b_1 = t;
                            t = SSL_table_get(b_1, w_8);
                            {
                              ATerm n_19 = t;
                              int o_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_3 = NULL,g_1 = NULL,j_1 = NULL;
                                  t = eval_config_0_0(t);
                                  k_3 = t;
                                  j_1 = t;
                                  t = term_m_19;
                                  g_1 = t;
                                  t = SSL_table_put(g_1, w_8, k_3);
                                  t = k_3;
                                  ;
                                  LocalPopChoice(o_19);
                                }
                              else
                                {
                                  t = n_19;
                                }
                            }
                            ;
                            LocalPopChoice(l_19);
                          }
                        else
                          {
                            t = k_19;
                            {
                              ATerm k_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL;
                              t = term_p_19;
                              p_1 = t;
                              t = term_j_14;
                              k_1 = t;
                              t = p_1;
                              q_1 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, w_8), term_p_19);
                              o_1 = t;
                              t = SSL_printnl(k_1, o_1);
                              t = w_8;
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
                          w_8 = ATgetArgument(t, 0);
                          x_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_8;
                      t = eval_config_0_0(t);
                      c_9 = t;
                      t = x_8;
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
ATerm if_verbose2_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_9 = NULL,k_9 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL;
      i_9 = t;
      t = term_s_19;
      u_1 = t;
      t = term_m_19;
      s_1 = t;
      t = u_1;
      w_1 = t;
      t = term_s_19;
      t_1 = t;
      t = SSL_table_get(s_1, t_1);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
            t = eval_config_0_0(t);
            r_3 = t;
            c_2 = t;
            t = term_m_19;
            a_2 = t;
            t = c_2;
            d_2 = t;
            t = term_s_19;
            b_2 = t;
            t = SSL_table_put(a_2, b_2, r_3);
            t = r_3;
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
          }
        k_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_9, term_v_19);
        t = geq_0_0(t);
        t = i_9;
        t = a_105(t);
      }
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  if(match_string(t, "-k"))
    {
      t = m_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_9;
    }
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL;
  n_9 = t;
  t = SSL_string_to_int(n_9);
  o_9 = t;
  g_2 = t;
  t = term_m_19;
  e_2 = t;
  t = g_2;
  h_2 = t;
  t = term_w_19;
  f_2 = t;
  t = SSL_table_put(e_2, f_2, o_9);
  t = n_9;
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_15, q_15, r_15, t);
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  if(match_string(t, "-S"))
    {
      t = q_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_9;
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  l_2 = t;
  t = term_m_19;
  i_2 = t;
  t = l_2;
  m_2 = t;
  t = term_s_19;
  j_2 = t;
  t = m_2;
  n_2 = t;
  t = term_y_19;
  k_2 = t;
  t = SSL_table_put(i_2, j_2, k_2);
  t = term_z_19;
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm v_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  r_9 = t;
  t = SSL_string_to_int(r_9);
  s_9 = t;
  q_2 = t;
  t = term_m_19;
  o_2 = t;
  t = q_2;
  r_2 = t;
  t = term_s_19;
  p_2 = t;
  t = SSL_table_put(o_2, p_2, s_9);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_9);
  return(t);
}
ATerm x_15 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm y_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  t = term_m_19;
  s_2 = t;
  t = v_2;
  w_2 = t;
  t = term_c_20;
  t_2 = t;
  t = w_2;
  x_2 = t;
  t = term_m_7;
  u_2 = t;
  t = SSL_table_put(s_2, t_2, u_2);
  t = term_d_20;
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_15, t_15, u_15, t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_15, w_15, x_15, t);
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
            t = Option_3_0(y_15, z_15, a_16, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_9 = NULL;
      t = term_m_7;
      t = d_0(t);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_20, term_k_20, x_9);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm a_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_9 = ATgetFirst((ATermList) t);
          w_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_9;
      t = a_0(t);
      t = term_m_7;
      t = c_0(t);
      a_10 = t;
      t = (ATerm) ATinsert(CheckATermList(w_9), a_10);
    }
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm c_10 = NULL;
  c_10 = t;
  if(match_string(t, "-o"))
    {
      t = c_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_10;
    }
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm d_10 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  d_10 = t;
  a_3 = t;
  t = term_m_19;
  y_2 = t;
  t = a_3;
  b_3 = t;
  t = term_l_20;
  z_2 = t;
  t = SSL_table_put(y_2, z_2, d_10);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_10);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_16, c_16, d_16, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym__3))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      i_10 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_10, h_10);
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            ATerm q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_10, h_10);
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATempty;
      }
    j_10 = t;
    d_3 = t;
    t = (ATerm) ATinsert(CheckATermList(j_10), i_10);
    c_3 = t;
    t = SSL_table_put(g_10, h_10, c_3);
    t = (ATerm) ATmakeAppl(sym__3, g_10, h_10, i_10);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_10 = NULL;
      t = term_m_7;
      t = j_0(t);
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_20, term_k_20, v_10);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_10 = ATgetFirst((ATermList) t);
          s_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_10;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_10 = ATgetFirst((ATermList) t);
          u_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_10;
      t = h_0(t);
      t = t_10;
      t = i_0(t);
      z_10 = t;
      t = (ATerm) ATinsert(CheckATermList(u_10), z_10);
    }
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  if(match_string(t, "-i"))
    {
      t = b_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_11;
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm c_11 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL;
  c_11 = t;
  g_3 = t;
  t = term_m_19;
  e_3 = t;
  t = g_3;
  h_3 = t;
  t = term_r_20;
  f_3 = t;
  t = SSL_table_put(e_3, f_3, c_11);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_11);
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_16, f_16, g_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_11 = NULL,n_3 = NULL,i_3 = NULL,j_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_7;
  t = whoami_0_0(t);
  d_11 = t;
  l_3 = t;
  t = term_j_14;
  i_3 = t;
  t = l_3;
  m_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_20), d_11);
  j_3 = t;
  t = SSL_printnl(i_3, j_3);
  o_3 = t;
  t = term_s_17;
  n_3 = t;
  t = SSL_exit(n_3);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL;
  t = term_u_20;
  s_3 = t;
  t = term_m_19;
  p_3 = t;
  t = s_3;
  t_3 = t;
  t = term_u_20;
  q_3 = t;
  t = SSL_table_get(p_3, q_3);
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL,u_3 = NULL,v_3 = NULL,c_4 = NULL,d_4 = NULL;
        t = eval_config_0_0(t);
        w_3 = t;
        c_4 = t;
        t = term_m_19;
        u_3 = t;
        t = c_4;
        d_4 = t;
        t = term_u_20;
        v_3 = t;
        t = SSL_table_put(u_3, v_3, w_3);
        t = w_3;
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_97(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm g_11 = NULL,h_11 = NULL,k_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_11 = ATgetFirst((ATermList) t);
            h_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_11;
        t = foldr_2_0(b_97, c_97, t);
        k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, k_11);
        t = c_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm f_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      f_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(f_4, n_4);
        ;
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = SSL_addr(f_4, n_4);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_11 = NULL,x_3 = NULL,y_3 = NULL;
  t = times_0_0(t);
  x_3 = t;
  t = SSL_explode_term(x_3);
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3;
  t = foldr_2_0(h_16, i_16, t);
  n_11 = t;
  t = SSL_TicksToSeconds(n_11);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_11 = NULL,a_12 = NULL,b_12 = NULL;
  y_11 = t;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_12;
        if((a_12 != t))
          {
            _fail(t);
          }
        t = y_11;
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = y_11;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_12, b_12);
              ;
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = SSL_gtr(a_12, b_12);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_12 = NULL,g_12 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,p_4 = NULL;
      e_12 = t;
      t = term_s_19;
      h_4 = t;
      t = term_m_19;
      e_4 = t;
      t = h_4;
      p_4 = t;
      t = term_s_19;
      g_4 = t;
      t = SSL_table_get(e_4, g_4);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_7 = NULL,r_4 = NULL,s_4 = NULL,u_4 = NULL,v_4 = NULL;
            t = eval_config_0_0(t);
            b_7 = t;
            u_4 = t;
            t = term_m_19;
            r_4 = t;
            t = u_4;
            v_4 = t;
            t = term_s_19;
            s_4 = t;
            t = SSL_table_put(r_4, s_4, b_7);
            t = b_7;
            ;
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
          }
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_12, term_s_17);
        t = geq_0_0(t);
        t = e_12;
        t = z_104(t);
      }
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
    }
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,z_4 = NULL,b_5 = NULL,i_5 = NULL,p_5 = NULL;
  t = run_time_0_0(t);
  i_12 = t;
  t = term_m_7;
  t = whoami_0_0(t);
  j_12 = t;
  i_5 = t;
  t = term_j_14;
  z_4 = t;
  t = i_5;
  p_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), i_12), term_k_21), j_12);
  b_5 = t;
  t = SSL_printnl(z_4, b_5);
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_21), i_12), term_k_21), j_12));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL;
  t = report_run_time_0_0(t);
  r_5 = t;
  t = term_y_19;
  q_5 = t;
  t = SSL_exit(q_5);
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
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
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL;
      t = term_s_21;
      u_5 = t;
      t = term_m_19;
      s_5 = t;
      t = u_5;
      v_5 = t;
      t = term_s_21;
      t_5 = t;
      t = SSL_table_get(s_5, t_5);
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 = NULL,w_5 = NULL,x_5 = NULL,z_5 = NULL,a_6 = NULL;
            t = eval_config_0_0(t);
            n_7 = t;
            z_5 = t;
            t = term_m_19;
            w_5 = t;
            t = z_5;
            a_6 = t;
            t = term_s_21;
            x_5 = t;
            t = SSL_table_put(w_5, x_5, n_7);
            t = n_7;
            ;
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
          }
      }
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      t = fetch_1_0(k_16, t);
    }
  t = p_107(t);
  return(t);
}
ATerm map_1_0 (ATerm z_90 (ATerm), ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = Cons_2_0(z_90, k_12, t);
      }
    return(t);
  }
  t = k_12(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_12 = ATgetFirst((ATermList) t);
      n_12 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_12 = NULL,s_12 = NULL;
        t = n_12;
        t = g_0(t);
        r_12 = t;
        t = m_12;
        t = e_0(t);
        s_12 = t;
        t = n_12;
        {
          ATerm l_16 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_12), s_12);
            return(t);
          }
          t = reverse_acc_2_0(e_0, l_16, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,d_6 = NULL,i_6 = NULL;
  w_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_12);
  t_12 = t;
  t = u_12;
  t = i_83(t);
  v_12 = t;
  i_6 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_12);
  d_6 = t;
  t = SSLsetAnnotations(d_6, t_12);
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_12), term_x_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL,k_7 = NULL;
  ATerm y_21 = t;
  int z_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,y_6 = NULL;
      t = term_u_20;
      l_6 = t;
      t = term_m_19;
      j_6 = t;
      t = l_6;
      y_6 = t;
      t = term_u_20;
      k_6 = t;
      t = SSL_table_get(j_6, k_6);
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_7 = NULL,z_6 = NULL,a_7 = NULL,c_7 = NULL,d_7 = NULL;
            t = eval_config_0_0(t);
            x_7 = t;
            c_7 = t;
            t = term_m_19;
            z_6 = t;
            t = c_7;
            d_7 = t;
            t = term_u_20;
            a_7 = t;
            t = SSL_table_put(z_6, a_7, x_7);
            t = x_7;
            ;
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
          }
      }
      ;
      LocalPopChoice(z_21);
    }
  else
    {
      t = y_21;
      t = fetch_1_0(m_16, t);
    }
  t = term_c_22;
  t = echo_0_0(t);
  h_7 = t;
  t = term_j_20;
  e_7 = t;
  t = h_7;
  k_7 = t;
  t = term_k_20;
  g_7 = t;
  t = SSL_table_get(e_7, g_7);
  t = reverse_acc_2_0(_id, n_16, t);
  t = map_1_0(o_16, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,l_7 = NULL,o_7 = NULL;
  d_13 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      b_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_13);
  a_13 = t;
  t = b_13;
  t = j_83(t);
  c_13 = t;
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_13);
  l_7 = t;
  t = SSLsetAnnotations(l_7, a_13);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,p_7 = NULL,q_7 = NULL;
  h_13 = t;
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_13;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_22 = ATgetFirst((ATermList) t);
                ATerm g_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_13;
          }
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        t = (ATerm) ATinsert(ATempty, h_13);
      }
    i_13 = t;
    q_7 = t;
    t = term_d_18;
    p_7 = t;
    t = SSL_printnl(p_7, i_13);
    t = h_13;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_7 = NULL,t_7 = NULL,y_7 = NULL,b_8 = NULL;
  t = term_u_20;
  y_7 = t;
  t = term_m_19;
  r_7 = t;
  t = y_7;
  b_8 = t;
  t = term_u_20;
  t_7 = t;
  t = SSL_table_get(r_7, t_7);
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL;
        t = eval_config_0_0(t);
        j_8 = t;
        e_8 = t;
        t = term_m_19;
        c_8 = t;
        t = e_8;
        f_8 = t;
        t = term_u_20;
        d_8 = t;
        t = SSL_table_put(c_8, d_8, j_8);
        t = j_8;
        ;
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm p_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  t = term_m_19;
  g_8 = t;
  t = k_8;
  l_8 = t;
  t = term_j_22;
  h_8 = t;
  t = l_8;
  m_8 = t;
  t = term_m_7;
  i_8 = t;
  t = SSL_table_put(g_8, h_8, i_8);
  t = term_k_22;
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm s_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,e_9 = NULL;
  r_8 = t;
  t = term_m_19;
  o_8 = t;
  t = r_8;
  t_8 = t;
  t = term_j_22;
  p_8 = t;
  t = t_8;
  u_8 = t;
  t = term_m_7;
  q_8 = t;
  t = SSL_table_put(o_8, p_8, q_8);
  a_9 = t;
  t = term_m_19;
  v_8 = t;
  t = a_9;
  b_9 = t;
  t = term_m_22;
  y_8 = t;
  t = b_9;
  e_9 = t;
  t = term_m_7;
  z_8 = t;
  t = SSL_table_put(v_8, y_8, z_8);
  t = term_n_22;
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_16, q_16, r_16, t);
      ;
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      t = Option_3_0(s_16, t_16, u_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,f_9 = NULL,g_9 = NULL;
  x_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_13 = ATgetFirst((ATermList) t);
      r_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_13);
  p_13 = t;
  t = q_13;
  t = y_69(t);
  u_13 = t;
  t = r_13;
  t = z_69(t);
  v_13 = t;
  g_9 = t;
  t = (ATerm) ATinsert(CheckATermList(v_13), u_13);
  f_9 = t;
  t = SSLsetAnnotations(f_9, p_13);
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm d_14 = NULL,h_9 = NULL,j_9 = NULL,l_9 = NULL,p_9 = NULL;
  d_14 = t;
  l_9 = t;
  t = term_m_19;
  h_9 = t;
  t = l_9;
  p_9 = t;
  t = term_u_20;
  j_9 = t;
  t = SSL_table_put(h_9, j_9, d_14);
  t = (ATerm) ATmakeAppl(sym_Program_1, d_14);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  {
    ATerm r_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_22;
        t = s_109(t);
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = r_22;
      }
    t = c_14;
    {
      ATerm w_16 (ATerm t)
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                t = s_109(t);
                t = Cons_2_0(_id, w_16, t);
              }
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
            {
              ATerm f_14 = NULL,g_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_14 = ATgetFirst((ATermList) t);
                  g_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_14), (ATerm) ATmakeAppl(sym_Undefined_1, f_14));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_16, w_16, t);
    }
  }
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  if(match_string(t, "--help"))
    {
      t = q_14;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_14;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_14;
        }
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm f_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  t = term_m_19;
  f_10 = t;
  t = m_10;
  n_10 = t;
  t = term_s_21;
  k_10 = t;
  t = n_10;
  o_10 = t;
  t = term_m_7;
  l_10 = t;
  t = SSL_table_put(f_10, k_10, l_10);
  t = term_y_22;
  return(t);
}
ATerm a_17 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm b_17 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,t_9 = NULL,u_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,e_10 = NULL,l_12 = NULL,o_12 = NULL;
  n_14 = t;
  z_9 = t;
  t = term_j_20;
  t_9 = t;
  t = z_9;
  b_10 = t;
  t = term_k_20;
  u_9 = t;
  t = b_10;
  e_10 = t;
  t = (ATerm) ATempty;
  y_9 = t;
  t = SSL_table_put(t_9, u_9, y_9);
  t = n_14;
  {
    ATerm x_16 (ATerm t)
    {
      ATerm a_23 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_109(t);
          ;
          LocalPopChoice(b_23);
        }
      else
        {
          t = a_23;
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_16, z_16, a_17, t);
                ;
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_16, t);
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_14 = NULL;
          v_14 = t;
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_11 = NULL,l_11 = NULL;
                t = v_14;
                {
                  ATerm i_23 = t;
                  int j_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
                      t = term_s_21;
                      x_10 = t;
                      t = term_m_19;
                      q_10 = t;
                      t = x_10;
                      y_10 = t;
                      t = term_s_21;
                      w_10 = t;
                      t = SSL_table_get(q_10, w_10);
                      {
                        ATerm k_23 = t;
                        int l_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_10 = NULL,a_11 = NULL,e_11 = NULL,f_11 = NULL,i_11 = NULL;
                            t = eval_config_0_0(t);
                            p_10 = t;
                            f_11 = t;
                            t = term_m_19;
                            a_11 = t;
                            t = f_11;
                            i_11 = t;
                            t = term_s_21;
                            e_11 = t;
                            t = SSL_table_put(a_11, e_11, p_10);
                            t = p_10;
                            ;
                            LocalPopChoice(l_23);
                          }
                        else
                          {
                            t = k_23;
                          }
                      }
                      ;
                      LocalPopChoice(j_23);
                    }
                  else
                    {
                      t = i_23;
                      t = fetch_1_0(b_17, t);
                    }
                  t = v_14;
                  t = default_system_usage_0_0(t);
                  l_11 = t;
                  t = term_y_19;
                  j_11 = t;
                  t = SSL_exit(j_11);
                }
                ;
                LocalPopChoice(h_23);
              }
            else
              {
                t = g_23;
                {
                  ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,v_11 = NULL,w_11 = NULL;
                  t = term_j_22;
                  p_11 = t;
                  t = term_m_19;
                  m_11 = t;
                  t = p_11;
                  q_11 = t;
                  t = term_j_22;
                  o_11 = t;
                  t = SSL_table_get(m_11, o_11);
                  {
                    ATerm m_23 = t;
                    int n_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_13 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
                        t = eval_config_0_0(t);
                        g_13 = t;
                        t_11 = t;
                        t = term_m_19;
                        r_11 = t;
                        t = t_11;
                        u_11 = t;
                        t = term_j_22;
                        s_11 = t;
                        t = SSL_table_put(r_11, s_11, g_13);
                        t = g_13;
                        ;
                        LocalPopChoice(n_23);
                      }
                    else
                      {
                        t = m_23;
                      }
                    t = v_14;
                    t = default_system_about_0_0(t);
                    w_11 = t;
                    t = term_y_19;
                    v_11 = t;
                    t = SSL_exit(v_11);
                  }
                }
              }
          }
          ;
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_11 = NULL,z_11 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL,h_12 = NULL;
                ATerm c_17 (ATerm t)
                {
                  ATerm d_17 (ATerm t)
                  {
                    if(((o_14 != NULL) && (o_14 != t)))
                      _fail(t);
                    else
                      o_14 = t;
                    return(t);
                  }
                  t = Undefined_1_0(d_17, t);
                  return(t);
                }
                t = fetch_1_0(c_17, t);
                c_12 = t;
                t = term_j_14;
                x_11 = t;
                t = c_12;
                d_12 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), term_q_23);
                z_11 = t;
                t = SSL_printnl(x_11, z_11);
                t = (ATerm) ATmakeAppl(sym__2, term_j_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), term_q_23));
                t = default_system_usage_0_0(t);
                h_12 = t;
                t = term_s_17;
                f_12 = t;
                t = SSL_exit(f_12);
                ;
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
              }
          }
        }
      p_14 = t;
      o_12 = t;
      t = term_j_20;
      l_12 = t;
      t = SSL_table_destroy(l_12);
      t = p_14;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,p_12 = NULL,q_12 = NULL,x_12 = NULL,y_12 = NULL,e_13 = NULL,f_13 = NULL;
  t = parse_options_1_0(r_107, t);
  y_14 = t;
  q_12 = t;
  t = term_r_23;
  p_12 = t;
  t = SSL_table_create(p_12);
  e_13 = t;
  t = term_r_23;
  x_12 = t;
  t = e_13;
  f_13 = t;
  t = term_s_23;
  y_12 = t;
  t = SSL_table_put(x_12, y_12, y_14);
  t = y_14;
  t = t_107(t);
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_107, t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = if_verbose2_1_0(k_17, t);
  return(t);
}
ATerm h_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  t = term_m_19;
  j_13 = t;
  t = m_13;
  n_13 = t;
  t = term_x_23;
  k_13 = t;
  t = n_13;
  o_13 = t;
  t = term_m_7;
  l_13 = t;
  t = SSL_table_put(j_13, k_13, l_13);
  t = term_y_23;
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,t_13 = NULL,w_13 = NULL,z_13 = NULL,a_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,r_14 = NULL;
  z_14 = t;
  t = term_u_20;
  z_13 = t;
  t = term_m_19;
  t_13 = t;
  t = z_13;
  a_14 = t;
  t = term_u_20;
  w_13 = t;
  t = SSL_table_get(t_13, w_13);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL,b_14 = NULL,e_14 = NULL,h_14 = NULL,i_14 = NULL;
        t = eval_config_0_0(t);
        s_13 = t;
        h_14 = t;
        t = term_m_19;
        b_14 = t;
        t = h_14;
        i_14 = t;
        t = term_u_20;
        e_14 = t;
        t = SSL_table_put(b_14, e_14, s_13);
        t = s_13;
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
      }
    a_15 = t;
    m_14 = t;
    t = term_j_14;
    k_14 = t;
    t = m_14;
    r_14 = t;
    t = (ATerm) ATinsert(ATempty, a_15);
    l_14 = t;
    t = SSL_printnl(k_14, l_14);
    t = z_14;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm t)
{
  ATerm e_17 (ATerm t)
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_107(t);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm e_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(f_24);
            }
          else
            {
              t = e_24;
              {
                ATerm g_24 = t;
                int h_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(h_24);
                  }
                else
                  {
                    t = g_24;
                    {
                      ATerm i_24 = t;
                      int j_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_17, i_17, j_17, t);
                          ;
                          LocalPopChoice(j_24);
                        }
                      else
                        {
                          t = i_24;
                          {
                            ATerm k_24 = t;
                            int l_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_24);
                              }
                            else
                              {
                                t = k_24;
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
  ATerm g_17 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,y_13 = NULL;
    b_15 = t;
    {
      ATerm m_24 = t;
      int n_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_15 != NULL) && (c_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_17, t);
          ;
          LocalPopChoice(n_24);
        }
      else
        {
          t = m_24;
          t = term_o_24;
          c_15 = t;
        }
      t = not_null(c_15);
      t = ReadFromFile_0_0(t);
      y_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_15, y_13);
      t = apply_strategy_1_0(a_107, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(e_17, c_107, f_17, g_17, t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = _2_0(_id, n_17, t);
  return(t);
}
ATerm n_17 (ATerm t)
{
  t = topdown_1_0(o_17, t);
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = repeat_1_0(p_17, t);
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarAssign_0_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = DesugarCase_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_17, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_g_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_m_10;
ATerm term_q_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_u_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_q_5;
ATerm term_n_5;
ATerm term_i_4;
ATerm term_c_4;
ATerm term_a_4;
ATerm term_w_3;
ATerm term_g_3;
void init_constant_terms (void)
{
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym__2, term_h_6, term_i_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__2, term_z_6, term_w_5);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_k_7);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_w_5);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_w_5);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_w_5);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_i_4, term_w_5);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_73 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm z_73 (ATerm), ATerm);
ATerm k_3 (ATerm o_39, ATerm p_39, ATerm);
ATerm l_3 (ATerm c_43, ATerm d_43, ATerm);
ATerm n_3 (ATerm n_92 (ATerm), ATerm a_400, ATerm g_43, ATerm);
ATerm m_3 (ATerm y_42, ATerm z_42, ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm output_1_0 (ATerm w_96 (ATerm), ATerm);
ATerm s_6 (ATerm e_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_3 (ATerm e_43, ATerm);
ATerm p_3 (ATerm q_39, ATerm r_39, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_9 (ATerm m_7, ATerm);
ATerm o_9 (ATerm s_7, ATerm t_7, ATerm u_7, ATerm);
ATerm p_9 (ATerm g_8, ATerm h_8, ATerm p_8, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm f_0 (ATerm);
ATerm o_0 (ATerm);
ATerm s_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_3 (ATerm f_44, ATerm g_44, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_3 (ATerm d_49, ATerm e_49, ATerm c_49, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm q_3 (ATerm o_36, ATerm p_36, ATerm);
ATerm foldr_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm need_help_1_0 (ATerm n_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm a_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_3 (ATerm e_34, ATerm f_34, ATerm);
ATerm debug_1_0 (ATerm l_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm q_79 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm u_3 (ATerm u_50, ATerm v_50, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm q_98 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm parse_options_1_0 (ATerm p_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm b_1 = NULL,d_1 = NULL,f_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      n_1 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
      t = n_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_1 = ATgetFirst((ATermList) t);
          j_1 = (ATerm) ATgetNext((ATermList) t);
          t = k_1;
          if(match_cons(t, sym_Alt_3))
            {
              b_1 = ATgetArgument(t, 0);
              f_1 = ATgetArgument(t, 1);
              h_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = b_1;
          if(match_cons(t, sym_Real_1))
            {
              d_1 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, d_1)), h_1, (ATerm) ATmakeAppl(sym_Case_2, j_1, o_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  d_1 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, d_1)), h_1, (ATerm) ATmakeAppl(sym_Case_2, j_1, o_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      d_1 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, d_1)), h_1, (ATerm) ATmakeAppl(sym_Case_2, j_1, o_1));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          d_1 = ATgetArgument(t, 0);
                          {
                            ATerm c_3 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_1, f_1)), h_1, (ATerm) ATmakeAppl(sym_Case_2, j_1, o_1));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_1;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          n_1 = ATgetArgument(t, 0);
          o_1 = ATgetArgument(t, 1);
          q_1 = ATgetArgument(t, 2);
          t = n_1;
          if(match_cons(t, sym_Var_1))
            {
              k_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_1)), (ATerm) ATmakeAppl(sym_Case_2, o_1, q_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm d_3 = ATgetArgument(t, 0);
              o_1 = ATgetArgument(t, 1);
              q_1 = ATgetArgument(t, 2);
              r_1 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, o_1, q_1, r_1);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      h_3 = ATgetArgument(t, 0);
      t = h_3;
      if(match_cons(t, sym_Var_1))
        {
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_3));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          h_3 = ATgetArgument(t, 0);
          r_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_3;
      if(match_cons(t, sym_Var_1))
        {
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_3)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm b_73 (ATerm), ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm e_3 = t;
    int f_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_73(t);
        t = f_4(t);
        ;
        LocalPopChoice(f_3);
      }
    else
      {
        t = e_3;
      }
    return(t);
  }
  t = f_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm z_73 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(z_73, t);
    return(t);
  }
  t = z_73(t);
  t = SRTS_all(a_0, t);
  return(t);
}
ATerm k_3 (ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm g_4 = NULL;
  t = SSL_fputc(o_39, p_39);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_4);
  return(t);
}
ATerm l_3 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm h_4 = NULL;
  t = SSL_write_term_to_stream_text(c_43, d_43);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_4);
  return(t);
}
ATerm n_3 (ATerm n_92 (ATerm), ATerm a_400, ATerm g_43, ATerm t)
{
  ATerm k_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_400, term_g_3);
  t = open_stream_0_0(t);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, g_43);
  t = n_92(t);
  t = fclose_0_0(t);
  t = g_43;
  return(t);
}
ATerm m_3 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm m_4 = NULL;
  t = SSL_write_term_to_stream_baf(y_42, z_42);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_4);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm p_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_3 = ATgetArgument(t, 0);
      if(match_cons(j_3, sym_Stream_1))
        {
          p_4 = ATgetArgument(j_3, 0);
        }
      else
        _fail(t);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_3(p_4, s_4, t);
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,x_4 = NULL,d_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_3 = ATgetArgument(t, 0);
      if(match_cons(s_3, sym_Stream_1))
        {
          d_5 = ATgetArgument(s_3, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_3(d_5, g_5, t);
  u_4 = t;
  t = term_w_3;
  v_4 = t;
  t = u_4;
  if(match_cons(t, sym_Stream_1))
    {
      x_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_3, u_4);
  t = k_3(v_4, x_4, t);
  return(t);
}
ATerm output_1_0 (ATerm w_96 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL;
  t = w_96(t);
  o_4 = t;
  {
    ATerm y_3 = t;
    int z_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_4;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_3);
      }
    else
      {
        t = y_3;
        t = term_c_4;
      }
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
    {
      ATerm d_4 = t;
      int e_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_i_4;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
          LocalPopChoice(e_4);
          if(match_cons(t, sym__2))
            {
              ATerm l_4 = ATgetArgument(t, 0);
              ATerm q_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_3(b_0, n_4, o_4, t);
        }
      else
        {
          t = d_4;
          if(match_cons(t, sym__2))
            {
              ATerm r_4 = ATgetArgument(t, 0);
              ATerm t_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_3(c_0, n_4, o_4, t);
        }
    }
  }
  return(t);
}
ATerm s_6 (ATerm e_6, ATerm t)
{
  t = SSL_fclose(e_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_6 = NULL,o_6 = NULL;
  o_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_6 = ATgetArgument(t, 0);
      {
        ATerm w_4 = t;
        int y_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_6);
            ;
            LocalPopChoice(y_4);
          }
        else
          {
            t = w_4;
            t = s_6(o_6, t);
          }
      }
    }
  else
    {
      t = s_6(o_6, t);
    }
  return(t);
}
ATerm o_3 (ATerm e_43, ATerm t)
{
  t = SSL_read_term_from_stream(e_43);
  return(t);
}
ATerm p_3 (ATerm q_39, ATerm r_39, ATerm t)
{
  ATerm t_6 = NULL;
  t = SSL_fopen(q_39, r_39);
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  t = SSL_stdin_stream();
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_stdout_stream();
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_6 = NULL;
  t = SSL_stderr_stream();
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_6);
  return(t);
}
ATerm n_9 (ATerm m_7, ATerm t)
{
  ATerm n_7 = NULL;
  t = SSL_explode_term(m_7);
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_5 = ATgetArgument(t, 1);
        if(((ATgetType(b_5) == AT_LIST) && !(ATisEmpty(b_5))))
          {
            n_7 = ATgetFirst((ATermList) b_5);
            {
              ATerm c_5 = (ATerm) ATgetNext((ATermList) b_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_7;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_9 (ATerm s_7, ATerm t_7, ATerm u_7, ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,c_8 = NULL,n_0 = NULL;
  t = SSLgetAnnotations(u_7);
  x_7 = t;
  t = s_7;
  if(match_cons(t, sym_Path_1))
    {
      c_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_8, t_7);
  n_0 = t;
  t = SSLsetAnnotations(n_0, x_7);
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(v_7, w_7, t);
  return(t);
}
ATerm p_9 (ATerm g_8, ATerm h_8, ATerm p_8, ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,x_8 = NULL,d_9 = NULL,r_0 = NULL;
  t = SSLgetAnnotations(p_8);
  x_8 = t;
  t = SSL_is_string(g_8);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_9, h_8);
  r_0 = t;
  t = SSLsetAnnotations(r_0, x_8);
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(q_8, r_8, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_5 = ATgetArgument(t, 0);
      ATerm i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  j_9 = t;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_9(j_9, t);
            ;
            LocalPopChoice(k_5);
          }
        else
          {
            t = j_5;
            {
              ATerm l_5 = t;
              int m_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_9(k_9, m_9, j_9, t);
                  ;
                  LocalPopChoice(m_5);
                }
              else
                {
                  t = l_5;
                  t = p_9(k_9, m_9, j_9, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_9(j_9, t);
    }
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_n_5;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_9 = NULL;
      w_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_9, term_q_5);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      t = debug_1_0(e_0, t);
      _fail(t);
    }
  s_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_3(t_9, t);
  r_9 = t;
  t = s_9;
  t = fclose_0_0(t);
  t = r_9;
  return(t);
}
ATerm input_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_5;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      t = term_u_5;
    }
  t = ReadFromFile_0_0(t);
  t = x_96(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL;
  y_9 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  z_9 = t;
  t = term_y_5;
  c_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_6), z_9), term_z_5);
  d_10 = t;
  t = SSL_printnl(c_10, d_10);
  t = term_c_6;
  a_10 = t;
  t = SSL_exit(a_10);
  t = y_9;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  if(match_string(t, "-k"))
    {
      t = g_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_10;
    }
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm h_10 = NULL,j_10 = NULL,k_10 = NULL;
  h_10 = t;
  t = SSL_string_to_int(h_10);
  j_10 = t;
  t = term_f_6;
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, j_10);
  t = x_3(k_10, j_10, t);
  t = h_10;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_g_6;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_0, o_0, s_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  if(match_string(t, "-S"))
    {
      t = n_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_10;
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm o_10 = NULL,v_10 = NULL;
  t = term_h_6;
  o_10 = t;
  t = term_i_6;
  v_10 = t;
  t = term_l_6;
  t = x_3(o_10, v_10, t);
  t = term_n_6;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_q_6;
  return(t);
}
ATerm y_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL;
  w_10 = t;
  t = SSL_string_to_int(w_10);
  x_10 = t;
  t = term_h_6;
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, x_10);
  t = x_3(y_10, x_10, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_10);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_u_6;
  return(t);
}
ATerm c_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  t = term_z_6;
  a_11 = t;
  t = term_w_5;
  b_11 = t;
  t = term_b_7;
  t = x_3(a_11, b_11, t);
  t = term_c_7;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_0, w_0, x_0, t);
      ;
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      {
        ATerm g_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_0, z_0, a_1, t);
            ;
            LocalPopChoice(h_7);
          }
        else
          {
            t = g_7;
            t = Option_3_0(c_1, e_1, g_1, t);
          }
      }
    }
  return(t);
}
ATerm x_3 (ATerm f_44, ATerm g_44, ATerm t)
{
  ATerm c_11 = NULL;
  t = term_i_7;
  c_11 = t;
  t = SSL_table_put(c_11, f_44, g_44);
  t = (ATerm) ATmakeAppl(sym__3, term_i_7, f_44, g_44);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,m_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
      t = term_w_5;
      t = h_0(t);
      n_11 = t;
      t = term_j_7;
      o_11 = t;
      t = term_k_7;
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_7, term_k_7, n_11);
      t = v_3(o_11, p_11, n_11, t);
      _fail(t);
    }
  else
    {
      ATerm t_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_11 = ATgetFirst((ATermList) t);
          m_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_11;
      t = d_0(t);
      t = term_w_5;
      t = g_0(t);
      t_11 = t;
      t = (ATerm) ATinsert(CheckATermList(m_11), t_11);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm v_11 = NULL;
  v_11 = t;
  if(match_string(t, "-o"))
    {
      t = v_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_11;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL;
  w_11 = t;
  t = term_a_4;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_4, w_11);
  t = x_3(x_11, w_11, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_11);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_1, l_1, m_1, t);
  return(t);
}
ATerm v_3 (ATerm d_49, ATerm e_49, ATerm c_49, ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_7 = ATgetArgument(t, 0);
            ATerm r_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
        t = u_3(d_49, e_49, t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = (ATerm) ATempty;
      }
    a_12 = t;
    t = (ATerm) ATinsert(CheckATermList(a_12), c_49);
    b_12 = t;
    t = SSL_table_put(d_49, e_49, b_12);
    t = z_11;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,u_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_12 = NULL,a_13 = NULL,d_13 = NULL;
      t = term_w_5;
      t = m_0(t);
      z_12 = t;
      t = term_j_7;
      a_13 = t;
      t = term_k_7;
      d_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_7, term_k_7, z_12);
      t = v_3(a_13, d_13, z_12, t);
      _fail(t);
    }
  else
    {
      ATerm n_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_12 = ATgetFirst((ATermList) t);
          u_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_12 = ATgetFirst((ATermList) t);
          y_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_12;
      t = k_0(t);
      t = x_12;
      t = l_0(t);
      n_13 = t;
      t = (ATerm) ATinsert(CheckATermList(y_12), n_13);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm p_13 = NULL;
  p_13 = t;
  if(match_string(t, "-i"))
    {
      t = p_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_13;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  q_13 = t;
  t = term_t_5;
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_5, q_13);
  t = x_3(r_13, q_13, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_13);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_y_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_1, s_1, t_1, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  s_13 = t;
  t = term_y_5;
  u_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_7), s_13);
  v_13 = t;
  t = SSL_printnl(u_13, v_13);
  t = term_c_6;
  t_13 = t;
  t = SSL_exit(t_13);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_8;
  t = get_config_0_0(t);
  return(t);
}
ATerm q_3 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm b_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_36, p_36);
      ;
      LocalPopChoice(d_8);
    }
  else
    {
      t = b_8;
      t = SSL_addr(o_36, p_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
  x_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_13;
      t = t_85(t);
    }
  else
    {
      ATerm c_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_13 = ATgetFirst((ATermList) t);
          z_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_13;
      t = foldr_2_0(t_85, u_85, t);
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_13, c_14);
      t = u_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm t_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      t_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(t_0, u_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_14 = NULL,p_0 = NULL,q_0 = NULL;
  t = times_0_0(t);
  q_0 = t;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_0;
  t = foldr_2_0(u_1, v_1, t);
  f_14 = t;
  t = SSL_TicksToSeconds(f_14);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,u_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym__2))
    {
      r_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_14;
        if((r_14 != t))
          {
            _fail(t);
          }
        t = q_14;
        ;
        LocalPopChoice(i_8);
      }
    else
      {
        t = f_8;
        t = (ATerm) ATmakeAppl(sym__2, r_14, u_14);
        {
          ATerm j_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_14, u_14);
              ;
              LocalPopChoice(k_8);
            }
          else
            {
              t = j_8;
              t = SSL_gtr(r_14, u_14);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_14, u_14);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL;
        t = term_h_6;
        t = get_config_0_0(t);
        a_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_15, term_c_6);
        t = geq_0_0(t);
        t = y_14;
        t = x_93(t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = y_14;
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,f_15 = NULL,g_15 = NULL;
  t = run_time_0_0(t);
  c_15 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  d_15 = t;
  t = term_y_5;
  f_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_8), c_15), term_n_8), d_15);
  g_15 = t;
  t = SSL_printnl(f_15, g_15);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_8), c_15), term_n_8), d_15));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_1, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_6;
  h_15 = t;
  t = SSL_exit(h_15);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  q_15 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_15;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_15 = ATgetArgument(t, 0);
          {
            ATerm x_1 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(q_15);
            x_1 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_15);
            v_5 = t;
            t = SSLsetAnnotations(v_5, x_1);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_15;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_96 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      t = fetch_1_0(y_1, t);
    }
  t = n_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_15 = ATgetFirst((ATermList) t);
      u_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_15 = NULL,z_15 = NULL;
        ATerm z_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_15)), not_null(z_15));
          return(t);
        }
        t = u_15;
        t = j_0(t);
        if(((y_15 != NULL) && (y_15 != t)))
          _fail(t);
        else
          y_15 = t;
        t = t_15;
        t = i_0(t);
        if(((z_15 != NULL) && (z_15 != t)))
          _fail(t);
        else
          z_15 = t;
        t = u_15;
        t = reverse_acc_2_0(i_0, z_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_5;
      t = j_0(t);
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,a_6 = NULL;
  f_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_16);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_16);
  a_6 = t;
  t = SSLsetAnnotations(a_6, d_16);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_16), term_v_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  ATerm w_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = w_8;
      t = fetch_1_0(a_2, t);
    }
  t = term_z_8;
  t = echo_0_0(t);
  t = term_j_7;
  b_16 = t;
  t = term_k_7;
  c_16 = t;
  t = term_a_9;
  t = u_3(b_16, c_16, t);
  t = reverse_acc_2_0(_id, b_2, t);
  t = map_1_0(c_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm e_17 (ATerm t)
  {
    ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
    b_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_17 = ATgetFirst((ATermList) t);
        d_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 = NULL,b_3 = NULL,j_6 = NULL;
          t = SSLgetAnnotations(b_17);
          u_2 = t;
          t = c_17;
          t = a_80(t);
          b_3 = t;
          t = (ATerm) ATinsert(CheckATermList(d_17), b_3);
          j_6 = t;
          t = SSLsetAnnotations(j_6, u_2);
          ;
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
          {
            ATerm b_4 = NULL,j_4 = NULL,k_6 = NULL;
            t = SSLgetAnnotations(b_17);
            b_4 = t;
            t = d_17;
            t = e_17(t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), c_17);
            k_6 = t;
            t = SSLsetAnnotations(k_6, b_4);
          }
        }
    }
    return(t);
  }
  t = e_17(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_9 = ATgetFirst((ATermList) t);
                ATerm h_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_17;
          }
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATinsert(ATempty, i_17);
      }
    j_17 = t;
    t = term_c_4;
    k_17 = t;
    t = SSL_printnl(k_17, j_17);
    t = i_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_8;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm t_3 (ATerm e_34, ATerm f_34, ATerm t)
{
  t = SSL_strcat(e_34, f_34);
  return(t);
}
ATerm debug_1_0 (ATerm l_92 (ATerm), ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  o_17 = t;
  t = l_92(t);
  p_17 = t;
  t = term_y_5;
  q_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_17), p_17);
  r_17 = t;
  t = SSL_printnl(q_17, r_17);
  t = o_17;
  return(t);
}
ATerm map_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm g_18 (ATerm t)
  {
    ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
    d_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_18;
      }
    else
      {
        ATerm a_5 = NULL,e_5 = NULL,f_5 = NULL,p_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_18 = ATgetFirst((ATermList) t);
            f_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_18);
        a_5 = t;
        t = e_18;
        t = q_79(t);
        e_5 = t;
        t = f_18;
        t = g_18(t);
        f_5 = t;
        t = (ATerm) ATinsert(CheckATermList(f_5), e_5);
        p_6 = t;
        t = SSLsetAnnotations(p_6, a_5);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm i_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = i_9;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 = NULL;
      o_18 = t;
      t = SSL_is_string(o_18);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm x_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_2, t);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = x_9;
            {
              ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
              v_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_19 = ATgetArgument(t, 0);
                  t = w_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_19 = ATgetArgument(t, 0);
                      t = w_19;
                      {
                        ATerm e_10 = t;
                        int f_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_10);
                          }
                        else
                          {
                            t = e_10;
                            t = debug_1_0(e_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_20 = NULL,c_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_19 = ATgetArgument(t, 0);
                          x_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_19;
                      t = eval_config_0_0(t);
                      b_20 = t;
                      t = x_19;
                      t = eval_config_0_0(t);
                      c_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_20, c_20);
                      t = t_3(b_20, c_20, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_3 (ATerm u_50, ATerm v_50, ATerm t)
{
  t = SSL_table_get(u_50, v_50);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  g_20 = t;
  t = term_i_7;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, g_20);
  t = u_3(h_20, g_20, t);
  {
    ATerm i_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_20 = NULL,j_20 = NULL;
        t = eval_config_0_0(t);
        i_20 = t;
        t = term_i_7;
        j_20 = t;
        t = SSL_table_put(j_20, g_20, i_20);
        t = i_20;
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = i_10;
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  t = term_m_10;
  m_20 = t;
  t = term_w_5;
  n_20 = t;
  t = term_p_10;
  t = x_3(m_20, n_20, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  t = term_m_10;
  q_20 = t;
  t = term_w_5;
  r_20 = t;
  t = term_p_10;
  t = x_3(q_20, r_20, t);
  t = term_r_10;
  o_20 = t;
  t = term_w_5;
  p_20 = t;
  t = term_s_10;
  t = x_3(o_20, p_20, t);
  t = term_t_10;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_2, g_2, h_2, t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = z_10;
      t = Option_3_0(i_2, j_2, k_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_58 (ATerm), ATerm l_58 (ATerm), ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,r_6 = NULL;
  x_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_20 = ATgetFirst((ATermList) t);
      u_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_20);
  s_20 = t;
  t = t_20;
  t = k_58(t);
  v_20 = t;
  t = u_20;
  t = l_58(t);
  w_20 = t;
  t = (ATerm) ATinsert(CheckATermList(w_20), v_20);
  r_6 = t;
  t = SSLsetAnnotations(r_6, s_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,h_21 = NULL,i_21 = NULL,v_6 = NULL;
  c_21 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_11;
        t = q_98(t);
        ;
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
      }
    t = c_21;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_21 = ATgetFirst((ATermList) t);
        f_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_21);
    d_21 = t;
    t = term_a_8;
    i_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_8, e_21);
    t = x_3(i_21, e_21, t);
    t = f_21;
    {
      ATerm s_21 (ATerm t)
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_11 = t;
            int l_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_21 = NULL;
                l_21 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_21;
                ;
                LocalPopChoice(l_11);
              }
            else
              {
                t = j_11;
                t = q_98(t);
                t = Cons_2_0(_id, s_21, t);
              }
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm o_21 = NULL,p_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_21 = ATgetFirst((ATermList) t);
                  p_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_21), (ATerm) ATmakeAppl(sym_Undefined_1, o_21));
            }
          }
        return(t);
      }
      t = s_21(t);
      h_21 = t;
      t = (ATerm) ATinsert(CheckATermList(h_21), (ATerm) ATmakeAppl(sym_Program_1, e_21));
      v_6 = t;
      t = SSLsetAnnotations(v_6, d_21);
    }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm g_22 = NULL;
  g_22 = t;
  if(match_string(t, "--help"))
    {
      t = g_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_22;
        }
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  t = term_u_8;
  h_22 = t;
  t = term_w_5;
  i_22 = t;
  t = term_q_11;
  t = x_3(h_22, i_22, t);
  t = term_r_11;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  b_22 = t;
  t = term_j_7;
  d_22 = t;
  t = term_k_7;
  e_22 = t;
  t = (ATerm) ATempty;
  f_22 = t;
  t = SSL_table_put(d_22, e_22, f_22);
  t = b_22;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm u_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_98(t);
          ;
          LocalPopChoice(y_11);
        }
      else
        {
          t = u_11;
          {
            ATerm c_12 = t;
            int d_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_2, n_2, o_2, t);
                ;
                LocalPopChoice(d_12);
              }
            else
              {
                t = c_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_2, t);
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_22 = NULL;
          p_22 = t;
          {
            ATerm g_12 = t;
            int h_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_5 = NULL;
                t = p_22;
                {
                  ATerm i_12 = t;
                  int j_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_8;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_12);
                    }
                  else
                    {
                      t = i_12;
                      t = fetch_1_0(p_2, t);
                    }
                  t = p_22;
                  t = default_system_usage_0_0(t);
                  t = term_i_6;
                  x_5 = t;
                  t = SSL_exit(x_5);
                }
                ;
                LocalPopChoice(h_12);
              }
            else
              {
                t = g_12;
                {
                  ATerm d_6 = NULL;
                  t = term_m_10;
                  t = get_config_0_0(t);
                  t = p_22;
                  t = default_system_about_0_0(t);
                  t = term_i_6;
                  d_6 = t;
                  t = SSL_exit(d_6);
                }
              }
          }
          ;
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          {
            ATerm k_12 = t;
            int l_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
                ATerm q_2 (ATerm t)
                {
                  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,a_7 = NULL;
                  v_22 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_22);
                  t_22 = t;
                  t = u_22;
                  if(((x_21 != NULL) && (x_21 != t)))
                    _fail(t);
                  else
                    x_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_22);
                  a_7 = t;
                  t = SSLsetAnnotations(a_7, t_22);
                  return(t);
                }
                t = fetch_1_0(q_2, t);
                t = term_y_5;
                r_22 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_21)), term_m_12);
                s_22 = t;
                t = SSL_printnl(r_22, s_22);
                t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_21)), term_m_12));
                t = default_system_usage_0_0(t);
                t = term_c_6;
                q_22 = t;
                t = SSL_exit(q_22);
                ;
                LocalPopChoice(l_12);
              }
            else
              {
                t = k_12;
              }
          }
        }
      y_21 = t;
      t = term_j_7;
      c_22 = t;
      t = SSL_table_destroy(c_22);
      t = y_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  t = parse_options_1_0(p_96, t);
  a_23 = t;
  t = term_n_12;
  d_23 = t;
  t = SSL_table_create(d_23);
  t = term_n_12;
  b_23 = t;
  t = term_o_12;
  c_23 = t;
  t = SSL_table_put(b_23, c_23, a_23);
  t = a_23;
  t = r_96(t);
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_96, t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm e_13 = t;
              int f_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(t_2, v_2, w_2, t);
                  ;
                  LocalPopChoice(f_13);
                }
              else
                {
                  t = e_13;
                  {
                    ATerm g_13 = t;
                    int h_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(h_13);
                      }
                    else
                      {
                        t = g_13;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = input_1_0(x_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  t = term_i_4;
  f_23 = t;
  t = term_w_5;
  g_23 = t;
  t = term_i_13;
  t = x_3(f_23, g_23, t);
  t = term_j_13;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = output_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = topdown_1_0(z_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = repeat_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarAssign_0_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      t = DesugarCase_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_2, default_usage_0_0, _id, s_2, t);
  return(t);
}

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
ATerm term_q_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_l_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_i_6;
ATerm term_g_6;
ATerm term_e_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_q_5;
ATerm term_n_5;
ATerm term_f_4;
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
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
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
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym__2, term_i_6, term_k_6);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_w_5);
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
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_k_7);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_w_5);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_w_5);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_w_5);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_f_4, term_w_5);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_84 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm k_3 (ATerm i_51, ATerm j_51, ATerm);
ATerm l_3 (ATerm w_54, ATerm x_54, ATerm);
ATerm n_3 (ATerm b_104 (ATerm), ATerm o_429, ATerm a_55, ATerm);
ATerm m_3 (ATerm s_54, ATerm t_54, ATerm);
ATerm e_0 (ATerm);
ATerm l_0 (ATerm);
ATerm output_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm t_6 (ATerm f_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_3 (ATerm y_54, ATerm);
ATerm p_3 (ATerm k_51, ATerm l_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_9 (ATerm n_7, ATerm);
ATerm p_9 (ATerm t_7, ATerm u_7, ATerm v_7, ATerm);
ATerm r_9 (ATerm h_8, ATerm p_8, ATerm q_8, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm m_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm s_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_3 (ATerm z_55, ATerm a_56, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_3 (ATerm x_60, ATerm y_60, ATerm w_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm t_1 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm q_3 (ATerm i_48, ATerm j_48, ATerm);
ATerm foldr_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm need_help_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_3 (ATerm y_45, ATerm z_45, ATerm);
ATerm debug_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm u_3 (ATerm o_62, ATerm p_62, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_110 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm parse_options_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm);
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
  ATerm b_1 = NULL,d_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      o_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
      t = o_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_1 = ATgetFirst((ATermList) t);
          k_1 = (ATerm) ATgetNext((ATermList) t);
          t = l_1;
          if(match_cons(t, sym_Alt_3))
            {
              b_1 = ATgetArgument(t, 0);
              h_1 = ATgetArgument(t, 1);
              j_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = b_1;
          if(match_cons(t, sym_Real_1))
            {
              d_1 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, d_1)), j_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  d_1 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, d_1)), j_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      d_1 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, d_1)), j_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          d_1 = ATgetArgument(t, 0);
                          {
                            ATerm b_3 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, d_1, h_1)), j_1, (ATerm) ATmakeAppl(sym_Case_2, k_1, q_1));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_1;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          o_1 = ATgetArgument(t, 0);
          q_1 = ATgetArgument(t, 1);
          r_1 = ATgetArgument(t, 2);
          t = o_1;
          if(match_cons(t, sym_Var_1))
            {
              l_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Case_2, q_1, r_1));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm d_3 = ATgetArgument(t, 0);
              q_1 = ATgetArgument(t, 1);
              r_1 = ATgetArgument(t, 2);
              s_1 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, q_1, r_1, s_1);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm i_3 = NULL,r_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      i_3 = ATgetArgument(t, 0);
      t = i_3;
      if(match_cons(t, sym_Var_1))
        {
          r_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_3));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          i_3 = ATgetArgument(t, 0);
          s_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_3;
      if(match_cons(t, sym_Var_1))
        {
          r_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_3)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm e_3 = t;
    int f_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_84(t);
        t = g_4(t);
        ;
        LocalPopChoice(f_3);
      }
    else
      {
        t = e_3;
      }
    return(t);
  }
  t = g_4(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = topdown_1_0(t_85, t);
    return(t);
  }
  t = t_85(t);
  t = SRTS_all(c_0, t);
  return(t);
}
ATerm k_3 (ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm h_4 = NULL;
  t = SSL_fputc(i_51, j_51);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_4);
  return(t);
}
ATerm l_3 (ATerm w_54, ATerm x_54, ATerm t)
{
  ATerm k_4 = NULL;
  t = SSL_write_term_to_stream_text(w_54, x_54);
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_4);
  return(t);
}
ATerm n_3 (ATerm b_104 (ATerm), ATerm o_429, ATerm a_55, ATerm t)
{
  ATerm m_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_429, term_g_3);
  t = open_stream_0_0(t);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_4, a_55);
  t = b_104(t);
  t = fclose_0_0(t);
  t = a_55;
  return(t);
}
ATerm m_3 (ATerm s_54, ATerm t_54, ATerm t)
{
  ATerm n_4 = NULL;
  t = SSL_write_term_to_stream_baf(s_54, t_54);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_4);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm s_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_3 = ATgetArgument(t, 0);
      if(match_cons(h_3, sym_Stream_1))
        {
          s_4 = ATgetArgument(h_3, 0);
        }
      else
        _fail(t);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_3(s_4, u_4, t);
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm v_4 = NULL,x_4 = NULL,d_5 = NULL,g_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_3 = ATgetArgument(t, 0);
      if(match_cons(j_3, sym_Stream_1))
        {
          g_5 = ATgetArgument(j_3, 0);
        }
      else
        _fail(t);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_3(g_5, h_5, t);
  v_4 = t;
  t = term_w_3;
  x_4 = t;
  t = v_4;
  if(match_cons(t, sym_Stream_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_3, v_4);
  t = k_3(x_4, d_5, t);
  return(t);
}
ATerm output_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  t = k_108(t);
  p_4 = t;
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
    o_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
    {
      ATerm d_4 = t;
      int e_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_f_4;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
          LocalPopChoice(e_4);
          if(match_cons(t, sym__2))
            {
              ATerm i_4 = ATgetArgument(t, 0);
              ATerm l_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_3(e_0, o_4, p_4, t);
        }
      else
        {
          t = d_4;
          if(match_cons(t, sym__2))
            {
              ATerm q_4 = ATgetArgument(t, 0);
              ATerm r_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_3(l_0, o_4, p_4, t);
        }
    }
  }
  return(t);
}
ATerm t_6 (ATerm f_6, ATerm t)
{
  t = SSL_fclose(f_6);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_6 = NULL,q_6 = NULL;
  q_6 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_6 = ATgetArgument(t, 0);
      {
        ATerm t_4 = t;
        int w_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_6);
            ;
            LocalPopChoice(w_4);
          }
        else
          {
            t = t_4;
            t = t_6(q_6, t);
          }
      }
    }
  else
    {
      t = t_6(q_6, t);
    }
  return(t);
}
ATerm o_3 (ATerm y_54, ATerm t)
{
  t = SSL_read_term_from_stream(y_54);
  return(t);
}
ATerm p_3 (ATerm k_51, ATerm l_51, ATerm t)
{
  ATerm w_6 = NULL;
  t = SSL_fopen(k_51, l_51);
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_6 = NULL;
  t = SSL_stdin_stream();
  x_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_6 = NULL;
  t = SSL_stdout_stream();
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_7 = NULL;
  t = SSL_stderr_stream();
  a_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_7);
  return(t);
}
ATerm o_9 (ATerm n_7, ATerm t)
{
  ATerm o_7 = NULL;
  t = SSL_explode_term(n_7);
  if(match_cons(t, sym__2))
    {
      ATerm y_4 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_4) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_4 = ATgetArgument(t, 1);
        if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
          {
            o_7 = ATgetFirst((ATermList) z_4);
            {
              ATerm b_5 = (ATerm) ATgetNext((ATermList) z_4);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_7;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_7;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_7;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_7;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_9 (ATerm t_7, ATerm u_7, ATerm v_7, ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,a_8 = NULL,f_8 = NULL,k_0 = NULL;
  t = SSLgetAnnotations(v_7);
  a_8 = t;
  t = t_7;
  if(match_cons(t, sym_Path_1))
    {
      f_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_8, u_7);
  k_0 = t;
  t = SSLsetAnnotations(k_0, a_8);
  if(match_cons(t, sym__2))
    {
      w_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(w_7, x_7, t);
  return(t);
}
ATerm r_9 (ATerm h_8, ATerm p_8, ATerm q_8, ATerm t)
{
  ATerm r_8 = NULL,x_8 = NULL,y_8 = NULL,e_9 = NULL,n_0 = NULL;
  t = SSLgetAnnotations(q_8);
  y_8 = t;
  t = SSL_is_string(h_8);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, p_8);
  n_0 = t;
  t = SSLsetAnnotations(n_0, y_8);
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(r_8, x_8, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_9 = NULL,m_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_5 = ATgetArgument(t, 0);
      ATerm i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_9 = t;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      {
        ATerm j_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_9(k_9, t);
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
                  t = p_9(m_9, n_9, k_9, t);
                  ;
                  LocalPopChoice(m_5);
                }
              else
                {
                  t = l_5;
                  t = r_9(m_9, n_9, k_9, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_9(k_9, t);
    }
  return(t);
}
ATerm m_0 (ATerm t)
{
  t = term_n_5;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,w_9 = NULL;
  ATerm o_5 = t;
  int p_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_9 = NULL;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_9, term_q_5);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_5);
    }
  else
    {
      t = o_5;
      t = debug_1_0(m_0, t);
      _fail(t);
    }
  t_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_3(w_9, t);
  s_9 = t;
  t = t_9;
  t = fclose_0_0(t);
  t = s_9;
  return(t);
}
ATerm input_1_0 (ATerm l_108 (ATerm), ATerm t)
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
  t = l_108(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  z_9 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  a_10 = t;
  t = term_y_5;
  d_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_6), a_10), term_z_5);
  e_10 = t;
  t = SSL_printnl(d_10, e_10);
  t = term_c_6;
  c_10 = t;
  t = SSL_exit(c_10);
  t = z_9;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  if(match_string(t, "-k"))
    {
      t = h_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_10;
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,m_10 = NULL;
  j_10 = t;
  t = SSL_string_to_int(j_10);
  k_10 = t;
  t = term_e_6;
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_6, k_10);
  t = x_3(m_10, k_10, t);
  t = j_10;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_g_6;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_0, p_0, s_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm o_10 = NULL;
  o_10 = t;
  if(match_string(t, "-S"))
    {
      t = o_10;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_10;
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  t = term_i_6;
  v_10 = t;
  t = term_k_6;
  w_10 = t;
  t = term_l_6;
  t = x_3(v_10, w_10, t);
  t = term_m_6;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_p_6;
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
  ATerm x_10 = NULL,y_10 = NULL,a_11 = NULL;
  x_10 = t;
  t = SSL_string_to_int(x_10);
  y_10 = t;
  t = term_i_6;
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, y_10);
  t = x_3(a_11, y_10, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_10);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_s_6;
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
  ATerm b_11 = NULL,c_11 = NULL;
  t = term_v_6;
  b_11 = t;
  t = term_w_5;
  c_11 = t;
  t = term_b_7;
  t = x_3(b_11, c_11, t);
  t = term_c_7;
  return(t);
}
ATerm f_1 (ATerm t)
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
      t = Option_3_0(t_0, w_0, x_0, t);
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
            t = Option_3_0(c_1, e_1, f_1, t);
          }
      }
    }
  return(t);
}
ATerm x_3 (ATerm z_55, ATerm a_56, ATerm t)
{
  ATerm f_11 = NULL;
  t = term_i_7;
  f_11 = t;
  t = SSL_table_put(f_11, z_55, a_56);
  t = (ATerm) ATmakeAppl(sym__3, term_i_7, z_55, a_56);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_11 = NULL,p_11 = NULL,r_11 = NULL;
      t = term_w_5;
      t = d_0(t);
      o_11 = t;
      t = term_j_7;
      p_11 = t;
      t = term_k_7;
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_7, term_k_7, o_11);
      t = v_3(p_11, r_11, o_11, t);
      _fail(t);
    }
  else
    {
      ATerm u_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_11 = ATgetFirst((ATermList) t);
          n_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_11;
      t = a_0(t);
      t = term_w_5;
      t = b_0(t);
      u_11 = t;
      t = (ATerm) ATinsert(CheckATermList(n_11), u_11);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  if(match_string(t, "-o"))
    {
      t = w_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_11;
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  t = term_a_4;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_4, x_11);
  t = x_3(y_11, x_11, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_11);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_1, i_1, m_1, t);
  return(t);
}
ATerm v_3 (ATerm x_60, ATerm y_60, ATerm w_60, ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,e_12 = NULL;
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_60, y_60);
  {
    ATerm m_7 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, x_60, y_60);
        t = u_3(x_60, y_60, t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = m_7;
        t = (ATerm) ATempty;
      }
    b_12 = t;
    t = (ATerm) ATinsert(CheckATermList(b_12), w_60);
    e_12 = t;
    t = SSL_table_put(x_60, y_60, e_12);
    t = a_12;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_13 = NULL,d_13 = NULL,e_13 = NULL;
      t = term_w_5;
      t = j_0(t);
      a_13 = t;
      t = term_j_7;
      d_13 = t;
      t = term_k_7;
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_7, term_k_7, a_13);
      t = v_3(d_13, e_13, a_13, t);
      _fail(t);
    }
  else
    {
      ATerm o_13 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_12 = ATgetFirst((ATermList) t);
          x_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_12;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_12 = ATgetFirst((ATermList) t);
          z_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_12;
      t = h_0(t);
      t = y_12;
      t = i_0(t);
      o_13 = t;
      t = (ATerm) ATinsert(CheckATermList(z_12), o_13);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  if(match_string(t, "-i"))
    {
      t = q_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_13;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  r_13 = t;
  t = term_t_5;
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_5, r_13);
  t = x_3(s_13, r_13, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_13);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_1, p_1, t_1, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  t_13 = t;
  t = term_y_5;
  v_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_7), t_13);
  w_13 = t;
  t = SSL_printnl(v_13, w_13);
  t = term_c_6;
  u_13 = t;
  t = SSL_exit(u_13);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_7;
  t = get_config_0_0(t);
  return(t);
}
ATerm q_3 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_48, j_48);
      ;
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      t = SSL_addr(i_48, j_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_13;
      t = n_97(t);
    }
  else
    {
      ATerm d_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_13 = ATgetFirst((ATermList) t);
          a_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_14;
      t = foldr_2_0(n_97, o_97, t);
      d_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_13, d_14);
      t = o_97(t);
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
  t = term_k_6;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  if(match_cons(t, sym__2))
    {
      u_0 = ATgetArgument(t, 0);
      v_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3(u_0, v_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_14 = NULL,q_0 = NULL,r_0 = NULL;
  t = times_0_0(t);
  r_0 = t;
  t = SSL_explode_term(r_0);
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      q_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_0;
  t = foldr_2_0(u_1, v_1, t);
  g_14 = t;
  t = SSL_TicksToSeconds(g_14);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_14 = NULL,u_14 = NULL,v_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym__2))
    {
      u_14 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_14;
        if((u_14 != t))
          {
            _fail(t);
          }
        t = r_14;
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = e_8;
        t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
        {
          ATerm i_8 = t;
          int j_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_14, v_14);
              ;
              LocalPopChoice(j_8);
            }
          else
            {
              t = i_8;
              t = SSL_gtr(u_14, v_14);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL;
        t = term_i_6;
        t = get_config_0_0(t);
        b_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_15, term_c_6);
        t = geq_0_0(t);
        t = z_14;
        t = l_105(t);
        ;
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        t = z_14;
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,g_15 = NULL,h_15 = NULL;
  t = run_time_0_0(t);
  d_15 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  e_15 = t;
  t = term_y_5;
  g_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_8), d_15), term_m_8), e_15);
  h_15 = t;
  t = SSL_printnl(g_15, h_15);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_8), d_15), term_m_8), e_15));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_1, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_6;
  i_15 = t;
  t = SSL_exit(i_15);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  r_15 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_15;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_15 = ATgetArgument(t, 0);
          {
            ATerm x_1 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(r_15);
            x_1 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_15);
            v_5 = t;
            t = SSLsetAnnotations(v_5, x_1);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_15;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm o_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = o_8;
      t = fetch_1_0(y_1, t);
    }
  t = b_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_15 = ATgetFirst((ATermList) t);
      v_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_15 = NULL,a_16 = NULL;
        ATerm z_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_15)), not_null(a_16));
          return(t);
        }
        t = not_null(v_15);
        t = g_0(t);
        if(((z_15 != NULL) && (z_15 != t)))
          _fail(t);
        else
          z_15 = t;
        t = not_null(u_15);
        t = f_0(t);
        if(((a_16 != NULL) && (a_16 != t)))
          _fail(t);
        else
          a_16 = t;
        t = not_null(v_15);
        t = reverse_acc_2_0(f_0, z_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_5;
      t = g_0(t);
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,a_6 = NULL;
  g_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_16);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_16);
  a_6 = t;
  t = SSLsetAnnotations(a_6, e_16);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_16), term_u_8);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL;
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_7;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      t = fetch_1_0(a_2, t);
    }
  t = term_z_8;
  t = echo_0_0(t);
  t = term_j_7;
  c_16 = t;
  t = term_k_7;
  d_16 = t;
  t = term_a_9;
  t = u_3(c_16, d_16, t);
  t = reverse_acc_2_0(_id, b_2, t);
  t = map_1_0(c_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm f_17 (ATerm t)
  {
    ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
    c_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_17 = ATgetFirst((ATermList) t);
        e_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_9 = t;
      int c_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 = NULL,c_3 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(c_17);
          u_2 = t;
          t = d_17;
          t = u_91(t);
          c_3 = t;
          t = (ATerm) ATinsert(CheckATermList(e_17), c_3);
          h_6 = t;
          t = SSLsetAnnotations(h_6, u_2);
          ;
          LocalPopChoice(c_9);
        }
      else
        {
          t = b_9;
          {
            ATerm b_4 = NULL,j_4 = NULL,j_6 = NULL;
            t = SSLgetAnnotations(c_17);
            b_4 = t;
            t = e_17;
            t = f_17(t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), d_17);
            j_6 = t;
            t = SSLsetAnnotations(j_6, b_4);
          }
        }
    }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  {
    ATerm d_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_17;
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
            t = j_17;
          }
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATinsert(ATempty, j_17);
      }
    k_17 = t;
    t = term_c_4;
    l_17 = t;
    t = SSL_printnl(l_17, k_17);
    t = j_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_7;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm t_3 (ATerm y_45, ATerm z_45, ATerm t)
{
  t = SSL_strcat(y_45, z_45);
  return(t);
}
ATerm debug_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  p_17 = t;
  t = z_103(t);
  q_17 = t;
  t = term_y_5;
  r_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_17), q_17);
  s_17 = t;
  t = SSL_printnl(r_17, s_17);
  t = p_17;
  return(t);
}
ATerm map_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm h_18 (ATerm t)
  {
    ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
    e_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_18;
      }
    else
      {
        ATerm a_5 = NULL,e_5 = NULL,f_5 = NULL,n_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_18 = ATgetFirst((ATermList) t);
            g_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_18);
        a_5 = t;
        t = f_18;
        t = k_91(t);
        e_5 = t;
        t = g_18;
        t = h_18(t);
        f_5 = t;
        t = (ATerm) ATinsert(CheckATermList(f_5), e_5);
        n_6 = t;
        t = SSLsetAnnotations(n_6, a_5);
      }
    return(t);
  }
  t = h_18(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL;
      p_18 = t;
      t = SSL_is_string(p_18);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = q_9;
      {
        ATerm v_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_2, t);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = v_9;
            {
              ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
              v_18 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_18 = ATgetArgument(t, 0);
                  t = w_18;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_18 = ATgetArgument(t, 0);
                      t = w_18;
                      {
                        ATerm b_10 = t;
                        int f_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_10);
                          }
                        else
                          {
                            t = b_10;
                            t = debug_1_0(e_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_19 = NULL,c_19 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_18 = ATgetArgument(t, 0);
                          x_18 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_18;
                      t = eval_config_0_0(t);
                      b_19 = t;
                      t = x_18;
                      t = eval_config_0_0(t);
                      c_19 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_19, c_19);
                      t = t_3(b_19, c_19, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_3 (ATerm o_62, ATerm p_62, ATerm t)
{
  t = SSL_table_get(o_62, p_62);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  g_19 = t;
  t = term_i_7;
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, g_19);
  t = u_3(h_19, g_19, t);
  {
    ATerm g_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,j_19 = NULL;
        t = eval_config_0_0(t);
        i_19 = t;
        t = term_i_7;
        j_19 = t;
        t = SSL_table_put(j_19, g_19, i_19);
        t = i_19;
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = g_10;
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
  ATerm m_19 = NULL,n_19 = NULL;
  t = term_l_10;
  m_19 = t;
  t = term_w_5;
  n_19 = t;
  t = term_n_10;
  t = x_3(m_19, n_19, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_p_10;
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
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  t = term_l_10;
  q_19 = t;
  t = term_w_5;
  r_19 = t;
  t = term_n_10;
  t = x_3(q_19, r_19, t);
  t = term_q_10;
  o_19 = t;
  t = term_w_5;
  p_19 = t;
  t = term_r_10;
  t = x_3(o_19, p_19, t);
  t = term_s_10;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_2, g_2, h_2, t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = u_10;
      t = Option_3_0(i_2, j_2, k_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,r_6 = NULL;
  x_19 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_19 = ATgetFirst((ATermList) t);
      u_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_19);
  s_19 = t;
  t = t_19;
  t = e_70(t);
  v_19 = t;
  t = u_19;
  t = f_70(t);
  w_19 = t;
  t = (ATerm) ATinsert(CheckATermList(w_19), v_19);
  r_6 = t;
  t = SSLsetAnnotations(r_6, s_19);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,h_20 = NULL,i_20 = NULL,u_6 = NULL;
  if(((c_20 != NULL) && (c_20 != t)))
    _fail(t);
  else
    c_20 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_11;
        t = e_110(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
      }
    t = not_null(c_20);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_20 != NULL) && (e_20 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_20 = ATgetFirst((ATermList) t);
        if(((f_20 != NULL) && (f_20 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(c_20));
    if(((d_20 != NULL) && (d_20 != t)))
      _fail(t);
    else
      d_20 = t;
    t = term_z_7;
    if(((i_20 != NULL) && (i_20 != t)))
      _fail(t);
    else
      i_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_7, not_null(e_20));
    t = x_3(not_null(i_20), not_null(e_20), t);
    t = not_null(f_20);
    {
      ATerm s_20 (ATerm t)
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_11 = t;
            int k_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_20 = NULL;
                l_20 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_20;
                ;
                LocalPopChoice(k_11);
              }
            else
              {
                t = j_11;
                t = e_110(t);
                t = Cons_2_0(_id, s_20, t);
              }
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm o_20 = NULL,p_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_20 = ATgetFirst((ATermList) t);
                  p_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_20), (ATerm) ATmakeAppl(sym_Undefined_1, o_20));
            }
          }
        return(t);
      }
      t = s_20(t);
      if(((h_20 != NULL) && (h_20 != t)))
        _fail(t);
      else
        h_20 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(h_20)), (ATerm) ATmakeAppl(sym_Program_1, not_null(e_20)));
      if(((u_6 != NULL) && (u_6 != t)))
        _fail(t);
      else
        u_6 = t;
      t = SSLsetAnnotations(not_null(u_6), not_null(d_20));
    }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  if(match_string(t, "--help"))
    {
      t = e_21;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_21;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_21;
        }
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  t = term_t_8;
  f_21 = t;
  t = term_w_5;
  g_21 = t;
  t = term_l_11;
  t = x_3(f_21, g_21, t);
  t = term_q_11;
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
ATerm parse_options_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  if(((z_20 != NULL) && (z_20 != t)))
    _fail(t);
  else
    z_20 = t;
  t = term_j_7;
  if(((b_21 != NULL) && (b_21 != t)))
    _fail(t);
  else
    b_21 = t;
  t = term_k_7;
  if(((c_21 != NULL) && (c_21 != t)))
    _fail(t);
  else
    c_21 = t;
  t = (ATerm) ATempty;
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  t = SSL_table_put(not_null(b_21), not_null(c_21), not_null(d_21));
  t = not_null(z_20);
  {
    ATerm l_2 (ATerm t)
    {
      ATerm t_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_110(t);
          ;
          LocalPopChoice(v_11);
        }
      else
        {
          t = t_11;
          {
            ATerm z_11 = t;
            int c_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_2, n_2, o_2, t);
                ;
                LocalPopChoice(c_12);
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
    t = parse_options_p__1_0(l_2, t);
    {
      ATerm d_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_21 = NULL;
          n_21 = t;
          {
            ATerm g_12 = t;
            int h_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_5 = NULL;
                t = n_21;
                {
                  ATerm i_12 = t;
                  int j_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_8;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_12);
                    }
                  else
                    {
                      t = i_12;
                      t = fetch_1_0(p_2, t);
                    }
                  t = n_21;
                  t = default_system_usage_0_0(t);
                  t = term_k_6;
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
                  t = term_l_10;
                  t = get_config_0_0(t);
                  t = n_21;
                  t = default_system_about_0_0(t);
                  t = term_k_6;
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
          t = d_12;
          {
            ATerm k_12 = t;
            int l_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
                ATerm q_2 (ATerm t)
                {
                  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,z_6 = NULL;
                  t_21 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_21);
                  r_21 = t;
                  t = s_21;
                  if(((x_20 != NULL) && (x_20 != t)))
                    _fail(t);
                  else
                    x_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_21);
                  z_6 = t;
                  t = SSLsetAnnotations(z_6, r_21);
                  return(t);
                }
                t = fetch_1_0(q_2, t);
                t = term_y_5;
                if(((p_21 != NULL) && (p_21 != t)))
                  _fail(t);
                else
                  p_21 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), term_m_12);
                if(((q_21 != NULL) && (q_21 != t)))
                  _fail(t);
                else
                  q_21 = t;
                t = SSL_printnl(not_null(p_21), not_null(q_21));
                t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), term_m_12));
                t = default_system_usage_0_0(t);
                t = term_c_6;
                if(((o_21 != NULL) && (o_21 != t)))
                  _fail(t);
                else
                  o_21 = t;
                t = SSL_exit(not_null(o_21));
                ;
                LocalPopChoice(l_12);
              }
            else
              {
                t = k_12;
              }
          }
        }
      if(((y_20 != NULL) && (y_20 != t)))
        _fail(t);
      else
        y_20 = t;
      t = term_j_7;
      if(((a_21 != NULL) && (a_21 != t)))
        _fail(t);
      else
        a_21 = t;
      t = SSL_table_destroy(not_null(a_21));
      t = not_null(y_20);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  t = parse_options_1_0(d_108, t);
  y_21 = t;
  t = term_n_12;
  b_22 = t;
  t = SSL_table_create(b_22);
  t = term_n_12;
  z_21 = t;
  t = term_o_12;
  a_22 = t;
  t = SSL_table_put(z_21, a_22, y_21);
  t = y_21;
  t = f_108(t);
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_108, t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm t_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = t_12;
      {
        ATerm w_12 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = w_12;
            {
              ATerm c_13 = t;
              int f_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(t_2, v_2, w_2, t);
                  ;
                  LocalPopChoice(f_13);
                }
              else
                {
                  t = c_13;
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
  ATerm d_22 = NULL,e_22 = NULL;
  t = term_f_4;
  d_22 = t;
  t = term_w_5;
  e_22 = t;
  t = term_i_13;
  t = x_3(d_22, e_22, t);
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

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
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_l_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_y_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_n_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_p_5;
ATerm term_m_5;
ATerm term_j_4;
ATerm term_d_4;
ATerm term_b_4;
ATerm term_x_3;
ATerm term_g_3;
void init_constant_terms (void)
{
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_h_6);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_6);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_u_5);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_j_7);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_u_5);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_u_5);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_t_8, term_u_5);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_j_4, term_u_5);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm u_73 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm k_3 (ATerm z_39, ATerm a_40, ATerm);
ATerm l_3 (ATerm n_43, ATerm o_43, ATerm);
ATerm n_3 (ATerm g_93 (ATerm), ATerm n_404, ATerm r_43, ATerm);
ATerm m_3 (ATerm j_43, ATerm k_43, ATerm);
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm output_1_0 (ATerm p_97 (ATerm), ATerm);
ATerm s_6 (ATerm e_6, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm o_3 (ATerm p_43, ATerm);
ATerm p_3 (ATerm b_40, ATerm c_40, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_9 (ATerm n_7, ATerm);
ATerm o_9 (ATerm t_7, ATerm u_7, ATerm v_7, ATerm);
ATerm p_9 (ATerm h_8, ATerm j_8, ATerm q_8, ATerm);
ATerm q_3 (ATerm);
ATerm l_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm m_0 (ATerm);
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
ATerm y_3 (ATerm q_44, ATerm r_44, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_3 (ATerm o_49, ATerm p_49, ATerm n_49, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_3 (ATerm z_36, ATerm a_37, ATerm);
ATerm foldr_2_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_94 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm need_help_1_0 (ATerm g_97 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm t_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_3 (ATerm o_34, ATerm p_34, ATerm);
ATerm debug_1_0 (ATerm e_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_3 (ATerm f_51, ATerm g_51, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm j_99 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm parse_options_1_0 (ATerm i_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm);
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
  ATerm h_3 = NULL,i_3 = NULL,s_3 = NULL;
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
          s_3 = ATgetArgument(t, 1);
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
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_3)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm e_3 = t;
    int f_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_73(t);
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
ATerm topdown_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(s_74, t);
    return(t);
  }
  t = s_74(t);
  t = SRTS_all(a_0, t);
  return(t);
}
ATerm k_3 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm h_4 = NULL;
  t = SSL_fputc(z_39, a_40);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_4);
  return(t);
}
ATerm l_3 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm i_4 = NULL;
  t = SSL_write_term_to_stream_text(n_43, o_43);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_4);
  return(t);
}
ATerm n_3 (ATerm g_93 (ATerm), ATerm n_404, ATerm r_43, ATerm t)
{
  ATerm l_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_404, term_g_3);
  t = q_3(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, r_43);
  t = g_93(t);
  t = fclose_0_0(t);
  t = r_43;
  return(t);
}
ATerm m_3 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm n_4 = NULL;
  t = SSL_write_term_to_stream_baf(j_43, k_43);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_4);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_3 = ATgetArgument(t, 0);
      if(match_cons(j_3, sym_Stream_1))
        {
          s_4 = ATgetArgument(j_3, 0);
        }
      else
        _fail(t);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_3(s_4, t_4, t);
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,x_4 = NULL,d_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_3 = ATgetArgument(t, 0);
      if(match_cons(t_3, sym_Stream_1))
        {
          d_5 = ATgetArgument(t_3, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_3(d_5, g_5, t);
  u_4 = t;
  t = term_x_3;
  v_4 = t;
  t = u_4;
  if(match_cons(t, sym_Stream_1))
    {
      x_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_3, u_4);
  t = k_3(v_4, x_4, t);
  return(t);
}
ATerm output_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  t = p_97(t);
  p_4 = t;
  {
    ATerm z_3 = t;
    int a_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_4;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(a_4);
      }
    else
      {
        t = z_3;
        t = term_d_4;
      }
    o_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
    {
      ATerm e_4 = t;
      int f_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_4;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
          LocalPopChoice(f_4);
          if(match_cons(t, sym__2))
            {
              ATerm m_4 = ATgetArgument(t, 0);
              ATerm q_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_3(b_0, o_4, p_4, t);
        }
      else
        {
          t = e_4;
          if(match_cons(t, sym__2))
            {
              ATerm r_4 = ATgetArgument(t, 0);
              ATerm w_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_3(f_0, o_4, p_4, t);
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
        ATerm y_4 = t;
        int z_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_6);
            ;
            LocalPopChoice(z_4);
          }
        else
          {
            t = y_4;
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
ATerm o_3 (ATerm p_43, ATerm t)
{
  t = SSL_read_term_from_stream(p_43);
  return(t);
}
ATerm p_3 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm t_6 = NULL;
  t = SSL_fopen(b_40, c_40);
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
ATerm n_9 (ATerm n_7, ATerm t)
{
  ATerm o_7 = NULL;
  t = SSL_explode_term(n_7);
  if(match_cons(t, sym__2))
    {
      ATerm a_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_5 = ATgetArgument(t, 1);
        if(((ATgetType(c_5) == AT_LIST) && !(ATisEmpty(c_5))))
          {
            o_7 = ATgetFirst((ATermList) c_5);
            {
              ATerm e_5 = (ATerm) ATgetNext((ATermList) c_5);
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
ATerm o_9 (ATerm t_7, ATerm u_7, ATerm v_7, ATerm t)
{
  ATerm w_7 = NULL,x_7 = NULL,a_8 = NULL,f_8 = NULL,n_0 = NULL;
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
  n_0 = t;
  t = SSLsetAnnotations(n_0, a_8);
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
ATerm p_9 (ATerm h_8, ATerm j_8, ATerm q_8, ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,x_8 = NULL,e_9 = NULL,r_0 = NULL;
  t = SSLgetAnnotations(q_8);
  x_8 = t;
  t = SSL_is_string(h_8);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, j_8);
  r_0 = t;
  t = SSLsetAnnotations(r_0, x_8);
  if(match_cons(t, sym__2))
    {
      r_8 = ATgetArgument(t, 0);
      s_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_3(r_8, s_8, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,m_9 = NULL;
  j_9 = t;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_9(j_9, t);
            ;
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            {
              ATerm k_5 = t;
              int l_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_9(k_9, m_9, j_9, t);
                  ;
                  LocalPopChoice(l_5);
                }
              else
                {
                  t = k_5;
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
ATerm l_0 (ATerm t)
{
  t = term_m_5;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,w_9 = NULL;
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_9 = NULL;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_9, term_p_5);
      t = q_3(t);
      ;
      LocalPopChoice(o_5);
    }
  else
    {
      t = n_5;
      t = debug_1_0(l_0, t);
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
ATerm input_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_5;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      t = term_t_5;
    }
  t = ReadFromFile_0_0(t);
  t = q_97(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  z_9 = t;
  t = term_u_5;
  t = whoami_0_0(t);
  a_10 = t;
  t = term_w_5;
  d_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_5), a_10), term_x_5);
  e_10 = t;
  t = SSL_printnl(d_10, e_10);
  t = term_b_6;
  c_10 = t;
  t = SSL_exit(c_10);
  t = z_9;
  return(t);
}
ATerm m_0 (ATerm t)
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
ATerm o_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,m_10 = NULL;
  j_10 = t;
  t = SSL_string_to_int(j_10);
  k_10 = t;
  t = term_c_6;
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_6, k_10);
  t = y_3(m_10, k_10, t);
  t = j_10;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_0, o_0, s_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
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
  t = term_g_6;
  v_10 = t;
  t = term_h_6;
  w_10 = t;
  t = term_i_6;
  t = y_3(v_10, w_10, t);
  t = term_j_6;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_n_6;
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
  t = term_g_6;
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_6, y_10);
  t = y_3(a_11, y_10, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_10);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_p_6;
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
  t = term_r_6;
  b_11 = t;
  t = term_u_5;
  c_11 = t;
  t = term_v_6;
  t = y_3(b_11, c_11, t);
  t = term_a_7;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_0, w_0, x_0, t);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_0, z_0, a_1, t);
            ;
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            t = Option_3_0(c_1, e_1, g_1, t);
          }
      }
    }
  return(t);
}
ATerm y_3 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm d_11 = NULL;
  t = term_h_7;
  d_11 = t;
  t = SSL_table_put(d_11, q_44, r_44);
  t = (ATerm) ATmakeAppl(sym__3, term_h_7, q_44, r_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_11 = NULL,p_11 = NULL,r_11 = NULL;
      t = term_u_5;
      t = e_0(t);
      o_11 = t;
      t = term_i_7;
      p_11 = t;
      t = term_j_7;
      r_11 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_7, term_j_7, o_11);
      t = w_3(p_11, r_11, o_11, t);
      _fail(t);
    }
  else
    {
      ATerm u_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_11 = ATgetFirst((ATermList) t);
          n_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_11;
      t = c_0(t);
      t = term_u_5;
      t = d_0(t);
      u_11 = t;
      t = (ATerm) ATinsert(CheckATermList(n_11), u_11);
    }
  return(t);
}
ATerm i_1 (ATerm t)
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
ATerm l_1 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL;
  x_11 = t;
  t = term_b_4;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_4, x_11);
  t = y_3(y_11, x_11, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_11);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_1, l_1, m_1, t);
  return(t);
}
ATerm w_3 (ATerm o_49, ATerm p_49, ATerm n_49, ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,e_12 = NULL;
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_7 = ATgetArgument(t, 0);
            ATerm q_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
        t = v_3(o_49, p_49, t);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = (ATerm) ATempty;
      }
    b_12 = t;
    t = (ATerm) ATinsert(CheckATermList(b_12), n_49);
    e_12 = t;
    t = SSL_table_put(o_49, p_49, e_12);
    t = a_12;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_13 = NULL,d_13 = NULL,e_13 = NULL;
      t = term_u_5;
      t = k_0(t);
      a_13 = t;
      t = term_i_7;
      d_13 = t;
      t = term_j_7;
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_7, term_j_7, a_13);
      t = w_3(d_13, e_13, a_13, t);
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
      t = i_0(t);
      t = y_12;
      t = j_0(t);
      o_13 = t;
      t = (ATerm) ATinsert(CheckATermList(z_12), o_13);
    }
  return(t);
}
ATerm p_1 (ATerm t)
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
ATerm s_1 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  r_13 = t;
  t = term_s_5;
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_5, r_13);
  t = y_3(s_13, r_13, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_13);
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_1, s_1, t_1, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_5;
  t = whoami_0_0(t);
  t_13 = t;
  t = term_w_5;
  v_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_7), t_13);
  w_13 = t;
  t = SSL_printnl(v_13, w_13);
  t = term_b_6;
  u_13 = t;
  t = SSL_exit(u_13);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_7;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_3 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm z_7 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_36, a_37);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = z_7;
      t = SSL_addr(z_36, a_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  y_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_13;
      t = m_86(t);
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
      t = foldr_2_0(m_86, n_86, t);
      d_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_13, d_14);
      t = n_86(t);
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
  t = term_h_6;
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
  t = r_3(t_0, u_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_14 = NULL,p_0 = NULL,q_0 = NULL;
  t = times_0_0(t);
  q_0 = t;
  t = SSL_explode_term(q_0);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_0;
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
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_14;
        if((u_14 != t))
          {
            _fail(t);
          }
        t = r_14;
        ;
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
        {
          ATerm g_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_14, v_14);
              ;
              LocalPopChoice(i_8);
            }
          else
            {
              t = g_8;
              t = SSL_gtr(u_14, v_14);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_14, v_14);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL;
        t = term_g_6;
        t = get_config_0_0(t);
        b_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_15, term_b_6);
        t = geq_0_0(t);
        t = z_14;
        t = q_94(t);
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
  t = term_u_5;
  t = whoami_0_0(t);
  e_15 = t;
  t = term_w_5;
  g_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_8), d_15), term_m_8), e_15);
  h_15 = t;
  t = SSL_printnl(g_15, h_15);
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_8), d_15), term_m_8), e_15));
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
  t = term_h_6;
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
ATerm need_help_1_0 (ATerm g_97 (ATerm), ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      t = fetch_1_0(y_1, t);
    }
  t = g_97(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
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
        t = v_15;
        t = h_0(t);
        if(((z_15 != NULL) && (z_15 != t)))
          _fail(t);
        else
          z_15 = t;
        t = u_15;
        t = g_0(t);
        if(((a_16 != NULL) && (a_16 != t)))
          _fail(t);
        else
          a_16 = t;
        t = v_15;
        t = reverse_acc_2_0(g_0, z_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_5;
      t = h_0(t);
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
      t = term_y_7;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      t = fetch_1_0(a_2, t);
    }
  t = term_y_8;
  t = echo_0_0(t);
  t = term_i_7;
  c_16 = t;
  t = term_j_7;
  d_16 = t;
  t = term_z_8;
  t = v_3(c_16, d_16, t);
  t = reverse_acc_2_0(_id, b_2, t);
  t = map_1_0(c_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_80 (ATerm), ATerm t)
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
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 = NULL,b_3 = NULL,k_6 = NULL;
          t = SSLgetAnnotations(c_17);
          u_2 = t;
          t = d_17;
          t = t_80(t);
          b_3 = t;
          t = (ATerm) ATinsert(CheckATermList(e_17), b_3);
          k_6 = t;
          t = SSLsetAnnotations(k_6, u_2);
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
          {
            ATerm c_4 = NULL,k_4 = NULL,l_6 = NULL;
            t = SSLgetAnnotations(c_17);
            c_4 = t;
            t = e_17;
            t = f_17(t);
            k_4 = t;
            t = (ATerm) ATinsert(CheckATermList(k_4), d_17);
            l_6 = t;
            t = SSLsetAnnotations(l_6, c_4);
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
    ATerm c_9 = t;
    int d_9 = stack_ptr;
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
                ATerm f_9 = ATgetFirst((ATermList) t);
                ATerm g_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_17;
          }
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = c_9;
        t = (ATerm) ATinsert(ATempty, j_17);
      }
    k_17 = t;
    t = term_d_4;
    l_17 = t;
    t = SSL_printnl(l_17, k_17);
    t = j_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_7;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_3 (ATerm o_34, ATerm p_34, ATerm t)
{
  t = SSL_strcat(o_34, p_34);
  return(t);
}
ATerm debug_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  p_17 = t;
  t = e_93(t);
  q_17 = t;
  t = term_w_5;
  r_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_17), q_17);
  s_17 = t;
  t = SSL_printnl(r_17, s_17);
  t = p_17;
  return(t);
}
ATerm map_1_0 (ATerm j_80 (ATerm), ATerm t)
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
        ATerm b_5 = NULL,f_5 = NULL,h_5 = NULL,q_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_18 = ATgetFirst((ATermList) t);
            g_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_18);
        b_5 = t;
        t = f_18;
        t = j_80(t);
        f_5 = t;
        t = g_18;
        t = h_18(t);
        h_5 = t;
        t = (ATerm) ATinsert(CheckATermList(h_5), f_5);
        q_6 = t;
        t = SSLsetAnnotations(q_6, b_5);
      }
    return(t);
  }
  t = h_18(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
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
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_18 = NULL;
      p_18 = t;
      t = SSL_is_string(p_18);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_2, t);
            ;
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            {
              ATerm v_18 = NULL,w_18 = NULL,a_19 = NULL;
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
                        ATerm y_9 = t;
                        int b_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_10);
                          }
                        else
                          {
                            t = y_9;
                            t = debug_1_0(e_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_19 = NULL,d_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_18 = ATgetArgument(t, 0);
                          a_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_18;
                      t = eval_config_0_0(t);
                      y_19 = t;
                      t = a_19;
                      t = eval_config_0_0(t);
                      d_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_19, d_20);
                      t = u_3(y_19, d_20, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_3 (ATerm f_51, ATerm g_51, ATerm t)
{
  t = SSL_table_get(f_51, g_51);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  h_20 = t;
  t = term_h_7;
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_7, h_20);
  t = v_3(i_20, h_20, t);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL,k_20 = NULL;
        t = eval_config_0_0(t);
        j_20 = t;
        t = term_h_7;
        k_20 = t;
        t = SSL_table_put(k_20, h_20, j_20);
        t = j_20;
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
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
  ATerm n_20 = NULL,o_20 = NULL;
  t = term_i_10;
  n_20 = t;
  t = term_u_5;
  o_20 = t;
  t = term_l_10;
  t = y_3(n_20, o_20, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_n_10;
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
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  t = term_i_10;
  r_20 = t;
  t = term_u_5;
  s_20 = t;
  t = term_l_10;
  t = y_3(r_20, s_20, t);
  t = term_p_10;
  p_20 = t;
  t = term_u_5;
  q_20 = t;
  t = term_q_10;
  t = y_3(p_20, q_20, t);
  t = term_r_10;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_2, g_2, h_2, t);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      t = Option_3_0(i_2, j_2, k_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_58 (ATerm), ATerm w_58 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,u_6 = NULL;
  y_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_20 = ATgetFirst((ATermList) t);
      v_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_20);
  t_20 = t;
  t = u_20;
  t = v_58(t);
  w_20 = t;
  t = v_20;
  t = w_58(t);
  x_20 = t;
  t = (ATerm) ATinsert(CheckATermList(x_20), w_20);
  u_6 = t;
  t = SSLsetAnnotations(u_6, t_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,i_21 = NULL,j_21 = NULL,z_6 = NULL;
  d_21 = t;
  {
    ATerm z_10 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_11;
        t = j_99(t);
        ;
        LocalPopChoice(e_11);
      }
    else
      {
        t = z_10;
      }
    t = d_21;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_21 = ATgetFirst((ATermList) t);
        g_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_21);
    e_21 = t;
    t = term_y_7;
    j_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_7, f_21);
    t = y_3(j_21, f_21, t);
    t = g_21;
    {
      ATerm t_21 (ATerm t)
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_11 = t;
            int j_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_21 = NULL;
                m_21 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_21;
                ;
                LocalPopChoice(j_11);
              }
            else
              {
                t = i_11;
                t = j_99(t);
                t = Cons_2_0(_id, t_21, t);
              }
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm p_21 = NULL,q_21 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_21 = ATgetFirst((ATermList) t);
                  q_21 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_21), (ATerm) ATmakeAppl(sym_Undefined_1, p_21));
            }
          }
        return(t);
      }
      t = t_21(t);
      i_21 = t;
      t = (ATerm) ATinsert(CheckATermList(i_21), (ATerm) ATmakeAppl(sym_Program_1, f_21));
      z_6 = t;
      t = SSLsetAnnotations(z_6, e_21);
    }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  if(match_string(t, "--help"))
    {
      t = f_22;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_22;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_22;
        }
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm g_22 = NULL,j_22 = NULL;
  t = term_t_8;
  g_22 = t;
  t = term_u_5;
  j_22 = t;
  t = term_k_11;
  t = y_3(g_22, j_22, t);
  t = term_m_11;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_99 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  a_22 = t;
  t = term_i_7;
  c_22 = t;
  t = term_j_7;
  d_22 = t;
  t = (ATerm) ATempty;
  e_22 = t;
  t = SSL_table_put(c_22, d_22, e_22);
  t = a_22;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm s_11 = t;
      int t_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_99(t);
          ;
          LocalPopChoice(t_11);
        }
      else
        {
          t = s_11;
          {
            ATerm v_11 = t;
            int z_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_2, n_2, o_2, t);
                ;
                LocalPopChoice(z_11);
              }
            else
              {
                t = v_11;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_2, t);
    {
      ATerm c_12 = t;
      int d_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_22 = NULL;
          q_22 = t;
          {
            ATerm f_12 = t;
            int g_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_5 = NULL;
                t = q_22;
                {
                  ATerm h_12 = t;
                  int i_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_8;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_12);
                    }
                  else
                    {
                      t = h_12;
                      t = fetch_1_0(p_2, t);
                    }
                  t = q_22;
                  t = default_system_usage_0_0(t);
                  t = term_h_6;
                  z_5 = t;
                  t = SSL_exit(z_5);
                }
                ;
                LocalPopChoice(g_12);
              }
            else
              {
                t = f_12;
                {
                  ATerm f_6 = NULL;
                  t = term_i_10;
                  t = get_config_0_0(t);
                  t = q_22;
                  t = default_system_about_0_0(t);
                  t = term_h_6;
                  f_6 = t;
                  t = SSL_exit(f_6);
                }
              }
          }
          ;
          LocalPopChoice(d_12);
        }
      else
        {
          t = c_12;
          {
            ATerm j_12 = t;
            int k_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
                ATerm q_2 (ATerm t)
                {
                  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,b_7 = NULL;
                  w_22 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      v_22 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_22);
                  u_22 = t;
                  t = v_22;
                  if(((y_21 != NULL) && (y_21 != t)))
                    _fail(t);
                  else
                    y_21 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_22);
                  b_7 = t;
                  t = SSLsetAnnotations(b_7, u_22);
                  return(t);
                }
                t = fetch_1_0(q_2, t);
                t = term_w_5;
                s_22 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_l_12);
                t_22 = t;
                t = SSL_printnl(s_22, t_22);
                t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_21)), term_l_12));
                t = default_system_usage_0_0(t);
                t = term_b_6;
                r_22 = t;
                t = SSL_exit(r_22);
                ;
                LocalPopChoice(k_12);
              }
            else
              {
                t = j_12;
              }
          }
        }
      z_21 = t;
      t = term_i_7;
      b_22 = t;
      t = SSL_table_destroy(b_22);
      t = z_21;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  t = parse_options_1_0(i_97, t);
  b_23 = t;
  t = term_m_12;
  e_23 = t;
  t = SSL_table_create(e_23);
  t = term_m_12;
  c_23 = t;
  t = term_n_12;
  d_23 = t;
  t = SSL_table_put(c_23, d_23, b_23);
  t = b_23;
  t = k_97(t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_97, t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        {
          ATerm q_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_12);
            }
          else
            {
              t = q_12;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(t_2, v_2, w_2, t);
                  ;
                  LocalPopChoice(c_13);
                }
              else
                {
                  t = b_13;
                  {
                    ATerm f_13 = t;
                    int g_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(g_13);
                      }
                    else
                      {
                        t = f_13;
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
  ATerm g_23 = NULL,h_23 = NULL;
  t = term_j_4;
  g_23 = t;
  t = term_u_5;
  h_23 = t;
  t = term_h_13;
  t = y_3(g_23, h_23, t);
  t = term_i_13;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_j_13;
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
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarAssign_0_0(t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      t = DesugarCase_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_2, default_usage_0_0, _id, s_2, t);
  return(t);
}

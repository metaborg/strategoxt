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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_Path_2;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  init_constant_terms();
}
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_d_14;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_r_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_a_11;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_l_8;
ATerm term_i_8;
ATerm term_m_7;
ATerm term_g_7;
ATerm term_e_7;
ATerm term_a_7;
ATerm term_u_6;
ATerm term_r_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_f_5;
ATerm term_c_5;
ATerm term_b_5;
void init_constant_terms (void)
{
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(45);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_u_8);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_k_10);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_u_8);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_o_13, term_u_8);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_u_8);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_r_6, term_u_8);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--no-inlining: do not include definition bodies", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_m_7, term_u_8);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm UnCify_1_0 (ATerm c_89 (ATerm), ATerm);
ATerm escape_1_0 (ATerm a_89 (ATerm (ATerm), ATerm), ATerm);
ATerm leq_0_0 (ATerm);
ATerm match_digits_1_0 (ATerm g_71 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm m_0 (ATerm);
ATerm o_0 (ATerm);
ATerm unmangle_0_0 (ATerm);
ATerm topdown_1_0 (ATerm a_73 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm d_4 (ATerm j_18, ATerm k_18, ATerm l_18, ATerm m_18, ATerm);
ATerm map_1_0 (ATerm m_79 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_57 (ATerm), ATerm w_57 (ATerm), ATerm);
ATerm e_4 (ATerm s_34, ATerm t_34, ATerm);
ATerm f_4 (ATerm b_20, ATerm c_20, ATerm);
ATerm h_4 (ATerm d_79 (ATerm), ATerm c_138, ATerm f_20, ATerm);
ATerm g_4 (ATerm x_19, ATerm y_19, ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm output_1_0 (ATerm a_97 (ATerm), ATerm);
ATerm v_10 (ATerm o_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_4 (ATerm d_20, ATerm);
ATerm j_4 (ATerm u_34, ATerm v_34, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_13 (ATerm f_11, ATerm);
ATerm g_13 (ATerm j_11, ATerm m_11, ATerm n_11, ATerm);
ATerm i_13 (ATerm c_12, ATerm d_12, ATerm h_12, ATerm);
ATerm k_4 (ATerm);
ATerm u_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_4 (ATerm o_43, ATerm p_43, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm q_1 (ATerm);
ATerm u_1 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_4 (ATerm k_48, ATerm l_48, ATerm j_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm l_4 (ATerm n_37, ATerm o_37, ATerm);
ATerm foldr_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm e_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm need_help_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_4 (ATerm m_33, ATerm n_33, ATerm);
ATerm debug_1_0 (ATerm b_79 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm p_4 (ATerm b_50, ATerm c_50, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_98 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm f_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm parse_options_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm n_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm UnCify_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,l_1 = NULL,n_1 = NULL,o_1 = NULL,r_1 = NULL,s_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_1 = ATgetFirst((ATermList) t);
      s_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  t = s_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_1 = ATgetFirst((ATermList) t);
      o_1 = (ATerm) ATgetNext((ATermList) t);
      t = o_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_1 = ATgetFirst((ATermList) t);
          l_1 = (ATerm) ATgetNext((ATermList) t);
          t = d_1;
          if(match_int(t, 95))
            {
              t = n_1;
              if(match_int(t, 112))
                {
                  ATerm w_4 = t;
                  int x_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 = NULL;
                      t = l_1;
                      t = c_89(t);
                      v_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_1), term_b_5);
                      ;
                      LocalPopChoice(x_4);
                    }
                  else
                    {
                      t = w_4;
                      {
                        ATerm x_1 = NULL;
                        t = s_1;
                        t = c_89(t);
                        x_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(x_1), term_c_5);
                      }
                    }
                }
              else
                {
                  if(match_int(t, 95))
                    {
                      ATerm d_5 = t;
                      int e_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_2 = NULL;
                          t = o_1;
                          t = c_89(t);
                          a_2 = t;
                          t = (ATerm) ATinsert(CheckATermList(a_2), term_f_5);
                          ;
                          LocalPopChoice(e_5);
                        }
                      else
                        {
                          t = d_5;
                          {
                            ATerm d_2 = NULL;
                            t = s_1;
                            t = c_89(t);
                            d_2 = t;
                            t = (ATerm) ATinsert(CheckATermList(d_2), term_c_5);
                          }
                        }
                    }
                  else
                    {
                      ATerm f_2 = NULL;
                      t = s_1;
                      t = c_89(t);
                      f_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_2), term_c_5);
                    }
                }
            }
          else
            {
              t = n_1;
              if(match_int(t, 95))
                {
                  ATerm k_5 = t;
                  int l_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_2 = NULL;
                      t = o_1;
                      t = c_89(t);
                      h_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_2), term_f_5);
                      ;
                      LocalPopChoice(l_5);
                    }
                  else
                    {
                      t = k_5;
                      {
                        ATerm m_2 = NULL;
                        t = s_1;
                        t = c_89(t);
                        m_2 = t;
                        t = (ATerm) ATinsert(CheckATermList(m_2), term_c_5);
                      }
                    }
                }
              else
                {
                  ATerm o_2 = NULL;
                  t = s_1;
                  t = c_89(t);
                  o_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_2), term_c_5);
                }
            }
        }
      else
        {
          t = n_1;
          if(match_int(t, 95))
            {
              ATerm o_5 = t;
              int p_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_2 = NULL;
                  t = o_1;
                  t = c_89(t);
                  q_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_2), term_f_5);
                  ;
                  LocalPopChoice(p_5);
                }
              else
                {
                  t = o_5;
                  {
                    ATerm s_2 = NULL;
                    t = s_1;
                    t = c_89(t);
                    s_2 = t;
                    t = (ATerm) ATinsert(CheckATermList(s_2), term_c_5);
                  }
                }
            }
          else
            {
              ATerm w_2 = NULL;
              t = s_1;
              t = c_89(t);
              w_2 = t;
              t = (ATerm) ATinsert(CheckATermList(w_2), term_c_5);
            }
        }
    }
  else
    {
      ATerm z_2 = NULL;
      t = s_1;
      t = c_89(t);
      z_2 = t;
      t = (ATerm) ATinsert(CheckATermList(z_2), term_c_5);
    }
  return(t);
}
ATerm escape_1_0 (ATerm a_89 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL;
  e_3 = t;
  t = SSL_explode_string(e_3);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm q_5 = t;
      int r_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_89(m_4, t);
          ;
          LocalPopChoice(r_5);
        }
      else
        {
          t = q_5;
          {
            ATerm u_3 = NULL,z_3 = NULL,c_4 = NULL;
            c_4 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_3 = ATgetFirst((ATermList) t);
                z_3 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm l_0 = NULL,p_0 = NULL,n_0 = NULL;
                  t = SSLgetAnnotations(c_4);
                  l_0 = t;
                  t = z_3;
                  t = m_4(t);
                  p_0 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_0), u_3);
                  n_0 = t;
                  t = SSLsetAnnotations(n_0, l_0);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_4;
              }
          }
        }
      return(t);
    }
    t = m_4(t);
    d_3 = t;
    t = SSL_implode_string(d_3);
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm s_5 = t;
  if((PushChoice() == 0))
    {
      ATerm y_4 = NULL,z_4 = NULL;
      if(match_cons(t, sym__2))
        {
          y_4 = ATgetArgument(t, 0);
          z_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, y_4, z_4);
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(y_4, z_4);
            ;
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            t = SSL_gtr(y_4, z_4);
          }
        t = (ATerm) ATmakeAppl(sym__2, y_4, z_4);
      }
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_5;
    }
  return(t);
}
ATerm match_digits_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  ATerm a_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,n_5 = NULL,h_3 = NULL;
  n_5 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_5 = ATgetFirst((ATermList) t);
      i_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_5);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_5, h_5);
  t = leq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_5, term_z_5);
  t = leq_0_0(t);
  t = i_5;
  {
    ATerm a_6 = t;
    int b_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = match_digits_1_0(g_71, t);
        ;
        LocalPopChoice(b_6);
      }
    else
      {
        t = a_6;
        t = g_71(t);
      }
    j_5 = t;
    t = (ATerm) ATinsert(CheckATermList(j_5), h_5);
    h_3 = t;
    t = SSLsetAnnotations(h_3, a_5);
  }
  return(t);
}
ATerm at_suffix_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm e_6 = t;
    int g_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_80(t);
        ;
        LocalPopChoice(g_6);
      }
    else
      {
        t = e_6;
        {
          ATerm i_6 = NULL,j_6 = NULL,l_6 = NULL,x_0 = NULL,a_1 = NULL,j_3 = NULL;
          i_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_6 = ATgetFirst((ATermList) t);
              l_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_6);
          x_0 = t;
          t = l_6;
          t = m_6(t);
          a_1 = t;
          t = (ATerm) ATinsert(CheckATermList(a_1), j_6);
          j_3 = t;
          t = SSLsetAnnotations(j_3, x_0);
        }
      }
    return(t);
  }
  t = m_6(t);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL,v_6 = NULL,y_6 = NULL,z_6 = NULL,l_3 = NULL;
  z_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_6 = ATgetFirst((ATermList) t);
      v_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_6);
  s_6 = t;
  t = t_6;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  t = v_6;
  t = match_digits_1_0(b_0, t);
  y_6 = t;
  t = (ATerm) ATinsert(CheckATermList(y_6), t_6);
  l_3 = t;
  t = SSLsetAnnotations(l_3, s_6);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = Cons_2_0(f_0, m_0, t);
  return(t);
}
ATerm f_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 95)))
    _fail(t);
  return(t);
}
ATerm m_0 (ATerm t)
{
  t = match_digits_1_0(o_0, t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm unmangle_0_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  q_6 = t;
  t = SSL_explode_string(q_6);
  t = at_suffix_1_0(a_0, t);
  p_6 = t;
  t = SSL_implode_string(p_6);
  t = escape_1_0(UnCify_1_0, t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_73 (ATerm), ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = topdown_1_0(a_73, t);
    return(t);
  }
  t = a_73(t);
  t = SRTS_all(q_0, t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_7 = ATgetArgument(t, 0);
      {
        ATerm h_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_7 = NULL;
            t = i_7;
            t = unmangle_0_0(t);
            l_7 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, l_7);
            ;
            LocalPopChoice(k_6);
          }
        else
          {
            t = h_6;
            t = j_7;
          }
      }
    }
  else
    {
      t = j_7;
    }
  return(t);
}
ATerm d_4 (ATerm j_18, ATerm k_18, ATerm l_18, ATerm m_18, ATerm t)
{
  ATerm c_7 = NULL,f_7 = NULL;
  t = m_18;
  {
    ATerm n_6 = t;
    if((PushChoice() == 0))
      {
        t = term_r_6;
        t = get_config_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_6;
      }
    t = j_18;
    t = unmangle_0_0(t);
    c_7 = t;
    t = m_18;
    t = topdown_1_0(r_0, t);
    f_7 = t;
    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, c_7, k_18, l_18, f_7);
  }
  return(t);
}
ATerm map_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm t_8 (ATerm t)
  {
    ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
    q_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_8;
      }
    else
      {
        ATerm j_1 = NULL,p_1 = NULL,t_1 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_8 = ATgetFirst((ATermList) t);
            s_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_8);
        j_1 = t;
        t = r_8;
        t = m_79(t);
        p_1 = t;
        t = s_8;
        t = t_8(t);
        t_1 = t;
        t = (ATerm) ATinsert(CheckATermList(t_1), p_1);
        n_3 = t;
        t = SSLsetAnnotations(n_3, j_1);
      }
    return(t);
  }
  t = t_8(t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_57 (ATerm), ATerm w_57 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,s_3 = NULL;
  b_9 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_8 = ATgetFirst((ATermList) t);
      y_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  v_8 = t;
  t = x_8;
  t = v_57(t);
  z_8 = t;
  t = y_8;
  t = w_57(t);
  a_9 = t;
  t = (ATerm) ATinsert(CheckATermList(a_9), z_8);
  s_3 = t;
  t = SSLsetAnnotations(s_3, v_8);
  return(t);
}
ATerm e_4 (ATerm s_34, ATerm t_34, ATerm t)
{
  ATerm c_9 = NULL;
  t = SSL_fputc(s_34, t_34);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
  return(t);
}
ATerm f_4 (ATerm b_20, ATerm c_20, ATerm t)
{
  ATerm d_9 = NULL;
  t = SSL_write_term_to_stream_text(b_20, c_20);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
  return(t);
}
ATerm h_4 (ATerm d_79 (ATerm), ATerm c_138, ATerm f_20, ATerm t)
{
  ATerm e_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_138, term_u_6);
  t = k_4(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, f_20);
  t = d_79(t);
  t = fclose_0_0(t);
  t = f_20;
  return(t);
}
ATerm g_4 (ATerm x_19, ATerm y_19, ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_write_term_to_stream_baf(x_19, y_19);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm i_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          i_9 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(i_9, k_9, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm l_9 = NULL,o_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(match_cons(x_6, sym_Stream_1))
        {
          t_9 = ATgetArgument(x_6, 0);
        }
      else
        _fail(t);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_4(t_9, u_9, t);
  l_9 = t;
  t = term_a_7;
  o_9 = t;
  t = l_9;
  if(match_cons(t, sym_Stream_1))
    {
      r_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, l_9);
  t = e_4(o_9, r_9, t);
  return(t);
}
ATerm output_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  t = a_97(t);
  h_9 = t;
  {
    ATerm b_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_7;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_7);
      }
    else
      {
        t = b_7;
        t = term_g_7;
      }
    g_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_9, h_9);
    {
      ATerm h_7 = t;
      int k_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_m_7;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, g_9, h_9);
          LocalPopChoice(k_7);
          if(match_cons(t, sym__2))
            {
              ATerm n_7 = ATgetArgument(t, 0);
              ATerm o_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_4(s_0, g_9, h_9, t);
        }
      else
        {
          t = h_7;
          if(match_cons(t, sym__2))
            {
              ATerm p_7 = ATgetArgument(t, 0);
              ATerm r_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_4(t_0, g_9, h_9, t);
        }
    }
  }
  return(t);
}
ATerm v_10 (ATerm o_10, ATerm t)
{
  t = SSL_fclose(o_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  t_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm s_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_10);
            ;
            LocalPopChoice(u_7);
          }
        else
          {
            t = s_7;
            t = v_10(t_10, t);
          }
      }
    }
  else
    {
      t = v_10(t_10, t);
    }
  return(t);
}
ATerm i_4 (ATerm d_20, ATerm t)
{
  t = SSL_read_term_from_stream(d_20);
  return(t);
}
ATerm j_4 (ATerm u_34, ATerm v_34, ATerm t)
{
  ATerm w_10 = NULL;
  t = SSL_fopen(u_34, v_34);
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_10 = NULL;
  t = SSL_stdin_stream();
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_10 = NULL;
  t = SSL_stdout_stream();
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_10 = NULL;
  t = SSL_stderr_stream();
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_10);
  return(t);
}
ATerm d_13 (ATerm f_11, ATerm t)
{
  ATerm g_11 = NULL;
  t = SSL_explode_term(f_11);
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_7 = ATgetArgument(t, 1);
        if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
          {
            g_11 = ATgetFirst((ATermList) x_7);
            {
              ATerm y_7 = (ATerm) ATgetNext((ATermList) x_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_13 (ATerm j_11, ATerm m_11, ATerm n_11, ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,a_12 = NULL,v_5 = NULL;
  t = SSLgetAnnotations(n_11);
  q_11 = t;
  t = j_11;
  if(match_cons(t, sym_Path_1))
    {
      a_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_12, m_11);
  v_5 = t;
  t = SSLsetAnnotations(v_5, q_11);
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(o_11, p_11, t);
  return(t);
}
ATerm i_13 (ATerm c_12, ATerm d_12, ATerm h_12, ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,n_12 = NULL,u_12 = NULL,y_5 = NULL;
  t = SSLgetAnnotations(h_12);
  n_12 = t;
  t = SSL_is_string(c_12);
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_12, d_12);
  y_5 = t;
  t = SSLsetAnnotations(y_5, n_12);
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(i_12, j_12, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,c_13 = NULL;
  z_12 = t;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
      {
        ATerm a_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_13(z_12, t);
            ;
            LocalPopChoice(c_8);
          }
        else
          {
            t = a_8;
            {
              ATerm g_8 = t;
              int h_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_13(a_13, c_13, z_12, t);
                  ;
                  LocalPopChoice(h_8);
                }
              else
                {
                  t = g_8;
                  t = i_13(a_13, c_13, z_12, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_13(z_12, t);
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_13 = NULL;
      m_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_13, term_l_8);
      t = k_4(t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      t = debug_1_0(u_0, t);
      _fail(t);
    }
  k_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(l_13, t);
  j_13 = t;
  t = k_13;
  t = fclose_0_0(t);
  t = j_13;
  return(t);
}
ATerm input_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      t = term_p_8;
    }
  t = ReadFromFile_0_0(t);
  t = b_97(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL,u_13 = NULL,v_13 = NULL;
  q_13 = t;
  t = term_u_8;
  t = whoami_0_0(t);
  r_13 = t;
  t = term_w_8;
  u_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_9), r_13), term_j_9);
  v_13 = t;
  t = SSL_printnl(u_13, v_13);
  t = term_n_9;
  s_13 = t;
  t = SSL_exit(s_13);
  t = q_13;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  if(match_string(t, "-k"))
    {
      t = z_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_13;
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm a_14 = NULL,f_14 = NULL,g_14 = NULL;
  a_14 = t;
  t = SSL_string_to_int(a_14);
  f_14 = t;
  t = term_p_9;
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, f_14);
  t = s_4(g_14, f_14, t);
  t = a_14;
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_0, w_0, y_0, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm i_14 = NULL;
  i_14 = t;
  if(match_string(t, "-S"))
    {
      t = i_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_14;
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm j_14 = NULL,m_14 = NULL;
  t = term_s_9;
  j_14 = t;
  t = term_v_9;
  m_14 = t;
  t = term_w_9;
  t = s_4(j_14, m_14, t);
  t = term_x_9;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm e_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
  n_14 = t;
  t = SSL_string_to_int(n_14);
  o_14 = t;
  t = term_s_9;
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, o_14);
  t = s_4(p_14, o_14, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_14);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_z_9;
  return(t);
}
ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  t = term_a_10;
  q_14 = t;
  t = term_u_8;
  r_14 = t;
  t = term_b_10;
  t = s_4(q_14, r_14, t);
  t = term_c_10;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_d_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_0, b_1, c_1, t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_1, f_1, g_1, t);
            ;
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            t = Option_3_0(h_1, i_1, k_1, t);
          }
      }
    }
  return(t);
}
ATerm s_4 (ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm u_14 = NULL;
  t = term_i_10;
  u_14 = t;
  t = SSL_table_put(u_14, o_43, p_43);
  t = (ATerm) ATmakeAppl(sym__3, term_i_10, o_43, p_43);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_15 = NULL,d_15 = NULL,e_15 = NULL;
      t = term_u_8;
      t = e_0(t);
      b_15 = t;
      t = term_j_10;
      d_15 = t;
      t = term_k_10;
      e_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_10, term_k_10, b_15);
      t = q_4(d_15, e_15, b_15, t);
      _fail(t);
    }
  else
    {
      ATerm h_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_14 = ATgetFirst((ATermList) t);
          a_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_14;
      t = c_0(t);
      t = term_u_8;
      t = d_0(t);
      h_15 = t;
      t = (ATerm) ATinsert(CheckATermList(a_15), h_15);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm j_15 = NULL;
  j_15 = t;
  if(match_string(t, "-o"))
    {
      t = j_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_15;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  k_15 = t;
  t = term_e_7;
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_7, k_15);
  t = s_4(l_15, k_15, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_15);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_1, q_1, u_1, t);
  return(t);
}
ATerm q_4 (ATerm k_48, ATerm l_48, ATerm j_48, ATerm t)
{
  ATerm n_15 = NULL,q_15 = NULL,r_15 = NULL;
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_10 = ATgetArgument(t, 0);
            ATerm q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
        t = p_4(k_48, l_48, t);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = (ATerm) ATempty;
      }
    q_15 = t;
    t = (ATerm) ATinsert(CheckATermList(q_15), j_48);
    r_15 = t;
    t = SSL_table_put(k_48, l_48, r_15);
    t = n_15;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
      t = term_u_8;
      t = k_0(t);
      c_16 = t;
      t = term_j_10;
      d_16 = t;
      t = term_k_10;
      e_16 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_10, term_k_10, c_16);
      t = q_4(d_16, e_16, c_16, t);
      _fail(t);
    }
  else
    {
      ATerm j_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_15 = ATgetFirst((ATermList) t);
          z_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_16 = ATgetFirst((ATermList) t);
          b_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_15;
      t = i_0(t);
      t = a_16;
      t = j_0(t);
      j_16 = t;
      t = (ATerm) ATinsert(CheckATermList(b_16), j_16);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm l_16 = NULL;
  l_16 = t;
  if(match_string(t, "-i"))
    {
      t = l_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_16;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  m_16 = t;
  t = term_o_8;
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_8, m_16);
  t = s_4(n_16, m_16, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_16);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_1, y_1, z_1, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_8;
  t = whoami_0_0(t);
  q_16 = t;
  t = term_w_8;
  s_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_10), q_16);
  t_16 = t;
  t = SSL_printnl(s_16, t_16);
  t = term_n_9;
  r_16 = t;
  t = SSL_exit(r_16);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm l_4 (ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_37, o_37);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = SSL_addr(n_37, o_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_16;
      t = p_85(t);
    }
  else
    {
      ATerm d_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_16 = ATgetFirst((ATermList) t);
          y_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_16;
      t = foldr_2_0(p_85, q_85, t);
      d_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_16, d_17);
      t = q_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(o_3, p_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_17 = NULL,c_3 = NULL,g_3 = NULL;
  t = times_0_0(t);
  g_3 = t;
  t = SSL_explode_term(g_3);
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_3;
  t = foldr_2_0(b_2, c_2, t);
  h_17 = t;
  t = SSL_TicksToSeconds(h_17);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_18 = NULL,d_18 = NULL,e_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_18;
        if((d_18 != t))
          {
            _fail(t);
          }
        t = a_18;
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = e_11;
        t = (ATerm) ATmakeAppl(sym__2, d_18, e_18);
        {
          ATerm i_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_18, e_18);
              ;
              LocalPopChoice(k_11);
            }
          else
            {
              t = i_11;
              t = SSL_gtr(d_18, e_18);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_18, e_18);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  {
    ATerm l_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL;
        t = term_s_9;
        t = get_config_0_0(t);
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_18, term_n_9);
        t = geq_0_0(t);
        t = i_18;
        t = b_94(t);
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = l_11;
        t = i_18;
      }
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,u_18 = NULL,v_18 = NULL;
  t = run_time_0_0(t);
  q_18 = t;
  t = term_u_8;
  t = whoami_0_0(t);
  r_18 = t;
  t = term_w_8;
  u_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), q_18), term_s_11), r_18);
  v_18 = t;
  t = SSL_printnl(u_18, v_18);
  t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), q_18), term_s_11), r_18));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_9;
  w_18 = t;
  t = SSL_exit(w_18);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm e_19 = NULL,h_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_19;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_19 = ATgetArgument(t, 0);
          {
            ATerm v_4 = NULL,c_6 = NULL;
            t = SSLgetAnnotations(h_19);
            v_4 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_19);
            c_6 = t;
            t = SSLsetAnnotations(c_6, v_4);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_19;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = fetch_1_0(g_2, t);
    }
  t = r_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_19 = ATgetFirst((ATermList) t);
      n_19 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_19 = NULL,g_20 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_19)), not_null(g_20));
          return(t);
        }
        t = n_19;
        t = h_0(t);
        if(((w_19 != NULL) && (w_19 != t)))
          _fail(t);
        else
          w_19 = t;
        t = m_19;
        t = g_0(t);
        if(((g_20 != NULL) && (g_20 != t)))
          _fail(t);
        else
          g_20 = t;
        t = n_19;
        t = reverse_acc_2_0(g_0, i_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_8;
      t = h_0(t);
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm m_20 = NULL,p_20 = NULL,q_20 = NULL,f_6 = NULL;
  q_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_20);
  f_6 = t;
  t = SSLsetAnnotations(f_6, m_20);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm v_20 = NULL;
  v_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_20), term_x_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      t = fetch_1_0(j_2, t);
    }
  t = term_b_12;
  t = echo_0_0(t);
  t = term_j_10;
  k_20 = t;
  t = term_k_10;
  l_20 = t;
  t = term_e_12;
  t = p_4(k_20, l_20, t);
  t = reverse_acc_2_0(_id, k_2, t);
  t = map_1_0(l_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm x_21 (ATerm t)
  {
    ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
    u_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_21 = ATgetFirst((ATermList) t);
        w_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_5 = NULL,m_5 = NULL,o_6 = NULL;
          t = SSLgetAnnotations(u_21);
          g_5 = t;
          t = v_21;
          t = w_79(t);
          m_5 = t;
          t = (ATerm) ATinsert(CheckATermList(w_21), m_5);
          o_6 = t;
          t = SSLsetAnnotations(o_6, g_5);
          ;
          LocalPopChoice(g_12);
        }
      else
        {
          t = f_12;
          {
            ATerm w_5 = NULL,d_6 = NULL,t_7 = NULL;
            t = SSLgetAnnotations(u_21);
            w_5 = t;
            t = w_21;
            t = x_21(t);
            d_6 = t;
            t = (ATerm) ATinsert(CheckATermList(d_6), v_21);
            t_7 = t;
            t = SSLsetAnnotations(t_7, w_5);
          }
        }
    }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_12 = ATgetFirst((ATermList) t);
                ATerm o_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_22;
          }
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATinsert(ATempty, b_22);
      }
    c_22 = t;
    t = term_g_7;
    d_22 = t;
    t = SSL_printnl(d_22, c_22);
    t = b_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_4 (ATerm m_33, ATerm n_33, ATerm t)
{
  t = SSL_strcat(m_33, n_33);
  return(t);
}
ATerm debug_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  h_22 = t;
  t = b_79(t);
  i_22 = t;
  t = term_w_8;
  j_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_22), i_22);
  k_22 = t;
  t = SSL_printnl(j_22, k_22);
  t = h_22;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_22 = NULL;
      r_22 = t;
      t = SSL_is_string(r_22);
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
            t = map_1_0(n_2, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
              c_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_23 = ATgetArgument(t, 0);
                  t = d_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_23 = ATgetArgument(t, 0);
                      t = d_23;
                      {
                        ATerm x_12 = t;
                        int y_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_12);
                          }
                        else
                          {
                            t = x_12;
                            t = debug_1_0(p_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_23 = NULL,r_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_23 = ATgetArgument(t, 0);
                          e_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_23;
                      t = eval_config_0_0(t);
                      q_23 = t;
                      t = e_23;
                      t = eval_config_0_0(t);
                      r_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_23, r_23);
                      t = o_4(q_23, r_23, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_4 (ATerm b_50, ATerm c_50, ATerm t)
{
  t = SSL_table_get(b_50, c_50);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  w_23 = t;
  t = term_i_10;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, w_23);
  t = p_4(x_23, w_23, t);
  {
    ATerm b_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_23 = NULL,z_23 = NULL;
        t = eval_config_0_0(t);
        y_23 = t;
        t = term_i_10;
        z_23 = t;
        t = SSL_table_put(z_23, w_23, y_23);
        t = y_23;
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = b_13;
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  t = term_f_13;
  c_24 = t;
  t = term_u_8;
  d_24 = t;
  t = term_h_13;
  t = s_4(c_24, d_24, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  t = term_f_13;
  g_24 = t;
  t = term_u_8;
  h_24 = t;
  t = term_h_13;
  t = s_4(g_24, h_24, t);
  t = term_o_13;
  e_24 = t;
  t = term_u_8;
  f_24 = t;
  t = term_p_13;
  t = s_4(e_24, f_24, t);
  t = term_t_13;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_2, t_2, u_2, t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = Option_3_0(v_2, x_2, y_2, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,r_24 = NULL,s_24 = NULL,z_7 = NULL;
  m_24 = t;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_14;
        t = u_98(t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
      }
    t = m_24;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_24 = ATgetFirst((ATermList) t);
        p_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_24);
    n_24 = t;
    t = term_a_11;
    s_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_11, o_24);
    t = s_4(s_24, o_24, t);
    t = p_24;
    {
      ATerm c_25 (ATerm t)
      {
        ATerm e_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_24 = NULL;
                v_24 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_24;
                ;
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
                t = u_98(t);
                t = Cons_2_0(_id, c_25, t);
              }
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = e_14;
            {
              ATerm y_24 = NULL,z_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_24 = ATgetFirst((ATermList) t);
                  z_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_24), (ATerm) ATmakeAppl(sym_Undefined_1, y_24));
            }
          }
        return(t);
      }
      t = c_25(t);
      r_24 = t;
      t = (ATerm) ATinsert(CheckATermList(r_24), (ATerm) ATmakeAppl(sym_Program_1, o_24));
      z_7 = t;
      t = SSLsetAnnotations(z_7, n_24);
    }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  if(match_string(t, "--help"))
    {
      t = o_25;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_25;
        }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  t = term_w_11;
  p_25 = t;
  t = term_u_8;
  q_25 = t;
  t = term_s_14;
  t = s_4(p_25, q_25, t);
  t = term_t_14;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_v_14;
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  j_25 = t;
  t = term_j_10;
  l_25 = t;
  t = term_k_10;
  m_25 = t;
  t = (ATerm) ATempty;
  n_25 = t;
  t = SSL_table_put(l_25, m_25, n_25);
  t = j_25;
  {
    ATerm a_3 (ATerm t)
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_98(t);
          ;
          LocalPopChoice(x_14);
        }
      else
        {
          t = w_14;
          {
            ATerm y_14 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_3, f_3, i_3, t);
                ;
                LocalPopChoice(c_15);
              }
            else
              {
                t = y_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_3, t);
    {
      ATerm f_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_25 = NULL;
          x_25 = t;
          {
            ATerm i_15 = t;
            int m_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_7 = NULL;
                t = x_25;
                {
                  ATerm o_15 = t;
                  int p_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_15);
                    }
                  else
                    {
                      t = o_15;
                      t = fetch_1_0(k_3, t);
                    }
                  t = x_25;
                  t = default_system_usage_0_0(t);
                  t = term_v_9;
                  q_7 = t;
                  t = SSL_exit(q_7);
                }
                ;
                LocalPopChoice(m_15);
              }
            else
              {
                t = i_15;
                {
                  ATerm v_7 = NULL;
                  t = term_f_13;
                  t = get_config_0_0(t);
                  t = x_25;
                  t = default_system_about_0_0(t);
                  t = term_v_9;
                  v_7 = t;
                  t = SSL_exit(v_7);
                }
              }
          }
          ;
          LocalPopChoice(g_15);
        }
      else
        {
          t = f_15;
          {
            ATerm s_15 = t;
            int t_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
                ATerm m_3 (ATerm t)
                {
                  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,b_8 = NULL;
                  d_26 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_26);
                  b_26 = t;
                  t = c_26;
                  if(((h_25 != NULL) && (h_25 != t)))
                    _fail(t);
                  else
                    h_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_26);
                  b_8 = t;
                  t = SSLsetAnnotations(b_8, b_26);
                  return(t);
                }
                t = fetch_1_0(m_3, t);
                t = term_w_8;
                z_25 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_25)), term_u_15);
                a_26 = t;
                t = SSL_printnl(z_25, a_26);
                t = (ATerm) ATmakeAppl(sym__2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_25)), term_u_15));
                t = default_system_usage_0_0(t);
                t = term_n_9;
                y_25 = t;
                t = SSL_exit(y_25);
                ;
                LocalPopChoice(t_15);
              }
            else
              {
                t = s_15;
              }
          }
        }
      i_25 = t;
      t = term_j_10;
      k_25 = t;
      t = SSL_table_destroy(k_25);
      t = i_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  t = parse_options_1_0(t_96, t);
  i_26 = t;
  t = term_v_15;
  l_26 = t;
  t = SSL_table_create(l_26);
  t = term_v_15;
  j_26 = t;
  t = term_w_15;
  k_26 = t;
  t = SSL_table_put(j_26, k_26, i_26);
  t = i_26;
  t = v_96(t);
  {
    ATerm x_15 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_96, t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = x_15;
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm i_16 = t;
  int k_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, v_3, w_3, t);
      ;
      LocalPopChoice(k_16);
    }
  else
    {
      t = i_16;
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            {
              ATerm u_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = u_16;
                  {
                    ATerm z_16 = t;
                    int a_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(x_3, y_3, a_4, t);
                        ;
                        LocalPopChoice(a_17);
                      }
                    else
                      {
                        t = z_16;
                        {
                          ATerm b_17 = t;
                          int c_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(c_17);
                            }
                          else
                            {
                              t = b_17;
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
ATerm r_3 (ATerm t)
{
  t = input_1_0(b_4, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--no-inlining", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  t = term_r_6;
  q_26 = t;
  t = term_u_8;
  r_26 = t;
  t = term_e_17;
  t = s_4(q_26, r_26, t);
  t = p_26;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  t = term_m_7;
  s_26 = t;
  t = term_u_8;
  t_26 = t;
  t = term_g_17;
  t = s_4(s_26, t_26, t);
  t = term_i_17;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = output_1_0(n_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_8 = NULL,e_8 = NULL;
  e_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  x_26 = t;
  t = y_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_27 = ATgetFirst((ATermList) t);
      b_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  z_26 = t;
  t = b_27;
  t = Cons_2_0(r_4, t_4, t);
  c_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), a_27);
  e_8 = t;
  t = SSLsetAnnotations(e_8, z_26);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_27);
  f_8 = t;
  t = SSLsetAnnotations(f_8, x_26);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,d_8 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  f_27 = t;
  t = g_27;
  t = map_1_0(u_4, t);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_27);
  d_8 = t;
  t = SSLsetAnnotations(d_8, f_27);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  n_27 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
      l_27 = ATgetArgument(t, 2);
      m_27 = ATgetArgument(t, 3);
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_27;
            t = d_4(j_27, k_27, l_27, m_27, t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm m_17 = t;
              int n_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_27 = NULL;
                  t = j_27;
                  t = unmangle_0_0(t);
                  w_27 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, w_27, k_27, l_27);
                  ;
                  LocalPopChoice(n_17);
                }
              else
                {
                  t = m_17;
                  t = n_27;
                }
            }
          }
      }
    }
  else
    {
      t = n_27;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_3, default_usage_0_0, _id, r_3, t);
  return(t);
}

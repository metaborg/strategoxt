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
ATerm term_c_15;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_m_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_x_10;
ATerm term_q_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_m_7;
ATerm term_f_7;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_f_5;
ATerm term_c_5;
ATerm term_w_4;
ATerm term_r_4;
ATerm term_q_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_n_4;
void init_constant_terms (void)
{
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_r_7, term_z_7);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_7);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_n_4);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_q_8, term_r_8);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_n_4);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_n_4);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_n_4);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_n_4);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm DesugarCase_0_0 (ATerm);
ATerm DesugarAssign_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_84 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm _2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm);
ATerm t_3 (ATerm i_51, ATerm j_51, ATerm);
ATerm u_3 (ATerm w_54, ATerm x_54, ATerm);
ATerm w_3 (ATerm b_104 (ATerm), ATerm o_429, ATerm a_55, ATerm);
ATerm v_3 (ATerm s_54, ATerm t_54, ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_107 (ATerm), ATerm);
ATerm y_7 (ATerm s_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm y_54, ATerm);
ATerm y_3 (ATerm k_51, ATerm l_51, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm s_3 (ATerm y_45, ATerm z_45, ATerm);
ATerm debug_1_0 (ATerm z_103 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_105 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm z_55, ATerm a_56, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm x_60, ATerm y_60, ATerm w_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm i_48, ATerm j_48, ATerm);
ATerm foldr_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm u_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm need_help_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_91 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm o_62, ATerm p_62, ATerm);
ATerm Program_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_110 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm parse_options_1_0 (ATerm d_110 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm iowrap_3_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = term_n_4;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_o_4;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_4), l_0), term_p_4);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_r_4;
  o_0 = t;
  t = SSL_exit(o_0);
  t = e_0;
  return(t);
}
ATerm DesugarCase_0_0 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,v_1 = NULL,x_1 = NULL,y_1 = NULL,a_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  if(match_cons(t, sym_Case_2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
      t = d_2;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_2 = ATgetFirst((ATermList) t);
          y_1 = (ATerm) ATgetNext((ATermList) t);
          t = a_2;
          if(match_cons(t, sym_Alt_3))
            {
              r_1 = ATgetArgument(t, 0);
              v_1 = ATgetArgument(t, 1);
              x_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = r_1;
          if(match_cons(t, sym_Real_1))
            {
              t_1 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, t_1)), x_1, (ATerm) ATmakeAppl(sym_Case_2, y_1, e_2));
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  t_1 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, t_1)), x_1, (ATerm) ATmakeAppl(sym_Case_2, y_1, e_2));
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      t_1 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_1)), x_1, (ATerm) ATmakeAppl(sym_Case_2, y_1, e_2));
                    }
                  else
                    {
                      if(match_cons(t, sym_Fun_2))
                        {
                          t_1 = ATgetArgument(t, 0);
                          {
                            ATerm s_4 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, t_1, v_1)), x_1, (ATerm) ATmakeAppl(sym_Case_2, y_1, e_2));
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_2;
        }
    }
  else
    {
      if(match_cons(t, sym_Case_3))
        {
          d_2 = ATgetArgument(t, 0);
          e_2 = ATgetArgument(t, 1);
          f_2 = ATgetArgument(t, 2);
          t = d_2;
          if(match_cons(t, sym_Var_1))
            {
              a_2 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_2)), (ATerm) ATmakeAppl(sym_Case_2, e_2, f_2));
        }
      else
        {
          if(match_cons(t, sym_Case_4))
            {
              ATerm t_4 = ATgetArgument(t, 0);
              e_2 = ATgetArgument(t, 1);
              f_2 = ATgetArgument(t, 2);
              g_2 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Case_3, e_2, f_2, g_2);
        }
    }
  return(t);
}
ATerm DesugarAssign_0_0 (ATerm t)
{
  ATerm y_4 = NULL,a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym_Assign_1))
    {
      y_4 = ATgetArgument(t, 0);
      t = y_4;
      if(match_cons(t, sym_Var_1))
        {
          a_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_5));
    }
  else
    {
      if(match_cons(t, sym_Assign_2))
        {
          y_4 = ATgetArgument(t, 0);
          b_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_4;
      if(match_cons(t, sym_Var_1))
        {
          a_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_5)));
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm u_4 = t;
    int v_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_84(t);
        t = h_5(t);
        ;
        LocalPopChoice(v_4);
      }
    else
      {
        t = u_4;
      }
    return(t);
  }
  t = h_5(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  t = t_85(t);
  {
    ATerm v_0 (ATerm t)
    {
      t = topdown_1_0(t_85, t);
      return(t);
    }
    t = SRTS_all(v_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm p_65 (ATerm), ATerm q_65 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,c_0 = NULL,k_0 = NULL;
  p_5 = t;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_5);
  i_5 = t;
  t = j_5;
  t = p_65(t);
  n_5 = t;
  t = l_5;
  t = q_65(t);
  o_5 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_5, o_5);
  c_0 = t;
  t = SSLsetAnnotations(c_0, i_5);
  return(t);
}
ATerm t_3 (ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm s_5 = NULL;
  t = SSL_fputc(i_51, j_51);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_5);
  return(t);
}
ATerm u_3 (ATerm w_54, ATerm x_54, ATerm t)
{
  ATerm t_5 = NULL;
  t = SSL_write_term_to_stream_text(w_54, x_54);
  t_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_5);
  return(t);
}
ATerm w_3 (ATerm b_104 (ATerm), ATerm o_429, ATerm a_55, ATerm t)
{
  ATerm u_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_429, term_w_4);
  t = open_stream_0_0(t);
  u_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_5, a_55);
  t = b_104(t);
  t = fclose_0_0(t);
  t = a_55;
  return(t);
}
ATerm v_3 (ATerm s_54, ATerm t_54, ATerm t)
{
  ATerm v_5 = NULL;
  t = SSL_write_term_to_stream_baf(s_54, t_54);
  v_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_5);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = fetch_1_0(c_1, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(d_1, z_5, a_6, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_4 = ATgetArgument(t, 0);
      if(match_cons(x_4, sym_Stream_1))
        {
          b_6 = ATgetArgument(x_4, 0);
        }
      else
        _fail(t);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(b_6, d_6, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      e_6 = ATgetArgument(t, 0);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(f_1, e_6, f_6, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,l_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_4 = ATgetArgument(t, 0);
      if(match_cons(z_4, sym_Stream_1))
        {
          h_6 = ATgetArgument(z_4, 0);
        }
      else
        _fail(t);
      i_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(h_6, i_6, t);
  g_6 = t;
  t = term_c_5;
  l_6 = t;
  t = g_6;
  if(match_cons(t, sym_Stream_1))
    {
      o_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_5, g_6);
  t = t_3(l_6, o_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_5 = NULL,x_5 = NULL;
  w_5 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm d_5 = t;
      int e_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_0 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((x_5 != NULL) && (x_5 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_5 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_0, t);
          ;
          LocalPopChoice(e_5);
        }
      else
        {
          t = d_5;
          t = term_f_5;
          if(((x_5 != NULL) && (x_5 != t)))
            _fail(t);
          else
            x_5 = t;
        }
      return(t);
    }
    t = _2_0(x_0, _id, t);
    t = w_5;
    {
      ATerm z_0 (ATerm t)
      {
        ATerm y_5 = NULL;
        y_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_5), y_5);
        return(t);
      }
      t = _2_0(_id, z_0, t);
      {
        ATerm g_5 = t;
        int k_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(a_1, b_1, t);
            ;
            LocalPopChoice(k_5);
          }
        else
          {
            t = g_5;
            t = _2_0(_id, e_1, t);
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
ATerm apply_strategy_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,s_6 = NULL,u_6 = NULL,z_6 = NULL,a_7 = NULL;
  p_6 = t;
  t = dtime_0_0(t);
  t = p_6;
  t = d_107(t);
  s_6 = t;
  t = dtime_0_0(t);
  u_6 = t;
  t = s_6;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_6), (ATerm) ATmakeAppl(sym_Runtime_1, u_6)), a_7);
  return(t);
}
ATerm y_7 (ATerm s_7, ATerm t)
{
  t = SSL_fclose(s_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  w_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_7 = ATgetArgument(t, 0);
      {
        ATerm m_5 = t;
        int q_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_7);
            ;
            LocalPopChoice(q_5);
          }
        else
          {
            t = m_5;
            t = y_7(w_7, t);
          }
      }
    }
  else
    {
      t = y_7(w_7, t);
    }
  return(t);
}
ATerm x_3 (ATerm y_54, ATerm t)
{
  t = SSL_read_term_from_stream(y_54);
  return(t);
}
ATerm y_3 (ATerm k_51, ATerm l_51, ATerm t)
{
  ATerm a_8 = NULL;
  t = SSL_fopen(k_51, l_51);
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_8 = NULL;
  t = SSL_stdin_stream();
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  t = SSL_stdout_stream();
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_8 = NULL;
  t = SSL_stderr_stream();
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm x_8 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      x_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_8;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  t = SSL_is_string(c_9);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_5 = ATgetArgument(t, 0);
      ATerm c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_8 = NULL,w_0 = NULL;
        u_8 = t;
        t = SSL_explode_term(u_8);
        if(match_cons(t, sym__2))
          {
            ATerm m_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_6) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_6 = ATgetArgument(t, 1);
              if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
                {
                  w_0 = ATgetFirst((ATermList) n_6);
                  {
                    ATerm q_6 = (ATerm) ATgetNext((ATermList) n_6);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_0;
        if(match_cons(t, sym_stderr_0))
          {
            t = w_0;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = w_0;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_0;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(k_6);
      }
    else
      {
        t = j_6;
        {
          ATerm r_6 = t;
          int t_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_8 = NULL,w_8 = NULL;
              t = _2_0(g_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_8 = ATgetArgument(t, 0);
                  w_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_3(v_8, w_8, t);
              ;
              LocalPopChoice(t_6);
            }
          else
            {
              t = r_6;
              {
                ATerm y_8 = NULL,b_9 = NULL;
                t = _2_0(j_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    y_8 = ATgetArgument(t, 0);
                    b_9 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_3(y_8, b_9, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_9 = NULL;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_9, term_y_6);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      t = debug_1_0(k_1, t);
      _fail(t);
    }
  i_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(k_9, t);
  j_9 = t;
  t = i_9;
  t = fclose_0_0(t);
  t = j_9;
  return(t);
}
ATerm fetch_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_91, _id, t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = Cons_2_0(_id, p_9, t);
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
ATerm s_3 (ATerm y_45, ATerm z_45, ATerm t)
{
  t = SSL_strcat(y_45, z_45);
  return(t);
}
ATerm debug_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  q_9 = t;
  t = z_103(t);
  r_9 = t;
  t = term_o_4;
  s_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_9), r_9);
  t_9 = t;
  t = SSL_printnl(s_9, t_9);
  t = q_9;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm d_7 = t;
  int e_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_7);
    }
  else
    {
      t = d_7;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_10 = NULL;
      d_10 = t;
      t = SSL_is_string(d_10);
      ;
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_1, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
              i_10 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_10 = ATgetArgument(t, 0);
                  t = j_10;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_10 = ATgetArgument(t, 0);
                      t = j_10;
                      {
                        ATerm k_7 = t;
                        int l_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_7);
                          }
                        else
                          {
                            t = k_7;
                            t = debug_1_0(o_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm o_10 = NULL,r_10 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_10 = ATgetArgument(t, 0);
                          k_10 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_10;
                      t = eval_config_0_0(t);
                      o_10 = t;
                      t = k_10;
                      t = eval_config_0_0(t);
                      r_10 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_10, r_10);
                      t = s_3(o_10, r_10, t);
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
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  t = term_m_7;
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, u_10);
  t = b_4(v_10, u_10, t);
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_10 = NULL,y_10 = NULL;
        t = eval_config_0_0(t);
        w_10 = t;
        t = term_m_7;
        y_10 = t;
        t = SSL_table_put(y_10, u_10, w_10);
        t = w_10;
        ;
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL,b_11 = NULL;
      z_10 = t;
      t = term_r_7;
      t = get_config_0_0(t);
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_11, term_t_7);
      t = geq_0_0(t);
      t = z_10;
      t = m_105(t);
      ;
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm j_11 = NULL;
  j_11 = t;
  if(match_string(t, "-k"))
    {
      t = j_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_11;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  t = SSL_string_to_int(k_11);
  l_11 = t;
  t = term_u_7;
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, l_11);
  t = e_4(m_11, l_11, t);
  t = k_11;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_1, q_1, s_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  if(match_string(t, "-S"))
    {
      t = p_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_11;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  t = term_r_7;
  q_11 = t;
  t = term_z_7;
  r_11 = t;
  t = term_b_8;
  t = e_4(q_11, r_11, t);
  t = term_c_8;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_e_8;
  return(t);
}
ATerm b_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm t_11 = NULL,w_11 = NULL,x_11 = NULL;
  t_11 = t;
  t = SSL_string_to_int(t_11);
  w_11 = t;
  t = term_r_7;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, w_11);
  t = e_4(x_11, w_11, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_11);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  t = term_h_8;
  y_11 = t;
  t = term_n_4;
  z_11 = t;
  t = term_i_8;
  t = e_4(y_11, z_11, t);
  t = term_k_8;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_l_8;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_1, w_1, z_1, t);
      ;
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_2, c_2, h_2, t);
            ;
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            t = Option_3_0(i_2, j_2, k_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm z_55, ATerm a_56, ATerm t)
{
  ATerm a_12 = NULL;
  t = term_m_7;
  a_12 = t;
  t = SSL_table_put(a_12, z_55, a_56);
  t = (ATerm) ATmakeAppl(sym__3, term_m_7, z_55, a_56);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_12 = NULL,h_12 = NULL,j_12 = NULL;
      t = term_n_4;
      t = d_0(t);
      g_12 = t;
      t = term_q_8;
      h_12 = t;
      t = term_r_8;
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_8, term_r_8, g_12);
      t = c_4(h_12, j_12, g_12, t);
      _fail(t);
    }
  else
    {
      ATerm o_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_12 = ATgetFirst((ATermList) t);
          f_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_12;
      t = a_0(t);
      t = term_n_4;
      t = b_0(t);
      o_12 = t;
      t = (ATerm) ATinsert(CheckATermList(f_12), o_12);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  if(match_string(t, "-o"))
    {
      t = q_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_12;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm w_12 = NULL,z_12 = NULL;
  w_12 = t;
  t = term_s_8;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, w_12);
  t = e_4(z_12, w_12, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_12);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_t_8;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, o_2, t);
  return(t);
}
ATerm c_4 (ATerm x_60, ATerm y_60, ATerm w_60, ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,h_13 = NULL;
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_60, y_60);
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_9 = ATgetArgument(t, 0);
            ATerm e_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_60, y_60);
        t = b_4(x_60, y_60, t);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = (ATerm) ATempty;
      }
    e_13 = t;
    t = (ATerm) ATinsert(CheckATermList(e_13), w_60);
    h_13 = t;
    t = SSL_table_put(x_60, y_60, h_13);
    t = d_13;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
      t = term_n_4;
      t = j_0(t);
      y_13 = t;
      t = term_q_8;
      z_13 = t;
      t = term_r_8;
      a_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_8, term_r_8, y_13);
      t = c_4(z_13, a_14, y_13, t);
      _fail(t);
    }
  else
    {
      ATerm e_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_13 = ATgetFirst((ATermList) t);
          v_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_13;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_13 = ATgetFirst((ATermList) t);
          x_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_13;
      t = h_0(t);
      t = w_13;
      t = i_0(t);
      e_14 = t;
      t = (ATerm) ATinsert(CheckATermList(x_13), e_14);
    }
  return(t);
}
ATerm p_2 (ATerm t)
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
ATerm q_2 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  h_14 = t;
  t = term_f_9;
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, h_14);
  t = e_4(i_14, h_14, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_14);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_14 = NULL,m_14 = NULL,p_14 = NULL,q_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_4;
  t = whoami_0_0(t);
  k_14 = t;
  t = term_o_4;
  m_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_9), k_14);
  p_14 = t;
  t = SSL_printnl(m_14, p_14);
  t = term_r_4;
  q_14 = t;
  t = SSL_exit(q_14);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_9;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_48, j_48);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      t = SSL_addr(i_48, j_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_97(t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm v_14 = NULL,y_14 = NULL,b_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_14 = ATgetFirst((ATermList) t);
            y_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_14;
        t = foldr_2_0(n_97, o_97, t);
        b_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, b_15);
        t = o_97(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  if(match_cons(t, sym__2))
    {
      l_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(l_1, m_1, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_15 = NULL,h_1 = NULL,i_1 = NULL;
  t = times_0_0(t);
  h_1 = t;
  t = SSL_explode_term(h_1);
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  t = foldr_2_0(s_2, t_2, t);
  f_15 = t;
  t = SSL_TicksToSeconds(f_15);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_15;
        if((r_15 != t))
          {
            _fail(t);
          }
        t = q_15;
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = (ATerm) ATmakeAppl(sym__2, r_15, s_15);
        {
          ATerm z_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_15, s_15);
              ;
              LocalPopChoice(a_10);
            }
          else
            {
              t = z_9;
              t = SSL_gtr(r_15, s_15);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_15, s_15);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = NULL,x_15 = NULL;
      v_15 = t;
      t = term_r_7;
      t = get_config_0_0(t);
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_15, term_r_4);
      t = geq_0_0(t);
      t = v_15;
      t = l_105(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  t = run_time_0_0(t);
  z_15 = t;
  t = term_n_4;
  t = whoami_0_0(t);
  a_16 = t;
  t = term_o_4;
  b_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), z_15), term_e_10), a_16);
  c_16 = t;
  t = SSL_printnl(b_16, c_16);
  t = (ATerm) ATmakeAppl(sym__2, term_o_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_10), z_15), term_e_10), a_16));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_7;
  d_16 = t;
  t = SSL_exit(d_16);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm n_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = n_10;
      t = fetch_1_0(v_2, t);
    }
  t = b_108(t);
  return(t);
}
ATerm map_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  ATerm e_16 (ATerm t)
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = Cons_2_0(k_91, e_16, t);
      }
    return(t);
  }
  t = e_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_16 = ATgetFirst((ATermList) t);
      h_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_16 = NULL,m_16 = NULL;
        t = h_16;
        t = g_0(t);
        l_16 = t;
        t = g_16;
        t = f_0(t);
        m_16 = t;
        t = h_16;
        {
          ATerm w_2 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_16), m_16);
            return(t);
          }
          t = reverse_acc_2_0(f_0, w_2, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_4;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm o_62, ATerm p_62, ATerm t)
{
  t = SSL_table_get(o_62, p_62);
  return(t);
}
ATerm Program_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,p_0 = NULL,q_0 = NULL;
  q_16 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_16);
  n_16 = t;
  t = o_16;
  t = t_83(t);
  p_16 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_16);
  p_0 = t;
  t = SSLsetAnnotations(p_0, n_16);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm v_16 = NULL;
  v_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_16), term_x_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  ATerm a_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_9;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = a_11;
      t = fetch_1_0(x_2, t);
    }
  t = term_d_11;
  t = echo_0_0(t);
  t = term_q_8;
  t_16 = t;
  t = term_r_8;
  u_16 = t;
  t = term_e_11;
  t = b_4(t_16, u_16, t);
  t = reverse_acc_2_0(_id, y_2, t);
  t = map_1_0(z_2, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,r_0 = NULL,s_0 = NULL;
  z_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_16);
  w_16 = t;
  t = x_16;
  t = u_83(t);
  y_16 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_16);
  r_0 = t;
  t = SSLsetAnnotations(r_0, w_16);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_11 = ATgetFirst((ATermList) t);
                ATerm i_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_17;
          }
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = (ATerm) ATinsert(ATempty, d_17);
      }
    e_17 = t;
    t = term_f_5;
    f_17 = t;
    t = SSL_printnl(f_17, e_17);
    t = d_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_9;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  t = term_n_11;
  j_17 = t;
  t = term_n_4;
  k_17 = t;
  t = term_o_11;
  t = e_4(j_17, k_17, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  t = term_n_11;
  l_17 = t;
  t = term_n_4;
  m_17 = t;
  t = term_o_11;
  t = e_4(l_17, m_17, t);
  t = term_u_11;
  n_17 = t;
  t = term_n_4;
  o_17 = t;
  t = term_v_11;
  t = e_4(n_17, o_17, t);
  t = term_b_12;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_3, c_3, d_3, t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = e_12;
      t = Option_3_0(e_3, f_3, g_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,t_0 = NULL,u_0 = NULL;
  u_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_17 = ATgetFirst((ATermList) t);
      r_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_17);
  p_17 = t;
  t = q_17;
  t = e_70(t);
  s_17 = t;
  t = r_17;
  t = f_70(t);
  t_17 = t;
  u_0 = t;
  t = (ATerm) ATinsert(CheckATermList(t_17), s_17);
  t_0 = t;
  t = SSLsetAnnotations(t_0, p_17);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  t = term_m_9;
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, z_17);
  t = e_4(a_18, z_17, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, z_17);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_12;
        t = e_110(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
      }
    t = y_17;
    {
      ATerm i_3 (ATerm t)
      {
        ATerm n_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_12 = t;
            int s_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(s_12);
              }
            else
              {
                t = r_12;
                t = e_110(t);
                t = Cons_2_0(_id, i_3, t);
              }
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = n_12;
            {
              ATerm c_18 = NULL,d_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_18 = ATgetFirst((ATermList) t);
                  d_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_18), (ATerm) ATmakeAppl(sym_Undefined_1, c_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(h_3, i_3, t);
    }
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  if(match_string(t, "--help"))
    {
      t = r_18;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_18;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_18;
        }
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  t = term_q_10;
  s_18 = t;
  t = term_n_4;
  t_18 = t;
  t = term_t_12;
  t = e_4(s_18, t_18, t);
  t = term_u_12;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_110 (ATerm), ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  k_18 = t;
  t = term_q_8;
  n_18 = t;
  t = term_r_8;
  o_18 = t;
  t = (ATerm) ATempty;
  p_18 = t;
  t = SSL_table_put(n_18, o_18, p_18);
  t = k_18;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm x_12 = t;
      int y_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_110(t);
          ;
          LocalPopChoice(y_12);
        }
      else
        {
          t = x_12;
          {
            ATerm a_13 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_3, l_3, m_3, t);
                ;
                LocalPopChoice(b_13);
              }
            else
              {
                t = a_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_3, t);
    {
      ATerm c_13 = t;
      int f_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_19 = NULL;
          a_19 = t;
          {
            ATerm g_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_2 = NULL;
                t = a_19;
                {
                  ATerm j_13 = t;
                  int k_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_10;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_13);
                    }
                  else
                    {
                      t = j_13;
                      t = fetch_1_0(n_3, t);
                    }
                  t = a_19;
                  t = default_system_usage_0_0(t);
                  t = term_z_7;
                  n_2 = t;
                  t = SSL_exit(n_2);
                }
                ;
                LocalPopChoice(i_13);
              }
            else
              {
                t = g_13;
                {
                  ATerm b_3 = NULL;
                  t = term_n_11;
                  t = get_config_0_0(t);
                  t = a_19;
                  t = default_system_about_0_0(t);
                  t = term_z_7;
                  b_3 = t;
                  t = SSL_exit(b_3);
                }
              }
          }
          ;
          LocalPopChoice(f_13);
        }
      else
        {
          t = c_13;
          {
            ATerm l_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
                ATerm o_3 (ATerm t)
                {
                  ATerm p_3 (ATerm t)
                  {
                    if(((l_18 != NULL) && (l_18 != t)))
                      _fail(t);
                    else
                      l_18 = t;
                    return(t);
                  }
                  t = Undefined_1_0(p_3, t);
                  return(t);
                }
                t = fetch_1_0(o_3, t);
                t = term_o_4;
                b_19 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_18)), term_n_13);
                c_19 = t;
                t = SSL_printnl(b_19, c_19);
                t = (ATerm) ATmakeAppl(sym__2, term_o_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_18)), term_n_13));
                t = default_system_usage_0_0(t);
                t = term_r_4;
                d_19 = t;
                t = SSL_exit(d_19);
                ;
                LocalPopChoice(m_13);
              }
            else
              {
                t = l_13;
              }
          }
        }
      m_18 = t;
      t = term_q_8;
      q_18 = t;
      t = SSL_table_destroy(q_18);
      t = m_18;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  t = parse_options_1_0(d_108, t);
  g_19 = t;
  t = term_o_13;
  h_19 = t;
  t = SSL_table_create(h_19);
  t = term_o_13;
  i_19 = t;
  t = term_p_13;
  j_19 = t;
  t = SSL_table_put(i_19, j_19, g_19);
  t = g_19;
  t = f_108(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_108, t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_108(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = if_verbose2_1_0(h_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  t = term_b_14;
  k_19 = t;
  t = term_n_4;
  l_19 = t;
  t = term_c_14;
  t = e_4(k_19, l_19, t);
  t = term_d_14;
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  m_19 = t;
  t = term_m_9;
  t = get_config_0_0(t);
  n_19 = t;
  t = term_o_4;
  o_19 = t;
  t = (ATerm) ATinsert(ATempty, n_19);
  p_19 = t;
  t = SSL_printnl(o_19, p_19);
  t = m_19;
  return(t);
}
ATerm iowrap_3_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm j_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_107(t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = j_14;
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              {
                ATerm r_14 = t;
                int s_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_14);
                  }
                else
                  {
                    t = r_14;
                    {
                      ATerm t_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_4, f_4, g_4, t);
                          ;
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = t_14;
                          {
                            ATerm w_14 = t;
                            int x_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(x_14);
                              }
                            else
                              {
                                t = w_14;
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
  ATerm a_4 (ATerm t)
  {
    ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
    q_19 = t;
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_4, t);
          ;
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          t = term_c_15;
          r_19 = t;
        }
      t = not_null(r_19);
      t = ReadFromFile_0_0(t);
      s_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_19, s_19);
      t = apply_strategy_1_0(m_107, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(q_3, o_107, r_3, a_4, t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = _2_0(_id, k_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = topdown_1_0(l_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = repeat_1_0(m_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarAssign_0_0(t);
      ;
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      t = DesugarCase_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_4, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Rules_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_App_2;
Symbol sym_Rule_3;
Symbol sym_RDef_3;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Prim_2;
Symbol sym_Path_2;
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
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_s_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_d_10;
ATerm term_r_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_m_8;
ATerm term_e_8;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Op_2, term_q_6, (ATerm) ATempty);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Call_2, term_j_7, (ATerm) ATempty);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Var_1, term_q_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_r_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_i_6);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_p_11);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_i_6);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_i_6);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_i_6);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_i_6);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm h_4 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm z_24, ATerm y_24, ATerm);
ATerm i_4 (ATerm k_81 (ATerm), ATerm v_24, ATerm u_24, ATerm);
ATerm new_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm g_4 (ATerm x_17, ATerm y_17, ATerm);
ATerm foldr_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm collect_om_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm);
ATerm l_4 (ATerm w_37, ATerm x_37, ATerm);
ATerm m_4 (ATerm k_41, ATerm l_41, ATerm);
ATerm o_4 (ATerm d_90 (ATerm), ATerm q_398, ATerm o_41, ATerm);
ATerm n_4 (ATerm g_41, ATerm h_41, ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm f_8 (ATerm z_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_4 (ATerm m_41, ATerm);
ATerm q_4 (ATerm y_37, ATerm z_37, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_11 (ATerm f_9, ATerm);
ATerm l_11 (ATerm l_9, ATerm o_9, ATerm p_9, ATerm);
ATerm m_11 (ATerm i_10, ATerm k_10, ATerm n_10, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm l_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm k_4 (ATerm m_32, ATerm n_32, ATerm);
ATerm debug_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_91 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm u_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm k_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm w_4 (ATerm n_42, ATerm o_42, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_4 (ATerm l_47, ATerm m_47, ATerm k_47, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm y_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_4 (ATerm w_34, ATerm x_34, ATerm);
ATerm foldr_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_91 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm need_help_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm t_4 (ATerm c_49, ATerm d_49, ATerm);
ATerm f_4 (ATerm);
ATerm j_4 (ATerm);
ATerm s_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_96 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm parse_options_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm iowrap_3_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,n_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_i_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_j_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_6), b_0), term_k_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_n_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm h_4 (ATerm n_81 (ATerm), ATerm o_81 (ATerm), ATerm z_24, ATerm y_24, ATerm t)
{
  t = o_81(t);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm p_0 = NULL;
      p_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_24, p_0);
      t = n_81(t);
      return(t);
    }
    t = fetch_1_0(c_0, t);
    t = y_24;
  }
  return(t);
}
ATerm i_4 (ATerm k_81 (ATerm), ATerm v_24, ATerm u_24, ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm c_1 = NULL,d_1 = NULL,g_1 = NULL;
    c_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_1 = ATgetFirst((ATermList) t);
            g_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_6 = t;
          int p_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_1;
              {
                ATerm f_0 (ATerm t)
                {
                  t = u_24;
                  return(t);
                }
                t = h_4(k_81, f_0, d_1, g_1, t);
                t = s_1(t);
              }
              ;
              LocalPopChoice(p_6);
            }
          else
            {
              t = o_6;
              {
                ATerm r_0 = NULL,e_1 = NULL,s_0 = NULL;
                t = SSLgetAnnotations(c_1);
                r_0 = t;
                t = g_1;
                t = s_1(t);
                e_1 = t;
                t = (ATerm) ATinsert(CheckATermList(e_1), d_1);
                s_0 = t;
                t = SSLsetAnnotations(s_0, r_0);
              }
            }
        }
      }
    return(t);
  }
  t = v_24;
  t = s_1(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm j_2 = NULL;
  t = new_0_0(t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_2);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_r_6;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,k_1 = NULL;
  l_2 = t;
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_6 = ATgetArgument(t, 1);
        if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
          {
            n_2 = ATgetFirst((ATermList) t_6);
            {
              ATerm w_6 = (ATerm) ATgetNext((ATermList) t_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            ATerm z_6 = ATgetFirst((ATermList) y_6);
            ATerm c_7 = (ATerm) ATgetNext((ATermList) y_6);
            if(((ATgetType(c_7) == AT_LIST) && !(ATisEmpty(c_7))))
              {
                k_1 = ATgetFirst((ATermList) c_7);
                {
                  ATerm g_7 = (ATerm) ATgetNext((ATermList) c_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, k_1), n_2));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_k_7, p_2);
  return(t);
}
ATerm g_4 (ATerm x_17, ATerm y_17, ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = y_17;
  t = map_1_0(q_0, t);
  g_2 = t;
  t = foldr_2_0(t_0, y_0, t);
  e_2 = t;
  t = g_2;
  t = map_1_0(z_0, t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_l_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, term_t_7), (ATerm) ATmakeAppl(sym_Op_2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, e_2), (ATerm) ATmakeAppl(sym_Str_1, x_17))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, x_17, h_2), term_t_7), term_u_7));
  return(t);
}
ATerm foldr_3_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_2;
      t = l_83(t);
    }
  else
    {
      ATerm x_2 = NULL,y_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_2 = ATgetFirst((ATermList) t);
          u_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_2;
      t = n_83(t);
      x_2 = t;
      t = u_2;
      t = foldr_3_0(l_83, m_83, n_83, t);
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
      t = m_83(t);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 = NULL;
      t = p_82(t);
      e_3 = t;
      t = (ATerm) ATinsert(ATempty, e_3);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm n_1 = NULL,o_1 = NULL;
        ATerm b_1 (ATerm t)
        {
          t = collect_om_2_0(p_82, q_82, t);
          return(t);
        }
        o_1 = t;
        t = SSL_explode_term(o_1);
        if(match_cons(t, sym__2))
          {
            ATerm x_7 = ATgetArgument(t, 0);
            n_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_1;
        t = foldr_3_0(a_1, q_82, b_1, t);
      }
    }
  return(t);
}
ATerm l_4 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm f_3 = NULL;
  t = SSL_fputc(w_37, x_37);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_3);
  return(t);
}
ATerm m_4 (ATerm k_41, ATerm l_41, ATerm t)
{
  ATerm g_3 = NULL;
  t = SSL_write_term_to_stream_text(k_41, l_41);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_3);
  return(t);
}
ATerm o_4 (ATerm d_90 (ATerm), ATerm q_398, ATerm o_41, ATerm t)
{
  ATerm h_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_398, term_y_7);
  t = open_stream_0_0(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, o_41);
  t = d_90(t);
  t = fclose_0_0(t);
  t = o_41;
  return(t);
}
ATerm n_4 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_write_term_to_stream_baf(g_41, h_41);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_3);
  return(t);
}
ATerm h_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm m_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          m_2 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(m_2, o_2, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          w_3 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(w_3, x_3, t);
  r_3 = t;
  t = term_e_8;
  s_3 = t;
  t = r_3;
  if(match_cons(t, sym_Stream_1))
    {
      v_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, r_3);
  t = l_4(s_3, v_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL,q_3 = NULL,t_3 = NULL,u_3 = NULL,b_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,u_6 = NULL,v_6 = NULL,v_0 = NULL,u_0 = NULL;
  p_3 = t;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  x_4 = t;
  t = z_4;
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((n_3 != NULL) && (n_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_1, t);
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = term_m_8;
        n_3 = t;
      }
    b_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_5, a_5);
    u_0 = t;
    t = SSLsetAnnotations(u_0, x_4);
    t = p_3;
    if(match_cons(t, sym__2))
      {
        t_3 = ATgetArgument(t, 0);
        u_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_3);
    q_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_3, (ATerm) ATmakeAppl(sym__2, not_null(n_3), u_3));
    v_0 = t;
    t = SSLsetAnnotations(v_0, q_3);
    b_4 = t;
    if(match_cons(t, sym__2))
      {
        u_6 = ATgetArgument(t, 0);
        v_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 = NULL,a_2 = NULL,d_2 = NULL,f_2 = NULL,i_2 = NULL,w_0 = NULL;
          t = SSLgetAnnotations(b_4);
          w_1 = t;
          t = u_6;
          t = fetch_1_0(h_1, t);
          a_2 = t;
          t = v_6;
          if(match_cons(t, sym__2))
            {
              f_2 = ATgetArgument(t, 0);
              i_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(i_1, f_2, i_2, t);
          d_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_2, d_2);
          w_0 = t;
          t = SSLsetAnnotations(w_0, w_1);
          ;
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm c_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(b_4);
            c_3 = t;
            t = v_6;
            if(match_cons(t, sym__2))
              {
                m_3 = ATgetArgument(t, 0);
                o_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_4(j_1, m_3, o_3, t);
            l_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_6, l_3);
            x_0 = t;
            t = SSLsetAnnotations(x_0, c_3);
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
ATerm apply_strategy_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  f_7 = t;
  t = dtime_0_0(t);
  t = f_7;
  t = f_93(t);
  e_7 = t;
  t = dtime_0_0(t);
  a_7 = t;
  t = e_7;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_7), (ATerm) ATmakeAppl(sym_Runtime_1, a_7)), d_7);
  return(t);
}
ATerm f_8 (ATerm z_7, ATerm t)
{
  t = SSL_fclose(z_7);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL;
  d_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_8 = ATgetArgument(t, 0);
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_8);
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            t = f_8(d_8, t);
          }
      }
    }
  else
    {
      t = f_8(d_8, t);
    }
  return(t);
}
ATerm p_4 (ATerm m_41, ATerm t)
{
  t = SSL_read_term_from_stream(m_41);
  return(t);
}
ATerm q_4 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm g_8 = NULL;
  t = SSL_fopen(y_37, z_37);
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  t = SSL_stdin_stream();
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_stdout_stream();
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_8 = NULL;
  t = SSL_stderr_stream();
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_8);
  return(t);
}
ATerm i_11 (ATerm f_9, ATerm t)
{
  ATerm i_9 = NULL;
  t = SSL_explode_term(f_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_8 = ATgetArgument(t, 1);
        if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
          {
            i_9 = ATgetFirst((ATermList) t_8);
            {
              ATerm u_8 = (ATerm) ATgetNext((ATermList) t_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm l_11 (ATerm l_9, ATerm o_9, ATerm p_9, ATerm t)
{
  ATerm x_9 = NULL,b_10 = NULL,c_10 = NULL,f_10 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(p_9);
  c_10 = t;
  t = l_9;
  if(match_cons(t, sym_Path_1))
    {
      f_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_10, o_9);
  t_1 = t;
  t = SSLsetAnnotations(t_1, c_10);
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(x_9, b_10, t);
  return(t);
}
ATerm m_11 (ATerm i_10, ATerm k_10, ATerm n_10, ATerm t)
{
  ATerm p_10 = NULL,t_10 = NULL,v_10 = NULL,d_11 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(n_10);
  v_10 = t;
  t = SSL_is_string(i_10);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, k_10);
  y_1 = t;
  t = SSLsetAnnotations(y_1, v_10);
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(p_10, t_10, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      ATerm w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_11 = t;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_11(f_11, t);
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            {
              ATerm z_8 = t;
              int b_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_11(g_11, h_11, f_11, t);
                  ;
                  LocalPopChoice(b_9);
                }
              else
                {
                  t = z_8;
                  t = m_11(g_11, h_11, f_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_11(f_11, t);
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_11 = NULL,z_11 = NULL,a_12 = NULL;
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_12 = NULL;
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_12, term_j_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = debug_1_0(l_1, t);
      _fail(t);
    }
  z_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(a_12, t);
  n_11 = t;
  t = z_11;
  t = fclose_0_0(t);
  t = n_11;
  return(t);
}
ATerm fetch_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm l_13 = NULL,n_13 = NULL,o_13 = NULL;
    l_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_13 = ATgetFirst((ATermList) t);
        o_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_5 = NULL,i_5 = NULL,b_3 = NULL;
          t = SSLgetAnnotations(l_13);
          d_5 = t;
          t = n_13;
          t = q_77(t);
          i_5 = t;
          t = (ATerm) ATinsert(CheckATermList(o_13), i_5);
          b_3 = t;
          t = SSLsetAnnotations(b_3, d_5);
          ;
          LocalPopChoice(m_9);
        }
      else
        {
          t = k_9;
          {
            ATerm g_6 = NULL,m_6 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(l_13);
            g_6 = t;
            t = o_13;
            t = q_13(t);
            m_6 = t;
            t = (ATerm) ATinsert(CheckATermList(m_6), n_13);
            d_3 = t;
            t = SSLsetAnnotations(d_3, g_6);
          }
        }
    }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm k_4 (ATerm m_32, ATerm n_32, ATerm t)
{
  t = SSL_strcat(m_32, n_32);
  return(t);
}
ATerm debug_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  t_13 = t;
  t = b_90(t);
  a_14 = t;
  t = term_j_6;
  b_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_13), a_14);
  c_14 = t;
  t = SSL_printnl(b_14, c_14);
  t = t_13;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm n_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = n_9;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_14 = NULL;
      o_14 = t;
      t = SSL_is_string(o_14);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm v_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = v_9;
            {
              ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
              z_14 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_15 = ATgetArgument(t, 0);
                  t = a_15;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_15 = ATgetArgument(t, 0);
                      t = a_15;
                      {
                        ATerm z_9 = t;
                        int a_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_10);
                          }
                        else
                          {
                            t = z_9;
                            t = debug_1_0(p_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_15 = NULL,g_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_15 = ATgetArgument(t, 0);
                          b_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_15;
                      t = eval_config_0_0(t);
                      f_15 = t;
                      t = b_15;
                      t = eval_config_0_0(t);
                      g_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
                      t = k_4(f_15, g_15, t);
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
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  t = term_d_10;
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, o_15);
  t = t_4(p_15, o_15, t);
  {
    ATerm e_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,w_15 = NULL;
        t = eval_config_0_0(t);
        t_15 = t;
        t = term_d_10;
        w_15 = t;
        t = SSL_table_put(w_15, o_15, t_15);
        t = t_15;
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = e_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_16 = NULL;
        t = term_l_10;
        t = get_config_0_0(t);
        i_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_16, term_m_10);
        t = geq_0_0(t);
        t = e_16;
        t = o_91(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        t = e_16;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  if(match_string(t, "-k"))
    {
      t = o_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_16;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  t = SSL_string_to_int(s_16);
  t_16 = t;
  t = term_o_10;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, t_16);
  t = w_4(u_16, t_16, t);
  t = s_16;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, r_1, u_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm w_16 = NULL;
  w_16 = t;
  if(match_string(t, "-S"))
    {
      t = w_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_16;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  t = term_l_10;
  x_16 = t;
  t = term_r_10;
  y_16 = t;
  t = term_s_10;
  t = w_4(x_16, y_16, t);
  t = term_u_10;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_w_10;
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  t = SSL_string_to_int(z_16);
  a_17 = t;
  t = term_l_10;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, a_17);
  t = w_4(b_17, a_17, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_16);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  t = term_y_10;
  c_17 = t;
  t = term_i_6;
  d_17 = t;
  t = term_z_10;
  t = w_4(c_17, d_17, t);
  t = term_a_11;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, x_1, z_1, t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = c_11;
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_2, c_2, k_2, t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = Option_3_0(q_2, s_2, v_2, t);
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm e_17 = NULL;
  t = term_d_10;
  e_17 = t;
  t = SSL_table_put(e_17, n_42, o_42);
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, n_42, o_42);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL;
      t = term_i_6;
      t = h_0(t);
      j_17 = t;
      t = term_o_11;
      m_17 = t;
      t = term_p_11;
      n_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_11, term_p_11, j_17);
      t = u_4(m_17, n_17, j_17, t);
      _fail(t);
    }
  else
    {
      ATerm u_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_17 = ATgetFirst((ATermList) t);
          i_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_17;
      t = d_0(t);
      t = term_i_6;
      t = g_0(t);
      u_17 = t;
      t = (ATerm) ATinsert(CheckATermList(i_17), u_17);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm w_17 = NULL;
  w_17 = t;
  if(match_string(t, "-o"))
    {
      t = w_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_17;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm c_18 = NULL,e_18 = NULL;
  c_18 = t;
  t = term_q_11;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, c_18);
  t = w_4(e_18, c_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_18);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, z_2, a_3, t);
  return(t);
}
ATerm u_4 (ATerm l_47, ATerm m_47, ATerm k_47, ATerm t)
{
  ATerm h_18 = NULL,j_18 = NULL,k_18 = NULL;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_11 = ATgetArgument(t, 0);
            ATerm v_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
        t = t_4(l_47, m_47, t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATempty;
      }
    j_18 = t;
    t = (ATerm) ATinsert(CheckATermList(j_18), k_47);
    k_18 = t;
    t = SSL_table_put(l_47, m_47, k_18);
    t = h_18;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
      t = term_i_6;
      t = m_0(t);
      v_18 = t;
      t = term_o_11;
      w_18 = t;
      t = term_p_11;
      x_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_11, term_p_11, v_18);
      t = u_4(w_18, x_18, v_18, t);
      _fail(t);
    }
  else
    {
      ATerm h_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_18 = ATgetFirst((ATermList) t);
          u_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      t = k_0(t);
      t = t_18;
      t = l_0(t);
      h_19 = t;
      t = (ATerm) ATinsert(CheckATermList(u_18), h_19);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  if(match_string(t, "-i"))
    {
      t = j_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_19;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  k_19 = t;
  t = term_w_11;
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, k_19);
  t = w_4(l_19, k_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_19);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, y_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_6;
  t = whoami_0_0(t);
  m_19 = t;
  t = term_j_6;
  o_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_11), m_19);
  p_19 = t;
  t = SSL_printnl(o_19, p_19);
  t = term_n_6;
  n_19 = t;
  t = SSL_exit(n_19);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_4 (ATerm w_34, ATerm x_34, ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_34, x_34);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = SSL_addr(w_34, x_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_19;
      t = j_83(t);
    }
  else
    {
      ATerm w_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_19 = ATgetFirst((ATermList) t);
          t_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_19;
      t = foldr_2_0(j_83, k_83, t);
      w_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_19, w_19);
      t = k_83(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(r_7, s_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_19 = NULL,m_7 = NULL,n_7 = NULL;
  t = times_0_0(t);
  n_7 = t;
  t = SSL_explode_term(n_7);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7;
  t = foldr_2_0(z_3, a_4, t);
  z_19 = t;
  t = SSL_TicksToSeconds(z_19);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_20;
        if((n_20 != t))
          {
            _fail(t);
          }
        t = m_20;
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATmakeAppl(sym__2, n_20, o_20);
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_20, o_20);
              ;
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              t = SSL_gtr(n_20, o_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_20, o_20);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL;
        t = term_l_10;
        t = get_config_0_0(t);
        u_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_20, term_n_6);
        t = geq_0_0(t);
        t = s_20;
        t = n_91(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = s_20;
      }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,z_20 = NULL,a_21 = NULL;
  t = run_time_0_0(t);
  w_20 = t;
  t = term_i_6;
  t = whoami_0_0(t);
  x_20 = t;
  t = term_j_6;
  z_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_12), w_20), term_m_12), x_20);
  a_21 = t;
  t = SSL_printnl(z_20, a_21);
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_12), w_20), term_m_12), x_20));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_10;
  b_21 = t;
  t = SSL_exit(b_21);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  k_21 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_21;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_21 = ATgetArgument(t, 0);
          {
            ATerm s_8 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(k_21);
            s_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_21);
            j_5 = t;
            t = SSLsetAnnotations(j_5, s_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_21;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      t = fetch_1_0(d_4, t);
    }
  t = d_94(t);
  return(t);
}
ATerm map_1_0 (ATerm g_77 (ATerm), ATerm t)
{
  ATerm a_22 (ATerm t)
  {
    ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
    x_21 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_21;
      }
    else
      {
        ATerm a_9 = NULL,d_9 = NULL,e_9 = NULL,m_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_21 = ATgetFirst((ATermList) t);
            z_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_21);
        a_9 = t;
        t = y_21;
        t = g_77(t);
        d_9 = t;
        t = z_21;
        t = a_22(t);
        e_9 = t;
        t = (ATerm) ATinsert(CheckATermList(e_9), d_9);
        m_5 = t;
        t = SSLsetAnnotations(m_5, a_9);
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_22 = ATgetFirst((ATermList) t);
      e_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_22 = NULL,j_22 = NULL;
        ATerm e_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_22)), not_null(j_22));
          return(t);
        }
        t = e_22;
        t = j_0(t);
        if(((i_22 != NULL) && (i_22 != t)))
          _fail(t);
        else
          i_22 = t;
        t = d_22;
        t = i_0(t);
        if(((j_22 != NULL) && (j_22 != t)))
          _fail(t);
        else
          j_22 = t;
        t = e_22;
        t = reverse_acc_2_0(i_0, e_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_6;
      t = j_0(t);
    }
  return(t);
}
ATerm t_4 (ATerm c_49, ATerm d_49, ATerm t)
{
  t = SSL_table_get(c_49, d_49);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,o_5 = NULL;
  p_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_22);
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_22);
  o_5 = t;
  t = SSLsetAnnotations(o_5, n_22);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_22), term_r_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      t = fetch_1_0(f_4, t);
    }
  t = term_u_12;
  t = echo_0_0(t);
  t = term_o_11;
  l_22 = t;
  t = term_p_11;
  m_22 = t;
  t = term_v_12;
  t = t_4(l_22, m_22, t);
  t = reverse_acc_2_0(_id, j_4, t);
  t = map_1_0(s_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  t_22 = t;
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_12 = ATgetFirst((ATermList) t);
                ATerm z_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_22;
          }
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        t = (ATerm) ATinsert(ATempty, t_22);
      }
    u_22 = t;
    t = term_m_8;
    v_22 = t;
    t = SSL_printnl(v_22, u_22);
    t = t_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  t = term_a_13;
  z_22 = t;
  t = term_i_6;
  a_23 = t;
  t = term_b_13;
  t = w_4(z_22, a_23, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  t = term_a_13;
  d_23 = t;
  t = term_i_6;
  e_23 = t;
  t = term_b_13;
  t = w_4(d_23, e_23, t);
  t = term_d_13;
  b_23 = t;
  t = term_i_6;
  c_23 = t;
  t = term_e_13;
  t = w_4(b_23, c_23, t);
  t = term_f_13;
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_4, y_4, c_5, t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      t = Option_3_0(e_5, f_5, g_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,q_5 = NULL;
  k_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_23 = ATgetFirst((ATermList) t);
      h_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_23);
  f_23 = t;
  t = g_23;
  t = s_56(t);
  i_23 = t;
  t = h_23;
  t = t_56(t);
  j_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), i_23);
  q_5 = t;
  t = SSLsetAnnotations(q_5, f_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,u_23 = NULL,v_23 = NULL,s_5 = NULL;
  p_23 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_13;
        t = g_96(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
      }
    t = p_23;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_23 = ATgetFirst((ATermList) t);
        s_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_23);
    q_23 = t;
    t = term_c_12;
    v_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_12, r_23);
    t = w_4(v_23, r_23, t);
    t = s_23;
    {
      ATerm f_24 (ATerm t)
      {
        ATerm p_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_23 = NULL;
                y_23 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_23;
                ;
                LocalPopChoice(u_13);
              }
            else
              {
                t = s_13;
                t = g_96(t);
                t = Cons_2_0(_id, f_24, t);
              }
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = p_13;
            {
              ATerm b_24 = NULL,c_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_24 = ATgetFirst((ATermList) t);
                  c_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_24), (ATerm) ATmakeAppl(sym_Undefined_1, b_24));
            }
          }
        return(t);
      }
      t = f_24(t);
      u_23 = t;
      t = (ATerm) ATinsert(CheckATermList(u_23), (ATerm) ATmakeAppl(sym_Program_1, r_23));
      s_5 = t;
      t = SSLsetAnnotations(s_5, q_23);
    }
  }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  if(match_string(t, "--help"))
    {
      t = r_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_24;
        }
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  t = term_q_12;
  s_24 = t;
  t = term_i_6;
  t_24 = t;
  t = term_v_13;
  t = w_4(s_24, t_24, t);
  t = term_w_13;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  m_24 = t;
  t = term_o_11;
  o_24 = t;
  t = term_p_11;
  p_24 = t;
  t = (ATerm) ATempty;
  q_24 = t;
  t = SSL_table_put(o_24, p_24, q_24);
  t = m_24;
  {
    ATerm h_5 (ATerm t)
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_96(t);
          ;
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm d_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_5, l_5, n_5, t);
                ;
                LocalPopChoice(e_14);
              }
            else
              {
                t = d_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_5, t);
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_25 = NULL;
          f_25 = t;
          {
            ATerm h_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_9 = NULL;
                t = f_25;
                {
                  ATerm j_14 = t;
                  int k_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_14);
                    }
                  else
                    {
                      t = j_14;
                      t = fetch_1_0(p_5, t);
                    }
                  t = f_25;
                  t = default_system_usage_0_0(t);
                  t = term_r_10;
                  s_9 = t;
                  t = SSL_exit(s_9);
                }
                ;
                LocalPopChoice(i_14);
              }
            else
              {
                t = h_14;
                {
                  ATerm w_9 = NULL;
                  t = term_a_13;
                  t = get_config_0_0(t);
                  t = f_25;
                  t = default_system_about_0_0(t);
                  t = term_r_10;
                  w_9 = t;
                  t = SSL_exit(w_9);
                }
              }
          }
          ;
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          {
            ATerm l_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
                ATerm r_5 (ATerm t)
                {
                  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,u_5 = NULL;
                  l_25 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_25);
                  j_25 = t;
                  t = k_25;
                  if(((k_24 != NULL) && (k_24 != t)))
                    _fail(t);
                  else
                    k_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_25);
                  u_5 = t;
                  t = SSLsetAnnotations(u_5, j_25);
                  return(t);
                }
                t = fetch_1_0(r_5, t);
                t = term_j_6;
                h_25 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_24)), term_n_14);
                i_25 = t;
                t = SSL_printnl(h_25, i_25);
                t = (ATerm) ATmakeAppl(sym__2, term_j_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_24)), term_n_14));
                t = default_system_usage_0_0(t);
                t = term_n_6;
                g_25 = t;
                t = SSL_exit(g_25);
                ;
                LocalPopChoice(m_14);
              }
            else
              {
                t = l_14;
              }
          }
        }
      l_24 = t;
      t = term_o_11;
      n_24 = t;
      t = SSL_table_destroy(n_24);
      t = l_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t = parse_options_1_0(f_94, t);
  q_25 = t;
  t = term_p_14;
  t_25 = t;
  t = SSL_table_create(t_25);
  t = term_p_14;
  r_25 = t;
  t = term_q_14;
  s_25 = t;
  t = SSL_table_put(r_25, s_25, q_25);
  t = q_25;
  t = h_94(t);
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_94, t);
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
              t = i_94(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_14);
            }
          else
            {
              t = t_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = if_verbose2_1_0(b_6, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm u_25 = NULL,z_25 = NULL;
  t = term_v_14;
  u_25 = t;
  t = term_i_6;
  z_25 = t;
  t = term_w_14;
  t = w_4(u_25, z_25, t);
  t = term_x_14;
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  a_26 = t;
  t = term_c_12;
  t = get_config_0_0(t);
  b_26 = t;
  t = term_j_6;
  c_26 = t;
  t = (ATerm) ATinsert(ATempty, b_26);
  d_26 = t;
  t = SSL_printnl(c_26, d_26);
  t = a_26;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_93(t);
        ;
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        {
          ATerm e_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_15);
            }
          else
            {
              t = e_15;
              {
                ATerm i_15 = t;
                int j_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_15);
                  }
                else
                  {
                    t = i_15;
                    {
                      ATerm k_15 = t;
                      int l_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_5, y_5, a_6, t);
                          ;
                          LocalPopChoice(l_15);
                        }
                      else
                        {
                          t = k_15;
                          {
                            ATerm m_15 = t;
                            int n_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(n_15);
                              }
                            else
                              {
                                t = m_15;
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
  ATerm w_5 (ATerm t)
  {
    ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
    f_26 = t;
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_26 != NULL) && (e_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_6, t);
          ;
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          t = term_s_15;
          e_26 = t;
        }
      t = not_null(e_26);
      t = ReadFromFile_0_0(t);
      g_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_26, g_26);
      t = apply_strategy_1_0(o_93, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_5, q_93, v_5, w_5, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL,z_5 = NULL;
  m_26 = t;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_26);
  h_26 = t;
  t = j_26;
  t = collect_om_2_0(e_6, f_6, t);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_26, (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, l_26))));
  z_5 = t;
  t = SSLsetAnnotations(z_5, h_26);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(n_26, o_26, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(h_6, p_26, q_26, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      if((r_26 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_6, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_r_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_a_10;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_a_9;
ATerm term_n_8;
ATerm term_f_8;
ATerm term_z_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATempty);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATempty);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Var_1, term_r_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_j_6);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_l_11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_j_6);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_j_6);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_j_6);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_j_6);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm h_4 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm a_25, ATerm z_24, ATerm);
ATerm i_4 (ATerm p_81 (ATerm), ATerm w_24, ATerm v_24, ATerm);
ATerm new_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm g_4 (ATerm y_17, ATerm z_17, ATerm);
ATerm foldr_3_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm collect_om_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm);
ATerm l_4 (ATerm a_38, ATerm b_38, ATerm);
ATerm m_4 (ATerm o_41, ATerm p_41, ATerm);
ATerm o_4 (ATerm i_90 (ATerm), ATerm w_402, ATerm s_41, ATerm);
ATerm n_4 (ATerm k_41, ATerm l_41, ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm g_8 (ATerm a_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_4 (ATerm q_41, ATerm);
ATerm q_4 (ATerm c_38, ATerm d_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_11 (ATerm g_9, ATerm);
ATerm m_11 (ATerm m_9, ATerm p_9, ATerm q_9, ATerm);
ATerm n_11 (ATerm j_10, ATerm l_10, ATerm o_10, ATerm);
ATerm r_4 (ATerm);
ATerm l_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm k_4 (ATerm p_32, ATerm q_32, ATerm);
ATerm debug_1_0 (ATerm g_90 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_91 (ATerm), ATerm);
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
ATerm x_4 (ATerm r_42, ATerm s_42, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_4 (ATerm p_47, ATerm q_47, ATerm o_47, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm y_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_4 (ATerm a_35, ATerm b_35, ATerm);
ATerm foldr_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm need_help_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_4 (ATerm g_49, ATerm h_49, ATerm);
ATerm f_4 (ATerm);
ATerm j_4 (ATerm);
ATerm t_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm z_4 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_56 (ATerm), ATerm x_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm l_96 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm parse_options_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm iowrap_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm i_6 (ATerm);
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
  t = term_j_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_k_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_6), b_0), term_l_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_o_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm h_4 (ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm a_25, ATerm z_24, ATerm t)
{
  t = t_81(t);
  {
    ATerm c_0 (ATerm t)
    {
      ATerm p_0 = NULL;
      p_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_25, p_0);
      t = s_81(t);
      return(t);
    }
    t = fetch_1_0(c_0, t);
    t = z_24;
  }
  return(t);
}
ATerm i_4 (ATerm p_81 (ATerm), ATerm w_24, ATerm v_24, ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm c_1 = NULL,d_1 = NULL,g_1 = NULL;
    c_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_24;
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
          ATerm p_6 = t;
          int q_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_1;
              {
                ATerm f_0 (ATerm t)
                {
                  t = v_24;
                  return(t);
                }
                t = h_4(p_81, f_0, d_1, g_1, t);
                t = s_1(t);
              }
              ;
              LocalPopChoice(q_6);
            }
          else
            {
              t = p_6;
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
  t = w_24;
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
  t = term_s_6;
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,k_1 = NULL;
  l_2 = t;
  t = SSL_explode_term(l_2);
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            n_2 = ATgetFirst((ATermList) u_6);
            {
              ATerm x_6 = (ATerm) ATgetNext((ATermList) u_6);
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
      ATerm y_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_6 = ATgetArgument(t, 1);
        if(((ATgetType(z_6) == AT_LIST) && !(ATisEmpty(z_6))))
          {
            ATerm a_7 = ATgetFirst((ATermList) z_6);
            ATerm d_7 = (ATerm) ATgetNext((ATermList) z_6);
            if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
              {
                k_1 = ATgetFirst((ATermList) d_7);
                {
                  ATerm h_7 = (ATerm) ATgetNext((ATermList) d_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, k_1), n_2));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_l_7, p_2);
  return(t);
}
ATerm g_4 (ATerm y_17, ATerm z_17, ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = z_17;
  t = map_1_0(q_0, t);
  g_2 = t;
  t = foldr_2_0(t_0, y_0, t);
  e_2 = t;
  t = g_2;
  t = map_1_0(z_0, t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_m_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, term_u_7), (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, e_2), (ATerm) ATmakeAppl(sym_Str_1, y_17))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, y_17, h_2), term_u_7), term_v_7));
  return(t);
}
ATerm foldr_3_0 (ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_2;
      t = q_83(t);
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
      t = s_83(t);
      x_2 = t;
      t = u_2;
      t = foldr_3_0(q_83, r_83, s_83, t);
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
      t = r_83(t);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 = NULL;
      t = u_82(t);
      e_3 = t;
      t = (ATerm) ATinsert(ATempty, e_3);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm n_1 = NULL,o_1 = NULL;
        ATerm b_1 (ATerm t)
        {
          t = collect_om_2_0(u_82, v_82, t);
          return(t);
        }
        o_1 = t;
        t = SSL_explode_term(o_1);
        if(match_cons(t, sym__2))
          {
            ATerm y_7 = ATgetArgument(t, 0);
            n_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_1;
        t = foldr_3_0(a_1, v_82, b_1, t);
      }
    }
  return(t);
}
ATerm l_4 (ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm f_3 = NULL;
  t = SSL_fputc(a_38, b_38);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_3);
  return(t);
}
ATerm m_4 (ATerm o_41, ATerm p_41, ATerm t)
{
  ATerm g_3 = NULL;
  t = SSL_write_term_to_stream_text(o_41, p_41);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_3);
  return(t);
}
ATerm o_4 (ATerm i_90 (ATerm), ATerm w_402, ATerm s_41, ATerm t)
{
  ATerm h_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_402, term_z_7);
  t = r_4(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, s_41);
  t = i_90(t);
  t = fclose_0_0(t);
  t = s_41;
  return(t);
}
ATerm n_4 (ATerm k_41, ATerm l_41, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_write_term_to_stream_baf(k_41, l_41);
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
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          m_2 = ATgetArgument(b_8, 0);
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
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          w_3 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(w_3, x_3, t);
  r_3 = t;
  t = term_f_8;
  s_3 = t;
  t = r_3;
  if(match_cons(t, sym_Stream_1))
    {
      v_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, r_3);
  t = l_4(s_3, v_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL,q_3 = NULL,t_3 = NULL,u_3 = NULL,b_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,v_6 = NULL,w_6 = NULL,v_0 = NULL,u_0 = NULL;
  p_3 = t;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_3);
  y_4 = t;
  t = a_5;
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
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
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        t = term_n_8;
        n_3 = t;
      }
    c_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_5, b_5);
    u_0 = t;
    t = SSLsetAnnotations(u_0, y_4);
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
        v_6 = ATgetArgument(t, 0);
        w_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm o_8 = t;
      int p_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 = NULL,a_2 = NULL,d_2 = NULL,f_2 = NULL,i_2 = NULL,w_0 = NULL;
          t = SSLgetAnnotations(b_4);
          w_1 = t;
          t = v_6;
          t = fetch_1_0(h_1, t);
          a_2 = t;
          t = w_6;
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
          LocalPopChoice(p_8);
        }
      else
        {
          t = o_8;
          {
            ATerm c_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(b_4);
            c_3 = t;
            t = w_6;
            if(match_cons(t, sym__2))
              {
                m_3 = ATgetArgument(t, 0);
                o_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_4(j_1, m_3, o_3, t);
            l_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_6, l_3);
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
ATerm apply_strategy_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  g_7 = t;
  t = dtime_0_0(t);
  t = g_7;
  t = k_93(t);
  f_7 = t;
  t = dtime_0_0(t);
  b_7 = t;
  t = f_7;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_7), (ATerm) ATmakeAppl(sym_Runtime_1, b_7)), e_7);
  return(t);
}
ATerm g_8 (ATerm a_8, ATerm t)
{
  t = SSL_fclose(a_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  e_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_8 = ATgetArgument(t, 0);
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_8);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            t = g_8(e_8, t);
          }
      }
    }
  else
    {
      t = g_8(e_8, t);
    }
  return(t);
}
ATerm p_4 (ATerm q_41, ATerm t)
{
  t = SSL_read_term_from_stream(q_41);
  return(t);
}
ATerm q_4 (ATerm c_38, ATerm d_38, ATerm t)
{
  ATerm h_8 = NULL;
  t = SSL_fopen(c_38, d_38);
  h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  t = SSL_stdin_stream();
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_8 = NULL;
  t = SSL_stdout_stream();
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_8 = NULL;
  t = SSL_stderr_stream();
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_8);
  return(t);
}
ATerm j_11 (ATerm g_9, ATerm t)
{
  ATerm j_9 = NULL;
  t = SSL_explode_term(g_9);
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_8 = ATgetArgument(t, 1);
        if(((ATgetType(u_8) == AT_LIST) && !(ATisEmpty(u_8))))
          {
            j_9 = ATgetFirst((ATermList) u_8);
            {
              ATerm v_8 = (ATerm) ATgetNext((ATermList) u_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm m_11 (ATerm m_9, ATerm p_9, ATerm q_9, ATerm t)
{
  ATerm y_9 = NULL,c_10 = NULL,d_10 = NULL,g_10 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(q_9);
  d_10 = t;
  t = m_9;
  if(match_cons(t, sym_Path_1))
    {
      g_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_10, p_9);
  t_1 = t;
  t = SSLsetAnnotations(t_1, d_10);
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(y_9, c_10, t);
  return(t);
}
ATerm n_11 (ATerm j_10, ATerm l_10, ATerm o_10, ATerm t)
{
  ATerm q_10 = NULL,u_10 = NULL,w_10 = NULL,e_11 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(o_10);
  w_10 = t;
  t = SSL_is_string(j_10);
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_11, l_10);
  y_1 = t;
  t = SSLsetAnnotations(y_1, w_10);
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(q_10, u_10, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym__2))
    {
      h_11 = ATgetArgument(t, 0);
      i_11 = ATgetArgument(t, 1);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_11(g_11, t);
            ;
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            {
              ATerm y_8 = t;
              int z_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_11(h_11, i_11, g_11, t);
                  ;
                  LocalPopChoice(z_8);
                }
              else
                {
                  t = y_8;
                  t = n_11(h_11, i_11, g_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_11(g_11, t);
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_11 = NULL,a_12 = NULL,b_12 = NULL;
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = NULL;
      c_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_12, term_h_9);
      t = r_4(t);
      ;
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      t = debug_1_0(l_1, t);
      _fail(t);
    }
  a_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(b_12, t);
  o_11 = t;
  t = a_12;
  t = fclose_0_0(t);
  t = o_11;
  return(t);
}
ATerm fetch_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm r_13 (ATerm t)
  {
    ATerm m_13 = NULL,o_13 = NULL,p_13 = NULL;
    m_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_13 = ATgetFirst((ATermList) t);
        p_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_5 = NULL,j_5 = NULL,b_3 = NULL;
          t = SSLgetAnnotations(m_13);
          e_5 = t;
          t = o_13;
          t = v_77(t);
          j_5 = t;
          t = (ATerm) ATinsert(CheckATermList(p_13), j_5);
          b_3 = t;
          t = SSLsetAnnotations(b_3, e_5);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = i_9;
          {
            ATerm h_6 = NULL,n_6 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(m_13);
            h_6 = t;
            t = p_13;
            t = r_13(t);
            n_6 = t;
            t = (ATerm) ATinsert(CheckATermList(n_6), o_13);
            d_3 = t;
            t = SSLsetAnnotations(d_3, h_6);
          }
        }
    }
    return(t);
  }
  t = r_13(t);
  return(t);
}
ATerm k_4 (ATerm p_32, ATerm q_32, ATerm t)
{
  t = SSL_strcat(p_32, q_32);
  return(t);
}
ATerm debug_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  u_13 = t;
  t = g_90(t);
  b_14 = t;
  t = term_k_6;
  c_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_13), b_14);
  d_14 = t;
  t = SSL_printnl(c_14, d_14);
  t = u_13;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm l_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = l_9;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_14 = NULL;
      p_14 = t;
      t = SSL_is_string(p_14);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            {
              ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
              a_15 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_15 = ATgetArgument(t, 0);
                  t = b_15;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_15 = ATgetArgument(t, 0);
                      t = b_15;
                      {
                        ATerm w_9 = t;
                        int z_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_9);
                          }
                        else
                          {
                            t = w_9;
                            t = debug_1_0(p_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_15 = NULL,h_15 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_15 = ATgetArgument(t, 0);
                          c_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_15;
                      t = eval_config_0_0(t);
                      g_15 = t;
                      t = c_15;
                      t = eval_config_0_0(t);
                      h_15 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_15, h_15);
                      t = k_4(g_15, h_15, t);
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
  ATerm p_15 = NULL,q_15 = NULL;
  p_15 = t;
  t = term_a_10;
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, p_15);
  t = u_4(q_15, p_15, t);
  {
    ATerm b_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL,x_15 = NULL;
        t = eval_config_0_0(t);
        u_15 = t;
        t = term_a_10;
        x_15 = t;
        t = SSL_table_put(x_15, p_15, u_15);
        t = u_15;
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = b_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_91 (ATerm), ATerm t)
{
  ATerm f_16 = NULL;
  f_16 = t;
  {
    ATerm f_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_16 = NULL;
        t = term_i_10;
        t = get_config_0_0(t);
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_16, term_k_10);
        t = geq_0_0(t);
        t = f_16;
        t = t_91(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = f_10;
        t = f_16;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm p_16 = NULL;
  p_16 = t;
  if(match_string(t, "-k"))
    {
      t = p_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_16;
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t_16 = t;
  t = SSL_string_to_int(t_16);
  u_16 = t;
  t = term_m_10;
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, u_16);
  t = x_4(v_16, u_16, t);
  t = t_16;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, r_1, u_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm x_16 = NULL;
  x_16 = t;
  if(match_string(t, "-S"))
    {
      t = x_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_16;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  t = term_i_10;
  y_16 = t;
  t = term_p_10;
  z_16 = t;
  t = term_r_10;
  t = x_4(y_16, z_16, t);
  t = term_s_10;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_t_10;
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
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  t = SSL_string_to_int(a_17);
  b_17 = t;
  t = term_i_10;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, b_17);
  t = x_4(c_17, b_17, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_17);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_v_10;
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
  ATerm d_17 = NULL,e_17 = NULL;
  t = term_x_10;
  d_17 = t;
  t = term_j_6;
  e_17 = t;
  t = term_y_10;
  t = x_4(d_17, e_17, t);
  t = term_z_10;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, x_1, z_1, t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      {
        ATerm d_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_2, c_2, k_2, t);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = d_11;
            t = Option_3_0(q_2, s_2, v_2, t);
          }
      }
    }
  return(t);
}
ATerm x_4 (ATerm r_42, ATerm s_42, ATerm t)
{
  ATerm f_17 = NULL;
  t = term_a_10;
  f_17 = t;
  t = SSL_table_put(f_17, r_42, s_42);
  t = (ATerm) ATmakeAppl(sym__3, term_a_10, r_42, s_42);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_17 = NULL,n_17 = NULL,o_17 = NULL;
      t = term_j_6;
      t = h_0(t);
      k_17 = t;
      t = term_k_11;
      n_17 = t;
      t = term_l_11;
      o_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_11, term_l_11, k_17);
      t = v_4(n_17, o_17, k_17, t);
      _fail(t);
    }
  else
    {
      ATerm v_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_17 = ATgetFirst((ATermList) t);
          j_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_17;
      t = d_0(t);
      t = term_j_6;
      t = g_0(t);
      v_17 = t;
      t = (ATerm) ATinsert(CheckATermList(j_17), v_17);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm x_17 = NULL;
  x_17 = t;
  if(match_string(t, "-o"))
    {
      t = x_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_17;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm d_18 = NULL,f_18 = NULL;
  d_18 = t;
  t = term_p_11;
  f_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, d_18);
  t = x_4(f_18, d_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_18);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, z_2, a_3, t);
  return(t);
}
ATerm v_4 (ATerm p_47, ATerm q_47, ATerm o_47, ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL,l_18 = NULL;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_47, q_47);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_11 = ATgetArgument(t, 0);
            ATerm u_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_47, q_47);
        t = u_4(p_47, q_47, t);
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATempty;
      }
    k_18 = t;
    t = (ATerm) ATinsert(CheckATermList(k_18), o_47);
    l_18 = t;
    t = SSL_table_put(p_47, q_47, l_18);
    t = i_18;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
      t = term_j_6;
      t = m_0(t);
      w_18 = t;
      t = term_k_11;
      x_18 = t;
      t = term_l_11;
      y_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_11, term_l_11, w_18);
      t = v_4(x_18, y_18, w_18, t);
      _fail(t);
    }
  else
    {
      ATerm i_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_18 = ATgetFirst((ATermList) t);
          t_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_18 = ATgetFirst((ATermList) t);
          v_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_18;
      t = k_0(t);
      t = u_18;
      t = l_0(t);
      i_19 = t;
      t = (ATerm) ATinsert(CheckATermList(v_18), i_19);
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  if(match_string(t, "-i"))
    {
      t = k_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_19;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  l_19 = t;
  t = term_v_11;
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, l_19);
  t = x_4(m_19, l_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_19);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, y_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_6;
  t = whoami_0_0(t);
  n_19 = t;
  t = term_k_6;
  p_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_11), n_19);
  q_19 = t;
  t = SSL_printnl(p_19, q_19);
  t = term_o_6;
  o_19 = t;
  t = SSL_exit(o_19);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_4 (ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm z_11 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_35, b_35);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = z_11;
      t = SSL_addr(a_35, b_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_19;
      t = o_83(t);
    }
  else
    {
      ATerm x_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_19 = ATgetFirst((ATermList) t);
          u_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_19;
      t = foldr_2_0(o_83, p_83, t);
      x_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_19, x_19);
      t = p_83(t);
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
  t = term_p_10;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      t_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(s_7, t_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_20 = NULL,n_7 = NULL,o_7 = NULL;
  t = times_0_0(t);
  o_7 = t;
  t = SSL_explode_term(o_7);
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7;
  t = foldr_2_0(z_3, a_4, t);
  a_20 = t;
  t = SSL_TicksToSeconds(a_20);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_20;
        if((o_20 != t))
          {
            _fail(t);
          }
        t = n_20;
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATmakeAppl(sym__2, o_20, p_20);
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_20, p_20);
              ;
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              t = SSL_gtr(o_20, p_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_20, p_20);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL;
        t = term_i_10;
        t = get_config_0_0(t);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_20, term_o_6);
        t = geq_0_0(t);
        t = t_20;
        t = s_91(t);
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = t_20;
      }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,a_21 = NULL,b_21 = NULL;
  t = run_time_0_0(t);
  x_20 = t;
  t = term_j_6;
  t = whoami_0_0(t);
  y_20 = t;
  t = term_k_6;
  a_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_12), x_20), term_l_12), y_20);
  b_21 = t;
  t = SSL_printnl(a_21, b_21);
  t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_12), x_20), term_l_12), y_20));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_21 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_10;
  c_21 = t;
  t = SSL_exit(c_21);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  l_21 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_21;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_21 = ATgetArgument(t, 0);
          {
            ATerm t_8 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(l_21);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_21);
            k_5 = t;
            t = SSLsetAnnotations(k_5, t_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_21;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = fetch_1_0(d_4, t);
    }
  t = i_94(t);
  return(t);
}
ATerm map_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm b_22 (ATerm t)
  {
    ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
    y_21 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_21;
      }
    else
      {
        ATerm b_9 = NULL,e_9 = NULL,f_9 = NULL,n_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_21 = ATgetFirst((ATermList) t);
            a_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_21);
        b_9 = t;
        t = z_21;
        t = l_77(t);
        e_9 = t;
        t = a_22;
        t = b_22(t);
        f_9 = t;
        t = (ATerm) ATinsert(CheckATermList(f_9), e_9);
        n_5 = t;
        t = SSLsetAnnotations(n_5, b_9);
      }
    return(t);
  }
  t = b_22(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_22 = ATgetFirst((ATermList) t);
      f_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_22 = NULL,k_22 = NULL;
        ATerm e_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_22)), not_null(k_22));
          return(t);
        }
        t = f_22;
        t = j_0(t);
        if(((j_22 != NULL) && (j_22 != t)))
          _fail(t);
        else
          j_22 = t;
        t = e_22;
        t = i_0(t);
        if(((k_22 != NULL) && (k_22 != t)))
          _fail(t);
        else
          k_22 = t;
        t = f_22;
        t = reverse_acc_2_0(i_0, e_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_6;
      t = j_0(t);
    }
  return(t);
}
ATerm u_4 (ATerm g_49, ATerm h_49, ATerm t)
{
  t = SSL_table_get(g_49, h_49);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,p_5 = NULL;
  q_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_22);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_22);
  p_5 = t;
  t = SSLsetAnnotations(p_5, o_22);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_22), term_q_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      t = fetch_1_0(f_4, t);
    }
  t = term_t_12;
  t = echo_0_0(t);
  t = term_k_11;
  m_22 = t;
  t = term_l_11;
  n_22 = t;
  t = term_u_12;
  t = u_4(m_22, n_22, t);
  t = reverse_acc_2_0(_id, j_4, t);
  t = map_1_0(t_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_12 = ATgetFirst((ATermList) t);
                ATerm y_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_22;
          }
        ;
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = (ATerm) ATinsert(ATempty, u_22);
      }
    v_22 = t;
    t = term_n_8;
    w_22 = t;
    t = SSL_printnl(w_22, v_22);
    t = u_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  t = term_z_12;
  a_23 = t;
  t = term_j_6;
  b_23 = t;
  t = term_a_13;
  t = x_4(a_23, b_23, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  t = term_z_12;
  e_23 = t;
  t = term_j_6;
  f_23 = t;
  t = term_a_13;
  t = x_4(e_23, f_23, t);
  t = term_c_13;
  c_23 = t;
  t = term_j_6;
  d_23 = t;
  t = term_d_13;
  t = x_4(c_23, d_23, t);
  t = term_e_13;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, z_4, d_5, t);
      ;
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = Option_3_0(f_5, g_5, h_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_56 (ATerm), ATerm x_56 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,r_5 = NULL;
  l_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_23 = ATgetFirst((ATermList) t);
      i_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_23);
  g_23 = t;
  t = h_23;
  t = w_56(t);
  j_23 = t;
  t = i_23;
  t = x_56(t);
  k_23 = t;
  t = (ATerm) ATinsert(CheckATermList(k_23), j_23);
  r_5 = t;
  t = SSLsetAnnotations(r_5, g_23);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,v_23 = NULL,w_23 = NULL,t_5 = NULL;
  q_23 = t;
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_13;
        t = l_96(t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
      }
    t = q_23;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_23 = ATgetFirst((ATermList) t);
        t_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_23);
    r_23 = t;
    t = term_y_11;
    w_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_11, s_23);
    t = x_4(w_23, s_23, t);
    t = t_23;
    {
      ATerm g_24 (ATerm t)
      {
        ATerm l_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_23 = NULL;
                z_23 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_23;
                ;
                LocalPopChoice(s_13);
              }
            else
              {
                t = q_13;
                t = l_96(t);
                t = Cons_2_0(_id, g_24, t);
              }
            ;
            LocalPopChoice(n_13);
          }
        else
          {
            t = l_13;
            {
              ATerm c_24 = NULL,d_24 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_24 = ATgetFirst((ATermList) t);
                  d_24 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_24), (ATerm) ATmakeAppl(sym_Undefined_1, c_24));
            }
          }
        return(t);
      }
      t = g_24(t);
      v_23 = t;
      t = (ATerm) ATinsert(CheckATermList(v_23), (ATerm) ATmakeAppl(sym_Program_1, s_23));
      t_5 = t;
      t = SSLsetAnnotations(t_5, r_23);
    }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  if(match_string(t, "--help"))
    {
      t = s_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_24;
        }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  t = term_p_12;
  t_24 = t;
  t = term_j_6;
  u_24 = t;
  t = term_t_13;
  t = x_4(t_24, u_24, t);
  t = term_v_13;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL;
  n_24 = t;
  t = term_k_11;
  p_24 = t;
  t = term_l_11;
  q_24 = t;
  t = (ATerm) ATempty;
  r_24 = t;
  t = SSL_table_put(p_24, q_24, r_24);
  t = n_24;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_96(t);
          ;
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_5, m_5, o_5, t);
                ;
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_5, t);
    {
      ATerm e_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_25 = NULL;
          g_25 = t;
          {
            ATerm g_14 = t;
            int h_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_9 = NULL;
                t = g_25;
                {
                  ATerm i_14 = t;
                  int j_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_14);
                    }
                  else
                    {
                      t = i_14;
                      t = fetch_1_0(q_5, t);
                    }
                  t = g_25;
                  t = default_system_usage_0_0(t);
                  t = term_p_10;
                  t_9 = t;
                  t = SSL_exit(t_9);
                }
                ;
                LocalPopChoice(h_14);
              }
            else
              {
                t = g_14;
                {
                  ATerm x_9 = NULL;
                  t = term_z_12;
                  t = get_config_0_0(t);
                  t = g_25;
                  t = default_system_about_0_0(t);
                  t = term_p_10;
                  x_9 = t;
                  t = SSL_exit(x_9);
                }
              }
          }
          ;
          LocalPopChoice(f_14);
        }
      else
        {
          t = e_14;
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
                ATerm s_5 (ATerm t)
                {
                  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,v_5 = NULL;
                  m_25 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_25);
                  k_25 = t;
                  t = l_25;
                  if(((l_24 != NULL) && (l_24 != t)))
                    _fail(t);
                  else
                    l_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_25);
                  v_5 = t;
                  t = SSLsetAnnotations(v_5, k_25);
                  return(t);
                }
                t = fetch_1_0(s_5, t);
                t = term_k_6;
                i_25 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_24)), term_m_14);
                j_25 = t;
                t = SSL_printnl(i_25, j_25);
                t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_24)), term_m_14));
                t = default_system_usage_0_0(t);
                t = term_o_6;
                h_25 = t;
                t = SSL_exit(h_25);
                ;
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
              }
          }
        }
      m_24 = t;
      t = term_k_11;
      o_24 = t;
      t = SSL_table_destroy(o_24);
      t = m_24;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  t = parse_options_1_0(k_94, t);
  r_25 = t;
  t = term_n_14;
  u_25 = t;
  t = SSL_table_create(u_25);
  t = term_n_14;
  s_25 = t;
  t = term_o_14;
  t_25 = t;
  t = SSL_table_put(s_25, t_25, r_25);
  t = r_25;
  t = m_94(t);
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_94, t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_94(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = if_verbose2_1_0(c_6, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm v_25 = NULL,a_26 = NULL;
  t = term_u_14;
  v_25 = t;
  t = term_j_6;
  a_26 = t;
  t = term_v_14;
  t = x_4(v_25, a_26, t);
  t = term_w_14;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  b_26 = t;
  t = term_y_11;
  t = get_config_0_0(t);
  c_26 = t;
  t = term_k_6;
  d_26 = t;
  t = (ATerm) ATinsert(ATempty, c_26);
  e_26 = t;
  t = SSL_printnl(d_26, e_26);
  t = b_26;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_93(t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm d_15 = t;
          int e_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_15);
            }
          else
            {
              t = d_15;
              {
                ATerm f_15 = t;
                int i_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_15);
                  }
                else
                  {
                    t = f_15;
                    {
                      ATerm j_15 = t;
                      int k_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_5, z_5, b_6, t);
                          ;
                          LocalPopChoice(k_15);
                        }
                      else
                        {
                          t = j_15;
                          {
                            ATerm l_15 = t;
                            int m_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_15);
                              }
                            else
                              {
                                t = l_15;
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
  ATerm x_5 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
    g_26 = t;
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_26 != NULL) && (f_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_6, t);
          ;
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          t = term_r_15;
          f_26 = t;
        }
      t = not_null(f_26);
      t = ReadFromFile_0_0(t);
      h_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_26, h_26);
      t = apply_strategy_1_0(t_93, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_5, v_93, w_5, x_5, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL,m_26 = NULL,n_26 = NULL,a_6 = NULL;
  n_26 = t;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_26);
  i_26 = t;
  t = k_26;
  t = collect_om_2_0(f_6, g_6, t);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_26, (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, m_26))));
  a_6 = t;
  t = SSLsetAnnotations(a_6, i_26);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      o_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(o_26, p_26, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(i_6, q_26, r_26, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm s_26 = NULL;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      if((s_26 != ATgetArgument(t, 1)))
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
  t = iowrap_3_0(e_6, _fail, default_usage_0_0, t);
  return(t);
}

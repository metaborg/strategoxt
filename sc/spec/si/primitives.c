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
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
void init_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Var_1, term_q_7);
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
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_h_6);
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
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_h_6);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_h_6);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_h_6);
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
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_h_6);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm h_4 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm o_36, ATerm n_36, ATerm);
ATerm i_4 (ATerm x_92 (ATerm), ATerm k_36, ATerm j_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm g_4 (ATerm m_29, ATerm n_29, ATerm);
ATerm foldr_3_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm);
ATerm a_1 (ATerm);
ATerm collect_om_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm);
ATerm l_4 (ATerm j_49, ATerm k_49, ATerm);
ATerm m_4 (ATerm x_52, ATerm y_52, ATerm);
ATerm o_4 (ATerm k_101 (ATerm), ATerm f_427, ATerm b_53, ATerm);
ATerm n_4 (ATerm t_52, ATerm u_52, ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm f_8 (ATerm z_7, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_4 (ATerm z_52, ATerm);
ATerm q_4 (ATerm l_49, ATerm m_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_11 (ATerm f_9, ATerm);
ATerm l_11 (ATerm l_9, ATerm o_9, ATerm p_9, ATerm);
ATerm m_11 (ATerm i_10, ATerm k_10, ATerm n_10, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_89 (ATerm), ATerm);
ATerm k_4 (ATerm z_43, ATerm a_44, ATerm);
ATerm debug_1_0 (ATerm i_101 (ATerm), ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_102 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm v_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm k_2 (ATerm);
ATerm s_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm w_4 (ATerm a_54, ATerm b_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_4 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_4 (ATerm j_46, ATerm k_46, ATerm);
ATerm foldr_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm t_4 (ATerm p_60, ATerm q_60, ATerm);
ATerm f_4 (ATerm);
ATerm j_4 (ATerm);
ATerm s_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm y_4 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm h_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_107 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm parse_options_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm iowrap_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,l_0 = NULL,n_0 = NULL,o_0 = NULL;
  c_0 = t;
  t = term_h_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_i_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_6), e_0), term_j_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_m_6;
  l_0 = t;
  t = SSL_exit(l_0);
  t = c_0;
  return(t);
}
ATerm h_4 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  t = b_93(t);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm p_0 = NULL;
      p_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_36), p_0);
      t = a_93(t);
      return(t);
    }
    t = fetch_1_0(m_0, t);
    t = not_null(n_36);
  }
  return(t);
}
ATerm i_4 (ATerm x_92 (ATerm), ATerm k_36, ATerm j_36, ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm c_1 = NULL,d_1 = NULL,g_1 = NULL;
    c_1 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(j_36);
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
                ATerm q_0 (ATerm t)
                {
                  t = not_null(j_36);
                  return(t);
                }
                t = h_4(x_92, q_0, not_null(d_1), not_null(g_1), t);
                t = s_1(t);
              }
              ;
              LocalPopChoice(p_6);
            }
          else
            {
              t = o_6;
              {
                ATerm y_0 = NULL,f_1 = NULL,k_0 = NULL;
                t = SSLgetAnnotations(c_1);
                y_0 = t;
                t = g_1;
                t = s_1(t);
                f_1 = t;
                t = (ATerm) ATinsert(CheckATermList(f_1), d_1);
                k_0 = t;
                t = SSLsetAnnotations(k_0, y_0);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(k_36);
  t = s_1(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm j_2 = NULL;
  t = new_0_0(t);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_2);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_r_6;
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,l_1 = NULL;
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
                l_1 = ATgetFirst((ATermList) c_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, l_1), n_2));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_k_7, p_2);
  return(t);
}
ATerm g_4 (ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL,h_2 = NULL;
  t = n_29;
  t = map_1_0(r_0, t);
  g_2 = t;
  t = foldr_2_0(s_0, x_0, t);
  e_2 = t;
  t = g_2;
  t = map_1_0(z_0, t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_l_7, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, term_r_7), (ATerm) ATmakeAppl(sym_Op_2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, e_2), (ATerm) ATmakeAppl(sym_Str_1, m_29))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, m_29, h_2), term_r_7), term_u_7));
  return(t);
}
ATerm foldr_3_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,u_2 = NULL;
  r_2 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_2;
      t = y_94(t);
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
      t = a_95(t);
      x_2 = t;
      t = u_2;
      t = foldr_3_0(y_94, z_94, a_95, t);
      y_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_2, y_2);
      t = z_94(t);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 = NULL;
      t = c_94(t);
      e_3 = t;
      t = (ATerm) ATinsert(ATempty, e_3);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm o_1 = NULL,p_1 = NULL;
        ATerm b_1 (ATerm t)
        {
          t = collect_om_2_0(c_94, d_94, t);
          return(t);
        }
        if(((p_1 != NULL) && (p_1 != t)))
          _fail(t);
        else
          p_1 = t;
        t = SSL_explode_term(not_null(p_1));
        if(match_cons(t, sym__2))
          {
            ATerm x_7 = ATgetArgument(t, 0);
            if(((o_1 != NULL) && (o_1 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              o_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(o_1);
        t = foldr_3_0(a_1, d_94, b_1, t);
      }
    }
  return(t);
}
ATerm l_4 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm f_3 = NULL;
  t = SSL_fputc(j_49, k_49);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_3);
  return(t);
}
ATerm m_4 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm g_3 = NULL;
  t = SSL_write_term_to_stream_text(x_52, y_52);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_3);
  return(t);
}
ATerm o_4 (ATerm k_101 (ATerm), ATerm f_427, ATerm b_53, ATerm t)
{
  ATerm h_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_427, term_y_7);
  t = open_stream_0_0(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, b_53);
  t = k_101(t);
  t = fclose_0_0(t);
  t = b_53;
  return(t);
}
ATerm n_4 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_52, u_52);
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
  ATerm o_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          o_2 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(o_2, q_2, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm s_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,z_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          x_3 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(x_3, z_3, t);
  s_3 = t;
  t = term_e_8;
  v_3 = t;
  t = s_3;
  if(match_cons(t, sym_Stream_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, s_3);
  t = l_4(v_3, w_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_3 = NULL,p_3 = NULL,q_3 = NULL,t_3 = NULL,u_3 = NULL,b_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,u_6 = NULL,v_6 = NULL,u_0 = NULL,t_0 = NULL;
  if(((p_3 != NULL) && (p_3 != t)))
    _fail(t);
  else
    p_3 = t;
  if(match_cons(t, sym__2))
    {
      if(((z_4 != NULL) && (z_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_4 = ATgetArgument(t, 0);
      if(((a_5 != NULL) && (a_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(p_3));
  if(((x_4 != NULL) && (x_4 != t)))
    _fail(t);
  else
    x_4 = t;
  t = not_null(z_4);
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
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
        t = fetch_1_0(e_1, t);
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
        t = term_m_8;
        if(((n_3 != NULL) && (n_3 != t)))
          _fail(t);
        else
          n_3 = t;
      }
    if(((b_5 != NULL) && (b_5 != t)))
      _fail(t);
    else
      b_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_5), not_null(a_5));
    if(((t_0 != NULL) && (t_0 != t)))
      _fail(t);
    else
      t_0 = t;
    t = SSLsetAnnotations(not_null(t_0), not_null(x_4));
    t = not_null(p_3);
    if(match_cons(t, sym__2))
      {
        if(((t_3 != NULL) && (t_3 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          t_3 = ATgetArgument(t, 0);
        if(((u_3 != NULL) && (u_3 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          u_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(p_3));
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_3), (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(u_3)));
    if(((u_0 != NULL) && (u_0 != t)))
      _fail(t);
    else
      u_0 = t;
    t = SSLsetAnnotations(not_null(u_0), not_null(q_3));
    if(((b_4 != NULL) && (b_4 != t)))
      _fail(t);
    else
      b_4 = t;
    if(match_cons(t, sym__2))
      {
        if(((u_6 != NULL) && (u_6 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_6 = ATgetArgument(t, 0);
        if(((v_6 != NULL) && (v_6 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          v_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 = NULL,d_2 = NULL,f_2 = NULL,i_2 = NULL,m_2 = NULL,v_0 = NULL;
          t = SSLgetAnnotations(not_null(b_4));
          x_1 = t;
          t = not_null(u_6);
          t = fetch_1_0(h_1, t);
          d_2 = t;
          t = not_null(v_6);
          if(match_cons(t, sym__2))
            {
              i_2 = ATgetArgument(t, 0);
              m_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(i_1, i_2, m_2, t);
          f_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_2, f_2);
          v_0 = t;
          t = SSLsetAnnotations(v_0, x_1);
          ;
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm j_3 = NULL,m_3 = NULL,o_3 = NULL,r_3 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(not_null(b_4));
            j_3 = t;
            t = not_null(v_6);
            if(match_cons(t, sym__2))
              {
                o_3 = ATgetArgument(t, 0);
                r_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_4(j_1, o_3, r_3, t);
            m_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), m_3);
            w_0 = t;
            t = SSLsetAnnotations(w_0, j_3);
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
ATerm apply_strategy_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
  f_7 = t;
  t = dtime_0_0(t);
  t = f_7;
  t = m_104(t);
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
ATerm p_4 (ATerm z_52, ATerm t)
{
  t = SSL_read_term_from_stream(z_52);
  return(t);
}
ATerm q_4 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm g_8 = NULL;
  t = SSL_fopen(l_49, m_49);
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
        ATerm s_8 = ATgetArgument(t, 1);
        if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
          {
            i_9 = ATgetFirst((ATermList) s_8);
            {
              ATerm u_8 = (ATerm) ATgetNext((ATermList) s_8);
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
  ATerm p_10 = NULL,t_10 = NULL,v_10 = NULL,d_11 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(n_10);
  v_10 = t;
  t = SSL_is_string(i_10);
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_11, k_10);
  u_1 = t;
  t = SSLsetAnnotations(u_1, v_10);
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
              int a_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_11(g_11, h_11, f_11, t);
                  ;
                  LocalPopChoice(a_9);
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
ATerm k_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_11 = NULL,z_11 = NULL,a_12 = NULL;
  ATerm d_9 = t;
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
      t = d_9;
      t = debug_1_0(k_1, t);
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
ATerm fetch_1_0 (ATerm d_89 (ATerm), ATerm t)
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
          ATerm g_5 = NULL,k_5 = NULL,c_2 = NULL;
          t = SSLgetAnnotations(l_13);
          g_5 = t;
          t = n_13;
          t = d_89(t);
          k_5 = t;
          t = (ATerm) ATinsert(CheckATermList(o_13), k_5);
          c_2 = t;
          t = SSLsetAnnotations(c_2, g_5);
          ;
          LocalPopChoice(m_9);
        }
      else
        {
          t = k_9;
          {
            ATerm k_6 = NULL,n_6 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(l_13);
            k_6 = t;
            t = o_13;
            t = q_13(t);
            n_6 = t;
            t = (ATerm) ATinsert(CheckATermList(n_6), n_13);
            b_3 = t;
            t = SSLsetAnnotations(b_3, k_6);
          }
        }
    }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm k_4 (ATerm z_43, ATerm a_44, ATerm t)
{
  t = SSL_strcat(z_43, a_44);
  return(t);
}
ATerm debug_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL;
  t_13 = t;
  t = i_101(t);
  a_14 = t;
  t = term_i_6;
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
ATerm n_1 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_9 = t;
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
      t = s_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_1, t);
            ;
            LocalPopChoice(w_9);
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
                            t = debug_1_0(n_1, t);
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
ATerm if_verbose2_1_0 (ATerm v_102 (ATerm), ATerm t)
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
        t = v_102(t);
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
ATerm v_1 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, r_1, v_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
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
ATerm y_1 (ATerm t)
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
ATerm a_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_2 (ATerm t)
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
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  t = term_y_10;
  c_17 = t;
  t = term_h_6;
  d_17 = t;
  t = term_z_10;
  t = w_4(c_17, d_17, t);
  t = term_a_11;
  return(t);
}
ATerm w_2 (ATerm t)
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
      t = Option_3_0(w_1, y_1, z_1, t);
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
            t = ArgOption_3_0(a_2, b_2, k_2, t);
            ;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = Option_3_0(s_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm e_17 = NULL;
  t = term_d_10;
  e_17 = t;
  t = SSL_table_put(e_17, a_54, b_54);
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, a_54, b_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL;
      t = term_h_6;
      t = d_0(t);
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
      t = a_0(t);
      t = term_h_6;
      t = b_0(t);
      u_17 = t;
      t = (ATerm) ATinsert(CheckATermList(i_17), u_17);
    }
  return(t);
}
ATerm z_2 (ATerm t)
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
ATerm a_3 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  t = term_q_11;
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, z_17);
  t = w_4(a_18, z_17, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_17);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_2, a_3, c_3, t);
  return(t);
}
ATerm u_4 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
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
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = t_4(y_58, z_58, t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATempty;
      }
    e_18 = t;
    t = (ATerm) ATinsert(CheckATermList(e_18), x_58);
    f_18 = t;
    t = SSL_table_put(y_58, z_58, f_18);
    t = d_18;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_18 = NULL,s_18 = NULL,t_18 = NULL;
      t = term_h_6;
      t = j_0(t);
      q_18 = t;
      t = term_o_11;
      s_18 = t;
      t = term_p_11;
      t_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_11, term_p_11, q_18);
      t = u_4(s_18, t_18, q_18, t);
      _fail(t);
    }
  else
    {
      ATerm c_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_18 = ATgetFirst((ATermList) t);
          n_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_18;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_18 = ATgetFirst((ATermList) t);
          p_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_18;
      t = h_0(t);
      t = o_18;
      t = i_0(t);
      c_19 = t;
      t = (ATerm) ATinsert(CheckATermList(p_18), c_19);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm e_19 = NULL;
  e_19 = t;
  if(match_string(t, "-i"))
    {
      t = e_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_19;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  t = term_w_11;
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, f_19);
  t = w_4(g_19, f_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_19);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, k_3, l_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_6;
  t = whoami_0_0(t);
  h_19 = t;
  t = term_i_6;
  j_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_11), h_19);
  k_19 = t;
  t = SSL_printnl(j_19, k_19);
  t = term_m_6;
  i_19 = t;
  t = SSL_exit(i_19);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_4 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_46, k_46);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = SSL_addr(j_46, k_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_19;
      t = w_94(t);
    }
  else
    {
      ATerm r_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_19 = ATgetFirst((ATermList) t);
          o_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_19;
      t = foldr_2_0(w_94, x_94, t);
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_19, r_19);
      t = x_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_r_10;
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
  t = r_4(s_7, t_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_19 = NULL,n_7 = NULL,o_7 = NULL;
  t = times_0_0(t);
  o_7 = t;
  t = SSL_explode_term(o_7);
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7;
  t = foldr_2_0(y_3, a_4, t);
  u_19 = t;
  t = SSL_TicksToSeconds(u_19);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_20;
        if((g_20 != t))
          {
            _fail(t);
          }
        t = f_20;
        ;
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = (ATerm) ATmakeAppl(sym__2, g_20, h_20);
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_20, h_20);
              ;
              LocalPopChoice(j_12);
            }
          else
            {
              t = i_12;
              t = SSL_gtr(g_20, h_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_20, h_20);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm l_20 = NULL;
  l_20 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 = NULL;
        t = term_l_10;
        t = get_config_0_0(t);
        n_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_20, term_m_6);
        t = geq_0_0(t);
        t = l_20;
        t = u_102(t);
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = l_20;
      }
  }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL;
  t = run_time_0_0(t);
  p_20 = t;
  t = term_h_6;
  t = whoami_0_0(t);
  q_20 = t;
  t = term_i_6;
  s_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_12), p_20), term_m_12), q_20);
  t_20 = t;
  t = SSL_printnl(s_20, t_20);
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_12), p_20), term_m_12), q_20));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_10;
  u_20 = t;
  t = SSL_exit(u_20);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  d_21 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_21;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_21 = ATgetArgument(t, 0);
          {
            ATerm t_8 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(d_21);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_21);
            f_5 = t;
            t = SSLsetAnnotations(f_5, t_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_21;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm t)
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
  t = k_105(t);
  return(t);
}
ATerm map_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  ATerm t_21 (ATerm t)
  {
    ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
    q_21 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_21;
      }
    else
      {
        ATerm b_9 = NULL,e_9 = NULL,g_9 = NULL,l_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_21 = ATgetFirst((ATermList) t);
            s_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_21);
        b_9 = t;
        t = r_21;
        t = t_88(t);
        e_9 = t;
        t = s_21;
        t = t_21(t);
        g_9 = t;
        t = (ATerm) ATinsert(CheckATermList(g_9), e_9);
        l_5 = t;
        t = SSLsetAnnotations(l_5, b_9);
      }
    return(t);
  }
  t = t_21(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_21 = ATgetFirst((ATermList) t);
      x_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_22 = NULL,c_22 = NULL;
        ATerm e_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_22)), not_null(c_22));
          return(t);
        }
        t = not_null(x_21);
        t = g_0(t);
        if(((b_22 != NULL) && (b_22 != t)))
          _fail(t);
        else
          b_22 = t;
        t = not_null(w_21);
        t = f_0(t);
        if(((c_22 != NULL) && (c_22 != t)))
          _fail(t);
        else
          c_22 = t;
        t = not_null(x_21);
        t = reverse_acc_2_0(f_0, e_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_6;
      t = g_0(t);
    }
  return(t);
}
ATerm t_4 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_table_get(p_60, q_60);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,n_5 = NULL;
  i_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_22);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_22);
  n_5 = t;
  t = SSLsetAnnotations(n_5, g_22);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_22), term_r_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
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
  e_22 = t;
  t = term_p_11;
  f_22 = t;
  t = term_v_12;
  t = t_4(e_22, f_22, t);
  t = reverse_acc_2_0(_id, j_4, t);
  t = map_1_0(s_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  m_22 = t;
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_22;
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
            t = m_22;
          }
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        t = (ATerm) ATinsert(ATempty, m_22);
      }
    n_22 = t;
    t = term_m_8;
    o_22 = t;
    t = SSL_printnl(o_22, n_22);
    t = m_22;
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
  ATerm s_22 = NULL,t_22 = NULL;
  t = term_a_13;
  s_22 = t;
  t = term_h_6;
  t_22 = t;
  t = term_b_13;
  t = w_4(s_22, t_22, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  t = term_a_13;
  w_22 = t;
  t = term_h_6;
  x_22 = t;
  t = term_b_13;
  t = w_4(w_22, x_22, t);
  t = term_d_13;
  u_22 = t;
  t = term_h_6;
  v_22 = t;
  t = term_e_13;
  t = w_4(u_22, v_22, t);
  t = term_f_13;
  return(t);
}
ATerm h_5 (ATerm t)
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
      t = Option_3_0(d_5, e_5, h_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,p_5 = NULL;
  d_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_22 = ATgetFirst((ATermList) t);
      a_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_23);
  y_22 = t;
  t = z_22;
  t = f_68(t);
  b_23 = t;
  t = a_23;
  t = g_68(t);
  c_23 = t;
  t = (ATerm) ATinsert(CheckATermList(c_23), b_23);
  p_5 = t;
  t = SSLsetAnnotations(p_5, y_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,n_23 = NULL,o_23 = NULL,r_5 = NULL;
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_13;
        t = n_107(t);
        ;
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
      }
    t = not_null(i_23);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_23 != NULL) && (k_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_23 = ATgetFirst((ATermList) t);
        if(((l_23 != NULL) && (l_23 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(i_23));
    if(((j_23 != NULL) && (j_23 != t)))
      _fail(t);
    else
      j_23 = t;
    t = term_c_12;
    if(((o_23 != NULL) && (o_23 != t)))
      _fail(t);
    else
      o_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_12, not_null(k_23));
    t = w_4(not_null(o_23), not_null(k_23), t);
    t = not_null(l_23);
    {
      ATerm y_23 (ATerm t)
      {
        ATerm p_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_23 = NULL;
                r_23 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_23;
                ;
                LocalPopChoice(u_13);
              }
            else
              {
                t = s_13;
                t = n_107(t);
                t = Cons_2_0(_id, y_23, t);
              }
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = p_13;
            {
              ATerm u_23 = NULL,v_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_23 = ATgetFirst((ATermList) t);
                  v_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_23), (ATerm) ATmakeAppl(sym_Undefined_1, u_23));
            }
          }
        return(t);
      }
      t = y_23(t);
      if(((n_23 != NULL) && (n_23 != t)))
        _fail(t);
      else
        n_23 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(n_23)), (ATerm) ATmakeAppl(sym_Program_1, not_null(k_23)));
      if(((r_5 != NULL) && (r_5 != t)))
        _fail(t);
      else
        r_5 = t;
      t = SSLsetAnnotations(not_null(r_5), not_null(j_23));
    }
  }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  if(match_string(t, "--help"))
    {
      t = k_24;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_24;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_24;
        }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  t = term_q_12;
  l_24 = t;
  t = term_h_6;
  m_24 = t;
  t = term_v_13;
  t = w_4(l_24, m_24, t);
  t = term_w_13;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  if(((f_24 != NULL) && (f_24 != t)))
    _fail(t);
  else
    f_24 = t;
  t = term_o_11;
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  t = term_p_11;
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  t = (ATerm) ATempty;
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  t = SSL_table_put(not_null(h_24), not_null(i_24), not_null(j_24));
  t = not_null(f_24);
  {
    ATerm i_5 (ATerm t)
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_107(t);
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
                t = Option_3_0(j_5, m_5, o_5, t);
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
    t = parse_options_p__1_0(i_5, t);
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_24 = NULL;
          t_24 = t;
          {
            ATerm h_14 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_9 = NULL;
                t = t_24;
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
                      t = fetch_1_0(q_5, t);
                    }
                  t = t_24;
                  t = default_system_usage_0_0(t);
                  t = term_r_10;
                  t_9 = t;
                  t = SSL_exit(t_9);
                }
                ;
                LocalPopChoice(i_14);
              }
            else
              {
                t = h_14;
                {
                  ATerm y_9 = NULL;
                  t = term_a_13;
                  t = get_config_0_0(t);
                  t = t_24;
                  t = default_system_about_0_0(t);
                  t = term_r_10;
                  y_9 = t;
                  t = SSL_exit(y_9);
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
                ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
                ATerm s_5 (ATerm t)
                {
                  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,t_5 = NULL;
                  z_24 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_24);
                  x_24 = t;
                  t = y_24;
                  if(((d_24 != NULL) && (d_24 != t)))
                    _fail(t);
                  else
                    d_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_24);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, x_24);
                  return(t);
                }
                t = fetch_1_0(s_5, t);
                t = term_i_6;
                if(((v_24 != NULL) && (v_24 != t)))
                  _fail(t);
                else
                  v_24 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_24)), term_n_14);
                if(((w_24 != NULL) && (w_24 != t)))
                  _fail(t);
                else
                  w_24 = t;
                t = SSL_printnl(not_null(v_24), not_null(w_24));
                t = (ATerm) ATmakeAppl(sym__2, term_i_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_24)), term_n_14));
                t = default_system_usage_0_0(t);
                t = term_m_6;
                if(((u_24 != NULL) && (u_24 != t)))
                  _fail(t);
                else
                  u_24 = t;
                t = SSL_exit(not_null(u_24));
                ;
                LocalPopChoice(m_14);
              }
            else
              {
                t = l_14;
              }
          }
        }
      if(((e_24 != NULL) && (e_24 != t)))
        _fail(t);
      else
        e_24 = t;
      t = term_o_11;
      if(((g_24 != NULL) && (g_24 != t)))
        _fail(t);
      else
        g_24 = t;
      t = SSL_table_destroy(not_null(g_24));
      t = not_null(e_24);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  t = parse_options_1_0(m_105, t);
  e_25 = t;
  t = term_p_14;
  h_25 = t;
  t = SSL_table_create(h_25);
  t = term_p_14;
  f_25 = t;
  t = term_q_14;
  g_25 = t;
  t = SSL_table_put(f_25, g_25, e_25);
  t = e_25;
  t = o_105(t);
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_105, t);
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
              t = p_105(t);
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
ATerm z_5 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  t = term_v_14;
  i_25 = t;
  t = term_h_6;
  j_25 = t;
  t = term_w_14;
  t = w_4(i_25, j_25, t);
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
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  k_25 = t;
  t = term_c_12;
  t = get_config_0_0(t);
  l_25 = t;
  t = term_i_6;
  m_25 = t;
  t = (ATerm) ATinsert(ATempty, l_25);
  n_25 = t;
  t = SSL_printnl(m_25, n_25);
  t = k_25;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_104(t);
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
                          t = Option_3_0(x_5, z_5, a_6, t);
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
    ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
    if(((p_25 != NULL) && (p_25 != t)))
      _fail(t);
    else
      p_25 = t;
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_25 != NULL) && (o_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_25 = ATgetArgument(t, 0);
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
          if(((o_25 != NULL) && (o_25 != t)))
            _fail(t);
          else
            o_25 = t;
        }
      t = not_null(o_25);
      t = ReadFromFile_0_0(t);
      if(((q_25 != NULL) && (q_25 != t)))
        _fail(t);
      else
        q_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_25), not_null(q_25));
      t = apply_strategy_1_0(v_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(u_5, x_104, v_5, w_5, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,v_25 = NULL,w_25 = NULL,y_5 = NULL;
  w_25 = t;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_25);
  r_25 = t;
  t = t_25;
  t = collect_om_2_0(e_6, f_6, t);
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, v_25))));
  y_5 = t;
  t = SSLsetAnnotations(y_5, r_25);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(x_25, y_25, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(match_cons(t, sym__2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(g_6, z_25, a_26, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm b_26 = NULL;
  if(match_cons(t, sym__2))
    {
      b_26 = ATgetArgument(t, 0);
      if((b_26 != ATgetArgument(t, 1)))
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

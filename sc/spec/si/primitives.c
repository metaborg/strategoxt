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
ATerm term_u_19;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_j_11;
ATerm term_y_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_b_9;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_x_6;
ATerm term_u_6;
void init_constant_terms (void)
{
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Op_2, term_s_7, (ATerm) ATempty);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalTerm", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Call_2, term_i_8, (ATerm) ATempty);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("EvalPrim", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("App", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Prim", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("t", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Var_1, term_p_8);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_v_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_u_6);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_z_12);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_u_6);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_u_6);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_u_6);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_u_6);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm h_4 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm o_36, ATerm n_36, ATerm);
ATerm i_4 (ATerm x_92 (ATerm), ATerm k_36, ATerm j_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm g_4 (ATerm m_29, ATerm n_29, ATerm);
ATerm foldr_3_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm collect_om_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm);
ATerm _2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm);
ATerm l_4 (ATerm j_49, ATerm k_49, ATerm);
ATerm m_4 (ATerm x_52, ATerm y_52, ATerm);
ATerm o_4 (ATerm k_101 (ATerm), ATerm f_427, ATerm b_53, ATerm);
ATerm n_4 (ATerm t_52, ATerm u_52, ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_104 (ATerm), ATerm);
ATerm g_6 (ATerm y_5, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_4 (ATerm z_52, ATerm);
ATerm q_4 (ATerm l_49, ATerm m_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_89 (ATerm), ATerm);
ATerm k_4 (ATerm z_43, ATerm a_44, ATerm);
ATerm debug_1_0 (ATerm i_101 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_102 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm w_4 (ATerm a_54, ATerm b_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm q_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_4 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_4 (ATerm j_46, ATerm k_46, ATerm);
ATerm foldr_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_102 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm t_4 (ATerm p_60, ATerm q_60, ATerm);
ATerm Program_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm b_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_107 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm parse_options_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm i_6 (ATerm);
ATerm m_6 (ATerm);
ATerm iowrap_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,k_0 = NULL,m_0 = NULL,o_0 = NULL;
  c_0 = t;
  t = term_u_6;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_x_6;
  k_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), e_0), term_b_7);
  m_0 = t;
  t = SSL_printnl(k_0, m_0);
  t = term_f_7;
  o_0 = t;
  t = SSL_exit(o_0);
  t = c_0;
  return(t);
}
ATerm h_4 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  t = b_93(t);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm p_0 = NULL;
      p_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_36, p_0);
      t = a_93(t);
      return(t);
    }
    t = fetch_1_0(g_1, t);
    t = n_36;
  }
  return(t);
}
ATerm i_4 (ATerm x_92 (ATerm), ATerm k_36, ATerm j_36, ATerm t)
{
  t = k_36;
  {
    ATerm w_0 (ATerm t)
    {
      ATerm h_7 = t;
      int k_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_36;
          ;
          LocalPopChoice(k_7);
        }
      else
        {
          t = h_7;
          {
            ATerm q_7 = t;
            int r_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
                r_0 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_0 = ATgetFirst((ATermList) t);
                    t_0 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = r_0;
                {
                  ATerm h_1 (ATerm t)
                  {
                    t = j_36;
                    return(t);
                  }
                  t = h_4(x_92, h_1, s_0, t_0, t);
                  t = w_0(t);
                }
                ;
                LocalPopChoice(r_7);
              }
            else
              {
                t = q_7;
                t = Cons_2_0(_id, w_0, t);
              }
          }
        }
      return(t);
    }
    t = w_0(t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm m_1 = NULL;
  t = new_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_1);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_t_7;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm s_1 = NULL,c_2 = NULL,q_0 = NULL;
  s_1 = t;
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            c_2 = ATgetFirst((ATermList) w_7);
            {
              ATerm x_7 = (ATerm) ATgetNext((ATermList) w_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_1);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            ATerm d_8 = ATgetFirst((ATermList) z_7);
            ATerm e_8 = (ATerm) ATgetNext((ATermList) z_7);
            if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
              {
                q_0 = ATgetFirst((ATermList) e_8);
                {
                  ATerm f_8 = (ATerm) ATgetNext((ATermList) e_8);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, q_0), c_2));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, term_j_8, f_2);
  return(t);
}
ATerm g_4 (ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL;
  t = n_29;
  t = map_1_0(i_1, t);
  b_1 = t;
  t = foldr_2_0(j_1, k_1, t);
  c_1 = t;
  t = b_1;
  t = map_1_0(l_1, t);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, term_l_8, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_m_8, (ATerm) ATinsert(ATinsert(ATempty, term_q_8), (ATerm) ATmakeAppl(sym_Op_2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, c_1), (ATerm) ATmakeAppl(sym_Str_1, m_29))))), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Prim_2, m_29, d_1), term_q_8), term_r_8));
  return(t);
}
ATerm foldr_3_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_94(t);
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm j_2 = NULL,k_2 = NULL,p_2 = NULL,q_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_2 = ATgetFirst((ATermList) t);
            k_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_2;
        t = a_95(t);
        p_2 = t;
        t = k_2;
        t = foldr_3_0(y_94, z_94, a_95, t);
        q_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_2, q_2);
        t = z_94(t);
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm c_94 (ATerm), ATerm d_94 (ATerm), ATerm t)
{
  ATerm u_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 = NULL;
      t = c_94(t);
      u_2 = t;
      t = (ATerm) ATinsert(ATempty, u_2);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = u_8;
      {
        ATerm x_0 = NULL,z_0 = NULL;
        x_0 = t;
        t = SSL_explode_term(x_0);
        if(match_cons(t, sym__2))
          {
            ATerm x_8 = ATgetArgument(t, 0);
            z_0 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_0;
        {
          ATerm o_1 (ATerm t)
          {
            t = collect_om_2_0(c_94, d_94, t);
            return(t);
          }
          t = foldr_3_0(n_1, d_94, o_1, t);
        }
      }
    }
  return(t);
}
ATerm _2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,d_3 = NULL,f_3 = NULL,l_0 = NULL,n_0 = NULL;
  f_3 = t;
  if(match_cons(t, sym__2))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  v_2 = t;
  t = w_2;
  t = q_63(t);
  y_2 = t;
  t = x_2;
  t = r_63(t);
  d_3 = t;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, d_3);
  l_0 = t;
  t = SSLsetAnnotations(l_0, v_2);
  return(t);
}
ATerm l_4 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_fputc(j_49, k_49);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_3);
  return(t);
}
ATerm m_4 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm j_3 = NULL;
  t = SSL_write_term_to_stream_text(x_52, y_52);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_3);
  return(t);
}
ATerm o_4 (ATerm k_101 (ATerm), ATerm f_427, ATerm b_53, ATerm t)
{
  ATerm l_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_427, term_b_9);
  t = open_stream_0_0(t);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_3, b_53);
  t = k_101(t);
  t = fclose_0_0(t);
  t = b_53;
  return(t);
}
ATerm n_4 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm n_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_52, u_52);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_3);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = fetch_1_0(w_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(x_1, t_3, u_3, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_9 = ATgetArgument(t, 0);
      if(match_cons(d_9, sym_Stream_1))
        {
          x_3 = ATgetArgument(d_9, 0);
        }
      else
        _fail(t);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(x_3, y_3, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm j_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      j_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(z_1, j_4, x_4, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL,k_5 = NULL,l_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_9 = ATgetArgument(t, 0);
      if(match_cons(f_9, sym_Stream_1))
        {
          z_4 = ATgetArgument(f_9, 0);
        }
      else
        _fail(t);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(z_4, a_5, t);
  y_4 = t;
  t = term_g_9;
  k_5 = t;
  t = y_4;
  if(match_cons(t, sym_Stream_1))
    {
      l_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, y_4);
  t = l_4(k_5, l_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  o_3 = t;
  {
    ATerm p_1 (ATerm t)
    {
      ATerm h_9 = t;
      int i_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((p_3 != NULL) && (p_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_1, t);
          ;
          LocalPopChoice(i_9);
        }
      else
        {
          t = h_9;
          t = term_j_9;
          if(((p_3 != NULL) && (p_3 != t)))
            _fail(t);
          else
            p_3 = t;
        }
      return(t);
    }
    t = _2_0(p_1, _id, t);
    t = o_3;
    {
      ATerm t_1 (ATerm t)
      {
        ATerm r_3 = NULL;
        r_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), r_3);
        return(t);
      }
      t = _2_0(_id, t_1, t);
      {
        ATerm k_9 = t;
        int l_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(u_1, v_1, t);
            ;
            LocalPopChoice(l_9);
          }
        else
          {
            t = k_9;
            t = _2_0(_id, y_1, t);
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
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  m_5 = t;
  t = dtime_0_0(t);
  t = m_5;
  t = m_104(t);
  n_5 = t;
  t = dtime_0_0(t);
  o_5 = t;
  t = n_5;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_5), (ATerm) ATmakeAppl(sym_Runtime_1, o_5)), q_5);
  return(t);
}
ATerm g_6 (ATerm y_5, ATerm t)
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
        ATerm m_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_6);
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = m_9;
            t = g_6(c_6, t);
          }
      }
    }
  else
    {
      t = g_6(c_6, t);
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
  ATerm h_6 = NULL;
  t = SSL_fopen(l_49, m_49);
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_6);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  t = SSL_stdin_stream();
  j_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_6);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  t = SSL_stdout_stream();
  k_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_6);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  t = SSL_stderr_stream();
  l_6 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_6);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm y_6 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      y_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  t = SSL_is_string(c_7);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      ATerm w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_6 = NULL,q_1 = NULL;
        t_6 = t;
        t = SSL_explode_term(t_6);
        if(match_cons(t, sym__2))
          {
            ATerm b_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_10 = ATgetArgument(t, 1);
              if(((ATgetType(c_10) == AT_LIST) && !(ATisEmpty(c_10))))
                {
                  q_1 = ATgetFirst((ATermList) c_10);
                  {
                    ATerm d_10 = (ATerm) ATgetNext((ATermList) c_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = q_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = q_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = q_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = x_9;
        {
          ATerm i_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_6 = NULL,w_6 = NULL;
              t = _2_0(a_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  v_6 = ATgetArgument(t, 0);
                  w_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_4(v_6, w_6, t);
              ;
              LocalPopChoice(j_10);
            }
          else
            {
              t = i_10;
              {
                ATerm z_6 = NULL,a_7 = NULL;
                t = _2_0(b_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    z_6 = ATgetArgument(t, 0);
                    a_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_4(z_6, a_7, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_7 = NULL,g_7 = NULL,i_7 = NULL;
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_7 = NULL;
      j_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_7, term_n_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      t = debug_1_0(d_2, t);
      _fail(t);
    }
  e_7 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_4(i_7, t);
  g_7 = t;
  t = e_7;
  t = fclose_0_0(t);
  t = g_7;
  return(t);
}
ATerm fetch_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_89, _id, t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        t = Cons_2_0(_id, l_7, t);
      }
    return(t);
  }
  t = l_7(t);
  return(t);
}
ATerm k_4 (ATerm z_43, ATerm a_44, ATerm t)
{
  t = SSL_strcat(z_43, a_44);
  return(t);
}
ATerm debug_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  m_7 = t;
  t = i_101(t);
  n_7 = t;
  t = term_x_6;
  o_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_7), n_7);
  p_7 = t;
  t = SSL_printnl(o_7, p_7);
  t = m_7;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_7 = NULL;
      v_7 = t;
      t = SSL_is_string(v_7);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_2, t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            {
              ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
              a_8 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_8 = ATgetArgument(t, 0);
                  t = b_8;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_8 = ATgetArgument(t, 0);
                      t = b_8;
                      {
                        ATerm g_11 = t;
                        int i_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_11);
                          }
                        else
                          {
                            t = g_11;
                            t = debug_1_0(i_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_8 = NULL,n_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_8 = ATgetArgument(t, 0);
                          c_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_8;
                      t = eval_config_0_0(t);
                      k_8 = t;
                      t = c_8;
                      t = eval_config_0_0(t);
                      n_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_8, n_8);
                      t = k_4(k_8, n_8, t);
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
  ATerm v_8 = NULL,y_8 = NULL;
  v_8 = t;
  t = term_j_11;
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, v_8);
  t = t_4(y_8, v_8, t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL,a_9 = NULL;
        t = eval_config_0_0(t);
        z_8 = t;
        t = term_j_11;
        a_9 = t;
        t = SSL_table_put(a_9, v_8, z_8);
        t = z_8;
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = NULL,e_9 = NULL;
      c_9 = t;
      t = term_q_11;
      t = get_config_0_0(t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_9, term_r_11);
      t = geq_0_0(t);
      t = c_9;
      t = v_102(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm n_9 = NULL;
  n_9 = t;
  if(match_string(t, "-k"))
    {
      t = n_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_9;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
  o_9 = t;
  t = SSL_string_to_int(o_9);
  p_9 = t;
  t = term_s_11;
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, p_9);
  t = w_4(q_9, p_9, t);
  t = o_9;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, n_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  if(match_string(t, "-S"))
    {
      t = s_9;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_9;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm t_9 = NULL,v_9 = NULL;
  t = term_q_11;
  t_9 = t;
  t = term_v_11;
  v_9 = t;
  t = term_w_11;
  t = w_4(t_9, v_9, t);
  t = term_a_12;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm y_9 = NULL,a_10 = NULL,e_10 = NULL;
  y_9 = t;
  t = SSL_string_to_int(y_9);
  a_10 = t;
  t = term_q_11;
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, a_10);
  t = w_4(e_10, a_10, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_9);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  t = term_g_12;
  f_10 = t;
  t = term_u_6;
  g_10 = t;
  t = term_i_12;
  t = w_4(f_10, g_10, t);
  t = term_k_12;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_2, t_2, z_2, t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm u_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_3, b_3, c_3, t);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = u_12;
            t = Option_3_0(e_3, g_3, h_3, t);
          }
      }
    }
  return(t);
}
ATerm w_4 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm h_10 = NULL;
  t = term_j_11;
  h_10 = t;
  t = SSL_table_put(h_10, a_54, b_54);
  t = (ATerm) ATmakeAppl(sym__3, term_j_11, a_54, b_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
      t = term_u_6;
      t = d_0(t);
      q_10 = t;
      t = term_y_12;
      r_10 = t;
      t = term_z_12;
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_12, term_z_12, q_10);
      t = u_4(r_10, s_10, q_10, t);
      _fail(t);
    }
  else
    {
      ATerm x_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_10 = ATgetFirst((ATermList) t);
          p_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_10;
      t = a_0(t);
      t = term_u_6;
      t = b_0(t);
      x_10 = t;
      t = (ATerm) ATinsert(CheckATermList(p_10), x_10);
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
  if(match_string(t, "-o"))
    {
      t = d_11;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_11;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  e_11 = t;
  t = term_a_13;
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, e_11);
  t = w_4(f_11, e_11, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_11);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_3, m_3, q_3, t);
  return(t);
}
ATerm u_4 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm t)
{
  ATerm h_11 = NULL,k_11 = NULL,l_11 = NULL;
  h_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_13 = ATgetArgument(t, 0);
            ATerm g_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = t_4(y_58, z_58, t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATempty;
      }
    k_11 = t;
    t = (ATerm) ATinsert(CheckATermList(k_11), x_58);
    l_11 = t;
    t = SSL_table_put(y_58, z_58, l_11);
    t = h_11;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL;
      t = term_u_6;
      t = j_0(t);
      b_12 = t;
      t = term_y_12;
      c_12 = t;
      t = term_z_12;
      d_12 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_12, term_z_12, b_12);
      t = u_4(c_12, d_12, b_12, t);
      _fail(t);
    }
  else
    {
      ATerm h_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_11 = ATgetFirst((ATermList) t);
          x_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_11 = ATgetFirst((ATermList) t);
          z_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_11;
      t = h_0(t);
      t = y_11;
      t = i_0(t);
      h_12 = t;
      t = (ATerm) ATinsert(CheckATermList(z_11), h_12);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  if(match_string(t, "-i"))
    {
      t = j_12;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_12;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  m_12 = t;
  t = term_h_13;
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, m_12);
  t = w_4(n_12, m_12, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_12);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, v_3, w_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_6;
  t = whoami_0_0(t);
  o_12 = t;
  t = term_x_6;
  p_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_13), o_12);
  q_12 = t;
  t = SSL_printnl(p_12, q_12);
  t = term_f_7;
  r_12 = t;
  t = SSL_exit(r_12);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_4 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_46, k_46);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      t = SSL_addr(j_46, k_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_94(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm v_12 = NULL,w_12 = NULL,f_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_12 = ATgetFirst((ATermList) t);
            w_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_12;
        t = foldr_2_0(w_94, x_94, t);
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_12, f_13);
        t = x_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm o_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(o_2, r_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_13 = NULL,e_2 = NULL,g_2 = NULL;
  t = times_0_0(t);
  e_2 = t;
  t = SSL_explode_term(e_2);
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_2;
  t = foldr_2_0(a_4, b_4, t);
  j_13 = t;
  t = SSL_TicksToSeconds(j_13);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,a_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_14;
        if((y_13 != t))
          {
            _fail(t);
          }
        t = x_13;
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = (ATerm) ATmakeAppl(sym__2, y_13, a_14);
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_13, a_14);
              ;
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = SSL_gtr(y_13, a_14);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_13, a_14);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_14 = NULL,i_14 = NULL;
      e_14 = t;
      t = term_q_11;
      t = get_config_0_0(t);
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_14, term_f_7);
      t = geq_0_0(t);
      t = e_14;
      t = u_102(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,r_14 = NULL,u_14 = NULL;
  t = run_time_0_0(t);
  k_14 = t;
  t = term_u_6;
  t = whoami_0_0(t);
  l_14 = t;
  t = term_x_6;
  r_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_14), k_14), term_z_13), l_14);
  u_14 = t;
  t = SSL_printnl(r_14, u_14);
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_14), k_14), term_z_13), l_14));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_11;
  x_14 = t;
  t = SSL_exit(x_14);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm h_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = h_14;
      t = fetch_1_0(e_4, t);
    }
  t = k_105(t);
  return(t);
}
ATerm map_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  ATerm y_14 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        t = Cons_2_0(t_88, y_14, t);
      }
    return(t);
  }
  t = y_14(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_15 = ATgetFirst((ATermList) t);
      d_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_15 = NULL,o_15 = NULL;
        t = d_15;
        t = g_0(t);
        n_15 = t;
        t = c_15;
        t = f_0(t);
        o_15 = t;
        t = d_15;
        {
          ATerm f_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_15), o_15);
            return(t);
          }
          t = reverse_acc_2_0(f_0, f_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_6;
      t = g_0(t);
    }
  return(t);
}
ATerm t_4 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_table_get(p_60, q_60);
  return(t);
}
ATerm Program_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,u_0 = NULL,v_0 = NULL;
  s_15 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_15);
  p_15 = t;
  t = q_15;
  t = v_73(t);
  r_15 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_15);
  u_0 = t;
  t = SSLsetAnnotations(u_0, p_15);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm x_15 = NULL;
  x_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_15), term_p_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  ATerm q_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = q_14;
      t = fetch_1_0(s_4, t);
    }
  t = term_t_14;
  t = echo_0_0(t);
  t = term_y_12;
  v_15 = t;
  t = term_z_12;
  w_15 = t;
  t = term_v_14;
  t = t_4(v_15, w_15, t);
  t = reverse_acc_2_0(_id, v_4, t);
  t = map_1_0(b_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,y_0 = NULL,a_1 = NULL;
  b_16 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_16);
  y_15 = t;
  t = z_15;
  t = w_73(t);
  a_16 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, a_16);
  y_0 = t;
  t = SSLsetAnnotations(y_0, y_15);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_16 = NULL,k_16 = NULL,l_16 = NULL;
  h_16 = t;
  {
    ATerm w_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_16;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_15 = ATgetFirst((ATermList) t);
                ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_16;
          }
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATinsert(ATempty, h_16);
      }
    k_16 = t;
    t = term_j_9;
    l_16 = t;
    t = SSL_printnl(l_16, k_16);
    t = h_16;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  t = term_e_15;
  t_16 = t;
  t = term_u_6;
  u_16 = t;
  t = term_f_15;
  t = w_4(t_16, u_16, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_g_15;
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
  ATerm v_16 = NULL,w_16 = NULL,y_16 = NULL,z_16 = NULL;
  t = term_e_15;
  v_16 = t;
  t = term_u_6;
  w_16 = t;
  t = term_f_15;
  t = w_4(v_16, w_16, t);
  t = term_h_15;
  y_16 = t;
  t = term_u_6;
  z_16 = t;
  t = term_i_15;
  t = w_4(y_16, z_16, t);
  t = term_j_15;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_5, d_5, e_5, t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
      t = Option_3_0(f_5, g_5, h_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,e_1 = NULL,f_1 = NULL;
  f_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_17);
  a_17 = t;
  t = b_17;
  t = f_68(t);
  d_17 = t;
  t = c_17;
  t = g_68(t);
  e_17 = t;
  f_1 = t;
  t = (ATerm) ATinsert(CheckATermList(e_17), d_17);
  e_1 = t;
  t = SSLsetAnnotations(e_1, a_17);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  q_17 = t;
  t = term_l_13;
  r_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_13, q_17);
  t = w_4(r_17, q_17, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, q_17);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_16;
        t = n_107(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
      }
    t = p_17;
    {
      ATerm j_5 (ATerm t)
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_16 = t;
            int g_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(g_16);
              }
            else
              {
                t = f_16;
                t = n_107(t);
                t = Cons_2_0(_id, j_5, t);
              }
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm t_17 = NULL,u_17 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_17 = ATgetFirst((ATermList) t);
                  u_17 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_17), (ATerm) ATmakeAppl(sym_Undefined_1, t_17));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_5, j_5, t);
    }
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  if(match_string(t, "--help"))
    {
      t = i_18;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_18;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_18;
        }
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  t = term_m_14;
  j_18 = t;
  t = term_u_6;
  k_18 = t;
  t = term_i_16;
  t = w_4(j_18, k_18, t);
  t = term_j_16;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  b_18 = t;
  t = term_y_12;
  e_18 = t;
  t = term_z_12;
  f_18 = t;
  t = (ATerm) ATempty;
  g_18 = t;
  t = SSL_table_put(e_18, f_18, g_18);
  t = b_18;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm n_16 = t;
      int o_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_107(t);
          ;
          LocalPopChoice(o_16);
        }
      else
        {
          t = n_16;
          {
            ATerm p_16 = t;
            int q_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_5, t_5, u_5, t);
                ;
                LocalPopChoice(q_16);
              }
            else
              {
                t = p_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_5, t);
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_18 = NULL;
          r_18 = t;
          {
            ATerm x_16 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_3 = NULL;
                t = r_18;
                {
                  ATerm h_17 = t;
                  int i_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_17);
                    }
                  else
                    {
                      t = h_17;
                      t = fetch_1_0(v_5, t);
                    }
                  t = r_18;
                  t = default_system_usage_0_0(t);
                  t = term_v_11;
                  z_3 = t;
                  t = SSL_exit(z_3);
                }
                ;
                LocalPopChoice(g_17);
              }
            else
              {
                t = x_16;
                {
                  ATerm d_4 = NULL;
                  t = term_e_15;
                  t = get_config_0_0(t);
                  t = r_18;
                  t = default_system_about_0_0(t);
                  t = term_v_11;
                  d_4 = t;
                  t = SSL_exit(d_4);
                }
              }
          }
          ;
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          {
            ATerm j_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
                ATerm w_5 (ATerm t)
                {
                  ATerm x_5 (ATerm t)
                  {
                    if(((c_18 != NULL) && (c_18 != t)))
                      _fail(t);
                    else
                      c_18 = t;
                    return(t);
                  }
                  t = Undefined_1_0(x_5, t);
                  return(t);
                }
                t = fetch_1_0(w_5, t);
                t = term_x_6;
                s_18 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_18)), term_l_17);
                t_18 = t;
                t = SSL_printnl(s_18, t_18);
                t = (ATerm) ATmakeAppl(sym__2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_18)), term_l_17));
                t = default_system_usage_0_0(t);
                t = term_f_7;
                u_18 = t;
                t = SSL_exit(u_18);
                ;
                LocalPopChoice(k_17);
              }
            else
              {
                t = j_17;
              }
          }
        }
      d_18 = t;
      t = term_y_12;
      h_18 = t;
      t = SSL_table_destroy(h_18);
      t = d_18;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  t = parse_options_1_0(m_105, t);
  x_18 = t;
  t = term_m_17;
  y_18 = t;
  t = SSL_table_create(y_18);
  t = term_m_17;
  z_18 = t;
  t = term_n_17;
  a_19 = t;
  t = SSL_table_put(z_18, a_19, x_18);
  t = x_18;
  t = o_105(t);
  {
    ATerm o_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_105, t);
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = o_17;
        {
          ATerm v_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_17);
            }
          else
            {
              t = v_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = if_verbose2_1_0(m_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  t = term_x_17;
  b_19 = t;
  t = term_u_6;
  c_19 = t;
  t = term_y_17;
  t = w_4(b_19, c_19, t);
  t = term_z_17;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
  d_19 = t;
  t = term_l_13;
  t = get_config_0_0(t);
  e_19 = t;
  t = term_x_6;
  f_19 = t;
  t = (ATerm) ATinsert(ATempty, e_19);
  g_19 = t;
  t = SSL_printnl(f_19, g_19);
  t = d_19;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  ATerm z_5 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_104(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              {
                ATerm p_18 = t;
                int q_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_18);
                  }
                else
                  {
                    t = p_18;
                    {
                      ATerm v_18 = t;
                      int w_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_6, f_6, i_6, t);
                          ;
                          LocalPopChoice(w_18);
                        }
                      else
                        {
                          t = v_18;
                          {
                            ATerm q_19 = t;
                            int r_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(r_19);
                              }
                            else
                              {
                                t = q_19;
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
  ATerm d_6 (ATerm t)
  {
    ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
    h_19 = t;
    {
      ATerm s_19 = t;
      int t_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_19 != NULL) && (i_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_6, t);
          ;
          LocalPopChoice(t_19);
        }
      else
        {
          t = s_19;
          t = term_u_19;
          i_19 = t;
        }
      t = not_null(i_19);
      t = ReadFromFile_0_0(t);
      j_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_19, j_19);
      t = apply_strategy_1_0(v_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_5, x_104, a_6, d_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = _2_0(_id, p_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm k_19 = NULL;
  t = collect_om_2_0(q_6, r_6, t);
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rules_1, k_19)));
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym_Prim_2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(l_19, m_19, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(s_6, n_19, o_19, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      if((p_19 != ATgetArgument(t, 1)))
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
  t = iowrap_3_0(o_6, _fail, default_usage_0_0, t);
  return(t);
}

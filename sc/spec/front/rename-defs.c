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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_List_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Path_2;
Symbol sym_Mod_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
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
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_i_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_w_28;
ATerm term_r_28;
ATerm term_m_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_f_23;
ATerm term_b_23;
ATerm term_l_22;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_c_19;
void init_constant_terms (void)
{
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_22);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__3, term_h_26, term_d_29, term_c_19);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm g_1 (ATerm w_0, ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm g_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm assert_1_0 (ATerm w_115 (ATerm), ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm w_103 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm h_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm y_16 (ATerm);
ATerm b_17 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm f_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm _2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm b_109 (ATerm), ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm p_17 (ATerm);
ATerm t_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_112 (ATerm), ATerm);
ATerm e_12 (ATerm u_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_17 (ATerm);
ATerm f_18 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm g_18 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_110 (ATerm), ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm x_18 (ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm f_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm p_19 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm q_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm a_20 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_20 (ATerm);
ATerm need_help_1_0 (ATerm b_113 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm p_20 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_115 (ATerm), ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm u_20 (ATerm);
ATerm v_20 (ATerm);
ATerm parse_options_1_0 (ATerm d_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm);
ATerm z_20 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm f_21 (ATerm);
ATerm iowrap_3_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm);
ATerm h_21 (ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm l_21 (ATerm);
ATerm m_21 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL;
  n_0 = t;
  t = term_c_19;
  t = whoami_0_0(t);
  o_0 = t;
  r_0 = t;
  t = term_p_21;
  p_0 = t;
  t = r_0;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_21), o_0), term_q_21);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  u_0 = t;
  t = term_s_21;
  t_0 = t;
  t = SSL_exit(t_0);
  t = n_0;
  return(t);
}
ATerm g_1 (ATerm w_0, ATerm t)
{
  ATerm y_0 = NULL,i_1 = NULL,v_0 = NULL,x_0 = NULL;
  t = term_t_21;
  x_0 = t;
  t = term_t_21;
  v_0 = t;
  t = SSL_table_get(v_0, w_0);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_1 = ATgetFirst((ATermList) t);
      {
        ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_1;
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_21) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      y_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm b_1 = NULL,d_1 = NULL;
  b_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_21 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  {
    ATerm y_21 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_22 = ATgetArgument(t, 0);
            ATerm g_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(c_22);
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_1 = NULL,z_1 = NULL,z_0 = NULL,a_1 = NULL;
              t = term_t_21;
              a_1 = t;
              t = term_t_21;
              z_0 = t;
              t = SSL_table_get(z_0, b_1);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_1 = ATgetFirst((ATermList) t);
                  {
                    ATerm j_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = z_1;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_22) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  m_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_1;
              ;
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              t = g_1(b_1, t);
            }
        }
      }
    else
      {
        t = y_21;
        t = g_1(b_1, t);
      }
  }
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(p_2, q_2);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = SSL_addr(p_2, q_2);
      }
  }
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      r_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(r_2, s_2);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = SSL_addr(r_2, s_2);
      }
  }
  return(t);
}
ATerm p_15 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_3, x_3);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = SSL_addr(w_3, x_3);
      }
  }
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  n_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
      l_3 = ATgetArgument(t, 2);
      {
        ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
        t = o_3;
        if(match_cons(t, sym_SVar_1))
          {
            p_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_3;
        t = foldr_3_0(g_15, l_15, m_15, t);
        k_2 = t;
        t = l_3;
        t = foldr_3_0(n_15, o_15, p_15, t);
        l_2 = t;
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATmakeAppl(sym__2, k_2, l_2));
              t = RenameVar_0_0(t);
              m_2 = t;
              ;
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = p_3;
              t = HoArg_0_0(t);
              m_2 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_2), q_3, l_3);
        }
      }
    }
  else
    {
      ATerm u_3 = NULL,v_3 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          o_3 = ATgetArgument(t, 0);
          q_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_3;
      if(match_cons(t, sym_SVar_1))
        {
          p_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_3;
      t = foldr_3_0(q_15, r_15, s_15, t);
      u_3 = t;
      {
        ATerm v_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, p_3, u_3);
            t = RenameVar_0_0(t);
            v_3 = t;
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = v_22;
            t = p_3;
            t = HoArg_0_0(t);
            v_3 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_3), q_3);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  t = r_87(t);
  {
    ATerm y_15 (ATerm t)
    {
      t = topdown_1_0(r_87, t);
      return(t);
    }
    t = SRTS_all(y_15, t);
  }
  return(t);
}
ATerm assert_1_0 (ATerm w_115 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,f_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_115(t);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_3, t_3, y_3);
  t = table_push_0_0(t);
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,e_1 = NULL;
        e_1 = t;
        t = term_b_23;
        c_1 = t;
        t = SSL_table_get(z_3, c_1);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_4 = ATgetFirst((ATermList) t);
        b_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    j_1 = t;
    t = term_b_23;
    f_1 = t;
    t = j_1;
    k_1 = t;
    t = (ATerm) ATinsert(CheckATermList(b_4), (ATerm) ATinsert(CheckATermList(a_4), t_3));
    h_1 = t;
    t = SSL_table_put(z_3, f_1, h_1);
    t = (ATerm) ATmakeAppl(sym__2, t_3, y_3);
  }
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 = NULL,l_1 = NULL,n_1 = NULL;
        t = term_f_23;
        n_1 = t;
        t = term_f_23;
        l_1 = t;
        t = SSL_table_get(l_1, w_5);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_5 = ATgetFirst((ATermList) t);
            {
              ATerm g_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = j_5;
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_5 = NULL,u_5 = NULL,o_1 = NULL,p_1 = NULL;
              t = term_f_23;
              p_1 = t;
              t = term_f_23;
              o_1 = t;
              t = SSL_table_get(o_1, w_5);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_5 = ATgetFirst((ATermList) t);
                  {
                    ATerm j_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = u_5;
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  n_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_5;
              ;
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              {
                ATerm l_23 = t;
                int m_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_6 = NULL,q_1 = NULL,r_1 = NULL;
                    t = term_f_23;
                    r_1 = t;
                    t = term_f_23;
                    q_1 = t;
                    t = SSL_table_get(q_1, w_5);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        g_6 = ATgetFirst((ATermList) t);
                        {
                          ATerm n_23 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = g_6;
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(m_23);
                  }
                else
                  {
                    t = l_23;
                    {
                      ATerm l_6 = NULL,b_7 = NULL,s_1 = NULL,t_1 = NULL;
                      t = term_f_23;
                      t_1 = t;
                      t = term_f_23;
                      s_1 = t;
                      t = SSL_table_get(s_1, w_5);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          b_7 = ATgetFirst((ATermList) t);
                          {
                            ATerm o_23 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = b_7;
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm p_23 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) p_23) != ATmakeSymbol("g_0", 0, ATtrue)))
                            _fail(t);
                          l_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_6;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,p_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_6 = ATgetFirst((ATermList) t);
      p_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_6;
  if(match_int(t, 95))
    {
      ATerm t_6 = NULL;
      t = p_6;
      t = m_0(t);
      t_6 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(t_6), term_q_23), term_q_23);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm v_6 = NULL;
          t = p_6;
          t = m_0(t);
          v_6 = t;
          t = (ATerm) ATinsert(CheckATermList(v_6), term_q_23);
        }
      else
        {
          ATerm x_6 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = p_6;
          t = m_0(t);
          x_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_6), term_q_23), term_r_23), term_q_23);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm w_103 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  y_6 = t;
  t = SSL_explode_string(y_6);
  {
    ATerm a_7 (ATerm t)
    {
      ATerm s_23 = t;
      int u_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_103(a_7, t);
          ;
          LocalPopChoice(u_23);
        }
      else
        {
          t = s_23;
          {
            ATerm v_23 = t;
            int w_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, a_7, t);
                ;
                LocalPopChoice(w_23);
              }
            else
              {
                t = v_23;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = a_7(t);
    z_6 = t;
    t = SSL_implode_string(z_6);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_98(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm j_7 = NULL,k_7 = NULL,n_7 = NULL,o_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_7 = ATgetFirst((ATermList) t);
            k_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_7;
        t = x_98(t);
        n_7 = t;
        t = k_7;
        t = foldr_3_0(v_98, w_98, x_98, t);
        o_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_7, o_7);
        t = w_98(t);
      }
    }
  return(t);
}
ATerm z_15 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm a_16 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(y_11, z_11);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = z_23;
        t = SSL_addr(y_11, z_11);
      }
  }
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm k_16 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm c_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(c_12, h_12);
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = SSL_addr(c_12, h_12);
      }
  }
  return(t);
}
ATerm n_16 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(z_16, a_17);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = SSL_addr(z_16, a_17);
      }
  }
  return(t);
}
ATerm w_16 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm y_16 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm b_17 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,j_9 = NULL;
  f_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
      j_9 = ATgetArgument(t, 2);
      e_9 = ATgetArgument(t, 3);
      {
        ATerm d_11 = NULL,l_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,x_11 = NULL,w_1 = NULL,x_1 = NULL;
        t = h_9;
        t = foldr_3_0(z_15, a_16, h_16, t);
        d_11 = t;
        t = j_9;
        t = foldr_3_0(k_16, l_16, n_16, t);
        l_11 = t;
        t = g_9;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_14 = NULL,q_14 = NULL,u_1 = NULL,v_1 = NULL;
              if(match_cons(t, sym_Mod_2))
                {
                  m_14 = ATgetArgument(t, 0);
                  q_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              v_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_14), term_k_24), m_14);
              u_1 = t;
              t = SSL_concat_strings(u_1);
              ;
              LocalPopChoice(j_24);
            }
          else
            {
              t = i_24;
            }
          t = escape_1_0(Cify_1_0, t);
          n_11 = t;
          t = SSL_int_to_string(d_11);
          o_11 = t;
          t = SSL_int_to_string(l_11);
          p_11 = t;
          x_1 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_11), term_l_24), o_11), term_l_24), n_11);
          w_1 = t;
          t = SSL_concat_strings(w_1);
          x_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_9, (ATerm) ATmakeAppl(sym__2, d_11, l_11)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_24, x_11));
          t = assert_1_0(o_16, t);
          t = x_11;
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_12 = NULL;
                t = g_9;
                t = HoArg_0_0(t);
                i_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_9, term_p_24);
                t = assert_1_0(q_16, t);
                t = i_12;
                ;
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = (ATerm) ATmakeAppl(sym__2, g_9, (ATerm) ATmakeAppl(sym_Defined_2, term_q_24, x_11));
                t = assert_1_0(r_16, t);
                t = x_11;
              }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_11, h_9, j_9, e_9);
          }
        }
      }
    }
  else
    {
      ATerm c_16 = NULL,g_16 = NULL,s_16 = NULL,t_16 = NULL,b_2 = NULL,c_2 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          g_9 = ATgetArgument(t, 0);
          h_9 = ATgetArgument(t, 1);
          j_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_9;
      t = foldr_3_0(u_16, v_16, w_16, t);
      c_16 = t;
      t = g_9;
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL,d_19 = NULL,y_1 = NULL,a_2 = NULL;
            if(match_cons(t, sym_Mod_2))
              {
                u_18 = ATgetArgument(t, 0);
                d_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            a_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_19), term_k_24), u_18);
            y_1 = t;
            t = SSL_concat_strings(y_1);
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
          }
        t = escape_1_0(Cify_1_0, t);
        g_16 = t;
        t = SSL_int_to_string(c_16);
        s_16 = t;
        c_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_16), term_l_24), g_16);
        b_2 = t;
        t = SSL_concat_strings(b_2);
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_9, c_16), (ATerm) ATmakeAppl(sym_Defined_2, term_t_24, t_16));
        t = assert_1_0(x_16, t);
        t = t_16;
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_17 = NULL;
              t = g_9;
              t = HoArg_0_0(t);
              c_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_9, term_p_24);
              t = assert_1_0(y_16, t);
              t = c_17;
              ;
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              t = (ATerm) ATmakeAppl(sym__2, g_9, (ATerm) ATmakeAppl(sym_Defined_2, term_w_24, t_16));
              t = assert_1_0(b_17, t);
              t = t_16;
            }
          t = (ATerm) ATmakeAppl(sym_SDef_3, t_16, h_9, j_9);
        }
      }
    }
  return(t);
}
ATerm g_17 (ATerm t)
{
  t = topdown_1_0(h_17, t);
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(g_17, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm f_73 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,d_2 = NULL,e_2 = NULL;
  q_9 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_9);
  n_9 = t;
  t = o_9;
  t = f_73(t);
  p_9 = t;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, p_9);
  d_2 = t;
  t = SSLsetAnnotations(d_2, n_9);
  return(t);
}
ATerm Cons_2_0 (ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,f_2 = NULL,g_2 = NULL;
  y_9 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_9 = ATgetFirst((ATermList) t);
      v_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_9);
  t_9 = t;
  t = u_9;
  t = b_73(t);
  w_9 = t;
  t = v_9;
  t = c_73(t);
  x_9 = t;
  g_2 = t;
  t = (ATerm) ATinsert(CheckATermList(x_9), w_9);
  f_2 = t;
  t = SSLsetAnnotations(f_2, t_9);
  return(t);
}
ATerm Specification_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,h_2 = NULL,i_2 = NULL;
  e_10 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_10);
  b_10 = t;
  t = c_10;
  t = k_73(t);
  d_10 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_10);
  h_2 = t;
  t = SSLsetAnnotations(h_2, b_10);
  return(t);
}
ATerm _2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,j_2 = NULL,n_2 = NULL;
  m_10 = t;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_10);
  h_10 = t;
  t = i_10;
  t = m_68(t);
  k_10 = t;
  t = j_10;
  t = n_68(t);
  l_10 = t;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
  j_2 = t;
  t = SSLsetAnnotations(j_2, h_10);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  if(match_cons(t, sym__2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_10, term_z_24);
  t = open_stream_0_0(t);
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_10, t_10);
  t = b_109(t);
  t = fclose_0_0(t);
  t = t_10;
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = fetch_1_0(p_17, t);
  return(t);
}
ATerm n_17 (ATerm t)
{
  t = WriteToFile_1_0(t_17, t);
  return(t);
}
ATerm p_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_17 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_25 = ATgetArgument(t, 0);
      if(match_cons(a_25, sym_Stream_1))
        {
          x_10 = ATgetArgument(a_25, 0);
        }
      else
        _fail(t);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(x_10, y_10);
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_10);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = WriteToFile_1_0(x_17, t);
  return(t);
}
ATerm x_17 (ATerm t)
{
  ATerm a_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,o_2 = NULL,t_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(match_cons(b_25, sym_Stream_1))
        {
          a_11 = ATgetArgument(b_25, 0);
        }
      else
        _fail(t);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(a_11, e_11);
  f_11 = t;
  t_2 = t;
  t = term_c_25;
  o_2 = t;
  t = SSL_fputc(o_2, f_11);
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_11);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  v_10 = t;
  {
    ATerm i_17 (ATerm t)
    {
      ATerm d_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_17 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_17, t);
          ;
          LocalPopChoice(e_25);
        }
      else
        {
          t = d_25;
          t = term_f_25;
          if(((w_10 != NULL) && (w_10 != t)))
            _fail(t);
          else
            w_10 = t;
        }
      return(t);
    }
    t = _2_0(i_17, _id, t);
    t = v_10;
    {
      ATerm k_17 (ATerm t)
      {
        ATerm e_19 = NULL;
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), e_19);
        return(t);
      }
      t = _2_0(_id, k_17, t);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(m_17, n_17, t);
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = _2_0(_id, w_17, t);
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
ATerm apply_strategy_1_0 (ATerm d_112 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,m_11 = NULL;
  h_11 = t;
  t = dtime_0_0(t);
  t = h_11;
  t = d_112(t);
  i_11 = t;
  t = dtime_0_0(t);
  j_11 = t;
  t = i_11;
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_11), (ATerm) ATmakeAppl(sym_Runtime_1, j_11)), m_11);
  return(t);
}
ATerm e_12 (ATerm u_11, ATerm t)
{
  t = SSL_fclose(u_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  b_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_12 = ATgetArgument(t, 0);
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_12);
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = e_12(b_12, t);
          }
      }
    }
  else
    {
      t = e_12(b_12, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_12 = NULL;
  t = SSL_stdin_stream();
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  t = SSL_stdout_stream();
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_12 = NULL;
  t = SSL_stderr_stream();
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_12);
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm t_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      t_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_12;
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  t = SSL_is_string(x_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_25 = ATgetArgument(t, 0);
      ATerm l_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,i_20 = NULL;
        h_20 = t;
        t = SSL_explode_term(h_20);
        if(match_cons(t, sym__2))
          {
            ATerm o_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_25 = ATgetArgument(t, 1);
              if(((ATgetType(p_25) == AT_LIST) && !(ATisEmpty(p_25))))
                {
                  i_20 = ATgetFirst((ATermList) p_25);
                  {
                    ATerm q_25 = (ATerm) ATgetNext((ATermList) p_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_20;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_20;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_20;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_20;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        {
          ATerm r_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
              t = _2_0(y_17, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_12 = ATgetArgument(t, 0);
                  r_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_12, r_12);
              s_12 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_12);
              ;
              LocalPopChoice(s_25);
            }
          else
            {
              t = r_25;
              {
                ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
                t = _2_0(f_18, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_12 = ATgetArgument(t, 0);
                    v_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_12, v_12);
                w_12 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_12);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = NULL;
      b_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_13, term_v_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm j_20 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
        j_20 = t;
        t = term_w_25;
        w_2 = t;
        t = term_p_21;
        u_2 = t;
        t = w_2;
        x_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, j_20), term_w_25);
        v_2 = t;
        t = SSL_printnl(u_2, v_2);
        t = j_20;
        _fail(t);
      }
    }
  y_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_13);
  z_12 = t;
  t = y_12;
  t = fclose_0_0(t);
  t = z_12;
  return(t);
}
ATerm fetch_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm g_13 (ATerm t)
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_94, _id, t);
        ;
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        t = Cons_2_0(_id, g_13, t);
      }
    return(t);
  }
  t = g_13(t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_13 = NULL;
      p_13 = t;
      t = SSL_is_string(p_13);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_18, t);
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            {
              ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
              a_14 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_14 = ATgetArgument(t, 0);
                  t = b_14;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_14 = ATgetArgument(t, 0);
                      t = b_14;
                      {
                        ATerm f_26 = t;
                        int g_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_2 = NULL,z_2 = NULL;
                            z_2 = t;
                            t = term_h_26;
                            y_2 = t;
                            t = SSL_table_get(y_2, b_14);
                            {
                              ATerm i_26 = t;
                              int j_26 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_21 = NULL,a_3 = NULL,b_3 = NULL;
                                  t = eval_config_0_0(t);
                                  e_21 = t;
                                  b_3 = t;
                                  t = term_h_26;
                                  a_3 = t;
                                  t = SSL_table_put(a_3, b_14, e_21);
                                  t = e_21;
                                  ;
                                  LocalPopChoice(j_26);
                                }
                              else
                                {
                                  t = i_26;
                                }
                            }
                            ;
                            LocalPopChoice(g_26);
                          }
                        else
                          {
                            t = f_26;
                            {
                              ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
                              t = term_k_26;
                              e_3 = t;
                              t = term_p_21;
                              c_3 = t;
                              t = e_3;
                              f_3 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, b_14), term_k_26);
                              d_3 = t;
                              t = SSL_printnl(c_3, d_3);
                              t = b_14;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm n_21 = NULL,o_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_14 = ATgetArgument(t, 0);
                          c_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_14;
                      t = eval_config_0_0(t);
                      n_21 = t;
                      t = c_14;
                      t = eval_config_0_0(t);
                      o_21 = t;
                      t = SSL_strcat(n_21, o_21);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_14 = NULL,l_14 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL;
      j_14 = t;
      t = term_n_26;
      i_3 = t;
      t = term_h_26;
      g_3 = t;
      t = i_3;
      j_3 = t;
      t = term_n_26;
      h_3 = t;
      t = SSL_table_get(g_3, h_3);
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_21 = NULL,k_3 = NULL,m_3 = NULL,r_3 = NULL,s_3 = NULL;
            t = eval_config_0_0(t);
            v_21 = t;
            r_3 = t;
            t = term_h_26;
            k_3 = t;
            t = r_3;
            s_3 = t;
            t = term_n_26;
            m_3 = t;
            t = SSL_table_put(k_3, m_3, v_21);
            t = v_21;
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
          }
        l_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_14, term_q_26);
        t = geq_0_0(t);
        t = j_14;
        t = m_110(t);
      }
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
    }
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm n_14 = NULL;
  n_14 = t;
  if(match_string(t, "-k"))
    {
      t = n_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_14;
    }
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
  o_14 = t;
  t = SSL_string_to_int(o_14);
  p_14 = t;
  e_4 = t;
  t = term_h_26;
  c_4 = t;
  t = e_4;
  f_4 = t;
  t = term_r_26;
  d_4 = t;
  t = SSL_table_put(c_4, d_4, p_14);
  t = o_14;
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_18, n_18, o_18, t);
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  if(match_string(t, "-S"))
    {
      t = r_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_14;
    }
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  t = term_h_26;
  g_4 = t;
  t = j_4;
  k_4 = t;
  t = term_n_26;
  h_4 = t;
  t = k_4;
  l_4 = t;
  t = term_l_22;
  i_4 = t;
  t = SSL_table_put(g_4, h_4, i_4);
  t = term_t_26;
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm x_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  s_14 = t;
  t = SSL_string_to_int(s_14);
  t_14 = t;
  o_4 = t;
  t = term_h_26;
  m_4 = t;
  t = o_4;
  p_4 = t;
  t = term_n_26;
  n_4 = t;
  t = SSL_table_put(m_4, n_4, t_14);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_14);
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm f_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t_4 = t;
  t = term_h_26;
  q_4 = t;
  t = t_4;
  u_4 = t;
  t = term_w_26;
  r_4 = t;
  t = u_4;
  v_4 = t;
  t = term_c_19;
  s_4 = t;
  t = SSL_table_put(q_4, r_4, s_4);
  t = term_x_26;
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_18, s_18, t_18, t);
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_18, a_19, b_19, t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = Option_3_0(f_19, k_19, l_19, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_14 = NULL;
      t = term_c_19;
      t = d_0(t);
      y_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, y_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_14 = ATgetFirst((ATermList) t);
          x_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_14;
      t = a_0(t);
      t = term_c_19;
      t = b_0(t);
      b_15 = t;
      t = (ATerm) ATinsert(CheckATermList(x_14), b_15);
    }
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm d_15 = NULL;
  d_15 = t;
  if(match_string(t, "-o"))
    {
      t = d_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_15;
    }
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm e_15 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  e_15 = t;
  y_4 = t;
  t = term_h_26;
  w_4 = t;
  t = y_4;
  z_4 = t;
  t = term_f_27;
  x_4 = t;
  t = SSL_table_put(w_4, x_4, e_15);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_15);
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_19, n_19, p_19, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym__3))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
      j_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_15, i_15);
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_27 = ATgetArgument(t, 0);
            ATerm k_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_15, i_15);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATempty;
      }
    k_15 = t;
    b_5 = t;
    t = (ATerm) ATinsert(CheckATermList(k_15), j_15);
    a_5 = t;
    t = SSL_table_put(h_15, i_15, a_5);
    t = (ATerm) ATmakeAppl(sym__3, h_15, i_15, j_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_15 = NULL;
      t = term_c_19;
      t = k_0(t);
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_27, term_e_27, x_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_15 = ATgetFirst((ATermList) t);
          u_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_15 = ATgetFirst((ATermList) t);
          w_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_15;
      t = h_0(t);
      t = v_15;
      t = j_0(t);
      b_16 = t;
      t = (ATerm) ATinsert(CheckATermList(w_15), b_16);
    }
  return(t);
}
ATerm q_19 (ATerm t)
{
  ATerm d_16 = NULL;
  d_16 = t;
  if(match_string(t, "-i"))
    {
      t = d_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_16;
    }
  return(t);
}
ATerm w_19 (ATerm t)
{
  ATerm e_16 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  e_16 = t;
  e_5 = t;
  t = term_h_26;
  c_5 = t;
  t = e_5;
  f_5 = t;
  t = term_l_27;
  d_5 = t;
  t = SSL_table_put(c_5, d_5, e_16);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_16);
  return(t);
}
ATerm x_19 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_19, w_19, x_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_16 = NULL,l_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL,m_5 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_19;
  t = whoami_0_0(t);
  f_16 = t;
  i_5 = t;
  t = term_p_21;
  g_5 = t;
  t = i_5;
  k_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_27), f_16);
  h_5 = t;
  t = SSL_printnl(g_5, h_5);
  m_5 = t;
  t = term_s_21;
  l_5 = t;
  t = SSL_exit(l_5);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  t = term_o_27;
  q_5 = t;
  t = term_h_26;
  o_5 = t;
  t = q_5;
  r_5 = t;
  t = term_o_27;
  p_5 = t;
  t = SSL_table_get(o_5, p_5);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL,s_5 = NULL,t_5 = NULL,v_5 = NULL,x_5 = NULL;
        t = eval_config_0_0(t);
        z_21 = t;
        v_5 = t;
        t = term_h_26;
        s_5 = t;
        t = v_5;
        x_5 = t;
        t = term_o_27;
        t_5 = t;
        t = SSL_table_put(s_5, t_5, z_21);
        t = z_21;
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_98(t);
      ;
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm i_16 = NULL,j_16 = NULL,m_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_16 = ATgetFirst((ATermList) t);
            j_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_16;
        t = foldr_2_0(t_98, u_98, t);
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_16, m_16);
        t = u_98(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_19 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(e_22, f_22);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = SSL_addr(e_22, f_22);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_16 = NULL,a_22 = NULL,b_22 = NULL;
  t = times_0_0(t);
  a_22 = t;
  t = SSL_explode_term(a_22);
  if(match_cons(t, sym__2))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_22;
  t = foldr_2_0(y_19, z_19, t);
  p_16 = t;
  t = SSL_TicksToSeconds(p_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_17;
        if((e_17 != t))
          {
            _fail(t);
          }
        t = d_17;
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = d_17;
        {
          ATerm y_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_17, f_17);
              ;
              LocalPopChoice(z_27);
            }
          else
            {
              t = y_27;
              t = SSL_gtr(e_17, f_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_17, f_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL,o_17 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL;
      l_17 = t;
      t = term_n_26;
      a_6 = t;
      t = term_h_26;
      y_5 = t;
      t = a_6;
      b_6 = t;
      t = term_n_26;
      z_5 = t;
      t = SSL_table_get(y_5, z_5);
      {
        ATerm c_28 = t;
        int d_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_22 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
            t = eval_config_0_0(t);
            s_22 = t;
            e_6 = t;
            t = term_h_26;
            c_6 = t;
            t = e_6;
            f_6 = t;
            t = term_n_26;
            d_6 = t;
            t = SSL_table_put(c_6, d_6, s_22);
            t = s_22;
            ;
            LocalPopChoice(d_28);
          }
        else
          {
            t = c_28;
          }
        o_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_17, term_s_21);
        t = geq_0_0(t);
        t = l_17;
        t = l_110(t);
      }
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
    }
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  t = run_time_0_0(t);
  q_17 = t;
  t = term_c_19;
  t = whoami_0_0(t);
  r_17 = t;
  j_6 = t;
  t = term_p_21;
  h_6 = t;
  t = j_6;
  k_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_28), q_17), term_e_28), r_17);
  i_6 = t;
  t = SSL_printnl(h_6, i_6);
  t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_28), q_17), term_e_28), r_17));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_20, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_6 = NULL,o_6 = NULL;
  t = report_run_time_0_0(t);
  o_6 = t;
  t = term_l_22;
  m_6 = t;
  t = SSL_exit(m_6);
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,u_6 = NULL;
      t = term_m_28;
      s_6 = t;
      t = term_h_26;
      q_6 = t;
      t = s_6;
      u_6 = t;
      t = term_m_28;
      r_6 = t;
      t = SSL_table_get(q_6, r_6);
      {
        ATerm n_28 = t;
        int o_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_22 = NULL,w_6 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL;
            t = eval_config_0_0(t);
            w_22 = t;
            d_7 = t;
            t = term_h_26;
            w_6 = t;
            t = d_7;
            e_7 = t;
            t = term_m_28;
            c_7 = t;
            t = SSL_table_put(w_6, c_7, w_22);
            t = w_22;
            ;
            LocalPopChoice(o_28);
          }
        else
          {
            t = n_28;
          }
      }
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = fetch_1_0(b_20, t);
    }
  t = b_113(t);
  return(t);
}
ATerm map_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm s_17 (ATerm t)
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = Cons_2_0(s_93, s_17, t);
      }
    return(t);
  }
  t = s_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_17 = ATgetFirst((ATermList) t);
      v_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_17 = NULL,a_18 = NULL;
        t = v_17;
        t = f_0(t);
        z_17 = t;
        t = u_17;
        t = e_0(t);
        a_18 = t;
        t = v_17;
        {
          ATerm c_20 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_17), a_18);
            return(t);
          }
          t = reverse_acc_2_0(e_0, c_20, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_19;
      t = f_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_7 = NULL,g_7 = NULL;
  e_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_18);
  b_18 = t;
  t = c_18;
  t = n_81(t);
  d_18 = t;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_18);
  f_7 = t;
  t = SSLsetAnnotations(f_7, b_18);
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm e_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_18), term_r_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_7 = NULL,i_7 = NULL,l_7 = NULL,m_7 = NULL;
      t = term_o_27;
      l_7 = t;
      t = term_h_26;
      h_7 = t;
      t = l_7;
      m_7 = t;
      t = term_o_27;
      i_7 = t;
      t = SSL_table_get(h_7, i_7);
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_23 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL;
            t = eval_config_0_0(t);
            a_23 = t;
            r_7 = t;
            t = term_h_26;
            p_7 = t;
            t = r_7;
            s_7 = t;
            t = term_o_27;
            q_7 = t;
            t = SSL_table_put(p_7, q_7, a_23);
            t = a_23;
            ;
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
          }
      }
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      t = fetch_1_0(d_20, t);
    }
  t = term_w_28;
  t = echo_0_0(t);
  v_7 = t;
  t = term_d_27;
  t_7 = t;
  t = v_7;
  w_7 = t;
  t = term_e_27;
  u_7 = t;
  t = SSL_table_get(t_7, u_7);
  t = reverse_acc_2_0(_id, e_20, t);
  t = map_1_0(f_20, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,x_7 = NULL,y_7 = NULL;
  l_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_18);
  i_18 = t;
  t = j_18;
  t = o_81(t);
  k_18 = t;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_18);
  x_7 = t;
  t = SSLsetAnnotations(x_7, i_18);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,z_7 = NULL,a_8 = NULL;
  p_18 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_28 = ATgetFirst((ATermList) t);
                ATerm a_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_18;
          }
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATinsert(ATempty, p_18);
      }
    q_18 = t;
    a_8 = t;
    t = term_f_25;
    z_7 = t;
    t = SSL_printnl(z_7, q_18);
    t = p_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  t = term_o_27;
  d_8 = t;
  t = term_h_26;
  b_8 = t;
  t = d_8;
  e_8 = t;
  t = term_o_27;
  c_8 = t;
  t = SSL_table_get(b_8, c_8);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
        t = eval_config_0_0(t);
        e_23 = t;
        h_8 = t;
        t = term_h_26;
        f_8 = t;
        t = h_8;
        i_8 = t;
        t = term_o_27;
        g_8 = t;
        t = SSL_table_put(f_8, g_8, e_23);
        t = e_23;
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm g_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  t = term_h_26;
  j_8 = t;
  t = m_8;
  n_8 = t;
  t = term_d_29;
  k_8 = t;
  t = n_8;
  o_8 = t;
  t = term_c_19;
  l_8 = t;
  t = SSL_table_put(j_8, k_8, l_8);
  t = term_e_29;
  return(t);
}
ATerm l_20 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm m_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  s_8 = t;
  t = term_h_26;
  p_8 = t;
  t = s_8;
  t_8 = t;
  t = term_d_29;
  q_8 = t;
  t = t_8;
  u_8 = t;
  t = term_c_19;
  r_8 = t;
  t = SSL_table_put(p_8, q_8, r_8);
  y_8 = t;
  t = term_h_26;
  v_8 = t;
  t = y_8;
  z_8 = t;
  t = term_g_29;
  w_8 = t;
  t = z_8;
  a_9 = t;
  t = term_c_19;
  x_8 = t;
  t = SSL_table_put(v_8, w_8, x_8);
  t = term_h_29;
  return(t);
}
ATerm o_20 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_20, k_20, l_20, t);
      ;
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      t = Option_3_0(m_20, n_20, o_20, t);
    }
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm w_18 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,i_9 = NULL;
  w_18 = t;
  d_9 = t;
  t = term_h_26;
  b_9 = t;
  t = d_9;
  i_9 = t;
  t = term_o_27;
  c_9 = t;
  t = SSL_table_put(b_9, c_9, w_18);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm v_18 = NULL;
  v_18 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_29;
        t = e_115(t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
      }
    t = v_18;
    {
      ATerm q_20 (ATerm t)
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = q_29;
                t = e_115(t);
                t = Cons_2_0(_id, q_20, t);
              }
            ;
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            {
              ATerm y_18 = NULL,z_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_18 = ATgetFirst((ATermList) t);
                  z_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_18), (ATerm) ATmakeAppl(sym_Undefined_1, y_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_20, q_20, t);
    }
  }
  return(t);
}
ATerm s_20 (ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  if(match_string(t, "--help"))
    {
      t = j_19;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_19;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_19;
        }
    }
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm a_10 = NULL,f_10 = NULL,g_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  t = term_h_26;
  a_10 = t;
  t = n_10;
  o_10 = t;
  t = term_m_28;
  f_10 = t;
  t = o_10;
  p_10 = t;
  t = term_c_19;
  g_10 = t;
  t = SSL_table_put(a_10, f_10, g_10);
  t = term_s_29;
  return(t);
}
ATerm u_20 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm v_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_115 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,r_9 = NULL,s_9 = NULL,z_9 = NULL,m_13 = NULL,n_13 = NULL;
  g_19 = t;
  r_9 = t;
  t = term_d_27;
  k_9 = t;
  t = r_9;
  s_9 = t;
  t = term_e_27;
  l_9 = t;
  t = s_9;
  z_9 = t;
  t = (ATerm) ATempty;
  m_9 = t;
  t = SSL_table_put(k_9, l_9, m_9);
  t = g_19;
  {
    ATerm r_20 (ATerm t)
    {
      ATerm u_29 = t;
      int v_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_115(t);
          ;
          LocalPopChoice(v_29);
        }
      else
        {
          t = u_29;
          {
            ATerm w_29 = t;
            int x_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_20, t_20, u_20, t);
                ;
                LocalPopChoice(x_29);
              }
            else
              {
                t = w_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_20, t);
    {
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_19 = NULL;
          o_19 = t;
          {
            ATerm a_30 = t;
            int b_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_11 = NULL,w_11 = NULL;
                t = o_19;
                {
                  ATerm c_30 = t;
                  int d_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_10 = NULL,r_10 = NULL,b_11 = NULL,c_11 = NULL;
                      t = term_m_28;
                      b_11 = t;
                      t = term_h_26;
                      q_10 = t;
                      t = b_11;
                      c_11 = t;
                      t = term_m_28;
                      r_10 = t;
                      t = SSL_table_get(q_10, r_10);
                      {
                        ATerm e_30 = t;
                        int f_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_23 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL;
                            t = eval_config_0_0(t);
                            t_23 = t;
                            s_11 = t;
                            t = term_h_26;
                            q_11 = t;
                            t = s_11;
                            t_11 = t;
                            t = term_m_28;
                            r_11 = t;
                            t = SSL_table_put(q_11, r_11, t_23);
                            t = t_23;
                            ;
                            LocalPopChoice(f_30);
                          }
                        else
                          {
                            t = e_30;
                          }
                      }
                      ;
                      LocalPopChoice(d_30);
                    }
                  else
                    {
                      t = c_30;
                      t = fetch_1_0(v_20, t);
                    }
                  t = o_19;
                  t = default_system_usage_0_0(t);
                  w_11 = t;
                  t = term_l_22;
                  v_11 = t;
                  t = SSL_exit(v_11);
                }
                ;
                LocalPopChoice(b_30);
              }
            else
              {
                t = a_30;
                {
                  ATerm d_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL,d_13 = NULL,e_13 = NULL;
                  t = term_d_29;
                  l_12 = t;
                  t = term_h_26;
                  d_12 = t;
                  t = l_12;
                  m_12 = t;
                  t = term_d_29;
                  j_12 = t;
                  t = SSL_table_get(d_12, j_12);
                  {
                    ATerm g_30 = t;
                    int h_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_24 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,c_13 = NULL;
                        t = eval_config_0_0(t);
                        a_24 = t;
                        p_12 = t;
                        t = term_h_26;
                        n_12 = t;
                        t = p_12;
                        c_13 = t;
                        t = term_d_29;
                        o_12 = t;
                        t = SSL_table_put(n_12, o_12, a_24);
                        t = a_24;
                        ;
                        LocalPopChoice(h_30);
                      }
                    else
                      {
                        t = g_30;
                      }
                    t = o_19;
                    t = default_system_about_0_0(t);
                    e_13 = t;
                    t = term_l_22;
                    d_13 = t;
                    t = SSL_exit(d_13);
                  }
                }
              }
          }
          ;
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          {
            ATerm i_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
                ATerm w_20 (ATerm t)
                {
                  ATerm x_20 (ATerm t)
                  {
                    if(((h_19 != NULL) && (h_19 != t)))
                      _fail(t);
                    else
                      h_19 = t;
                    return(t);
                  }
                  t = Undefined_1_0(x_20, t);
                  return(t);
                }
                t = fetch_1_0(w_20, t);
                i_13 = t;
                t = term_p_21;
                f_13 = t;
                t = i_13;
                j_13 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_19)), term_k_30);
                h_13 = t;
                t = SSL_printnl(f_13, h_13);
                t = (ATerm) ATmakeAppl(sym__2, term_p_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_19)), term_k_30));
                t = default_system_usage_0_0(t);
                l_13 = t;
                t = term_s_21;
                k_13 = t;
                t = SSL_exit(k_13);
                ;
                LocalPopChoice(j_30);
              }
            else
              {
                t = i_30;
              }
          }
        }
      i_19 = t;
      n_13 = t;
      t = term_d_27;
      m_13 = t;
      t = SSL_table_destroy(m_13);
      t = i_19;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  t = parse_options_1_0(d_113, t);
  r_19 = t;
  q_13 = t;
  t = term_l_30;
  o_13 = t;
  t = SSL_table_create(o_13);
  t_13 = t;
  t = term_l_30;
  r_13 = t;
  t = t_13;
  u_13 = t;
  t = term_m_30;
  s_13 = t;
  t = SSL_table_put(r_13, s_13, r_19);
  t = r_19;
  t = f_113(t);
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_113, t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm p_30 = t;
          int q_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_30);
            }
          else
            {
              t = p_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_20 (ATerm t)
{
  t = if_verbose2_1_0(f_21, t);
  return(t);
}
ATerm b_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_21 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,d_14 = NULL;
  y_13 = t;
  t = term_h_26;
  v_13 = t;
  t = y_13;
  z_13 = t;
  t = term_r_30;
  w_13 = t;
  t = z_13;
  d_14 = t;
  t = term_c_19;
  x_13 = t;
  t = SSL_table_put(v_13, w_13, x_13);
  t = term_s_30;
  return(t);
}
ATerm d_21 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,z_14 = NULL,a_15 = NULL,c_15 = NULL,f_15 = NULL;
  s_19 = t;
  t = term_o_27;
  g_14 = t;
  t = term_h_26;
  e_14 = t;
  t = g_14;
  h_14 = t;
  t = term_o_27;
  f_14 = t;
  t = SSL_table_get(e_14, f_14);
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL,i_14 = NULL,k_14 = NULL,u_14 = NULL,v_14 = NULL;
        t = eval_config_0_0(t);
        e_24 = t;
        u_14 = t;
        t = term_h_26;
        i_14 = t;
        t = u_14;
        v_14 = t;
        t = term_o_27;
        k_14 = t;
        t = SSL_table_put(i_14, k_14, e_24);
        t = e_24;
        ;
        LocalPopChoice(v_30);
      }
    else
      {
        t = u_30;
      }
    t_19 = t;
    c_15 = t;
    t = term_p_21;
    z_14 = t;
    t = c_15;
    f_15 = t;
    t = (ATerm) ATinsert(ATempty, t_19);
    a_15 = t;
    t = SSL_printnl(z_14, a_15);
    t = s_19;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm t)
{
  ATerm y_20 (ATerm t)
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_112(t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
              {
                ATerm a_31 = t;
                int b_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(b_31);
                  }
                else
                  {
                    t = a_31;
                    {
                      ATerm c_31 = t;
                      int d_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_21, c_21, d_21, t);
                          ;
                          LocalPopChoice(d_31);
                        }
                      else
                        {
                          t = c_31;
                          {
                            ATerm e_31 = t;
                            int f_31 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_31);
                              }
                            else
                              {
                                t = e_31;
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
  ATerm a_21 (ATerm t)
  {
    ATerm u_19 = NULL,v_19 = NULL,h_24 = NULL;
    u_19 = t;
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_21 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_21, t);
          ;
          LocalPopChoice(h_31);
        }
      else
        {
          t = g_31;
          t = term_i_31;
          v_19 = t;
        }
      t = not_null(v_19);
      t = ReadFromFile_0_0(t);
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_19, h_24);
      t = apply_strategy_1_0(m_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(y_20, o_112, z_20, a_21, t);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = _2_0(_id, i_21, t);
  return(t);
}
ATerm i_21 (ATerm t)
{
  t = Specification_1_0(j_21, t);
  return(t);
}
ATerm j_21 (ATerm t)
{
  t = Cons_2_0(_id, k_21, t);
  return(t);
}
ATerm k_21 (ATerm t)
{
  t = Cons_2_0(l_21, m_21, t);
  return(t);
}
ATerm l_21 (ATerm t)
{
  t = Strategies_1_0(rename_sdefs_0_0, t);
  return(t);
}
ATerm m_21 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_21, _fail, default_usage_0_0, t);
  return(t);
}

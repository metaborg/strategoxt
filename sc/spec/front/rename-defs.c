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
ATerm term_y_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_m_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_z_7;
ATerm term_t_7;
ATerm term_j_7;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_j_7);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_7);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_o_6);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_j_12);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_o_6);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_o_6);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_o_6);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_y_16, term_o_6);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm l_1 (ATerm a_1, ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm j_75 (ATerm), ATerm);
ATerm b_5 (ATerm u_103 (ATerm), ATerm r_55, ATerm p_55, ATerm);
ATerm d_5 (ATerm s_52, ATerm t_52, ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm Cify_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm t_91 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm i_2 (ATerm);
ATerm n_2 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_60 (ATerm), ATerm p_60 (ATerm), ATerm);
ATerm h_5 (ATerm s_42, ATerm t_42, ATerm);
ATerm i_5 (ATerm g_46, ATerm h_46, ATerm);
ATerm k_5 (ATerm z_96 (ATerm), ATerm d_442, ATerm k_46, ATerm);
ATerm j_5 (ATerm c_46, ATerm d_46, ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm a_22 (ATerm u_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_5 (ATerm i_46, ATerm);
ATerm m_5 (ATerm u_42, ATerm v_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm u_23 (ATerm t_22, ATerm);
ATerm v_23 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm);
ATerm w_23 (ATerm h_23, ATerm i_23, ATerm j_23, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm g_5 (ATerm i_40, ATerm j_40, ATerm);
ATerm debug_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_98 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm f_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_5 (ATerm j_47, ATerm k_47, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_5 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_5 (ATerm q_32, ATerm r_32, ATerm);
ATerm foldr_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm need_help_1_0 (ATerm z_100 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm p_5 (ATerm y_53, ATerm z_53, ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm f_5 (ATerm);
ATerm o_5 (ATerm);
ATerm r_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_103 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm parse_options_1_0 (ATerm b_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm iowrap_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,o_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_p_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_6), b_0), term_q_6);
  s_0 = t;
  t = SSL_printnl(o_0, s_0);
  t = term_s_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm l_1 (ATerm a_1, ATerm t)
{
  ATerm d_1 = NULL,w_0 = NULL;
  t = term_u_6;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, a_1);
  t = d_5(w_0, a_1, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_6) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_1;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm g_1 = NULL,i_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_7 = ATgetArgument(t, 0);
            ATerm b_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_6);
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 = NULL,q_1 = NULL;
              t = term_u_6;
              q_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_u_6, g_1);
              t = d_5(q_1, g_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  n_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_1;
              ;
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              t = l_1(g_1, t);
            }
        }
      }
    else
      {
        t = y_6;
        t = l_1(g_1, t);
      }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(k_2, l_2, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  if(match_cons(t, sym__2))
    {
      o_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(o_2, p_2, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm n_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      n_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(n_3, u_3, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  q_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      r_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
      p_3 = ATgetArgument(t, 2);
      {
        ATerm e_2 = NULL,g_2 = NULL,j_2 = NULL;
        t = r_3;
        if(match_cons(t, sym_SVar_1))
          {
            s_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_3;
        t = foldr_3_0(t_0, v_0, x_0, t);
        e_2 = t;
        t = p_3;
        t = foldr_3_0(c_1, e_1, f_1, t);
        g_2 = t;
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATmakeAppl(sym__2, e_2, g_2));
              t = RenameVar_0_0(t);
              j_2 = t;
              ;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              t = s_3;
              t = HoArg_0_0(t);
              j_2 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_2), t_3, p_3);
        }
      }
    }
  else
    {
      ATerm d_3 = NULL,j_3 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          r_3 = ATgetArgument(t, 0);
          t_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_3;
      if(match_cons(t, sym_SVar_1))
        {
          s_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_3;
      t = foldr_3_0(h_1, j_1, m_1, t);
      d_3 = t;
      {
        ATerm n_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, s_3, d_3);
            t = RenameVar_0_0(t);
            j_3 = t;
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = n_7;
            t = s_3;
            t = HoArg_0_0(t);
            j_3 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_3), t_3);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm j_75 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = topdown_1_0(j_75, t);
    return(t);
  }
  t = j_75(t);
  t = SRTS_all(o_1, t);
  return(t);
}
ATerm b_5 (ATerm u_103 (ATerm), ATerm r_55, ATerm p_55, ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL;
  d_4 = t;
  t = u_103(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_4, r_55, p_55);
  t = q_5(a_4, r_55, p_55, t);
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL;
        t = term_t_7;
        h_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_4, term_t_7);
        t = p_5(a_4, h_4, t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_4 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_t_7;
    e_4 = t;
    t = (ATerm) ATinsert(CheckATermList(c_4), (ATerm) ATinsert(CheckATermList(b_4), r_55));
    g_4 = t;
    t = SSL_table_put(a_4, e_4, g_4);
    t = d_4;
  }
  return(t);
}
ATerm d_5 (ATerm s_52, ATerm t_52, ATerm t)
{
  ATerm i_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_52, t_52);
  t = p_5(s_52, t_52, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      {
        ATerm v_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  {
    ATerm w_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = term_z_7;
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_7, k_6);
        t = d_5(e_5, k_6, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(x_7);
      }
    else
      {
        t = w_7;
        {
          ATerm a_8 = t;
          int b_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_5 = NULL,y_5 = NULL;
              t = term_z_7;
              y_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_z_7, k_6);
              t = d_5(y_5, k_6, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  v_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_5;
              ;
              LocalPopChoice(b_8);
            }
          else
            {
              t = a_8;
              {
                ATerm d_8 = t;
                int e_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_6 = NULL;
                    t = term_z_7;
                    m_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_7, k_6);
                    t = d_5(m_6, k_6, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(e_8);
                  }
                else
                  {
                    t = d_8;
                    {
                      ATerm t_6 = NULL,w_6 = NULL;
                      t = term_z_7;
                      w_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_z_7, k_6);
                      t = d_5(w_6, k_6, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm f_8 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                            _fail(t);
                          t_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_6;
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Cify_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,e_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_7 = ATgetFirst((ATermList) t);
      e_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_7;
  if(match_int(t, 95))
    {
      ATerm m_7 = NULL;
      t = e_7;
      t = r_0(t);
      m_7 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(m_7), term_g_8), term_g_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm o_7 = NULL;
          t = e_7;
          t = r_0(t);
          o_7 = t;
          t = (ATerm) ATinsert(CheckATermList(o_7), term_g_8);
        }
      else
        {
          ATerm q_7 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = e_7;
          t = r_0(t);
          q_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_7), term_g_8), term_h_8), term_g_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm t_91 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_7 = NULL,y_7 = NULL;
  y_7 = t;
  t = SSL_explode_string(y_7);
  {
    ATerm r_8 (ATerm t)
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_91(r_8, t);
          ;
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
            p_8 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_8 = ATgetFirst((ATermList) t);
                o_8 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm d_7 = NULL,h_7 = NULL,q_0 = NULL;
                  t = SSLgetAnnotations(p_8);
                  d_7 = t;
                  t = o_8;
                  t = r_8(t);
                  h_7 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_7), n_8);
                  q_0 = t;
                  t = SSLsetAnnotations(q_0, d_7);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_8;
              }
          }
        }
      return(t);
    }
    t = r_8(t);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = SSL_implode_string(u_7);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,b_9 = NULL;
  y_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_8;
      t = n_86(t);
    }
  else
    {
      ATerm e_9 = NULL,h_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_8 = ATgetFirst((ATermList) t);
          b_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_8;
      t = p_86(t);
      e_9 = t;
      t = b_9;
      t = foldr_3_0(n_86, o_86, p_86, t);
      h_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_9, h_9);
      t = o_86(t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  if(match_cons(t, sym__2))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(u_9, v_9, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  if(match_cons(t, sym__2))
    {
      w_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(w_9, x_9, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_u_6;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(y_12, z_12, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_u_6;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
      j_15 = ATgetArgument(t, 2);
      d_15 = ATgetArgument(t, 3);
      {
        ATerm k_9 = NULL,l_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,h_10 = NULL,i_10 = NULL;
        t = i_15;
        t = foldr_3_0(p_1, r_1, s_1, t);
        k_9 = t;
        t = j_15;
        t = foldr_3_0(t_1, u_1, v_1, t);
        l_9 = t;
        t = h_15;
        if(match_cons(t, sym_Mod_2))
          {
            h_10 = ATgetArgument(t, 0);
            i_10 = ATgetArgument(t, 1);
            {
              ATerm k_8 = t;
              int l_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_11 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_10), term_m_8), h_10);
                  v_11 = t;
                  t = SSL_concat_strings(v_11);
                  ;
                  LocalPopChoice(l_8);
                }
              else
                {
                  t = k_8;
                  t = h_15;
                }
            }
          }
        else
          {
            t = h_15;
          }
        t = escape_1_0(Cify_1_0, t);
        o_9 = t;
        t = SSL_int_to_string(k_9);
        p_9 = t;
        t = SSL_int_to_string(l_9);
        q_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_9), term_q_8), p_9), term_q_8), o_9);
        t_9 = t;
        t = SSL_concat_strings(t_9);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_15, (ATerm) ATmakeAppl(sym__2, k_9, l_9));
        r_9 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_8, n_9);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_15, (ATerm) ATmakeAppl(sym__2, k_9, l_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_8, n_9));
        t = b_5(w_1, r_9, s_9, t);
        t = n_9;
        {
          ATerm t_8 = t;
          int u_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_10 = NULL,u_10 = NULL;
              t = h_15;
              t = HoArg_0_0(t);
              t_10 = t;
              t = term_v_8;
              u_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_15, term_v_8);
              t = b_5(z_1, h_15, u_10, t);
              t = t_10;
              ;
              LocalPopChoice(u_8);
            }
          else
            {
              t = t_8;
              {
                ATerm v_10 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_8, n_9);
                v_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_15, (ATerm) ATmakeAppl(sym_Defined_2, term_w_8, n_9));
                t = b_5(a_2, h_15, v_10, t);
                t = n_9;
              }
            }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, n_9, i_15, j_15, d_15);
        }
      }
    }
  else
    {
      ATerm h_12 = NULL,n_12 = NULL,q_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,h_13 = NULL,j_13 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          h_15 = ATgetArgument(t, 0);
          i_15 = ATgetArgument(t, 1);
          j_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_15;
      t = foldr_3_0(b_2, c_2, d_2, t);
      h_12 = t;
      t = h_15;
      if(match_cons(t, sym_Mod_2))
        {
          h_13 = ATgetArgument(t, 0);
          j_13 = ATgetArgument(t, 1);
          {
            ATerm x_8 = t;
            int a_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_14 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_13), term_m_8), h_13);
                q_14 = t;
                t = SSL_concat_strings(q_14);
                ;
                LocalPopChoice(a_9);
              }
            else
              {
                t = x_8;
                t = h_15;
              }
          }
        }
      else
        {
          t = h_15;
        }
      t = escape_1_0(Cify_1_0, t);
      q_12 = t;
      t = SSL_int_to_string(h_12);
      s_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_12), term_q_8), q_12);
      v_12 = t;
      t = SSL_concat_strings(v_12);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_15, h_12);
      t_12 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_9, n_12);
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_15, h_12), (ATerm) ATmakeAppl(sym_Defined_2, term_c_9, n_12));
      t = b_5(f_2, t_12, u_12, t);
      t = n_12;
      {
        ATerm d_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = NULL,r_13 = NULL;
            t = h_15;
            t = HoArg_0_0(t);
            q_13 = t;
            t = term_v_8;
            r_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_15, term_v_8);
            t = b_5(i_2, h_15, r_13, t);
            t = q_13;
            ;
            LocalPopChoice(f_9);
          }
        else
          {
            t = d_9;
            {
              ATerm s_13 = NULL;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, n_12);
              s_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_15, (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, n_12));
              t = b_5(n_2, h_15, s_13, t);
              t = n_12;
            }
          }
        t = (ATerm) ATmakeAppl(sym_SDef_3, n_12, i_15, j_15);
      }
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = topdown_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(q_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_60 (ATerm), ATerm p_60 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,u_0 = NULL;
  g_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_16 = ATgetFirst((ATermList) t);
      b_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_16);
  z_15 = t;
  t = a_16;
  t = o_60(t);
  c_16 = t;
  t = b_16;
  t = p_60(t);
  f_16 = t;
  t = (ATerm) ATinsert(CheckATermList(f_16), c_16);
  u_0 = t;
  t = SSLsetAnnotations(u_0, z_15);
  return(t);
}
ATerm h_5 (ATerm s_42, ATerm t_42, ATerm t)
{
  ATerm h_16 = NULL;
  t = SSL_fputc(s_42, t_42);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_16);
  return(t);
}
ATerm i_5 (ATerm g_46, ATerm h_46, ATerm t)
{
  ATerm k_16 = NULL;
  t = SSL_write_term_to_stream_text(g_46, h_46);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_16);
  return(t);
}
ATerm k_5 (ATerm z_96 (ATerm), ATerm d_442, ATerm k_46, ATerm t)
{
  ATerm m_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_442, term_m_9);
  t = open_stream_0_0(t);
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_16, k_46);
  t = z_96(t);
  t = fclose_0_0(t);
  t = k_46;
  return(t);
}
ATerm j_5 (ATerm c_46, ATerm d_46, ATerm t)
{
  ATerm n_16 = NULL;
  t = SSL_write_term_to_stream_baf(c_46, d_46);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_16);
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          r_15 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(r_15, s_15, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,u_16 = NULL,v_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(match_cons(z_9, sym_Stream_1))
        {
          u_16 = ATgetArgument(z_9, 0);
        }
      else
        _fail(t);
      v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(u_16, v_16, t);
  p_16 = t;
  t = term_a_10;
  q_16 = t;
  t = p_16;
  if(match_cons(t, sym_Stream_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, p_16);
  t = h_5(q_16, r_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,k_17 = NULL,o_17 = NULL,k_20 = NULL,q_20 = NULL,z_0 = NULL,y_0 = NULL;
  t_16 = t;
  if(match_cons(t, sym__2))
    {
      h_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_16);
  g_17 = t;
  t = h_17;
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_16 != NULL) && (s_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_2, t);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = term_d_10;
        s_16 = t;
      }
    if(((o_17 != NULL) && (o_17 != t)))
      _fail(t);
    else
      o_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_17, k_17);
    if(((y_0 != NULL) && (y_0 != t)))
      _fail(t);
    else
      y_0 = t;
    t = SSLsetAnnotations(y_0, g_17);
    t = t_16;
    if(match_cons(t, sym__2))
      {
        if(((b_17 != NULL) && (b_17 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_17 = ATgetArgument(t, 0);
        if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_16);
    if(((a_17 != NULL) && (a_17 != t)))
      _fail(t);
    else
      a_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_17, (ATerm) ATmakeAppl(sym__2, not_null(s_16), c_17));
    if(((z_0 != NULL) && (z_0 != t)))
      _fail(t);
    else
      z_0 = t;
    t = SSLsetAnnotations(z_0, a_17);
    if(((f_17 != NULL) && (f_17 != t)))
      _fail(t);
    else
      f_17 = t;
    if(match_cons(t, sym__2))
      {
        if(((k_20 != NULL) && (k_20 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          k_20 = ATgetArgument(t, 0);
        if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_14 = NULL,g_15 = NULL,k_15 = NULL,l_15 = NULL,p_15 = NULL,b_1 = NULL;
          t = SSLgetAnnotations(f_17);
          x_14 = t;
          t = k_20;
          t = fetch_1_0(t_2, t);
          g_15 = t;
          t = q_20;
          if(match_cons(t, sym__2))
            {
              l_15 = ATgetArgument(t, 0);
              p_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_5(u_2, l_15, p_15, t);
          k_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_15, k_15);
          b_1 = t;
          t = SSLsetAnnotations(b_1, x_14);
          ;
          LocalPopChoice(f_10);
        }
      else
        {
          t = e_10;
          {
            ATerm d_16 = NULL,j_16 = NULL,l_16 = NULL,o_16 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(f_17);
            d_16 = t;
            t = q_20;
            if(match_cons(t, sym__2))
              {
                l_16 = ATgetArgument(t, 0);
                o_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_5(v_2, l_16, o_16, t);
            j_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_20, j_16);
            k_1 = t;
            t = SSLsetAnnotations(k_1, d_16);
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
ATerm apply_strategy_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,f_21 = NULL;
  f_21 = t;
  t = dtime_0_0(t);
  t = f_21;
  t = b_100(t);
  b_21 = t;
  t = dtime_0_0(t);
  w_20 = t;
  t = b_21;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_20), (ATerm) ATmakeAppl(sym_Runtime_1, w_20)), a_21);
  return(t);
}
ATerm a_22 (ATerm u_21, ATerm t)
{
  t = SSL_fclose(u_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  y_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_21 = ATgetArgument(t, 0);
      {
        ATerm g_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_21);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = g_10;
            t = a_22(y_21, t);
          }
      }
    }
  else
    {
      t = a_22(y_21, t);
    }
  return(t);
}
ATerm l_5 (ATerm i_46, ATerm t)
{
  t = SSL_read_term_from_stream(i_46);
  return(t);
}
ATerm m_5 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm d_22 = NULL;
  t = SSL_fopen(u_42, v_42);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_stdin_stream();
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_22 = NULL;
  t = SSL_stdout_stream();
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_22 = NULL;
  t = SSL_stderr_stream();
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_22);
  return(t);
}
ATerm u_23 (ATerm t_22, ATerm t)
{
  ATerm u_22 = NULL;
  t = SSL_explode_term(t_22);
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_10 = ATgetArgument(t, 1);
        if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
          {
            u_22 = ATgetFirst((ATermList) l_10);
            {
              ATerm m_10 = (ATerm) ATgetNext((ATermList) l_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm v_23 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,f_23 = NULL,x_1 = NULL;
  t = SSLgetAnnotations(z_22);
  c_23 = t;
  t = x_22;
  if(match_cons(t, sym_Path_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_23, y_22);
  x_1 = t;
  t = SSLsetAnnotations(x_1, c_23);
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(a_23, b_23, t);
  return(t);
}
ATerm w_23 (ATerm h_23, ATerm i_23, ATerm j_23, ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,p_23 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(j_23);
  m_23 = t;
  t = SSL_is_string(h_23);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_23, i_23);
  y_1 = t;
  t = SSLsetAnnotations(y_1, m_23);
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(k_23, l_23, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      ATerm o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  r_23 = t;
  if(match_cons(t, sym__2))
    {
      s_23 = ATgetArgument(t, 0);
      t_23 = ATgetArgument(t, 1);
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_23(r_23, t);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            {
              ATerm r_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_23(s_23, t_23, r_23, t);
                  ;
                  LocalPopChoice(s_10);
                }
              else
                {
                  t = r_10;
                  t = w_23(s_23, t_23, r_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_23(r_23, t);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = NULL;
      a_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_24, term_z_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      t = debug_1_0(x_2, t);
      _fail(t);
    }
  y_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(z_23, t);
  x_23 = t;
  t = y_23;
  t = fclose_0_0(t);
  t = x_23;
  return(t);
}
ATerm fetch_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm y_24 (ATerm t)
  {
    ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
    v_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_24 = ATgetFirst((ATermList) t);
        x_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_11 = t;
      int b_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_17 = NULL,u_17 = NULL,h_2 = NULL;
          t = SSLgetAnnotations(v_24);
          q_17 = t;
          t = w_24;
          t = u_81(t);
          u_17 = t;
          t = (ATerm) ATinsert(CheckATermList(x_24), u_17);
          h_2 = t;
          t = SSLsetAnnotations(h_2, q_17);
          ;
          LocalPopChoice(b_11);
        }
      else
        {
          t = a_11;
          {
            ATerm n_18 = NULL,t_18 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(v_24);
            n_18 = t;
            t = x_24;
            t = y_24(t);
            t_18 = t;
            t = (ATerm) ATinsert(CheckATermList(t_18), w_24);
            m_2 = t;
            t = SSLsetAnnotations(m_2, n_18);
          }
        }
    }
    return(t);
  }
  t = y_24(t);
  return(t);
}
ATerm g_5 (ATerm i_40, ATerm j_40, ATerm t)
{
  t = SSL_strcat(i_40, j_40);
  return(t);
}
ATerm debug_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  b_25 = t;
  t = x_96(t);
  c_25 = t;
  t = term_p_6;
  d_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_25), c_25);
  e_25 = t;
  t = SSL_printnl(d_25, e_25);
  t = b_25;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_25 = NULL;
      l_25 = t;
      t = SSL_is_string(l_25);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_2, t);
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
              r_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_25 = ATgetArgument(t, 0);
                  t = s_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_25 = ATgetArgument(t, 0);
                      t = s_25;
                      {
                        ATerm j_11 = t;
                        int k_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_11);
                          }
                        else
                          {
                            t = j_11;
                            t = debug_1_0(z_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_25 = NULL,y_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_25 = ATgetArgument(t, 0);
                          t_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_25;
                      t = eval_config_0_0(t);
                      x_25 = t;
                      t = t_25;
                      t = eval_config_0_0(t);
                      y_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_25, y_25);
                      t = g_5(x_25, y_25, t);
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
  ATerm c_26 = NULL,d_26 = NULL;
  c_26 = t;
  t = term_l_11;
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, c_26);
  t = p_5(d_26, c_26, t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_26 = NULL,f_26 = NULL;
        t = eval_config_0_0(t);
        e_26 = t;
        t = term_l_11;
        f_26 = t;
        t = SSL_table_put(f_26, c_26, e_26);
        t = e_26;
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
ATerm if_verbose2_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        t = term_q_11;
        t = get_config_0_0(t);
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_26, term_r_11);
        t = geq_0_0(t);
        t = j_26;
        t = k_98(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = j_26;
      }
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  if(match_string(t, "-k"))
    {
      t = o_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_26;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  t = SSL_string_to_int(p_26);
  q_26 = t;
  t = term_s_11;
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, q_26);
  t = s_5(r_26, q_26, t);
  t = p_26;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, c_3, f_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  if(match_string(t, "-S"))
    {
      t = t_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_26;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  t = term_q_11;
  u_26 = t;
  t = term_j_7;
  v_26 = t;
  t = term_u_11;
  t = s_5(u_26, v_26, t);
  t = term_w_11;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  t = SSL_string_to_int(w_26);
  x_26 = t;
  t = term_q_11;
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, x_26);
  t = s_5(y_26, x_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_26);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  t = term_z_11;
  z_26 = t;
  t = term_o_6;
  a_27 = t;
  t = term_a_12;
  t = s_5(z_26, a_27, t);
  t = term_b_12;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, l_3, t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_3, w_3, x_3, t);
            ;
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = Option_3_0(f_4, j_4, k_4, t);
          }
      }
    }
  return(t);
}
ATerm s_5 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm b_27 = NULL;
  t = term_l_11;
  b_27 = t;
  t = SSL_table_put(b_27, j_47, k_47);
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, j_47, k_47);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
      t = term_o_6;
      t = h_0(t);
      g_27 = t;
      t = term_i_12;
      h_27 = t;
      t = term_j_12;
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, g_27);
      t = q_5(h_27, i_27, g_27, t);
      _fail(t);
    }
  else
    {
      ATerm l_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_27 = ATgetFirst((ATermList) t);
          f_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_27;
      t = d_0(t);
      t = term_o_6;
      t = e_0(t);
      l_27 = t;
      t = (ATerm) ATinsert(CheckATermList(f_27), l_27);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  if(match_string(t, "-o"))
    {
      t = n_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_27;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  o_27 = t;
  t = term_k_12;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, o_27);
  t = s_5(p_27, o_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_27);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
ATerm q_5 (ATerm h_52, ATerm i_52, ATerm g_52, ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,v_27 = NULL;
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
  {
    ATerm m_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_12 = ATgetArgument(t, 0);
            ATerm r_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
        t = p_5(h_52, i_52, t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = m_12;
        t = (ATerm) ATempty;
      }
    s_27 = t;
    t = (ATerm) ATinsert(CheckATermList(s_27), g_52);
    v_27 = t;
    t = SSL_table_put(h_52, i_52, v_27);
    t = r_27;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
      t = term_o_6;
      t = p_0(t);
      g_28 = t;
      t = term_i_12;
      h_28 = t;
      t = term_j_12;
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, g_28);
      t = q_5(h_28, i_28, g_28, t);
      _fail(t);
    }
  else
    {
      ATerm m_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_28 = ATgetFirst((ATermList) t);
          d_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_28 = ATgetFirst((ATermList) t);
          f_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_28;
      t = m_0(t);
      t = e_28;
      t = n_0(t);
      m_28 = t;
      t = (ATerm) ATinsert(CheckATermList(f_28), m_28);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-i"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  p_28 = t;
  t = term_w_12;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, p_28);
  t = s_5(q_28, p_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_28);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_6;
  t = whoami_0_0(t);
  r_28 = t;
  t = term_p_6;
  t_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_13), r_28);
  u_28 = t;
  t = SSL_printnl(t_28, u_28);
  t = term_s_6;
  s_28 = t;
  t = SSL_exit(s_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_5 (ATerm q_32, ATerm r_32, ATerm t)
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_32, r_32);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      t = SSL_addr(q_32, r_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_28;
      t = l_86(t);
    }
  else
    {
      ATerm b_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_28 = ATgetFirst((ATermList) t);
          y_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_28;
      t = foldr_2_0(l_86, m_86, t);
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, b_29);
      t = m_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(p_19, q_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_29 = NULL,l_19 = NULL,m_19 = NULL;
  t = times_0_0(t);
  m_19 = t;
  t = SSL_explode_term(m_19);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_19;
  t = foldr_2_0(r_4, s_4, t);
  e_29 = t;
  t = SSL_TicksToSeconds(e_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_29;
        if((r_29 != t))
          {
            _fail(t);
          }
        t = q_29;
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
        {
          ATerm i_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_29, s_29);
              ;
              LocalPopChoice(k_13);
            }
          else
            {
              t = i_13;
              t = SSL_gtr(r_29, s_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL;
        t = term_q_11;
        t = get_config_0_0(t);
        y_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_29, term_s_6);
        t = geq_0_0(t);
        t = w_29;
        t = j_98(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = w_29;
      }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,d_30 = NULL,e_30 = NULL;
  t = run_time_0_0(t);
  a_30 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  b_30 = t;
  t = term_p_6;
  d_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), a_30), term_n_13), b_30);
  e_30 = t;
  t = SSL_printnl(d_30, e_30);
  t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), a_30), term_n_13), b_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_7;
  f_30 = t;
  t = SSL_exit(f_30);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_30 = ATgetArgument(t, 0);
          {
            ATerm h_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(s_30);
            h_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_30);
            w_2 = t;
            t = SSLsetAnnotations(w_2, h_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm p_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = p_13;
      t = fetch_1_0(u_4, t);
    }
  t = z_100(t);
  return(t);
}
ATerm map_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm i_31 (ATerm t)
  {
    ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
    f_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_31;
      }
    else
      {
        ATerm r_20 = NULL,x_20 = NULL,y_20 = NULL,b_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_31 = ATgetFirst((ATermList) t);
            h_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_31);
        r_20 = t;
        t = g_31;
        t = k_81(t);
        x_20 = t;
        t = h_31;
        t = i_31(t);
        y_20 = t;
        t = (ATerm) ATinsert(CheckATermList(y_20), x_20);
        b_3 = t;
        t = SSLsetAnnotations(b_3, r_20);
      }
    return(t);
  }
  t = i_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_31 = ATgetFirst((ATermList) t);
      m_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_31 = NULL,r_31 = NULL;
        ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_31)), not_null(r_31));
          return(t);
        }
        t = m_31;
        t = k_0(t);
        if(((q_31 != NULL) && (q_31 != t)))
          _fail(t);
        else
          q_31 = t;
        t = l_31;
        t = j_0(t);
        if(((r_31 != NULL) && (r_31 != t)))
          _fail(t);
        else
          r_31 = t;
        t = m_31;
        t = reverse_acc_2_0(j_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_6;
      t = k_0(t);
    }
  return(t);
}
ATerm p_5 (ATerm y_53, ATerm z_53, ATerm t)
{
  t = SSL_table_get(y_53, z_53);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,e_3 = NULL;
  x_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_31);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_31);
  e_3 = t;
  t = SSLsetAnnotations(e_3, v_31);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_31), term_v_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = fetch_1_0(w_4, t);
    }
  t = term_y_13;
  t = echo_0_0(t);
  t = term_i_12;
  t_31 = t;
  t = term_j_12;
  u_31 = t;
  t = term_z_13;
  t = p_5(t_31, u_31, t);
  t = reverse_acc_2_0(_id, x_4, t);
  t = map_1_0(y_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_14 = ATgetFirst((ATermList) t);
                ATerm d_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_32;
          }
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATinsert(ATempty, b_32);
      }
    c_32 = t;
    t = term_d_10;
    d_32 = t;
    t = SSL_printnl(d_32, c_32);
    t = b_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  t = term_e_14;
  h_32 = t;
  t = term_o_6;
  i_32 = t;
  t = term_f_14;
  t = s_5(h_32, i_32, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  t = term_e_14;
  l_32 = t;
  t = term_o_6;
  m_32 = t;
  t = term_f_14;
  t = s_5(l_32, m_32, t);
  t = term_h_14;
  j_32 = t;
  t = term_o_6;
  k_32 = t;
  t = term_i_14;
  t = s_5(j_32, k_32, t);
  t = term_j_14;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, a_5, c_5, t);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      t = Option_3_0(f_5, o_5, r_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,y_32 = NULL,z_32 = NULL,g_3 = NULL;
  t_32 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_14;
        t = c_103(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
      }
    t = t_32;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_32 = ATgetFirst((ATermList) t);
        w_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_32);
    u_32 = t;
    t = term_b_13;
    z_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_13, v_32);
    t = s_5(z_32, v_32, t);
    t = w_32;
    {
      ATerm j_33 (ATerm t)
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_33 = NULL;
                c_33 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_33;
                ;
                LocalPopChoice(u_14);
              }
            else
              {
                t = t_14;
                t = c_103(t);
                t = Cons_2_0(_id, j_33, t);
              }
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
              ATerm f_33 = NULL,g_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_33 = ATgetFirst((ATermList) t);
                  g_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(g_33), (ATerm) ATmakeAppl(sym_Undefined_1, f_33));
            }
          }
        return(t);
      }
      t = j_33(t);
      if(((y_32 != NULL) && (y_32 != t)))
        _fail(t);
      else
        y_32 = t;
      t = (ATerm) ATinsert(CheckATermList(y_32), (ATerm) ATmakeAppl(sym_Program_1, v_32));
      if(((g_3 != NULL) && (g_3 != t)))
        _fail(t);
      else
        g_3 = t;
      t = SSLsetAnnotations(g_3, u_32);
    }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  if(match_string(t, "--help"))
    {
      t = v_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_33;
        }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  t = term_u_13;
  x_33 = t;
  t = term_o_6;
  y_33 = t;
  t = term_v_14;
  t = s_5(x_33, y_33, t);
  t = term_w_14;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  q_33 = t;
  t = term_i_12;
  s_33 = t;
  t = term_j_12;
  t_33 = t;
  t = (ATerm) ATempty;
  u_33 = t;
  t = SSL_table_put(s_33, t_33, u_33);
  t = q_33;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_103(t);
          ;
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          {
            ATerm b_15 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, w_5, x_5, t);
                ;
                LocalPopChoice(c_15);
              }
            else
              {
                t = b_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_5, t);
    {
      ATerm f_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_34 = NULL;
          f_34 = t;
          {
            ATerm n_15 = t;
            int o_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_21 = NULL;
                t = f_34;
                {
                  ATerm q_15 = t;
                  int t_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_13;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_15);
                    }
                  else
                    {
                      t = q_15;
                      t = fetch_1_0(z_5, t);
                    }
                  t = f_34;
                  t = default_system_usage_0_0(t);
                  t = term_j_7;
                  j_21 = t;
                  t = SSL_exit(j_21);
                }
                ;
                LocalPopChoice(o_15);
              }
            else
              {
                t = n_15;
                {
                  ATerm n_21 = NULL;
                  t = term_e_14;
                  t = get_config_0_0(t);
                  t = f_34;
                  t = default_system_about_0_0(t);
                  t = term_j_7;
                  n_21 = t;
                  t = SSL_exit(n_21);
                }
              }
          }
          ;
          LocalPopChoice(m_15);
        }
      else
        {
          t = f_15;
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
                ATerm a_6 (ATerm t)
                {
                  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,k_3 = NULL;
                  l_34 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_34);
                  j_34 = t;
                  t = k_34;
                  if(((o_33 != NULL) && (o_33 != t)))
                    _fail(t);
                  else
                    o_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_34);
                  k_3 = t;
                  t = SSLsetAnnotations(k_3, j_34);
                  return(t);
                }
                t = fetch_1_0(a_6, t);
                t = term_p_6;
                if(((h_34 != NULL) && (h_34 != t)))
                  _fail(t);
                else
                  h_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_33)), term_w_15);
                if(((i_34 != NULL) && (i_34 != t)))
                  _fail(t);
                else
                  i_34 = t;
                t = SSL_printnl(h_34, i_34);
                t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_33)), term_w_15));
                t = default_system_usage_0_0(t);
                t = term_s_6;
                if(((g_34 != NULL) && (g_34 != t)))
                  _fail(t);
                else
                  g_34 = t;
                t = SSL_exit(g_34);
                ;
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
              }
          }
        }
      if(((p_33 != NULL) && (p_33 != t)))
        _fail(t);
      else
        p_33 = t;
      t = term_i_12;
      if(((r_33 != NULL) && (r_33 != t)))
        _fail(t);
      else
        r_33 = t;
      t = SSL_table_destroy(r_33);
      t = p_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
  t = parse_options_1_0(b_101, t);
  q_34 = t;
  t = term_x_15;
  t_34 = t;
  t = SSL_table_create(t_34);
  t = term_x_15;
  r_34 = t;
  t = term_y_15;
  s_34 = t;
  t = SSL_table_put(r_34, s_34, q_34);
  t = q_34;
  t = d_101(t);
  {
    ATerm e_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_101, t);
        ;
        LocalPopChoice(i_16);
      }
    else
      {
        t = e_16;
        {
          ATerm w_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = if_verbose2_1_0(h_6, t);
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
  ATerm u_34 = NULL,v_34 = NULL;
  t = term_y_16;
  u_34 = t;
  t = term_o_6;
  v_34 = t;
  t = term_z_16;
  t = s_5(u_34, v_34, t);
  t = term_d_17;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  w_34 = t;
  t = term_b_13;
  t = get_config_0_0(t);
  x_34 = t;
  t = term_p_6;
  y_34 = t;
  t = (ATerm) ATinsert(ATempty, x_34);
  z_34 = t;
  t = SSL_printnl(y_34, z_34);
  t = w_34;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_100 (ATerm), ATerm l_100 (ATerm), ATerm m_100 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_100(t);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          ATerm l_17 = t;
          int m_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_17);
            }
          else
            {
              t = l_17;
              {
                ATerm n_17 = t;
                int p_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_17);
                  }
                else
                  {
                    t = n_17;
                    {
                      ATerm r_17 = t;
                      int s_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_6, f_6, g_6, t);
                          ;
                          LocalPopChoice(s_17);
                        }
                      else
                        {
                          t = r_17;
                          {
                            ATerm t_17 = t;
                            int v_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_17);
                              }
                            else
                              {
                                t = t_17;
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
    ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
    b_35 = t;
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_35 != NULL) && (a_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_6, t);
          ;
          LocalPopChoice(x_17);
        }
      else
        {
          t = w_17;
          t = term_y_17;
          a_35 = t;
        }
      t = not_null(a_35);
      t = ReadFromFile_0_0(t);
      if(((c_35 != NULL) && (c_35 != t)))
        _fail(t);
      else
        c_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_35, c_35);
      t = apply_strategy_1_0(k_100, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_6, m_100, c_6, d_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,z_3 = NULL,y_3 = NULL,o_3 = NULL;
  o_35 = t;
  if(match_cons(t, sym__2))
    {
      e_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_35);
  d_35 = t;
  t = f_35;
  if(match_cons(t, sym_Specification_1))
    {
      h_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_35);
  g_35 = t;
  t = h_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_35 = ATgetFirst((ATermList) t);
      l_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_35);
  j_35 = t;
  t = l_35;
  t = Cons_2_0(l_6, n_6, t);
  m_35 = t;
  t = (ATerm) ATinsert(CheckATermList(m_35), k_35);
  o_3 = t;
  t = SSLsetAnnotations(o_3, j_35);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_35);
  y_3 = t;
  t = SSLsetAnnotations(y_3, g_35);
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_35, i_35);
  z_3 = t;
  t = SSLsetAnnotations(z_3, d_35);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,m_3 = NULL;
  s_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_35);
  p_35 = t;
  t = q_35;
  t = rename_sdefs_0_0(t);
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_35);
  m_3 = t;
  t = SSLsetAnnotations(m_3, p_35);
  return(t);
}
ATerm n_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_6, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_q_14;
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
ATerm term_p_13;
ATerm term_n_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
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
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_x_7;
ATerm term_t_7;
ATerm term_i_7;
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
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
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
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_i_7);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_7);
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
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_o_6);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_o_6);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm m_1 (ATerm a_1, ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm c_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm b_5 (ATerm h_116 (ATerm), ATerm k_68, ATerm i_68, ATerm);
ATerm d_5 (ATerm l_65, ATerm m_65, ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm h_104 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm p_2 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm);
ATerm h_5 (ATerm l_55, ATerm m_55, ATerm);
ATerm i_5 (ATerm z_58, ATerm a_59, ATerm);
ATerm k_5 (ATerm m_109 (ATerm), ATerm e_472, ATerm d_59, ATerm);
ATerm j_5 (ATerm v_58, ATerm w_58, ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_112 (ATerm), ATerm);
ATerm e_21 (ATerm v_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_5 (ATerm b_59, ATerm);
ATerm m_5 (ATerm n_55, ATerm o_55, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_22 (ATerm o_21, ATerm);
ATerm q_22 (ATerm s_21, ATerm t_21, ATerm u_21, ATerm);
ATerm r_22 (ATerm c_22, ATerm d_22, ATerm e_22, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_94 (ATerm), ATerm);
ATerm g_5 (ATerm b_53, ATerm c_53, ATerm);
ATerm debug_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm a_4 (ATerm);
ATerm f_4 (ATerm);
ATerm j_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_5 (ATerm c_60, ATerm d_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_5 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_5 (ATerm l_45, ATerm m_45, ATerm);
ATerm foldr_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_110 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm need_help_1_0 (ATerm m_113 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm p_5 (ATerm r_66, ATerm s_66, ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm o_5 (ATerm);
ATerm r_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_115 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm iowrap_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL;
  n_0 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  o_0 = t;
  t = term_p_6;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_6), o_0), term_q_6);
  s_0 = t;
  t = SSL_printnl(q_0, s_0);
  t = term_s_6;
  p_0 = t;
  t = SSL_exit(p_0);
  t = n_0;
  return(t);
}
ATerm m_1 (ATerm a_1, ATerm t)
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
  ATerm h_1 = NULL,k_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_1;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_7 = ATgetArgument(t, 0);
            ATerm c_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_6);
        {
          ATerm d_7 = t;
          int f_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 = NULL,q_1 = NULL;
              t = term_u_6;
              q_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_u_6, h_1);
              t = d_5(q_1, h_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm h_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  n_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_1;
              ;
              LocalPopChoice(f_7);
            }
          else
            {
              t = d_7;
              t = m_1(h_1, t);
            }
        }
      }
    else
      {
        t = y_6;
        t = m_1(h_1, t);
      }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(j_2, k_2, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm l_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(l_2, o_2, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm j_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(j_3, n_3, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,y_3 = NULL;
  r_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      s_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
      q_3 = ATgetArgument(t, 2);
      {
        ATerm d_2 = NULL,e_2 = NULL,i_2 = NULL;
        t = s_3;
        if(match_cons(t, sym_SVar_1))
          {
            t_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_3;
        t = foldr_3_0(t_0, v_0, x_0, t);
        d_2 = t;
        t = q_3;
        t = foldr_3_0(c_1, e_1, f_1, t);
        e_2 = t;
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, t_3, (ATerm) ATmakeAppl(sym__2, d_2, e_2));
              t = RenameVar_0_0(t);
              i_2 = t;
              ;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              t = t_3;
              t = HoArg_0_0(t);
              i_2 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_2), y_3, q_3);
        }
      }
    }
  else
    {
      ATerm a_3 = NULL,h_3 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          s_3 = ATgetArgument(t, 0);
          y_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_3;
      if(match_cons(t, sym_SVar_1))
        {
          t_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_3;
      t = foldr_3_0(g_1, i_1, j_1, t);
      a_3 = t;
      {
        ATerm m_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, t_3, a_3);
            t = RenameVar_0_0(t);
            h_3 = t;
            ;
            LocalPopChoice(o_7);
          }
        else
          {
            t = m_7;
            t = t_3;
            t = HoArg_0_0(t);
            h_3 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_3), y_3);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = topdown_1_0(c_88, t);
    return(t);
  }
  t = c_88(t);
  t = SRTS_all(o_1, t);
  return(t);
}
ATerm b_5 (ATerm h_116 (ATerm), ATerm k_68, ATerm i_68, ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL;
  e_4 = t;
  t = h_116(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_4, k_68, i_68);
  t = q_5(b_4, k_68, i_68, t);
  {
    ATerm q_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL;
        t = term_t_7;
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_4, term_t_7);
        t = p_5(b_4, i_4, t);
        ;
        LocalPopChoice(s_7);
      }
    else
      {
        t = q_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_4 = ATgetFirst((ATermList) t);
        d_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_t_7;
    g_4 = t;
    t = (ATerm) ATinsert(CheckATermList(d_4), (ATerm) ATinsert(CheckATermList(c_4), k_68));
    h_4 = t;
    t = SSL_table_put(b_4, g_4, h_4);
    t = e_4;
  }
  return(t);
}
ATerm d_5 (ATerm l_65, ATerm m_65, ATerm t)
{
  ATerm k_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_65, m_65);
  t = p_5(l_65, m_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_4 = ATgetFirst((ATermList) t);
      {
        ATerm u_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL;
        t = term_x_7;
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, l_6);
        t = d_5(c_5, l_6, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        {
          ATerm a_8 = t;
          int b_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 = NULL,x_5 = NULL;
              t = term_x_7;
              x_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_7, l_6);
              t = d_5(x_5, l_6, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm c_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  u_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_5;
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
                    ATerm j_6 = NULL;
                    t = term_x_7;
                    j_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_x_7, l_6);
                    t = d_5(j_6, l_6, t);
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
                      t = term_x_7;
                      w_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_x_7, l_6);
                      t = d_5(w_6, l_6, t);
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
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_7 = NULL,j_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_7 = ATgetFirst((ATermList) t);
      j_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_7;
  if(match_int(t, 95))
    {
      ATerm n_7 = NULL;
      t = j_7;
      t = m_0(t);
      n_7 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_7), term_g_8), term_g_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm p_7 = NULL;
          t = j_7;
          t = m_0(t);
          p_7 = t;
          t = (ATerm) ATinsert(CheckATermList(p_7), term_g_8);
        }
      else
        {
          ATerm r_7 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = j_7;
          t = m_0(t);
          r_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_7), term_g_8), term_h_8), term_g_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm h_104 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL;
  if(((z_7 != NULL) && (z_7 != t)))
    _fail(t);
  else
    z_7 = t;
  t = SSL_explode_string(not_null(z_7));
  {
    ATerm v_8 (ATerm t)
    {
      ATerm i_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_104(v_8, t);
          ;
          LocalPopChoice(j_8);
        }
      else
        {
          t = i_8;
          {
            ATerm o_8 = NULL,p_8 = NULL,r_8 = NULL;
            r_8 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_8 = ATgetFirst((ATermList) t);
                p_8 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm b_7 = NULL,g_7 = NULL,r_0 = NULL;
                  t = SSLgetAnnotations(r_8);
                  b_7 = t;
                  t = p_8;
                  t = v_8(t);
                  g_7 = t;
                  t = (ATerm) ATinsert(CheckATermList(g_7), o_8);
                  r_0 = t;
                  t = SSLsetAnnotations(r_0, b_7);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_8;
              }
          }
        }
      return(t);
    }
    t = v_8(t);
    if(((y_7 != NULL) && (y_7 != t)))
      _fail(t);
    else
      y_7 = t;
    t = SSL_implode_string(not_null(y_7));
  }
  return(t);
}
ATerm foldr_3_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,b_9 = NULL,c_9 = NULL;
  z_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_8;
      t = g_99(t);
    }
  else
    {
      ATerm h_9 = NULL,i_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_9 = ATgetFirst((ATermList) t);
          c_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_9;
      t = i_99(t);
      h_9 = t;
      t = c_9;
      t = foldr_3_0(g_99, h_99, i_99, t);
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
      t = h_99(t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_i_7;
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
  t = term_i_7;
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
ATerm x_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm v_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(v_12, y_12, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_u_6;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm e_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,m_15 = NULL;
  h_15 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      m_15 = ATgetArgument(t, 2);
      e_15 = ATgetArgument(t, 3);
      {
        ATerm k_9 = NULL,l_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,g_10 = NULL,h_10 = NULL;
        t = j_15;
        t = foldr_3_0(p_1, r_1, s_1, t);
        k_9 = t;
        t = m_15;
        t = foldr_3_0(t_1, u_1, v_1, t);
        l_9 = t;
        t = i_15;
        if(match_cons(t, sym_Mod_2))
          {
            g_10 = ATgetArgument(t, 0);
            h_10 = ATgetArgument(t, 1);
            {
              ATerm k_8 = t;
              int l_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_11 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_10), term_m_8), g_10);
                  q_11 = t;
                  t = SSL_concat_strings(q_11);
                  ;
                  LocalPopChoice(l_8);
                }
              else
                {
                  t = k_8;
                  t = i_15;
                }
            }
          }
        else
          {
            t = i_15;
          }
        t = escape_1_0(Cify_1_0, t);
        o_9 = t;
        t = SSL_int_to_string(k_9);
        p_9 = t;
        t = SSL_int_to_string(l_9);
        q_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_9), term_n_8), p_9), term_n_8), o_9);
        t_9 = t;
        t = SSL_concat_strings(t_9);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym__2, k_9, l_9));
        r_9 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_8, n_9);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym__2, k_9, l_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_8, n_9));
        t = b_5(w_1, r_9, s_9, t);
        t = n_9;
        {
          ATerm s_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_10 = NULL,t_10 = NULL;
              t = i_15;
              t = HoArg_0_0(t);
              s_10 = t;
              t = term_u_8;
              t_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_15, term_u_8);
              t = b_5(x_1, i_15, t_10, t);
              t = s_10;
              ;
              LocalPopChoice(t_8);
            }
          else
            {
              t = s_8;
              {
                ATerm u_10 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_8, n_9);
                u_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym_Defined_2, term_w_8, n_9));
                t = b_5(z_1, i_15, u_10, t);
                t = n_9;
              }
            }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, n_9, j_15, m_15, e_15);
        }
      }
    }
  else
    {
      ATerm g_12 = NULL,m_12 = NULL,n_12 = NULL,q_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,g_13 = NULL,h_13 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          i_15 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          m_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_15;
      t = foldr_3_0(b_2, c_2, f_2, t);
      g_12 = t;
      t = i_15;
      if(match_cons(t, sym_Mod_2))
        {
          g_13 = ATgetArgument(t, 0);
          h_13 = ATgetArgument(t, 1);
          {
            ATerm x_8 = t;
            int y_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_14 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_13), term_m_8), g_13);
                p_14 = t;
                t = SSL_concat_strings(p_14);
                ;
                LocalPopChoice(y_8);
              }
            else
              {
                t = x_8;
                t = i_15;
              }
          }
        }
      else
        {
          t = i_15;
        }
      t = escape_1_0(Cify_1_0, t);
      n_12 = t;
      t = SSL_int_to_string(g_12);
      q_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_12), term_n_8), n_12);
      u_12 = t;
      t = SSL_concat_strings(u_12);
      m_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_15, g_12);
      s_12 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_9, m_12);
      t_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_15, g_12), (ATerm) ATmakeAppl(sym_Defined_2, term_a_9, m_12));
      t = b_5(g_2, s_12, t_12, t);
      t = m_12;
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_13 = NULL,q_13 = NULL;
            t = i_15;
            t = HoArg_0_0(t);
            o_13 = t;
            t = term_u_8;
            q_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_15, term_u_8);
            t = b_5(h_2, i_15, q_13, t);
            t = o_13;
            ;
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm r_13 = NULL;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_9, m_12);
              r_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym_Defined_2, term_f_9, m_12));
              t = b_5(p_2, i_15, r_13, t);
              t = m_12;
            }
          }
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_12, j_15, m_15);
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
  ATerm g_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = g_9;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(q_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,u_0 = NULL;
  h_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_16 = ATgetFirst((ATermList) t);
      c_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_16);
  a_16 = t;
  t = b_16;
  t = h_73(t);
  f_16 = t;
  t = c_16;
  t = i_73(t);
  g_16 = t;
  t = (ATerm) ATinsert(CheckATermList(g_16), f_16);
  u_0 = t;
  t = SSLsetAnnotations(u_0, a_16);
  return(t);
}
ATerm h_5 (ATerm l_55, ATerm m_55, ATerm t)
{
  ATerm k_16 = NULL;
  t = SSL_fputc(l_55, m_55);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_16);
  return(t);
}
ATerm i_5 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm m_16 = NULL;
  t = SSL_write_term_to_stream_text(z_58, a_59);
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_16);
  return(t);
}
ATerm k_5 (ATerm m_109 (ATerm), ATerm e_472, ATerm d_59, ATerm t)
{
  ATerm n_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_472, term_m_9);
  t = open_stream_0_0(t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_16, d_59);
  t = m_109(t);
  t = fclose_0_0(t);
  t = d_59;
  return(t);
}
ATerm j_5 (ATerm v_58, ATerm w_58, ATerm t)
{
  ATerm o_16 = NULL;
  t = SSL_write_term_to_stream_baf(v_58, w_58);
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_16);
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
  ATerm p_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          p_15 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(p_15, s_15, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(match_cons(z_9, sym_Stream_1))
        {
          s_16 = ATgetArgument(z_9, 0);
        }
      else
        _fail(t);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(s_16, u_16, t);
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
  ATerm t_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL,k_17 = NULL,o_17 = NULL,r_17 = NULL,u_19 = NULL,z_19 = NULL,z_0 = NULL,y_0 = NULL;
  if(((a_17 != NULL) && (a_17 != t)))
    _fail(t);
  else
    a_17 = t;
  if(match_cons(t, sym__2))
    {
      if(((k_17 != NULL) && (k_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_17 = ATgetArgument(t, 0);
      if(((o_17 != NULL) && (o_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(a_17));
  if(((h_17 != NULL) && (h_17 != t)))
    _fail(t);
  else
    h_17 = t;
  t = not_null(k_17);
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_16 != NULL) && (t_16 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_16 = ATgetArgument(t, 0);
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
        if(((t_16 != NULL) && (t_16 != t)))
          _fail(t);
        else
          t_16 = t;
      }
    if(((r_17 != NULL) && (r_17 != t)))
      _fail(t);
    else
      r_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_17), not_null(o_17));
    if(((y_0 != NULL) && (y_0 != t)))
      _fail(t);
    else
      y_0 = t;
    t = SSLsetAnnotations(not_null(y_0), not_null(h_17));
    t = not_null(a_17);
    if(match_cons(t, sym__2))
      {
        if(((c_17 != NULL) && (c_17 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_17 = ATgetArgument(t, 0);
        if(((d_17 != NULL) && (d_17 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(a_17));
    if(((b_17 != NULL) && (b_17 != t)))
      _fail(t);
    else
      b_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), (ATerm) ATmakeAppl(sym__2, not_null(t_16), not_null(d_17)));
    if(((z_0 != NULL) && (z_0 != t)))
      _fail(t);
    else
      z_0 = t;
    t = SSLsetAnnotations(not_null(z_0), not_null(b_17));
    if(((g_17 != NULL) && (g_17 != t)))
      _fail(t);
    else
      g_17 = t;
    if(match_cons(t, sym__2))
      {
        if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_19 = ATgetArgument(t, 0);
        if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm e_10 = t;
      int f_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_14 = NULL,f_15 = NULL,g_15 = NULL,k_15 = NULL,l_15 = NULL,b_1 = NULL;
          t = SSLgetAnnotations(not_null(g_17));
          w_14 = t;
          t = not_null(u_19);
          t = fetch_1_0(t_2, t);
          f_15 = t;
          t = not_null(z_19);
          if(match_cons(t, sym__2))
            {
              k_15 = ATgetArgument(t, 0);
              l_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_5(u_2, k_15, l_15, t);
          g_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
          b_1 = t;
          t = SSLsetAnnotations(b_1, w_14);
          ;
          LocalPopChoice(f_10);
        }
      else
        {
          t = e_10;
          {
            ATerm x_15 = NULL,i_16 = NULL,j_16 = NULL,l_16 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(not_null(g_17));
            x_15 = t;
            t = not_null(z_19);
            if(match_cons(t, sym__2))
              {
                j_16 = ATgetArgument(t, 0);
                l_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_5(v_2, j_16, l_16, t);
            i_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), i_16);
            l_1 = t;
            t = SSLsetAnnotations(l_1, x_15);
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
ATerm apply_strategy_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  h_20 = t;
  t = dtime_0_0(t);
  t = h_20;
  t = o_112(t);
  g_20 = t;
  t = dtime_0_0(t);
  d_20 = t;
  t = g_20;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_20), (ATerm) ATmakeAppl(sym_Runtime_1, d_20)), f_20);
  return(t);
}
ATerm e_21 (ATerm v_20, ATerm t)
{
  t = SSL_fclose(v_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL;
  c_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_21 = ATgetArgument(t, 0);
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_21);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = e_21(c_21, t);
          }
      }
    }
  else
    {
      t = e_21(c_21, t);
    }
  return(t);
}
ATerm l_5 (ATerm b_59, ATerm t)
{
  t = SSL_read_term_from_stream(b_59);
  return(t);
}
ATerm m_5 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm f_21 = NULL;
  t = SSL_fopen(n_55, o_55);
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  t = SSL_stdin_stream();
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_21 = NULL;
  t = SSL_stdout_stream();
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_21 = NULL;
  t = SSL_stderr_stream();
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_21);
  return(t);
}
ATerm p_22 (ATerm o_21, ATerm t)
{
  ATerm p_21 = NULL;
  t = SSL_explode_term(o_21);
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_10 = ATgetArgument(t, 1);
        if(((ATgetType(l_10) == AT_LIST) && !(ATisEmpty(l_10))))
          {
            p_21 = ATgetFirst((ATermList) l_10);
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
  t = p_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_22 (ATerm s_21, ATerm t_21, ATerm u_21, ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,a_22 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(u_21);
  x_21 = t;
  t = s_21;
  if(match_cons(t, sym_Path_1))
    {
      a_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_22, t_21);
  y_1 = t;
  t = SSLsetAnnotations(y_1, x_21);
  if(match_cons(t, sym__2))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(v_21, w_21, t);
  return(t);
}
ATerm r_22 (ATerm c_22, ATerm d_22, ATerm e_22, ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,k_22 = NULL,a_2 = NULL;
  t = SSLgetAnnotations(e_22);
  h_22 = t;
  t = SSL_is_string(c_22);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, d_22);
  a_2 = t;
  t = SSLsetAnnotations(a_2, h_22);
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(f_22, g_22, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      ATerm o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_22 = t;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_22(m_22, t);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            {
              ATerm r_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_22(n_22, o_22, m_22, t);
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = r_10;
                  t = r_22(n_22, o_22, m_22, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_22(m_22, t);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_22 = NULL;
      v_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_22, term_z_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
      t = debug_1_0(w_2, t);
      _fail(t);
    }
  t_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(u_22, t);
  s_22 = t;
  t = t_22;
  t = fclose_0_0(t);
  t = s_22;
  return(t);
}
ATerm fetch_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm t_23 (ATerm t)
  {
    ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
    q_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_23 = ATgetFirst((ATermList) t);
        s_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_11 = t;
      int b_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_17 = NULL,t_17 = NULL,m_2 = NULL;
          t = SSLgetAnnotations(q_23);
          p_17 = t;
          t = r_23;
          t = n_94(t);
          t_17 = t;
          t = (ATerm) ATinsert(CheckATermList(s_23), t_17);
          m_2 = t;
          t = SSLsetAnnotations(m_2, p_17);
          ;
          LocalPopChoice(b_11);
        }
      else
        {
          t = a_11;
          {
            ATerm q_18 = NULL,u_18 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(q_23);
            q_18 = t;
            t = s_23;
            t = t_23(t);
            u_18 = t;
            t = (ATerm) ATinsert(CheckATermList(u_18), r_23);
            n_2 = t;
            t = SSLsetAnnotations(n_2, q_18);
          }
        }
    }
    return(t);
  }
  t = t_23(t);
  return(t);
}
ATerm g_5 (ATerm b_53, ATerm c_53, ATerm t)
{
  t = SSL_strcat(b_53, c_53);
  return(t);
}
ATerm debug_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL;
  w_23 = t;
  t = k_109(t);
  x_23 = t;
  t = term_p_6;
  y_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_23), x_23);
  z_23 = t;
  t = SSL_printnl(y_23, z_23);
  t = w_23;
  return(t);
}
ATerm x_2 (ATerm t)
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
ATerm y_2 (ATerm t)
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
      ATerm g_24 = NULL;
      g_24 = t;
      t = SSL_is_string(g_24);
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
            t = map_1_0(x_2, t);
            ;
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
              m_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_24 = ATgetArgument(t, 0);
                  t = n_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_24 = ATgetArgument(t, 0);
                      t = n_24;
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
                            t = debug_1_0(y_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_24 = NULL,t_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_24 = ATgetArgument(t, 0);
                          o_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_24;
                      t = eval_config_0_0(t);
                      s_24 = t;
                      t = o_24;
                      t = eval_config_0_0(t);
                      t_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_24, t_24);
                      t = g_5(s_24, t_24, t);
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
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  t = term_l_11;
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, x_24);
  t = p_5(y_24, x_24, t);
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL,a_25 = NULL;
        t = eval_config_0_0(t);
        z_24 = t;
        t = term_l_11;
        a_25 = t;
        t = SSL_table_put(a_25, x_24, z_24);
        t = z_24;
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
ATerm if_verbose2_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL;
        t = term_r_11;
        t = get_config_0_0(t);
        g_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_25, term_s_11);
        t = geq_0_0(t);
        t = e_25;
        t = x_110(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = e_25;
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm j_25 = NULL;
  j_25 = t;
  if(match_string(t, "-k"))
    {
      t = j_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_25;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
  k_25 = t;
  t = SSL_string_to_int(k_25);
  l_25 = t;
  t = term_t_11;
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, l_25);
  t = s_5(m_25, l_25, t);
  t = k_25;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, d_3, e_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  if(match_string(t, "-S"))
    {
      t = o_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_25;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  t = term_r_11;
  p_25 = t;
  t = term_i_7;
  q_25 = t;
  t = term_v_11;
  t = s_5(p_25, q_25, t);
  t = term_w_11;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  t = SSL_string_to_int(r_25);
  s_25 = t;
  t = term_r_11;
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, s_25);
  t = s_5(t_25, s_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_25);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  t = term_z_11;
  u_25 = t;
  t = term_o_6;
  v_25 = t;
  t = term_a_12;
  t = s_5(u_25, v_25, t);
  t = term_b_12;
  return(t);
}
ATerm j_4 (ATerm t)
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
      t = Option_3_0(g_3, k_3, m_3, t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      {
        ATerm f_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, v_3, w_3, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = f_12;
            t = Option_3_0(a_4, f_4, j_4, t);
          }
      }
    }
  return(t);
}
ATerm s_5 (ATerm c_60, ATerm d_60, ATerm t)
{
  ATerm w_25 = NULL;
  t = term_l_11;
  w_25 = t;
  t = SSL_table_put(w_25, c_60, d_60);
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, c_60, d_60);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
      t = term_o_6;
      t = d_0(t);
      b_26 = t;
      t = term_i_12;
      c_26 = t;
      t = term_j_12;
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, b_26);
      t = q_5(c_26, d_26, b_26, t);
      _fail(t);
    }
  else
    {
      ATerm g_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_25 = ATgetFirst((ATermList) t);
          a_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_25;
      t = a_0(t);
      t = term_o_6;
      t = b_0(t);
      g_26 = t;
      t = (ATerm) ATinsert(CheckATermList(a_26), g_26);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "-o"))
    {
      t = i_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_26;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  t = term_k_12;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, j_26);
  t = s_5(k_26, j_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_26);
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
ATerm q_5 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_12 = ATgetArgument(t, 0);
            ATerm w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
        t = p_5(a_65, b_65, t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATempty;
      }
    n_26 = t;
    t = (ATerm) ATinsert(CheckATermList(n_26), z_64);
    o_26 = t;
    t = SSL_table_put(a_65, b_65, o_26);
    t = m_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
      t = term_o_6;
      t = k_0(t);
      z_26 = t;
      t = term_i_12;
      a_27 = t;
      t = term_j_12;
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_12, term_j_12, z_26);
      t = q_5(a_27, b_27, z_26, t);
      _fail(t);
    }
  else
    {
      ATerm f_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_26 = ATgetFirst((ATermList) t);
          w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          y_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      t = h_0(t);
      t = x_26;
      t = j_0(t);
      f_27 = t;
      t = (ATerm) ATinsert(CheckATermList(y_26), f_27);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_string(t, "-i"))
    {
      t = h_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_27;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  t = term_x_12;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, i_27);
  t = s_5(j_27, i_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_27);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_6;
  t = whoami_0_0(t);
  k_27 = t;
  t = term_p_6;
  m_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_13), k_27);
  n_27 = t;
  t = SSL_printnl(m_27, n_27);
  t = term_s_6;
  l_27 = t;
  t = SSL_exit(l_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_5 (ATerm l_45, ATerm m_45, ATerm t)
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_45, m_45);
      ;
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      t = SSL_addr(l_45, m_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_27;
      t = e_99(t);
    }
  else
    {
      ATerm u_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_27 = ATgetFirst((ATermList) t);
          r_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_27;
      t = foldr_2_0(e_99, f_99, t);
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_27, u_27);
      t = f_99(t);
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
  t = term_i_7;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(v_19, w_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_27 = NULL,n_19 = NULL,p_19 = NULL;
  t = times_0_0(t);
  p_19 = t;
  t = SSL_explode_term(p_19);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_19;
  t = foldr_2_0(r_4, s_4, t);
  x_27 = t;
  t = SSL_TicksToSeconds(x_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_28;
        if((j_28 != t))
          {
            _fail(t);
          }
        t = i_28;
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATmakeAppl(sym__2, j_28, k_28);
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_28, k_28);
              ;
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              t = SSL_gtr(j_28, k_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_28, k_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL;
        t = term_r_11;
        t = get_config_0_0(t);
        q_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_28, term_s_6);
        t = geq_0_0(t);
        t = o_28;
        t = w_110(t);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = o_28;
      }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,v_28 = NULL,w_28 = NULL;
  t = run_time_0_0(t);
  s_28 = t;
  t = term_o_6;
  t = whoami_0_0(t);
  t_28 = t;
  t = term_p_6;
  v_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_13), s_28), term_n_13), t_28);
  w_28 = t;
  t = SSL_printnl(v_28, w_28);
  t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_13), s_28), term_n_13), t_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_7;
  x_28 = t;
  t = SSL_exit(x_28);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  g_29 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_29;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_29 = ATgetArgument(t, 0);
          {
            ATerm t_20 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(g_29);
            t_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_29);
            z_2 = t;
            t = SSLsetAnnotations(z_2, t_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_29;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm s_13 = t;
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
      t = s_13;
      t = fetch_1_0(u_4, t);
    }
  t = m_113(t);
  return(t);
}
ATerm map_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm w_29 (ATerm t)
  {
    ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
    t_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_29;
      }
    else
      {
        ATerm n_21 = NULL,z_22 = NULL,a_24 = NULL,c_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_29 = ATgetFirst((ATermList) t);
            v_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_29);
        n_21 = t;
        t = u_29;
        t = d_94(t);
        z_22 = t;
        t = v_29;
        t = w_29(t);
        a_24 = t;
        t = (ATerm) ATinsert(CheckATermList(a_24), z_22);
        c_3 = t;
        t = SSLsetAnnotations(c_3, n_21);
      }
    return(t);
  }
  t = w_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_29 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_30 = NULL,f_30 = NULL;
        ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_30)), not_null(f_30));
          return(t);
        }
        t = not_null(a_30);
        t = f_0(t);
        if(((e_30 != NULL) && (e_30 != t)))
          _fail(t);
        else
          e_30 = t;
        t = not_null(z_29);
        t = e_0(t);
        if(((f_30 != NULL) && (f_30 != t)))
          _fail(t);
        else
          f_30 = t;
        t = not_null(a_30);
        t = reverse_acc_2_0(e_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_6;
      t = f_0(t);
    }
  return(t);
}
ATerm p_5 (ATerm r_66, ATerm s_66, ATerm t)
{
  t = SSL_table_get(r_66, s_66);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,f_3 = NULL;
  l_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_30);
  f_3 = t;
  t = SSLsetAnnotations(f_3, j_30);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_30), term_v_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
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
  h_30 = t;
  t = term_j_12;
  i_30 = t;
  t = term_z_13;
  t = p_5(h_30, i_30, t);
  t = reverse_acc_2_0(_id, x_4, t);
  t = map_1_0(y_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_30;
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
            t = p_30;
          }
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATinsert(ATempty, p_30);
      }
    q_30 = t;
    t = term_d_10;
    r_30 = t;
    t = SSL_printnl(r_30, q_30);
    t = p_30;
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
  ATerm v_30 = NULL,w_30 = NULL;
  t = term_e_14;
  v_30 = t;
  t = term_o_6;
  w_30 = t;
  t = term_f_14;
  t = s_5(v_30, w_30, t);
  return(t);
}
ATerm e_5 (ATerm t)
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
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  t = term_e_14;
  z_30 = t;
  t = term_o_6;
  a_31 = t;
  t = term_f_14;
  t = s_5(z_30, a_31, t);
  t = term_h_14;
  x_30 = t;
  t = term_o_6;
  y_30 = t;
  t = term_i_14;
  t = s_5(x_30, y_30, t);
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
      t = Option_3_0(z_4, a_5, e_5, t);
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
ATerm parse_options_p__1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,x_31 = NULL,a_32 = NULL,c_32 = NULL,e_32 = NULL,r_32 = NULL,i_3 = NULL;
  if(((n_31 != NULL) && (n_31 != t)))
    _fail(t);
  else
    n_31 = t;
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_14;
        t = p_115(t);
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
      }
    t = not_null(n_31);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_32 != NULL) && (a_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_32 = ATgetFirst((ATermList) t);
        if(((c_32 != NULL) && (c_32 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          c_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(n_31));
    if(((x_31 != NULL) && (x_31 != t)))
      _fail(t);
    else
      x_31 = t;
    t = term_b_13;
    if(((r_32 != NULL) && (r_32 != t)))
      _fail(t);
    else
      r_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_13, not_null(a_32));
    t = s_5(not_null(r_32), not_null(a_32), t);
    t = not_null(c_32);
    {
      ATerm b_33 (ATerm t)
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_32 = NULL;
                u_32 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_32;
                ;
                LocalPopChoice(u_14);
              }
            else
              {
                t = t_14;
                t = p_115(t);
                t = Cons_2_0(_id, b_33, t);
              }
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
              ATerm x_32 = NULL,y_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_32 = ATgetFirst((ATermList) t);
                  y_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_32), (ATerm) ATmakeAppl(sym_Undefined_1, x_32));
            }
          }
        return(t);
      }
      t = b_33(t);
      if(((e_32 != NULL) && (e_32 != t)))
        _fail(t);
      else
        e_32 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), (ATerm) ATmakeAppl(sym_Program_1, not_null(a_32)));
      if(((i_3 != NULL) && (i_3 != t)))
        _fail(t);
      else
        i_3 = t;
      t = SSLsetAnnotations(not_null(i_3), not_null(x_31));
    }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  if(match_string(t, "--help"))
    {
      t = n_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_33;
        }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  t = term_u_13;
  o_33 = t;
  t = term_o_6;
  p_33 = t;
  t = term_v_14;
  t = s_5(o_33, p_33, t);
  t = term_x_14;
  return(t);
}
ATerm y_5 (ATerm t)
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
ATerm parse_options_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  t = term_i_12;
  if(((k_33 != NULL) && (k_33 != t)))
    _fail(t);
  else
    k_33 = t;
  t = term_j_12;
  if(((l_33 != NULL) && (l_33 != t)))
    _fail(t);
  else
    l_33 = t;
  t = (ATerm) ATempty;
  if(((m_33 != NULL) && (m_33 != t)))
    _fail(t);
  else
    m_33 = t;
  t = SSL_table_put(not_null(k_33), not_null(l_33), not_null(m_33));
  t = not_null(i_33);
  {
    ATerm t_5 (ATerm t)
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_115(t);
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
                t = Option_3_0(v_5, w_5, y_5, t);
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
      ATerm d_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_33 = NULL;
          w_33 = t;
          {
            ATerm o_15 = t;
            int q_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_25 = NULL;
                t = w_33;
                {
                  ATerm r_15 = t;
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
                      t = r_15;
                      t = fetch_1_0(z_5, t);
                    }
                  t = w_33;
                  t = default_system_usage_0_0(t);
                  t = term_i_7;
                  n_25 = t;
                  t = SSL_exit(n_25);
                }
                ;
                LocalPopChoice(q_15);
              }
            else
              {
                t = o_15;
                {
                  ATerm s_26 = NULL;
                  t = term_e_14;
                  t = get_config_0_0(t);
                  t = w_33;
                  t = default_system_about_0_0(t);
                  t = term_i_7;
                  s_26 = t;
                  t = SSL_exit(s_26);
                }
              }
          }
          ;
          LocalPopChoice(n_15);
        }
      else
        {
          t = d_15;
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
                ATerm a_6 (ATerm t)
                {
                  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,l_3 = NULL;
                  c_34 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      b_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_34);
                  a_34 = t;
                  t = b_34;
                  if(((g_33 != NULL) && (g_33 != t)))
                    _fail(t);
                  else
                    g_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_34);
                  l_3 = t;
                  t = SSLsetAnnotations(l_3, a_34);
                  return(t);
                }
                t = fetch_1_0(a_6, t);
                t = term_p_6;
                if(((y_33 != NULL) && (y_33 != t)))
                  _fail(t);
                else
                  y_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_33)), term_w_15);
                if(((z_33 != NULL) && (z_33 != t)))
                  _fail(t);
                else
                  z_33 = t;
                t = SSL_printnl(not_null(y_33), not_null(z_33));
                t = (ATerm) ATmakeAppl(sym__2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_33)), term_w_15));
                t = default_system_usage_0_0(t);
                t = term_s_6;
                if(((x_33 != NULL) && (x_33 != t)))
                  _fail(t);
                else
                  x_33 = t;
                t = SSL_exit(not_null(x_33));
                ;
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
              }
          }
        }
      if(((h_33 != NULL) && (h_33 != t)))
        _fail(t);
      else
        h_33 = t;
      t = term_i_12;
      if(((j_33 != NULL) && (j_33 != t)))
        _fail(t);
      else
        j_33 = t;
      t = SSL_table_destroy(not_null(j_33));
      t = not_null(h_33);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  t = parse_options_1_0(o_113, t);
  h_34 = t;
  t = term_y_15;
  k_34 = t;
  t = SSL_table_create(k_34);
  t = term_y_15;
  i_34 = t;
  t = term_z_15;
  j_34 = t;
  t = SSL_table_put(i_34, j_34, h_34);
  t = h_34;
  t = q_113(t);
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_113, t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm v_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_16);
            }
          else
            {
              t = v_16;
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
  ATerm l_34 = NULL,m_34 = NULL;
  t = term_x_16;
  l_34 = t;
  t = term_o_6;
  m_34 = t;
  t = term_y_16;
  t = s_5(l_34, m_34, t);
  t = term_z_16;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  n_34 = t;
  t = term_b_13;
  t = get_config_0_0(t);
  o_34 = t;
  t = term_p_6;
  p_34 = t;
  t = (ATerm) ATinsert(ATempty, o_34);
  q_34 = t;
  t = SSL_printnl(p_34, q_34);
  t = n_34;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm f_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = f_17;
        {
          ATerm j_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_17);
            }
          else
            {
              t = j_17;
              {
                ATerm m_17 = t;
                int n_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_17);
                  }
                else
                  {
                    t = m_17;
                    {
                      ATerm q_17 = t;
                      int s_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_6, f_6, g_6, t);
                          ;
                          LocalPopChoice(s_17);
                        }
                      else
                        {
                          t = q_17;
                          {
                            ATerm u_17 = t;
                            int v_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_17);
                              }
                            else
                              {
                                t = u_17;
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
    ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL;
    if(((s_34 != NULL) && (s_34 != t)))
      _fail(t);
    else
      s_34 = t;
    {
      ATerm w_17 = t;
      int x_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_34 != NULL) && (r_34 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_34 = ATgetArgument(t, 0);
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
          if(((r_34 != NULL) && (r_34 != t)))
            _fail(t);
          else
            r_34 = t;
        }
      t = not_null(r_34);
      t = ReadFromFile_0_0(t);
      if(((t_34 != NULL) && (t_34 != t)))
        _fail(t);
      else
        t_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_34), not_null(t_34));
      t = apply_strategy_1_0(x_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(b_6, z_112, c_6, d_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,z_3 = NULL,x_3 = NULL,p_3 = NULL;
  f_35 = t;
  if(match_cons(t, sym__2))
    {
      v_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_35);
  u_34 = t;
  t = w_34;
  if(match_cons(t, sym_Specification_1))
    {
      y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_34);
  x_34 = t;
  t = y_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_35 = ATgetFirst((ATermList) t);
      c_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_34);
  a_35 = t;
  t = c_35;
  t = Cons_2_0(m_6, n_6, t);
  d_35 = t;
  t = (ATerm) ATinsert(CheckATermList(d_35), b_35);
  p_3 = t;
  t = SSLsetAnnotations(p_3, a_35);
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_35);
  x_3 = t;
  t = SSLsetAnnotations(x_3, x_34);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_34, z_34);
  z_3 = t;
  t = SSLsetAnnotations(z_3, u_34);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,o_3 = NULL;
  j_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      h_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_35);
  g_35 = t;
  t = h_35;
  t = rename_sdefs_0_0(t);
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, i_35);
  o_3 = t;
  t = SSLsetAnnotations(o_3, g_35);
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
  t = iowrap_3_0(k_6, _fail, default_usage_0_0, t);
  return(t);
}

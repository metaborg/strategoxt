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
ATerm term_x_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_n_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_n_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_a_8;
ATerm term_u_7;
ATerm term_k_7;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
void init_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_k_7);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_7);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_p_6);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_h_12);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_p_6);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_p_6);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_p_6);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_p_6);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm topdown_1_0 (ATerm o_75 (ATerm), ATerm);
ATerm b_5 (ATerm z_103 (ATerm), ATerm v_55, ATerm t_55, ATerm);
ATerm d_5 (ATerm w_52, ATerm x_52, ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm Cify_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm y_91 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm);
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
ATerm Cons_2_0 (ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm);
ATerm h_5 (ATerm w_42, ATerm x_42, ATerm);
ATerm i_5 (ATerm k_46, ATerm l_46, ATerm);
ATerm k_5 (ATerm e_97 (ATerm), ATerm j_446, ATerm o_46, ATerm);
ATerm j_5 (ATerm g_46, ATerm h_46, ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_100 (ATerm), ATerm);
ATerm b_22 (ATerm v_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_5 (ATerm m_46, ATerm);
ATerm m_5 (ATerm y_42, ATerm z_42, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm v_23 (ATerm u_22, ATerm);
ATerm w_23 (ATerm y_22, ATerm z_22, ATerm a_23, ATerm);
ATerm x_23 (ATerm i_23, ATerm j_23, ATerm k_23, ATerm);
ATerm n_5 (ATerm);
ATerm x_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm g_5 (ATerm m_40, ATerm n_40, ATerm);
ATerm debug_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_98 (ATerm), ATerm);
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
ATerm t_5 (ATerm n_47, ATerm o_47, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_5 (ATerm l_52, ATerm m_52, ATerm k_52, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm o_5 (ATerm t_32, ATerm u_32, ATerm);
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm need_help_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm q_5 (ATerm c_54, ATerm d_54, ATerm);
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
ATerm p_5 (ATerm);
ATerm s_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm iowrap_3_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,o_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = term_p_6;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_q_6;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_6), c_0), term_r_6);
  s_0 = t;
  t = SSL_printnl(o_0, s_0);
  t = term_t_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm l_1 (ATerm a_1, ATerm t)
{
  ATerm d_1 = NULL,w_0 = NULL;
  t = term_v_6;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, a_1);
  t = d_5(w_0, a_1, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_6) != ATmakeSymbol("b_0", 0, ATtrue)))
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
      ATerm y_6 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_7 = ATgetArgument(t, 0);
            ATerm c_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_7);
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 = NULL,q_1 = NULL;
              t = term_v_6;
              q_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, g_1);
              t = d_5(q_1, g_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm j_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  n_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_1;
              ;
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              t = l_1(g_1, t);
            }
        }
      }
    else
      {
        t = z_6;
        t = l_1(g_1, t);
      }
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_k_7;
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
  t = o_5(k_2, l_2, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm c_1 (ATerm t)
{
  t = term_k_7;
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
  t = o_5(o_2, p_2, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_k_7;
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
  t = o_5(n_3, u_3, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_t_6;
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
          ATerm l_7 = t;
          int m_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATmakeAppl(sym__2, e_2, g_2));
              t = RenameVar_0_0(t);
              j_2 = t;
              ;
              LocalPopChoice(m_7);
            }
          else
            {
              t = l_7;
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
        ATerm o_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, s_3, d_3);
            t = RenameVar_0_0(t);
            j_3 = t;
            ;
            LocalPopChoice(q_7);
          }
        else
          {
            t = o_7;
            t = s_3;
            t = HoArg_0_0(t);
            j_3 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_3), t_3);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm o_75 (ATerm), ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    t = topdown_1_0(o_75, t);
    return(t);
  }
  t = o_75(t);
  t = SRTS_all(o_1, t);
  return(t);
}
ATerm b_5 (ATerm z_103 (ATerm), ATerm v_55, ATerm t_55, ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL;
  d_4 = t;
  t = z_103(t);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_4, v_55, t_55);
  t = r_5(a_4, v_55, t_55, t);
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_4 = NULL;
        t = term_u_7;
        h_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_4, term_u_7);
        t = q_5(a_4, h_4, t);
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_4 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_7;
    e_4 = t;
    t = (ATerm) ATinsert(CheckATermList(c_4), (ATerm) ATinsert(CheckATermList(b_4), v_55));
    g_4 = t;
    t = SSL_table_put(a_4, e_4, g_4);
    t = d_4;
  }
  return(t);
}
ATerm d_5 (ATerm w_52, ATerm x_52, ATerm t)
{
  ATerm i_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_52, x_52);
  t = q_5(w_52, x_52, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      {
        ATerm w_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL;
        t = term_a_8;
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, l_6);
        t = d_5(e_5, l_6, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        {
          ATerm b_8 = t;
          int c_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_5 = NULL,z_5 = NULL;
              t = term_a_8;
              z_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_8, l_6);
              t = d_5(z_5, l_6, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm d_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_8) != ATmakeSymbol("m_0", 0, ATtrue)))
                    _fail(t);
                  w_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_5;
              ;
              LocalPopChoice(c_8);
            }
          else
            {
              t = b_8;
              {
                ATerm e_8 = t;
                int f_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_6 = NULL;
                    t = term_a_8;
                    n_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_a_8, l_6);
                    t = d_5(n_6, l_6, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(f_8);
                  }
                else
                  {
                    t = e_8;
                    {
                      ATerm u_6 = NULL,x_6 = NULL;
                      t = term_a_8;
                      x_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_a_8, l_6);
                      t = d_5(x_6, l_6, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm g_8 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) g_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                            _fail(t);
                          u_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_6;
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
  ATerm d_7 = NULL,f_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_7 = ATgetFirst((ATermList) t);
      f_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_7;
  if(match_int(t, 95))
    {
      ATerm n_7 = NULL;
      t = f_7;
      t = r_0(t);
      n_7 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_7), term_h_8), term_h_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm p_7 = NULL;
          t = f_7;
          t = r_0(t);
          p_7 = t;
          t = (ATerm) ATinsert(CheckATermList(p_7), term_h_8);
        }
      else
        {
          ATerm r_7 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = f_7;
          t = r_0(t);
          r_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_7), term_h_8), term_i_8), term_h_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm y_91 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_7 = NULL,z_7 = NULL;
  z_7 = t;
  t = SSL_explode_string(z_7);
  {
    ATerm s_8 (ATerm t)
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_91(s_8, t);
          ;
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
            q_8 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_8 = ATgetFirst((ATermList) t);
                p_8 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm e_7 = NULL,i_7 = NULL,q_0 = NULL;
                  t = SSLgetAnnotations(q_8);
                  e_7 = t;
                  t = p_8;
                  t = s_8(t);
                  i_7 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_7), o_8);
                  q_0 = t;
                  t = SSLsetAnnotations(q_0, e_7);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_8;
              }
          }
        }
      return(t);
    }
    t = s_8(t);
    v_7 = t;
    t = SSL_implode_string(v_7);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,c_9 = NULL;
  z_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_8;
      t = s_86(t);
    }
  else
    {
      ATerm f_9 = NULL,i_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_9 = ATgetFirst((ATermList) t);
          c_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_9;
      t = u_86(t);
      f_9 = t;
      t = c_9;
      t = foldr_3_0(s_86, t_86, u_86, t);
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_9, i_9);
      t = t_86(t);
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(v_9, w_9, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      x_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(x_9, y_9, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_a_8;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_a_8;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_k_7;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(z_12, a_13, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_a_8;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_a_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL;
  f_15 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_15 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
      k_15 = ATgetArgument(t, 2);
      e_15 = ATgetArgument(t, 3);
      {
        ATerm l_9 = NULL,m_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,i_10 = NULL,j_10 = NULL;
        t = j_15;
        t = foldr_3_0(p_1, r_1, s_1, t);
        l_9 = t;
        t = k_15;
        t = foldr_3_0(t_1, u_1, v_1, t);
        m_9 = t;
        t = i_15;
        if(match_cons(t, sym_Mod_2))
          {
            i_10 = ATgetArgument(t, 0);
            j_10 = ATgetArgument(t, 1);
            {
              ATerm l_8 = t;
              int m_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_11 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_10), term_n_8), i_10);
                  w_11 = t;
                  t = SSL_concat_strings(w_11);
                  ;
                  LocalPopChoice(m_8);
                }
              else
                {
                  t = l_8;
                  t = i_15;
                }
            }
          }
        else
          {
            t = i_15;
          }
        t = escape_1_0(Cify_1_0, t);
        p_9 = t;
        t = SSL_int_to_string(l_9);
        q_9 = t;
        t = SSL_int_to_string(m_9);
        r_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_9), term_r_8), q_9), term_r_8), p_9);
        u_9 = t;
        t = SSL_concat_strings(u_9);
        o_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym__2, l_9, m_9));
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_8, o_9);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym__2, l_9, m_9)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_8, o_9));
        t = b_5(w_1, s_9, t_9, t);
        t = o_9;
        {
          ATerm u_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_10 = NULL,v_10 = NULL;
              t = i_15;
              t = HoArg_0_0(t);
              u_10 = t;
              t = term_w_8;
              v_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_15, term_w_8);
              t = b_5(z_1, i_15, v_10, t);
              t = u_10;
              ;
              LocalPopChoice(v_8);
            }
          else
            {
              t = u_8;
              {
                ATerm w_10 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_8, o_9);
                w_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym_Defined_2, term_x_8, o_9));
                t = b_5(a_2, i_15, w_10, t);
                t = o_9;
              }
            }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, o_9, j_15, k_15, e_15);
        }
      }
    }
  else
    {
      ATerm i_12 = NULL,o_12 = NULL,r_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,i_13 = NULL,k_13 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          i_15 = ATgetArgument(t, 0);
          j_15 = ATgetArgument(t, 1);
          k_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_15;
      t = foldr_3_0(b_2, c_2, d_2, t);
      i_12 = t;
      t = i_15;
      if(match_cons(t, sym_Mod_2))
        {
          i_13 = ATgetArgument(t, 0);
          k_13 = ATgetArgument(t, 1);
          {
            ATerm y_8 = t;
            int b_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_14 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_13), term_n_8), i_13);
                r_14 = t;
                t = SSL_concat_strings(r_14);
                ;
                LocalPopChoice(b_9);
              }
            else
              {
                t = y_8;
                t = i_15;
              }
          }
        }
      else
        {
          t = i_15;
        }
      t = escape_1_0(Cify_1_0, t);
      r_12 = t;
      t = SSL_int_to_string(i_12);
      t_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_12), term_r_8), r_12);
      w_12 = t;
      t = SSL_concat_strings(w_12);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_15, i_12);
      u_12 = t;
      t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, o_12);
      v_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_15, i_12), (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, o_12));
      t = b_5(f_2, u_12, v_12, t);
      t = o_12;
      {
        ATerm e_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_13 = NULL,s_13 = NULL;
            t = i_15;
            t = HoArg_0_0(t);
            r_13 = t;
            t = term_w_8;
            s_13 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_15, term_w_8);
            t = b_5(i_2, i_15, s_13, t);
            t = r_13;
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = e_9;
            {
              ATerm t_13 = NULL;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, o_12);
              t_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_15, (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, o_12));
              t = b_5(n_2, i_15, t_13, t);
              t = o_12;
            }
          }
        t = (ATerm) ATmakeAppl(sym_SDef_3, o_12, j_15, k_15);
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
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(q_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,u_0 = NULL;
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
  t = s_60(t);
  d_16 = t;
  t = c_16;
  t = t_60(t);
  g_16 = t;
  t = (ATerm) ATinsert(CheckATermList(g_16), d_16);
  u_0 = t;
  t = SSLsetAnnotations(u_0, a_16);
  return(t);
}
ATerm h_5 (ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm i_16 = NULL;
  t = SSL_fputc(w_42, x_42);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_16);
  return(t);
}
ATerm i_5 (ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm l_16 = NULL;
  t = SSL_write_term_to_stream_text(k_46, l_46);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_16);
  return(t);
}
ATerm k_5 (ATerm e_97 (ATerm), ATerm j_446, ATerm o_46, ATerm t)
{
  ATerm n_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_446, term_n_9);
  t = n_5(t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_16, o_46);
  t = e_97(t);
  t = fclose_0_0(t);
  t = o_46;
  return(t);
}
ATerm j_5 (ATerm g_46, ATerm h_46, ATerm t)
{
  ATerm o_16 = NULL;
  t = SSL_write_term_to_stream_baf(g_46, h_46);
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
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(match_cons(z_9, sym_Stream_1))
        {
          s_15 = ATgetArgument(z_9, 0);
        }
      else
        _fail(t);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(s_15, t_15, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if(match_cons(a_10, sym_Stream_1))
        {
          v_16 = ATgetArgument(a_10, 0);
        }
      else
        _fail(t);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(v_16, w_16, t);
  q_16 = t;
  t = term_b_10;
  r_16 = t;
  t = q_16;
  if(match_cons(t, sym_Stream_1))
    {
      s_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, q_16);
  t = h_5(r_16, s_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,l_17 = NULL,p_17 = NULL,l_20 = NULL,r_20 = NULL,z_0 = NULL,y_0 = NULL;
  u_16 = t;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_16);
  h_17 = t;
  t = i_17;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
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
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = term_e_10;
        t_16 = t;
      }
    p_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_17, l_17);
    y_0 = t;
    t = SSLsetAnnotations(y_0, h_17);
    t = u_16;
    if(match_cons(t, sym__2))
      {
        c_17 = ATgetArgument(t, 0);
        d_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_16);
    b_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_17, (ATerm) ATmakeAppl(sym__2, not_null(t_16), d_17));
    z_0 = t;
    t = SSLsetAnnotations(z_0, b_17);
    g_17 = t;
    if(match_cons(t, sym__2))
      {
        l_20 = ATgetArgument(t, 0);
        r_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm f_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_14 = NULL,h_15 = NULL,l_15 = NULL,m_15 = NULL,q_15 = NULL,b_1 = NULL;
          t = SSLgetAnnotations(g_17);
          y_14 = t;
          t = l_20;
          t = fetch_1_0(t_2, t);
          h_15 = t;
          t = r_20;
          if(match_cons(t, sym__2))
            {
              m_15 = ATgetArgument(t, 0);
              q_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_5(u_2, m_15, q_15, t);
          l_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_15, l_15);
          b_1 = t;
          t = SSLsetAnnotations(b_1, y_14);
          ;
          LocalPopChoice(g_10);
        }
      else
        {
          t = f_10;
          {
            ATerm e_16 = NULL,k_16 = NULL,m_16 = NULL,p_16 = NULL,k_1 = NULL;
            t = SSLgetAnnotations(g_17);
            e_16 = t;
            t = r_20;
            if(match_cons(t, sym__2))
              {
                m_16 = ATgetArgument(t, 0);
                p_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_5(v_2, m_16, p_16, t);
            k_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_20, k_16);
            k_1 = t;
            t = SSLsetAnnotations(k_1, e_16);
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
ATerm apply_strategy_1_0 (ATerm g_100 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,g_21 = NULL;
  g_21 = t;
  t = dtime_0_0(t);
  t = g_21;
  t = g_100(t);
  c_21 = t;
  t = dtime_0_0(t);
  x_20 = t;
  t = c_21;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_21), (ATerm) ATmakeAppl(sym_Runtime_1, x_20)), b_21);
  return(t);
}
ATerm b_22 (ATerm v_21, ATerm t)
{
  t = SSL_fclose(v_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  z_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_21 = ATgetArgument(t, 0);
      {
        ATerm h_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_21);
            ;
            LocalPopChoice(k_10);
          }
        else
          {
            t = h_10;
            t = b_22(z_21, t);
          }
      }
    }
  else
    {
      t = b_22(z_21, t);
    }
  return(t);
}
ATerm l_5 (ATerm m_46, ATerm t)
{
  t = SSL_read_term_from_stream(m_46);
  return(t);
}
ATerm m_5 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_fopen(y_42, z_42);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_22 = NULL;
  t = SSL_stdin_stream();
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_22 = NULL;
  t = SSL_stdout_stream();
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_22 = NULL;
  t = SSL_stderr_stream();
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_22);
  return(t);
}
ATerm v_23 (ATerm u_22, ATerm t)
{
  ATerm v_22 = NULL;
  t = SSL_explode_term(u_22);
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_10 = ATgetArgument(t, 1);
        if(((ATgetType(m_10) == AT_LIST) && !(ATisEmpty(m_10))))
          {
            v_22 = ATgetFirst((ATermList) m_10);
            {
              ATerm n_10 = (ATerm) ATgetNext((ATermList) m_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_23 (ATerm y_22, ATerm z_22, ATerm a_23, ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,g_23 = NULL,x_1 = NULL;
  t = SSLgetAnnotations(a_23);
  d_23 = t;
  t = y_22;
  if(match_cons(t, sym_Path_1))
    {
      g_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_23, z_22);
  x_1 = t;
  t = SSLsetAnnotations(x_1, d_23);
  if(match_cons(t, sym__2))
    {
      b_23 = ATgetArgument(t, 0);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(b_23, c_23, t);
  return(t);
}
ATerm x_23 (ATerm i_23, ATerm j_23, ATerm k_23, ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,q_23 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(k_23);
  n_23 = t;
  t = SSL_is_string(i_23);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_23, j_23);
  y_1 = t;
  t = SSLsetAnnotations(y_1, n_23);
  if(match_cons(t, sym__2))
    {
      l_23 = ATgetArgument(t, 0);
      m_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(l_23, m_23, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  if(match_cons(t, sym__2))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_23(s_23, t);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            {
              ATerm q_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_23(t_23, u_23, s_23, t);
                  ;
                  LocalPopChoice(r_10);
                }
              else
                {
                  t = q_10;
                  t = x_23(t_23, u_23, s_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_23(s_23, t);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
  ATerm t_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL;
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_24, term_y_10);
      t = n_5(t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = t_10;
      t = debug_1_0(x_2, t);
      _fail(t);
    }
  z_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(a_24, t);
  y_23 = t;
  t = z_23;
  t = fclose_0_0(t);
  t = y_23;
  return(t);
}
ATerm fetch_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm z_24 (ATerm t)
  {
    ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
    w_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_24 = ATgetFirst((ATermList) t);
        y_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_10 = t;
      int a_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_17 = NULL,v_17 = NULL,h_2 = NULL;
          t = SSLgetAnnotations(w_24);
          r_17 = t;
          t = x_24;
          t = z_81(t);
          v_17 = t;
          t = (ATerm) ATinsert(CheckATermList(y_24), v_17);
          h_2 = t;
          t = SSLsetAnnotations(h_2, r_17);
          ;
          LocalPopChoice(a_11);
        }
      else
        {
          t = z_10;
          {
            ATerm o_18 = NULL,u_18 = NULL,m_2 = NULL;
            t = SSLgetAnnotations(w_24);
            o_18 = t;
            t = y_24;
            t = z_24(t);
            u_18 = t;
            t = (ATerm) ATinsert(CheckATermList(u_18), x_24);
            m_2 = t;
            t = SSLsetAnnotations(m_2, o_18);
          }
        }
    }
    return(t);
  }
  t = z_24(t);
  return(t);
}
ATerm g_5 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_strcat(m_40, n_40);
  return(t);
}
ATerm debug_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL;
  c_25 = t;
  t = c_97(t);
  d_25 = t;
  t = term_q_6;
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_25), d_25);
  f_25 = t;
  t = SSL_printnl(e_25, f_25);
  t = c_25;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_d_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_25 = NULL;
      m_25 = t;
      t = SSL_is_string(m_25);
      ;
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_2, t);
            ;
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
              s_25 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_25 = ATgetArgument(t, 0);
                  t = t_25;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_25 = ATgetArgument(t, 0);
                      t = t_25;
                      {
                        ATerm i_11 = t;
                        int j_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_11);
                          }
                        else
                          {
                            t = i_11;
                            t = debug_1_0(z_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_25 = NULL,z_25 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_25 = ATgetArgument(t, 0);
                          u_25 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_25;
                      t = eval_config_0_0(t);
                      y_25 = t;
                      t = u_25;
                      t = eval_config_0_0(t);
                      z_25 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_25, z_25);
                      t = g_5(y_25, z_25, t);
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
  ATerm d_26 = NULL,e_26 = NULL;
  d_26 = t;
  t = term_k_11;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, d_26);
  t = q_5(e_26, d_26, t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL,g_26 = NULL;
        t = eval_config_0_0(t);
        f_26 = t;
        t = term_k_11;
        g_26 = t;
        t = SSL_table_put(g_26, d_26, f_26);
        t = f_26;
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_26 = NULL;
        t = term_p_11;
        t = get_config_0_0(t);
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_26, term_q_11);
        t = geq_0_0(t);
        t = k_26;
        t = p_98(t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = k_26;
      }
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_string(t, "-k"))
    {
      t = p_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_26;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  t = SSL_string_to_int(q_26);
  r_26 = t;
  t = term_r_11;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, r_26);
  t = t_5(s_26, r_26, t);
  t = q_26;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, c_3, f_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  if(match_string(t, "-S"))
    {
      t = u_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_26;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  t = term_p_11;
  v_26 = t;
  t = term_k_7;
  w_26 = t;
  t = term_t_11;
  t = t_5(v_26, w_26, t);
  t = term_u_11;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_v_11;
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
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  t = SSL_string_to_int(x_26);
  y_26 = t;
  t = term_p_11;
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, y_26);
  t = t_5(z_26, y_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_26);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_x_11;
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
  ATerm a_27 = NULL,b_27 = NULL;
  t = term_y_11;
  a_27 = t;
  t = term_p_6;
  b_27 = t;
  t = term_z_11;
  t = t_5(a_27, b_27, t);
  t = term_a_12;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, l_3, t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_3, w_3, x_3, t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = Option_3_0(f_4, j_4, k_4, t);
          }
      }
    }
  return(t);
}
ATerm t_5 (ATerm n_47, ATerm o_47, ATerm t)
{
  ATerm c_27 = NULL;
  t = term_k_11;
  c_27 = t;
  t = SSL_table_put(c_27, n_47, o_47);
  t = (ATerm) ATmakeAppl(sym__3, term_k_11, n_47, o_47);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
      t = term_p_6;
      t = h_0(t);
      h_27 = t;
      t = term_g_12;
      i_27 = t;
      t = term_h_12;
      j_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_12, term_h_12, h_27);
      t = r_5(i_27, j_27, h_27, t);
      _fail(t);
    }
  else
    {
      ATerm m_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_27 = ATgetFirst((ATermList) t);
          g_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_27;
      t = d_0(t);
      t = term_p_6;
      t = f_0(t);
      m_27 = t;
      t = (ATerm) ATinsert(CheckATermList(g_27), m_27);
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  if(match_string(t, "-o"))
    {
      t = o_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_27;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  p_27 = t;
  t = term_j_12;
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, p_27);
  t = t_5(q_27, p_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_27);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
ATerm r_5 (ATerm l_52, ATerm m_52, ATerm k_52, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,w_27 = NULL;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_52, m_52);
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_12 = ATgetArgument(t, 0);
            ATerm p_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_52, m_52);
        t = q_5(l_52, m_52, t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        t = (ATerm) ATempty;
      }
    t_27 = t;
    t = (ATerm) ATinsert(CheckATermList(t_27), k_52);
    w_27 = t;
    t = SSL_table_put(l_52, m_52, w_27);
    t = s_27;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
      t = term_p_6;
      t = p_0(t);
      h_28 = t;
      t = term_g_12;
      i_28 = t;
      t = term_h_12;
      j_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_12, term_h_12, h_28);
      t = r_5(i_28, j_28, h_28, t);
      _fail(t);
    }
  else
    {
      ATerm n_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_28 = ATgetFirst((ATermList) t);
          e_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_28;
      t = l_0(t);
      t = f_28;
      t = n_0(t);
      n_28 = t;
      t = (ATerm) ATinsert(CheckATermList(g_28), n_28);
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  if(match_string(t, "-i"))
    {
      t = p_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_28;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  q_28 = t;
  t = term_q_12;
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, q_28);
  t = t_5(r_28, q_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_28);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_6;
  t = whoami_0_0(t);
  s_28 = t;
  t = term_q_6;
  u_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_12), s_28);
  v_28 = t;
  t = SSL_printnl(u_28, v_28);
  t = term_t_6;
  t_28 = t;
  t = SSL_exit(t_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm o_5 (ATerm t_32, ATerm u_32, ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_32, u_32);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      t = SSL_addr(t_32, u_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_28;
      t = q_86(t);
    }
  else
    {
      ATerm c_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_28 = ATgetFirst((ATermList) t);
          z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_28;
      t = foldr_2_0(q_86, r_86, t);
      c_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_28, c_29);
      t = r_86(t);
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
  t = term_k_7;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(q_19, r_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_29 = NULL,m_19 = NULL,n_19 = NULL;
  t = times_0_0(t);
  n_19 = t;
  t = SSL_explode_term(n_19);
  if(match_cons(t, sym__2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_19;
  t = foldr_2_0(r_4, s_4, t);
  f_29 = t;
  t = SSL_TicksToSeconds(f_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  if(match_cons(t, sym__2))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_29;
        if((s_29 != t))
          {
            _fail(t);
          }
        t = r_29;
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATmakeAppl(sym__2, s_29, t_29);
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_29, t_29);
              ;
              LocalPopChoice(h_13);
            }
          else
            {
              t = g_13;
              t = SSL_gtr(s_29, t_29);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_29, t_29);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  {
    ATerm j_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_29 = NULL;
        t = term_p_11;
        t = get_config_0_0(t);
        z_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_29, term_t_6);
        t = geq_0_0(t);
        t = x_29;
        t = o_98(t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = j_13;
        t = x_29;
      }
  }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,e_30 = NULL,f_30 = NULL;
  t = run_time_0_0(t);
  b_30 = t;
  t = term_p_6;
  t = whoami_0_0(t);
  c_30 = t;
  t = term_q_6;
  e_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_13), b_30), term_m_13), c_30);
  f_30 = t;
  t = SSL_printnl(e_30, f_30);
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_13), b_30), term_m_13), c_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_7;
  g_30 = t;
  t = SSL_exit(g_30);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_30 = ATgetArgument(t, 0);
          {
            ATerm i_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(t_30);
            i_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_30);
            w_2 = t;
            t = SSLsetAnnotations(w_2, i_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      t = fetch_1_0(u_4, t);
    }
  t = e_101(t);
  return(t);
}
ATerm map_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm j_31 (ATerm t)
  {
    ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
    g_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_31;
      }
    else
      {
        ATerm s_20 = NULL,y_20 = NULL,z_20 = NULL,b_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_31 = ATgetFirst((ATermList) t);
            i_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_31);
        s_20 = t;
        t = h_31;
        t = p_81(t);
        y_20 = t;
        t = i_31;
        t = j_31(t);
        z_20 = t;
        t = (ATerm) ATinsert(CheckATermList(z_20), y_20);
        b_3 = t;
        t = SSLsetAnnotations(b_3, s_20);
      }
    return(t);
  }
  t = j_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_31 = ATgetFirst((ATermList) t);
      n_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_31 = NULL,s_31 = NULL;
        ATerm v_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_31)), not_null(s_31));
          return(t);
        }
        t = n_31;
        t = k_0(t);
        if(((r_31 != NULL) && (r_31 != t)))
          _fail(t);
        else
          r_31 = t;
        t = m_31;
        t = j_0(t);
        if(((s_31 != NULL) && (s_31 != t)))
          _fail(t);
        else
          s_31 = t;
        t = n_31;
        t = reverse_acc_2_0(j_0, v_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_6;
      t = k_0(t);
    }
  return(t);
}
ATerm q_5 (ATerm c_54, ATerm d_54, ATerm t)
{
  t = SSL_table_get(c_54, d_54);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,e_3 = NULL;
  y_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_31);
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_31);
  e_3 = t;
  t = SSLsetAnnotations(e_3, w_31);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm a_32 = NULL;
  a_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_32), term_u_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      t = fetch_1_0(w_4, t);
    }
  t = term_x_13;
  t = echo_0_0(t);
  t = term_g_12;
  u_31 = t;
  t = term_h_12;
  v_31 = t;
  t = term_y_13;
  t = q_5(u_31, v_31, t);
  t = reverse_acc_2_0(_id, x_4, t);
  t = map_1_0(y_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_14 = ATgetFirst((ATermList) t);
                ATerm c_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_32;
          }
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATinsert(ATempty, c_32);
      }
    d_32 = t;
    t = term_e_10;
    e_32 = t;
    t = SSL_printnl(e_32, d_32);
    t = c_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_12;
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
  ATerm i_32 = NULL,j_32 = NULL;
  t = term_d_14;
  i_32 = t;
  t = term_p_6;
  j_32 = t;
  t = term_e_14;
  t = t_5(i_32, j_32, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  t = term_d_14;
  m_32 = t;
  t = term_p_6;
  n_32 = t;
  t = term_e_14;
  t = t_5(m_32, n_32, t);
  t = term_g_14;
  k_32 = t;
  t = term_p_6;
  l_32 = t;
  t = term_h_14;
  t = t_5(k_32, l_32, t);
  t = term_i_14;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_j_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, a_5, c_5, t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      t = Option_3_0(f_5, p_5, s_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,z_32 = NULL,a_33 = NULL,g_3 = NULL;
  s_32 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_14;
        t = h_103(t);
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
      }
    t = s_32;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_32 = ATgetFirst((ATermList) t);
        x_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_32);
    v_32 = t;
    t = term_y_12;
    a_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_12, w_32);
    t = t_5(a_33, w_32, t);
    t = x_32;
    {
      ATerm k_33 (ATerm t)
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_33 = NULL;
                d_33 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_33;
                ;
                LocalPopChoice(t_14);
              }
            else
              {
                t = s_14;
                t = h_103(t);
                t = Cons_2_0(_id, k_33, t);
              }
            ;
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm g_33 = NULL,h_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_33 = ATgetFirst((ATermList) t);
                  h_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_33), (ATerm) ATmakeAppl(sym_Undefined_1, g_33));
            }
          }
        return(t);
      }
      t = k_33(t);
      z_32 = t;
      t = (ATerm) ATinsert(CheckATermList(z_32), (ATerm) ATmakeAppl(sym_Program_1, w_32));
      g_3 = t;
      t = SSLsetAnnotations(g_3, v_32);
    }
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  if(match_string(t, "--help"))
    {
      t = w_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_33;
        }
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  t = term_q_13;
  x_33 = t;
  t = term_p_6;
  y_33 = t;
  t = term_u_14;
  t = t_5(x_33, y_33, t);
  t = term_v_14;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  r_33 = t;
  t = term_g_12;
  t_33 = t;
  t = term_h_12;
  u_33 = t;
  t = (ATerm) ATempty;
  v_33 = t;
  t = SSL_table_put(t_33, u_33, v_33);
  t = r_33;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm x_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_103(t);
          ;
          LocalPopChoice(z_14);
        }
      else
        {
          t = x_14;
          {
            ATerm a_15 = t;
            int b_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_5, x_5, y_5, t);
                ;
                LocalPopChoice(b_15);
              }
            else
              {
                t = a_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_5, t);
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_34 = NULL;
          g_34 = t;
          {
            ATerm g_15 = t;
            int n_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_21 = NULL;
                t = g_34;
                {
                  ATerm o_15 = t;
                  int p_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_13;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_15);
                    }
                  else
                    {
                      t = o_15;
                      t = fetch_1_0(a_6, t);
                    }
                  t = g_34;
                  t = default_system_usage_0_0(t);
                  t = term_k_7;
                  k_21 = t;
                  t = SSL_exit(k_21);
                }
                ;
                LocalPopChoice(n_15);
              }
            else
              {
                t = g_15;
                {
                  ATerm o_21 = NULL;
                  t = term_d_14;
                  t = get_config_0_0(t);
                  t = g_34;
                  t = default_system_about_0_0(t);
                  t = term_k_7;
                  o_21 = t;
                  t = SSL_exit(o_21);
                }
              }
          }
          ;
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          {
            ATerm r_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
                ATerm b_6 (ATerm t)
                {
                  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,k_3 = NULL;
                  m_34 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      l_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_34);
                  k_34 = t;
                  t = l_34;
                  if(((p_33 != NULL) && (p_33 != t)))
                    _fail(t);
                  else
                    p_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_34);
                  k_3 = t;
                  t = SSLsetAnnotations(k_3, k_34);
                  return(t);
                }
                t = fetch_1_0(b_6, t);
                t = term_q_6;
                i_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_33)), term_v_15);
                j_34 = t;
                t = SSL_printnl(i_34, j_34);
                t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_33)), term_v_15));
                t = default_system_usage_0_0(t);
                t = term_t_6;
                h_34 = t;
                t = SSL_exit(h_34);
                ;
                LocalPopChoice(u_15);
              }
            else
              {
                t = r_15;
              }
          }
        }
      q_33 = t;
      t = term_g_12;
      s_33 = t;
      t = SSL_table_destroy(s_33);
      t = q_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
  t = parse_options_1_0(g_101, t);
  r_34 = t;
  t = term_w_15;
  u_34 = t;
  t = SSL_table_create(u_34);
  t = term_w_15;
  s_34 = t;
  t = term_x_15;
  t_34 = t;
  t = SSL_table_put(s_34, t_34, r_34);
  t = r_34;
  t = i_101(t);
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_101, t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        {
          ATerm f_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_16);
            }
          else
            {
              t = f_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = if_verbose2_1_0(i_6, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  t = term_x_16;
  v_34 = t;
  t = term_p_6;
  w_34 = t;
  t = term_y_16;
  t = t_5(v_34, w_34, t);
  t = term_z_16;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_a_17;
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  x_34 = t;
  t = term_y_12;
  t = get_config_0_0(t);
  y_34 = t;
  t = term_q_6;
  z_34 = t;
  t = (ATerm) ATinsert(ATempty, y_34);
  a_35 = t;
  t = SSL_printnl(z_34, a_35);
  t = x_34;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_100(t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        {
          ATerm j_17 = t;
          int k_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_17);
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
                      ATerm o_17 = t;
                      int q_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_6, g_6, h_6, t);
                          ;
                          LocalPopChoice(q_17);
                        }
                      else
                        {
                          t = o_17;
                          {
                            ATerm s_17 = t;
                            int t_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_17);
                              }
                            else
                              {
                                t = s_17;
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
  ATerm e_6 (ATerm t)
  {
    ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
    c_35 = t;
    {
      ATerm u_17 = t;
      int w_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_35 != NULL) && (b_35 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_35 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_6, t);
          ;
          LocalPopChoice(w_17);
        }
      else
        {
          t = u_17;
          t = term_x_17;
          b_35 = t;
        }
      t = not_null(b_35);
      t = ReadFromFile_0_0(t);
      d_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_35, d_35);
      t = apply_strategy_1_0(p_100, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_6, r_100, d_6, e_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,z_3 = NULL,y_3 = NULL,o_3 = NULL;
  p_35 = t;
  if(match_cons(t, sym__2))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_35);
  e_35 = t;
  t = g_35;
  if(match_cons(t, sym_Specification_1))
    {
      i_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_35);
  h_35 = t;
  t = i_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_35 = ATgetFirst((ATermList) t);
      m_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_35);
  k_35 = t;
  t = m_35;
  t = Cons_2_0(m_6, o_6, t);
  n_35 = t;
  t = (ATerm) ATinsert(CheckATermList(n_35), l_35);
  o_3 = t;
  t = SSLsetAnnotations(o_3, k_35);
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_35);
  y_3 = t;
  t = SSLsetAnnotations(y_3, h_35);
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, j_35);
  z_3 = t;
  t = SSLsetAnnotations(z_3, e_35);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,m_3 = NULL;
  t_35 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_35);
  q_35 = t;
  t = r_35;
  t = rename_sdefs_0_0(t);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_35);
  m_3 = t;
  t = SSLsetAnnotations(m_3, q_35);
  return(t);
}
ATerm o_6 (ATerm t)
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

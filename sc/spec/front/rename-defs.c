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
ATerm term_y_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_b_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_h_15;
ATerm term_y_14;
ATerm term_n_14;
ATerm term_i_14;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_f_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_q_11;
ATerm term_j_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_i_8;
ATerm term_s_7;
ATerm term_l_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_l_7);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_7);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_v_6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_v_12);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_i_16, term_v_6);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_v_6);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_v_6);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_v_6);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm m_1 (ATerm a_1, ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm b_5 (ATerm h_116 (ATerm), ATerm k_68, ATerm i_68, ATerm);
ATerm d_5 (ATerm l_65, ATerm m_65, ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm Cify_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm h_104 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm q_73 (ATerm), ATerm);
ATerm _2_0 (ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm);
ATerm h_5 (ATerm l_55, ATerm m_55, ATerm);
ATerm i_5 (ATerm z_58, ATerm a_59, ATerm);
ATerm k_5 (ATerm m_109 (ATerm), ATerm e_472, ATerm d_59, ATerm);
ATerm j_5 (ATerm v_58, ATerm w_58, ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_112 (ATerm), ATerm);
ATerm j_17 (ATerm a_17, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_5 (ATerm b_59, ATerm);
ATerm m_5 (ATerm n_55, ATerm o_55, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_94 (ATerm), ATerm);
ATerm g_5 (ATerm b_53, ATerm c_53, ATerm);
ATerm debug_1_0 (ATerm k_109 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm c_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm s_5 (ATerm c_60, ATerm d_60, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm q_5 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_5 (ATerm l_45, ATerm m_45, ATerm);
ATerm foldr_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
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
ATerm Program_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_115 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm parse_options_1_0 (ATerm o_115 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm iowrap_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
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
  t = term_v_6;
  t = whoami_0_0(t);
  o_0 = t;
  t = term_w_6;
  p_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_6), o_0), term_x_6);
  q_0 = t;
  t = SSL_printnl(p_0, q_0);
  t = term_z_6;
  s_0 = t;
  t = SSL_exit(s_0);
  t = n_0;
  return(t);
}
ATerm m_1 (ATerm a_1, ATerm t)
{
  ATerm d_1 = NULL,w_0 = NULL;
  t = term_a_7;
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, a_1);
  t = d_5(w_0, a_1, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm b_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_7) != ATmakeSymbol("c_0", 0, ATtrue)))
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
  ATerm h_1 = NULL,j_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_1;
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_7 = ATgetArgument(t, 0);
            ATerm g_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(e_7);
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_1 = NULL,q_1 = NULL;
              t = term_a_7;
              q_1 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_7, h_1);
              t = d_5(q_1, h_1, t);
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
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              t = m_1(h_1, t);
            }
        }
      }
    else
      {
        t = d_7;
        t = m_1(h_1, t);
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      j_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(i_2, j_2, t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm p_1 (ATerm t)
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
ATerm r_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(z_2, c_3, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm t_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL;
  y_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      z_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      t_3 = ATgetArgument(t, 2);
      {
        ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL;
        t = z_3;
        if(match_cons(t, sym_SVar_1))
          {
            a_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_4;
        t = foldr_3_0(i_1, k_1, l_1, t);
        d_2 = t;
        t = t_3;
        t = foldr_3_0(o_1, p_1, r_1, t);
        e_2 = t;
        {
          ATerm m_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATmakeAppl(sym__2, d_2, e_2));
              t = RenameVar_0_0(t);
              g_2 = t;
              ;
              LocalPopChoice(n_7);
            }
          else
            {
              t = m_7;
              t = a_4;
              t = HoArg_0_0(t);
              g_2 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_2), b_4, t_3);
        }
      }
    }
  else
    {
      ATerm x_2 = NULL,y_2 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          z_3 = ATgetArgument(t, 0);
          b_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_3;
      if(match_cons(t, sym_SVar_1))
        {
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_4;
      t = foldr_3_0(s_1, t_1, u_1, t);
      x_2 = t;
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, a_4, x_2);
            t = RenameVar_0_0(t);
            y_2 = t;
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            t = a_4;
            t = HoArg_0_0(t);
            y_2 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_2), b_4);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  t = c_88(t);
  {
    ATerm v_1 (ATerm t)
    {
      t = topdown_1_0(c_88, t);
      return(t);
    }
    t = SRTS_all(v_1, t);
  }
  return(t);
}
ATerm b_5 (ATerm h_116 (ATerm), ATerm k_68, ATerm i_68, ATerm t)
{
  ATerm e_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,m_4 = NULL,o_4 = NULL;
  e_4 = t;
  t = h_116(t);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_4, k_68, i_68);
  t = q_5(i_4, k_68, i_68, t);
  {
    ATerm q_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = term_s_7;
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_4, term_s_7);
        t = p_5(i_4, p_4, t);
        ;
        LocalPopChoice(r_7);
      }
    else
      {
        t = q_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_4 = ATgetFirst((ATermList) t);
        k_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_7;
    m_4 = t;
    t = (ATerm) ATinsert(CheckATermList(k_4), (ATerm) ATinsert(CheckATermList(j_4), k_68));
    o_4 = t;
    t = SSL_table_put(i_4, m_4, o_4);
    t = e_4;
  }
  return(t);
}
ATerm d_5 (ATerm l_65, ATerm m_65, ATerm t)
{
  ATerm s_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_65, m_65);
  t = p_5(l_65, m_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_4 = ATgetFirst((ATermList) t);
      {
        ATerm t_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm k_7 = NULL;
  k_7 = t;
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_4 = NULL;
        t = term_i_8;
        z_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_8, k_7);
        t = d_5(z_4, k_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        {
          ATerm k_8 = t;
          int m_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_5 = NULL,u_5 = NULL;
              t = term_i_8;
              u_5 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_8, k_7);
              t = d_5(u_5, k_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm s_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("l_0", 0, ATtrue)))
                    _fail(t);
                  o_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_5;
              ;
              LocalPopChoice(m_8);
            }
          else
            {
              t = k_8;
              {
                ATerm v_8 = t;
                int w_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_6 = NULL;
                    t = term_i_8;
                    a_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_i_8, k_7);
                    t = d_5(a_6, k_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(w_8);
                  }
                else
                  {
                    t = v_8;
                    {
                      ATerm g_6 = NULL,j_6 = NULL;
                      t = term_i_8;
                      j_6 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_i_8, k_7);
                      t = d_5(j_6, k_7, t);
                      if(match_cons(t, sym_Defined_2))
                        {
                          ATerm x_8 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                            _fail(t);
                          g_6 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_6;
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
  ATerm x_7 = NULL,a_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_7 = ATgetFirst((ATermList) t);
      a_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_7;
  if(match_int(t, 95))
    {
      ATerm j_8 = NULL;
      t = a_8;
      t = m_0(t);
      j_8 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(j_8), term_y_8), term_y_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm l_8 = NULL;
          t = a_8;
          t = m_0(t);
          l_8 = t;
          t = (ATerm) ATinsert(CheckATermList(l_8), term_y_8);
        }
      else
        {
          ATerm n_8 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = a_8;
          t = m_0(t);
          n_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_8), term_y_8), term_b_9), term_y_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm h_104 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm p_8 = NULL,t_8 = NULL;
  p_8 = t;
  t = SSL_explode_string(p_8);
  {
    ATerm u_8 (ATerm t)
    {
      ATerm c_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_104(u_8, t);
          ;
          LocalPopChoice(d_9);
        }
      else
        {
          t = c_9;
          {
            ATerm e_9 = t;
            int m_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, u_8, t);
                ;
                LocalPopChoice(m_9);
              }
            else
              {
                t = e_9;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
              }
          }
        }
      return(t);
    }
    t = u_8(t);
    t_8 = t;
    t = SSL_implode_string(t_8);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_99(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm z_8 = NULL,a_9 = NULL,f_9 = NULL,g_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_8 = ATgetFirst((ATermList) t);
            a_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_8;
        t = i_99(t);
        f_9 = t;
        t = a_9;
        t = foldr_3_0(g_99, h_99, i_99, t);
        g_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_9, g_9);
        t = h_99(t);
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm h_8 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      h_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(h_8, o_8, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(q_8, r_8, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(i_12, j_12, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,j_13 = NULL,m_13 = NULL,o_13 = NULL;
  h_13 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
      o_13 = ATgetArgument(t, 2);
      g_13 = ATgetArgument(t, 3);
      {
        ATerm w_7 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
        t = m_13;
        t = foldr_3_0(w_1, x_1, y_1, t);
        w_7 = t;
        t = o_13;
        t = foldr_3_0(z_1, a_2, b_2, t);
        y_7 = t;
        t = j_13;
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_9 = NULL,i_9 = NULL,e_11 = NULL;
              if(match_cons(t, sym_Mod_2))
                {
                  h_9 = ATgetArgument(t, 0);
                  i_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_9), term_r_9), h_9);
              e_11 = t;
              t = SSL_concat_strings(e_11);
              ;
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
            }
          t = escape_1_0(Cify_1_0, t);
          z_7 = t;
          t = SSL_int_to_string(w_7);
          b_8 = t;
          t = SSL_int_to_string(y_7);
          c_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_8), term_s_9), b_8), term_s_9), z_7);
          e_8 = t;
          t = SSL_concat_strings(e_8);
          d_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_13, (ATerm) ATmakeAppl(sym__2, w_7, y_7));
          f_8 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_9, d_8);
          g_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_13, (ATerm) ATmakeAppl(sym__2, w_7, y_7)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_9, d_8));
          t = b_5(c_2, f_8, g_8, t);
          t = d_8;
          {
            ATerm u_9 = t;
            int v_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_9 = NULL,k_9 = NULL;
                t = j_13;
                t = HoArg_0_0(t);
                j_9 = t;
                t = term_w_9;
                k_9 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_13, term_w_9);
                t = b_5(f_2, j_13, k_9, t);
                t = j_9;
                ;
                LocalPopChoice(v_9);
              }
            else
              {
                t = u_9;
                {
                  ATerm l_9 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_9, d_8);
                  l_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_13, (ATerm) ATmakeAppl(sym_Defined_2, term_x_9, d_8));
                  t = b_5(h_2, j_13, l_9, t);
                  t = d_8;
                }
              }
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_8, m_13, o_13, g_13);
          }
        }
      }
    }
  else
    {
      ATerm t_11 = NULL,w_11 = NULL,x_11 = NULL,b_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
      if(match_cons(t, sym_SDef_3))
        {
          j_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
          o_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_13;
      t = foldr_3_0(m_2, n_2, o_2, t);
      t_11 = t;
      t = j_13;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_13 = NULL,c_13 = NULL,j_14 = NULL;
            if(match_cons(t, sym_Mod_2))
              {
                b_13 = ATgetArgument(t, 0);
                c_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_13), term_r_9), b_13);
            j_14 = t;
            t = SSL_concat_strings(j_14);
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
          }
        t = escape_1_0(Cify_1_0, t);
        w_11 = t;
        t = SSL_int_to_string(t_11);
        x_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_11), term_s_9), w_11);
        f_12 = t;
        t = SSL_concat_strings(f_12);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, t_11);
        g_12 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_10, b_12);
        h_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_13, t_11), (ATerm) ATmakeAppl(sym_Defined_2, term_a_10, b_12));
        t = b_5(p_2, g_12, h_12, t);
        t = b_12;
        {
          ATerm b_10 = t;
          int c_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_13 = NULL,i_13 = NULL;
              t = j_13;
              t = HoArg_0_0(t);
              d_13 = t;
              t = term_w_9;
              i_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_13, term_w_9);
              t = b_5(q_2, j_13, i_13, t);
              t = d_13;
              ;
              LocalPopChoice(c_10);
            }
          else
            {
              t = b_10;
              {
                ATerm k_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_10, b_12);
                k_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_13, (ATerm) ATmakeAppl(sym_Defined_2, term_d_10, b_12));
                t = b_5(r_2, j_13, k_13, t);
                t = b_12;
              }
            }
          t = (ATerm) ATmakeAppl(sym_SDef_3, b_12, m_13, o_13);
        }
      }
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = topdown_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(s_2, t);
  return(t);
}
ATerm Strategies_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,r_0 = NULL,t_0 = NULL;
  y_13 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_13);
  t_13 = t;
  t = w_13;
  t = l_73(t);
  x_13 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_13);
  r_0 = t;
  t = SSLsetAnnotations(r_0, t_13);
  return(t);
}
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,u_0 = NULL,v_0 = NULL;
  m_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_14 = ATgetFirst((ATermList) t);
      h_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_14);
  f_14 = t;
  t = g_14;
  t = h_73(t);
  k_14 = t;
  t = h_14;
  t = i_73(t);
  l_14 = t;
  v_0 = t;
  t = (ATerm) ATinsert(CheckATermList(l_14), k_14);
  u_0 = t;
  t = SSLsetAnnotations(u_0, f_14);
  return(t);
}
ATerm Specification_1_0 (ATerm q_73 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,r_14 = NULL,t_14 = NULL,u_14 = NULL,x_0 = NULL,y_0 = NULL;
  u_14 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_14);
  p_14 = t;
  t = r_14;
  t = q_73(t);
  t_14 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_14);
  x_0 = t;
  t = SSLsetAnnotations(x_0, p_14);
  return(t);
}
ATerm _2_0 (ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,z_0 = NULL,b_1 = NULL;
  f_15 = t;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  z_14 = t;
  t = b_15;
  t = s_68(t);
  d_15 = t;
  t = c_15;
  t = t_68(t);
  e_15 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_15, e_15);
  z_0 = t;
  t = SSLsetAnnotations(z_0, z_14);
  return(t);
}
ATerm h_5 (ATerm l_55, ATerm m_55, ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_fputc(l_55, m_55);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_15);
  return(t);
}
ATerm i_5 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm j_15 = NULL;
  t = SSL_write_term_to_stream_text(z_58, a_59);
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_15);
  return(t);
}
ATerm k_5 (ATerm m_109 (ATerm), ATerm e_472, ATerm d_59, ATerm t)
{
  ATerm m_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_472, term_g_10);
  t = open_stream_0_0(t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_15, d_59);
  t = m_109(t);
  t = fclose_0_0(t);
  t = d_59;
  return(t);
}
ATerm j_5 (ATerm v_58, ATerm w_58, ATerm t)
{
  ATerm n_15 = NULL;
  t = SSL_write_term_to_stream_baf(v_58, w_58);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_15);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = fetch_1_0(d_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(e_3, r_15, t_15, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          u_15 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(u_15, v_15, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm w_15 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(g_3, w_15, d_16, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,j_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Stream_1))
        {
          f_16 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(f_16, g_16, t);
  e_16 = t;
  t = term_j_10;
  h_16 = t;
  t = e_16;
  if(match_cons(t, sym_Stream_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, e_16);
  t = h_5(h_16, j_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  o_15 = t;
  {
    ATerm u_2 (ATerm t)
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_2 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_15 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_2, t);
          ;
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
          t = term_m_10;
          if(((p_15 != NULL) && (p_15 != t)))
            _fail(t);
          else
            p_15 = t;
        }
      return(t);
    }
    t = _2_0(u_2, _id, t);
    t = o_15;
    {
      ATerm w_2 (ATerm t)
      {
        ATerm q_15 = NULL;
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_15), q_15);
        return(t);
      }
      t = _2_0(_id, w_2, t);
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(a_3, b_3, t);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = _2_0(_id, f_3, t);
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
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,o_16 = NULL,r_16 = NULL;
  k_16 = t;
  t = dtime_0_0(t);
  t = k_16;
  t = o_112(t);
  l_16 = t;
  t = dtime_0_0(t);
  m_16 = t;
  t = l_16;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_16), (ATerm) ATmakeAppl(sym_Runtime_1, m_16)), r_16);
  return(t);
}
ATerm j_17 (ATerm a_17, ATerm t)
{
  t = SSL_fclose(a_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_17 = NULL,h_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_17 = ATgetArgument(t, 0);
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_17);
            ;
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            t = j_17(h_17, t);
          }
      }
    }
  else
    {
      t = j_17(h_17, t);
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
  ATerm k_17 = NULL;
  t = SSL_fopen(n_55, o_55);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_17 = NULL;
  t = SSL_stdin_stream();
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_17 = NULL;
  t = SSL_stdout_stream();
  r_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stderr_stream();
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm o_18 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_18;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  t = SSL_is_string(r_18);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      ATerm s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = NULL,z_15 = NULL;
        i_18 = t;
        t = SSL_explode_term(i_18);
        if(match_cons(t, sym__2))
          {
            ATerm v_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_10 = ATgetArgument(t, 1);
              if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
                {
                  z_15 = ATgetFirst((ATermList) w_10);
                  {
                    ATerm x_10 = (ATerm) ATgetNext((ATermList) w_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_15;
        if(match_cons(t, sym_stderr_0))
          {
            t = z_15;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = z_15;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = z_15;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm y_10 = t;
          int z_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_18 = NULL,n_18 = NULL;
              t = _2_0(h_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_18 = ATgetArgument(t, 0);
                  n_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_5(k_18, n_18, t);
              ;
              LocalPopChoice(z_10);
            }
          else
            {
              t = y_10;
              {
                ATerm p_18 = NULL,q_18 = NULL;
                t = _2_0(i_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_18 = ATgetArgument(t, 0);
                    q_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_5(p_18, q_18, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18 = NULL;
      w_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_18, term_d_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = debug_1_0(j_3, t);
      _fail(t);
    }
  t_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(v_18, t);
  u_18 = t;
  t = t_18;
  t = fclose_0_0(t);
  t = u_18;
  return(t);
}
ATerm fetch_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm y_18 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_94, _id, t);
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = Cons_2_0(_id, y_18, t);
      }
    return(t);
  }
  t = y_18(t);
  return(t);
}
ATerm g_5 (ATerm b_53, ATerm c_53, ATerm t)
{
  t = SSL_strcat(b_53, c_53);
  return(t);
}
ATerm debug_1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  z_18 = t;
  t = k_109(t);
  a_19 = t;
  t = term_w_6;
  b_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_18), a_19);
  c_19 = t;
  t = SSL_printnl(b_19, c_19);
  t = z_18;
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_19 = NULL;
      o_19 = t;
      t = SSL_is_string(o_19);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_3, t);
            ;
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            {
              ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
              u_19 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_19 = ATgetArgument(t, 0);
                  t = v_19;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_19 = ATgetArgument(t, 0);
                      t = v_19;
                      {
                        ATerm o_11 = t;
                        int p_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_11);
                          }
                        else
                          {
                            t = o_11;
                            t = debug_1_0(l_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_20 = NULL,c_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_19 = ATgetArgument(t, 0);
                          w_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_19;
                      t = eval_config_0_0(t);
                      b_20 = t;
                      t = w_19;
                      t = eval_config_0_0(t);
                      c_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_20, c_20);
                      t = g_5(b_20, c_20, t);
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
  ATerm f_20 = NULL,g_20 = NULL;
  f_20 = t;
  t = term_q_11;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, f_20);
  t = p_5(g_20, f_20, t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_20 = NULL,i_20 = NULL;
        t = eval_config_0_0(t);
        h_20 = t;
        t = term_q_11;
        i_20 = t;
        t = SSL_table_put(i_20, f_20, h_20);
        t = h_20;
        ;
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20 = NULL,l_20 = NULL;
      j_20 = t;
      t = term_y_11;
      t = get_config_0_0(t);
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_20, term_z_11);
      t = geq_0_0(t);
      t = j_20;
      t = x_110(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  if(match_string(t, "-k"))
    {
      t = n_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_20;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  t = SSL_string_to_int(o_20);
  p_20 = t;
  t = term_a_12;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_12, p_20);
  t = s_5(q_20, p_20, t);
  t = o_20;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, n_3, o_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-S"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t = term_y_11;
  t_20 = t;
  t = term_l_7;
  u_20 = t;
  t = term_d_12;
  t = s_5(t_20, u_20, t);
  t = term_e_12;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm s_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  t = SSL_string_to_int(v_20);
  w_20 = t;
  t = term_y_11;
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, w_20);
  t = s_5(x_20, w_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_20);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  t = term_m_12;
  y_20 = t;
  t = term_v_6;
  z_20 = t;
  t = term_n_12;
  t = s_5(y_20, z_20, t);
  t = term_o_12;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, q_3, r_3, t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_3, u_3, v_3, t);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = Option_3_0(w_3, x_3, c_4, t);
          }
      }
    }
  return(t);
}
ATerm s_5 (ATerm c_60, ATerm d_60, ATerm t)
{
  ATerm a_21 = NULL;
  t = term_q_11;
  a_21 = t;
  t = SSL_table_put(a_21, c_60, d_60);
  t = (ATerm) ATmakeAppl(sym__3, term_q_11, c_60, d_60);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
      t = term_v_6;
      t = d_0(t);
      f_21 = t;
      t = term_u_12;
      g_21 = t;
      t = term_v_12;
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_12, term_v_12, f_21);
      t = q_5(g_21, h_21, f_21, t);
      _fail(t);
    }
  else
    {
      ATerm k_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_21 = ATgetFirst((ATermList) t);
          e_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_21;
      t = a_0(t);
      t = term_v_6;
      t = b_0(t);
      k_21 = t;
      t = (ATerm) ATinsert(CheckATermList(e_21), k_21);
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  if(match_string(t, "-o"))
    {
      t = m_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_21;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  t = term_w_12;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, n_21);
  t = s_5(o_21, n_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_21);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, f_4, g_4, t);
  return(t);
}
ATerm q_5 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_13 = ATgetArgument(t, 0);
            ATerm e_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
        t = p_5(a_65, b_65, t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = (ATerm) ATempty;
      }
    r_21 = t;
    t = (ATerm) ATinsert(CheckATermList(r_21), z_64);
    s_21 = t;
    t = SSL_table_put(a_65, b_65, s_21);
    t = q_21;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
      t = term_v_6;
      t = k_0(t);
      d_22 = t;
      t = term_u_12;
      e_22 = t;
      t = term_v_12;
      f_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_12, term_v_12, d_22);
      t = q_5(e_22, f_22, d_22, t);
      _fail(t);
    }
  else
    {
      ATerm j_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_22 = ATgetFirst((ATermList) t);
          c_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      t = h_0(t);
      t = b_22;
      t = j_0(t);
      j_22 = t;
      t = (ATerm) ATinsert(CheckATermList(c_22), j_22);
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  if(match_string(t, "-i"))
    {
      t = l_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_22;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  t = term_f_13;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_13, m_22);
  t = s_5(n_22, m_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_22);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, l_4, n_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_6;
  t = whoami_0_0(t);
  o_22 = t;
  t = term_w_6;
  p_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_13), o_22);
  q_22 = t;
  t = SSL_printnl(p_22, q_22);
  t = term_z_6;
  r_22 = t;
  t = SSL_exit(r_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_5 (ATerm l_45, ATerm m_45, ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_45, m_45);
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = SSL_addr(l_45, m_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm s_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_99(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = s_13;
      {
        ATerm u_22 = NULL,v_22 = NULL,y_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_22 = ATgetFirst((ATermList) t);
            v_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_22;
        t = foldr_2_0(e_99, f_99, t);
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_22, y_22);
        t = f_99(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  if(match_cons(t, sym__2))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(m_17, n_17, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_23 = NULL,z_16 = NULL,d_17 = NULL;
  t = times_0_0(t);
  z_16 = t;
  t = SSL_explode_term(z_16);
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_17;
  t = foldr_2_0(q_4, r_4, t);
  b_23 = t;
  t = SSL_TicksToSeconds(b_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_23;
        if((n_23 != t))
          {
            _fail(t);
          }
        t = m_23;
        ;
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_23, o_23);
              ;
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              t = SSL_gtr(n_23, o_23);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_23, o_23);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23 = NULL,t_23 = NULL;
      r_23 = t;
      t = term_y_11;
      t = get_config_0_0(t);
      t_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_23, term_z_6);
      t = geq_0_0(t);
      t = r_23;
      t = w_110(t);
      ;
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  t = run_time_0_0(t);
  v_23 = t;
  t = term_v_6;
  t = whoami_0_0(t);
  w_23 = t;
  t = term_w_6;
  x_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_14), v_23), term_i_14), w_23);
  y_23 = t;
  t = SSL_printnl(x_23, y_23);
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_14), v_23), term_i_14), w_23));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_7;
  z_23 = t;
  t = SSL_exit(z_23);
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm o_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = o_14;
      {
        ATerm s_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(v_14);
          }
        else
          {
            t = s_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm w_14 = t;
  int x_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_14);
    }
  else
    {
      t = w_14;
      t = fetch_1_0(u_4, t);
    }
  t = m_113(t);
  return(t);
}
ATerm map_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm a_24 (ATerm t)
  {
    ATerm a_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = a_15;
        t = Cons_2_0(d_94, a_24, t);
      }
    return(t);
  }
  t = a_24(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_24 = ATgetFirst((ATermList) t);
      d_24 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_24 = NULL,i_24 = NULL;
        t = d_24;
        t = f_0(t);
        h_24 = t;
        t = c_24;
        t = e_0(t);
        i_24 = t;
        t = d_24;
        {
          ATerm v_4 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(h_24), i_24);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_6;
      t = f_0(t);
    }
  return(t);
}
ATerm p_5 (ATerm r_66, ATerm s_66, ATerm t)
{
  t = SSL_table_get(r_66, s_66);
  return(t);
}
ATerm Program_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,c_1 = NULL,e_1 = NULL;
  m_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  j_24 = t;
  t = k_24;
  t = y_81(t);
  l_24 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_24);
  c_1 = t;
  t = SSLsetAnnotations(c_1, j_24);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_24), term_h_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL;
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      t = fetch_1_0(w_4, t);
    }
  t = term_s_15;
  t = echo_0_0(t);
  t = term_u_12;
  p_24 = t;
  t = term_v_12;
  q_24 = t;
  t = term_x_15;
  t = p_5(p_24, q_24, t);
  t = reverse_acc_2_0(_id, x_4, t);
  t = map_1_0(y_4, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,f_1 = NULL,g_1 = NULL;
  v_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_24);
  s_24 = t;
  t = t_24;
  t = z_81(t);
  u_24 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_24);
  f_1 = t;
  t = SSLsetAnnotations(f_1, s_24);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  {
    ATerm y_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_24;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_16 = ATgetFirst((ATermList) t);
                ATerm c_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_24;
          }
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = y_15;
        t = (ATerm) ATinsert(ATempty, z_24);
      }
    a_25 = t;
    t = term_m_10;
    b_25 = t;
    t = SSL_printnl(b_25, a_25);
    t = z_24;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  t = term_i_16;
  f_25 = t;
  t = term_v_6;
  g_25 = t;
  t = term_n_16;
  t = s_5(f_25, g_25, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  t = term_i_16;
  h_25 = t;
  t = term_v_6;
  i_25 = t;
  t = term_n_16;
  t = s_5(h_25, i_25, t);
  t = term_q_16;
  j_25 = t;
  t = term_v_6;
  k_25 = t;
  t = term_s_16;
  t = s_5(j_25, k_25, t);
  t = term_t_16;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_5, c_5, e_5, t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      t = Option_3_0(f_5, r_5, t_5, t);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  n_25 = t;
  t = term_p_13;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, n_25);
  t = s_5(o_25, n_25, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_17;
        t = p_115(t);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
      }
    t = m_25;
    {
      ATerm w_5 (ATerm t)
      {
        ATerm c_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = g_17;
                t = p_115(t);
                t = Cons_2_0(_id, w_5, t);
              }
            ;
            LocalPopChoice(f_17);
          }
        else
          {
            t = c_17;
            {
              ATerm q_25 = NULL,r_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_25 = ATgetFirst((ATermList) t);
                  r_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_25), (ATerm) ATmakeAppl(sym_Undefined_1, q_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_5, w_5, t);
    }
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  if(match_string(t, "--help"))
    {
      t = f_26;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_26;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_26;
        }
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  t = term_y_14;
  g_26 = t;
  t = term_v_6;
  h_26 = t;
  t = term_o_17;
  t = s_5(g_26, h_26, t);
  t = term_p_17;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm c_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  y_25 = t;
  t = term_u_12;
  b_26 = t;
  t = term_v_12;
  c_26 = t;
  t = (ATerm) ATempty;
  d_26 = t;
  t = SSL_table_put(b_26, c_26, d_26);
  t = y_25;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm s_17 = t;
      int t_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_115(t);
          ;
          LocalPopChoice(t_17);
        }
      else
        {
          t = s_17;
          {
            ATerm v_17 = t;
            int w_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_5, z_5, b_6, t);
                ;
                LocalPopChoice(w_17);
              }
            else
              {
                t = v_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_5, t);
    {
      ATerm x_17 = t;
      int y_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_26 = NULL;
          o_26 = t;
          {
            ATerm z_17 = t;
            int a_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_18 = NULL;
                t = o_26;
                {
                  ATerm b_18 = t;
                  int c_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_y_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_18);
                    }
                  else
                    {
                      t = b_18;
                      t = fetch_1_0(c_6, t);
                    }
                  t = o_26;
                  t = default_system_usage_0_0(t);
                  t = term_l_7;
                  f_18 = t;
                  t = SSL_exit(f_18);
                }
                ;
                LocalPopChoice(a_18);
              }
            else
              {
                t = z_17;
                {
                  ATerm l_18 = NULL;
                  t = term_i_16;
                  t = get_config_0_0(t);
                  t = o_26;
                  t = default_system_about_0_0(t);
                  t = term_l_7;
                  l_18 = t;
                  t = SSL_exit(l_18);
                }
              }
          }
          ;
          LocalPopChoice(y_17);
        }
      else
        {
          t = x_17;
          {
            ATerm d_18 = t;
            int e_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
                ATerm d_6 (ATerm t)
                {
                  ATerm e_6 (ATerm t)
                  {
                    if(((z_25 != NULL) && (z_25 != t)))
                      _fail(t);
                    else
                      z_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(e_6, t);
                  return(t);
                }
                t = fetch_1_0(d_6, t);
                t = term_w_6;
                p_26 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), term_g_18);
                q_26 = t;
                t = SSL_printnl(p_26, q_26);
                t = (ATerm) ATmakeAppl(sym__2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), term_g_18));
                t = default_system_usage_0_0(t);
                t = term_z_6;
                r_26 = t;
                t = SSL_exit(r_26);
                ;
                LocalPopChoice(e_18);
              }
            else
              {
                t = d_18;
              }
          }
        }
      a_26 = t;
      t = term_u_12;
      e_26 = t;
      t = SSL_table_destroy(e_26);
      t = a_26;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_113 (ATerm), ATerm p_113 (ATerm), ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  t = parse_options_1_0(o_113, t);
  u_26 = t;
  t = term_h_18;
  v_26 = t;
  t = SSL_table_create(v_26);
  t = term_h_18;
  w_26 = t;
  t = term_j_18;
  x_26 = t;
  t = SSL_table_put(w_26, x_26, u_26);
  t = u_26;
  t = q_113(t);
  {
    ATerm m_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_113, t);
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = m_18;
        {
          ATerm x_18 = t;
          int d_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_113(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_19);
            }
          else
            {
              t = x_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = if_verbose2_1_0(n_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  t = term_e_19;
  y_26 = t;
  t = term_v_6;
  z_26 = t;
  t = term_f_19;
  t = s_5(y_26, z_26, t);
  t = term_g_19;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  a_27 = t;
  t = term_p_13;
  t = get_config_0_0(t);
  b_27 = t;
  t = term_w_6;
  c_27 = t;
  t = (ATerm) ATinsert(ATempty, b_27);
  d_27 = t;
  t = SSL_printnl(c_27, d_27);
  t = a_27;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_112 (ATerm), ATerm y_112 (ATerm), ATerm z_112 (ATerm), ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_112(t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              {
                ATerm m_19 = t;
                int n_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(n_19);
                  }
                else
                  {
                    t = m_19;
                    {
                      ATerm p_19 = t;
                      int q_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_6, l_6, m_6, t);
                          ;
                          LocalPopChoice(q_19);
                        }
                      else
                        {
                          t = p_19;
                          {
                            ATerm r_19 = t;
                            int s_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(s_19);
                              }
                            else
                              {
                                t = r_19;
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
  ATerm i_6 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
    e_27 = t;
    {
      ATerm t_19 = t;
      int x_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_27 != NULL) && (f_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_6, t);
          ;
          LocalPopChoice(x_19);
        }
      else
        {
          t = t_19;
          t = term_y_19;
          f_27 = t;
        }
      t = not_null(f_27);
      t = ReadFromFile_0_0(t);
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_27, g_27);
      t = apply_strategy_1_0(x_112, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_6, z_112, h_6, i_6, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = _2_0(_id, q_6, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = Specification_1_0(r_6, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = Cons_2_0(_id, s_6, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = Cons_2_0(t_6, u_6, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = Strategies_1_0(rename_sdefs_0_0, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_6, _fail, default_usage_0_0, t);
  return(t);
}

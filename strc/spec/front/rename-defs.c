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
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
ATerm term_l_18;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_w_8;
ATerm term_p_8;
ATerm term_f_8;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
void init_constant_terms (void)
{
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_f_8);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_8);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_m_13, term_j_7);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_v_13);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_s_15, term_j_7);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_j_7);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_j_7);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_j_7);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm z_1 (ATerm n_1, ATerm);
ATerm RenameVar_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm RenameCall_0_0 (ATerm);
ATerm topdown_1_0 (ATerm t_77 (ATerm), ATerm);
ATerm z_5 (ATerm e_106 (ATerm), ATerm t_57, ATerm r_57, ATerm);
ATerm b_6 (ATerm u_54, ATerm v_54, ATerm);
ATerm HoArg_0_0 (ATerm);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm escape_1_0 (ATerm d_94 (ATerm (ATerm), ATerm), ATerm);
ATerm foldr_3_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm x_1 (ATerm);
ATerm a_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm RenameSDef_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm rename_sdefs_0_0 (ATerm);
ATerm f_6 (ATerm u_44, ATerm v_44, ATerm);
ATerm g_6 (ATerm i_48, ATerm j_48, ATerm);
ATerm i_6 (ATerm j_99 (ATerm), ATerm v_460, ATerm m_48, ATerm);
ATerm h_6 (ATerm e_48, ATerm f_48, ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm n_28 (ATerm h_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm j_6 (ATerm k_48, ATerm);
ATerm k_6 (ATerm w_44, ATerm x_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_30 (ATerm x_28, ATerm);
ATerm b_30 (ATerm b_29, ATerm c_29, ATerm d_29, ATerm);
ATerm c_30 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm);
ATerm l_6 (ATerm);
ATerm z_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_84 (ATerm), ATerm);
ATerm e_6 (ATerm k_42, ATerm l_42, ATerm);
ATerm debug_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm h_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm w_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm r_6 (ATerm l_49, ATerm m_49, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_6 (ATerm j_54, ATerm k_54, ATerm i_54, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm m_6 (ATerm r_34, ATerm s_34, ATerm);
ATerm foldr_2_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_5 (ATerm);
ATerm need_help_1_0 (ATerm j_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm o_6 (ATerm a_56, ATerm b_56, ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm n_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_105 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm parse_options_1_0 (ATerm l_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm iowrap_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = term_j_7;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_k_7;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_7), p_0), term_l_7);
  u_0 = t;
  t = SSL_printnl(s_0, u_0);
  t = term_n_7;
  q_0 = t;
  t = SSL_exit(q_0);
  t = a_0;
  return(t);
}
ATerm z_1 (ATerm n_1, ATerm t)
{
  ATerm p_1 = NULL,b_2 = NULL;
  t = term_o_7;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, n_1);
  t = b_6(b_2, n_1, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_1;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm s_1 = NULL,v_1 = NULL;
  s_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm q_7 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_1;
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_7 = ATgetArgument(t, 0);
            ATerm v_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(s_7);
        {
          ATerm w_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_2 = NULL,r_2 = NULL;
              t = term_o_7;
              r_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_7, s_1);
              t = b_6(r_2, s_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm y_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("t_0", 0, ATtrue)))
                    _fail(t);
                  f_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_2;
              ;
              LocalPopChoice(x_7);
            }
          else
            {
              t = w_7;
              {
                ATerm z_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 = NULL,e_3 = NULL;
                    t = term_o_7;
                    e_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_o_7, s_1);
                    t = b_6(e_3, s_1, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm b_8 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) b_8) != ATmakeSymbol("o_0", 0, ATtrue)))
                          _fail(t);
                        a_3 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_3;
                    ;
                    LocalPopChoice(a_8);
                  }
                else
                  {
                    t = z_7;
                    {
                      ATerm c_8 = t;
                      int d_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_3 = NULL,o_3 = NULL;
                          t = term_o_7;
                          o_3 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_o_7, s_1);
                          t = b_6(o_3, s_1, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm e_8 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) e_8) != ATmakeSymbol("i_0", 0, ATtrue)))
                                _fail(t);
                              j_3 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = j_3;
                          ;
                          LocalPopChoice(d_8);
                        }
                      else
                        {
                          t = c_8;
                          t = z_1(s_1, t);
                        }
                    }
                  }
              }
            }
        }
      }
    else
      {
        t = r_7;
        t = z_1(s_1, t);
      }
  }
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm s_4 = NULL,v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(s_4, v_4, t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(y_4, z_4, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(o_5, p_5, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,i_4 = NULL;
  d_4 = t;
  if(match_cons(t, sym_CallT_3))
    {
      e_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
      c_4 = ATgetArgument(t, 2);
      {
        ATerm b_4 = NULL,f_4 = NULL,l_4 = NULL;
        t = e_4;
        if(match_cons(t, sym_SVar_1))
          {
            g_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_4;
        t = foldr_3_0(x_0, c_1, d_1, t);
        b_4 = t;
        t = c_4;
        t = foldr_3_0(e_1, f_1, i_1, t);
        f_4 = t;
        {
          ATerm g_8 = t;
          int h_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, g_4, (ATerm) ATmakeAppl(sym__2, b_4, f_4));
              t = RenameVar_0_0(t);
              l_4 = t;
              ;
              LocalPopChoice(h_8);
            }
          else
            {
              t = g_8;
              t = g_4;
              t = HoArg_0_0(t);
              l_4 = t;
            }
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_4), i_4, c_4);
        }
      }
    }
  else
    {
      ATerm i_5 = NULL,l_5 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          e_4 = ATgetArgument(t, 0);
          i_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_4;
      if(match_cons(t, sym_SVar_1))
        {
          g_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_4;
      t = foldr_3_0(j_1, m_1, o_1, t);
      i_5 = t;
      {
        ATerm i_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, g_4, i_5);
            t = RenameVar_0_0(t);
            l_5 = t;
            ;
            LocalPopChoice(k_8);
          }
        else
          {
            t = i_8;
            t = g_4;
            t = HoArg_0_0(t);
            l_5 = t;
          }
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_5), i_4);
      }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = topdown_1_0(t_77, t);
    return(t);
  }
  t = t_77(t);
  t = SRTS_all(q_1, t);
  return(t);
}
ATerm z_5 (ATerm e_106 (ATerm), ATerm t_57, ATerm r_57, ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  t = e_106(t);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_4, t_57, r_57);
  t = p_6(m_4, t_57, r_57, t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL;
        t = term_p_8;
        t_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_4, term_p_8);
        t = o_6(m_4, t_4, t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_4 = ATgetFirst((ATermList) t);
        o_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_8;
    q_4 = t;
    t = (ATerm) ATinsert(CheckATermList(o_4), (ATerm) ATinsert(CheckATermList(n_4), t_57));
    r_4 = t;
    t = SSL_table_put(m_4, q_4, r_4);
    t = p_4;
  }
  return(t);
}
ATerm b_6 (ATerm u_54, ATerm v_54, ATerm t)
{
  ATerm u_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_54, v_54);
  t = o_6(u_54, v_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_4 = ATgetFirst((ATermList) t);
      {
        ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm s_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL;
        t = term_w_8;
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
        t = b_6(j_8, u_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = s_8;
        {
          ATerm y_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_8 = NULL,x_8 = NULL;
              t = term_w_8;
              x_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
              t = b_6(x_8, u_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm a_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("w_0", 0, ATtrue)))
                    _fail(t);
                  u_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_8;
              ;
              LocalPopChoice(z_8);
            }
          else
            {
              t = y_8;
              {
                ATerm c_9 = t;
                int d_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_9 = NULL;
                    t = term_w_8;
                    f_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
                    t = b_6(f_9, u_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    ;
                    LocalPopChoice(d_9);
                  }
                else
                  {
                    t = c_9;
                    {
                      ATerm e_9 = t;
                      int g_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm j_9 = NULL,u_9 = NULL;
                          t = term_w_8;
                          u_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
                          t = b_6(u_9, u_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm h_9 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("r_0", 0, ATtrue)))
                                _fail(t);
                              j_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = j_9;
                          ;
                          LocalPopChoice(g_9);
                        }
                      else
                        {
                          t = e_9;
                          {
                            ATerm i_9 = t;
                            int k_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm d_10 = NULL;
                                t = term_w_8;
                                d_10 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
                                t = b_6(d_10, u_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                _fail(t);
                                ;
                                LocalPopChoice(k_9);
                              }
                            else
                              {
                                t = i_9;
                                {
                                  ATerm n_9 = t;
                                  int o_9 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_10 = NULL,k_10 = NULL;
                                      t = term_w_8;
                                      k_10 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
                                      t = b_6(k_10, u_7, t);
                                      if(match_cons(t, sym_Defined_2))
                                        {
                                          ATerm p_9 = ATgetArgument(t, 0);
                                          if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("m_0", 0, ATtrue)))
                                            _fail(t);
                                          h_10 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = h_10;
                                      ;
                                      LocalPopChoice(o_9);
                                    }
                                  else
                                    {
                                      t = n_9;
                                      {
                                        ATerm q_9 = t;
                                        int r_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm x_10 = NULL;
                                            t = term_w_8;
                                            x_10 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
                                            t = b_6(x_10, u_7, t);
                                            if(!(match_cons(t, sym_Undefined_0)))
                                              _fail(t);
                                            _fail(t);
                                            ;
                                            LocalPopChoice(r_9);
                                          }
                                        else
                                          {
                                            t = q_9;
                                            {
                                              ATerm e_11 = NULL,h_11 = NULL;
                                              t = term_w_8;
                                              h_11 = t;
                                              t = (ATerm) ATmakeAppl(sym__2, term_w_8, u_7);
                                              t = b_6(h_11, u_7, t);
                                              if(match_cons(t, sym_Defined_2))
                                                {
                                                  ATerm s_9 = ATgetArgument(t, 0);
                                                  if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("g_0", 0, ATtrue)))
                                                    _fail(t);
                                                  e_11 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = e_11;
                                            }
                                          }
                                      }
                                    }
                                }
                              }
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
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_8 = ATgetFirst((ATermList) t);
      o_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_8;
  if(match_int(t, 95))
    {
      ATerm r_8 = NULL;
      t = o_8;
      t = n_0(t);
      r_8 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(r_8), term_t_9), term_t_9);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm t_8 = NULL;
          t = o_8;
          t = n_0(t);
          t_8 = t;
          t = (ATerm) ATinsert(CheckATermList(t_8), term_t_9);
        }
      else
        {
          ATerm b_9 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = o_8;
          t = n_0(t);
          b_9 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(b_9), term_t_9), term_v_9), term_t_9);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm d_94 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  m_9 = t;
  t = SSL_explode_string(m_9);
  {
    ATerm n_10 (ATerm t)
    {
      ATerm w_9 = t;
      int x_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_94(n_10, t);
          ;
          LocalPopChoice(x_9);
        }
      else
        {
          t = w_9;
          {
            ATerm b_10 = NULL,l_10 = NULL,m_10 = NULL;
            m_10 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_10 = ATgetFirst((ATermList) t);
                l_10 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm n_11 = NULL,q_11 = NULL,v_0 = NULL;
                  t = SSLgetAnnotations(m_10);
                  n_11 = t;
                  t = l_10;
                  t = n_10(t);
                  q_11 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_11), b_10);
                  v_0 = t;
                  t = SSLsetAnnotations(v_0, n_11);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_10;
              }
          }
        }
      return(t);
    }
    t = n_10(t);
    l_9 = t;
    t = SSL_implode_string(l_9);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm x_88 (ATerm), ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_10;
      t = x_88(t);
    }
  else
    {
      ATerm d_11 = NULL,j_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_10 = ATgetFirst((ATermList) t);
          t_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_10;
      t = z_88(t);
      d_11 = t;
      t = t_10;
      t = foldr_3_0(x_88, y_88, z_88, t);
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_11, j_11);
      t = y_88(t);
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(x_14, y_14, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(z_14, a_15, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm w_17 = NULL,c_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(w_17, c_18, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(d_18, e_18, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(y_20, z_20, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(a_21, c_21, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_o_7;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  if(match_cons(t, sym__2))
    {
      x_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(x_23, y_23, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_o_7;
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,g_24 = NULL;
  b_24 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
      g_24 = ATgetArgument(t, 2);
      a_24 = ATgetArgument(t, 3);
      {
        ATerm i_14 = NULL,j_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,t_14 = NULL,u_14 = NULL,q_15 = NULL,r_15 = NULL;
        t = d_24;
        t = foldr_3_0(r_1, t_1, u_1, t);
        i_14 = t;
        t = g_24;
        t = foldr_3_0(x_1, a_2, c_2, t);
        j_14 = t;
        t = c_24;
        if(match_cons(t, sym_Mod_2))
          {
            q_15 = ATgetArgument(t, 0);
            r_15 = ATgetArgument(t, 1);
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_16 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_15), term_a_10), q_15);
                  s_16 = t;
                  t = SSL_concat_strings(s_16);
                  ;
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  t = c_24;
                }
            }
          }
        else
          {
            t = c_24;
          }
        t = escape_1_0(Cify_1_0, t);
        m_14 = t;
        t = SSL_int_to_string(i_14);
        n_14 = t;
        t = SSL_int_to_string(j_14);
        o_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_14), term_c_10), n_14), term_c_10), m_14);
        u_14 = t;
        t = SSL_concat_strings(u_14);
        l_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym__2, i_14, j_14));
        p_14 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_10, l_14);
        t_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym__2, i_14, j_14)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_10, l_14));
        t = z_5(d_2, p_14, t_14, t);
        t = l_14;
        {
          ATerm f_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_15 = NULL,x_15 = NULL;
              t = c_24;
              t = HoArg_0_0(t);
              w_15 = t;
              t = term_i_10;
              x_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_24, term_i_10);
              t = z_5(e_2, c_24, x_15, t);
              t = w_15;
              ;
              LocalPopChoice(g_10);
            }
          else
            {
              t = f_10;
              {
                ATerm y_15 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_10, l_14);
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym_Defined_2, term_j_10, l_14));
                t = z_5(h_2, c_24, y_15, t);
                t = l_14;
              }
            }
          t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, l_14, d_24, g_24, a_24);
        }
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          c_24 = ATgetArgument(t, 0);
          d_24 = ATgetArgument(t, 1);
          g_24 = ATgetArgument(t, 2);
          {
            ATerm i_17 = NULL,m_17 = NULL,o_17 = NULL,p_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,x_18 = NULL,z_18 = NULL;
            t = d_24;
            t = foldr_3_0(i_2, k_2, m_2, t);
            i_17 = t;
            t = g_24;
            t = foldr_3_0(n_2, p_2, w_2, t);
            m_17 = t;
            t = c_24;
            if(match_cons(t, sym_Mod_2))
              {
                x_18 = ATgetArgument(t, 0);
                z_18 = ATgetArgument(t, 1);
                {
                  ATerm o_10 = t;
                  int p_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_19 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_18), term_a_10), x_18);
                      t_19 = t;
                      t = SSL_concat_strings(t_19);
                      ;
                      LocalPopChoice(p_10);
                    }
                  else
                    {
                      t = o_10;
                      t = c_24;
                    }
                }
              }
            else
              {
                t = c_24;
              }
            t = escape_1_0(Cify_1_0, t);
            p_17 = t;
            t = SSL_int_to_string(i_17);
            r_17 = t;
            t = SSL_int_to_string(m_17);
            s_17 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_17), term_c_10), r_17), term_c_10), p_17);
            v_17 = t;
            t = SSL_concat_strings(v_17);
            o_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym__2, i_17, m_17));
            t_17 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_10, o_17);
            u_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym__2, i_17, m_17)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_10, o_17));
            t = z_5(x_2, t_17, u_17, t);
            t = o_17;
            {
              ATerm u_10 = t;
              int v_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_19 = NULL,f_19 = NULL;
                  t = c_24;
                  t = HoArg_0_0(t);
                  d_19 = t;
                  t = term_i_10;
                  f_19 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_24, term_i_10);
                  t = z_5(y_2, c_24, f_19, t);
                  t = d_19;
                  ;
                  LocalPopChoice(v_10);
                }
              else
                {
                  t = u_10;
                  {
                    ATerm g_19 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_10, o_17);
                    g_19 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym_Defined_2, term_w_10, o_17));
                    t = z_5(z_2, c_24, g_19, t);
                    t = o_17;
                  }
                }
              t = (ATerm) ATmakeAppl(sym_ExtSDef_3, o_17, d_24, g_24);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              c_24 = ATgetArgument(t, 0);
              d_24 = ATgetArgument(t, 1);
              g_24 = ATgetArgument(t, 2);
              a_24 = ATgetArgument(t, 3);
              {
                ATerm j_20 = NULL,l_20 = NULL,o_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,m_21 = NULL,n_21 = NULL;
                t = d_24;
                t = foldr_3_0(b_3, c_3, d_3, t);
                j_20 = t;
                t = g_24;
                t = foldr_3_0(f_3, g_3, h_3, t);
                l_20 = t;
                t = c_24;
                if(match_cons(t, sym_Mod_2))
                  {
                    m_21 = ATgetArgument(t, 0);
                    n_21 = ATgetArgument(t, 1);
                    {
                      ATerm y_10 = t;
                      int z_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_22 = NULL;
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_21), term_a_10), m_21);
                          m_22 = t;
                          t = SSL_concat_strings(m_22);
                          ;
                          LocalPopChoice(z_10);
                        }
                      else
                        {
                          t = y_10;
                          t = c_24;
                        }
                    }
                  }
                else
                  {
                    t = c_24;
                  }
                t = escape_1_0(Cify_1_0, t);
                s_20 = t;
                t = SSL_int_to_string(j_20);
                t_20 = t;
                t = SSL_int_to_string(l_20);
                u_20 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_20), term_c_10), t_20), term_c_10), s_20);
                x_20 = t;
                t = SSL_concat_strings(x_20);
                o_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym__2, j_20, l_20));
                v_20 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_11, o_20);
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym__2, j_20, l_20)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_11, o_20));
                t = z_5(i_3, v_20, w_20, t);
                t = o_20;
                {
                  ATerm b_11 = t;
                  int c_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_21 = NULL,s_21 = NULL;
                      t = c_24;
                      t = HoArg_0_0(t);
                      r_21 = t;
                      t = term_i_10;
                      s_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_24, term_i_10);
                      t = z_5(k_3, c_24, s_21, t);
                      t = r_21;
                      ;
                      LocalPopChoice(c_11);
                    }
                  else
                    {
                      t = b_11;
                      {
                        ATerm t_21 = NULL;
                        t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_11, o_20);
                        t_21 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym_Defined_2, term_f_11, o_20));
                        t = z_5(l_3, c_24, t_21, t);
                        t = o_20;
                      }
                    }
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, o_20, d_24, g_24, a_24);
                }
              }
            }
          else
            {
              ATerm g_23 = NULL,k_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,s_23 = NULL,o_24 = NULL,p_24 = NULL;
              if(match_cons(t, sym_SDef_3))
                {
                  c_24 = ATgetArgument(t, 0);
                  d_24 = ATgetArgument(t, 1);
                  g_24 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = d_24;
              t = foldr_3_0(m_3, n_3, p_3, t);
              g_23 = t;
              t = c_24;
              if(match_cons(t, sym_Mod_2))
                {
                  o_24 = ATgetArgument(t, 0);
                  p_24 = ATgetArgument(t, 1);
                  {
                    ATerm g_11 = t;
                    int i_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_25 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_24), term_a_10), o_24);
                        m_25 = t;
                        t = SSL_concat_strings(m_25);
                        ;
                        LocalPopChoice(i_11);
                      }
                    else
                      {
                        t = g_11;
                        t = c_24;
                      }
                  }
                }
              else
                {
                  t = c_24;
                }
              t = escape_1_0(Cify_1_0, t);
              m_23 = t;
              t = SSL_int_to_string(g_23);
              n_23 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_23), term_c_10), m_23);
              s_23 = t;
              t = SSL_concat_strings(s_23);
              k_23 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_24, g_23);
              o_23 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_11, k_23);
              p_23 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_24, g_23), (ATerm) ATmakeAppl(sym_Defined_2, term_k_11, k_23));
              t = z_5(q_3, o_23, p_23, t);
              t = k_23;
              {
                ATerm l_11 = t;
                int m_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_24 = NULL,v_24 = NULL;
                    t = c_24;
                    t = HoArg_0_0(t);
                    u_24 = t;
                    t = term_i_10;
                    v_24 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_24, term_i_10);
                    t = z_5(r_3, c_24, v_24, t);
                    t = u_24;
                    ;
                    LocalPopChoice(m_11);
                  }
                else
                  {
                    t = l_11;
                    {
                      ATerm x_24 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_11, k_23);
                      x_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_24, (ATerm) ATmakeAppl(sym_Defined_2, term_o_11, k_23));
                      t = z_5(s_3, c_24, x_24, t);
                      t = k_23;
                    }
                  }
                t = (ATerm) ATmakeAppl(sym_SDef_3, k_23, d_24, g_24);
              }
            }
        }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = topdown_1_0(u_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = p_11;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(t_3, t);
  return(t);
}
ATerm f_6 (ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm j_25 = NULL;
  t = SSL_fputc(u_44, v_44);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_25);
  return(t);
}
ATerm g_6 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm n_25 = NULL;
  t = SSL_write_term_to_stream_text(i_48, j_48);
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_25);
  return(t);
}
ATerm i_6 (ATerm j_99 (ATerm), ATerm v_460, ATerm m_48, ATerm t)
{
  ATerm r_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_460, term_s_11);
  t = l_6(t);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_25, m_48);
  t = j_99(t);
  t = fclose_0_0(t);
  t = m_48;
  return(t);
}
ATerm h_6 (ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm s_25 = NULL;
  t = SSL_write_term_to_stream_baf(e_48, f_48);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_25);
  return(t);
}
ATerm w_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm o_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_11 = ATgetArgument(t, 0);
      if(match_cons(t_11, sym_Stream_1))
        {
          o_26 = ATgetArgument(t_11, 0);
        }
      else
        _fail(t);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(o_26, r_26, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,s_29 = NULL,t_29 = NULL,i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(match_cons(u_11, sym_Stream_1))
        {
          t_29 = ATgetArgument(u_11, 0);
        }
      else
        _fail(t);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(t_29, i_30, t);
  v_28 = t;
  t = term_v_11;
  w_28 = t;
  t = v_28;
  if(match_cons(t, sym_Stream_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, v_28);
  t = f_6(w_28, s_29, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,r_27 = NULL,s_27 = NULL,z_0 = NULL,y_0 = NULL;
  z_25 = t;
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_25);
  f_26 = t;
  t = g_26;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(v_3, t);
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = term_y_11;
        y_25 = t;
      }
    i_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_26, h_26);
    y_0 = t;
    t = SSLsetAnnotations(y_0, f_26);
    t = z_25;
    if(match_cons(t, sym__2))
      {
        b_26 = ATgetArgument(t, 0);
        c_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_25);
    a_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_26, (ATerm) ATmakeAppl(sym__2, not_null(y_25), c_26));
    z_0 = t;
    t = SSLsetAnnotations(z_0, a_26);
    e_26 = t;
    if(match_cons(t, sym__2))
      {
        r_27 = ATgetArgument(t, 0);
        s_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm z_11 = t;
      int a_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_25 = NULL,x_25 = NULL,j_26 = NULL,k_26 = NULL,n_26 = NULL,a_1 = NULL;
          t = SSLgetAnnotations(e_26);
          u_25 = t;
          t = r_27;
          t = fetch_1_0(w_3, t);
          x_25 = t;
          t = s_27;
          if(match_cons(t, sym__2))
            {
              k_26 = ATgetArgument(t, 0);
              n_26 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_6(x_3, k_26, n_26, t);
          j_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_25, j_26);
          a_1 = t;
          t = SSLsetAnnotations(a_1, u_25);
          ;
          LocalPopChoice(a_12);
        }
      else
        {
          t = z_11;
          {
            ATerm a_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(e_26);
            a_28 = t;
            t = s_27;
            if(match_cons(t, sym__2))
              {
                t_28 = ATgetArgument(t, 0);
                u_28 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_6(y_3, t_28, u_28, t);
            s_28 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_27, s_28);
            b_1 = t;
            t = SSLsetAnnotations(b_1, a_28);
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
ATerm apply_strategy_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  z_27 = t;
  t = dtime_0_0(t);
  t = z_27;
  t = l_102(t);
  y_27 = t;
  t = dtime_0_0(t);
  v_27 = t;
  t = y_27;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_27), (ATerm) ATmakeAppl(sym_Runtime_1, v_27)), x_27);
  return(t);
}
ATerm n_28 (ATerm h_28, ATerm t)
{
  t = SSL_fclose(h_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  l_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_28 = ATgetArgument(t, 0);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_28);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = n_28(l_28, t);
          }
      }
    }
  else
    {
      t = n_28(l_28, t);
    }
  return(t);
}
ATerm j_6 (ATerm k_48, ATerm t)
{
  t = SSL_read_term_from_stream(k_48);
  return(t);
}
ATerm k_6 (ATerm w_44, ATerm x_44, ATerm t)
{
  ATerm o_28 = NULL;
  t = SSL_fopen(w_44, x_44);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_28 = NULL;
  t = SSL_stdin_stream();
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_28 = NULL;
  t = SSL_stdout_stream();
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_28 = NULL;
  t = SSL_stderr_stream();
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_28);
  return(t);
}
ATerm a_30 (ATerm x_28, ATerm t)
{
  ATerm y_28 = NULL;
  t = SSL_explode_term(x_28);
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
          {
            y_28 = ATgetFirst((ATermList) e_12);
            {
              ATerm f_12 = (ATerm) ATgetNext((ATermList) e_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_30 (ATerm b_29, ATerm c_29, ATerm d_29, ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,j_29 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(d_29);
  g_29 = t;
  t = b_29;
  if(match_cons(t, sym_Path_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_29, c_29);
  g_1 = t;
  t = SSLsetAnnotations(g_1, g_29);
  if(match_cons(t, sym__2))
    {
      e_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(e_29, f_29, t);
  return(t);
}
ATerm c_30 (ATerm l_29, ATerm m_29, ATerm n_29, ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,v_29 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(n_29);
  q_29 = t;
  t = SSL_is_string(l_29);
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_29, m_29);
  h_1 = t;
  t = SSLsetAnnotations(h_1, q_29);
  if(match_cons(t, sym__2))
    {
      o_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(o_29, p_29, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_30(x_29, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm i_12 = t;
              int j_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_30(y_29, z_29, x_29, t);
                  ;
                  LocalPopChoice(j_12);
                }
              else
                {
                  t = i_12;
                  t = c_30(y_29, z_29, x_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_30(x_29, t);
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_30 = NULL;
      g_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_30, term_n_12);
      t = l_6(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = debug_1_0(z_3, t);
      _fail(t);
    }
  e_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(f_30, t);
  d_30 = t;
  t = e_30;
  t = fclose_0_0(t);
  t = d_30;
  return(t);
}
ATerm fetch_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm e_31 (ATerm t)
  {
    ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
    b_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_31 = ATgetFirst((ATermList) t);
        d_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_32 = NULL,d_33 = NULL,k_1 = NULL;
          t = SSLgetAnnotations(b_31);
          o_32 = t;
          t = c_31;
          t = e_84(t);
          d_33 = t;
          t = (ATerm) ATinsert(CheckATermList(d_31), d_33);
          k_1 = t;
          t = SSLsetAnnotations(k_1, o_32);
          ;
          LocalPopChoice(p_12);
        }
      else
        {
          t = o_12;
          {
            ATerm s_35 = NULL,g_36 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(b_31);
            s_35 = t;
            t = d_31;
            t = e_31(t);
            g_36 = t;
            t = (ATerm) ATinsert(CheckATermList(g_36), c_31);
            l_1 = t;
            t = SSLsetAnnotations(l_1, s_35);
          }
        }
    }
    return(t);
  }
  t = e_31(t);
  return(t);
}
ATerm e_6 (ATerm k_42, ATerm l_42, ATerm t)
{
  t = SSL_strcat(k_42, l_42);
  return(t);
}
ATerm debug_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,k_31 = NULL,l_31 = NULL;
  h_31 = t;
  t = h_99(t);
  i_31 = t;
  t = term_k_7;
  k_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_31), i_31);
  l_31 = t;
  t = SSL_printnl(k_31, l_31);
  t = h_31;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_31 = NULL;
      s_31 = t;
      t = SSL_is_string(s_31);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_4, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
              y_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_31 = ATgetArgument(t, 0);
                  t = z_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_31 = ATgetArgument(t, 0);
                      t = z_31;
                      {
                        ATerm x_12 = t;
                        int y_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_12);
                          }
                        else
                          {
                            t = x_12;
                            t = debug_1_0(h_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_32 = NULL,f_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_31 = ATgetArgument(t, 0);
                          a_32 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_31;
                      t = eval_config_0_0(t);
                      e_32 = t;
                      t = a_32;
                      t = eval_config_0_0(t);
                      f_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_32, f_32);
                      t = e_6(e_32, f_32, t);
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
  ATerm j_32 = NULL,k_32 = NULL;
  j_32 = t;
  t = term_z_12;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, j_32);
  t = o_6(k_32, j_32, t);
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL,q_32 = NULL;
        t = eval_config_0_0(t);
        p_32 = t;
        t = term_z_12;
        q_32 = t;
        t = SSL_table_put(q_32, j_32, p_32);
        t = p_32;
        ;
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_32 = NULL;
        t = term_e_13;
        t = get_config_0_0(t);
        w_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_32, term_f_13);
        t = geq_0_0(t);
        t = u_32;
        t = u_100(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = u_32;
      }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm z_32 = NULL;
  z_32 = t;
  if(match_string(t, "-k"))
    {
      t = z_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_32;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  t = SSL_string_to_int(a_33);
  b_33 = t;
  t = term_g_13;
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, b_33);
  t = r_6(c_33, b_33, t);
  t = a_33;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, w_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  if(match_string(t, "-S"))
    {
      t = e_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_33;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  t = term_e_13;
  f_33 = t;
  t = term_f_8;
  g_33 = t;
  t = term_i_13;
  t = r_6(f_33, g_33, t);
  t = term_j_13;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  h_33 = t;
  t = SSL_string_to_int(h_33);
  i_33 = t;
  t = term_e_13;
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, i_33);
  t = r_6(j_33, i_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_33);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  t = term_m_13;
  k_33 = t;
  t = term_j_7;
  l_33 = t;
  t = term_n_13;
  t = r_6(k_33, l_33, t);
  t = term_o_13;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, a_5, b_5, t);
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
            t = ArgOption_3_0(c_5, d_5, e_5, t);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            t = Option_3_0(f_5, g_5, h_5, t);
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm m_33 = NULL;
  t = term_z_12;
  m_33 = t;
  t = SSL_table_put(m_33, l_49, m_49);
  t = (ATerm) ATmakeAppl(sym__3, term_z_12, l_49, m_49);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
      t = term_j_7;
      t = e_0(t);
      r_33 = t;
      t = term_u_13;
      s_33 = t;
      t = term_v_13;
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_13, term_v_13, r_33);
      t = p_6(s_33, t_33, r_33, t);
      _fail(t);
    }
  else
    {
      ATerm w_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_33 = ATgetFirst((ATermList) t);
          q_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_33;
      t = c_0(t);
      t = term_j_7;
      t = d_0(t);
      w_33 = t;
      t = (ATerm) ATinsert(CheckATermList(q_33), w_33);
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  if(match_string(t, "-o"))
    {
      t = y_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_33;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  z_33 = t;
  t = term_w_13;
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_13, z_33);
  t = r_6(a_34, z_33, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_33);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, k_5, m_5, t);
  return(t);
}
ATerm p_6 (ATerm j_54, ATerm k_54, ATerm i_54, ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_14 = ATgetArgument(t, 0);
            ATerm b_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
        t = o_6(j_54, k_54, t);
        ;
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        t = (ATerm) ATempty;
      }
    d_34 = t;
    t = (ATerm) ATinsert(CheckATermList(d_34), i_54);
    e_34 = t;
    t = SSL_table_put(j_54, k_54, e_34);
    t = c_34;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_34 = NULL,q_34 = NULL,t_34 = NULL;
      t = term_j_7;
      t = l_0(t);
      p_34 = t;
      t = term_u_13;
      q_34 = t;
      t = term_v_13;
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_13, term_v_13, p_34);
      t = p_6(q_34, t_34, p_34, t);
      _fail(t);
    }
  else
    {
      ATerm x_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_34 = ATgetFirst((ATermList) t);
          m_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_34 = ATgetFirst((ATermList) t);
          o_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_34;
      t = j_0(t);
      t = n_34;
      t = k_0(t);
      x_34 = t;
      t = (ATerm) ATinsert(CheckATermList(o_34), x_34);
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-i"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  a_35 = t;
  t = term_c_14;
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, a_35);
  t = r_6(b_35, a_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_35);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, q_5, r_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_7;
  t = whoami_0_0(t);
  c_35 = t;
  t = term_k_7;
  e_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_14), c_35);
  f_35 = t;
  t = SSL_printnl(e_35, f_35);
  t = term_n_7;
  d_35 = t;
  t = SSL_exit(d_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_f_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm m_6 (ATerm r_34, ATerm s_34, ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_34, s_34);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      t = SSL_addr(r_34, s_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_88 (ATerm), ATerm w_88 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_35;
      t = v_88(t);
    }
  else
    {
      ATerm m_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_35 = ATgetFirst((ATermList) t);
          j_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_35;
      t = foldr_2_0(v_88, w_88, t);
      m_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_35, m_35);
      t = w_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL;
  if(match_cons(t, sym__2))
    {
      u_41 = ATgetArgument(t, 0);
      v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(u_41, v_41, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_35 = NULL,w_39 = NULL,x_39 = NULL;
  t = times_0_0(t);
  x_39 = t;
  t = SSL_explode_term(x_39);
  if(match_cons(t, sym__2))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_39;
  t = foldr_2_0(s_5, t_5, t);
  p_35 = t;
  t = SSL_TicksToSeconds(p_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym__2))
    {
      c_36 = ATgetArgument(t, 0);
      d_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_36;
        if((c_36 != t))
          {
            _fail(t);
          }
        t = b_36;
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
        {
          ATerm s_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_36, d_36);
              ;
              LocalPopChoice(v_14);
            }
          else
            {
              t = s_14;
              t = SSL_gtr(c_36, d_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  {
    ATerm w_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_36 = NULL;
        t = term_e_13;
        t = get_config_0_0(t);
        j_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_36, term_n_7);
        t = geq_0_0(t);
        t = h_36;
        t = t_100(t);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = w_14;
        t = h_36;
      }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,o_36 = NULL,p_36 = NULL;
  t = run_time_0_0(t);
  l_36 = t;
  t = term_j_7;
  t = whoami_0_0(t);
  m_36 = t;
  t = term_k_7;
  o_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_15), l_36), term_c_15), m_36);
  p_36 = t;
  t = SSL_printnl(o_36, p_36);
  t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_15), l_36), term_c_15), m_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_8;
  q_36 = t;
  t = SSL_exit(q_36);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  z_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_36 = ATgetArgument(t, 0);
          {
            ATerm w_42 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(z_36);
            w_42 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_36);
            w_1 = t;
            t = SSLsetAnnotations(w_1, w_42);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      t = fetch_1_0(v_5, t);
    }
  t = j_103(t);
  return(t);
}
ATerm map_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm p_37 (ATerm t)
  {
    ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
    m_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_37;
      }
    else
      {
        ATerm e_43 = NULL,h_43 = NULL,i_43 = NULL,y_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_37 = ATgetFirst((ATermList) t);
            o_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_37);
        e_43 = t;
        t = n_37;
        t = u_83(t);
        h_43 = t;
        t = o_37;
        t = p_37(t);
        i_43 = t;
        t = (ATerm) ATinsert(CheckATermList(i_43), h_43);
        y_1 = t;
        t = SSLsetAnnotations(y_1, e_43);
      }
    return(t);
  }
  t = p_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_37 = ATgetFirst((ATermList) t);
      t_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_37 = NULL,y_37 = NULL;
        ATerm w_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_37)), not_null(y_37));
          return(t);
        }
        t = t_37;
        t = h_0(t);
        if(((x_37 != NULL) && (x_37 != t)))
          _fail(t);
        else
          x_37 = t;
        t = s_37;
        t = f_0(t);
        if(((y_37 != NULL) && (y_37 != t)))
          _fail(t);
        else
          y_37 = t;
        t = t_37;
        t = reverse_acc_2_0(f_0, w_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_7;
      t = h_0(t);
    }
  return(t);
}
ATerm o_6 (ATerm a_56, ATerm b_56, ATerm t)
{
  t = SSL_table_get(a_56, b_56);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,g_2 = NULL;
  e_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_38);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_38);
  g_2 = t;
  t = SSLsetAnnotations(g_2, c_38);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_38), term_h_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = fetch_1_0(x_5, t);
    }
  t = term_k_15;
  t = echo_0_0(t);
  t = term_u_13;
  a_38 = t;
  t = term_v_13;
  b_38 = t;
  t = term_l_15;
  t = o_6(a_38, b_38, t);
  t = reverse_acc_2_0(_id, y_5, t);
  t = map_1_0(a_6, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
  i_38 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_15 = ATgetFirst((ATermList) t);
                ATerm p_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_38;
          }
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = (ATerm) ATinsert(ATempty, i_38);
      }
    j_38 = t;
    t = term_y_11;
    k_38 = t;
    t = SSL_printnl(k_38, j_38);
    t = i_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_f_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  t = term_s_15;
  o_38 = t;
  t = term_j_7;
  p_38 = t;
  t = term_t_15;
  t = r_6(o_38, p_38, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  t = term_s_15;
  s_38 = t;
  t = term_j_7;
  t_38 = t;
  t = term_t_15;
  t = r_6(s_38, t_38, t);
  t = term_v_15;
  q_38 = t;
  t = term_j_7;
  r_38 = t;
  t = term_z_15;
  t = r_6(q_38, r_38, t);
  t = term_a_16;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, d_6, n_6, t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      t = Option_3_0(q_6, s_6, t_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_62 (ATerm), ATerm r_62 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,j_2 = NULL;
  z_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_38 = ATgetFirst((ATermList) t);
      w_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_38);
  u_38 = t;
  t = v_38;
  t = q_62(t);
  x_38 = t;
  t = w_38;
  t = r_62(t);
  y_38 = t;
  t = (ATerm) ATinsert(CheckATermList(y_38), x_38);
  j_2 = t;
  t = SSLsetAnnotations(j_2, u_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,j_39 = NULL,k_39 = NULL,l_2 = NULL;
  e_39 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_16;
        t = m_105(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
      }
    t = e_39;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_39 = ATgetFirst((ATermList) t);
        h_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_39);
    f_39 = t;
    t = term_f_14;
    k_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_f_14, g_39);
    t = r_6(k_39, g_39, t);
    t = h_39;
    {
      ATerm u_39 (ATerm t)
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_39 = NULL;
                n_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_39;
                ;
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = m_105(t);
                t = Cons_2_0(_id, u_39, t);
              }
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm q_39 = NULL,r_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_39 = ATgetFirst((ATermList) t);
                  r_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_39), (ATerm) ATmakeAppl(sym_Undefined_1, q_39));
            }
          }
        return(t);
      }
      t = u_39(t);
      j_39 = t;
      t = (ATerm) ATinsert(CheckATermList(j_39), (ATerm) ATmakeAppl(sym_Program_1, g_39));
      l_2 = t;
      t = SSLsetAnnotations(l_2, f_39);
    }
  }
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  if(match_string(t, "--help"))
    {
      t = g_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_40;
        }
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  t = term_g_15;
  h_40 = t;
  t = term_j_7;
  i_40 = t;
  t = term_l_16;
  t = r_6(h_40, i_40, t);
  t = term_m_16;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm y_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  b_40 = t;
  t = term_u_13;
  d_40 = t;
  t = term_v_13;
  e_40 = t;
  t = (ATerm) ATempty;
  f_40 = t;
  t = SSL_table_put(d_40, e_40, f_40);
  t = b_40;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_105(t);
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          {
            ATerm q_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_6, w_6, x_6, t);
                ;
                LocalPopChoice(r_16);
              }
            else
              {
                t = q_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_6, t);
    {
      ATerm t_16 = t;
      int u_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_40 = NULL;
          p_40 = t;
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_43 = NULL;
                t = p_40;
                {
                  ATerm x_16 = t;
                  int y_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_16);
                    }
                  else
                    {
                      t = x_16;
                      t = fetch_1_0(y_6, t);
                    }
                  t = p_40;
                  t = default_system_usage_0_0(t);
                  t = term_f_8;
                  p_43 = t;
                  t = SSL_exit(p_43);
                }
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                {
                  ATerm t_43 = NULL;
                  t = term_s_15;
                  t = get_config_0_0(t);
                  t = p_40;
                  t = default_system_about_0_0(t);
                  t = term_f_8;
                  t_43 = t;
                  t = SSL_exit(t_43);
                }
              }
          }
          ;
          LocalPopChoice(u_16);
        }
      else
        {
          t = t_16;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
                ATerm z_6 (ATerm t)
                {
                  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,o_2 = NULL;
                  v_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_40);
                  t_40 = t;
                  t = u_40;
                  if(((z_39 != NULL) && (z_39 != t)))
                    _fail(t);
                  else
                    z_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_40);
                  o_2 = t;
                  t = SSLsetAnnotations(o_2, t_40);
                  return(t);
                }
                t = fetch_1_0(z_6, t);
                t = term_k_7;
                r_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), term_b_17);
                s_40 = t;
                t = SSL_printnl(r_40, s_40);
                t = (ATerm) ATmakeAppl(sym__2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), term_b_17));
                t = default_system_usage_0_0(t);
                t = term_n_7;
                q_40 = t;
                t = SSL_exit(q_40);
                ;
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
              }
          }
        }
      a_40 = t;
      t = term_u_13;
      c_40 = t;
      t = SSL_table_destroy(c_40);
      t = a_40;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_103 (ATerm), ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
  t = parse_options_1_0(l_103, t);
  a_41 = t;
  t = term_c_17;
  d_41 = t;
  t = SSL_table_create(d_41);
  t = term_c_17;
  b_41 = t;
  t = term_d_17;
  c_41 = t;
  t = SSL_table_put(b_41, c_41, a_41);
  t = a_41;
  t = n_103(t);
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_103, t);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = if_verbose2_1_0(g_7, t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = term_j_17;
  e_41 = t;
  t = term_j_7;
  f_41 = t;
  t = term_k_17;
  t = r_6(e_41, f_41, t);
  t = term_l_17;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_n_17;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  g_41 = t;
  t = term_f_14;
  t = get_config_0_0(t);
  h_41 = t;
  t = term_k_7;
  i_41 = t;
  t = (ATerm) ATinsert(ATempty, h_41);
  j_41 = t;
  t = SSL_printnl(i_41, j_41);
  t = g_41;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm q_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_102(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = q_17;
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              {
                ATerm a_18 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = a_18;
                    {
                      ATerm f_18 = t;
                      int g_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_7, e_7, f_7, t);
                          ;
                          LocalPopChoice(g_18);
                        }
                      else
                        {
                          t = f_18;
                          {
                            ATerm h_18 = t;
                            int i_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(i_18);
                              }
                            else
                              {
                                t = h_18;
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
  ATerm c_7 (ATerm t)
  {
    ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
    l_41 = t;
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_41 != NULL) && (k_41 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_7, t);
          ;
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          t = term_l_18;
          k_41 = t;
        }
      t = not_null(k_41);
      t = ReadFromFile_0_0(t);
      m_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_41, m_41);
      t = apply_strategy_1_0(u_102, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_7, w_102, b_7, c_7, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,v_2 = NULL,u_2 = NULL,t_2 = NULL,s_2 = NULL,q_2 = NULL;
  i_42 = t;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_42);
  n_41 = t;
  t = p_41;
  if(match_cons(t, sym_Specification_1))
    {
      r_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_41);
  q_41 = t;
  t = r_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_41 = ATgetFirst((ATermList) t);
      y_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_41);
  w_41 = t;
  t = y_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_42 = ATgetFirst((ATermList) t);
      c_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_41);
  a_42 = t;
  t = b_42;
  if(match_cons(t, sym_Strategies_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_42);
  e_42 = t;
  t = f_42;
  t = rename_sdefs_0_0(t);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_42);
  q_2 = t;
  t = SSLsetAnnotations(q_2, e_42);
  h_42 = t;
  t = c_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_42), h_42);
  s_2 = t;
  t = SSLsetAnnotations(s_2, a_42);
  d_42 = t;
  t = (ATerm) ATinsert(CheckATermList(d_42), x_41);
  t_2 = t;
  t = SSLsetAnnotations(t_2, w_41);
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_41);
  u_2 = t;
  t = SSLsetAnnotations(u_2, q_41);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_41, s_41);
  v_2 = t;
  t = SSLsetAnnotations(v_2, n_41);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_7, _fail, default_usage_0_0, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Path_2;
Symbol sym_Mod_2;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
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
static void init_module_constructors (void)
{
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
}
ATerm term_l_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_e_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_j_8;
ATerm term_c_8;
ATerm term_r_7;
ATerm term_i_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_r_7);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_7);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_x_6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_x_12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_x_6);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_x_6);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_x_6);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_x_6);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm RenameVar_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm RenameCall_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm s_81 (ATerm), ATerm t);
static ATerm o_5 (ATerm g_112 (ATerm), ATerm t_59, ATerm r_59, ATerm t);
static ATerm q_5 (ATerm q_56, ATerm r_56, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm q_103 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm RenameSDef_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm rename_sdefs_0_0 (ATerm t);
static ATerm u_5 (ATerm n_31, ATerm o_31, ATerm t);
static ATerm v_5 (ATerm h_30, ATerm i_30, ATerm t);
static ATerm x_5 (ATerm c_89 (ATerm), ATerm c_210, ATerm l_30, ATerm t);
static ATerm w_5 (ATerm d_30, ATerm e_30, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_107 (ATerm), ATerm t);
static ATerm v_25 (ATerm p_25, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_5 (ATerm j_30, ATerm t);
static ATerm z_5 (ATerm p_31, ATerm q_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_27 (ATerm f_26, ATerm t);
static ATerm h_27 (ATerm j_26, ATerm k_26, ATerm l_26, ATerm t);
static ATerm i_27 (ATerm t_26, ATerm u_26, ATerm v_26, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_93 (ATerm), ATerm t);
static ATerm t_5 (ATerm w_50, ATerm x_50, ATerm t);
ATerm debug_1_0 (ATerm a_89 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm t_90 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_6 (ATerm h_35, ATerm i_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_6 (ATerm f_56, ATerm g_56, ATerm e_56, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_6 (ATerm e_38, ATerm f_38, ATerm t);
ATerm foldr_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_90 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm need_help_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm d_6 (ATerm w_57, ATerm x_57, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_110 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm parse_options_1_0 (ATerm m_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm iowrap_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL;
  a_0 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_y_6;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_7), p_0), term_z_6);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_b_7;
  q_0 = t;
  t = SSL_exit(q_0);
  t = a_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_1;
  if(match_cons(t, sym__2))
    {
      ATerm e_7 = ATgetArgument(t, 0);
      ATerm f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,c_2 = NULL;
        t = term_i_7;
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, k_1);
        t = q_5(c_2, k_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            w_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_1;
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_2 = NULL,r_2 = NULL;
              t = term_i_7;
              r_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_7, k_1);
              t = q_5(r_2, k_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_7) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  o_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_2;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              {
                ATerm x_2 = NULL,c_3 = NULL;
                t = term_i_7;
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_7, k_1);
                t = q_5(c_3, k_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm o_7 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_7) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    x_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_2;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm a_4 = NULL,h_4 = NULL;
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      h_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(a_4, h_4, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(k_4, q_4, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm e_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(e_5, g_5, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL;
  x_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      y_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      v_3 = ATgetArgument(t, 2);
      {
        ATerm n_3 = NULL,q_3 = NULL,w_3 = NULL;
        t = y_3;
        if(match_cons(t, sym_SVar_1))
          {
            z_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_4;
        t = foldr_3_0(v_0, a_1, b_1, t);
        n_3 = t;
        t = v_3;
        t = foldr_3_0(c_1, d_1, g_1, t);
        q_3 = t;
        {
          ATerm t_7 = t;
          int u_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, z_3, (ATerm) ATmakeAppl(sym__2, n_3, q_3));
              t = RenameVar_0_0(t);
              w_3 = t;
              LocalPopChoice(u_7);
            }
          else
            {
              t = t_7;
              t = z_3;
              t = HoArg_0_0(t);
              w_3 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_3), b_4, v_3);
      }
    }
  else
    {
      ATerm z_4 = NULL,d_5 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          y_3 = ATgetArgument(t, 0);
          b_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_3;
      if(match_cons(t, sym_SVar_1))
        {
          z_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_4;
      t = foldr_3_0(h_1, l_1, n_1, t);
      z_4 = t;
      {
        ATerm v_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, z_3, z_4);
            t = RenameVar_0_0(t);
            d_5 = t;
            LocalPopChoice(x_7);
          }
        else
          {
            t = v_7;
            t = z_3;
            t = HoArg_0_0(t);
            d_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_5), b_4);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  static ATerm o_1 (ATerm t)
  {
    t = topdown_1_0(s_81, t);
    return(t);
  }
  t = s_81(t);
  t = SRTS_all(o_1, t);
  return(t);
}
static ATerm o_5 (ATerm g_112 (ATerm), ATerm t_59, ATerm r_59, ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,j_4 = NULL,l_4 = NULL;
  i_4 = t;
  t = g_112(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_4, t_59, r_59);
  t = e_6(e_4, t_59, r_59, t);
  {
    ATerm y_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_4 = NULL;
        t = term_c_8;
        m_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_4, term_c_8);
        t = d_6(e_4, m_4, t);
        LocalPopChoice(a_8);
      }
    else
      {
        t = y_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_4 = ATgetFirst((ATermList) t);
      g_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_8;
  j_4 = t;
  t = (ATerm) ATinsert(CheckATermList(g_4), (ATerm) ATinsert(CheckATermList(f_4), t_59));
  l_4 = t;
  t = SSL_table_put(e_4, j_4, l_4);
  t = i_4;
  return(t);
}
static ATerm q_5 (ATerm q_56, ATerm r_56, ATerm t)
{
  ATerm n_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_56, r_56);
  t = d_6(q_56, r_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_4 = ATgetFirst((ATermList) t);
      {
        ATerm e_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm c_7 = NULL;
  c_7 = t;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL;
        t = term_j_8;
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_7);
        t = q_5(n_7, c_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        _fail(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm k_8 = t;
          int m_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL,z_7 = NULL;
              t = term_j_8;
              z_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_7);
              t = q_5(z_7, c_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm n_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("r_0", 0, ATtrue)))
                    _fail(t);
                  w_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_7;
              LocalPopChoice(m_8);
            }
          else
            {
              t = k_8;
              {
                ATerm o_8 = t;
                int p_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_8 = NULL;
                    t = term_j_8;
                    l_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_7);
                    t = q_5(l_8, c_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    _fail(t);
                    LocalPopChoice(p_8);
                  }
                else
                  {
                    t = o_8;
                    {
                      ATerm q_8 = t;
                      int s_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_8 = NULL,v_8 = NULL;
                          t = term_j_8;
                          v_8 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_7);
                          t = q_5(v_8, c_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm t_8 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) t_8) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              r_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = r_8;
                          LocalPopChoice(s_8);
                        }
                      else
                        {
                          t = q_8;
                          {
                            ATerm u_8 = t;
                            int w_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_9 = NULL;
                                t = term_j_8;
                                k_9 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_7);
                                t = q_5(k_9, c_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                _fail(t);
                                LocalPopChoice(w_8);
                              }
                            else
                              {
                                t = u_8;
                                {
                                  ATerm p_9 = NULL,t_9 = NULL;
                                  t = term_j_8;
                                  t_9 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_7);
                                  t = q_5(t_9, c_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm x_8 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      p_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = p_9;
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
  ATerm p_7 = NULL,q_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_7 = ATgetFirst((ATermList) t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_7;
  if(match_int(t, 95))
    {
      ATerm s_7 = NULL;
      t = q_7;
      t = n_0(t);
      s_7 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(s_7), term_y_8), term_y_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm b_8 = NULL;
          t = q_7;
          t = n_0(t);
          b_8 = t;
          t = (ATerm) ATinsert(CheckATermList(b_8), term_y_8);
        }
      else
        {
          ATerm d_8 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = q_7;
          t = n_0(t);
          d_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_y_8), term_z_8), term_y_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm q_103 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  i_8 = t;
  t = SSL_explode_string(i_8);
  {
    static ATerm i_9 (ATerm t)
    {
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_103(i_9, t);
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
          {
            ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL;
            h_9 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_9 = ATgetFirst((ATermList) t);
                g_9 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm y_9 = NULL,h_10 = NULL,u_0 = NULL;
                  t = SSLgetAnnotations(h_9);
                  y_9 = t;
                  t = g_9;
                  t = i_9(t);
                  h_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_10), f_9);
                  u_0 = t;
                  t = SSLsetAnnotations(u_0, y_9);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_9;
              }
          }
        }
      return(t);
    }
    t = i_9(t);
  }
  h_8 = t;
  t = SSL_implode_string(h_8);
  return(t);
}
ATerm foldr_3_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,a_10 = NULL,b_10 = NULL;
  q_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_9;
      t = o_98(t);
    }
  else
    {
      ATerm f_10 = NULL,g_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_10 = ATgetFirst((ATermList) t);
          b_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_10;
      t = q_98(t);
      f_10 = t;
      t = b_10;
      t = foldr_3_0(o_98, p_98, q_98, t);
      g_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_10, g_10);
      t = p_98(t);
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(d_13, e_13, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(f_13, g_13, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(e_16, f_16, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      h_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(g_16, h_16, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm w_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(w_19, z_19, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(a_20, b_20, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_j_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm f_19 = NULL,j_19 = NULL,l_19 = NULL,m_19 = NULL,o_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      j_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
      m_19 = ATgetArgument(t, 2);
      o_19 = ATgetArgument(t, 3);
      {
        ATerm b_12 = NULL,d_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL,r_12 = NULL,s_12 = NULL,y_12 = NULL,c_13 = NULL,m_13 = NULL,n_13 = NULL;
        t = l_19;
        t = foldr_3_0(p_1, q_1, s_1, t);
        b_12 = t;
        t = m_19;
        t = foldr_3_0(u_1, v_1, x_1, t);
        d_12 = t;
        t = j_19;
        if(match_cons(t, sym_Mod_2))
          {
            m_13 = ATgetArgument(t, 0);
            n_13 = ATgetArgument(t, 1);
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_14 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_13), term_e_9), m_13);
                  u_14 = t;
                  t = SSL_concat_strings(u_14);
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  t = j_19;
                }
            }
          }
        else
          {
            t = j_19;
          }
        t = escape_1_0(Cify_1_0, t);
        h_12 = t;
        t = SSL_int_to_string(b_12);
        i_12 = t;
        t = SSL_int_to_string(d_12);
        r_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_12), term_j_9), i_12), term_j_9), h_12);
        c_13 = t;
        t = SSL_concat_strings(c_13);
        f_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym__2, b_12, d_12));
        s_12 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_9, f_12);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym__2, b_12, d_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_l_9, f_12));
        t = o_5(y_1, s_12, y_12, t);
        t = f_12;
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_13 = NULL,t_13 = NULL;
              t = j_19;
              t = HoArg_0_0(t);
              s_13 = t;
              t = term_o_9;
              t_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_19, term_o_9);
              t = o_5(z_1, j_19, t_13, t);
              t = s_13;
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              {
                ATerm w_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_9, f_12);
                w_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym_Defined_2, term_r_9, f_12));
                t = o_5(b_2, j_19, w_13, t);
                t = f_12;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, f_12, l_19, m_19, o_19);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          j_19 = ATgetArgument(t, 0);
          l_19 = ATgetArgument(t, 1);
          m_19 = ATgetArgument(t, 2);
          {
            ATerm m_15 = NULL,o_15 = NULL,q_15 = NULL,s_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,z_15 = NULL,a_16 = NULL,v_16 = NULL,w_16 = NULL;
            t = l_19;
            t = foldr_3_0(e_2, g_2, h_2, t);
            m_15 = t;
            t = m_19;
            t = foldr_3_0(j_2, m_2, p_2, t);
            o_15 = t;
            t = j_19;
            if(match_cons(t, sym_Mod_2))
              {
                v_16 = ATgetArgument(t, 0);
                w_16 = ATgetArgument(t, 1);
                {
                  ATerm s_9 = t;
                  int u_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_16), term_e_9), v_16);
                      l_18 = t;
                      t = SSL_concat_strings(l_18);
                      LocalPopChoice(u_9);
                    }
                  else
                    {
                      t = s_9;
                      t = j_19;
                    }
                }
              }
            else
              {
                t = j_19;
              }
            t = escape_1_0(Cify_1_0, t);
            s_15 = t;
            t = SSL_int_to_string(m_15);
            u_15 = t;
            t = SSL_int_to_string(o_15);
            v_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_15), term_j_9), u_15), term_j_9), s_15);
            a_16 = t;
            t = SSL_concat_strings(a_16);
            q_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym__2, m_15, o_15));
            w_15 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_9, q_15);
            z_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym__2, m_15, o_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_9, q_15));
            t = o_5(q_2, w_15, z_15, t);
            t = q_15;
            {
              ATerm w_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_17 = NULL,h_17 = NULL;
                  t = j_19;
                  t = HoArg_0_0(t);
                  g_17 = t;
                  t = term_o_9;
                  h_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_19, term_o_9);
                  t = o_5(u_2, j_19, h_17, t);
                  t = g_17;
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = w_9;
                  {
                    ATerm i_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_9, q_15);
                    i_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym_Defined_2, term_z_9, q_15));
                    t = o_5(v_2, j_19, i_17, t);
                    t = q_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, q_15, l_19, m_19);
          }
        }
      else
        {
          ATerm d_19 = NULL,e_19 = NULL,h_19 = NULL,i_19 = NULL,k_19 = NULL,n_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,n_20 = NULL,o_20 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              j_19 = ATgetArgument(t, 0);
              l_19 = ATgetArgument(t, 1);
              m_19 = ATgetArgument(t, 2);
              o_19 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = l_19;
          t = foldr_3_0(w_2, y_2, z_2, t);
          d_19 = t;
          t = m_19;
          t = foldr_3_0(a_3, b_3, d_3, t);
          e_19 = t;
          t = j_19;
          if(match_cons(t, sym_Mod_2))
            {
              n_20 = ATgetArgument(t, 0);
              o_20 = ATgetArgument(t, 1);
              {
                ATerm c_10 = t;
                int d_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_21 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_20), term_e_9), n_20);
                    i_21 = t;
                    t = SSL_concat_strings(i_21);
                    LocalPopChoice(d_10);
                  }
                else
                  {
                    t = c_10;
                    t = j_19;
                  }
              }
            }
          else
            {
              t = j_19;
            }
          t = escape_1_0(Cify_1_0, t);
          i_19 = t;
          t = SSL_int_to_string(d_19);
          k_19 = t;
          t = SSL_int_to_string(e_19);
          n_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_19), term_j_9), k_19), term_j_9), i_19);
          t_19 = t;
          t = SSL_concat_strings(t_19);
          h_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym__2, d_19, e_19));
          r_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_10, h_19);
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym__2, d_19, e_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_e_10, h_19));
          t = o_5(e_3, r_19, s_19, t);
          t = h_19;
          {
            ATerm i_10 = t;
            int j_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_20 = NULL,t_20 = NULL;
                t = j_19;
                t = HoArg_0_0(t);
                s_20 = t;
                t = term_o_9;
                t_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_19, term_o_9);
                t = o_5(f_3, j_19, t_20, t);
                t = s_20;
                LocalPopChoice(j_10);
              }
            else
              {
                t = i_10;
                {
                  ATerm u_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_10, h_19);
                  u_20 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_19, (ATerm) ATmakeAppl(sym_Defined_2, term_k_10, h_19));
                  t = o_5(g_3, j_19, u_20, t);
                  t = h_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, h_19, l_19, m_19, o_19);
        }
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = topdown_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(h_3, t);
  return(t);
}
static ATerm u_5 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm g_20 = NULL;
  t = SSL_fputc(n_31, o_31);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_20);
  return(t);
}
static ATerm v_5 (ATerm h_30, ATerm i_30, ATerm t)
{
  ATerm h_20 = NULL;
  t = SSL_write_term_to_stream_text(h_30, i_30);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_20);
  return(t);
}
static ATerm x_5 (ATerm c_89 (ATerm), ATerm c_210, ATerm l_30, ATerm t)
{
  ATerm i_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_210, term_n_10);
  t = a_6(t);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, l_30);
  t = c_89(t);
  t = fclose_0_0(t);
  t = l_30;
  return(t);
}
static ATerm w_5 (ATerm d_30, ATerm e_30, ATerm t)
{
  ATerm m_20 = NULL;
  t = SSL_write_term_to_stream_baf(d_30, e_30);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_20);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(match_cons(o_10, sym_Stream_1))
        {
          z_21 = ATgetArgument(o_10, 0);
        }
      else
        _fail(t);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(z_21, a_22, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(match_cons(p_10, sym_Stream_1))
        {
          t_22 = ATgetArgument(p_10, 0);
        }
      else
        _fail(t);
      u_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(t_22, u_22, t);
  q_22 = t;
  t = term_q_10;
  r_22 = t;
  t = q_22;
  if(match_cons(t, sym_Stream_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, q_22);
  t = u_5(r_22, s_22, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,q_21 = NULL,t_21 = NULL,w_21 = NULL,x_21 = NULL,h_22 = NULL,k_22 = NULL,m_22 = NULL,u_24 = NULL,x_24 = NULL,x_0 = NULL,w_0 = NULL;
  g_21 = t;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_21);
  x_21 = t;
  t = h_22;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_3, t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = term_t_10;
        f_21 = t;
      }
  }
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, k_22);
  w_0 = t;
  t = SSLsetAnnotations(w_0, x_21);
  t = g_21;
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_21);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_21, (ATerm) ATmakeAppl(sym__2, not_null(f_21), t_21));
  x_0 = t;
  t = SSLsetAnnotations(x_0, h_21);
  w_21 = t;
  if(match_cons(t, sym__2))
    {
      u_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL,y_21 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(w_21);
        n_21 = t;
        t = u_24;
        t = fetch_1_0(k_3, t);
        r_21 = t;
        t = x_24;
        if(match_cons(t, sym__2))
          {
            u_21 = ATgetArgument(t, 0);
            y_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(l_3, u_21, y_21, t);
        s_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_21, s_21);
        y_0 = t;
        t = SSLsetAnnotations(y_0, n_21);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm f_22 = NULL,j_22 = NULL,l_22 = NULL,p_22 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(w_21);
          f_22 = t;
          t = x_24;
          if(match_cons(t, sym__2))
            {
              l_22 = ATgetArgument(t, 0);
              p_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_5(m_3, l_22, p_22, t);
          j_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_24, j_22);
          z_0 = t;
          t = SSLsetAnnotations(z_0, f_22);
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
ATerm apply_strategy_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  h_25 = t;
  t = dtime_0_0(t);
  t = h_25;
  t = m_107(t);
  g_25 = t;
  t = dtime_0_0(t);
  c_25 = t;
  t = g_25;
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      f_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_25), (ATerm) ATmakeAppl(sym_Runtime_1, c_25)), f_25);
  return(t);
}
static ATerm v_25 (ATerm p_25, ATerm t)
{
  t = SSL_fclose(p_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  t_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_25 = ATgetArgument(t, 0);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_25);
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = v_25(t_25, t);
          }
      }
    }
  else
    {
      t = v_25(t_25, t);
    }
  return(t);
}
static ATerm y_5 (ATerm j_30, ATerm t)
{
  t = SSL_read_term_from_stream(j_30);
  return(t);
}
static ATerm z_5 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm w_25 = NULL;
  t = SSL_fopen(p_31, q_31);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_25);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_25 = NULL;
  t = SSL_stdin_stream();
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_25);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  t = SSL_stdout_stream();
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_25);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_stderr_stream();
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
static ATerm g_27 (ATerm f_26, ATerm t)
{
  ATerm g_26 = NULL;
  t = SSL_explode_term(f_26);
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_10 = ATgetArgument(t, 1);
        if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
          {
            g_26 = ATgetFirst((ATermList) z_10);
            {
              ATerm a_11 = (ATerm) ATgetNext((ATermList) z_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_27 (ATerm j_26, ATerm k_26, ATerm l_26, ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,r_26 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(l_26);
  o_26 = t;
  t = j_26;
  if(match_cons(t, sym_Path_1))
    {
      r_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_26, k_26);
  e_1 = t;
  t = SSLsetAnnotations(e_1, o_26);
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(m_26, n_26, t);
  return(t);
}
static ATerm i_27 (ATerm t_26, ATerm u_26, ATerm v_26, ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,b_27 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(v_26);
  y_26 = t;
  t = SSL_is_string(t_26);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_27, u_26);
  f_1 = t;
  t = SSLsetAnnotations(f_1, y_26);
  if(match_cons(t, sym__2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(w_26, x_26, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_27(d_27, t);
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            {
              ATerm d_11 = t;
              int e_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_27(e_27, f_27, d_27, t);
                  LocalPopChoice(e_11);
                }
              else
                {
                  t = d_11;
                  t = i_27(e_27, f_27, d_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_27(d_27, t);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL;
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_27, term_i_11);
      t = a_6(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = debug_1_0(o_3, t);
      _fail(t);
    }
  k_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(l_27, t);
  j_27 = t;
  t = k_27;
  t = fclose_0_0(t);
  t = j_27;
  return(t);
}
ATerm fetch_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  static ATerm k_28 (ATerm t)
  {
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
    h_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_28 = ATgetFirst((ATermList) t);
        j_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23 = NULL,q_23 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(h_28);
          k_23 = t;
          t = i_28;
          t = v_93(t);
          q_23 = t;
          t = (ATerm) ATinsert(CheckATermList(j_28), q_23);
          i_1 = t;
          t = SSLsetAnnotations(i_1, k_23);
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            ATerm d_24 = NULL,o_24 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(h_28);
            d_24 = t;
            t = j_28;
            t = k_28(t);
            o_24 = t;
            t = (ATerm) ATinsert(CheckATermList(o_24), i_28);
            j_1 = t;
            t = SSLsetAnnotations(j_1, d_24);
          }
        }
    }
    return(t);
  }
  t = k_28(t);
  return(t);
}
static ATerm t_5 (ATerm w_50, ATerm x_50, ATerm t)
{
  t = SSL_strcat(w_50, x_50);
  return(t);
}
ATerm debug_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  n_28 = t;
  t = a_89(t);
  o_28 = t;
  t = term_y_6;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_28), o_28);
  q_28 = t;
  t = SSL_printnl(p_28, q_28);
  t = n_28;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_28 = NULL;
      x_28 = t;
      t = SSL_is_string(x_28);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_3, t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
              d_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_29 = ATgetArgument(t, 0);
                  t = e_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_29 = ATgetArgument(t, 0);
                      t = e_29;
                      {
                        ATerm s_11 = t;
                        int t_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(t_11);
                          }
                        else
                          {
                            t = s_11;
                            t = debug_1_0(r_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_29 = NULL,k_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_29 = ATgetArgument(t, 0);
                          f_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_29;
                      t = eval_config_0_0(t);
                      j_29 = t;
                      t = f_29;
                      t = eval_config_0_0(t);
                      k_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_29, k_29);
                      t = t_5(j_29, k_29, t);
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
  ATerm o_29 = NULL,p_29 = NULL;
  o_29 = t;
  t = term_u_11;
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, o_29);
  t = d_6(p_29, o_29, t);
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL,r_29 = NULL;
        t = eval_config_0_0(t);
        q_29 = t;
        t = term_u_11;
        r_29 = t;
        t = SSL_table_put(r_29, o_29, q_29);
        t = q_29;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL;
        t = term_z_11;
        t = get_config_0_0(t);
        x_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_29, term_a_12);
        t = geq_0_0(t);
        t = v_29;
        t = t_90(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = v_29;
      }
  }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  if(match_string(t, "-k"))
    {
      t = a_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_30;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,f_30 = NULL;
  b_30 = t;
  t = SSL_string_to_int(b_30);
  c_30 = t;
  t = term_c_12;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_12, c_30);
  t = g_6(f_30, c_30, t);
  t = b_30;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, t_3, u_3, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  if(match_string(t, "-S"))
    {
      t = m_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_30;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_z_11;
  n_30 = t;
  t = term_r_7;
  o_30 = t;
  t = term_g_12;
  t = g_6(n_30, o_30, t);
  t = term_j_12;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_k_12;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  t = SSL_string_to_int(p_30);
  q_30 = t;
  t = term_z_11;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, q_30);
  t = g_6(r_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_30);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_l_12;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  t = term_m_12;
  s_30 = t;
  t = term_x_6;
  t_30 = t;
  t = term_n_12;
  t = g_6(s_30, t_30, t);
  t = term_o_12;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, o_4, t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = q_12;
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_4, r_4, s_4, t);
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = Option_3_0(t_4, u_4, v_4, t);
          }
      }
    }
  return(t);
}
static ATerm g_6 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm u_30 = NULL;
  t = term_u_11;
  u_30 = t;
  t = SSL_table_put(u_30, h_35, i_35);
  t = (ATerm) ATmakeAppl(sym__3, term_u_11, h_35, i_35);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
      t = term_x_6;
      t = e_0(t);
      z_30 = t;
      t = term_w_12;
      a_31 = t;
      t = term_x_12;
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_12, term_x_12, z_30);
      t = e_6(a_31, b_31, z_30, t);
      _fail(t);
    }
  else
    {
      ATerm e_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_30;
      t = c_0(t);
      t = term_x_6;
      t = d_0(t);
      e_31 = t;
      t = (ATerm) ATinsert(CheckATermList(y_30), e_31);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm g_31 = NULL;
  g_31 = t;
  if(match_string(t, "-o"))
    {
      t = g_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_31;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  h_31 = t;
  t = term_z_12;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, h_31);
  t = g_6(i_31, h_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_31);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_a_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
static ATerm e_6 (ATerm f_56, ATerm g_56, ATerm e_56, ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_56, g_56);
  {
    ATerm b_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_13 = ATgetArgument(t, 0);
            ATerm j_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_56, g_56);
        t = d_6(f_56, g_56, t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = b_13;
        t = (ATerm) ATempty;
      }
  }
  l_31 = t;
  t = (ATerm) ATinsert(CheckATermList(l_31), e_56);
  m_31 = t;
  t = SSL_table_put(f_56, g_56, m_31);
  t = k_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
      t = term_x_6;
      t = l_0(t);
      d_32 = t;
      t = term_w_12;
      e_32 = t;
      t = term_x_12;
      f_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_12, term_x_12, d_32);
      t = e_6(e_32, f_32, d_32, t);
      _fail(t);
    }
  else
    {
      ATerm j_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_31 = ATgetFirst((ATermList) t);
          a_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_32 = ATgetFirst((ATermList) t);
          c_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_31;
      t = j_0(t);
      t = b_32;
      t = k_0(t);
      j_32 = t;
      t = (ATerm) ATinsert(CheckATermList(c_32), j_32);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  if(match_string(t, "-i"))
    {
      t = l_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_32;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  m_32 = t;
  t = term_k_13;
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, m_32);
  t = g_6(n_32, m_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_32);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_6;
  t = whoami_0_0(t);
  o_32 = t;
  t = term_y_6;
  q_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_13), o_32);
  r_32 = t;
  t = SSL_printnl(q_32, r_32);
  t = term_b_7;
  p_32 = t;
  t = SSL_exit(p_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_13;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_6 (ATerm e_38, ATerm f_38, ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_38, f_38);
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      t = SSL_addr(e_38, f_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_32;
      t = m_98(t);
    }
  else
    {
      ATerm y_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_32 = ATgetFirst((ATermList) t);
          v_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_32;
      t = foldr_2_0(m_98, n_98, t);
      y_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_32, y_32);
      t = n_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(p_27, q_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_33 = NULL,c_26 = NULL,d_26 = NULL;
  t = times_0_0(t);
  d_26 = t;
  t = SSL_explode_term(d_26);
  if(match_cons(t, sym__2))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_26;
  t = foldr_2_0(f_5, h_5, t);
  b_33 = t;
  t = SSL_TicksToSeconds(b_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_33;
        if((n_33 != t))
          {
            _fail(t);
          }
        t = m_33;
        LocalPopChoice(x_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATmakeAppl(sym__2, n_33, o_33);
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_33, o_33);
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              t = SSL_gtr(n_33, o_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_33, o_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_90 (ATerm), ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_33 = NULL;
        t = term_z_11;
        t = get_config_0_0(t);
        u_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_33, term_b_7);
        t = geq_0_0(t);
        t = s_33;
        t = s_90(t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = s_33;
      }
  }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,z_33 = NULL,a_34 = NULL;
  t = run_time_0_0(t);
  w_33 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  x_33 = t;
  t = term_y_6;
  z_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_14), w_33), term_c_14), x_33);
  a_34 = t;
  t = SSL_printnl(z_33, a_34);
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_14), w_33), term_c_14), x_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_7;
  b_34 = t;
  t = SSL_exit(b_34);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  k_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_34 = ATgetArgument(t, 0);
          {
            ATerm j_31 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(k_34);
            j_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_34);
            r_1 = t;
            t = SSLsetAnnotations(r_1, j_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_14;
      t = get_config_0_0(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      t = fetch_1_0(j_5, t);
    }
  t = k_108(t);
  return(t);
}
ATerm map_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  static ATerm a_35 (ATerm t)
  {
    ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
    x_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_34;
      }
    else
      {
        ATerm f_33 = NULL,d_34 = NULL,m_34 = NULL,t_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_34 = ATgetFirst((ATermList) t);
            z_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_34);
        f_33 = t;
        t = y_34;
        t = l_93(t);
        d_34 = t;
        t = z_34;
        t = a_35(t);
        m_34 = t;
        t = (ATerm) ATinsert(CheckATermList(m_34), d_34);
        t_1 = t;
        t = SSLsetAnnotations(t_1, f_33);
      }
    return(t);
  }
  t = a_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_35 = ATgetFirst((ATermList) t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_35 = NULL,l_35 = NULL;
        static ATerm k_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_35)), not_null(l_35));
          return(t);
        }
        t = e_35;
        t = h_0(t);
        if(((k_35 != NULL) && (k_35 != t)))
          _fail(t);
        else
          k_35 = t;
        t = d_35;
        t = f_0(t);
        if(((l_35 != NULL) && (l_35 != t)))
          _fail(t);
        else
          l_35 = t;
        t = e_35;
        t = reverse_acc_2_0(f_0, k_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_6;
      t = h_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm w_57, ATerm x_57, ATerm t)
{
  t = SSL_table_get(w_57, x_57);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm p_35 = NULL,v_35 = NULL,w_35 = NULL,a_2 = NULL;
  w_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_35);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_35);
  a_2 = t;
  t = SSLsetAnnotations(a_2, p_35);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm y_35 = NULL;
  y_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_35), term_h_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_13;
      t = get_config_0_0(t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      t = fetch_1_0(l_5, t);
    }
  t = term_k_14;
  t = echo_0_0(t);
  t = term_w_12;
  n_35 = t;
  t = term_x_12;
  o_35 = t;
  t = term_l_14;
  t = d_6(n_35, o_35, t);
  t = reverse_acc_2_0(_id, m_5, t);
  t = map_1_0(n_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_14 = ATgetFirst((ATermList) t);
                ATerm p_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_36;
          }
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, a_36);
      }
  }
  b_36 = t;
  t = term_t_10;
  c_36 = t;
  t = SSL_printnl(c_36, b_36);
  t = a_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL;
  t = term_q_14;
  g_36 = t;
  t = term_x_6;
  h_36 = t;
  t = term_r_14;
  t = g_6(g_36, h_36, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_s_14;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  t = term_q_14;
  k_36 = t;
  t = term_x_6;
  l_36 = t;
  t = term_r_14;
  t = g_6(k_36, l_36, t);
  t = term_t_14;
  i_36 = t;
  t = term_x_6;
  j_36 = t;
  t = term_v_14;
  t = g_6(i_36, j_36, t);
  t = term_w_14;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_x_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, r_5, s_5, t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      t = Option_3_0(c_6, f_6, h_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,d_2 = NULL;
  r_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_36 = ATgetFirst((ATermList) t);
      o_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_36);
  m_36 = t;
  t = n_36;
  t = s_67(t);
  p_36 = t;
  t = o_36;
  t = t_67(t);
  q_36 = t;
  t = (ATerm) ATinsert(CheckATermList(q_36), p_36);
  d_2 = t;
  t = SSLsetAnnotations(d_2, m_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_110 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,b_37 = NULL,c_37 = NULL,f_2 = NULL;
  w_36 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_15;
        t = n_110(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
      }
  }
  t = w_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_36 = ATgetFirst((ATermList) t);
      z_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_36);
  x_36 = t;
  t = term_p_13;
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, y_36);
  t = g_6(c_37, y_36, t);
  t = z_36;
  {
    static ATerm m_37 (ATerm t)
    {
      ATerm d_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_37 = NULL;
              f_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_37;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              t = n_110(t);
              t = Cons_2_0(_id, m_37, t);
            }
          LocalPopChoice(e_15);
        }
      else
        {
          t = d_15;
          {
            ATerm i_37 = NULL,j_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_37 = ATgetFirst((ATermList) t);
                j_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_37), (ATerm) ATmakeAppl(sym_Undefined_1, i_37));
          }
        }
      return(t);
    }
    t = m_37(t);
  }
  b_37 = t;
  t = (ATerm) ATinsert(CheckATermList(b_37), (ATerm) ATmakeAppl(sym_Program_1, y_36));
  f_2 = t;
  t = SSLsetAnnotations(f_2, x_36);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm y_37 = NULL;
  y_37 = t;
  if(match_string(t, "--help"))
    {
      t = y_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_37;
        }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL;
  t = term_g_14;
  z_37 = t;
  t = term_x_6;
  a_38 = t;
  t = term_h_15;
  t = g_6(z_37, a_38, t);
  t = term_i_15;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  t_37 = t;
  t = term_w_12;
  v_37 = t;
  t = term_x_12;
  w_37 = t;
  t = (ATerm) ATempty;
  x_37 = t;
  t = SSL_table_put(v_37, w_37, x_37);
  t = t_37;
  {
    static ATerm i_6 (ATerm t)
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_110(t);
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          {
            ATerm n_15 = t;
            int p_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_6, k_6, l_6, t);
                LocalPopChoice(p_15);
              }
            else
              {
                t = n_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_6, t);
  }
  {
    ATerm r_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_38 = NULL;
        j_38 = t;
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_35 = NULL;
              t = j_38;
              {
                ATerm b_16 = t;
                int c_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_14;
                    t = get_config_0_0(t);
                    LocalPopChoice(c_16);
                  }
                else
                  {
                    t = b_16;
                    t = fetch_1_0(m_6, t);
                  }
              }
              t = j_38;
              t = default_system_usage_0_0(t);
              t = term_r_7;
              t_35 = t;
              t = SSL_exit(t_35);
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              {
                ATerm t_36 = NULL;
                t = term_q_14;
                t = get_config_0_0(t);
                t = j_38;
                t = default_system_about_0_0(t);
                t = term_r_7;
                t_36 = t;
                t = SSL_exit(t_36);
              }
            }
        }
        LocalPopChoice(t_15);
      }
    else
      {
        t = r_15;
        {
          ATerm d_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
              static ATerm n_6 (ATerm t)
              {
                ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,i_2 = NULL;
                p_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_38);
                n_38 = t;
                t = o_38;
                if(((r_37 != NULL) && (r_37 != t)))
                  _fail(t);
                else
                  r_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_38);
                i_2 = t;
                t = SSLsetAnnotations(i_2, n_38);
                return(t);
              }
              t = fetch_1_0(n_6, t);
              t = term_y_6;
              l_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_37)), term_j_16);
              m_38 = t;
              t = SSL_printnl(l_38, m_38);
              t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_37)), term_j_16));
              t = default_system_usage_0_0(t);
              t = term_b_7;
              k_38 = t;
              t = SSL_exit(k_38);
              LocalPopChoice(i_16);
            }
          else
            {
              t = d_16;
            }
        }
      }
  }
  s_37 = t;
  t = term_w_12;
  u_37 = t;
  t = SSL_table_destroy(u_37);
  t = s_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t = parse_options_1_0(m_108, t);
  u_38 = t;
  t = term_k_16;
  x_38 = t;
  t = SSL_table_create(x_38);
  t = term_k_16;
  v_38 = t;
  t = term_l_16;
  w_38 = t;
  t = SSL_table_put(v_38, w_38, u_38);
  t = u_38;
  t = o_108(t);
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_108, t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = if_verbose2_1_0(u_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  t = term_q_16;
  y_38 = t;
  t = term_x_6;
  z_38 = t;
  t = term_r_16;
  t = g_6(y_38, z_38, t);
  t = term_s_16;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_t_16;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  a_39 = t;
  t = term_p_13;
  t = get_config_0_0(t);
  b_39 = t;
  t = term_y_6;
  c_39 = t;
  t = (ATerm) ATinsert(ATempty, b_39);
  d_39 = t;
  t = SSL_printnl(c_39, d_39);
  t = a_39;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  static ATerm o_6 (ATerm t)
  {
    ATerm u_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_107(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = u_16;
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
              {
                ATerm a_17 = t;
                int b_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(b_17);
                  }
                else
                  {
                    t = a_17;
                    {
                      ATerm c_17 = t;
                      int d_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_6, s_6, t_6, t);
                          LocalPopChoice(d_17);
                        }
                      else
                        {
                          t = c_17;
                          {
                            ATerm e_17 = t;
                            int f_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(f_17);
                              }
                            else
                              {
                                t = e_17;
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
  static ATerm q_6 (ATerm t)
  {
    ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
    f_39 = t;
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_39 != NULL) && (e_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_6, t);
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          t = term_l_17;
          e_39 = t;
        }
    }
    t = not_null(e_39);
    t = ReadFromFile_0_0(t);
    g_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_39, g_39);
    t = apply_strategy_1_0(v_107, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_6, x_107, p_6, q_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,t_2 = NULL,s_2 = NULL,n_2 = NULL,l_2 = NULL,k_2 = NULL;
  a_40 = t;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_40);
  h_39 = t;
  t = j_39;
  if(match_cons(t, sym_Specification_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_39);
  l_39 = t;
  t = m_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_39 = ATgetFirst((ATermList) t);
      q_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_39);
  o_39 = t;
  t = q_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_39 = ATgetFirst((ATermList) t);
      u_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_39);
  s_39 = t;
  t = t_39;
  if(match_cons(t, sym_Strategies_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_39);
  w_39 = t;
  t = x_39;
  t = rename_sdefs_0_0(t);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_39);
  k_2 = t;
  t = SSLsetAnnotations(k_2, w_39);
  z_39 = t;
  t = u_39;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_39), z_39);
  l_2 = t;
  t = SSLsetAnnotations(l_2, s_39);
  v_39 = t;
  t = (ATerm) ATinsert(CheckATermList(v_39), p_39);
  n_2 = t;
  t = SSLsetAnnotations(n_2, o_39);
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_39);
  s_2 = t;
  t = SSLsetAnnotations(s_2, l_39);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_39, n_39);
  t_2 = t;
  t = SSLsetAnnotations(t_2, h_39);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_6, _fail, default_usage_0_0, t);
  return(t);
}

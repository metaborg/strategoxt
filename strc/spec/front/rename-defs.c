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
ATerm term_i_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_m_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_b_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_g_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_f_8;
ATerm term_z_7;
ATerm term_o_7;
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
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
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
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_o_7);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_7);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_x_6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_v_12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_x_6);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_x_6);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_g_14, term_x_6);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_m_16, term_x_6);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm RenameVar_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm RenameCall_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm u_81 (ATerm), ATerm t);
static ATerm x_5 (ATerm i_112 (ATerm), ATerm v_59, ATerm t_59, ATerm t);
static ATerm z_5 (ATerm s_56, ATerm t_56, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm z_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm s_103 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
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
ATerm RenameSDef_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm rename_sdefs_0_0 (ATerm t);
static ATerm d_6 (ATerm n_31, ATerm o_31, ATerm t);
static ATerm e_6 (ATerm i_30, ATerm j_30, ATerm t);
static ATerm g_6 (ATerm e_89 (ATerm), ATerm z_210, ATerm m_30, ATerm t);
static ATerm f_6 (ATerm e_30, ATerm f_30, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_107 (ATerm), ATerm t);
static ATerm b_26 (ATerm v_25, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_6 (ATerm k_30, ATerm t);
static ATerm i_6 (ATerm p_31, ATerm q_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_27 (ATerm l_26, ATerm t);
static ATerm n_27 (ATerm p_26, ATerm q_26, ATerm r_26, ATerm t);
static ATerm o_27 (ATerm z_26, ATerm a_27, ATerm b_27, ATerm t);
static ATerm j_6 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_93 (ATerm), ATerm t);
static ATerm c_6 (ATerm y_50, ATerm z_50, ATerm t);
ATerm debug_1_0 (ATerm c_89 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm v_90 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_6 (ATerm h_35, ATerm i_35, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_6 (ATerm h_56, ATerm i_56, ATerm g_56, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_6 (ATerm e_38, ATerm f_38, ATerm t);
ATerm foldr_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_90 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm need_help_1_0 (ATerm m_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm y_57, ATerm z_57, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_110 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm parse_options_1_0 (ATerm o_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm iowrap_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL,q_0 = NULL;
  a_0 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_y_6;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_7), b_0), term_z_6);
  q_0 = t;
  t = SSL_printnl(m_0, q_0);
  t = term_b_7;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_1;
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      ATerm e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,z_1 = NULL;
        t = term_i_7;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, m_1);
        t = z_5(z_1, m_1, t);
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
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        {
          ATerm k_7 = t;
          int l_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 = NULL,x_2 = NULL;
              t = term_i_7;
              x_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_7, m_1);
              t = z_5(x_2, m_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_7) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  p_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_2;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              {
                ATerm c_3 = NULL,g_3 = NULL;
                t = term_i_7;
                g_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_7, m_1);
                t = z_5(g_3, m_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm n_7 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_7) != ATmakeSymbol("c_0", 0, ATtrue)))
                      _fail(t);
                    c_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_3;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_3 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(z_3, d_4, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm f_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      f_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(f_4, j_4, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(i_5, j_5, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL;
  x_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      y_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      v_3 = ATgetArgument(t, 2);
      {
        ATerm r_3 = NULL,t_3 = NULL,w_3 = NULL;
        t = y_3;
        if(match_cons(t, sym_SVar_1))
          {
            a_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_4;
        t = foldr_3_0(t_0, a_1, b_1, t);
        r_3 = t;
        t = v_3;
        t = foldr_3_0(c_1, d_1, g_1, t);
        t_3 = t;
        {
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATmakeAppl(sym__2, r_3, t_3));
              t = RenameVar_0_0(t);
              w_3 = t;
              LocalPopChoice(q_7);
            }
          else
            {
              t = p_7;
              t = a_4;
              t = HoArg_0_0(t);
              w_3 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_3), b_4, v_3);
      }
    }
  else
    {
      ATerm b_5 = NULL,f_5 = NULL;
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
          a_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_4;
      t = foldr_3_0(h_1, k_1, l_1, t);
      b_5 = t;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, a_4, b_5);
            t = RenameVar_0_0(t);
            f_5 = t;
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = a_4;
            t = HoArg_0_0(t);
            f_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_5), b_4);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  static ATerm n_1 (ATerm t)
  {
    t = topdown_1_0(u_81, t);
    return(t);
  }
  t = u_81(t);
  t = SRTS_all(n_1, t);
  return(t);
}
static ATerm x_5 (ATerm i_112 (ATerm), ATerm v_59, ATerm t_59, ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL;
  k_4 = t;
  t = i_112(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_4, v_59, t_59);
  t = n_6(g_4, v_59, t_59, t);
  {
    ATerm u_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL;
        t = term_z_7;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_z_7);
        t = m_6(g_4, n_4, t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = u_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_4 = ATgetFirst((ATermList) t);
      i_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_z_7;
  l_4 = t;
  t = (ATerm) ATinsert(CheckATermList(i_4), (ATerm) ATinsert(CheckATermList(h_4), v_59));
  m_4 = t;
  t = SSL_table_put(g_4, l_4, m_4);
  t = k_4;
  return(t);
}
static ATerm z_5 (ATerm s_56, ATerm t_56, ATerm t)
{
  ATerm o_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_56, t_56);
  t = m_6(s_56, t_56, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_4 = ATgetFirst((ATermList) t);
      {
        ATerm b_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm h_7 = NULL;
  h_7 = t;
  {
    ATerm c_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 = NULL;
        t = term_f_8;
        r_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_8, h_7);
        t = z_5(r_7, h_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = h_7;
        _fail(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = c_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_8 = NULL,g_8 = NULL;
              t = term_f_8;
              g_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_f_8, h_7);
              t = z_5(g_8, h_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm k_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("r_0", 0, ATtrue)))
                    _fail(t);
                  d_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_8;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              {
                ATerm l_8 = t;
                int n_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_8 = NULL;
                    t = term_f_8;
                    t_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_f_8, h_7);
                    t = z_5(t_8, h_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = h_7;
                    _fail(t);
                    LocalPopChoice(n_8);
                  }
                else
                  {
                    t = l_8;
                    {
                      ATerm p_8 = t;
                      int q_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_8 = NULL,d_9 = NULL;
                          t = term_f_8;
                          d_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_f_8, h_7);
                          t = z_5(d_9, h_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm r_8 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("l_0", 0, ATtrue)))
                                _fail(t);
                              y_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = y_8;
                          LocalPopChoice(q_8);
                        }
                      else
                        {
                          t = p_8;
                          {
                            ATerm s_8 = t;
                            int u_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm s_9 = NULL;
                                t = term_f_8;
                                s_9 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_f_8, h_7);
                                t = z_5(s_9, h_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = h_7;
                                _fail(t);
                                LocalPopChoice(u_8);
                              }
                            else
                              {
                                t = s_8;
                                {
                                  ATerm x_9 = NULL,c_10 = NULL;
                                  t = term_f_8;
                                  c_10 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_f_8, h_7);
                                  t = z_5(c_10, h_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm v_8 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) v_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      x_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = x_9;
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
ATerm Cify_1_0 (ATerm z_0 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_7 = ATgetFirst((ATermList) t);
      w_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_7;
  if(match_int(t, 95))
    {
      ATerm y_7 = NULL;
      t = w_7;
      t = z_0(t);
      y_7 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(y_7), term_w_8), term_w_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm a_8 = NULL;
          t = w_7;
          t = z_0(t);
          a_8 = t;
          t = (ATerm) ATinsert(CheckATermList(a_8), term_w_8);
        }
      else
        {
          ATerm j_8 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = w_7;
          t = z_0(t);
          j_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_8), term_w_8), term_x_8), term_w_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm s_103 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_8 = NULL,o_8 = NULL;
  o_8 = t;
  t = SSL_explode_string(o_8);
  {
    static ATerm o_9 (ATerm t)
    {
      ATerm z_8 = t;
      int a_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_103(o_9, t);
          LocalPopChoice(a_9);
        }
      else
        {
          t = z_8;
          {
            ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL;
            m_9 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_9 = ATgetFirst((ATermList) t);
                l_9 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm h_10 = NULL,n_10 = NULL,s_0 = NULL;
                  t = SSLgetAnnotations(m_9);
                  h_10 = t;
                  t = l_9;
                  t = o_9(t);
                  n_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_10), k_9);
                  s_0 = t;
                  t = SSLsetAnnotations(s_0, h_10);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_9;
              }
          }
        }
      return(t);
    }
    t = o_9(t);
  }
  m_8 = t;
  t = SSL_implode_string(m_8);
  return(t);
}
ATerm foldr_3_0 (ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,w_9 = NULL,y_9 = NULL;
  r_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_9;
      t = q_98(t);
    }
  else
    {
      ATerm k_10 = NULL,l_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_9 = ATgetFirst((ATermList) t);
          y_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_9;
      t = s_98(t);
      k_10 = t;
      t = y_9;
      t = foldr_3_0(q_98, r_98, s_98, t);
      l_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
      t = r_98(t);
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      m_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(m_13, n_13, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(o_13, p_13, t);
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
static ATerm a_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(n_16, o_16, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(p_16, q_16, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm d_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(d_20, f_20, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(j_20, k_20, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_f_8;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm f_19 = NULL,i_19 = NULL,k_19 = NULL,p_19 = NULL,t_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      i_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
      p_19 = ATgetArgument(t, 2);
      t_19 = ATgetArgument(t, 3);
      {
        ATerm k_12 = NULL,m_12 = NULL,o_12 = NULL,q_12 = NULL,r_12 = NULL,a_13 = NULL,b_13 = NULL,h_13 = NULL,l_13 = NULL,v_13 = NULL,w_13 = NULL;
        t = k_19;
        t = foldr_3_0(p_1, q_1, r_1, t);
        k_12 = t;
        t = p_19;
        t = foldr_3_0(t_1, v_1, x_1, t);
        m_12 = t;
        t = i_19;
        if(match_cons(t, sym_Mod_2))
          {
            v_13 = ATgetArgument(t, 0);
            w_13 = ATgetArgument(t, 1);
            {
              ATerm b_9 = t;
              int c_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_15 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_13), term_e_9), v_13);
                  d_15 = t;
                  t = SSL_concat_strings(d_15);
                  LocalPopChoice(c_9);
                }
              else
                {
                  t = b_9;
                  t = i_19;
                }
            }
          }
        else
          {
            t = i_19;
          }
        t = escape_1_0(Cify_1_0, t);
        q_12 = t;
        t = SSL_int_to_string(k_12);
        r_12 = t;
        t = SSL_int_to_string(m_12);
        a_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_13), term_f_9), r_12), term_f_9), q_12);
        l_13 = t;
        t = SSL_concat_strings(l_13);
        o_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym__2, k_12, m_12));
        b_13 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, o_12);
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym__2, k_12, m_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, o_12));
        t = x_5(y_1, b_13, h_13, t);
        t = o_12;
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_14 = NULL,c_14 = NULL;
              t = i_19;
              t = HoArg_0_0(t);
              b_14 = t;
              t = term_j_9;
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_19, term_j_9);
              t = x_5(a_2, i_19, c_14, t);
              t = b_14;
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              {
                ATerm f_14 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_9, o_12);
                f_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym_Defined_2, term_n_9, o_12));
                t = x_5(c_2, i_19, f_14, t);
                t = o_12;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, o_12, k_19, p_19, t_19);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          i_19 = ATgetArgument(t, 0);
          k_19 = ATgetArgument(t, 1);
          p_19 = ATgetArgument(t, 2);
          {
            ATerm v_15 = NULL,x_15 = NULL,z_15 = NULL,b_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL,e_17 = NULL,f_17 = NULL;
            t = k_19;
            t = foldr_3_0(e_2, f_2, h_2, t);
            v_15 = t;
            t = p_19;
            t = foldr_3_0(j_2, l_2, q_2, t);
            x_15 = t;
            t = i_19;
            if(match_cons(t, sym_Mod_2))
              {
                e_17 = ATgetArgument(t, 0);
                f_17 = ATgetArgument(t, 1);
                {
                  ATerm p_9 = t;
                  int q_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_17), term_e_9), e_17);
                      u_18 = t;
                      t = SSL_concat_strings(u_18);
                      LocalPopChoice(q_9);
                    }
                  else
                    {
                      t = p_9;
                      t = i_19;
                    }
                }
              }
            else
              {
                t = i_19;
              }
            t = escape_1_0(Cify_1_0, t);
            b_16 = t;
            t = SSL_int_to_string(v_15);
            d_16 = t;
            t = SSL_int_to_string(x_15);
            e_16 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_16), term_f_9), d_16), term_f_9), b_16);
            j_16 = t;
            t = SSL_concat_strings(j_16);
            z_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym__2, v_15, x_15));
            f_16 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_9, z_15);
            i_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym__2, v_15, x_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_t_9, z_15));
            t = x_5(s_2, f_16, i_16, t);
            t = z_15;
            {
              ATerm u_9 = t;
              int v_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_17 = NULL,q_17 = NULL;
                  t = i_19;
                  t = HoArg_0_0(t);
                  p_17 = t;
                  t = term_j_9;
                  q_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_19, term_j_9);
                  t = x_5(t_2, i_19, q_17, t);
                  t = p_17;
                  LocalPopChoice(v_9);
                }
              else
                {
                  t = u_9;
                  {
                    ATerm r_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_9, z_15);
                    r_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym_Defined_2, term_z_9, z_15));
                    t = x_5(u_2, i_19, r_17, t);
                    t = z_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, z_15, k_19, p_19);
          }
        }
      else
        {
          ATerm m_19 = NULL,n_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,w_19 = NULL,z_19 = NULL,b_20 = NULL,c_20 = NULL,t_20 = NULL,u_20 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              i_19 = ATgetArgument(t, 0);
              k_19 = ATgetArgument(t, 1);
              p_19 = ATgetArgument(t, 2);
              t_19 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = k_19;
          t = foldr_3_0(v_2, w_2, y_2, t);
          m_19 = t;
          t = p_19;
          t = foldr_3_0(z_2, a_3, b_3, t);
          n_19 = t;
          t = i_19;
          if(match_cons(t, sym_Mod_2))
            {
              t_20 = ATgetArgument(t, 0);
              u_20 = ATgetArgument(t, 1);
              {
                ATerm a_10 = t;
                int b_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_21 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_20), term_e_9), t_20);
                    p_21 = t;
                    t = SSL_concat_strings(p_21);
                    LocalPopChoice(b_10);
                  }
                else
                  {
                    t = a_10;
                    t = i_19;
                  }
              }
            }
          else
            {
              t = i_19;
            }
          t = escape_1_0(Cify_1_0, t);
          r_19 = t;
          t = SSL_int_to_string(m_19);
          s_19 = t;
          t = SSL_int_to_string(n_19);
          w_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_19), term_f_9), s_19), term_f_9), r_19);
          c_20 = t;
          t = SSL_concat_strings(c_20);
          q_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym__2, m_19, n_19));
          z_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_10, q_19);
          b_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym__2, m_19, n_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_10, q_19));
          t = x_5(d_3, z_19, b_20, t);
          t = q_19;
          {
            ATerm e_10 = t;
            int f_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_20 = NULL,z_20 = NULL;
                t = i_19;
                t = HoArg_0_0(t);
                y_20 = t;
                t = term_j_9;
                z_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_19, term_j_9);
                t = x_5(e_3, i_19, z_20, t);
                t = y_20;
                LocalPopChoice(f_10);
              }
            else
              {
                t = e_10;
                {
                  ATerm a_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_10, q_19);
                  a_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_19, (ATerm) ATmakeAppl(sym_Defined_2, term_g_10, q_19));
                  t = x_5(f_3, i_19, a_21, t);
                  t = q_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, q_19, k_19, p_19, t_19);
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
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(h_3, t);
  return(t);
}
static ATerm d_6 (ATerm n_31, ATerm o_31, ATerm t)
{
  ATerm i_20 = NULL;
  t = SSL_fputc(n_31, o_31);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_20);
  return(t);
}
static ATerm e_6 (ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm l_20 = NULL;
  t = SSL_write_term_to_stream_text(i_30, j_30);
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_20);
  return(t);
}
static ATerm g_6 (ATerm e_89 (ATerm), ATerm z_210, ATerm m_30, ATerm t)
{
  ATerm o_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_210, term_m_10);
  t = j_6(t);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_20, m_30);
  t = e_89(t);
  t = fclose_0_0(t);
  t = m_30;
  return(t);
}
static ATerm f_6 (ATerm e_30, ATerm f_30, ATerm t)
{
  ATerm p_20 = NULL;
  t = SSL_write_term_to_stream_baf(e_30, f_30);
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_20);
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
  ATerm g_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(match_cons(o_10, sym_Stream_1))
        {
          g_22 = ATgetArgument(o_10, 0);
        }
      else
        _fail(t);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(g_22, i_22, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(match_cons(p_10, sym_Stream_1))
        {
          a_23 = ATgetArgument(p_10, 0);
        }
      else
        _fail(t);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(a_23, b_23, t);
  x_22 = t;
  t = term_q_10;
  y_22 = t;
  t = x_22;
  if(match_cons(t, sym_Stream_1))
    {
      z_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, x_22);
  t = d_6(y_22, z_22, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,q_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,h_22 = NULL,k_22 = NULL,y_24 = NULL,z_24 = NULL,v_0 = NULL,u_0 = NULL;
  f_21 = t;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_21);
  w_21 = t;
  t = x_21;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_21 = ATgetArgument(t, 0);
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
        d_21 = t;
      }
  }
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, h_22);
  u_0 = t;
  t = SSLsetAnnotations(u_0, w_21);
  t = f_21;
  if(match_cons(t, sym__2))
    {
      h_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_21);
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_21, (ATerm) ATmakeAppl(sym__2, not_null(d_21), q_21));
  v_0 = t;
  t = SSLsetAnnotations(v_0, g_21);
  v_21 = t;
  if(match_cons(t, sym__2))
    {
      y_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,w_0 = NULL;
        t = SSLgetAnnotations(v_21);
        z_21 = t;
        t = y_24;
        t = fetch_1_0(k_3, t);
        c_22 = t;
        t = z_24;
        if(match_cons(t, sym__2))
          {
            e_22 = ATgetArgument(t, 0);
            f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_6(l_3, e_22, f_22, t);
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_22, d_22);
        w_0 = t;
        t = SSLsetAnnotations(w_0, z_21);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm r_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(v_21);
          r_22 = t;
          t = z_24;
          if(match_cons(t, sym__2))
            {
              v_22 = ATgetArgument(t, 0);
              w_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_6(m_3, v_22, w_22, t);
          u_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_24, u_22);
          y_0 = t;
          t = SSLsetAnnotations(y_0, r_22);
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
ATerm apply_strategy_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,l_25 = NULL,m_25 = NULL;
  m_25 = t;
  t = dtime_0_0(t);
  t = m_25;
  t = o_107(t);
  l_25 = t;
  t = dtime_0_0(t);
  g_25 = t;
  t = l_25;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_25), (ATerm) ATmakeAppl(sym_Runtime_1, g_25)), i_25);
  return(t);
}
static ATerm b_26 (ATerm v_25, ATerm t)
{
  t = SSL_fclose(v_25);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  z_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_25 = ATgetArgument(t, 0);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_25);
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = b_26(z_25, t);
          }
      }
    }
  else
    {
      t = b_26(z_25, t);
    }
  return(t);
}
static ATerm h_6 (ATerm k_30, ATerm t)
{
  t = SSL_read_term_from_stream(k_30);
  return(t);
}
static ATerm i_6 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_fopen(p_31, q_31);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_26 = NULL;
  t = SSL_stdin_stream();
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_26 = NULL;
  t = SSL_stdout_stream();
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_26 = NULL;
  t = SSL_stderr_stream();
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_26);
  return(t);
}
static ATerm m_27 (ATerm l_26, ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_explode_term(l_26);
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_10 = ATgetArgument(t, 1);
        if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
          {
            m_26 = ATgetFirst((ATermList) z_10);
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
  t = m_26;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_27 (ATerm p_26, ATerm q_26, ATerm r_26, ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(r_26);
  u_26 = t;
  t = p_26;
  if(match_cons(t, sym_Path_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_26, q_26);
  e_1 = t;
  t = SSLsetAnnotations(e_1, u_26);
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(s_26, t_26, t);
  return(t);
}
static ATerm o_27 (ATerm z_26, ATerm a_27, ATerm b_27, ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,h_27 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(b_27);
  e_27 = t;
  t = SSL_is_string(z_26);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_27, a_27);
  f_1 = t;
  t = SSLsetAnnotations(f_1, e_27);
  if(match_cons(t, sym__2))
    {
      c_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(c_27, d_27, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_27(j_27, t);
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
                  t = n_27(k_27, l_27, j_27, t);
                  LocalPopChoice(e_11);
                }
              else
                {
                  t = d_11;
                  t = o_27(k_27, l_27, j_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_27(j_27, t);
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_27 = NULL;
      s_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, term_i_11);
      t = j_6(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = debug_1_0(n_3, t);
      _fail(t);
    }
  q_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(r_27, t);
  p_27 = t;
  t = q_27;
  t = fclose_0_0(t);
  t = p_27;
  return(t);
}
ATerm fetch_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  static ATerm q_28 (ATerm t)
  {
    ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
    n_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_28 = ATgetFirst((ATermList) t);
        p_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_23 = NULL,z_23 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(n_28);
          t_23 = t;
          t = o_28;
          t = x_93(t);
          z_23 = t;
          t = (ATerm) ATinsert(CheckATermList(p_28), z_23);
          i_1 = t;
          t = SSLsetAnnotations(i_1, t_23);
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            ATerm m_24 = NULL,x_24 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(n_28);
            m_24 = t;
            t = p_28;
            t = q_28(t);
            x_24 = t;
            t = (ATerm) ATinsert(CheckATermList(x_24), o_28);
            j_1 = t;
            t = SSLsetAnnotations(j_1, m_24);
          }
        }
    }
    return(t);
  }
  t = q_28(t);
  return(t);
}
static ATerm c_6 (ATerm y_50, ATerm z_50, ATerm t)
{
  t = SSL_strcat(y_50, z_50);
  return(t);
}
ATerm debug_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t_28 = t;
  t = c_89(t);
  u_28 = t;
  t = term_y_6;
  v_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_28), u_28);
  w_28 = t;
  t = SSL_printnl(v_28, w_28);
  t = t_28;
  return(t);
}
static ATerm o_3 (ATerm t)
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
static ATerm p_3 (ATerm t)
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
      ATerm d_29 = NULL;
      d_29 = t;
      t = SSL_is_string(d_29);
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
            t = map_1_0(o_3, t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
              j_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_29 = ATgetArgument(t, 0);
                  t = k_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_29 = ATgetArgument(t, 0);
                      t = k_29;
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
                            t = debug_1_0(p_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_29 = NULL,q_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_29 = ATgetArgument(t, 0);
                          l_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_29;
                      t = eval_config_0_0(t);
                      p_29 = t;
                      t = l_29;
                      t = eval_config_0_0(t);
                      q_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_29, q_29);
                      t = c_6(p_29, q_29, t);
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
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t = term_u_11;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, u_29);
  t = m_6(v_29, u_29, t);
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_29 = NULL,x_29 = NULL;
        t = eval_config_0_0(t);
        w_29 = t;
        t = term_u_11;
        x_29 = t;
        t = SSL_table_put(x_29, u_29, w_29);
        t = w_29;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL;
        t = term_z_11;
        t = get_config_0_0(t);
        d_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_30, term_a_12);
        t = geq_0_0(t);
        t = b_30;
        t = v_90(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = b_30;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  if(match_string(t, "-k"))
    {
      t = n_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_30;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  t = SSL_string_to_int(o_30);
  p_30 = t;
  t = term_b_12;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_12, p_30);
  t = p_6(q_30, p_30, t);
  t = o_30;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, s_3, u_3, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  if(match_string(t, "-S"))
    {
      t = s_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_30;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  t = term_z_11;
  t_30 = t;
  t = term_o_7;
  u_30 = t;
  t = term_d_12;
  t = p_6(t_30, u_30, t);
  t = term_e_12;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL;
  v_30 = t;
  t = SSL_string_to_int(v_30);
  w_30 = t;
  t = term_z_11;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, w_30);
  t = p_6(x_30, w_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_30);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_g_12;
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
  ATerm y_30 = NULL,z_30 = NULL;
  t = term_h_12;
  y_30 = t;
  t = term_x_6;
  z_30 = t;
  t = term_i_12;
  t = p_6(y_30, z_30, t);
  t = term_j_12;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, e_4, p_4, t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = n_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = Option_3_0(t_4, u_4, v_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_6 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm a_31 = NULL;
  t = term_u_11;
  a_31 = t;
  t = SSL_table_put(a_31, h_35, i_35);
  t = (ATerm) ATmakeAppl(sym__3, term_u_11, h_35, i_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
      t = term_x_6;
      t = h_0(t);
      f_31 = t;
      t = term_u_12;
      g_31 = t;
      t = term_v_12;
      h_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_12, term_v_12, f_31);
      t = n_6(g_31, h_31, f_31, t);
      _fail(t);
    }
  else
    {
      ATerm k_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_31 = ATgetFirst((ATermList) t);
          e_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_31;
      t = d_0(t);
      t = term_x_6;
      t = e_0(t);
      k_31 = t;
      t = (ATerm) ATinsert(CheckATermList(e_31), k_31);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm m_31 = NULL;
  m_31 = t;
  if(match_string(t, "-o"))
    {
      t = m_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_31;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  t_31 = t;
  t = term_w_12;
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, t_31);
  t = p_6(u_31, t_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_31);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
static ATerm n_6 (ATerm h_56, ATerm i_56, ATerm g_56, ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_56, i_56);
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_13 = ATgetArgument(t, 0);
            ATerm d_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_56, i_56);
        t = m_6(h_56, i_56, t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = (ATerm) ATempty;
      }
  }
  x_31 = t;
  t = (ATerm) ATinsert(CheckATermList(x_31), g_56);
  y_31 = t;
  t = SSL_table_put(h_56, i_56, y_31);
  t = w_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL;
      t = term_x_6;
      t = x_0(t);
      j_32 = t;
      t = term_u_12;
      k_32 = t;
      t = term_v_12;
      l_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_12, term_v_12, j_32);
      t = n_6(k_32, l_32, j_32, t);
      _fail(t);
    }
  else
    {
      ATerm p_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_32 = ATgetFirst((ATermList) t);
          g_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_32 = ATgetFirst((ATermList) t);
          i_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_32;
      t = n_0(t);
      t = h_32;
      t = p_0(t);
      p_32 = t;
      t = (ATerm) ATinsert(CheckATermList(i_32), p_32);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  if(match_string(t, "-i"))
    {
      t = r_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_32;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL;
  s_32 = t;
  t = term_e_13;
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, s_32);
  t = p_6(t_32, s_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_32);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, a_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_6;
  t = whoami_0_0(t);
  u_32 = t;
  t = term_y_6;
  w_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_13), u_32);
  x_32 = t;
  t = SSL_printnl(w_32, x_32);
  t = term_b_7;
  v_32 = t;
  t = SSL_exit(v_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_13;
  t = get_config_0_0(t);
  return(t);
}
static ATerm k_6 (ATerm e_38, ATerm f_38, ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_38, f_38);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = SSL_addr(e_38, f_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_32;
      t = o_98(t);
    }
  else
    {
      ATerm e_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_33 = ATgetFirst((ATermList) t);
          b_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_33;
      t = foldr_2_0(o_98, p_98, t);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_33, e_33);
      t = p_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(v_27, w_27, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_26 = NULL,j_26 = NULL;
  t = times_0_0(t);
  j_26 = t;
  t = SSL_explode_term(j_26);
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_26;
  t = foldr_2_0(d_5, e_5, t);
  h_33 = t;
  t = SSL_TicksToSeconds(h_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_33;
        if((t_33 != t))
          {
            _fail(t);
          }
        t = s_33;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_33, u_33);
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = SSL_gtr(t_33, u_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL;
        t = term_z_11;
        t = get_config_0_0(t);
        a_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_34, term_b_7);
        t = geq_0_0(t);
        t = y_33;
        t = u_90(t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = y_33;
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,f_34 = NULL,g_34 = NULL;
  t = run_time_0_0(t);
  c_34 = t;
  t = term_x_6;
  t = whoami_0_0(t);
  d_34 = t;
  t = term_y_6;
  f_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_14), c_34), term_z_13), d_34);
  g_34 = t;
  t = SSL_printnl(f_34, g_34);
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_14), c_34), term_z_13), d_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_7;
  h_34 = t;
  t = SSL_exit(h_34);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL;
  q_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_34 = ATgetArgument(t, 0);
          {
            ATerm r_31 = NULL,s_1 = NULL;
            t = SSLgetAnnotations(q_34);
            r_31 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_34);
            s_1 = t;
            t = SSLsetAnnotations(s_1, r_31);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm d_14 = t;
  int e_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_14;
      t = get_config_0_0(t);
      LocalPopChoice(e_14);
    }
  else
    {
      t = d_14;
      t = fetch_1_0(h_5, t);
    }
  t = m_108(t);
  return(t);
}
ATerm map_1_0 (ATerm n_93 (ATerm), ATerm t)
{
  static ATerm g_35 (ATerm t)
  {
    ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
    d_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_35;
      }
    else
      {
        ATerm l_33 = NULL,j_34 = NULL,s_34 = NULL,u_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_35 = ATgetFirst((ATermList) t);
            f_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_35);
        l_33 = t;
        t = e_35;
        t = n_93(t);
        j_34 = t;
        t = f_35;
        t = g_35(t);
        s_34 = t;
        t = (ATerm) ATinsert(CheckATermList(s_34), j_34);
        u_1 = t;
        t = SSLsetAnnotations(u_1, l_33);
      }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_35 = ATgetFirst((ATermList) t);
      m_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_35 = NULL,w_35 = NULL;
        static ATerm k_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_35)), not_null(w_35));
          return(t);
        }
        t = m_35;
        t = k_0(t);
        if(((v_35 != NULL) && (v_35 != t)))
          _fail(t);
        else
          v_35 = t;
        t = l_35;
        t = j_0(t);
        if(((w_35 != NULL) && (w_35 != t)))
          _fail(t);
        else
          w_35 = t;
        t = m_35;
        t = reverse_acc_2_0(j_0, k_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_6;
      t = k_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm y_57, ATerm z_57, ATerm t)
{
  t = SSL_table_get(y_57, z_57);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,b_2 = NULL;
  c_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_36);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_36);
  b_2 = t;
  t = SSLsetAnnotations(b_2, a_36);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_36), term_h_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_13;
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
  t = term_u_12;
  y_35 = t;
  t = term_v_12;
  z_35 = t;
  t = term_l_14;
  t = m_6(y_35, z_35, t);
  t = reverse_acc_2_0(_id, m_5, t);
  t = map_1_0(n_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL;
  g_36 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_36;
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
            t = g_36;
          }
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, g_36);
      }
  }
  h_36 = t;
  t = term_t_10;
  i_36 = t;
  t = SSL_printnl(i_36, h_36);
  t = g_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  t = term_q_14;
  m_36 = t;
  t = term_x_6;
  n_36 = t;
  t = term_r_14;
  t = p_6(m_36, n_36, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_s_14;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  t = term_q_14;
  q_36 = t;
  t = term_x_6;
  r_36 = t;
  t = term_r_14;
  t = p_6(q_36, r_36, t);
  t = term_t_14;
  o_36 = t;
  t = term_x_6;
  p_36 = t;
  t = term_u_14;
  t = p_6(o_36, p_36, t);
  t = term_v_14;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_5, p_5, q_5, t);
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,d_2 = NULL;
  x_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_36 = ATgetFirst((ATermList) t);
      u_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_36);
  s_36 = t;
  t = t_36;
  t = u_67(t);
  v_36 = t;
  t = u_36;
  t = v_67(t);
  w_36 = t;
  t = (ATerm) ATinsert(CheckATermList(w_36), v_36);
  d_2 = t;
  t = SSLsetAnnotations(d_2, s_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,h_37 = NULL,i_37 = NULL,g_2 = NULL;
  c_37 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_15;
        t = p_110(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
      }
  }
  t = c_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  d_37 = t;
  t = term_i_13;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, e_37);
  t = p_6(i_37, e_37, t);
  t = f_37;
  {
    static ATerm s_37 (ATerm t)
    {
      ATerm c_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_37 = NULL;
              l_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_37;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              t = p_110(t);
              t = Cons_2_0(_id, s_37, t);
            }
          LocalPopChoice(e_15);
        }
      else
        {
          t = c_15;
          {
            ATerm o_37 = NULL,p_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_37 = ATgetFirst((ATermList) t);
                p_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_37), (ATerm) ATmakeAppl(sym_Undefined_1, o_37));
          }
        }
      return(t);
    }
    t = s_37(t);
  }
  h_37 = t;
  t = (ATerm) ATinsert(CheckATermList(h_37), (ATerm) ATmakeAppl(sym_Program_1, e_37));
  g_2 = t;
  t = SSLsetAnnotations(g_2, d_37);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  if(match_string(t, "--help"))
    {
      t = g_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_38;
        }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  t = term_g_14;
  h_38 = t;
  t = term_x_6;
  i_38 = t;
  t = term_h_15;
  t = p_6(h_38, i_38, t);
  t = term_i_15;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_110 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  t = term_u_12;
  b_38 = t;
  t = term_v_12;
  c_38 = t;
  t = (ATerm) ATempty;
  d_38 = t;
  t = SSL_table_put(b_38, c_38, d_38);
  t = z_37;
  {
    static ATerm u_5 (ATerm t)
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_110(t);
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
                t = Option_3_0(v_5, w_5, y_5, t);
                LocalPopChoice(n_15);
              }
            else
              {
                t = m_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_5, t);
  }
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_38 = NULL;
        p_38 = t;
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_35 = NULL;
              t = p_38;
              {
                ATerm s_15 = t;
                int t_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_14;
                    t = get_config_0_0(t);
                    LocalPopChoice(t_15);
                  }
                else
                  {
                    t = s_15;
                    t = fetch_1_0(a_6, t);
                  }
              }
              t = p_38;
              t = default_system_usage_0_0(t);
              t = term_o_7;
              u_35 = t;
              t = SSL_exit(u_35);
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              {
                ATerm z_36 = NULL;
                t = term_q_14;
                t = get_config_0_0(t);
                t = p_38;
                t = default_system_about_0_0(t);
                t = term_o_7;
                z_36 = t;
                t = SSL_exit(z_36);
              }
            }
        }
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        {
          ATerm u_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
              static ATerm b_6 (ATerm t)
              {
                ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,i_2 = NULL;
                v_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_38);
                t_38 = t;
                t = u_38;
                if(((x_37 != NULL) && (x_37 != t)))
                  _fail(t);
                else
                  x_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_38);
                i_2 = t;
                t = SSLsetAnnotations(i_2, t_38);
                return(t);
              }
              t = fetch_1_0(b_6, t);
              t = term_y_6;
              r_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_37)), term_y_15);
              s_38 = t;
              t = SSL_printnl(r_38, s_38);
              t = (ATerm) ATmakeAppl(sym__2, term_y_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_37)), term_y_15));
              t = default_system_usage_0_0(t);
              t = term_b_7;
              q_38 = t;
              t = SSL_exit(q_38);
              LocalPopChoice(w_15);
            }
          else
            {
              t = u_15;
            }
        }
      }
  }
  y_37 = t;
  t = term_u_12;
  a_38 = t;
  t = SSL_table_destroy(a_38);
  t = y_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  t = parse_options_1_0(o_108, t);
  a_39 = t;
  t = term_a_16;
  d_39 = t;
  t = SSL_table_create(d_39);
  t = term_a_16;
  b_39 = t;
  t = term_c_16;
  c_39 = t;
  t = SSL_table_put(b_39, c_39, a_39);
  t = a_39;
  t = q_108(t);
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_108, t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm k_16 = t;
          int l_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_16);
            }
          else
            {
              t = k_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_6 (ATerm t)
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
  ATerm e_39 = NULL,f_39 = NULL;
  t = term_m_16;
  e_39 = t;
  t = term_x_6;
  f_39 = t;
  t = term_r_16;
  t = p_6(e_39, f_39, t);
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
  ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  g_39 = t;
  t = term_i_13;
  t = get_config_0_0(t);
  h_39 = t;
  t = term_y_6;
  i_39 = t;
  t = (ATerm) ATinsert(ATempty, h_39);
  j_39 = t;
  t = SSL_printnl(i_39, j_39);
  t = g_39;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t)
{
  static ATerm l_6 (ATerm t)
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_107(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        {
          ATerm w_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
              {
                ATerm y_16 = t;
                int z_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          t = Option_3_0(r_6, s_6, t_6, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(d_17);
                              }
                            else
                              {
                                t = c_17;
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
    ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
    m_39 = t;
    {
      ATerm g_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_39 != NULL) && (l_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_6, t);
          LocalPopChoice(h_17);
        }
      else
        {
          t = g_17;
          t = term_i_17;
          l_39 = t;
        }
    }
    t = not_null(l_39);
    t = ReadFromFile_0_0(t);
    n_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
    t = apply_strategy_1_0(x_107, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_6, z_107, o_6, q_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,r_2 = NULL,o_2 = NULL,n_2 = NULL,m_2 = NULL,k_2 = NULL;
  g_40 = t;
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_40);
  o_39 = t;
  t = q_39;
  if(match_cons(t, sym_Specification_1))
    {
      s_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_39);
  r_39 = t;
  t = s_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      w_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  u_39 = t;
  t = w_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_39 = ATgetFirst((ATermList) t);
      a_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_39);
  y_39 = t;
  t = z_39;
  if(match_cons(t, sym_Strategies_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_39);
  c_40 = t;
  t = d_40;
  t = rename_sdefs_0_0(t);
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_40);
  k_2 = t;
  t = SSLsetAnnotations(k_2, c_40);
  f_40 = t;
  t = a_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_40), f_40);
  m_2 = t;
  t = SSLsetAnnotations(m_2, y_39);
  b_40 = t;
  t = (ATerm) ATinsert(CheckATermList(b_40), v_39);
  n_2 = t;
  t = SSLsetAnnotations(n_2, u_39);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_39);
  o_2 = t;
  t = SSLsetAnnotations(o_2, r_39);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_39, t_39);
  r_2 = t;
  t = SSLsetAnnotations(r_2, o_39);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_6, _fail, default_usage_0_0, t);
  return(t);
}

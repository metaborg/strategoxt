#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_y_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_m_7;
ATerm term_e_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_m_7);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_7);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_u_6);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_s_12);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_g_12);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_u_6);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_u_6);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_u_6);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_f_14);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_u_6);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_stdin_0);
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
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm RenameCall_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_84 (ATerm), ATerm t);
static ATerm q_5 (ATerm q_115 (ATerm), ATerm j_61, ATerm h_61, ATerm t);
static ATerm s_5 (ATerm f_57, ATerm g_57, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm n_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm t_106 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t);
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
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm RenameSDef_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm rename_sdefs_0_0 (ATerm t);
static ATerm v_5 (ATerm v_31, ATerm w_31, ATerm t);
static ATerm w_5 (ATerm n_30, ATerm o_30, ATerm t);
static ATerm y_5 (ATerm r_91 (ATerm), ATerm m_216, ATerm t_30, ATerm t);
static ATerm x_5 (ATerm j_30, ATerm k_30, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_110 (ATerm), ATerm t);
static ATerm p_26 (ATerm j_26, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_5 (ATerm p_30, ATerm t);
static ATerm a_6 (ATerm l_51, ATerm m_51, ATerm t);
static ATerm b_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_28 (ATerm z_26, ATerm t);
static ATerm b_28 (ATerm d_27, ATerm e_27, ATerm f_27, ATerm t);
static ATerm c_28 (ATerm n_27, ATerm o_27, ATerm p_27, ATerm t);
static ATerm c_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_96 (ATerm), ATerm t);
static ATerm f_6 (ATerm l_58, ATerm m_58, ATerm t);
ATerm if_verbose2_1_0 (ATerm i_93 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_6 (ATerm q_35, ATerm r_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_6 (ATerm u_56, ATerm v_56, ATerm t_56, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_6 (ATerm i_38, ATerm j_38, ATerm t);
ATerm foldr_2_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_93 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm need_help_1_0 (ATerm n_111 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_113 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm parse_options_1_0 (ATerm p_113 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm iowrap_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
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
  t = term_u_6;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_v_6;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), p_0), term_w_6);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_y_6;
  q_0 = t;
  t = SSL_exit(q_0);
  t = a_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm z_6 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_1;
  if(match_cons(t, sym__2))
    {
      ATerm a_7 = ATgetArgument(t, 0);
      ATerm b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,z_1 = NULL;
        t = term_e_7;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_7, m_1);
        t = s_5(z_1, m_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            w_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_1;
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 = NULL,t_2 = NULL;
              t = term_e_7;
              t_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_7, m_1);
              t = s_5(t_2, m_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm i_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("i_0", 0, ATtrue)))
                    _fail(t);
                  p_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_2;
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              {
                ATerm x_2 = NULL,b_3 = NULL;
                t = term_e_7;
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_7, m_1);
                t = s_5(b_3, m_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm k_7 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_7) != ATmakeSymbol("b_0", 0, ATtrue)))
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
  t = term_m_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm w_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(w_3, y_3, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm c_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(c_4, j_4, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm c_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(c_5, f_5, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm x_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL;
  z_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      a_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
      x_3 = ATgetArgument(t, 2);
      {
        ATerm k_3 = NULL,n_3 = NULL,s_3 = NULL;
        t = a_4;
        if(match_cons(t, sym_SVar_1))
          {
            b_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_4;
        t = foldr_3_0(v_0, a_1, b_1, t);
        k_3 = t;
        t = x_3;
        t = foldr_3_0(c_1, d_1, g_1, t);
        n_3 = t;
        {
          ATerm n_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATmakeAppl(sym__2, k_3, n_3));
              t = RenameVar_0_0(t);
              s_3 = t;
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
              t = b_4;
              t = HoArg_0_0(t);
              s_3 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_3), d_4, x_3);
      }
    }
  else
    {
      ATerm z_4 = NULL,b_5 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          a_4 = ATgetArgument(t, 0);
          d_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_4;
      if(match_cons(t, sym_SVar_1))
        {
          b_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_4;
      t = foldr_3_0(h_1, k_1, l_1, t);
      z_4 = t;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, b_4, z_4);
            t = RenameVar_0_0(t);
            b_5 = t;
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = b_4;
            t = HoArg_0_0(t);
            b_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_5), d_4);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  static ATerm n_1 (ATerm t)
  {
    t = topdown_1_0(h_84, t);
    return(t);
  }
  t = h_84(t);
  t = SRTS_all(n_1, t);
  return(t);
}
static ATerm q_5 (ATerm q_115 (ATerm), ATerm j_61, ATerm h_61, ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL;
  l_4 = t;
  t = q_115(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_4, j_61, h_61);
  t = g_6(g_4, j_61, h_61, t);
  {
    ATerm r_7 = t;
    int s_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL;
        t = term_t_7;
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_t_7);
        t = f_6(g_4, p_4, t);
        LocalPopChoice(s_7);
      }
    else
      {
        t = r_7;
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
  t = term_t_7;
  n_4 = t;
  t = (ATerm) ATinsert(CheckATermList(i_4), (ATerm) ATinsert(CheckATermList(h_4), j_61));
  o_4 = t;
  t = SSL_table_put(g_4, n_4, o_4);
  t = l_4;
  return(t);
}
static ATerm s_5 (ATerm f_57, ATerm g_57, ATerm t)
{
  ATerm q_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_57, g_57);
  t = f_6(f_57, g_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_4 = ATgetFirst((ATermList) t);
      {
        ATerm u_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  {
    ATerm v_7 = t;
    int x_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL;
        t = term_y_7;
        l_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_7, j_7);
        t = s_5(l_7, j_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = j_7;
        _fail(t);
        LocalPopChoice(x_7);
      }
    else
      {
        t = v_7;
        {
          ATerm b_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL,a_8 = NULL;
              t = term_y_7;
              a_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_7, j_7);
              t = s_5(a_8, j_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm f_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("r_0", 0, ATtrue)))
                    _fail(t);
                  w_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_7;
              LocalPopChoice(d_8);
            }
          else
            {
              t = b_8;
              {
                ATerm g_8 = t;
                int i_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_8 = NULL;
                    t = term_y_7;
                    o_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_y_7, j_7);
                    t = s_5(o_8, j_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = j_7;
                    _fail(t);
                    LocalPopChoice(i_8);
                  }
                else
                  {
                    t = g_8;
                    {
                      ATerm k_8 = t;
                      int l_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_8 = NULL,w_8 = NULL;
                          t = term_y_7;
                          w_8 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_y_7, j_7);
                          t = s_5(w_8, j_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm m_8 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              t_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = t_8;
                          LocalPopChoice(l_8);
                        }
                      else
                        {
                          t = k_8;
                          {
                            ATerm n_8 = t;
                            int p_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_9 = NULL;
                                t = term_y_7;
                                m_9 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_y_7, j_7);
                                t = s_5(m_9, j_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = j_7;
                                _fail(t);
                                LocalPopChoice(p_8);
                              }
                            else
                              {
                                t = n_8;
                                {
                                  ATerm t_9 = NULL,x_9 = NULL;
                                  t = term_y_7;
                                  x_9 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_y_7, j_7);
                                  t = s_5(x_9, j_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm q_8 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      t_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = t_9;
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
  ATerm z_7 = NULL,c_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_7 = ATgetFirst((ATermList) t);
      c_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_7;
  if(match_int(t, 95))
    {
      ATerm e_8 = NULL;
      t = c_8;
      t = n_0(t);
      e_8 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(e_8), term_r_8), term_r_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm h_8 = NULL;
          t = c_8;
          t = n_0(t);
          h_8 = t;
          t = (ATerm) ATinsert(CheckATermList(h_8), term_r_8);
        }
      else
        {
          ATerm j_8 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = c_8;
          t = n_0(t);
          j_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(j_8), term_r_8), term_u_8), term_r_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm t_106 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_8 = NULL,z_8 = NULL;
  z_8 = t;
  t = SSL_explode_string(z_8);
  {
    static ATerm u_9 (ATerm t)
    {
      ATerm v_8 = t;
      int x_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_106(u_9, t);
          LocalPopChoice(x_8);
        }
      else
        {
          t = v_8;
          {
            ATerm o_9 = NULL,p_9 = NULL,s_9 = NULL;
            s_9 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_9 = ATgetFirst((ATermList) t);
                p_9 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm d_10 = NULL,m_10 = NULL,u_0 = NULL;
                  t = SSLgetAnnotations(s_9);
                  d_10 = t;
                  t = p_9;
                  t = u_9(t);
                  m_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(m_10), o_9);
                  u_0 = t;
                  t = SSLsetAnnotations(u_0, d_10);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_9;
              }
          }
        }
      return(t);
    }
    t = u_9(t);
  }
  s_8 = t;
  t = SSL_implode_string(s_8);
  return(t);
}
ATerm foldr_3_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL;
  e_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_10;
      t = r_101(t);
    }
  else
    {
      ATerm k_10 = NULL,p_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_10 = ATgetFirst((ATermList) t);
          h_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_10;
      t = t_101(t);
      k_10 = t;
      t = h_10;
      t = foldr_3_0(r_101, s_101, t_101, t);
      p_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_10, p_10);
      t = s_101(t);
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm y_12 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_12 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(y_12, b_13, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(c_13, d_13, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_y_7;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_y_7;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(z_15, a_16, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(b_16, c_16, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_y_7;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_y_7;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(r_19, s_19, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(t_19, u_19, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_y_7;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_y_7;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,f_20 = NULL;
  z_19 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
      c_20 = ATgetArgument(t, 2);
      f_20 = ATgetArgument(t, 3);
      {
        ATerm z_11 = NULL,a_12 = NULL,d_12 = NULL,q_12 = NULL,r_12 = NULL,t_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,k_13 = NULL,l_13 = NULL;
        t = b_20;
        t = foldr_3_0(p_1, q_1, r_1, t);
        z_11 = t;
        t = c_20;
        t = foldr_3_0(t_1, v_1, x_1, t);
        a_12 = t;
        t = a_20;
        if(match_cons(t, sym_Mod_2))
          {
            k_13 = ATgetArgument(t, 0);
            l_13 = ATgetArgument(t, 1);
            {
              ATerm y_8 = t;
              int a_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_14 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_13), term_b_9), k_13);
                  p_14 = t;
                  t = SSL_concat_strings(p_14);
                  LocalPopChoice(a_9);
                }
              else
                {
                  t = y_8;
                  t = a_20;
                }
            }
          }
        else
          {
            t = a_20;
          }
        t = escape_1_0(Cify_1_0, t);
        q_12 = t;
        t = SSL_int_to_string(z_11);
        r_12 = t;
        t = SSL_int_to_string(a_12);
        t_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_12), term_c_9), r_12), term_c_9), q_12);
        x_12 = t;
        t = SSL_concat_strings(x_12);
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, z_11, a_12));
        v_12 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, d_12);
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, z_11, a_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, d_12));
        t = q_5(y_1, v_12, w_12, t);
        t = d_12;
        {
          ATerm e_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_13 = NULL,t_13 = NULL;
              t = a_20;
              t = HoArg_0_0(t);
              q_13 = t;
              t = term_g_9;
              t_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_20, term_g_9);
              t = q_5(a_2, a_20, t_13, t);
              t = q_13;
              LocalPopChoice(f_9);
            }
          else
            {
              t = e_9;
              {
                ATerm v_13 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, d_12);
                v_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, d_12));
                t = q_5(c_2, a_20, v_13, t);
                t = d_12;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, d_12, b_20, c_20, f_20);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          a_20 = ATgetArgument(t, 0);
          b_20 = ATgetArgument(t, 1);
          c_20 = ATgetArgument(t, 2);
          {
            ATerm g_15 = NULL,i_15 = NULL,l_15 = NULL,m_15 = NULL,p_15 = NULL,q_15 = NULL,u_15 = NULL,x_15 = NULL,y_15 = NULL,q_16 = NULL,u_16 = NULL;
            t = b_20;
            t = foldr_3_0(e_2, f_2, h_2, t);
            g_15 = t;
            t = c_20;
            t = foldr_3_0(j_2, l_2, q_2, t);
            i_15 = t;
            t = a_20;
            if(match_cons(t, sym_Mod_2))
              {
                q_16 = ATgetArgument(t, 0);
                u_16 = ATgetArgument(t, 1);
                {
                  ATerm i_9 = t;
                  int j_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_16), term_b_9), q_16);
                      a_18 = t;
                      t = SSL_concat_strings(a_18);
                      LocalPopChoice(j_9);
                    }
                  else
                    {
                      t = i_9;
                      t = a_20;
                    }
                }
              }
            else
              {
                t = a_20;
              }
            t = escape_1_0(Cify_1_0, t);
            m_15 = t;
            t = SSL_int_to_string(g_15);
            p_15 = t;
            t = SSL_int_to_string(i_15);
            q_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_15), term_c_9), p_15), term_c_9), m_15);
            y_15 = t;
            t = SSL_concat_strings(y_15);
            l_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, g_15, i_15));
            u_15 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, l_15);
            x_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, g_15, i_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, l_15));
            t = q_5(r_2, u_15, x_15, t);
            t = l_15;
            {
              ATerm l_9 = t;
              int n_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_17 = NULL,g_17 = NULL;
                  t = a_20;
                  t = HoArg_0_0(t);
                  d_17 = t;
                  t = term_g_9;
                  g_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_20, term_g_9);
                  t = q_5(u_2, a_20, g_17, t);
                  t = d_17;
                  LocalPopChoice(n_9);
                }
              else
                {
                  t = l_9;
                  {
                    ATerm h_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_9, l_15);
                    h_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym_Defined_2, term_q_9, l_15));
                    t = q_5(v_2, a_20, h_17, t);
                    t = l_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, l_15, b_20, c_20);
          }
        }
      else
        {
          ATerm z_18 = NULL,a_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,o_19 = NULL,p_19 = NULL,l_20 = NULL,n_20 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              a_20 = ATgetArgument(t, 0);
              b_20 = ATgetArgument(t, 1);
              c_20 = ATgetArgument(t, 2);
              f_20 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = b_20;
          t = foldr_3_0(w_2, y_2, z_2, t);
          z_18 = t;
          t = c_20;
          t = foldr_3_0(a_3, c_3, d_3, t);
          a_19 = t;
          t = a_20;
          if(match_cons(t, sym_Mod_2))
            {
              l_20 = ATgetArgument(t, 0);
              n_20 = ATgetArgument(t, 1);
              {
                ATerm r_9 = t;
                int v_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_21 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_20), term_b_9), l_20);
                    l_21 = t;
                    t = SSL_concat_strings(l_21);
                    LocalPopChoice(v_9);
                  }
                else
                  {
                    t = r_9;
                    t = a_20;
                  }
              }
            }
          else
            {
              t = a_20;
            }
          t = escape_1_0(Cify_1_0, t);
          i_19 = t;
          t = SSL_int_to_string(z_18);
          j_19 = t;
          t = SSL_int_to_string(a_19);
          k_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_19), term_c_9), j_19), term_c_9), i_19);
          p_19 = t;
          t = SSL_concat_strings(p_19);
          h_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, z_18, a_19));
          l_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_9, h_19);
          o_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, z_18, a_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_9, h_19));
          t = q_5(e_3, l_19, o_19, t);
          t = h_19;
          {
            ATerm y_9 = t;
            int z_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_20 = NULL,v_20 = NULL;
                t = a_20;
                t = HoArg_0_0(t);
                u_20 = t;
                t = term_g_9;
                v_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_20, term_g_9);
                t = q_5(f_3, a_20, v_20, t);
                t = u_20;
                LocalPopChoice(z_9);
              }
            else
              {
                t = y_9;
                {
                  ATerm w_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_10, h_19);
                  w_20 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym_Defined_2, term_a_10, h_19));
                  t = q_5(g_3, a_20, w_20, t);
                  t = h_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, h_19, b_20, c_20, f_20);
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
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(h_3, t);
  return(t);
}
static ATerm v_5 (ATerm v_31, ATerm w_31, ATerm t)
{
  ATerm d_21 = NULL;
  t = SSL_fputc(v_31, w_31);
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_21);
  return(t);
}
static ATerm w_5 (ATerm n_30, ATerm o_30, ATerm t)
{
  ATerm g_21 = NULL;
  t = SSL_write_term_to_stream_text(n_30, o_30);
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_21);
  return(t);
}
static ATerm y_5 (ATerm r_91 (ATerm), ATerm m_216, ATerm t_30, ATerm t)
{
  ATerm i_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_216, term_g_10);
  t = c_6(t);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_21, t_30);
  t = r_91(t);
  t = fclose_0_0(t);
  t = t_30;
  return(t);
}
static ATerm x_5 (ATerm j_30, ATerm k_30, ATerm t)
{
  ATerm j_21 = NULL;
  t = SSL_write_term_to_stream_baf(j_30, k_30);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_21);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm x_21 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Stream_1))
        {
          x_21 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(x_21, b_22, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm o_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(match_cons(j_10, sym_Stream_1))
        {
          u_22 = ATgetArgument(j_10, 0);
        }
      else
        _fail(t);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(u_22, v_22, t);
  o_22 = t;
  t = term_l_10;
  s_22 = t;
  t = o_22;
  if(match_cons(t, sym_Stream_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, o_22);
  t = v_5(s_22, t_22, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,k_22 = NULL,n_22 = NULL,q_22 = NULL,r_22 = NULL,g_23 = NULL,j_23 = NULL,m_23 = NULL,m_25 = NULL,p_25 = NULL,x_0 = NULL,w_0 = NULL;
  z_21 = t;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_21);
  r_22 = t;
  t = g_23;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_21 != NULL) && (y_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_3, t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = term_q_10;
        y_21 = t;
      }
  }
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, j_23);
  w_0 = t;
  t = SSLsetAnnotations(w_0, r_22);
  t = z_21;
  if(match_cons(t, sym__2))
    {
      k_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_21);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, (ATerm) ATmakeAppl(sym__2, not_null(y_21), n_22));
  x_0 = t;
  t = SSLsetAnnotations(x_0, a_22);
  q_22 = t;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(q_22);
        q_21 = t;
        t = m_25;
        t = fetch_1_0(l_3, t);
        t_21 = t;
        t = p_25;
        if(match_cons(t, sym__2))
          {
            v_21 = ATgetArgument(t, 0);
            w_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_5(m_3, v_21, w_21, t);
        u_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_21, u_21);
        y_0 = t;
        t = SSLsetAnnotations(y_0, q_21);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm g_22 = NULL,j_22 = NULL,l_22 = NULL,m_22 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(q_22);
          g_22 = t;
          t = p_25;
          if(match_cons(t, sym__2))
            {
              l_22 = ATgetArgument(t, 0);
              m_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_5(o_3, l_22, m_22, t);
          j_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_25, j_22);
          z_0 = t;
          t = SSLsetAnnotations(z_0, g_22);
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
ATerm apply_strategy_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL,y_25 = NULL,z_25 = NULL,b_26 = NULL;
  b_26 = t;
  t = dtime_0_0(t);
  t = b_26;
  t = p_110(t);
  z_25 = t;
  t = dtime_0_0(t);
  u_25 = t;
  t = z_25;
  if(match_cons(t, sym__2))
    {
      v_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_25), (ATerm) ATmakeAppl(sym_Runtime_1, u_25)), y_25);
  return(t);
}
static ATerm p_26 (ATerm j_26, ATerm t)
{
  t = SSL_fclose(j_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_26 = ATgetArgument(t, 0);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_26);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = p_26(n_26, t);
          }
      }
    }
  else
    {
      t = p_26(n_26, t);
    }
  return(t);
}
static ATerm z_5 (ATerm p_30, ATerm t)
{
  t = SSL_read_term_from_stream(p_30);
  return(t);
}
static ATerm a_6 (ATerm l_51, ATerm m_51, ATerm t)
{
  t = SSL_strcat(l_51, m_51);
  return(t);
}
static ATerm b_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  ATerm q_26 = NULL;
  t = SSL_fopen(x_31, y_31);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_stdin_stream();
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_26 = NULL;
  t = SSL_stdout_stream();
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_stderr_stream();
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_26);
  return(t);
}
static ATerm a_28 (ATerm z_26, ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_explode_term(z_26);
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_10 = ATgetArgument(t, 1);
        if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
          {
            a_27 = ATgetFirst((ATermList) w_10);
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
  t = a_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_28 (ATerm d_27, ATerm e_27, ATerm f_27, ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,l_27 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(f_27);
  i_27 = t;
  t = d_27;
  if(match_cons(t, sym_Path_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_27, e_27);
  e_1 = t;
  t = SSLsetAnnotations(e_1, i_27);
  if(match_cons(t, sym__2))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(g_27, h_27, t);
  return(t);
}
static ATerm c_28 (ATerm n_27, ATerm o_27, ATerm p_27, ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,v_27 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(p_27);
  s_27 = t;
  t = SSL_is_string(n_27);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_27, o_27);
  f_1 = t;
  t = SSLsetAnnotations(f_1, s_27);
  if(match_cons(t, sym__2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(q_27, r_27, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_28(x_27, t);
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            {
              ATerm a_11 = t;
              int b_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_28(y_27, z_27, x_27, t);
                  LocalPopChoice(b_11);
                }
              else
                {
                  t = a_11;
                  t = c_28(y_27, z_27, x_27, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_28(x_27, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,l_28 = NULL;
  l_28 = t;
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_28, term_e_11);
        t = c_6(t);
        LocalPopChoice(d_11);
      }
    else
      {
        t = c_11;
        {
          ATerm h_23 = NULL,i_23 = NULL;
          t = term_f_11;
          i_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_11, l_28);
          t = a_6(i_23, l_28, t);
          h_23 = t;
          t = SSL_perror(h_23);
          _fail(t);
        }
      }
  }
  f_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(g_28, t);
  e_28 = t;
  t = f_28;
  t = fclose_0_0(t);
  t = e_28;
  return(t);
}
ATerm fetch_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  static ATerm k_29 (ATerm t)
  {
    ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
    h_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_29 = ATgetFirst((ATermList) t);
        j_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_11 = t;
      int h_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_23 = NULL,w_23 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(h_29);
          r_23 = t;
          t = i_29;
          t = k_96(t);
          w_23 = t;
          t = (ATerm) ATinsert(CheckATermList(j_29), w_23);
          i_1 = t;
          t = SSLsetAnnotations(i_1, r_23);
          LocalPopChoice(h_11);
        }
      else
        {
          t = g_11;
          {
            ATerm l_24 = NULL,q_24 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(h_29);
            l_24 = t;
            t = j_29;
            t = k_29(t);
            q_24 = t;
            t = (ATerm) ATinsert(CheckATermList(q_24), i_29);
            j_1 = t;
            t = SSLsetAnnotations(j_1, l_24);
          }
        }
    }
    return(t);
  }
  t = k_29(t);
  return(t);
}
static ATerm f_6 (ATerm l_58, ATerm m_58, ATerm t)
{
  t = SSL_table_get(l_58, m_58);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
        t = term_k_11;
        r_29 = t;
        t = term_l_11;
        s_29 = t;
        t = term_m_11;
        t = f_6(r_29, s_29, t);
        q_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_29, term_n_11);
        t = geq_0_0(t);
        t = o_29;
        t = i_93(t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = o_29;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  if(match_string(t, "-k"))
    {
      t = v_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_29;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  t = SSL_string_to_int(w_29);
  x_29 = t;
  t = term_o_11;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, x_29);
  t = i_6(y_29, x_29, t);
  t = w_29;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  if(match_string(t, "-S"))
    {
      t = a_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_30;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  t = term_l_11;
  b_30 = t;
  t = term_m_7;
  c_30 = t;
  t = term_q_11;
  t = i_6(b_30, c_30, t);
  t = term_r_11;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  t = SSL_string_to_int(d_30);
  e_30 = t;
  t = term_l_11;
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, e_30);
  t = i_6(f_30, e_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_30);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_11;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  t = term_u_11;
  g_30 = t;
  t = term_u_6;
  h_30 = t;
  t = term_v_11;
  t = i_6(g_30, h_30, t);
  t = term_w_11;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, u_3, v_3, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = y_11;
      {
        ATerm c_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, k_4, t);
            LocalPopChoice(e_12);
          }
        else
          {
            t = c_12;
            t = Option_3_0(m_4, r_4, s_4, t);
          }
      }
    }
  return(t);
}
static ATerm i_6 (ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm i_30 = NULL;
  t = term_k_11;
  i_30 = t;
  t = SSL_table_put(i_30, q_35, r_35);
  t = (ATerm) ATmakeAppl(sym__3, term_k_11, q_35, r_35);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
      t = term_u_6;
      t = e_0(t);
      u_30 = t;
      t = term_f_12;
      v_30 = t;
      t = term_g_12;
      w_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_g_12, u_30);
      t = g_6(v_30, w_30, u_30, t);
      _fail(t);
    }
  else
    {
      ATerm z_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_30 = ATgetFirst((ATermList) t);
          r_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_30;
      t = c_0(t);
      t = term_u_6;
      t = d_0(t);
      z_30 = t;
      t = (ATerm) ATinsert(CheckATermList(r_30), z_30);
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm b_31 = NULL;
  b_31 = t;
  if(match_string(t, "-o"))
    {
      t = b_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_31;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  c_31 = t;
  t = term_h_12;
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, c_31);
  t = i_6(d_31, c_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_31);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, v_4, t);
  return(t);
}
static ATerm g_6 (ATerm u_56, ATerm v_56, ATerm t_56, ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_12 = ATgetArgument(t, 0);
            ATerm m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_56, v_56);
        t = f_6(u_56, v_56, t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATempty;
      }
  }
  g_31 = t;
  t = (ATerm) ATinsert(CheckATermList(g_31), t_56);
  h_31 = t;
  t = SSL_table_put(u_56, v_56, h_31);
  t = f_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
      t = term_u_6;
      t = l_0(t);
      s_31 = t;
      t = term_f_12;
      t_31 = t;
      t = term_g_12;
      u_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_g_12, s_31);
      t = g_6(t_31, u_31, s_31, t);
      _fail(t);
    }
  else
    {
      ATerm e_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_31 = ATgetFirst((ATermList) t);
          p_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_31 = ATgetFirst((ATermList) t);
          r_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_31;
      t = j_0(t);
      t = q_31;
      t = k_0(t);
      e_32 = t;
      t = (ATerm) ATinsert(CheckATermList(r_31), e_32);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm g_32 = NULL;
  g_32 = t;
  if(match_string(t, "-i"))
    {
      t = g_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_32;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  h_32 = t;
  t = term_n_12;
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, h_32);
  t = i_6(i_32, h_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_32);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, y_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_6;
  t = whoami_0_0(t);
  j_32 = t;
  t = term_v_6;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_12), j_32);
  m_32 = t;
  t = SSL_printnl(l_32, m_32);
  t = term_y_6;
  k_32 = t;
  t = SSL_exit(k_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  t = term_k_11;
  n_32 = t;
  t = term_s_12;
  o_32 = t;
  t = term_u_12;
  t = f_6(n_32, o_32, t);
  return(t);
}
static ATerm d_6 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_38, j_38);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      t = SSL_addr(i_38, j_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
  q_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_32;
      t = p_101(t);
    }
  else
    {
      ATerm v_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_32 = ATgetFirst((ATermList) t);
          s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_32;
      t = foldr_2_0(p_101, q_101, t);
      v_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_32, v_32);
      t = q_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm k_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(k_25, n_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_24 = NULL,f_25 = NULL;
  t = times_0_0(t);
  f_25 = t;
  t = SSL_explode_term(f_25);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_24;
  t = foldr_2_0(a_5, d_5, t);
  y_32 = t;
  t = SSL_TicksToSeconds(y_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym__2))
    {
      k_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_33;
        if((k_33 != t))
          {
            _fail(t);
          }
        t = j_33;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_33, l_33);
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = SSL_gtr(k_33, l_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  {
    ATerm j_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
        t = term_k_11;
        s_33 = t;
        t = term_l_11;
        t_33 = t;
        t = term_m_11;
        t = f_6(s_33, t_33, t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_33, term_y_6);
        t = geq_0_0(t);
        t = p_33;
        t = h_93(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = j_13;
        t = p_33;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,y_33 = NULL,z_33 = NULL;
  t = run_time_0_0(t);
  v_33 = t;
  t = term_u_6;
  t = whoami_0_0(t);
  w_33 = t;
  t = term_v_6;
  y_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), v_33), term_n_13), w_33);
  z_33 = t;
  t = SSL_printnl(y_33, z_33);
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), v_33), term_n_13), w_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_7;
  a_34 = t;
  t = SSL_exit(a_34);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL;
  l_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_34 = ATgetArgument(t, 0);
          {
            ATerm w_26 = NULL,s_1 = NULL;
            t = SSLgetAnnotations(l_34);
            w_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_34);
            s_1 = t;
            t = SSLsetAnnotations(s_1, w_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm p_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_34 = NULL,e_34 = NULL;
      t = term_k_11;
      d_34 = t;
      t = term_s_13;
      e_34 = t;
      t = term_u_13;
      t = f_6(d_34, e_34, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = p_13;
      t = fetch_1_0(g_5, t);
    }
  t = n_111(t);
  return(t);
}
ATerm map_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  static ATerm b_35 (ATerm t)
  {
    ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
    y_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_34;
      }
    else
      {
        ATerm u_29 = NULL,s_30 = NULL,a_31 = NULL,u_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_34 = ATgetFirst((ATermList) t);
            a_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_34);
        u_29 = t;
        t = z_34;
        t = a_96(t);
        s_30 = t;
        t = a_35;
        t = b_35(t);
        a_31 = t;
        t = (ATerm) ATinsert(CheckATermList(a_31), s_30);
        u_1 = t;
        t = SSLsetAnnotations(u_1, u_29);
      }
    return(t);
  }
  t = b_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_35 = ATgetFirst((ATermList) t);
      f_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_35 = NULL,k_35 = NULL;
        static ATerm h_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_35)), not_null(k_35));
          return(t);
        }
        t = f_35;
        t = h_0(t);
        if(((j_35 != NULL) && (j_35 != t)))
          _fail(t);
        else
          j_35 = t;
        t = e_35;
        t = f_0(t);
        if(((k_35 != NULL) && (k_35 != t)))
          _fail(t);
        else
          k_35 = t;
        t = f_35;
        t = reverse_acc_2_0(f_0, h_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_6;
      t = h_0(t);
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,b_2 = NULL;
  u_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_35);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_35);
  b_2 = t;
  t = SSLsetAnnotations(b_2, s_35);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm w_35 = NULL;
  w_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_35), term_w_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_35 = NULL,p_35 = NULL;
      t = term_k_11;
      o_35 = t;
      t = term_s_12;
      p_35 = t;
      t = term_u_12;
      t = f_6(o_35, p_35, t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = fetch_1_0(i_5, t);
    }
  t = term_z_13;
  t = echo_0_0(t);
  t = term_f_12;
  m_35 = t;
  t = term_g_12;
  n_35 = t;
  t = term_a_14;
  t = f_6(m_35, n_35, t);
  t = reverse_acc_2_0(_id, j_5, t);
  t = map_1_0(k_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_14 = ATgetFirst((ATermList) t);
                ATerm e_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_35;
          }
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = (ATerm) ATinsert(ATempty, y_35);
      }
  }
  z_35 = t;
  t = term_q_10;
  a_36 = t;
  t = SSL_printnl(a_36, z_35);
  t = y_35;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  t = term_k_11;
  e_36 = t;
  t = term_s_12;
  f_36 = t;
  t = term_u_12;
  t = f_6(e_36, f_36, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL;
  t = term_f_14;
  g_36 = t;
  t = term_u_6;
  h_36 = t;
  t = term_g_14;
  t = i_6(g_36, h_36, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_h_14;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  t = term_f_14;
  k_36 = t;
  t = term_u_6;
  l_36 = t;
  t = term_g_14;
  t = i_6(k_36, l_36, t);
  t = term_i_14;
  i_36 = t;
  t = term_u_6;
  j_36 = t;
  t = term_j_14;
  t = i_6(i_36, j_36, t);
  t = term_k_14;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = Option_3_0(o_5, p_5, r_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t)
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
  t = g_70(t);
  p_36 = t;
  t = o_36;
  t = h_70(t);
  q_36 = t;
  t = (ATerm) ATinsert(CheckATermList(q_36), p_36);
  d_2 = t;
  t = SSLsetAnnotations(d_2, m_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_113 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,b_37 = NULL,c_37 = NULL,g_2 = NULL;
  w_36 = t;
  {
    ATerm o_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_14;
        t = q_113(t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = o_14;
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
  t = term_s_12;
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, y_36);
  t = i_6(c_37, y_36, t);
  t = z_36;
  {
    static ATerm m_37 (ATerm t)
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_37 = NULL;
              f_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_37;
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              t = q_113(t);
              t = Cons_2_0(_id, m_37, t);
            }
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
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
  g_2 = t;
  t = SSLsetAnnotations(g_2, x_36);
  return(t);
}
static ATerm u_5 (ATerm t)
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
static ATerm e_6 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL;
  t = term_s_13;
  z_37 = t;
  t = term_u_6;
  a_38 = t;
  t = term_w_14;
  t = i_6(z_37, a_38, t);
  t = term_x_14;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_y_14;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  t_37 = t;
  t = term_f_12;
  v_37 = t;
  t = term_g_12;
  w_37 = t;
  t = (ATerm) ATempty;
  x_37 = t;
  t = SSL_table_put(v_37, w_37, x_37);
  t = t_37;
  {
    static ATerm t_5 (ATerm t)
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_113(t);
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
                t = Option_3_0(u_5, e_6, h_6, t);
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
  }
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_38 = NULL;
        n_38 = t;
        {
          ATerm f_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_32 = NULL;
              t = n_38;
              {
                ATerm j_15 = t;
                int k_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_33 = NULL,c_33 = NULL;
                    t = term_k_11;
                    b_33 = t;
                    t = term_s_13;
                    c_33 = t;
                    t = term_u_13;
                    t = f_6(b_33, c_33, t);
                    LocalPopChoice(k_15);
                  }
                else
                  {
                    t = j_15;
                    t = fetch_1_0(j_6, t);
                  }
              }
              t = n_38;
              t = default_system_usage_0_0(t);
              t = term_m_7;
              p_32 = t;
              t = SSL_exit(p_32);
              LocalPopChoice(h_15);
            }
          else
            {
              t = f_15;
              {
                ATerm n_34 = NULL,o_34 = NULL,d_35 = NULL;
                t = term_k_11;
                o_34 = t;
                t = term_f_14;
                d_35 = t;
                t = term_n_15;
                t = f_6(o_34, d_35, t);
                t = n_38;
                t = default_system_about_0_0(t);
                t = term_m_7;
                n_34 = t;
                t = SSL_exit(n_34);
              }
            }
        }
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        {
          ATerm o_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
              static ATerm k_6 (ATerm t)
              {
                ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,i_2 = NULL;
                t_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_38);
                r_38 = t;
                t = s_38;
                if(((r_37 != NULL) && (r_37 != t)))
                  _fail(t);
                else
                  r_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_38);
                i_2 = t;
                t = SSLsetAnnotations(i_2, r_38);
                return(t);
              }
              t = fetch_1_0(k_6, t);
              t = term_v_6;
              p_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_37)), term_s_15);
              q_38 = t;
              t = SSL_printnl(p_38, q_38);
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_37)), term_s_15));
              t = default_system_usage_0_0(t);
              t = term_y_6;
              o_38 = t;
              t = SSL_exit(o_38);
              LocalPopChoice(r_15);
            }
          else
            {
              t = o_15;
            }
        }
      }
  }
  s_37 = t;
  t = term_f_12;
  u_37 = t;
  t = SSL_table_destroy(u_37);
  t = s_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  t = parse_options_1_0(p_111, t);
  y_38 = t;
  t = term_t_15;
  b_39 = t;
  t = SSL_table_create(b_39);
  t = term_t_15;
  z_38 = t;
  t = term_v_15;
  a_39 = t;
  t = SSL_table_put(z_38, a_39, y_38);
  t = y_38;
  t = r_111(t);
  {
    ATerm w_15 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_111, t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = w_15;
        {
          ATerm e_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_111(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = if_verbose2_1_0(r_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  t = term_g_16;
  c_39 = t;
  t = term_u_6;
  d_39 = t;
  t = term_h_16;
  t = i_6(c_39, d_39, t);
  t = term_i_16;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_j_16;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  e_39 = t;
  t = term_k_11;
  i_39 = t;
  t = term_s_12;
  j_39 = t;
  t = term_u_12;
  t = f_6(i_39, j_39, t);
  f_39 = t;
  t = term_v_6;
  g_39 = t;
  t = (ATerm) ATinsert(ATempty, f_39);
  h_39 = t;
  t = SSL_printnl(g_39, h_39);
  t = e_39;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  static ATerm l_6 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_110(t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm m_16 = t;
          int n_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(p_16);
                  }
                else
                  {
                    t = o_16;
                    {
                      ATerm r_16 = t;
                      int s_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(o_6, p_6, q_6, t);
                          LocalPopChoice(s_16);
                        }
                      else
                        {
                          t = r_16;
                          {
                            ATerm t_16 = t;
                            int v_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(v_16);
                              }
                            else
                              {
                                t = t_16;
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
  static ATerm n_6 (ATerm t)
  {
    ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
    l_39 = t;
    {
      ATerm w_16 = t;
      int x_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm s_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_39 != NULL) && (k_39 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_39 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_6, t);
          LocalPopChoice(x_16);
        }
      else
        {
          t = w_16;
          t = term_y_16;
          k_39 = t;
        }
    }
    t = not_null(k_39);
    t = ReadFromFile_0_0(t);
    m_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_39, m_39);
    t = apply_strategy_1_0(y_110, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_6, a_111, m_6, n_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm n_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,s_2 = NULL,o_2 = NULL,n_2 = NULL,m_2 = NULL,k_2 = NULL;
  g_40 = t;
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_40);
  n_39 = t;
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
  s_2 = t;
  t = SSLsetAnnotations(s_2, n_39);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_6, _fail, default_usage_0_0, t);
  return(t);
}

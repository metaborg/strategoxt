#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_Mod_2;
Symbol sym_SVar_1;
Symbol sym_Path_2;
Symbol sym_CallT_3;
Symbol sym_Call_2;
Symbol sym_ExtSDef_3;
Symbol sym_ExtSDefInl_4;
Symbol sym_SDefT_4;
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
Symbol sym_Hashtable_1;
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
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_n_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_g_12;
ATerm term_d_12;
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
ATerm term_m_11;
ATerm term_l_11;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_h_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_g_8;
ATerm term_a_8;
ATerm term_s_7;
ATerm term_l_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_s_7);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_7);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_a_7);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_h_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_b_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_u_12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_a_7);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_a_7);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_a_7);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__3, term_q_12, term_u_12, (ATerm) ATempty);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_q_14);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_a_7);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm topdown_1_0 (ATerm a_105 (ATerm), ATerm t);
static ATerm c_6 (ATerm j_137 (ATerm), ATerm y_69, ATerm w_69, ATerm t);
static ATerm e_6 (ATerm k_57, ATerm l_57, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm c_128 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm t);
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
static ATerm h_6 (ATerm j_34, ATerm k_34, ATerm t);
static ATerm i_6 (ATerm p_32, ATerm q_32, ATerm t);
static ATerm k_6 (ATerm o_112 (ATerm), ATerm v_243, ATerm v_32, ATerm t);
static ATerm j_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_132 (ATerm), ATerm t);
static ATerm k_27 (ATerm b_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_6 (ATerm r_32, ATerm t);
static ATerm m_6 (ATerm f_54, ATerm g_54, ATerm t);
static ATerm n_6 (ATerm l_34, ATerm m_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_29 (ATerm u_27, ATerm t);
static ATerm h_29 (ATerm a_28, ATerm d_28, ATerm e_28, ATerm t);
static ATerm i_29 (ATerm s_28, ATerm t_28, ATerm v_28, ATerm t);
static ATerm o_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_117 (ATerm), ATerm t);
static ATerm t_6 (ATerm s_58, ATerm t_58, ATerm t);
ATerm if_verbose2_1_0 (ATerm g_114 (ATerm), ATerm t);
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
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_6 (ATerm f_38, ATerm g_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_6 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_6 (ATerm b_41, ATerm c_41, ATerm t);
ATerm foldr_2_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_114 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm m_133 (ATerm), ATerm t);
static ATerm x_6 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm t);
static ATerm y_6 (ATerm u_61, ATerm v_61, ATerm t);
ATerm lookup_table_0_1 (ATerm l_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_61, ATerm a_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_6 (ATerm w_61, ATerm x_61, ATerm t);
static ATerm s_6 (ATerm b_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_117 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_135 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm parse_options_1_0 (ATerm j_135 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_133 (ATerm), ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm iowrap_3_0 (ATerm x_132 (ATerm), ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,i_0 = NULL,n_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_b_7;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), c_0), term_c_7);
  s_0 = t;
  t = SSL_printnl(n_0, s_0);
  t = term_e_7;
  i_0 = t;
  t = SSL_exit(i_0);
  t = a_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      o_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_1;
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      ATerm h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_1 = NULL,z_1 = NULL;
        t = term_l_7;
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_7, m_1);
        t = e_6(z_1, m_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm m_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_7) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            w_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_1;
        LocalPopChoice(k_7);
      }
    else
      {
        t = i_7;
        {
          ATerm n_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_2 = NULL,t_2 = NULL;
              t = term_l_7;
              t_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_l_7, m_1);
              t = e_6(t_2, m_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  p_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_2;
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
              {
                ATerm x_2 = NULL,b_3 = NULL;
                t = term_l_7;
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_l_7, m_1);
                t = e_6(b_3, m_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm q_7 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_7) != ATmakeSymbol("b_0", 0, ATtrue)))
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
  t = term_s_7;
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
  t = p_6(w_3, y_3, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_s_7;
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
  t = p_6(c_4, j_4, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(e_5, f_5, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_e_7;
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
          ATerm t_7 = t;
          int u_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATmakeAppl(sym__2, k_3, n_3));
              t = RenameVar_0_0(t);
              s_3 = t;
              LocalPopChoice(u_7);
            }
          else
            {
              t = t_7;
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
      ATerm b_5 = NULL,d_5 = NULL;
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
      b_5 = t;
      {
        ATerm v_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, b_4, b_5);
            t = RenameVar_0_0(t);
            d_5 = t;
            LocalPopChoice(x_7);
          }
        else
          {
            t = v_7;
            t = b_4;
            t = HoArg_0_0(t);
            d_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_5), d_4);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    t = topdown_1_0(a_105, t);
    return(t);
  }
  t = a_105(t);
  t = SRTS_all(n_1, t);
  return(t);
}
static ATerm c_6 (ATerm j_137 (ATerm), ATerm y_69, ATerm w_69, ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,s_4 = NULL,t_4 = NULL;
  l_4 = t;
  t = j_137(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_4, y_69, w_69);
  t = u_6(g_4, y_69, w_69, t);
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = term_a_8;
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_a_8);
        t = t_6(g_4, u_4, t);
        {
          ATerm b_8 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_8;
            }
        }
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
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
  t = (ATerm) ATmakeAppl(sym__3, g_4, term_a_8, (ATerm) ATinsert(CheckATermList(i_4), (ATerm) ATinsert(CheckATermList(h_4), y_69)));
  t = lookup_table_0_1(g_4, t);
  t_4 = t;
  t = term_a_8;
  n_4 = t;
  t = (ATerm) ATinsert(CheckATermList(i_4), (ATerm) ATinsert(CheckATermList(h_4), y_69));
  o_4 = t;
  t = t_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(n_4, o_4, s_4, t);
  t = l_4;
  return(t);
}
static ATerm e_6 (ATerm k_57, ATerm l_57, ATerm t)
{
  ATerm v_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
  t = t_6(k_57, l_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_4 = ATgetFirst((ATermList) t);
      {
        ATerm d_8 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        t = term_g_8;
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, w_7);
        t = e_6(j_7, w_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = w_7;
        _fail(t);
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        {
          ATerm h_8 = t;
          int i_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_7 = NULL,c_8 = NULL;
              t = term_g_8;
              c_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_g_8, w_7);
              t = e_6(c_8, w_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm j_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_8) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  r_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_7;
              LocalPopChoice(i_8);
            }
          else
            {
              t = h_8;
              {
                ATerm m_8 = t;
                int o_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_8 = NULL;
                    t = term_g_8;
                    r_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_g_8, w_7);
                    t = e_6(r_8, w_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = w_7;
                    _fail(t);
                    LocalPopChoice(o_8);
                  }
                else
                  {
                    t = m_8;
                    {
                      ATerm p_8 = t;
                      int q_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_8 = NULL,b_9 = NULL;
                          t = term_g_8;
                          b_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_g_8, w_7);
                          t = e_6(b_9, w_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm s_8 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) s_8) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              v_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = v_8;
                          LocalPopChoice(q_8);
                        }
                      else
                        {
                          t = p_8;
                          {
                            ATerm t_8 = t;
                            int u_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_9 = NULL;
                                t = term_g_8;
                                o_9 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_g_8, w_7);
                                t = e_6(o_9, w_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = w_7;
                                _fail(t);
                                LocalPopChoice(u_8);
                              }
                            else
                              {
                                t = t_8;
                                {
                                  ATerm t_9 = NULL,w_9 = NULL;
                                  t = term_g_8;
                                  w_9 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_g_8, w_7);
                                  t = e_6(w_9, w_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm w_8 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) w_8) != ATmakeSymbol("g_0", 0, ATtrue)))
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
ATerm Cify_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_8 = ATgetFirst((ATermList) t);
      l_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_8;
  if(match_int(t, 95))
    {
      ATerm n_8 = NULL;
      t = l_8;
      t = r_0(t);
      n_8 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_8), term_y_8), term_y_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm x_8 = NULL;
          t = l_8;
          t = r_0(t);
          x_8 = t;
          t = (ATerm) ATinsert(CheckATermList(x_8), term_y_8);
        }
      else
        {
          ATerm z_8 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = l_8;
          t = r_0(t);
          z_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_8), term_y_8), term_a_9), term_y_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm c_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  e_9 = t;
  t = SSL_explode_string(e_9);
  {
    static ATerm e_10 (ATerm t);
    static ATerm e_10 (ATerm t)
    {
      ATerm c_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_128(e_10, t);
          LocalPopChoice(f_9);
        }
      else
        {
          t = c_9;
          {
            ATerm a_10 = NULL,c_10 = NULL,d_10 = NULL;
            d_10 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_10 = ATgetFirst((ATermList) t);
                c_10 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm j_10 = NULL,o_10 = NULL,t_0 = NULL;
                  t = SSLgetAnnotations(d_10);
                  j_10 = t;
                  t = c_10;
                  t = e_10(t);
                  o_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_10), a_10);
                  t_0 = t;
                  t = SSLsetAnnotations(t_0, j_10);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_10;
              }
          }
        }
      return(t);
    }
    t = e_10(t);
  }
  d_9 = t;
  t = SSL_implode_string(d_9);
  return(t);
}
ATerm foldr_3_0 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm t)
{
  ATerm k_10 = NULL,n_10 = NULL,x_10 = NULL;
  k_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_10;
      t = z_122(t);
    }
  else
    {
      ATerm a_11 = NULL,c_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_10 = ATgetFirst((ATermList) t);
          x_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_10;
      t = b_123(t);
      a_11 = t;
      t = x_10;
      t = foldr_3_0(z_122, a_123, b_123, t);
      c_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_11, c_11);
      t = a_123(t);
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm t_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(t_12, v_12, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm w_12 = NULL,f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(w_12, f_13, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_g_8;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_g_8;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(a_16, b_16, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm d_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(d_16, f_16, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_g_8;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_g_8;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm q_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(q_19, x_19, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(y_19, z_19, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_g_8;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  l_20 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
      o_20 = ATgetArgument(t, 2);
      p_20 = ATgetArgument(t, 3);
      {
        ATerm e_12 = NULL,f_12 = NULL,h_12 = NULL,i_12 = NULL,m_12 = NULL,n_12 = NULL,p_12 = NULL,r_12 = NULL,s_12 = NULL,t_13 = NULL,u_13 = NULL;
        t = n_20;
        t = foldr_3_0(p_1, q_1, r_1, t);
        e_12 = t;
        t = o_20;
        t = foldr_3_0(t_1, v_1, x_1, t);
        f_12 = t;
        t = m_20;
        if(match_cons(t, sym_Mod_2))
          {
            t_13 = ATgetArgument(t, 0);
            u_13 = ATgetArgument(t, 1);
            {
              ATerm g_9 = t;
              int h_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_14 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_13), term_i_9), t_13);
                  s_14 = t;
                  t = SSL_concat_strings(s_14);
                  LocalPopChoice(h_9);
                }
              else
                {
                  t = g_9;
                  t = m_20;
                }
            }
          }
        else
          {
            t = m_20;
          }
        t = escape_1_0(Cify_1_0, t);
        i_12 = t;
        t = SSL_int_to_string(e_12);
        m_12 = t;
        t = SSL_int_to_string(f_12);
        n_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_12), term_j_9), m_12), term_j_9), i_12);
        s_12 = t;
        t = SSL_concat_strings(s_12);
        h_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym__2, e_12, f_12));
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, h_12);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym__2, e_12, f_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, h_12));
        t = c_6(y_1, p_12, r_12, t);
        t = h_12;
        {
          ATerm l_9 = t;
          int m_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_13 = NULL,z_13 = NULL;
              t = m_20;
              t = HoArg_0_0(t);
              y_13 = t;
              t = term_n_9;
              z_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_20, term_n_9);
              t = c_6(a_2, m_20, z_13, t);
              t = y_13;
              LocalPopChoice(m_9);
            }
          else
            {
              t = l_9;
              {
                ATerm a_14 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_9, h_12);
                a_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym_Defined_2, term_p_9, h_12));
                t = c_6(c_2, m_20, a_14, t);
                t = h_12;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, h_12, n_20, o_20, p_20);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          m_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
          o_20 = ATgetArgument(t, 2);
          {
            ATerm k_15 = NULL,m_15 = NULL,p_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,w_15 = NULL,x_15 = NULL,z_15 = NULL,s_16 = NULL,t_16 = NULL;
            t = n_20;
            t = foldr_3_0(e_2, f_2, h_2, t);
            k_15 = t;
            t = o_20;
            t = foldr_3_0(j_2, l_2, q_2, t);
            m_15 = t;
            t = m_20;
            if(match_cons(t, sym_Mod_2))
              {
                s_16 = ATgetArgument(t, 0);
                t_16 = ATgetArgument(t, 1);
                {
                  ATerm q_9 = t;
                  int r_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_16), term_i_9), s_16);
                      b_18 = t;
                      t = SSL_concat_strings(b_18);
                      LocalPopChoice(r_9);
                    }
                  else
                    {
                      t = q_9;
                      t = m_20;
                    }
                }
              }
            else
              {
                t = m_20;
              }
            t = escape_1_0(Cify_1_0, t);
            r_15 = t;
            t = SSL_int_to_string(k_15);
            s_15 = t;
            t = SSL_int_to_string(m_15);
            t_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_15), term_j_9), s_15), term_j_9), r_15);
            z_15 = t;
            t = SSL_concat_strings(z_15);
            p_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym__2, k_15, m_15));
            w_15 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_9, p_15);
            x_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym__2, k_15, m_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_s_9, p_15));
            t = c_6(r_2, w_15, x_15, t);
            t = p_15;
            {
              ATerm u_9 = t;
              int v_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_16 = NULL,b_17 = NULL;
                  t = m_20;
                  t = HoArg_0_0(t);
                  x_16 = t;
                  t = term_n_9;
                  b_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_20, term_n_9);
                  t = c_6(u_2, m_20, b_17, t);
                  t = x_16;
                  LocalPopChoice(v_9);
                }
              else
                {
                  t = u_9;
                  {
                    ATerm c_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_9, p_15);
                    c_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym_Defined_2, term_x_9, p_15));
                    t = c_6(v_2, m_20, c_17, t);
                    t = p_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, p_15, n_20, o_20);
          }
        }
      else
        {
          ATerm y_18 = NULL,c_19 = NULL,e_19 = NULL,f_19 = NULL,i_19 = NULL,j_19 = NULL,l_19 = NULL,m_19 = NULL,o_19 = NULL,f_20 = NULL,h_20 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              m_20 = ATgetArgument(t, 0);
              n_20 = ATgetArgument(t, 1);
              o_20 = ATgetArgument(t, 2);
              p_20 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = n_20;
          t = foldr_3_0(w_2, y_2, z_2, t);
          y_18 = t;
          t = o_20;
          t = foldr_3_0(a_3, c_3, d_3, t);
          c_19 = t;
          t = m_20;
          if(match_cons(t, sym_Mod_2))
            {
              f_20 = ATgetArgument(t, 0);
              h_20 = ATgetArgument(t, 1);
              {
                ATerm y_9 = t;
                int z_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_21 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_20), term_i_9), f_20);
                    q_21 = t;
                    t = SSL_concat_strings(q_21);
                    LocalPopChoice(z_9);
                  }
                else
                  {
                    t = y_9;
                    t = m_20;
                  }
              }
            }
          else
            {
              t = m_20;
            }
          t = escape_1_0(Cify_1_0, t);
          f_19 = t;
          t = SSL_int_to_string(y_18);
          i_19 = t;
          t = SSL_int_to_string(c_19);
          j_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_19), term_j_9), i_19), term_j_9), f_19);
          o_19 = t;
          t = SSL_concat_strings(o_19);
          e_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym__2, y_18, c_19));
          l_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_10, e_19);
          m_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym__2, y_18, c_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_b_10, e_19));
          t = c_6(e_3, l_19, m_19, t);
          t = e_19;
          {
            ATerm f_10 = t;
            int g_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_20 = NULL,u_20 = NULL;
                t = m_20;
                t = HoArg_0_0(t);
                s_20 = t;
                t = term_n_9;
                u_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_20, term_n_9);
                t = c_6(f_3, m_20, u_20, t);
                t = s_20;
                LocalPopChoice(g_10);
              }
            else
              {
                t = f_10;
                {
                  ATerm v_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_10, e_19);
                  v_20 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATmakeAppl(sym_Defined_2, term_h_10, e_19));
                  t = c_6(g_3, m_20, v_20, t);
                  t = e_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, e_19, n_20, o_20, p_20);
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
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(l_10);
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
static ATerm h_6 (ATerm j_34, ATerm k_34, ATerm t)
{
  ATerm m_21 = NULL;
  t = SSL_fputc(j_34, k_34);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_21);
  return(t);
}
static ATerm i_6 (ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm n_21 = NULL;
  t = SSL_write_term_to_stream_text(p_32, q_32);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_21);
  return(t);
}
static ATerm k_6 (ATerm o_112 (ATerm), ATerm v_243, ATerm v_32, ATerm t)
{
  ATerm o_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_243, term_m_10);
  t = o_6(t);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_21, v_32);
  t = o_112(t);
  t = fclose_0_0(t);
  t = v_32;
  return(t);
}
static ATerm j_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm r_21 = NULL;
  t = SSL_write_term_to_stream_baf(l_32, m_32);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_21);
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
  ATerm q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      if(match_cons(p_10, sym_Stream_1))
        {
          q_22 = ATgetArgument(p_10, 0);
        }
      else
        _fail(t);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(q_22, r_22, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(match_cons(q_10, sym_Stream_1))
        {
          k_23 = ATgetArgument(q_10, 0);
        }
      else
        _fail(t);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(k_23, l_23, t);
  h_23 = t;
  t = term_r_10;
  i_23 = t;
  t = h_23;
  if(match_cons(t, sym_Stream_1))
    {
      j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, h_23);
  t = h_6(i_23, j_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,c_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,l_22 = NULL,m_22 = NULL,q_25 = NULL,v_25 = NULL,x_0 = NULL,w_0 = NULL;
  x_21 = t;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_21);
  h_22 = t;
  t = i_22;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_3 (ATerm t);
        static ATerm j_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_21 != NULL) && (w_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_3, t);
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = term_u_10;
        w_21 = t;
      }
  }
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, l_22);
  w_0 = t;
  t = SSLsetAnnotations(w_0, h_22);
  t = x_21;
  if(match_cons(t, sym__2))
    {
      z_21 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_21);
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_21, (ATerm) ATmakeAppl(sym__2, not_null(w_21), c_22));
  x_0 = t;
  t = SSLsetAnnotations(x_0, y_21);
  g_22 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL,e_22 = NULL,j_22 = NULL,k_22 = NULL,p_22 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(g_22);
        a_22 = t;
        t = q_25;
        t = fetch_1_0(l_3, t);
        e_22 = t;
        t = v_25;
        if(match_cons(t, sym__2))
          {
            k_22 = ATgetArgument(t, 0);
            p_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_6(m_3, k_22, p_22, t);
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_22, j_22);
        y_0 = t;
        t = SSLsetAnnotations(y_0, a_22);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        {
          ATerm w_22 = NULL,a_23 = NULL,c_23 = NULL,g_23 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(g_22);
          w_22 = t;
          t = v_25;
          if(match_cons(t, sym__2))
            {
              c_23 = ATgetArgument(t, 0);
              g_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_6(o_3, c_23, g_23, t);
          a_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_25, a_23);
          z_0 = t;
          t = SSLsetAnnotations(z_0, w_22);
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
ATerm apply_strategy_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,h_26 = NULL,i_26 = NULL,m_26 = NULL,o_26 = NULL;
  o_26 = t;
  t = dtime_0_0(t);
  t = o_26;
  t = o_132(t);
  m_26 = t;
  t = dtime_0_0(t);
  f_26 = t;
  t = m_26;
  if(match_cons(t, sym__2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_26), (ATerm) ATmakeAppl(sym_Runtime_1, f_26)), i_26);
  return(t);
}
static ATerm k_27 (ATerm b_27, ATerm t)
{
  t = SSL_fclose(b_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_27 = ATgetArgument(t, 0);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_27);
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            t = k_27(i_27, t);
          }
      }
    }
  else
    {
      t = k_27(i_27, t);
    }
  return(t);
}
static ATerm l_6 (ATerm r_32, ATerm t)
{
  t = SSL_read_term_from_stream(r_32);
  return(t);
}
static ATerm m_6 (ATerm f_54, ATerm g_54, ATerm t)
{
  t = SSL_strcat(f_54, g_54);
  return(t);
}
static ATerm n_6 (ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_fopen(l_34, m_34);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  t = SSL_stdin_stream();
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  t = SSL_stdout_stream();
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_27 = NULL;
  t = SSL_stderr_stream();
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_27);
  return(t);
}
static ATerm g_29 (ATerm u_27, ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_explode_term(u_27);
  if(match_cons(t, sym__2))
    {
      ATerm b_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_11 = ATgetArgument(t, 1);
        if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
          {
            v_27 = ATgetFirst((ATermList) d_11);
            {
              ATerm e_11 = (ATerm) ATgetNext((ATermList) d_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_29 (ATerm a_28, ATerm d_28, ATerm e_28, ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,l_28 = NULL,o_28 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(e_28);
  l_28 = t;
  t = a_28;
  if(match_cons(t, sym_Path_1))
    {
      o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_28, d_28);
  e_1 = t;
  t = SSLsetAnnotations(e_1, l_28);
  if(match_cons(t, sym__2))
    {
      h_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(h_28, i_28, t);
  return(t);
}
static ATerm i_29 (ATerm s_28, ATerm t_28, ATerm v_28, ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,b_29 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(v_28);
  y_28 = t;
  t = SSL_is_string(s_28);
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, t_28);
  f_1 = t;
  t = SSLsetAnnotations(f_1, y_28);
  if(match_cons(t, sym__2))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(w_28, x_28, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  if(match_cons(t, sym__2))
    {
      e_29 = ATgetArgument(t, 0);
      f_29 = ATgetArgument(t, 1);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_29(d_29, t);
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
                  t = h_29(e_29, f_29, d_29, t);
                  LocalPopChoice(i_11);
                }
              else
                {
                  t = h_11;
                  t = i_29(e_29, f_29, d_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_29(d_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,r_29 = NULL;
  r_29 = t;
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_29, term_l_11);
        t = o_6(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          ATerm b_24 = NULL,c_24 = NULL;
          t = term_m_11;
          c_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_11, r_29);
          t = m_6(c_24, r_29, t);
          b_24 = t;
          t = SSL_perror(b_24);
          _fail(t);
        }
      }
  }
  l_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(m_29, t);
  k_29 = t;
  t = l_29;
  t = fclose_0_0(t);
  t = k_29;
  return(t);
}
ATerm fetch_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  static ATerm q_30 (ATerm t);
  static ATerm q_30 (ATerm t)
  {
    ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
    n_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_30 = ATgetFirst((ATermList) t);
        p_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_11 = t;
      int o_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_24 = NULL,p_24 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(n_30);
          j_24 = t;
          t = o_30;
          t = k_117(t);
          p_24 = t;
          t = (ATerm) ATinsert(CheckATermList(p_30), p_24);
          i_1 = t;
          t = SSLsetAnnotations(i_1, j_24);
          LocalPopChoice(o_11);
        }
      else
        {
          t = n_11;
          {
            ATerm x_24 = NULL,a_25 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(n_30);
            x_24 = t;
            t = p_30;
            t = q_30(t);
            a_25 = t;
            t = (ATerm) ATinsert(CheckATermList(a_25), o_30);
            j_1 = t;
            t = SSLsetAnnotations(j_1, x_24);
          }
        }
    }
    return(t);
  }
  t = q_30(t);
  return(t);
}
static ATerm t_6 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm t_30 = NULL;
  t = lookup_table_0_1(s_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(t_58, t_30, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
        t = term_r_11;
        z_30 = t;
        t = term_s_11;
        a_31 = t;
        t = term_t_11;
        t = t_6(z_30, a_31, t);
        y_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_30, term_u_11);
        t = geq_0_0(t);
        t = w_30;
        t = g_114(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = w_30;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  if(match_string(t, "-k"))
    {
      t = d_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_31;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  t = SSL_string_to_int(e_31);
  f_31 = t;
  t = term_v_11;
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, f_31);
  t = w_6(g_31, f_31, t);
  t = e_31;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_3, q_3, r_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  if(match_string(t, "-S"))
    {
      t = i_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_31;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL;
  t = term_s_11;
  j_31 = t;
  t = term_s_7;
  k_31 = t;
  t = term_x_11;
  t = w_6(j_31, k_31, t);
  t = term_y_11;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_z_11;
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
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  l_31 = t;
  t = SSL_string_to_int(l_31);
  m_31 = t;
  t = term_s_11;
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, m_31);
  t = w_6(n_31, m_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_31);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  t = term_b_12;
  o_31 = t;
  t = term_a_7;
  p_31 = t;
  t = term_c_12;
  t = w_6(o_31, p_31, t);
  t = term_d_12;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_3, u_3, v_3, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm l_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, k_4, t);
            LocalPopChoice(o_12);
          }
        else
          {
            t = l_12;
            t = Option_3_0(m_4, p_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  t = term_r_11;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_11, f_38, g_38);
  t = lookup_table_0_1(q_31, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(f_38, g_38, r_31, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_11, f_38, g_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
      t = term_a_7;
      t = f_0(t);
      x_31 = t;
      t = term_q_12;
      y_31 = t;
      t = term_u_12;
      z_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_u_12, x_31);
      t = u_6(y_31, z_31, x_31, t);
      _fail(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_31 = ATgetFirst((ATermList) t);
          w_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_31;
      t = d_0(t);
      t = term_a_7;
      t = e_0(t);
      c_32 = t;
      t = (ATerm) ATinsert(CheckATermList(w_31), c_32);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  if(match_string(t, "-o"))
    {
      t = e_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_32;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  f_32 = t;
  t = term_x_12;
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, f_32);
  t = w_6(g_32, f_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_32);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, w_4, x_4, t);
  return(t);
}
static ATerm u_6 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,n_32 = NULL,o_32 = NULL;
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_13 = ATgetArgument(t, 0);
            ATerm c_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
        t = t_6(z_56, a_57, t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        t = (ATerm) ATempty;
      }
  }
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_56, a_57, (ATerm) ATinsert(CheckATermList(j_32), y_56));
  t = lookup_table_0_1(z_56, t);
  o_32 = t;
  t = (ATerm) ATinsert(CheckATermList(j_32), y_56);
  k_32 = t;
  t = o_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(a_57, k_32, n_32, t);
  t = i_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
      t = term_a_7;
      t = q_0(t);
      e_33 = t;
      t = term_q_12;
      f_33 = t;
      t = term_u_12;
      g_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_u_12, e_33);
      t = u_6(f_33, g_33, e_33, t);
      _fail(t);
    }
  else
    {
      ATerm k_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_33 = ATgetFirst((ATermList) t);
          b_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_33 = ATgetFirst((ATermList) t);
          d_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_33;
      t = l_0(t);
      t = c_33;
      t = o_0(t);
      k_33 = t;
      t = (ATerm) ATinsert(CheckATermList(d_33), k_33);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  if(match_string(t, "-i"))
    {
      t = m_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_33;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  n_33 = t;
  t = term_d_13;
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, n_33);
  t = w_6(o_33, n_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_33);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, z_4, a_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_7;
  t = whoami_0_0(t);
  p_33 = t;
  t = term_b_7;
  r_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_13), p_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = term_e_7;
  q_33 = t;
  t = SSL_exit(q_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t = term_r_11;
  t_33 = t;
  t = term_h_13;
  u_33 = t;
  t = term_i_13;
  t = t_6(t_33, u_33, t);
  return(t);
}
static ATerm p_6 (ATerm b_41, ATerm c_41, ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_41, c_41);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = SSL_addr(b_41, c_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_122 (ATerm), ATerm y_122 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_33;
      t = x_122(t);
    }
  else
    {
      ATerm b_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_33 = ATgetFirst((ATermList) t);
          y_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_33;
      t = foldr_2_0(x_122, y_122, t);
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_33, b_34);
      t = y_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_s_7;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(s_25, t_25, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_34 = NULL,l_25 = NULL,m_25 = NULL;
  t = times_0_0(t);
  m_25 = t;
  t = SSL_explode_term(m_25);
  if(match_cons(t, sym__2))
    {
      ATerm l_13 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_25;
  t = foldr_2_0(c_5, g_5, t);
  e_34 = t;
  t = SSL_TicksToSeconds(e_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  if(match_cons(t, sym__2))
    {
      w_34 = ATgetArgument(t, 0);
      x_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_34;
        if((w_34 != t))
          {
            _fail(t);
          }
        t = v_34;
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_34, x_34);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = SSL_gtr(w_34, x_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_34, x_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm b_35 = NULL;
  b_35 = t;
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
        t = term_r_11;
        e_35 = t;
        t = term_s_11;
        f_35 = t;
        t = term_t_11;
        t = t_6(e_35, f_35, t);
        d_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_35, term_e_7);
        t = geq_0_0(t);
        t = b_35;
        t = f_114(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = b_35;
      }
  }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,k_35 = NULL,l_35 = NULL;
  t = run_time_0_0(t);
  h_35 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  i_35 = t;
  t = term_b_7;
  k_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), h_35), term_s_13), i_35);
  l_35 = t;
  t = SSL_printnl(k_35, l_35);
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_13), h_35), term_s_13), i_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_7;
  m_35 = t;
  t = SSL_exit(m_35);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  x_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_35 = ATgetArgument(t, 0);
          {
            ATerm l_26 = NULL,s_1 = NULL;
            t = SSLgetAnnotations(x_35);
            l_26 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_35);
            s_1 = t;
            t = SSLsetAnnotations(s_1, l_26);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_133 (ATerm), ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_35 = NULL,q_35 = NULL;
      t = term_r_11;
      p_35 = t;
      t = term_b_14;
      q_35 = t;
      t = term_c_14;
      t = t_6(p_35, q_35, t);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = fetch_1_0(i_5, t);
    }
  t = m_133(t);
  return(t);
}
static ATerm x_6 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm t)
{
  ATerm z_35 = NULL;
  t = SSL_hashtable_put(t_61, r_61, s_61);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_35);
  return(t);
}
static ATerm y_6 (ATerm u_61, ATerm v_61, ATerm t)
{
  t = SSL_hashtable_get(v_61, u_61);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_58, ATerm t)
{
  ATerm i_36 = NULL;
  t = table_hashtable_0_0(t);
  i_36 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL;
        t = i_36;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_6(l_58, t_26, t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          ATerm e_27 = NULL;
          t = l_58;
          t = table_create_0_0(t);
          t = i_36;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_6(l_58, e_27, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm l_36 = NULL;
  t = SSL_hashtable_create(z_61, a_62);
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_36);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,q_36 = NULL,r_36 = NULL;
  m_36 = t;
  t = term_f_14;
  q_36 = t;
  t = term_g_14;
  r_36 = t;
  t = m_36;
  t = new_hashtable_0_2(q_36, r_36, t);
  n_36 = t;
  t = m_36;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(m_36, n_36, o_36, t);
  t = m_36;
  return(t);
}
static ATerm r_6 (ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_hashtable_remove(x_61, w_61);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_36);
  return(t);
}
static ATerm s_6 (ATerm b_62, ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_hashtable_destroy(b_62);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_36 = NULL;
  t = SSL_table_hashtable();
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  v_36 = t;
  t = table_hashtable_0_0(t);
  w_36 = t;
  t = lookup_table_0_1(v_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(y_36, t);
  t = w_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(v_36, x_36, t);
  t = v_36;
  return(t);
}
ATerm map_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  static ATerm n_37 (ATerm t);
  static ATerm n_37 (ATerm t)
  {
    ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
    k_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_37;
      }
    else
      {
        ATerm s_27 = NULL,y_27 = NULL,b_28 = NULL,u_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_37 = ATgetFirst((ATermList) t);
            m_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_37);
        s_27 = t;
        t = l_37;
        t = a_117(t);
        y_27 = t;
        t = m_37;
        t = n_37(t);
        b_28 = t;
        t = (ATerm) ATinsert(CheckATermList(b_28), y_27);
        u_1 = t;
        t = SSLsetAnnotations(u_1, s_27);
      }
    return(t);
  }
  t = n_37(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_37 = ATgetFirst((ATermList) t);
      r_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_37 = NULL,w_37 = NULL;
        static ATerm j_5 (ATerm t);
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_37)), not_null(w_37));
          return(t);
        }
        t = r_37;
        t = k_0(t);
        if(((v_37 != NULL) && (v_37 != t)))
          _fail(t);
        else
          v_37 = t;
        t = q_37;
        t = h_0(t);
        if(((w_37 != NULL) && (w_37 != t)))
          _fail(t);
        else
          w_37 = t;
        t = r_37;
        t = reverse_acc_2_0(h_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_7;
      t = k_0(t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,b_2 = NULL;
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
  b_2 = t;
  t = SSLsetAnnotations(b_2, c_38);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_38), term_h_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_38 = NULL,b_38 = NULL;
      t = term_r_11;
      a_38 = t;
      t = term_h_13;
      b_38 = t;
      t = term_i_13;
      t = t_6(a_38, b_38, t);
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      t = fetch_1_0(k_5, t);
    }
  t = term_k_14;
  t = echo_0_0(t);
  t = term_q_12;
  y_37 = t;
  t = term_u_12;
  z_37 = t;
  t = term_l_14;
  t = t_6(y_37, z_37, t);
  t = reverse_acc_2_0(_id, l_5, t);
  t = map_1_0(m_5, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_38;
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
            t = k_38;
          }
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, k_38);
      }
  }
  l_38 = t;
  t = term_u_10;
  m_38 = t;
  t = SSL_printnl(m_38, l_38);
  t = k_38;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  t = term_r_11;
  q_38 = t;
  t = term_h_13;
  r_38 = t;
  t = term_i_13;
  t = t_6(q_38, r_38, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  t = term_q_14;
  s_38 = t;
  t = term_a_7;
  t_38 = t;
  t = term_r_14;
  t = w_6(s_38, t_38, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_t_14;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t = term_q_14;
  w_38 = t;
  t = term_a_7;
  x_38 = t;
  t = term_r_14;
  t = w_6(w_38, x_38, t);
  t = term_u_14;
  u_38 = t;
  t = term_a_7;
  v_38 = t;
  t = term_v_14;
  t = w_6(u_38, v_38, t);
  t = term_w_14;
  return(t);
}
static ATerm s_5 (ATerm t)
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
      t = Option_3_0(n_5, o_5, p_5, t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      t = Option_3_0(q_5, r_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,d_2 = NULL;
  d_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_38 = ATgetFirst((ATermList) t);
      a_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_39);
  y_38 = t;
  t = z_38;
  t = f_90(t);
  b_39 = t;
  t = a_39;
  t = g_90(t);
  c_39 = t;
  t = (ATerm) ATinsert(CheckATermList(c_39), b_39);
  d_2 = t;
  t = SSLsetAnnotations(d_2, y_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_135 (ATerm), ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,n_39 = NULL,o_39 = NULL,g_2 = NULL;
  i_39 = t;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_15;
        t = k_135(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
      }
  }
  t = i_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_39 = ATgetFirst((ATermList) t);
      l_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_39);
  j_39 = t;
  t = term_h_13;
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, k_39);
  t = w_6(o_39, k_39, t);
  t = l_39;
  {
    static ATerm y_39 (ATerm t);
    static ATerm y_39 (ATerm t)
    {
      ATerm d_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_39 = NULL;
              r_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_39;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              t = k_135(t);
              t = Cons_2_0(_id, y_39, t);
            }
          LocalPopChoice(e_15);
        }
      else
        {
          t = d_15;
          {
            ATerm u_39 = NULL,v_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_39 = ATgetFirst((ATermList) t);
                v_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_39), (ATerm) ATmakeAppl(sym_Undefined_1, u_39));
          }
        }
      return(t);
    }
    t = y_39(t);
  }
  n_39 = t;
  t = (ATerm) ATinsert(CheckATermList(n_39), (ATerm) ATmakeAppl(sym_Program_1, k_39));
  g_2 = t;
  t = SSLsetAnnotations(g_2, j_39);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
  if(match_string(t, "--help"))
    {
      t = l_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_40;
        }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL;
  t = term_b_14;
  m_40 = t;
  t = term_a_7;
  n_40 = t;
  t = term_h_15;
  t = w_6(m_40, n_40, t);
  t = term_i_15;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_j_15;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  f_40 = t;
  t = term_q_12;
  g_40 = t;
  t = term_l_15;
  t = lookup_table_0_1(g_40, t);
  k_40 = t;
  t = term_u_12;
  h_40 = t;
  t = (ATerm) ATempty;
  i_40 = t;
  t = k_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(h_40, i_40, j_40, t);
  t = f_40;
  {
    static ATerm t_5 (ATerm t);
    static ATerm t_5 (ATerm t)
    {
      ATerm n_15 = t;
      int o_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_135(t);
          LocalPopChoice(o_15);
        }
      else
        {
          t = n_15;
          {
            ATerm q_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, v_5, w_5, t);
                LocalPopChoice(u_15);
              }
            else
              {
                t = q_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_5, t);
  }
  {
    ATerm v_15 = t;
    int y_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_40 = NULL;
        y_40 = t;
        {
          ATerm c_16 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_28 = NULL;
              t = y_40;
              {
                ATerm g_16 = t;
                int h_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_28 = NULL,j_29 = NULL;
                    t = term_r_11;
                    u_28 = t;
                    t = term_b_14;
                    j_29 = t;
                    t = term_c_14;
                    t = t_6(u_28, j_29, t);
                    LocalPopChoice(h_16);
                  }
                else
                  {
                    t = g_16;
                    t = fetch_1_0(x_5, t);
                  }
              }
              t = y_40;
              t = default_system_usage_0_0(t);
              t = term_s_7;
              r_28 = t;
              t = SSL_exit(r_28);
              LocalPopChoice(e_16);
            }
          else
            {
              t = c_16;
              {
                ATerm v_30 = NULL,c_31 = NULL,h_31 = NULL;
                t = term_r_11;
                c_31 = t;
                t = term_q_14;
                h_31 = t;
                t = term_i_16;
                t = t_6(c_31, h_31, t);
                t = y_40;
                t = default_system_about_0_0(t);
                t = term_s_7;
                v_30 = t;
                t = SSL_exit(v_30);
              }
            }
        }
        LocalPopChoice(y_15);
      }
    else
      {
        t = v_15;
        {
          ATerm j_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_40 = NULL,a_41 = NULL,d_41 = NULL;
              static ATerm y_5 (ATerm t);
              static ATerm y_5 (ATerm t)
              {
                ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,i_2 = NULL;
                g_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_41);
                e_41 = t;
                t = f_41;
                if(((d_40 != NULL) && (d_40 != t)))
                  _fail(t);
                else
                  d_40 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_41);
                i_2 = t;
                t = SSLsetAnnotations(i_2, e_41);
                return(t);
              }
              t = fetch_1_0(y_5, t);
              t = term_b_7;
              a_41 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_40)), term_l_16);
              d_41 = t;
              t = SSL_printnl(a_41, d_41);
              t = (ATerm) ATmakeAppl(sym__2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_40)), term_l_16));
              t = default_system_usage_0_0(t);
              t = term_e_7;
              z_40 = t;
              t = SSL_exit(z_40);
              LocalPopChoice(k_16);
            }
          else
            {
              t = j_16;
            }
        }
      }
  }
  e_40 = t;
  t = term_q_12;
  t = table_destroy_0_0(t);
  t = e_40;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_133 (ATerm), ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  t = parse_options_1_0(o_133, t);
  l_41 = t;
  t = term_m_16;
  t = table_create_0_0(t);
  t = term_m_16;
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_16, term_n_16, l_41);
  t = lookup_table_0_1(m_41, t);
  p_41 = t;
  t = term_n_16;
  n_41 = t;
  t = p_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(n_41, l_41, o_41, t);
  t = l_41;
  t = q_133(t);
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_133, t);
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
              t = r_133(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_16);
            }
          else
            {
              t = q_16;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = if_verbose2_1_0(q_6, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL;
  t = term_u_16;
  q_41 = t;
  t = term_a_7;
  r_41 = t;
  t = term_v_16;
  t = w_6(q_41, r_41, t);
  t = term_w_16;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  s_41 = t;
  t = term_r_11;
  w_41 = t;
  t = term_h_13;
  x_41 = t;
  t = term_i_13;
  t = t_6(w_41, x_41, t);
  t_41 = t;
  t = term_b_7;
  u_41 = t;
  t = (ATerm) ATinsert(ATempty, t_41);
  v_41 = t;
  t = SSL_printnl(u_41, v_41);
  t = s_41;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_132 (ATerm), ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm t)
{
  static ATerm z_5 (ATerm t);
  static ATerm b_6 (ATerm t);
  static ATerm z_5 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_132(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              {
                ATerm f_17 = t;
                int g_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(g_17);
                  }
                else
                  {
                    t = f_17;
                    {
                      ATerm h_17 = t;
                      int i_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(d_6, f_6, g_6, t);
                          LocalPopChoice(i_17);
                        }
                      else
                        {
                          t = h_17;
                          {
                            ATerm j_17 = t;
                            int k_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(k_17);
                              }
                            else
                              {
                                t = j_17;
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
  static ATerm b_6 (ATerm t)
  {
    ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
    z_41 = t;
    {
      ATerm l_17 = t;
      int m_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_6 (ATerm t);
          static ATerm v_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_41 != NULL) && (y_41 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_6, t);
          LocalPopChoice(m_17);
        }
      else
        {
          t = l_17;
          t = term_n_17;
          y_41 = t;
        }
    }
    t = not_null(y_41);
    t = ReadFromFile_0_0(t);
    a_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
    t = apply_strategy_1_0(x_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_5, z_132, a_6, b_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,s_2 = NULL,o_2 = NULL,n_2 = NULL,m_2 = NULL,k_2 = NULL;
  u_42 = t;
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_42);
  b_42 = t;
  t = d_42;
  if(match_cons(t, sym_Specification_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_42);
  e_42 = t;
  t = f_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_42 = ATgetFirst((ATermList) t);
      k_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_42);
  i_42 = t;
  t = k_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_42 = ATgetFirst((ATermList) t);
      o_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_42);
  m_42 = t;
  t = n_42;
  if(match_cons(t, sym_Strategies_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_42);
  q_42 = t;
  t = r_42;
  t = rename_sdefs_0_0(t);
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_42);
  k_2 = t;
  t = SSLsetAnnotations(k_2, q_42);
  t_42 = t;
  t = o_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_42), t_42);
  m_2 = t;
  t = SSLsetAnnotations(m_2, m_42);
  p_42 = t;
  t = (ATerm) ATinsert(CheckATermList(p_42), j_42);
  n_2 = t;
  t = SSLsetAnnotations(n_2, i_42);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_42);
  o_2 = t;
  t = SSLsetAnnotations(o_2, e_42);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_42, g_42);
  s_2 = t;
  t = SSLsetAnnotations(s_2, b_42);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_6, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_x_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_j_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_b_8;
ATerm term_v_7;
ATerm term_o_7;
ATerm term_i_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_o_7);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_7);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_t_6);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_t_6);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_t_6);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_t_6);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__3, term_n_12, term_o_12, (ATerm) ATempty);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_w_14);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_g_11, term_f_14);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_t_6);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm RenameVar_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm RenameCall_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_117 (ATerm), ATerm t);
static ATerm t_5 (ATerm y_137 (ATerm), ATerm z_69, ATerm x_69, ATerm t);
static ATerm v_5 (ATerm k_57, ATerm l_57, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm d_128 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm RenameSDef_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm rename_sdefs_0_0 (ATerm t);
static ATerm y_5 (ATerm j_34, ATerm k_34, ATerm t);
static ATerm z_5 (ATerm p_32, ATerm q_32, ATerm t);
static ATerm b_6 (ATerm p_112 (ATerm), ATerm k_244, ATerm v_32, ATerm t);
static ATerm a_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_132 (ATerm), ATerm t);
static ATerm t_27 (ATerm h_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_6 (ATerm r_32, ATerm t);
static ATerm d_6 (ATerm f_54, ATerm g_54, ATerm t);
static ATerm e_6 (ATerm l_34, ATerm m_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_29 (ATerm g_28, ATerm t);
static ATerm i_29 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t);
static ATerm j_29 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t);
static ATerm f_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_117 (ATerm), ATerm t);
static ATerm k_6 (ATerm s_58, ATerm t_58, ATerm t);
ATerm if_verbose2_1_0 (ATerm h_114 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_6 (ATerm f_38, ATerm g_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_6 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_6 (ATerm b_41, ATerm c_41, ATerm t);
ATerm foldr_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_114 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_6 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm t);
static ATerm p_6 (ATerm u_61, ATerm v_61, ATerm t);
ATerm lookup_table_0_1 (ATerm l_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm z_61, ATerm a_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_6 (ATerm w_61, ATerm x_61, ATerm t);
static ATerm j_6 (ATerm b_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_135 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm parse_options_3_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm iowrap_3_0 (ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,i_0 = NULL,n_0 = NULL,q_0 = NULL;
  a_0 = t;
  t = term_t_6;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_u_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_6), c_0), term_v_6);
  q_0 = t;
  t = SSL_printnl(n_0, q_0);
  t = term_x_6;
  i_0 = t;
  t = SSL_exit(i_0);
  t = a_0;
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
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
        ATerm u_1 = NULL,x_1 = NULL;
        t = term_i_7;
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_7, k_1);
        t = v_5(x_1, k_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_7 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            u_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_1;
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
              ATerm n_2 = NULL,q_2 = NULL;
              t = term_i_7;
              q_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_7, k_1);
              t = v_5(q_2, k_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm m_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) m_7) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  n_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_2;
              LocalPopChoice(l_7);
            }
          else
            {
              t = k_7;
              {
                ATerm u_2 = NULL,y_2 = NULL;
                t = term_i_7;
                y_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_7, k_1);
                t = v_5(y_2, k_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm n_7 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_7) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    u_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_2;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm q_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(q_3, u_3, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm w_3 = NULL,a_4 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(w_3, a_4, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm a_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      a_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(a_5, d_5, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL;
  y_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      z_3 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
      x_3 = ATgetArgument(t, 2);
      {
        ATerm h_3 = NULL,i_3 = NULL,n_3 = NULL;
        t = z_3;
        if(match_cons(t, sym_SVar_1))
          {
            b_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_4;
        t = foldr_3_0(s_0, v_0, a_1, t);
        h_3 = t;
        t = x_3;
        t = foldr_3_0(b_1, c_1, d_1, t);
        i_3 = t;
        {
          ATerm p_7 = t;
          int q_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATmakeAppl(sym__2, h_3, i_3));
              t = RenameVar_0_0(t);
              n_3 = t;
              LocalPopChoice(q_7);
            }
          else
            {
              t = p_7;
              t = b_4;
              t = HoArg_0_0(t);
              n_3 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_3), c_4, x_3);
      }
    }
  else
    {
      ATerm r_4 = NULL,w_4 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          z_3 = ATgetArgument(t, 0);
          c_4 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_3;
      if(match_cons(t, sym_SVar_1))
        {
          b_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_4;
      t = foldr_3_0(g_1, h_1, l_1, t);
      r_4 = t;
      {
        ATerm r_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, b_4, r_4);
            t = RenameVar_0_0(t);
            w_4 = t;
            LocalPopChoice(s_7);
          }
        else
          {
            t = r_7;
            t = b_4;
            t = HoArg_0_0(t);
            w_4 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_4), c_4);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    t = topdown_1_0(b_105, t);
    return(t);
  }
  t = b_105(t);
  t = SRTS_all(n_1, t);
  return(t);
}
ATerm map_1_0 (ATerm b_117 (ATerm), ATerm t)
{
  static ATerm i_5 (ATerm t);
  static ATerm i_5 (ATerm t)
  {
    ATerm z_4 = NULL,b_5 = NULL,c_5 = NULL;
    z_4 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_4;
      }
    else
      {
        ATerm m_5 = NULL,s_5 = NULL,u_5 = NULL,r_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_5 = ATgetFirst((ATermList) t);
            c_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_4);
        m_5 = t;
        t = b_5;
        t = b_117(t);
        s_5 = t;
        t = c_5;
        t = i_5(t);
        u_5 = t;
        t = (ATerm) ATinsert(CheckATermList(u_5), s_5);
        r_0 = t;
        t = SSLsetAnnotations(r_0, m_5);
      }
    return(t);
  }
  t = i_5(t);
  return(t);
}
static ATerm t_5 (ATerm y_137 (ATerm), ATerm z_69, ATerm x_69, ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,r_5 = NULL,x_5 = NULL,m_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL;
  x_5 = t;
  t = y_137(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_5, z_69, x_69);
  t = l_6(o_5, z_69, x_69, t);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL;
        t = term_v_7;
        b_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_v_7);
        t = k_6(o_5, b_7, t);
        {
          ATerm w_7 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_7;
            }
        }
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_5 = ATgetFirst((ATermList) t);
      r_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_5, term_v_7, (ATerm) ATinsert(CheckATermList(r_5), (ATerm) ATinsert(CheckATermList(p_5), z_69)));
  t = lookup_table_0_1(o_5, t);
  a_7 = t;
  t = term_v_7;
  m_6 = t;
  t = (ATerm) ATinsert(CheckATermList(r_5), (ATerm) ATinsert(CheckATermList(p_5), z_69));
  y_6 = t;
  t = a_7;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(m_6, y_6, z_6, t);
  t = x_5;
  return(t);
}
static ATerm v_5 (ATerm k_57, ATerm l_57, ATerm t)
{
  ATerm d_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
  t = k_6(k_57, l_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_7 = ATgetFirst((ATermList) t);
      {
        ATerm x_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_7;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_b_8;
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_8, d_9);
        t = v_5(y_7, d_9, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = d_9;
        _fail(t);
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
              ATerm f_8 = NULL,l_8 = NULL;
              t = term_b_8;
              l_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_b_8, d_9);
              t = v_5(l_8, d_9, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm e_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) e_8) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  f_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_8;
              LocalPopChoice(d_8);
            }
          else
            {
              t = c_8;
              {
                ATerm g_8 = t;
                int h_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_9 = NULL;
                    t = term_b_8;
                    b_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_b_8, d_9);
                    t = v_5(b_9, d_9, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = d_9;
                    _fail(t);
                    LocalPopChoice(h_8);
                  }
                else
                  {
                    t = g_8;
                    {
                      ATerm i_8 = t;
                      int j_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_9 = NULL,o_9 = NULL;
                          t = term_b_8;
                          o_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_b_8, d_9);
                          t = v_5(o_9, d_9, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm k_8 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              k_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = k_9;
                          LocalPopChoice(j_8);
                        }
                      else
                        {
                          t = i_8;
                          {
                            ATerm m_8 = t;
                            int n_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_10 = NULL;
                                t = term_b_8;
                                b_10 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_b_8, d_9);
                                t = v_5(b_10, d_9, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = d_9;
                                _fail(t);
                                LocalPopChoice(n_8);
                              }
                            else
                              {
                                t = m_8;
                                {
                                  ATerm j_10 = NULL,m_10 = NULL;
                                  t = term_b_8;
                                  m_10 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_b_8, d_9);
                                  t = v_5(m_10, d_9, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm o_8 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      j_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = j_10;
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
ATerm Cify_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_9 = ATgetFirst((ATermList) t);
      x_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_9;
  if(match_int(t, 95))
    {
      ATerm c_10 = NULL;
      t = x_9;
      t = o_0(t);
      c_10 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(c_10), term_p_8), term_p_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm f_10 = NULL;
          t = x_9;
          t = o_0(t);
          f_10 = t;
          t = (ATerm) ATinsert(CheckATermList(f_10), term_p_8);
        }
      else
        {
          ATerm q_10 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = x_9;
          t = o_0(t);
          q_10 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(q_10), term_p_8), term_q_8), term_p_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm d_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_10 = NULL,v_10 = NULL;
  v_10 = t;
  t = SSL_explode_string(v_10);
  {
    static ATerm q_11 (ATerm t);
    static ATerm q_11 (ATerm t)
    {
      ATerm r_8 = t;
      int s_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_128(q_11, t);
          LocalPopChoice(s_8);
        }
      else
        {
          t = r_8;
          {
            ATerm l_11 = NULL,o_11 = NULL,p_11 = NULL;
            p_11 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_11 = ATgetFirst((ATermList) t);
                o_11 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm s_10 = NULL,a_11 = NULL,t_0 = NULL;
                  t = SSLgetAnnotations(p_11);
                  s_10 = t;
                  t = o_11;
                  t = q_11(t);
                  a_11 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_11), l_11);
                  t_0 = t;
                  t = SSLsetAnnotations(t_0, s_10);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_11;
              }
          }
        }
      return(t);
    }
    t = q_11(t);
  }
  t_10 = t;
  t = SSL_implode_string(t_10);
  return(t);
}
ATerm foldr_3_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,c_12 = NULL,d_12 = NULL;
  z_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_11;
      t = a_123(t);
    }
  else
    {
      ATerm i_12 = NULL,j_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_12 = ATgetFirst((ATermList) t);
          d_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_12;
      t = c_123(t);
      i_12 = t;
      t = d_12;
      t = foldr_3_0(a_123, b_123, c_123, t);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
      t = b_123(t);
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      j_13 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(j_13, k_13, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(l_13, m_13, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_b_8;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_b_8;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm l_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(l_16, o_16, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(p_16, t_16, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_b_8;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_b_8;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(v_19, w_19, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm x_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(x_19, a_20, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_x_6;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_b_8;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_b_8;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
  u_21 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      v_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      x_21 = ATgetArgument(t, 2);
      y_21 = ATgetArgument(t, 3);
      {
        ATerm z_12 = NULL,a_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,s_13 = NULL,v_13 = NULL;
        t = w_21;
        t = foldr_3_0(o_1, p_1, q_1, t);
        z_12 = t;
        t = x_21;
        t = foldr_3_0(r_1, t_1, v_1, t);
        a_13 = t;
        t = v_21;
        if(match_cons(t, sym_Mod_2))
          {
            s_13 = ATgetArgument(t, 0);
            v_13 = ATgetArgument(t, 1);
            {
              ATerm t_8 = t;
              int u_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_14 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_13), term_v_8), s_13);
                  t_14 = t;
                  t = SSL_concat_strings(t_14);
                  LocalPopChoice(u_8);
                }
              else
                {
                  t = t_8;
                  t = v_21;
                }
            }
          }
        else
          {
            t = v_21;
          }
        t = escape_1_0(Cify_1_0, t);
        d_13 = t;
        t = SSL_int_to_string(z_12);
        e_13 = t;
        t = SSL_int_to_string(a_13);
        f_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_13), term_w_8), e_13), term_w_8), d_13);
        i_13 = t;
        t = SSL_concat_strings(i_13);
        c_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym__2, z_12, a_13));
        g_13 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_8, c_13);
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym__2, z_12, a_13)), (ATerm) ATmakeAppl(sym_Defined_2, term_x_8, c_13));
        t = t_5(w_1, g_13, h_13, t);
        t = c_13;
        {
          ATerm y_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_13 = NULL,d_14 = NULL;
              t = v_21;
              t = HoArg_0_0(t);
              z_13 = t;
              t = term_a_9;
              d_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_21, term_a_9);
              t = t_5(y_1, v_21, d_14, t);
              t = z_13;
              LocalPopChoice(z_8);
            }
          else
            {
              t = y_8;
              {
                ATerm e_14 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_9, c_13);
                e_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym_Defined_2, term_c_9, c_13));
                t = t_5(a_2, v_21, e_14, t);
                t = c_13;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, c_13, w_21, x_21, y_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          v_21 = ATgetArgument(t, 0);
          w_21 = ATgetArgument(t, 1);
          x_21 = ATgetArgument(t, 2);
          {
            ATerm m_15 = NULL,p_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,w_15 = NULL,z_15 = NULL,d_16 = NULL,k_16 = NULL,d_17 = NULL,e_17 = NULL;
            t = w_21;
            t = foldr_3_0(c_2, d_2, j_2, t);
            m_15 = t;
            t = x_21;
            t = foldr_3_0(k_2, l_2, m_2, t);
            p_15 = t;
            t = v_21;
            if(match_cons(t, sym_Mod_2))
              {
                d_17 = ATgetArgument(t, 0);
                e_17 = ATgetArgument(t, 1);
                {
                  ATerm e_9 = t;
                  int f_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_17), term_v_8), d_17);
                      l_18 = t;
                      t = SSL_concat_strings(l_18);
                      LocalPopChoice(f_9);
                    }
                  else
                    {
                      t = e_9;
                      t = v_21;
                    }
                }
              }
            else
              {
                t = v_21;
              }
            t = escape_1_0(Cify_1_0, t);
            t_15 = t;
            t = SSL_int_to_string(m_15);
            u_15 = t;
            t = SSL_int_to_string(p_15);
            w_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_15), term_w_8), u_15), term_w_8), t_15);
            k_16 = t;
            t = SSL_concat_strings(k_16);
            s_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym__2, m_15, p_15));
            z_15 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, s_15);
            d_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym__2, m_15, p_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, s_15));
            t = t_5(o_2, z_15, d_16, t);
            t = s_15;
            {
              ATerm h_9 = t;
              int i_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_17 = NULL,p_17 = NULL;
                  t = v_21;
                  t = HoArg_0_0(t);
                  o_17 = t;
                  t = term_a_9;
                  p_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_21, term_a_9);
                  t = t_5(p_2, v_21, p_17, t);
                  t = o_17;
                  LocalPopChoice(i_9);
                }
              else
                {
                  t = h_9;
                  {
                    ATerm t_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_9, s_15);
                    t_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym_Defined_2, term_j_9, s_15));
                    t = t_5(r_2, v_21, t_17, t);
                    t = s_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, s_15, w_21, x_21);
          }
        }
      else
        {
          ATerm b_19 = NULL,c_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,m_20 = NULL,n_20 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              v_21 = ATgetArgument(t, 0);
              w_21 = ATgetArgument(t, 1);
              x_21 = ATgetArgument(t, 2);
              y_21 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = w_21;
          t = foldr_3_0(s_2, t_2, v_2, t);
          b_19 = t;
          t = x_21;
          t = foldr_3_0(w_2, x_2, z_2, t);
          c_19 = t;
          t = v_21;
          if(match_cons(t, sym_Mod_2))
            {
              m_20 = ATgetArgument(t, 0);
              n_20 = ATgetArgument(t, 1);
              {
                ATerm l_9 = t;
                int m_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_22 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_20), term_v_8), m_20);
                    h_22 = t;
                    t = SSL_concat_strings(h_22);
                    LocalPopChoice(m_9);
                  }
                else
                  {
                    t = l_9;
                    t = v_21;
                  }
              }
            }
          else
            {
              t = v_21;
            }
          t = escape_1_0(Cify_1_0, t);
          m_19 = t;
          t = SSL_int_to_string(b_19);
          n_19 = t;
          t = SSL_int_to_string(c_19);
          o_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_19), term_w_8), n_19), term_w_8), m_19);
          t_19 = t;
          t = SSL_concat_strings(t_19);
          l_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym__2, b_19, c_19));
          r_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_9, l_19);
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym__2, b_19, c_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_9, l_19));
          t = t_5(a_3, r_19, s_19, t);
          t = l_19;
          {
            ATerm p_9 = t;
            int q_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_21 = NULL,b_21 = NULL;
                t = v_21;
                t = HoArg_0_0(t);
                a_21 = t;
                t = term_a_9;
                b_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_21, term_a_9);
                t = t_5(b_3, v_21, b_21, t);
                t = a_21;
                LocalPopChoice(q_9);
              }
            else
              {
                t = p_9;
                {
                  ATerm g_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_9, l_19);
                  g_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_21, (ATerm) ATmakeAppl(sym_Defined_2, term_r_9, l_19));
                  t = t_5(c_3, v_21, g_21, t);
                  t = l_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, l_19, w_21, x_21, y_21);
        }
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = topdown_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(d_3, t);
  return(t);
}
static ATerm y_5 (ATerm j_34, ATerm k_34, ATerm t)
{
  ATerm b_23 = NULL;
  t = SSL_fputc(j_34, k_34);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_23);
  return(t);
}
static ATerm z_5 (ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm d_23 = NULL;
  t = SSL_write_term_to_stream_text(p_32, q_32);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_23);
  return(t);
}
static ATerm b_6 (ATerm p_112 (ATerm), ATerm k_244, ATerm v_32, ATerm t)
{
  ATerm e_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_244, term_u_9);
  t = f_6(t);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_23, v_32);
  t = p_112(t);
  t = fclose_0_0(t);
  t = v_32;
  return(t);
}
static ATerm a_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm f_23 = NULL;
  t = SSL_write_term_to_stream_baf(l_32, m_32);
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_23);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(match_cons(v_9, sym_Stream_1))
        {
          w_22 = ATgetArgument(v_9, 0);
        }
      else
        _fail(t);
      x_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(w_22, x_22, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          q_23 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(q_23, r_23, t);
  n_23 = t;
  t = term_z_9;
  o_23 = t;
  t = n_23;
  if(match_cons(t, sym_Stream_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, n_23);
  t = y_5(o_23, p_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,f_24 = NULL,i_24 = NULL,k_24 = NULL,m_24 = NULL,z_24 = NULL,a_25 = NULL,c_25 = NULL,e_25 = NULL,p_26 = NULL,q_26 = NULL,x_0 = NULL,w_0 = NULL;
  v_23 = t;
  if(match_cons(t, sym__2))
    {
      a_25 = ATgetArgument(t, 0);
      c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  z_24 = t;
  t = a_25;
  {
    ATerm a_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_3 (ATerm t);
        static ATerm f_3 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_23 != NULL) && (u_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_3, t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = a_10;
        t = term_e_10;
        u_23 = t;
      }
  }
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_25, c_25);
  w_0 = t;
  t = SSLsetAnnotations(w_0, z_24);
  t = v_23;
  if(match_cons(t, sym__2))
    {
      i_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_23);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_24, (ATerm) ATmakeAppl(sym__2, not_null(u_23), k_24));
  x_0 = t;
  t = SSLsetAnnotations(x_0, f_24);
  m_24 = t;
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,y_0 = NULL;
        t = SSLgetAnnotations(m_24);
        o_22 = t;
        t = p_26;
        t = fetch_1_0(g_3, t);
        s_22 = t;
        t = q_26;
        if(match_cons(t, sym__2))
          {
            u_22 = ATgetArgument(t, 0);
            v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_6(j_3, u_22, v_22, t);
        t_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
        y_0 = t;
        t = SSLsetAnnotations(y_0, o_22);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        {
          ATerm h_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,z_0 = NULL;
          t = SSLgetAnnotations(m_24);
          h_23 = t;
          t = q_26;
          if(match_cons(t, sym__2))
            {
              l_23 = ATgetArgument(t, 0);
              m_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_6(k_3, l_23, m_23, t);
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_26, k_23);
          z_0 = t;
          t = SSLsetAnnotations(z_0, h_23);
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
ATerm apply_strategy_1_0 (ATerm p_132 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  x_26 = t;
  t = dtime_0_0(t);
  t = x_26;
  t = p_132(t);
  w_26 = t;
  t = dtime_0_0(t);
  t_26 = t;
  t = w_26;
  if(match_cons(t, sym__2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_26), (ATerm) ATmakeAppl(sym_Runtime_1, t_26)), v_26);
  return(t);
}
static ATerm t_27 (ATerm h_27, ATerm t)
{
  t = SSL_fclose(h_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_27 = NULL,p_27 = NULL;
  p_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_27 = ATgetArgument(t, 0);
      {
        ATerm i_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_27);
            LocalPopChoice(k_10);
          }
        else
          {
            t = i_10;
            t = t_27(p_27, t);
          }
      }
    }
  else
    {
      t = t_27(p_27, t);
    }
  return(t);
}
static ATerm c_6 (ATerm r_32, ATerm t)
{
  t = SSL_read_term_from_stream(r_32);
  return(t);
}
static ATerm d_6 (ATerm f_54, ATerm g_54, ATerm t)
{
  t = SSL_strcat(f_54, g_54);
  return(t);
}
static ATerm e_6 (ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm u_27 = NULL;
  t = SSL_fopen(l_34, m_34);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_27);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_stdin_stream();
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_27);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_27 = NULL;
  t = SSL_stdout_stream();
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_27 = NULL;
  t = SSL_stderr_stream();
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_27);
  return(t);
}
static ATerm h_29 (ATerm g_28, ATerm t)
{
  ATerm h_28 = NULL;
  t = SSL_explode_term(g_28);
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(((ATgetType(n_10) == AT_LIST) && !(ATisEmpty(n_10))))
          {
            h_28 = ATgetFirst((ATermList) n_10);
            {
              ATerm o_10 = (ATerm) ATgetNext((ATermList) n_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_28;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_28;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_28;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_28;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_29 (ATerm k_28, ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,s_28 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(m_28);
  p_28 = t;
  t = k_28;
  if(match_cons(t, sym_Path_1))
    {
      s_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_28, l_28);
  e_1 = t;
  t = SSLsetAnnotations(e_1, p_28);
  if(match_cons(t, sym__2))
    {
      n_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(n_28, o_28, t);
  return(t);
}
static ATerm j_29 (ATerm u_28, ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,c_29 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(w_28);
  z_28 = t;
  t = SSL_is_string(u_28);
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_29, v_28);
  f_1 = t;
  t = SSLsetAnnotations(f_1, z_28);
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(x_28, y_28, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      {
        ATerm p_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_29(e_29, t);
            LocalPopChoice(r_10);
          }
        else
          {
            t = p_10;
            {
              ATerm u_10 = t;
              int w_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_29(f_29, g_29, e_29, t);
                  LocalPopChoice(w_10);
                }
              else
                {
                  t = u_10;
                  t = j_29(f_29, g_29, e_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_29(e_29, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,s_29 = NULL;
  s_29 = t;
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_29, term_z_10);
        t = f_6(t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        {
          ATerm e_24 = NULL,g_24 = NULL;
          t = term_b_11;
          g_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_11, s_29);
          t = d_6(g_24, s_29, t);
          e_24 = t;
          t = SSL_perror(e_24);
          _fail(t);
        }
      }
  }
  m_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(n_29, t);
  l_29 = t;
  t = m_29;
  t = fclose_0_0(t);
  t = l_29;
  return(t);
}
ATerm fetch_1_0 (ATerm l_117 (ATerm), ATerm t)
{
  static ATerm r_30 (ATerm t);
  static ATerm r_30 (ATerm t)
  {
    ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
    o_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_30 = ATgetFirst((ATermList) t);
        q_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_11 = t;
      int d_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_24 = NULL,s_24 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(o_30);
          p_24 = t;
          t = p_30;
          t = l_117(t);
          s_24 = t;
          t = (ATerm) ATinsert(CheckATermList(q_30), s_24);
          i_1 = t;
          t = SSLsetAnnotations(i_1, p_24);
          LocalPopChoice(d_11);
        }
      else
        {
          t = c_11;
          {
            ATerm d_25 = NULL,i_25 = NULL,j_1 = NULL;
            t = SSLgetAnnotations(o_30);
            d_25 = t;
            t = q_30;
            t = r_30(t);
            i_25 = t;
            t = (ATerm) ATinsert(CheckATermList(i_25), p_30);
            j_1 = t;
            t = SSLsetAnnotations(j_1, d_25);
          }
        }
    }
    return(t);
  }
  t = r_30(t);
  return(t);
}
static ATerm k_6 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm u_30 = NULL;
  t = lookup_table_0_1(s_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(t_58, u_30, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
        t = term_g_11;
        a_31 = t;
        t = term_h_11;
        b_31 = t;
        t = term_i_11;
        t = k_6(a_31, b_31, t);
        z_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_30, term_j_11);
        t = geq_0_0(t);
        t = x_30;
        t = h_114(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = x_30;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  {
    ATerm k_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_11 = ATgetFirst((ATermList) t);
                ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_31;
          }
        LocalPopChoice(m_11);
      }
    else
      {
        t = k_11;
        t = (ATerm) ATinsert(ATempty, e_31);
      }
  }
  f_31 = t;
  t = term_e_10;
  g_31 = t;
  t = SSL_printnl(g_31, f_31);
  t = e_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  t = term_g_11;
  k_31 = t;
  t = term_s_11;
  l_31 = t;
  t = term_t_11;
  t = k_6(k_31, l_31, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  if(match_string(t, "-k"))
    {
      t = n_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_31;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = SSL_string_to_int(o_31);
  p_31 = t;
  t = term_u_11;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_11, p_31);
  t = n_6(q_31, p_31, t);
  t = o_31;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, o_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-S"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  t = term_h_11;
  t_31 = t;
  t = term_o_7;
  u_31 = t;
  t = term_w_11;
  t = n_6(t_31, u_31, t);
  t = term_x_11;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_y_11;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  t = SSL_string_to_int(v_31);
  w_31 = t;
  t = term_h_11;
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, w_31);
  t = n_6(x_31, w_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_31);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_a_12;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  t = term_b_12;
  y_31 = t;
  t = term_t_6;
  z_31 = t;
  t = term_e_12;
  t = n_6(y_31, z_31, t);
  t = term_f_12;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_3, r_3, s_3, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = h_12;
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_3, v_3, d_4, t);
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            t = Option_3_0(e_4, f_4, g_4, t);
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  t = term_g_11;
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, f_38, g_38);
  t = lookup_table_0_1(a_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(f_38, g_38, b_32, t);
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, f_38, g_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
      t = term_t_6;
      t = f_0(t);
      h_32 = t;
      t = term_n_12;
      i_32 = t;
      t = term_o_12;
      j_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_12, term_o_12, h_32);
      t = l_6(i_32, j_32, h_32, t);
      _fail(t);
    }
  else
    {
      ATerm o_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_32 = ATgetFirst((ATermList) t);
          g_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_32;
      t = d_0(t);
      t = term_t_6;
      t = e_0(t);
      o_32 = t;
      t = (ATerm) ATinsert(CheckATermList(g_32), o_32);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  if(match_string(t, "-o"))
    {
      t = t_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_32;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  t = term_p_12;
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, w_32);
  t = n_6(x_32, w_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_32);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
static ATerm l_6 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_12 = ATgetArgument(t, 0);
            ATerm u_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
        t = k_6(z_56, a_57, t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = (ATerm) ATempty;
      }
  }
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_56, a_57, (ATerm) ATinsert(CheckATermList(a_33), y_56));
  t = lookup_table_0_1(z_56, t);
  d_33 = t;
  t = (ATerm) ATinsert(CheckATermList(a_33), y_56);
  b_33 = t;
  t = d_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(a_57, b_33, c_33, t);
  t = z_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
      t = term_t_6;
      t = l_0(t);
      o_33 = t;
      t = term_n_12;
      p_33 = t;
      t = term_o_12;
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_12, term_o_12, o_33);
      t = l_6(p_33, q_33, o_33, t);
      _fail(t);
    }
  else
    {
      ATerm u_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_33 = ATgetFirst((ATermList) t);
          l_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_33 = ATgetFirst((ATermList) t);
          n_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_33;
      t = h_0(t);
      t = m_33;
      t = k_0(t);
      u_33 = t;
      t = (ATerm) ATinsert(CheckATermList(n_33), u_33);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  if(match_string(t, "-i"))
    {
      t = w_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_33;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  x_33 = t;
  t = term_v_12;
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, x_33);
  t = n_6(y_33, x_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_33);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_6;
  t = whoami_0_0(t);
  z_33 = t;
  t = term_u_6;
  b_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_12), z_33);
  c_34 = t;
  t = SSL_printnl(b_34, c_34);
  t = term_x_6;
  a_34 = t;
  t = SSL_exit(a_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  t = term_g_11;
  d_34 = t;
  t = term_s_11;
  e_34 = t;
  t = term_t_11;
  t = k_6(d_34, e_34, t);
  return(t);
}
static ATerm g_6 (ATerm b_41, ATerm c_41, ATerm t)
{
  ATerm y_12 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_41, c_41);
      LocalPopChoice(b_13);
    }
  else
    {
      t = y_12;
      t = SSL_addr(b_41, c_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_34;
      t = y_122(t);
    }
  else
    {
      ATerm r_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_34 = ATgetFirst((ATermList) t);
          i_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_34;
      t = foldr_2_0(y_122, z_122, t);
      r_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_34, r_34);
      t = z_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  if(match_cons(t, sym__2))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(y_26, z_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_25 = NULL,z_25 = NULL;
  t = times_0_0(t);
  z_25 = t;
  t = SSL_explode_term(z_25);
  if(match_cons(t, sym__2))
    {
      ATerm n_13 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_25;
  t = foldr_2_0(n_4, o_4, t);
  u_34 = t;
  t = SSL_TicksToSeconds(u_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
  f_35 = t;
  if(match_cons(t, sym__2))
    {
      g_35 = ATgetArgument(t, 0);
      h_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_35;
        if((g_35 != t))
          {
            _fail(t);
          }
        t = f_35;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = (ATerm) ATmakeAppl(sym__2, g_35, h_35);
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_35, h_35);
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              t = SSL_gtr(g_35, h_35);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_35, h_35);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_114 (ATerm), ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
        t = term_g_11;
        o_35 = t;
        t = term_h_11;
        p_35 = t;
        t = term_i_11;
        t = k_6(o_35, p_35, t);
        n_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_35, term_x_6);
        t = geq_0_0(t);
        t = l_35;
        t = g_114(t);
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = l_35;
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,u_35 = NULL,v_35 = NULL;
  t = run_time_0_0(t);
  r_35 = t;
  t = term_t_6;
  t = whoami_0_0(t);
  s_35 = t;
  t = term_u_6;
  u_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), r_35), term_w_13), s_35);
  v_35 = t;
  t = SSL_printnl(u_35, v_35);
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), r_35), term_w_13), s_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_7;
  w_35 = t;
  t = SSL_exit(w_35);
  return(t);
}
static ATerm o_6 (ATerm r_61, ATerm s_61, ATerm t_61, ATerm t)
{
  ATerm x_35 = NULL;
  t = SSL_hashtable_put(t_61, r_61, s_61);
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_35);
  return(t);
}
static ATerm p_6 (ATerm u_61, ATerm v_61, ATerm t)
{
  t = SSL_hashtable_get(v_61, u_61);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_58, ATerm t)
{
  ATerm g_36 = NULL;
  t = table_hashtable_0_0(t);
  g_36 = t;
  {
    ATerm y_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL;
        t = g_36;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_6(l_58, x_27, t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = y_13;
        {
          ATerm e_28 = NULL;
          t = l_58;
          t = table_create_0_0(t);
          t = g_36;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_6(l_58, e_28, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm j_36 = NULL;
  t = SSL_hashtable_create(z_61, a_62);
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_36);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,o_36 = NULL,p_36 = NULL;
  k_36 = t;
  t = term_b_14;
  o_36 = t;
  t = term_c_14;
  p_36 = t;
  t = k_36;
  t = new_hashtable_0_2(o_36, p_36, t);
  l_36 = t;
  t = k_36;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(k_36, l_36, m_36, t);
  t = k_36;
  return(t);
}
static ATerm i_6 (ATerm w_61, ATerm x_61, ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_hashtable_remove(x_61, w_61);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_36);
  return(t);
}
static ATerm j_6 (ATerm b_62, ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_hashtable_destroy(b_62);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_table_hashtable();
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t_36 = t;
  t = table_hashtable_0_0(t);
  u_36 = t;
  t = lookup_table_0_1(t_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(w_36, t);
  t = u_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(t_36, v_36, t);
  t = t_36;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  t = term_f_14;
  x_36 = t;
  t = term_t_6;
  y_36 = t;
  t = term_g_14;
  t = n_6(x_36, y_36, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_h_14;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  t = term_f_14;
  b_37 = t;
  t = term_t_6;
  c_37 = t;
  t = term_g_14;
  t = n_6(b_37, c_37, t);
  t = term_i_14;
  z_36 = t;
  t = term_t_6;
  a_37 = t;
  t = term_j_14;
  t = n_6(z_36, a_37, t);
  t = term_k_14;
  return(t);
}
static ATerm x_4 (ATerm t)
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
      t = Option_3_0(q_4, s_4, t_4, t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      t = Option_3_0(u_4, v_4, x_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,s_1 = NULL;
  i_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_37);
  d_37 = t;
  t = e_37;
  t = g_90(t);
  g_37 = t;
  t = f_37;
  t = h_90(t);
  h_37 = t;
  t = (ATerm) ATinsert(CheckATermList(h_37), g_37);
  s_1 = t;
  t = SSLsetAnnotations(s_1, d_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_135 (ATerm), ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,s_37 = NULL,t_37 = NULL,z_1 = NULL;
  n_37 = t;
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_14;
        t = v_135(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
      }
  }
  t = n_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_37 = ATgetFirst((ATermList) t);
      q_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_37);
  o_37 = t;
  t = term_s_11;
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, p_37);
  t = n_6(t_37, p_37, t);
  t = q_37;
  {
    static ATerm d_38 (ATerm t);
    static ATerm d_38 (ATerm t)
    {
      ATerm r_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_37 = NULL;
              w_37 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_37;
              LocalPopChoice(v_14);
            }
          else
            {
              t = u_14;
              t = v_135(t);
              t = Cons_2_0(_id, d_38, t);
            }
          LocalPopChoice(s_14);
        }
      else
        {
          t = r_14;
          {
            ATerm z_37 = NULL,a_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_37 = ATgetFirst((ATermList) t);
                a_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_38), (ATerm) ATmakeAppl(sym_Undefined_1, z_37));
          }
        }
      return(t);
    }
    t = d_38(t);
  }
  s_37 = t;
  t = (ATerm) ATinsert(CheckATermList(s_37), (ATerm) ATmakeAppl(sym_Program_1, p_37));
  z_1 = t;
  t = SSLsetAnnotations(z_1, o_37);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm s_38 = NULL;
  s_38 = t;
  if(match_string(t, "--help"))
    {
      t = s_38;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_38;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_38;
        }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  t = term_w_14;
  t_38 = t;
  t = term_t_6;
  u_38 = t;
  t = term_x_14;
  t = n_6(t_38, u_38, t);
  t = term_y_14;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm s_135 (ATerm), ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  m_38 = t;
  t = term_n_12;
  n_38 = t;
  t = term_a_15;
  t = lookup_table_0_1(n_38, t);
  r_38 = t;
  t = term_o_12;
  o_38 = t;
  t = (ATerm) ATempty;
  p_38 = t;
  t = r_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(o_38, p_38, q_38, t);
  t = m_38;
  {
    static ATerm y_4 (ATerm t);
    static ATerm y_4 (ATerm t)
    {
      ATerm b_15 = t;
      int c_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_135(t);
          LocalPopChoice(c_15);
        }
      else
        {
          t = b_15;
          {
            ATerm d_15 = t;
            int e_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_5, f_5, g_5, t);
                LocalPopChoice(e_15);
              }
            else
              {
                t = d_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_4, t);
  }
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_39 = NULL;
        f_39 = t;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_29 = NULL;
              t = f_39;
              {
                ATerm j_15 = t;
                int k_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_29 = NULL,w_30 = NULL;
                    t = term_g_11;
                    x_29 = t;
                    t = term_w_14;
                    w_30 = t;
                    t = term_l_15;
                    t = k_6(x_29, w_30, t);
                    LocalPopChoice(k_15);
                  }
                else
                  {
                    t = j_15;
                    t = fetch_1_0(h_5, t);
                  }
              }
              t = f_39;
              t = t_135(t);
              t = term_o_7;
              w_29 = t;
              t = SSL_exit(w_29);
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              {
                ATerm d_32 = NULL,s_32 = NULL,u_32 = NULL;
                t = term_g_11;
                s_32 = t;
                t = term_f_14;
                u_32 = t;
                t = term_n_15;
                t = k_6(s_32, u_32, t);
                t = f_39;
                t = u_135(t);
                t = term_o_7;
                d_32 = t;
                t = SSL_exit(d_32);
              }
            }
        }
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm o_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL;
              static ATerm j_5 (ATerm t);
              static ATerm j_5 (ATerm t)
              {
                ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,b_2 = NULL;
                l_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_39);
                j_39 = t;
                t = k_39;
                if(((k_38 != NULL) && (k_38 != t)))
                  _fail(t);
                else
                  k_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_39);
                b_2 = t;
                t = SSLsetAnnotations(b_2, j_39);
                return(t);
              }
              t = fetch_1_0(j_5, t);
              t = term_u_6;
              h_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), term_r_15);
              i_39 = t;
              t = SSL_printnl(h_39, i_39);
              t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_38)), term_r_15));
              t = t_135(t);
              t = term_x_6;
              g_39 = t;
              t = SSL_exit(g_39);
              LocalPopChoice(q_15);
            }
          else
            {
              t = o_15;
            }
        }
      }
  }
  l_38 = t;
  t = term_n_12;
  t = table_destroy_0_0(t);
  t = l_38;
  return(t);
}
ATerm option_wrap_5_0 (ATerm v_133 (ATerm), ATerm w_133 (ATerm), ATerm x_133 (ATerm), ATerm y_133 (ATerm), ATerm z_133 (ATerm), ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  t = parse_options_3_0(v_133, w_133, x_133, t);
  q_39 = t;
  t = term_v_15;
  t = table_create_0_0(t);
  t = term_v_15;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_15, term_x_15, q_39);
  t = lookup_table_0_1(r_39, t);
  u_39 = t;
  t = term_x_15;
  s_39 = t;
  t = u_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(s_39, q_39, t_39, t);
  t = q_39;
  t = y_133(t);
  {
    ATerm y_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_133(t);
        t = report_success_0_0(t);
        LocalPopChoice(a_16);
      }
    else
      {
        t = y_15;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = if_verbose2_1_0(q_6, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL;
  t = term_b_16;
  v_39 = t;
  t = term_t_6;
  w_39 = t;
  t = term_c_16;
  t = n_6(v_39, w_39, t);
  t = term_e_16;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_f_16;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  x_39 = t;
  t = term_g_11;
  b_40 = t;
  t = term_s_11;
  c_40 = t;
  t = term_t_11;
  t = k_6(b_40, c_40, t);
  y_39 = t;
  t = term_u_6;
  z_39 = t;
  t = (ATerm) ATinsert(ATempty, y_39);
  a_40 = t;
  t = SSL_printnl(z_39, a_40);
  t = x_39;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_132 (ATerm), ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm t)
{
  static ATerm k_5 (ATerm t);
  static ATerm n_5 (ATerm t);
  static ATerm k_5 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_132(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          ATerm i_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(j_16);
            }
          else
            {
              t = i_16;
              {
                ATerm m_16 = t;
                int n_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(n_16);
                  }
                else
                  {
                    t = m_16;
                    {
                      ATerm q_16 = t;
                      int r_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_5, w_5, h_6, t);
                          LocalPopChoice(r_16);
                        }
                      else
                        {
                          t = q_16;
                          {
                            ATerm s_16 = t;
                            int u_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(u_16);
                              }
                            else
                              {
                                t = s_16;
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
  static ATerm n_5 (ATerm t)
  {
    ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
    e_40 = t;
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_6 (ATerm t);
          static ATerm r_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_40 != NULL) && (d_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_6, t);
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          t = term_x_16;
          d_40 = t;
        }
    }
    t = not_null(d_40);
    t = ReadFromFile_0_0(t);
    f_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_40, f_40);
    t = apply_strategy_1_0(y_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(k_5, a_133, default_system_about_0_0, l_5, n_5, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,i_2 = NULL,h_2 = NULL,g_2 = NULL,f_2 = NULL,e_2 = NULL;
  y_40 = t;
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_40);
  g_40 = t;
  t = i_40;
  if(match_cons(t, sym_Specification_1))
    {
      k_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_40);
  j_40 = t;
  t = k_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_40 = ATgetFirst((ATermList) t);
      o_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_40);
  m_40 = t;
  t = o_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_40 = ATgetFirst((ATermList) t);
      s_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_40);
  q_40 = t;
  t = r_40;
  if(match_cons(t, sym_Strategies_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_40);
  u_40 = t;
  t = v_40;
  t = rename_sdefs_0_0(t);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_40);
  e_2 = t;
  t = SSLsetAnnotations(e_2, u_40);
  x_40 = t;
  t = s_40;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_40), x_40);
  f_2 = t;
  t = SSLsetAnnotations(f_2, q_40);
  t_40 = t;
  t = (ATerm) ATinsert(CheckATermList(t_40), n_40);
  g_2 = t;
  t = SSLsetAnnotations(g_2, m_40);
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_40);
  h_2 = t;
  t = SSLsetAnnotations(h_2, j_40);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_40, l_40);
  i_2 = t;
  t = SSLsetAnnotations(i_2, g_40);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_6, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_j_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_t_8;
ATerm term_h_8;
ATerm term_b_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_h_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_n_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym__2, term_v_7, term_w_7);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_a_9);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_9);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_h_7);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_h_7);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_h_7);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_h_7);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, (ATerm) ATempty);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_q_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_l_7, term_n_15);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_h_7);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm o_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm RenameVar_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm RenameCall_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm q_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm q_117 (ATerm), ATerm t);
static ATerm b_6 (ATerm a_140 (ATerm), ATerm f_71, ATerm d_71, ATerm t);
static ATerm d_6 (ATerm k_57, ATerm l_57, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm s_128 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm r_123 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm RenameSDef_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm rename_sdefs_0_0 (ATerm t);
static ATerm g_6 (ATerm j_34, ATerm k_34, ATerm t);
static ATerm h_6 (ATerm p_32, ATerm q_32, ATerm t);
static ATerm j_6 (ATerm e_113 (ATerm), ATerm y_246, ATerm v_32, ATerm t);
static ATerm i_6 (ATerm l_32, ATerm m_32, ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm t_133 (ATerm), ATerm t);
static ATerm j_29 (ATerm d_29, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_6 (ATerm r_32, ATerm t);
static ATerm l_6 (ATerm f_54, ATerm g_54, ATerm t);
static ATerm m_6 (ATerm l_34, ATerm m_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_30 (ATerm t_29, ATerm t);
static ATerm v_30 (ATerm x_29, ATerm y_29, ATerm z_29, ATerm t);
static ATerm w_30 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm t);
static ATerm n_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_118 (ATerm), ATerm t);
static ATerm s_6 (ATerm s_58, ATerm t_58, ATerm t);
ATerm if_verbose2_1_0 (ATerm w_114 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_6 (ATerm f_38, ATerm g_38, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_6 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_6 (ATerm b_41, ATerm c_41, ATerm t);
ATerm foldr_2_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_114 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_6 (ATerm k_61, ATerm l_61, ATerm m_61, ATerm t);
static ATerm x_6 (ATerm n_61, ATerm o_61, ATerm t);
ATerm lookup_table_0_1 (ATerm l_58, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_61, ATerm t_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_6 (ATerm p_61, ATerm q_61, ATerm t);
static ATerm r_6 (ATerm u_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_136 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm parse_options_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm iowrap_3_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm o_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,i_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_0 = ATgetFirst((ATermList) t);
      i_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_0 = NULL,w_0 = NULL;
        static ATerm n_0 (ATerm t);
        static ATerm n_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_0)), not_null(w_0));
          return(t);
        }
        t = i_0;
        t = q_0(t);
        if(((v_0 != NULL) && (v_0 != t)))
          _fail(t);
        else
          v_0 = t;
        t = c_0;
        t = o_0(t);
        if(((w_0 != NULL) && (w_0 != t)))
          _fail(t);
        else
          w_0 = t;
        t = i_0;
        t = reverse_acc_2_0(o_0, n_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_7;
      t = q_0(t);
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,k_1 = NULL,a_0 = NULL;
  k_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_1);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_1);
  a_0 = t;
  t = SSLsetAnnotations(a_0, h_1);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm o_1 = NULL;
  o_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_1), term_i_7);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm e_137 (ATerm), ATerm f_137 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 = NULL,g_1 = NULL;
      t = term_l_7;
      e_1 = t;
      t = term_n_7;
      g_1 = t;
      t = term_o_7;
      t = s_6(e_1, g_1, t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      t = fetch_1_0(s_0, t);
    }
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_137(t);
        t = echo_0_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
      }
  }
  t = term_t_7;
  t = echo_0_0(t);
  t = term_v_7;
  c_1 = t;
  t = term_w_7;
  d_1 = t;
  t = term_b_8;
  t = s_6(c_1, d_1, t);
  t = reverse_acc_2_0(_id, t_0, t);
  t = map_1_0(x_0, t);
  {
    ATerm c_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 = NULL;
        t = f_137(t);
        p_1 = t;
        t = (ATerm) ATinsert(CheckATermList(p_1), term_h_8);
        t = echo_0_0(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = c_8;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,y_1 = NULL,y_0 = NULL;
  y_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_1);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_1);
  y_0 = t;
  t = SSLsetAnnotations(y_0, v_1);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_1 = NULL;
  s_1 = t;
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,u_1 = NULL;
        t = term_l_7;
        t_1 = t;
        t = term_n_7;
        u_1 = t;
        t = term_o_7;
        t = s_6(t_1, u_1, t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = fetch_1_0(z_0, t);
      }
  }
  t = s_1;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm p_2 = NULL,r_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_2;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      ATerm p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,e_2 = NULL;
        t = term_t_8;
        e_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_8, p_2);
        t = d_6(e_2, p_2, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_8) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            b_2 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_2;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_2 = NULL,b_3 = NULL;
              t = term_t_8;
              b_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_t_8, p_2);
              t = d_6(b_3, p_2, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm x_8 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_8) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  x_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_2;
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              {
                ATerm g_3 = NULL,j_3 = NULL;
                t = term_t_8;
                j_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_8, p_2);
                t = d_6(j_3, p_2, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm z_8 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_8) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    g_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_3;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm v_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      v_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(v_3, y_3, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm c_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(c_4, i_4, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      n_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(n_5, o_5, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm d_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym_CallT_3))
    {
      h_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      d_5 = ATgetArgument(t, 2);
      {
        ATerm r_3 = NULL,s_3 = NULL,u_3 = NULL;
        t = h_5;
        if(match_cons(t, sym_SVar_1))
          {
            j_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_5;
        t = foldr_3_0(b_1, j_1, l_1, t);
        r_3 = t;
        t = d_5;
        t = foldr_3_0(m_1, n_1, q_1, t);
        s_3 = t;
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, j_5, (ATerm) ATmakeAppl(sym__2, r_3, s_3));
              t = RenameVar_0_0(t);
              u_3 = t;
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              t = j_5;
              t = HoArg_0_0(t);
              u_3 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_3), k_5, d_5);
      }
    }
  else
    {
      ATerm f_5 = NULL,m_5 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          h_5 = ATgetArgument(t, 0);
          k_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_5;
      if(match_cons(t, sym_SVar_1))
        {
          j_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_5;
      t = foldr_3_0(r_1, z_1, a_2, t);
      f_5 = t;
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, j_5, f_5);
            t = RenameVar_0_0(t);
            m_5 = t;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            t = j_5;
            t = HoArg_0_0(t);
            m_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_5), k_5);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    t = topdown_1_0(q_105, t);
    return(t);
  }
  t = q_105(t);
  t = SRTS_all(c_2, t);
  return(t);
}
ATerm map_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  static ATerm u_7 (ATerm t);
  static ATerm u_7 (ATerm t)
  {
    ATerm m_7 = NULL,r_7 = NULL,s_7 = NULL;
    m_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_7;
      }
    else
      {
        ATerm w_5 = NULL,z_5 = NULL,a_6 = NULL,a_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_7 = ATgetFirst((ATermList) t);
            s_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_7);
        w_5 = t;
        t = r_7;
        t = q_117(t);
        z_5 = t;
        t = s_7;
        t = u_7(t);
        a_6 = t;
        t = (ATerm) ATinsert(CheckATermList(a_6), z_5);
        a_1 = t;
        t = SSLsetAnnotations(a_1, w_5);
      }
    return(t);
  }
  t = u_7(t);
  return(t);
}
static ATerm b_6 (ATerm a_140 (ATerm), ATerm f_71, ATerm d_71, ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,d_8 = NULL,f_8 = NULL,g_8 = NULL,l_8 = NULL;
  a_8 = t;
  t = a_140(t);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_7, f_71, d_71);
  t = t_6(x_7, f_71, d_71, t);
  {
    ATerm h_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        t = term_k_9;
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_7, term_k_9);
        t = s_6(x_7, m_8, t);
        {
          ATerm l_9 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_9;
            }
        }
        LocalPopChoice(j_9);
      }
    else
      {
        t = h_9;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_7 = ATgetFirst((ATermList) t);
      z_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_7, term_k_9, (ATerm) ATinsert(CheckATermList(z_7), (ATerm) ATinsert(CheckATermList(y_7), f_71)));
  t = lookup_table_0_1(x_7, t);
  l_8 = t;
  t = term_k_9;
  d_8 = t;
  t = (ATerm) ATinsert(CheckATermList(z_7), (ATerm) ATinsert(CheckATermList(y_7), f_71));
  f_8 = t;
  t = l_8;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(d_8, f_8, g_8, t);
  t = a_8;
  return(t);
}
static ATerm d_6 (ATerm k_57, ATerm l_57, ATerm t)
{
  ATerm n_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
  t = s_6(k_57, l_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_8 = ATgetFirst((ATermList) t);
      {
        ATerm m_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_8;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL;
        t = term_q_9;
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_9, b_11);
        t = d_6(s_8, b_11, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = b_11;
        _fail(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm r_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL,b_9 = NULL;
              t = term_q_9;
              b_9 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_q_9, b_11);
              t = d_6(b_9, b_11, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm u_9 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_9) != ATmakeSymbol("u_0", 0, ATtrue)))
                    _fail(t);
                  y_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_8;
              LocalPopChoice(t_9);
            }
          else
            {
              t = r_9;
              {
                ATerm v_9 = t;
                int w_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_9 = NULL;
                    t = term_q_9;
                    i_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_q_9, b_11);
                    t = d_6(i_9, b_11, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = b_11;
                    _fail(t);
                    LocalPopChoice(w_9);
                  }
                else
                  {
                    t = v_9;
                    {
                      ATerm x_9 = t;
                      int y_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm p_9 = NULL,s_9 = NULL;
                          t = term_q_9;
                          s_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_q_9, b_11);
                          t = d_6(s_9, b_11, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm z_9 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              p_9 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = p_9;
                          LocalPopChoice(y_9);
                        }
                      else
                        {
                          t = x_9;
                          {
                            ATerm a_10 = t;
                            int b_10 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_10 = NULL;
                                t = term_q_9;
                                i_10 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_q_9, b_11);
                                t = d_6(i_10, b_11, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = b_11;
                                _fail(t);
                                LocalPopChoice(b_10);
                              }
                            else
                              {
                                t = a_10;
                                {
                                  ATerm o_10 = NULL,r_10 = NULL;
                                  t = term_q_9;
                                  r_10 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_q_9, b_11);
                                  t = d_6(r_10, b_11, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm c_10 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) c_10) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      o_10 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = o_10;
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
  ATerm x_11 = NULL,b_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_11 = ATgetFirst((ATermList) t);
      b_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_11;
  if(match_int(t, 95))
    {
      ATerm e_12 = NULL;
      t = b_12;
      t = r_0(t);
      e_12 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(e_12), term_d_10), term_d_10);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm i_12 = NULL;
          t = b_12;
          t = r_0(t);
          i_12 = t;
          t = (ATerm) ATinsert(CheckATermList(i_12), term_d_10);
        }
      else
        {
          ATerm k_12 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = b_12;
          t = r_0(t);
          k_12 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_12), term_d_10), term_e_10), term_d_10);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm s_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  o_12 = t;
  t = SSL_explode_string(o_12);
  {
    static ATerm n_13 (ATerm t);
    static ATerm n_13 (ATerm t)
    {
      ATerm f_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_128(n_13, t);
          LocalPopChoice(g_10);
        }
      else
        {
          t = f_10;
          {
            ATerm j_13 = NULL,l_13 = NULL,m_13 = NULL;
            m_13 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_13 = ATgetFirst((ATermList) t);
                l_13 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm a_11 = NULL,h_11 = NULL,f_1 = NULL;
                  t = SSLgetAnnotations(m_13);
                  a_11 = t;
                  t = l_13;
                  t = n_13(t);
                  h_11 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_11), j_13);
                  f_1 = t;
                  t = SSLsetAnnotations(f_1, a_11);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_13;
              }
          }
        }
      return(t);
    }
    t = n_13(t);
  }
  n_12 = t;
  t = SSL_implode_string(n_12);
  return(t);
}
ATerm foldr_3_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm r_123 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_13;
      t = p_123(t);
    }
  else
    {
      ATerm a_14 = NULL,i_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_13 = ATgetFirst((ATermList) t);
          w_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_13;
      t = r_123(t);
      a_14 = t;
      t = w_13;
      t = foldr_3_0(p_123, q_123, r_123, t);
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_14, i_14);
      t = q_123(t);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(g_14, h_14, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(j_14, k_14, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_t_8;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      g_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(g_16, i_16, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(j_16, k_16, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_t_8;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_q_9;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_q_9;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm v_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(v_19, x_19, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm y_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(y_19, a_20, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_c_9;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_t_8;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_q_9;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm i_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,z_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
      m_24 = ATgetArgument(t, 2);
      z_24 = ATgetArgument(t, 3);
      {
        ATerm q_13 = NULL,r_13 = NULL,t_13 = NULL,z_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,q_14 = NULL,r_14 = NULL;
        t = l_24;
        t = foldr_3_0(d_2, i_2, j_2, t);
        q_13 = t;
        t = m_24;
        t = foldr_3_0(k_2, l_2, o_2, t);
        r_13 = t;
        t = k_24;
        if(match_cons(t, sym_Mod_2))
          {
            q_14 = ATgetArgument(t, 0);
            r_14 = ATgetArgument(t, 1);
            {
              ATerm h_10 = t;
              int j_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_15 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_14), term_k_10), q_14);
                  i_15 = t;
                  t = SSL_concat_strings(i_15);
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = h_10;
                  t = k_24;
                }
            }
          }
        else
          {
            t = k_24;
          }
        t = escape_1_0(Cify_1_0, t);
        z_13 = t;
        t = SSL_int_to_string(q_13);
        b_14 = t;
        t = SSL_int_to_string(r_13);
        c_14 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_14), term_l_10), b_14), term_l_10), z_13);
        f_14 = t;
        t = SSL_concat_strings(f_14);
        t_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym__2, q_13, r_13));
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_10, t_13);
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym__2, q_13, r_13)), (ATerm) ATmakeAppl(sym_Defined_2, term_m_10, t_13));
        t = b_6(q_2, d_14, e_14, t);
        t = t_13;
        {
          ATerm n_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_14 = NULL,w_14 = NULL;
              t = k_24;
              t = HoArg_0_0(t);
              v_14 = t;
              t = term_q_10;
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_24, term_q_10);
              t = b_6(s_2, k_24, w_14, t);
              t = v_14;
              LocalPopChoice(p_10);
            }
          else
            {
              t = n_10;
              {
                ATerm x_14 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_10, t_13);
                x_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym_Defined_2, term_s_10, t_13));
                t = b_6(t_2, k_24, x_14, t);
                t = t_13;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, t_13, l_24, m_24, z_24);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          k_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
          m_24 = ATgetArgument(t, 2);
          {
            ATerm r_15 = NULL,s_15 = NULL,u_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,c_16 = NULL,e_16 = NULL,f_16 = NULL,t_16 = NULL,x_16 = NULL;
            t = l_24;
            t = foldr_3_0(u_2, v_2, w_2, t);
            r_15 = t;
            t = m_24;
            t = foldr_3_0(y_2, a_3, d_3, t);
            s_15 = t;
            t = k_24;
            if(match_cons(t, sym_Mod_2))
              {
                t_16 = ATgetArgument(t, 0);
                x_16 = ATgetArgument(t, 1);
                {
                  ATerm t_10 = t;
                  int u_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_16), term_k_10), t_16);
                      o_18 = t;
                      t = SSL_concat_strings(o_18);
                      LocalPopChoice(u_10);
                    }
                  else
                    {
                      t = t_10;
                      t = k_24;
                    }
                }
              }
            else
              {
                t = k_24;
              }
            t = escape_1_0(Cify_1_0, t);
            x_15 = t;
            t = SSL_int_to_string(r_15);
            z_15 = t;
            t = SSL_int_to_string(s_15);
            a_16 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_16), term_l_10), z_15), term_l_10), x_15);
            f_16 = t;
            t = SSL_concat_strings(f_16);
            u_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym__2, r_15, s_15));
            c_16 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_10, u_15);
            e_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym__2, r_15, s_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_10, u_15));
            t = b_6(e_3, c_16, e_16, t);
            t = u_15;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_17 = NULL,n_17 = NULL;
                  t = k_24;
                  t = HoArg_0_0(t);
                  j_17 = t;
                  t = term_q_10;
                  n_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_24, term_q_10);
                  t = b_6(f_3, k_24, n_17, t);
                  t = j_17;
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm q_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_10, u_15);
                    q_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym_Defined_2, term_y_10, u_15));
                    t = b_6(h_3, k_24, q_17, t);
                    t = u_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, u_15, l_24, m_24);
          }
        }
      else
        {
          ATerm j_19 = NULL,l_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,o_20 = NULL,r_20 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              k_24 = ATgetArgument(t, 0);
              l_24 = ATgetArgument(t, 1);
              m_24 = ATgetArgument(t, 2);
              z_24 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = l_24;
          t = foldr_3_0(i_3, k_3, l_3, t);
          j_19 = t;
          t = m_24;
          t = foldr_3_0(m_3, n_3, o_3, t);
          l_19 = t;
          t = k_24;
          if(match_cons(t, sym_Mod_2))
            {
              o_20 = ATgetArgument(t, 0);
              r_20 = ATgetArgument(t, 1);
              {
                ATerm z_10 = t;
                int c_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_22 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_20), term_k_10), o_20);
                    h_22 = t;
                    t = SSL_concat_strings(h_22);
                    LocalPopChoice(c_11);
                  }
                else
                  {
                    t = z_10;
                    t = k_24;
                  }
              }
            }
          else
            {
              t = k_24;
            }
          t = escape_1_0(Cify_1_0, t);
          p_19 = t;
          t = SSL_int_to_string(j_19);
          q_19 = t;
          t = SSL_int_to_string(l_19);
          r_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_19), term_l_10), q_19), term_l_10), p_19);
          u_19 = t;
          t = SSL_concat_strings(u_19);
          o_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym__2, j_19, l_19));
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_11, o_19);
          t_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym__2, j_19, l_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_11, o_19));
          t = b_6(p_3, s_19, t_19, t);
          t = o_19;
          {
            ATerm e_11 = t;
            int f_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_20 = NULL,y_20 = NULL;
                t = k_24;
                t = HoArg_0_0(t);
                x_20 = t;
                t = term_q_10;
                y_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_24, term_q_10);
                t = b_6(q_3, k_24, y_20, t);
                t = x_20;
                LocalPopChoice(f_11);
              }
            else
              {
                t = e_11;
                {
                  ATerm a_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_11, o_19);
                  a_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_24, (ATerm) ATmakeAppl(sym_Defined_2, term_g_11, o_19));
                  t = b_6(t_3, k_24, a_21, t);
                  t = o_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, o_19, l_24, m_24, z_24);
        }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = topdown_1_0(a_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(x_3, t);
  return(t);
}
static ATerm g_6 (ATerm j_34, ATerm k_34, ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_fputc(j_34, k_34);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
static ATerm h_6 (ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm d_26 = NULL;
  t = SSL_write_term_to_stream_text(p_32, q_32);
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_26);
  return(t);
}
static ATerm j_6 (ATerm e_113 (ATerm), ATerm y_246, ATerm v_32, ATerm t)
{
  ATerm f_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_246, term_k_11);
  t = n_6(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, v_32);
  t = e_113(t);
  t = fclose_0_0(t);
  t = v_32;
  return(t);
}
static ATerm i_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm g_26 = NULL;
  t = SSL_write_term_to_stream_baf(l_32, m_32);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_26);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm x_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_11 = ATgetArgument(t, 0);
      if(match_cons(l_11, sym_Stream_1))
        {
          x_22 = ATgetArgument(l_11, 0);
        }
      else
        _fail(t);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(x_22, z_22, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,s_23 = NULL,w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if(match_cons(m_11, sym_Stream_1))
        {
          w_23 = ATgetArgument(m_11, 0);
        }
      else
        _fail(t);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(w_23, x_23, t);
  p_23 = t;
  t = term_n_11;
  q_23 = t;
  t = p_23;
  if(match_cons(t, sym_Stream_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, p_23);
  t = g_6(q_23, s_23, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,u_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,g_28 = NULL,j_28 = NULL,f_2 = NULL,x_1 = NULL;
  q_26 = t;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  z_26 = t;
  t = a_27;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm d_4 (ATerm t);
        static ATerm d_4 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(d_4, t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = term_q_11;
        o_26 = t;
      }
  }
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_27, b_27);
  x_1 = t;
  t = SSLsetAnnotations(x_1, z_26);
  t = q_26;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_26);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_26, (ATerm) ATmakeAppl(sym__2, not_null(o_26), u_26));
  f_2 = t;
  t = SSLsetAnnotations(f_2, r_26);
  y_26 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,g_2 = NULL;
        t = SSLgetAnnotations(y_26);
        q_22 = t;
        t = g_28;
        t = fetch_1_0(k_4, t);
        t_22 = t;
        t = j_28;
        if(match_cons(t, sym__2))
          {
            v_22 = ATgetArgument(t, 0);
            w_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_6(l_4, v_22, w_22, t);
        u_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_22, u_22);
        g_2 = t;
        t = SSLsetAnnotations(g_2, q_22);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm i_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,h_2 = NULL;
          t = SSLgetAnnotations(y_26);
          i_23 = t;
          t = j_28;
          if(match_cons(t, sym__2))
            {
              m_23 = ATgetArgument(t, 0);
              n_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_6(m_4, m_23, n_23, t);
          l_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_28, l_23);
          h_2 = t;
          t = SSLsetAnnotations(h_2, i_23);
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
ATerm apply_strategy_1_0 (ATerm t_133 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL;
  u_28 = t;
  t = dtime_0_0(t);
  t = u_28;
  t = t_133(t);
  r_28 = t;
  t = dtime_0_0(t);
  o_28 = t;
  t = r_28;
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_28), (ATerm) ATmakeAppl(sym_Runtime_1, o_28)), q_28);
  return(t);
}
static ATerm j_29 (ATerm d_29, ATerm t)
{
  t = SSL_fclose(d_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_29 = ATgetArgument(t, 0);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_29);
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = j_29(h_29, t);
          }
      }
    }
  else
    {
      t = j_29(h_29, t);
    }
  return(t);
}
static ATerm k_6 (ATerm r_32, ATerm t)
{
  t = SSL_read_term_from_stream(r_32);
  return(t);
}
static ATerm l_6 (ATerm f_54, ATerm g_54, ATerm t)
{
  t = SSL_strcat(f_54, g_54);
  return(t);
}
static ATerm m_6 (ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm k_29 = NULL;
  t = SSL_fopen(l_34, m_34);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_29 = NULL;
  t = SSL_stdin_stream();
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_29 = NULL;
  t = SSL_stdout_stream();
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_29 = NULL;
  t = SSL_stderr_stream();
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_29);
  return(t);
}
static ATerm u_30 (ATerm t_29, ATerm t)
{
  ATerm u_29 = NULL;
  t = SSL_explode_term(t_29);
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_11 = ATgetArgument(t, 1);
        if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
          {
            u_29 = ATgetFirst((ATermList) w_11);
            {
              ATerm y_11 = (ATerm) ATgetNext((ATermList) w_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_30 (ATerm x_29, ATerm y_29, ATerm z_29, ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,f_30 = NULL,m_2 = NULL;
  t = SSLgetAnnotations(z_29);
  c_30 = t;
  t = x_29;
  if(match_cons(t, sym_Path_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_30, y_29);
  m_2 = t;
  t = SSLsetAnnotations(m_2, c_30);
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(a_30, b_30, t);
  return(t);
}
static ATerm w_30 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,p_30 = NULL,n_2 = NULL;
  t = SSLgetAnnotations(j_30);
  m_30 = t;
  t = SSL_is_string(h_30);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_30, i_30);
  n_2 = t;
  t = SSLsetAnnotations(n_2, m_30);
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(k_30, l_30, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  if(match_cons(t, sym__2))
    {
      s_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_30(r_30, t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm c_12 = t;
              int d_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_30(s_30, t_30, r_30, t);
                  LocalPopChoice(d_12);
                }
              else
                {
                  t = c_12;
                  t = w_30(s_30, t_30, r_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_30(r_30, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,f_31 = NULL;
  f_31 = t;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_31, term_h_12);
        t = n_6(t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        {
          ATerm n_24 = NULL,o_24 = NULL;
          t = term_j_12;
          o_24 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_12, f_31);
          t = l_6(o_24, f_31, t);
          n_24 = t;
          t = SSL_perror(n_24);
          _fail(t);
        }
      }
  }
  z_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(a_31, t);
  y_30 = t;
  t = z_30;
  t = fclose_0_0(t);
  t = y_30;
  return(t);
}
ATerm fetch_1_0 (ATerm a_118 (ATerm), ATerm t)
{
  static ATerm e_32 (ATerm t);
  static ATerm e_32 (ATerm t)
  {
    ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
    b_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_32 = ATgetFirst((ATermList) t);
        d_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_24 = NULL,w_24 = NULL,z_2 = NULL;
          t = SSLgetAnnotations(b_32);
          t_24 = t;
          t = c_32;
          t = a_118(t);
          w_24 = t;
          t = (ATerm) ATinsert(CheckATermList(d_32), w_24);
          z_2 = t;
          t = SSLsetAnnotations(z_2, t_24);
          LocalPopChoice(m_12);
        }
      else
        {
          t = l_12;
          {
            ATerm j_25 = NULL,n_25 = NULL,c_3 = NULL;
            t = SSLgetAnnotations(b_32);
            j_25 = t;
            t = d_32;
            t = e_32(t);
            n_25 = t;
            t = (ATerm) ATinsert(CheckATermList(n_25), c_32);
            c_3 = t;
            t = SSLsetAnnotations(c_3, j_25);
          }
        }
    }
    return(t);
  }
  t = e_32(t);
  return(t);
}
static ATerm s_6 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm h_32 = NULL;
  t = lookup_table_0_1(s_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(t_58, h_32, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm k_32 = NULL;
  k_32 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_32 = NULL,s_32 = NULL,t_32 = NULL;
        t = term_l_7;
        s_32 = t;
        t = term_r_12;
        t_32 = t;
        t = term_s_12;
        t = s_6(s_32, t_32, t);
        o_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_32, term_t_12);
        t = geq_0_0(t);
        t = k_32;
        t = w_114(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = k_32;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_12 = ATgetFirst((ATermList) t);
                ATerm x_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_32;
          }
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = (ATerm) ATinsert(ATempty, y_32);
      }
  }
  z_32 = t;
  t = term_q_11;
  a_33 = t;
  t = SSL_printnl(a_33, z_32);
  t = y_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL;
  t = term_l_7;
  e_33 = t;
  t = term_n_7;
  f_33 = t;
  t = term_o_7;
  t = s_6(e_33, f_33, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm h_33 = NULL;
  h_33 = t;
  if(match_string(t, "-k"))
    {
      t = h_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_33;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  t = SSL_string_to_int(i_33);
  j_33 = t;
  t = term_y_12;
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, j_33);
  t = v_6(k_33, j_33, t);
  t = i_33;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  if(match_string(t, "-S"))
    {
      t = m_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_33;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_r_12;
  n_33 = t;
  t = term_a_9;
  o_33 = t;
  t = term_a_13;
  t = v_6(n_33, o_33, t);
  t = term_b_13;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  t = SSL_string_to_int(p_33);
  q_33 = t;
  t = term_r_12;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_12, q_33);
  t = v_6(r_33, q_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_33);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_d_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  t = term_e_13;
  s_33 = t;
  t = term_h_7;
  t_33 = t;
  t = term_f_13;
  t = v_6(s_33, t_33, t);
  t = term_g_13;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = i_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_4, u_4, v_4, t);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = Option_3_0(w_4, x_4, y_4, t);
          }
      }
    }
  return(t);
}
static ATerm v_6 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  t = term_l_7;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_7, f_38, g_38);
  t = lookup_table_0_1(u_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(f_38, g_38, v_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_7, f_38, g_38);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL;
      t = term_h_7;
      t = f_0(t);
      b_34 = t;
      t = term_v_7;
      c_34 = t;
      t = term_w_7;
      d_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, b_34);
      t = t_6(c_34, d_34, b_34, t);
      _fail(t);
    }
  else
    {
      ATerm g_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_33 = ATgetFirst((ATermList) t);
          a_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_33;
      t = d_0(t);
      t = term_h_7;
      t = e_0(t);
      g_34 = t;
      t = (ATerm) ATinsert(CheckATermList(a_34), g_34);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  if(match_string(t, "-o"))
    {
      t = i_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_34;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL;
  p_34 = t;
  t = term_s_13;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, p_34);
  t = v_6(q_34, p_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_34);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, a_5, b_5, t);
  return(t);
}
static ATerm t_6 (ATerm z_56, ATerm a_57, ATerm y_56, ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
  {
    ATerm y_13 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_14 = ATgetArgument(t, 0);
            ATerm n_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_56, a_57);
        t = s_6(z_56, a_57, t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = y_13;
        t = (ATerm) ATempty;
      }
  }
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_56, a_57, (ATerm) ATinsert(CheckATermList(t_34), y_56));
  t = lookup_table_0_1(z_56, t);
  w_34 = t;
  t = (ATerm) ATinsert(CheckATermList(t_34), y_56);
  u_34 = t;
  t = w_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(a_57, u_34, v_34, t);
  t = s_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
      t = term_h_7;
      t = l_0(t);
      h_35 = t;
      t = term_v_7;
      i_35 = t;
      t = term_w_7;
      j_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_7, term_w_7, h_35);
      t = t_6(i_35, j_35, h_35, t);
      _fail(t);
    }
  else
    {
      ATerm n_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_35 = ATgetFirst((ATermList) t);
          e_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_35 = ATgetFirst((ATermList) t);
          g_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_35;
      t = h_0(t);
      t = f_35;
      t = k_0(t);
      n_35 = t;
      t = (ATerm) ATinsert(CheckATermList(g_35), n_35);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  if(match_string(t, "-i"))
    {
      t = p_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_35;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  q_35 = t;
  t = term_o_14;
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_14, q_35);
  t = v_6(r_35, q_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_35);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, e_5, i_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_7;
  t = whoami_0_0(t);
  s_35 = t;
  t = term_s_14;
  u_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_14), s_35);
  v_35 = t;
  t = SSL_printnl(u_35, v_35);
  t = term_c_9;
  t_35 = t;
  t = SSL_exit(t_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  t = term_l_7;
  w_35 = t;
  t = term_n_7;
  x_35 = t;
  t = term_o_7;
  t = s_6(w_35, x_35, t);
  return(t);
}
static ATerm o_6 (ATerm b_41, ATerm c_41, ATerm t)
{
  ATerm u_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_41, c_41);
      LocalPopChoice(y_14);
    }
  else
    {
      t = u_14;
      t = SSL_addr(b_41, c_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_35;
      t = n_123(t);
    }
  else
    {
      ATerm e_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_36 = ATgetFirst((ATermList) t);
          b_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_36;
      t = foldr_2_0(n_123, o_123, t);
      e_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_36, e_36);
      t = o_123(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_a_9;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(a_26, b_26, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_36 = NULL,t_25 = NULL,u_25 = NULL;
  t = times_0_0(t);
  u_25 = t;
  t = SSL_explode_term(u_25);
  if(match_cons(t, sym__2))
    {
      ATerm z_14 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_25;
  t = foldr_2_0(l_5, p_5, t);
  h_36 = t;
  t = SSL_TicksToSeconds(h_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_36;
        if((t_36 != t))
          {
            _fail(t);
          }
        t = s_36;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
        {
          ATerm c_15 = t;
          int d_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_36, u_36);
              LocalPopChoice(d_15);
            }
          else
            {
              t = c_15;
              t = SSL_gtr(t_36, u_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
        t = term_l_7;
        b_37 = t;
        t = term_r_12;
        c_37 = t;
        t = term_s_12;
        t = s_6(b_37, c_37, t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_37, term_c_9);
        t = geq_0_0(t);
        t = y_36;
        t = v_114(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = y_36;
      }
  }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,h_37 = NULL,i_37 = NULL;
  t = run_time_0_0(t);
  e_37 = t;
  t = term_h_7;
  t = whoami_0_0(t);
  f_37 = t;
  t = term_s_14;
  h_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_15), e_37), term_g_15), f_37);
  i_37 = t;
  t = SSL_printnl(h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_15), e_37), term_g_15), f_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_9;
  j_37 = t;
  t = SSL_exit(j_37);
  return(t);
}
static ATerm w_6 (ATerm k_61, ATerm l_61, ATerm m_61, ATerm t)
{
  ATerm k_37 = NULL;
  t = SSL_hashtable_put(m_61, k_61, l_61);
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_37);
  return(t);
}
static ATerm x_6 (ATerm n_61, ATerm o_61, ATerm t)
{
  t = SSL_hashtable_get(o_61, n_61);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_58, ATerm t)
{
  ATerm t_37 = NULL;
  t = table_hashtable_0_0(t);
  t_37 = t;
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_26 = NULL;
        t = t_37;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_6(l_58, t_26, t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm d_28 = NULL;
          t = l_58;
          t = table_create_0_0(t);
          t = t_37;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_6(l_58, d_28, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_61, ATerm t_61, ATerm t)
{
  ATerm w_37 = NULL;
  t = SSL_hashtable_create(s_61, t_61);
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_37);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,b_38 = NULL,c_38 = NULL;
  x_37 = t;
  t = term_l_15;
  b_38 = t;
  t = term_m_15;
  c_38 = t;
  t = x_37;
  t = new_hashtable_0_2(b_38, c_38, t);
  y_37 = t;
  t = x_37;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(x_37, y_37, z_37, t);
  t = x_37;
  return(t);
}
static ATerm q_6 (ATerm p_61, ATerm q_61, ATerm t)
{
  ATerm d_38 = NULL;
  t = SSL_hashtable_remove(q_61, p_61);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_38);
  return(t);
}
static ATerm r_6 (ATerm u_61, ATerm t)
{
  ATerm e_38 = NULL;
  t = SSL_hashtable_destroy(u_61);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_38);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_38 = NULL;
  t = SSL_table_hashtable();
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_38);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL;
  i_38 = t;
  t = table_hashtable_0_0(t);
  j_38 = t;
  t = lookup_table_0_1(i_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(l_38, t);
  t = j_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(i_38, k_38, t);
  t = i_38;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL;
  t = term_n_15;
  m_38 = t;
  t = term_h_7;
  n_38 = t;
  t = term_o_15;
  t = v_6(m_38, n_38, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_p_15;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  t = term_n_15;
  q_38 = t;
  t = term_h_7;
  r_38 = t;
  t = term_o_15;
  t = v_6(q_38, r_38, t);
  t = term_q_15;
  o_38 = t;
  t = term_h_7;
  p_38 = t;
  t = term_t_15;
  t = v_6(o_38, p_38, t);
  t = term_v_15;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_5, s_5, t_5, t);
      LocalPopChoice(b_16);
    }
  else
    {
      t = y_15;
      t = Option_3_0(u_5, v_5, x_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,w_3 = NULL;
  x_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_38 = ATgetFirst((ATermList) t);
      u_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_38);
  s_38 = t;
  t = t_38;
  t = v_90(t);
  v_38 = t;
  t = u_38;
  t = w_90(t);
  w_38 = t;
  t = (ATerm) ATinsert(CheckATermList(w_38), v_38);
  w_3 = t;
  t = SSLsetAnnotations(w_3, s_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_136 (ATerm), ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,h_39 = NULL,i_39 = NULL,z_3 = NULL;
  c_39 = t;
  {
    ATerm d_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_16;
        t = z_136(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = d_16;
      }
  }
  t = c_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_39 = ATgetFirst((ATermList) t);
      f_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_39);
  d_39 = t;
  t = term_n_7;
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, e_39);
  t = v_6(i_39, e_39, t);
  t = f_39;
  {
    static ATerm s_39 (ATerm t);
    static ATerm s_39 (ATerm t)
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_39 = NULL;
              l_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_39;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = z_136(t);
              t = Cons_2_0(_id, s_39, t);
            }
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            ATerm o_39 = NULL,p_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_39 = ATgetFirst((ATermList) t);
                p_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_39), (ATerm) ATmakeAppl(sym_Undefined_1, o_39));
          }
        }
      return(t);
    }
    t = s_39(t);
  }
  h_39 = t;
  t = (ATerm) ATinsert(CheckATermList(h_39), (ATerm) ATmakeAppl(sym_Program_1, e_39));
  z_3 = t;
  t = SSLsetAnnotations(z_3, d_39);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  if(match_string(t, "--help"))
    {
      t = f_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_40;
        }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  t = term_q_16;
  g_40 = t;
  t = term_h_7;
  h_40 = t;
  t = term_r_16;
  t = v_6(g_40, h_40, t);
  t = term_s_16;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_u_16;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm w_136 (ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
  z_39 = t;
  t = term_v_7;
  a_40 = t;
  t = term_v_16;
  t = lookup_table_0_1(a_40, t);
  e_40 = t;
  t = term_w_7;
  b_40 = t;
  t = (ATerm) ATempty;
  c_40 = t;
  t = e_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(b_40, c_40, d_40, t);
  t = z_39;
  {
    static ATerm y_5 (ATerm t);
    static ATerm y_5 (ATerm t)
    {
      ATerm w_16 = t;
      int y_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_136(t);
          LocalPopChoice(y_16);
        }
      else
        {
          t = w_16;
          {
            ATerm z_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_6, e_6, f_6, t);
                LocalPopChoice(a_17);
              }
            else
              {
                t = z_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_5, t);
  }
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_40 = NULL;
        s_40 = t;
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_28 = NULL;
              t = s_40;
              {
                ATerm f_17 = t;
                int g_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_28 = NULL,s_28 = NULL;
                    t = term_l_7;
                    m_28 = t;
                    t = term_q_16;
                    s_28 = t;
                    t = term_h_17;
                    t = s_6(m_28, s_28, t);
                    LocalPopChoice(g_17);
                  }
                else
                  {
                    t = f_17;
                    t = fetch_1_0(p_6, t);
                  }
              }
              t = s_40;
              t = x_136(t);
              t = term_a_9;
              l_28 = t;
              t = SSL_exit(l_28);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              {
                ATerm x_28 = NULL,y_28 = NULL,o_29 = NULL;
                t = term_l_7;
                y_28 = t;
                t = term_n_15;
                o_29 = t;
                t = term_i_17;
                t = s_6(y_28, o_29, t);
                t = s_40;
                t = y_136(t);
                t = term_a_9;
                x_28 = t;
                t = SSL_exit(x_28);
              }
            }
        }
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
              static ATerm u_6 (ATerm t);
              static ATerm u_6 (ATerm t)
              {
                ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,b_4 = NULL;
                y_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_40);
                w_40 = t;
                t = x_40;
                if(((x_39 != NULL) && (x_39 != t)))
                  _fail(t);
                else
                  x_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_40);
                b_4 = t;
                t = SSLsetAnnotations(b_4, w_40);
                return(t);
              }
              t = fetch_1_0(u_6, t);
              t = term_s_14;
              u_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_39)), term_m_17);
              v_40 = t;
              t = SSL_printnl(u_40, v_40);
              t = (ATerm) ATmakeAppl(sym__2, term_s_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_39)), term_m_17));
              t = x_136(t);
              t = term_c_9;
              t_40 = t;
              t = SSL_exit(t_40);
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
            }
        }
      }
  }
  y_39 = t;
  t = term_v_7;
  t = table_destroy_0_0(t);
  t = y_39;
  return(t);
}
ATerm option_wrap_5_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm), ATerm d_135 (ATerm), ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  t = parse_options_3_0(z_134, a_135, b_135, t);
  f_41 = t;
  t = term_o_17;
  t = table_create_0_0(t);
  t = term_o_17;
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_17, term_p_17, f_41);
  t = lookup_table_0_1(g_41, t);
  j_41 = t;
  t = term_p_17;
  h_41 = t;
  t = j_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(h_41, f_41, i_41, t);
  t = f_41;
  t = c_135(t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_135(t);
        t = report_success_0_0(t);
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = if_verbose2_1_0(e_7, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL;
  t = term_t_17;
  k_41 = t;
  t = term_h_7;
  l_41 = t;
  t = term_u_17;
  t = v_6(k_41, l_41, t);
  t = term_v_17;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_w_17;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  m_41 = t;
  t = term_l_7;
  q_41 = t;
  t = term_n_7;
  r_41 = t;
  t = term_o_7;
  t = s_6(q_41, r_41, t);
  n_41 = t;
  t = term_s_14;
  o_41 = t;
  t = (ATerm) ATinsert(ATempty, n_41);
  p_41 = t;
  t = SSL_printnl(o_41, p_41);
  t = m_41;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm t)
{
  static ATerm y_6 (ATerm t);
  static ATerm a_7 (ATerm t);
  static ATerm y_6 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_134(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
              {
                ATerm b_18 = t;
                int c_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(c_18);
                  }
                else
                  {
                    t = b_18;
                    {
                      ATerm d_18 = t;
                      int e_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_7, c_7, d_7, t);
                          LocalPopChoice(e_18);
                        }
                      else
                        {
                          t = d_18;
                          {
                            ATerm f_18 = t;
                            int g_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(g_18);
                              }
                            else
                              {
                                t = f_18;
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
  static ATerm a_7 (ATerm t)
  {
    ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
    t_41 = t;
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm f_7 (ATerm t);
          static ATerm f_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_41 != NULL) && (s_41 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_41 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_7, t);
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = term_j_18;
          s_41 = t;
        }
    }
    t = not_null(s_41);
    t = ReadFromFile_0_0(t);
    u_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
    t = apply_strategy_1_0(c_134, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(y_6, e_134, default_system_about_0_0, z_6, a_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,j_4 = NULL,h_4 = NULL,g_4 = NULL,f_4 = NULL,e_4 = NULL;
  o_42 = t;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_42);
  v_41 = t;
  t = x_41;
  if(match_cons(t, sym_Specification_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_41);
  y_41 = t;
  t = z_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_42 = ATgetFirst((ATermList) t);
      d_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_41);
  b_42 = t;
  t = d_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_42 = ATgetFirst((ATermList) t);
      i_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_42);
  f_42 = t;
  t = g_42;
  if(match_cons(t, sym_Strategies_1))
    {
      l_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_42);
  k_42 = t;
  t = l_42;
  t = rename_sdefs_0_0(t);
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_42);
  e_4 = t;
  t = SSLsetAnnotations(e_4, k_42);
  n_42 = t;
  t = i_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_42), n_42);
  f_4 = t;
  t = SSLsetAnnotations(f_4, f_42);
  j_42 = t;
  t = (ATerm) ATinsert(CheckATermList(j_42), c_42);
  g_4 = t;
  t = SSLsetAnnotations(g_4, b_42);
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_42);
  h_4 = t;
  t = SSLsetAnnotations(h_4, y_41);
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_41, a_42);
  j_4 = t;
  t = SSLsetAnnotations(j_4, v_41);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_7, _fail, default_system_usage_0_0, t);
  return(t);
}

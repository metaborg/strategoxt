#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Mod_2;
static Symbol sym_SVar_1;
static Symbol sym_Path_2;
static Symbol sym_CallT_3;
static Symbol sym_Call_2;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Path_1;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
static ATerm term_c_17;
static ATerm term_b_17;
static ATerm term_a_17;
static ATerm term_p_16;
static ATerm term_k_16;
static ATerm term_j_16;
static ATerm term_f_16;
static ATerm term_c_16;
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_j_15;
static ATerm term_i_15;
static ATerm term_h_15;
static ATerm term_c_15;
static ATerm term_w_14;
static ATerm term_v_14;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_n_14;
static ATerm term_m_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_f_14;
static ATerm term_s_13;
static ATerm term_r_13;
static ATerm term_q_13;
static ATerm term_l_13;
static ATerm term_b_13;
static ATerm term_z_12;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_s_12;
static ATerm term_q_12;
static ATerm term_p_12;
static ATerm term_m_12;
static ATerm term_l_12;
static ATerm term_k_12;
static ATerm term_j_12;
static ATerm term_g_12;
static ATerm term_d_12;
static ATerm term_c_12;
static ATerm term_b_12;
static ATerm term_a_12;
static ATerm term_v_11;
static ATerm term_u_11;
static ATerm term_p_11;
static ATerm term_o_11;
static ATerm term_n_11;
static ATerm term_m_11;
static ATerm term_l_11;
static ATerm term_i_11;
static ATerm term_h_11;
static ATerm term_p_10;
static ATerm term_m_10;
static ATerm term_g_10;
static ATerm term_f_10;
static ATerm term_e_10;
static ATerm term_c_10;
static ATerm term_v_9;
static ATerm term_s_9;
static ATerm term_o_9;
static ATerm term_k_9;
static ATerm term_h_9;
static ATerm term_d_9;
static ATerm term_y_8;
static ATerm term_v_8;
static ATerm term_q_8;
static ATerm term_p_8;
static ATerm term_n_8;
static ATerm term_i_8;
static ATerm term_g_8;
static ATerm term_e_8;
static ATerm term_c_8;
static ATerm term_m_7;
static ATerm term_h_7;
static ATerm term_z_6;
static ATerm term_y_6;
static ATerm term_p_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(98);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(113);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_m_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_o_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_c_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_y_6);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_6);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_u_11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_l_12);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_u_11);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_u_11);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_u_11);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, (ATerm) ATempty);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_h_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_q_14);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_u_11);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm RenameVar_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm RenameCall_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm i_116 (ATerm), ATerm t);
static ATerm w_5 (ATerm s_151 (ATerm), ATerm i_75, ATerm g_75, ATerm t);
static ATerm y_5 (ATerm p_58, ATerm q_58, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm q_139 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm RenameSDef_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm rename_sdefs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t);
static ATerm a_6 (ATerm h_35, ATerm i_35, ATerm t);
static ATerm b_6 (ATerm n_33, ATerm o_33, ATerm t);
static ATerm d_6 (ATerm x_123 (ATerm), ATerm x_258, ATerm t_33, ATerm t);
static ATerm c_6 (ATerm j_33, ATerm k_33, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_1_0 (ATerm s_146 (ATerm), ATerm t);
static ATerm c_23 (ATerm r_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_6 (ATerm p_33, ATerm t);
static ATerm f_6 (ATerm m_55, ATerm n_55, ATerm t);
static ATerm g_6 (ATerm j_35, ATerm k_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_26 (ATerm c_24, ATerm t);
static ATerm n_26 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t);
static ATerm o_26 (ATerm z_25, ATerm a_26, ATerm b_26, ATerm t);
static ATerm h_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm t_146 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_128 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_6 (ATerm d_39, ATerm e_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_6 (ATerm e_58, ATerm f_58, ATerm d_58, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_6 (ATerm c_42, ATerm d_42, ATerm t);
ATerm foldr_2_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_125 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_6 (ATerm t_62, ATerm u_62, ATerm v_62, ATerm t);
ATerm lookup_table_0_1 (ATerm q_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_63, ATerm c_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_6 (ATerm y_62, ATerm z_62, ATerm t);
static ATerm l_6 (ATerm d_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_128 (ATerm), ATerm t);
static ATerm s_6 (ATerm w_62, ATerm x_62, ATerm t);
static ATerm n_6 (ATerm x_59, ATerm y_59, ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm m_148 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm parse_options_3_0 (ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm m_146 (ATerm), ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm RenameVar_0_0 (ATerm t)
{
  ATerm g_1 = NULL,i_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym__2))
    {
      ATerm v_5 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  if(match_cons(t, sym__2))
    {
      ATerm x_5 = ATgetArgument(t, 0);
      ATerm z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,u_1 = NULL;
        t = term_p_6;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_6, g_1);
        t = y_5(u_1, g_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            r_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_1;
        LocalPopChoice(m_6);
      }
    else
      {
        t = j_6;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL,a_3 = NULL;
              t = term_p_6;
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_6, g_1);
              t = y_5(a_3, g_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_6 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_6) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  s_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_2;
              LocalPopChoice(v_6);
            }
          else
            {
              t = u_6;
              {
                ATerm e_3 = NULL,k_3 = NULL;
                t = term_p_6;
                k_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_6, g_1);
                t = y_5(k_3, g_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_6 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_6) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    e_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_3;
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(k_4, l_4, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(m_4, n_4, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(f_5, g_5, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,f_3 = NULL,i_3 = NULL,j_3 = NULL;
  x_2 = t;
  if(match_cons(t, sym_CallT_3))
    {
      f_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      w_2 = ATgetArgument(t, 2);
      {
        ATerm w_3 = NULL,a_4 = NULL,g_4 = NULL;
        t = f_3;
        if(match_cons(t, sym_SVar_1))
          {
            i_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_3;
        t = foldr_3_0(c_0, q_0, v_0, t);
        w_3 = t;
        t = w_2;
        t = foldr_3_0(w_0, y_0, a_1, t);
        a_4 = t;
        {
          ATerm a_7 = t;
          int b_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATmakeAppl(sym__2, w_3, a_4));
              t = RenameVar_0_0(t);
              g_4 = t;
              LocalPopChoice(b_7);
            }
          else
            {
              t = a_7;
              t = i_3;
              t = HoArg_0_0(t);
              g_4 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_4), j_3, w_2);
      }
    }
  else
    {
      ATerm y_4 = NULL,c_5 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          f_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_3;
      if(match_cons(t, sym_SVar_1))
        {
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_3;
      t = foldr_3_0(c_1, f_1, h_1, t);
      y_4 = t;
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, i_3, y_4);
            t = RenameVar_0_0(t);
            c_5 = t;
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            t = i_3;
            t = HoArg_0_0(t);
            c_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_5), j_3);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_116 (ATerm), ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    t = topdown_1_0(i_116, t);
    return(t);
  }
  t = i_116(t);
  t = SRTS_all(j_1, t);
  return(t);
}
static ATerm w_5 (ATerm s_151 (ATerm), ATerm i_75, ATerm g_75, ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL;
  y_3 = t;
  t = s_151(t);
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_3, i_75, g_75);
  t = o_6(u_3, i_75, g_75, t);
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 = NULL;
        t = term_h_7;
        f_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_3, term_h_7);
        t = n_6(u_3, f_4, t);
        {
          ATerm i_7 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_7;
            }
        }
        LocalPopChoice(g_7);
      }
    else
      {
        t = f_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_3 = ATgetFirst((ATermList) t);
      x_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_3, term_h_7, (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATinsert(CheckATermList(v_3), i_75)));
  t = lookup_table_0_1(u_3, t);
  e_4 = t;
  t = term_h_7;
  z_3 = t;
  t = (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATinsert(CheckATermList(v_3), i_75));
  b_4 = t;
  t = e_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(z_3, b_4, d_4, t);
  t = y_3;
  return(t);
}
static ATerm y_5 (ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm h_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
  t = n_6(p_58, q_58, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_4 = ATgetFirst((ATermList) t);
      {
        ATerm j_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_m_7;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
        t = y_5(s_7, e_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = e_7;
        _fail(t);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          ATerm n_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_7 = NULL,h_8 = NULL;
              t = term_m_7;
              h_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
              t = y_5(h_8, e_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("r_0", 0, ATtrue)))
                    _fail(t);
                  y_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_7;
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
              {
                ATerm q_7 = t;
                int r_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_8 = NULL;
                    t = term_m_7;
                    o_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                    t = y_5(o_8, e_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = e_7;
                    _fail(t);
                    LocalPopChoice(r_7);
                  }
                else
                  {
                    t = q_7;
                    {
                      ATerm t_7 = t;
                      int u_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_8 = NULL,b_9 = NULL;
                          t = term_m_7;
                          b_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                          t = y_5(b_9, e_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm w_7 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) w_7) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              x_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = x_8;
                          LocalPopChoice(u_7);
                        }
                      else
                        {
                          t = t_7;
                          {
                            ATerm x_7 = t;
                            int z_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_9 = NULL;
                                t = term_m_7;
                                l_9 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                                t = y_5(l_9, e_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = e_7;
                                _fail(t);
                                LocalPopChoice(z_7);
                              }
                            else
                              {
                                t = x_7;
                                {
                                  ATerm q_9 = NULL,b_10 = NULL;
                                  t = term_m_7;
                                  b_10 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                                  t = y_5(b_10, e_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm b_8 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) b_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      q_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = q_9;
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
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm v_7 = NULL,a_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_7 = ATgetFirst((ATermList) t);
      a_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_7;
  if(match_int(t, 92))
    {
      ATerm d_8 = NULL;
      t = a_8;
      t = t_0(t);
      d_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_c_8), term_e_8), term_c_8);
    }
  else
    {
      if(match_int(t, 34))
        {
          ATerm f_8 = NULL;
          t = a_8;
          t = t_0(t);
          f_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(f_8), term_c_8), term_g_8), term_c_8);
        }
      else
        {
          if(match_int(t, 95))
            {
              ATerm r_8 = NULL;
              t = a_8;
              t = t_0(t);
              r_8 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(r_8), term_c_8), term_c_8);
            }
          else
            {
              if(match_int(t, 45))
                {
                  ATerm t_8 = NULL;
                  t = a_8;
                  t = t_0(t);
                  t_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_8), term_c_8);
                }
              else
                {
                  ATerm w_8 = NULL;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
                    _fail(t);
                  t = a_8;
                  t = t_0(t);
                  w_8 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(w_8), term_c_8), term_i_8), term_c_8);
                }
            }
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm q_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_8 = NULL,e_9 = NULL;
  e_9 = t;
  t = SSL_explode_string(e_9);
  {
    static ATerm d_10 (ATerm t);
    static ATerm d_10 (ATerm t)
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_139(d_10, t);
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
            z_9 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_9 = ATgetFirst((ATermList) t);
                y_9 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm k_10 = NULL,n_10 = NULL,a_0 = NULL;
                  t = SSLgetAnnotations(z_9);
                  k_10 = t;
                  t = y_9;
                  t = d_10(t);
                  n_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(n_10), x_9);
                  a_0 = t;
                  t = SSLsetAnnotations(a_0, k_10);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_9;
              }
          }
        }
      return(t);
    }
    t = d_10(t);
  }
  z_8 = t;
  t = SSL_implode_string(z_8);
  return(t);
}
ATerm foldr_3_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm i_134 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,j_10 = NULL,o_10 = NULL;
  h_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_10;
      t = g_134(t);
    }
  else
    {
      ATerm t_10 = NULL,u_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_10 = ATgetFirst((ATermList) t);
          o_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_10;
      t = i_134(t);
      t_10 = t;
      t = o_10;
      t = foldr_3_0(g_134, h_134, i_134, t);
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
      t = h_134(t);
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      d_13 = ATgetArgument(t, 0);
      e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(d_13, e_13, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(i_13, j_13, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(l_16, m_16, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(n_16, o_16, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(b_20, c_20, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(i_20, j_20, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_p_6;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,d_20 = NULL,e_20 = NULL;
  y_19 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
      d_20 = ATgetArgument(t, 2);
      e_20 = ATgetArgument(t, 3);
      {
        ATerm n_12 = NULL,o_12 = NULL,r_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL,c_13 = NULL,t_13 = NULL,y_13 = NULL;
        t = a_20;
        t = foldr_3_0(k_1, l_1, n_1, t);
        n_12 = t;
        t = d_20;
        t = foldr_3_0(p_1, q_1, s_1, t);
        o_12 = t;
        t = z_19;
        if(match_cons(t, sym_Mod_2))
          {
            t_13 = ATgetArgument(t, 0);
            y_13 = ATgetArgument(t, 1);
            {
              ATerm l_8 = t;
              int m_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_15 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_13), term_n_8), t_13);
                  a_15 = t;
                  t = SSL_concat_strings(a_15);
                  LocalPopChoice(m_8);
                }
              else
                {
                  t = l_8;
                  t = z_19;
                }
            }
          }
        else
          {
            t = z_19;
          }
        t = escape_1_0(Cify_1_0, t);
        v_12 = t;
        t = SSL_int_to_string(n_12);
        w_12 = t;
        t = SSL_int_to_string(o_12);
        x_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_12), term_p_8), w_12), term_p_8), v_12);
        c_13 = t;
        t = SSL_concat_strings(c_13);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym__2, n_12, o_12));
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_8, r_12);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym__2, n_12, o_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_8, r_12));
        t = w_5(t_1, y_12, a_13, t);
        t = r_12;
        {
          ATerm s_8 = t;
          int u_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_14 = NULL,g_14 = NULL;
              t = z_19;
              t = HoArg_0_0(t);
              c_14 = t;
              t = term_v_8;
              g_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_19, term_v_8);
              t = w_5(v_1, z_19, g_14, t);
              t = c_14;
              LocalPopChoice(u_8);
            }
          else
            {
              t = s_8;
              {
                ATerm h_14 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_8, r_12);
                h_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym_Defined_2, term_y_8, r_12));
                t = w_5(z_1, z_19, h_14, t);
                t = r_12;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, r_12, a_20, d_20, e_20);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          z_19 = ATgetArgument(t, 0);
          a_20 = ATgetArgument(t, 1);
          d_20 = ATgetArgument(t, 2);
          {
            ATerm o_15 = NULL,p_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,w_15 = NULL,d_16 = NULL,e_16 = NULL,i_16 = NULL,d_17 = NULL,e_17 = NULL;
            t = a_20;
            t = foldr_3_0(a_2, b_2, c_2, t);
            o_15 = t;
            t = d_20;
            t = foldr_3_0(d_2, e_2, f_2, t);
            p_15 = t;
            t = z_19;
            if(match_cons(t, sym_Mod_2))
              {
                d_17 = ATgetArgument(t, 0);
                e_17 = ATgetArgument(t, 1);
                {
                  ATerm a_9 = t;
                  int c_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_17), term_n_8), d_17);
                      k_18 = t;
                      t = SSL_concat_strings(k_18);
                      LocalPopChoice(c_9);
                    }
                  else
                    {
                      t = a_9;
                      t = z_19;
                    }
                }
              }
            else
              {
                t = z_19;
              }
            t = escape_1_0(Cify_1_0, t);
            t_15 = t;
            t = SSL_int_to_string(o_15);
            u_15 = t;
            t = SSL_int_to_string(p_15);
            w_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_15), term_p_8), u_15), term_p_8), t_15);
            i_16 = t;
            t = SSL_concat_strings(i_16);
            s_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym__2, o_15, p_15));
            d_16 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, s_15);
            e_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym__2, o_15, p_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, s_15));
            t = w_5(g_2, d_16, e_16, t);
            t = s_15;
            {
              ATerm f_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_17 = NULL,r_17 = NULL;
                  t = z_19;
                  t = HoArg_0_0(t);
                  n_17 = t;
                  t = term_v_8;
                  r_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_19, term_v_8);
                  t = w_5(h_2, z_19, r_17, t);
                  t = n_17;
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
                  {
                    ATerm t_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, s_15);
                    t_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, s_15));
                    t = w_5(i_2, z_19, t_17, t);
                    t = s_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, s_15, a_20, d_20);
          }
        }
      else
        {
          ATerm y_18 = NULL,d_19 = NULL,i_19 = NULL,j_19 = NULL,l_19 = NULL,o_19 = NULL,p_19 = NULL,s_19 = NULL,t_19 = NULL,c_21 = NULL,d_21 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              z_19 = ATgetArgument(t, 0);
              a_20 = ATgetArgument(t, 1);
              d_20 = ATgetArgument(t, 2);
              e_20 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = a_20;
          t = foldr_3_0(j_2, k_2, l_2, t);
          y_18 = t;
          t = d_20;
          t = foldr_3_0(m_2, n_2, o_2, t);
          d_19 = t;
          t = z_19;
          if(match_cons(t, sym_Mod_2))
            {
              c_21 = ATgetArgument(t, 0);
              d_21 = ATgetArgument(t, 1);
              {
                ATerm i_9 = t;
                int j_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_22 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_21), term_n_8), c_21);
                    j_22 = t;
                    t = SSL_concat_strings(j_22);
                    LocalPopChoice(j_9);
                  }
                else
                  {
                    t = i_9;
                    t = z_19;
                  }
              }
            }
          else
            {
              t = z_19;
            }
          t = escape_1_0(Cify_1_0, t);
          j_19 = t;
          t = SSL_int_to_string(y_18);
          l_19 = t;
          t = SSL_int_to_string(d_19);
          o_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_19), term_p_8), l_19), term_p_8), j_19);
          t_19 = t;
          t = SSL_concat_strings(t_19);
          i_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym__2, y_18, d_19));
          p_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, i_19);
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym__2, y_18, d_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, i_19));
          t = w_5(p_2, p_19, s_19, t);
          t = i_19;
          {
            ATerm m_9 = t;
            int n_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_21 = NULL,p_21 = NULL;
                t = z_19;
                t = HoArg_0_0(t);
                n_21 = t;
                t = term_v_8;
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_19, term_v_8);
                t = w_5(q_2, z_19, p_21, t);
                t = n_21;
                LocalPopChoice(n_9);
              }
            else
              {
                t = m_9;
                {
                  ATerm w_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_9, i_19);
                  w_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_19, (ATerm) ATmakeAppl(sym_Defined_2, term_o_9, i_19));
                  t = w_5(r_2, z_19, w_21, t);
                  t = i_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, i_19, a_20, d_20, e_20);
        }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = topdown_1_0(u_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm p_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = p_9;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(t_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,v_20 = NULL,y_20 = NULL,z_20 = NULL,i_0 = NULL;
  z_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_20 = ATgetFirst((ATermList) t);
      s_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_20);
  q_20 = t;
  t = r_20;
  t = p_91(t);
  v_20 = t;
  t = s_20;
  t = q_91(t);
  y_20 = t;
  t = (ATerm) ATinsert(CheckATermList(y_20), v_20);
  i_0 = t;
  t = SSLsetAnnotations(i_0, q_20);
  return(t);
}
static ATerm a_6 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm a_21 = NULL;
  t = SSL_fputc(h_35, i_35);
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_21);
  return(t);
}
static ATerm b_6 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_write_term_to_stream_text(n_33, o_33);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_21);
  return(t);
}
static ATerm d_6 (ATerm x_123 (ATerm), ATerm x_258, ATerm t_33, ATerm t)
{
  ATerm e_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_258, term_s_9);
  t = h_6(t);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_21, t_33);
  t = x_123(t);
  t = fclose_0_0(t);
  t = t_33;
  return(t);
}
static ATerm c_6 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm f_21 = NULL;
  t = SSL_write_term_to_stream_baf(j_33, k_33);
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_21);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_9 = ATgetArgument(t, 0);
      if(match_cons(t_9, sym_Stream_1))
        {
          r_21 = ATgetArgument(t_9, 0);
        }
      else
        _fail(t);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(r_21, s_21, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,x_21 = NULL,y_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_9 = ATgetArgument(t, 0);
      if(match_cons(u_9, sym_Stream_1))
        {
          x_21 = ATgetArgument(u_9, 0);
        }
      else
        _fail(t);
      y_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(x_21, y_21, t);
  t_21 = t;
  t = term_v_9;
  u_21 = t;
  t = t_21;
  if(match_cons(t, sym_Stream_1))
    {
      v_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, t_21);
  t = a_6(u_21, v_21, t);
  return(t);
}
ATerm output_1_0 (ATerm s_146 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  t = s_146(t);
  h_21 = t;
  {
    ATerm w_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_21 = NULL,l_21 = NULL;
        t = term_c_10;
        k_21 = t;
        t = term_e_10;
        l_21 = t;
        t = term_f_10;
        t = n_6(k_21, l_21, t);
        LocalPopChoice(a_10);
      }
    else
      {
        t = w_9;
        t = term_g_10;
      }
  }
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
  {
    ATerm i_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL,q_21 = NULL;
        t = term_c_10;
        o_21 = t;
        t = term_m_10;
        q_21 = t;
        t = term_p_10;
        t = n_6(o_21, q_21, t);
        t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
        LocalPopChoice(l_10);
        if(match_cons(t, sym__2))
          {
            ATerm q_10 = ATgetArgument(t, 0);
            ATerm r_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_6(v_2, g_21, h_21, t);
      }
    else
      {
        t = i_10;
        if(match_cons(t, sym__2))
          {
            ATerm s_10 = ATgetArgument(t, 0);
            ATerm v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_6(y_2, g_21, h_21, t);
      }
  }
  return(t);
}
static ATerm c_23 (ATerm r_22, ATerm t)
{
  t = SSL_fclose(r_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  y_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_22 = ATgetArgument(t, 0);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_22);
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = c_23(y_22, t);
          }
      }
    }
  else
    {
      t = c_23(y_22, t);
    }
  return(t);
}
static ATerm e_6 (ATerm p_33, ATerm t)
{
  t = SSL_read_term_from_stream(p_33);
  return(t);
}
static ATerm f_6 (ATerm m_55, ATerm n_55, ATerm t)
{
  t = SSL_strcat(m_55, n_55);
  return(t);
}
static ATerm g_6 (ATerm j_35, ATerm k_35, ATerm t)
{
  ATerm d_23 = NULL;
  t = SSL_fopen(j_35, k_35);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_23 = NULL;
  t = SSL_stdin_stream();
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_23 = NULL;
  t = SSL_stdout_stream();
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = SSL_stderr_stream();
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_23);
  return(t);
}
static ATerm m_26 (ATerm c_24, ATerm t)
{
  ATerm d_24 = NULL;
  t = SSL_explode_term(c_24);
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_10 = ATgetArgument(t, 1);
        if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
          {
            d_24 = ATgetFirst((ATermList) z_10);
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
  t = d_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_26 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm d_25 = NULL,g_25 = NULL,i_25 = NULL,x_25 = NULL,s_0 = NULL;
  t = SSLgetAnnotations(t_24);
  i_25 = t;
  t = r_24;
  if(match_cons(t, sym_Path_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_25, s_24);
  s_0 = t;
  t = SSLsetAnnotations(s_0, i_25);
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(d_25, g_25, t);
  return(t);
}
static ATerm o_26 (ATerm z_25, ATerm a_26, ATerm b_26, ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,h_26 = NULL,u_0 = NULL;
  t = SSLgetAnnotations(b_26);
  e_26 = t;
  t = SSL_is_string(z_25);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_26, a_26);
  u_0 = t;
  t = SSLsetAnnotations(u_0, e_26);
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(c_26, d_26, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
  j_26 = t;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      l_26 = ATgetArgument(t, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_26(j_26, t);
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
                  t = n_26(k_26, l_26, j_26, t);
                  LocalPopChoice(e_11);
                }
              else
                {
                  t = d_11;
                  t = o_26(k_26, l_26, j_26, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_26(j_26, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,x_26 = NULL;
  x_26 = t;
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_26, term_h_11);
        t = h_6(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        {
          ATerm h_23 = NULL,k_23 = NULL;
          t = term_i_11;
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_11, x_26);
          t = f_6(k_23, x_26, t);
          h_23 = t;
          t = SSL_perror(h_23);
          _fail(t);
        }
      }
  }
  r_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(s_26, t);
  q_26 = t;
  t = r_26;
  t = fclose_0_0(t);
  t = q_26;
  return(t);
}
ATerm input_1_0 (ATerm t_146 (ATerm), ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_27 = NULL,b_27 = NULL;
      t = term_c_10;
      a_27 = t;
      t = term_l_11;
      b_27 = t;
      t = term_m_11;
      t = n_6(a_27, b_27, t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = term_n_11;
    }
  t = ReadFromFile_0_0(t);
  t = t_146(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  t = term_c_10;
  c_27 = t;
  t = term_o_11;
  d_27 = t;
  t = term_p_11;
  t = n_6(c_27, d_27, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_11 = ATgetFirst((ATermList) t);
                ATerm t_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_27;
          }
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATinsert(ATempty, f_27);
      }
  }
  g_27 = t;
  t = term_g_10;
  h_27 = t;
  t = SSL_printnl(h_27, g_27);
  t = f_27;
  return(t);
}
ATerm map_1_0 (ATerm j_128 (ATerm), ATerm t)
{
  static ATerm b_28 (ATerm t);
  static ATerm b_28 (ATerm t)
  {
    ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
    y_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_27;
      }
    else
      {
        ATerm p_23 = NULL,s_23 = NULL,t_23 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_27 = ATgetFirst((ATermList) t);
            a_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_27);
        p_23 = t;
        t = z_27;
        t = j_128(t);
        s_23 = t;
        t = a_28;
        t = b_28(t);
        t_23 = t;
        t = (ATerm) ATinsert(CheckATermList(t_23), s_23);
        x_0 = t;
        t = SSLsetAnnotations(x_0, p_23);
      }
    return(t);
  }
  t = b_28(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_28 = ATgetFirst((ATermList) t);
      f_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_28 = NULL,k_28 = NULL;
        static ATerm z_2 (ATerm t);
        static ATerm z_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_28)), not_null(k_28));
          return(t);
        }
        t = f_28;
        t = p_0(t);
        if(((j_28 != NULL) && (j_28 != t)))
          _fail(t);
        else
          j_28 = t;
        t = e_28;
        t = n_0(t);
        if(((k_28 != NULL) && (k_28 != t)))
          _fail(t);
        else
          k_28 = t;
        t = f_28;
        t = reverse_acc_2_0(n_0, z_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_11;
      t = p_0(t);
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,z_0 = NULL;
  u_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_28);
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_28);
  z_0 = t;
  t = SSLsetAnnotations(z_0, s_28);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_28), term_v_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm r_148 (ATerm), ATerm s_148 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_28 = NULL,r_28 = NULL;
      t = term_c_10;
      q_28 = t;
      t = term_o_11;
      r_28 = t;
      t = term_p_11;
      t = n_6(q_28, r_28, t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(b_3, t);
    }
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_148(t);
        t = echo_0_0(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
      }
  }
  t = term_a_12;
  t = echo_0_0(t);
  t = term_b_12;
  o_28 = t;
  t = term_c_12;
  p_28 = t;
  t = term_d_12;
  t = n_6(o_28, p_28, t);
  t = reverse_acc_2_0(_id, c_3, t);
  t = map_1_0(d_3, t);
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        t = s_148(t);
        z_28 = t;
        t = (ATerm) ATinsert(CheckATermList(z_28), term_g_12);
        t = echo_0_0(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,b_1 = NULL;
  h_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_29);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_29);
  b_1 = t;
  t = SSLsetAnnotations(b_1, f_29);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_29 = NULL,e_29 = NULL;
        t = term_c_10;
        d_29 = t;
        t = term_o_11;
        e_29 = t;
        t = term_p_11;
        t = n_6(d_29, e_29, t);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = fetch_1_0(g_3, t);
      }
  }
  t = c_29;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  if(match_string(t, "-k"))
    {
      t = j_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_29;
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
  k_29 = t;
  t = SSL_string_to_int(k_29);
  l_29 = t;
  t = term_j_12;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, l_29);
  t = q_6(m_29, l_29, t);
  t = k_29;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_k_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_3, l_3, m_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  if(match_string(t, "-S"))
    {
      t = o_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_29;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  t = term_l_12;
  p_29 = t;
  t = term_y_6;
  q_29 = t;
  t = term_m_12;
  t = q_6(p_29, q_29, t);
  t = term_p_12;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_q_12;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  t = SSL_string_to_int(r_29);
  s_29 = t;
  t = term_l_12;
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, s_29);
  t = q_6(t_29, s_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_29);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  t = term_t_12;
  u_29 = t;
  t = term_u_11;
  v_29 = t;
  t = term_u_12;
  t = q_6(u_29, v_29, t);
  t = term_z_12;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, o_3, p_3, t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
        ATerm h_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, r_3, s_3, t);
            LocalPopChoice(k_13);
          }
        else
          {
            t = h_13;
            t = Option_3_0(t_3, c_4, i_4, t);
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  t = term_c_10;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, d_39, e_39);
  t = lookup_table_0_1(w_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(d_39, e_39, x_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, d_39, e_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
      t = term_u_11;
      t = f_0(t);
      d_30 = t;
      t = term_b_12;
      e_30 = t;
      t = term_c_12;
      f_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, d_30);
      t = o_6(e_30, f_30, d_30, t);
      _fail(t);
    }
  else
    {
      ATerm i_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_30 = ATgetFirst((ATermList) t);
          c_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_30;
      t = d_0(t);
      t = term_u_11;
      t = e_0(t);
      i_30 = t;
      t = (ATerm) ATinsert(CheckATermList(c_30), i_30);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  if(match_string(t, "-o"))
    {
      t = k_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_30;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  l_30 = t;
  t = term_e_10;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, l_30);
  t = q_6(m_30, l_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_30);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, o_4, p_4, t);
  return(t);
}
static ATerm o_6 (ATerm e_58, ATerm f_58, ATerm d_58, ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_58, f_58);
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_13 = ATgetArgument(t, 0);
            ATerm p_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_58, f_58);
        t = n_6(e_58, f_58, t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = (ATerm) ATempty;
      }
  }
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_58, f_58, (ATerm) ATinsert(CheckATermList(p_30), d_58));
  t = lookup_table_0_1(e_58, t);
  s_30 = t;
  t = (ATerm) ATinsert(CheckATermList(p_30), d_58);
  q_30 = t;
  t = s_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(f_58, q_30, r_30, t);
  t = o_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
      t = term_u_11;
      t = l_0(t);
      d_31 = t;
      t = term_b_12;
      e_31 = t;
      t = term_c_12;
      f_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, d_31);
      t = o_6(e_31, f_31, d_31, t);
      _fail(t);
    }
  else
    {
      ATerm j_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_30 = ATgetFirst((ATermList) t);
          a_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_31 = ATgetFirst((ATermList) t);
          c_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_30;
      t = h_0(t);
      t = b_31;
      t = k_0(t);
      j_31 = t;
      t = (ATerm) ATinsert(CheckATermList(c_31), j_31);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  if(match_string(t, "-i"))
    {
      t = l_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_31;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  m_31 = t;
  t = term_l_11;
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, m_31);
  t = q_6(n_31, m_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_31);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_11;
  t = whoami_0_0(t);
  o_31 = t;
  t = term_r_13;
  q_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_13), o_31);
  r_31 = t;
  t = SSL_printnl(q_31, r_31);
  t = term_z_6;
  p_31 = t;
  t = SSL_exit(p_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  t = term_c_10;
  s_31 = t;
  t = term_o_11;
  t_31 = t;
  t = term_p_11;
  t = n_6(s_31, t_31, t);
  return(t);
}
static ATerm i_6 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_42, d_42);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      t = SSL_addr(c_42, d_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_31;
      t = e_134(t);
    }
  else
    {
      ATerm a_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_31 = ATgetFirst((ATermList) t);
          x_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_31;
      t = foldr_2_0(e_134, f_134, t);
      a_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_31, a_32);
      t = f_134(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_y_6;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(e_24, f_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_32 = NULL,y_23 = NULL,z_23 = NULL;
  t = times_0_0(t);
  z_23 = t;
  t = SSL_explode_term(z_23);
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_23;
  t = foldr_2_0(t_4, u_4, t);
  d_32 = t;
  t = SSL_TicksToSeconds(d_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_32;
        if((p_32 != t))
          {
            _fail(t);
          }
        t = o_32;
        LocalPopChoice(z_13);
      }
    else
      {
        t = x_13;
        t = (ATerm) ATmakeAppl(sym__2, p_32, q_32);
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_32, q_32);
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = SSL_gtr(p_32, q_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_32, q_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
        t = term_c_10;
        x_32 = t;
        t = term_l_12;
        y_32 = t;
        t = term_f_14;
        t = n_6(x_32, y_32, t);
        w_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_32, term_z_6);
        t = geq_0_0(t);
        t = u_32;
        t = o_125(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = u_32;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,d_33 = NULL,e_33 = NULL;
  t = run_time_0_0(t);
  a_33 = t;
  t = term_u_11;
  t = whoami_0_0(t);
  b_33 = t;
  t = term_r_13;
  d_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), a_33), term_i_14), b_33);
  e_33 = t;
  t = SSL_printnl(d_33, e_33);
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), a_33), term_i_14), b_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_6;
  f_33 = t;
  t = SSL_exit(f_33);
  return(t);
}
static ATerm r_6 (ATerm t_62, ATerm u_62, ATerm v_62, ATerm t)
{
  ATerm g_33 = NULL;
  t = SSL_hashtable_put(v_62, t_62, u_62);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_59, ATerm t)
{
  ATerm w_33 = NULL;
  t = table_hashtable_0_0(t);
  w_33 = t;
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        t = w_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_6(q_59, v_24, t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm a_25 = NULL;
          t = q_59;
          t = table_create_0_0(t);
          t = w_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_6(q_59, a_25, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_63, ATerm c_63, ATerm t)
{
  ATerm z_33 = NULL;
  t = SSL_hashtable_create(b_63, c_63);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_33);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,e_34 = NULL,f_34 = NULL;
  a_34 = t;
  t = term_m_14;
  e_34 = t;
  t = term_n_14;
  f_34 = t;
  t = a_34;
  t = new_hashtable_0_2(e_34, f_34, t);
  b_34 = t;
  t = a_34;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(a_34, b_34, c_34, t);
  t = a_34;
  return(t);
}
static ATerm k_6 (ATerm y_62, ATerm z_62, ATerm t)
{
  ATerm g_34 = NULL;
  t = SSL_hashtable_remove(z_62, y_62);
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_34);
  return(t);
}
static ATerm l_6 (ATerm d_63, ATerm t)
{
  ATerm h_34 = NULL;
  t = SSL_hashtable_destroy(d_63);
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_34);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_34 = NULL;
  t = SSL_table_hashtable();
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_34);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  j_34 = t;
  t = table_hashtable_0_0(t);
  k_34 = t;
  t = lookup_table_0_1(j_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(m_34, t);
  t = k_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(j_34, l_34, t);
  t = j_34;
  return(t);
}
ATerm fetch_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  static ATerm p_35 (ATerm t);
  static ATerm p_35 (ATerm t)
  {
    ATerm g_35 = NULL,n_35 = NULL,o_35 = NULL;
    g_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_35 = ATgetFirst((ATermList) t);
        o_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_14 = t;
      int p_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_25 = NULL,n_25 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(g_35);
          h_25 = t;
          t = n_35;
          t = r_128(t);
          n_25 = t;
          t = (ATerm) ATinsert(CheckATermList(o_35), n_25);
          d_1 = t;
          t = SSLsetAnnotations(d_1, h_25);
          LocalPopChoice(p_14);
        }
      else
        {
          t = o_14;
          {
            ATerm v_25 = NULL,e_27 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(g_35);
            v_25 = t;
            t = o_35;
            t = p_35(t);
            e_27 = t;
            t = (ATerm) ATinsert(CheckATermList(e_27), n_35);
            e_1 = t;
            t = SSLsetAnnotations(e_1, v_25);
          }
        }
    }
    return(t);
  }
  t = p_35(t);
  return(t);
}
static ATerm s_6 (ATerm w_62, ATerm x_62, ATerm t)
{
  t = SSL_hashtable_get(x_62, w_62);
  return(t);
}
static ATerm n_6 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm s_35 = NULL;
  t = lookup_table_0_1(x_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(y_59, s_35, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  t = term_q_14;
  u_35 = t;
  t = term_u_11;
  v_35 = t;
  t = term_r_14;
  t = q_6(u_35, v_35, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_s_14;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  t = term_q_14;
  y_35 = t;
  t = term_u_11;
  z_35 = t;
  t = term_r_14;
  t = q_6(y_35, z_35, t);
  t = term_t_14;
  w_35 = t;
  t = term_u_11;
  x_35 = t;
  t = term_u_14;
  t = q_6(w_35, x_35, t);
  t = term_v_14;
  return(t);
}
static ATerm d_5 (ATerm t)
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
      t = Option_3_0(w_4, x_4, z_4, t);
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      t = Option_3_0(a_5, b_5, d_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_148 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,j_36 = NULL,k_36 = NULL,m_1 = NULL;
  e_36 = t;
  {
    ATerm z_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_15;
        t = m_148(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = z_14;
      }
  }
  t = e_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_36 = ATgetFirst((ATermList) t);
      h_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_36);
  f_36 = t;
  t = term_o_11;
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, g_36);
  t = q_6(k_36, g_36, t);
  t = h_36;
  {
    static ATerm u_36 (ATerm t);
    static ATerm u_36 (ATerm t)
    {
      ATerm d_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_36 = NULL;
              n_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_36;
              LocalPopChoice(g_15);
            }
          else
            {
              t = f_15;
              t = m_148(t);
              t = Cons_2_0(_id, u_36, t);
            }
          LocalPopChoice(e_15);
        }
      else
        {
          t = d_15;
          {
            ATerm q_36 = NULL,r_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_36 = ATgetFirst((ATermList) t);
                r_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_36), (ATerm) ATmakeAppl(sym_Undefined_1, q_36));
          }
        }
      return(t);
    }
    t = u_36(t);
  }
  j_36 = t;
  t = (ATerm) ATinsert(CheckATermList(j_36), (ATerm) ATmakeAppl(sym_Program_1, g_36));
  m_1 = t;
  t = SSLsetAnnotations(m_1, f_36);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  if(match_string(t, "--help"))
    {
      t = h_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_37;
        }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  t = term_h_15;
  i_37 = t;
  t = term_u_11;
  j_37 = t;
  t = term_i_15;
  t = q_6(i_37, j_37, t);
  t = term_j_15;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_k_15;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm l_148 (ATerm), ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
  b_37 = t;
  t = term_b_12;
  c_37 = t;
  t = term_l_15;
  t = lookup_table_0_1(c_37, t);
  g_37 = t;
  t = term_c_12;
  d_37 = t;
  t = (ATerm) ATempty;
  e_37 = t;
  t = g_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(d_37, e_37, f_37, t);
  t = b_37;
  {
    static ATerm e_5 (ATerm t);
    static ATerm e_5 (ATerm t)
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_148(t);
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
          {
            ATerm q_15 = t;
            int r_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_5, i_5, j_5, t);
                LocalPopChoice(r_15);
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
    t = parse_options_p__1_0(e_5, t);
  }
  {
    ATerm v_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_37 = NULL;
        u_37 = t;
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_28 = NULL;
              t = u_37;
              {
                ATerm a_16 = t;
                int b_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_28 = NULL,i_29 = NULL;
                    t = term_c_10;
                    n_28 = t;
                    t = term_h_15;
                    i_29 = t;
                    t = term_c_16;
                    t = n_6(n_28, i_29, t);
                    LocalPopChoice(b_16);
                  }
                else
                  {
                    t = a_16;
                    t = fetch_1_0(k_5, t);
                  }
              }
              t = u_37;
              t = k_148(t);
              t = term_y_6;
              m_28 = t;
              t = SSL_exit(m_28);
              LocalPopChoice(z_15);
            }
          else
            {
              t = y_15;
              {
                ATerm n_30 = NULL,w_30 = NULL,x_30 = NULL;
                t = term_c_10;
                w_30 = t;
                t = term_q_14;
                x_30 = t;
                t = term_f_16;
                t = n_6(w_30, x_30, t);
                t = u_37;
                t = l_148(t);
                t = term_y_6;
                n_30 = t;
                t = SSL_exit(n_30);
              }
            }
        }
        LocalPopChoice(x_15);
      }
    else
      {
        t = v_15;
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
              static ATerm l_5 (ATerm t);
              static ATerm l_5 (ATerm t)
              {
                ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,o_1 = NULL;
                a_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_38);
                y_37 = t;
                t = z_37;
                if(((z_36 != NULL) && (z_36 != t)))
                  _fail(t);
                else
                  z_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_37);
                o_1 = t;
                t = SSLsetAnnotations(o_1, y_37);
                return(t);
              }
              t = fetch_1_0(l_5, t);
              t = term_r_13;
              w_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_36)), term_j_16);
              x_37 = t;
              t = SSL_printnl(w_37, x_37);
              t = (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_36)), term_j_16));
              t = k_148(t);
              t = term_z_6;
              v_37 = t;
              t = SSL_exit(v_37);
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
            }
        }
      }
  }
  a_37 = t;
  t = term_b_12;
  t = table_destroy_0_0(t);
  t = a_37;
  return(t);
}
ATerm option_wrap_5_0 (ATerm m_146 (ATerm), ATerm n_146 (ATerm), ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  t = parse_options_3_0(m_146, n_146, o_146, t);
  f_38 = t;
  t = term_k_16;
  t = table_create_0_0(t);
  t = term_k_16;
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_16, term_p_16, f_38);
  t = lookup_table_0_1(g_38, t);
  j_38 = t;
  t = term_p_16;
  h_38 = t;
  t = j_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(h_38, f_38, i_38, t);
  t = f_38;
  t = p_146(t);
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_146(t);
        t = report_success_0_0(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(o_5, p_5, q_5, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(z_16);
                      }
                    else
                      {
                        t = y_16;
                        t = keep_option_0_0(t);
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
  t = input_1_0(r_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  t = term_m_10;
  l_38 = t;
  t = term_u_11;
  m_38 = t;
  t = term_a_17;
  t = q_6(l_38, m_38, t);
  t = term_b_17;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = output_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,y_1 = NULL,x_1 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  o_38 = t;
  t = p_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_38 = ATgetFirst((ATermList) t);
      s_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_38);
  q_38 = t;
  t = s_38;
  t = Cons_2_0(t_5, u_5, t);
  t_38 = t;
  t = (ATerm) ATinsert(CheckATermList(t_38), r_38);
  x_1 = t;
  t = SSLsetAnnotations(x_1, q_38);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_38);
  y_1 = t;
  t = SSLsetAnnotations(y_1, o_38);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,w_1 = NULL;
  z_38 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_38);
  w_38 = t;
  t = x_38;
  t = rename_sdefs_0_0(t);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, y_38);
  w_1 = t;
  t = SSLsetAnnotations(w_1, w_38);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(m_5, default_system_usage_0_0, default_system_about_0_0, _id, n_5, t);
  return(t);
}

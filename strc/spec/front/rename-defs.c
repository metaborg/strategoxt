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
static ATerm term_y_16;
static ATerm term_x_16;
static ATerm term_w_16;
static ATerm term_h_16;
static ATerm term_f_16;
static ATerm term_e_16;
static ATerm term_z_15;
static ATerm term_y_15;
static ATerm term_h_15;
static ATerm term_g_15;
static ATerm term_f_15;
static ATerm term_e_15;
static ATerm term_d_15;
static ATerm term_x_14;
static ATerm term_s_14;
static ATerm term_r_14;
static ATerm term_q_14;
static ATerm term_p_14;
static ATerm term_o_14;
static ATerm term_n_14;
static ATerm term_m_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_d_14;
static ATerm term_c_14;
static ATerm term_b_14;
static ATerm term_o_13;
static ATerm term_n_13;
static ATerm term_m_13;
static ATerm term_f_13;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_q_12;
static ATerm term_o_12;
static ATerm term_n_12;
static ATerm term_k_12;
static ATerm term_j_12;
static ATerm term_i_12;
static ATerm term_h_12;
static ATerm term_g_12;
static ATerm term_f_12;
static ATerm term_c_12;
static ATerm term_z_11;
static ATerm term_y_11;
static ATerm term_x_11;
static ATerm term_w_11;
static ATerm term_r_11;
static ATerm term_q_11;
static ATerm term_l_11;
static ATerm term_k_11;
static ATerm term_j_11;
static ATerm term_i_11;
static ATerm term_h_11;
static ATerm term_e_11;
static ATerm term_d_11;
static ATerm term_k_10;
static ATerm term_j_10;
static ATerm term_d_10;
static ATerm term_b_10;
static ATerm term_a_10;
static ATerm term_y_9;
static ATerm term_r_9;
static ATerm term_n_9;
static ATerm term_k_9;
static ATerm term_g_9;
static ATerm term_d_9;
static ATerm term_a_9;
static ATerm term_u_8;
static ATerm term_s_8;
static ATerm term_n_8;
static ATerm term_l_8;
static ATerm term_k_8;
static ATerm term_e_8;
static ATerm term_c_8;
static ATerm term_m_7;
static ATerm term_h_7;
static ATerm term_z_6;
static ATerm term_y_6;
static ATerm term_s_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
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
  term_e_8 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_a_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_j_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_h_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_k_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_y_6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_6);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_q_11);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_h_12);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_q_11);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_q_11);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_q_11);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym__3, term_x_11, term_y_11, (ATerm) ATempty);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_d_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_m_14);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_q_11);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm topdown_1_0 (ATerm e_116 (ATerm), ATerm t);
static ATerm u_5 (ATerm k_151 (ATerm), ATerm e_75, ATerm c_75, ATerm t);
static ATerm w_5 (ATerm l_58, ATerm m_58, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm i_139 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm t);
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
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm RenameSDef_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm rename_sdefs_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t);
static ATerm y_5 (ATerm h_35, ATerm i_35, ATerm t);
static ATerm z_5 (ATerm n_33, ATerm o_33, ATerm t);
static ATerm b_6 (ATerm t_123 (ATerm), ATerm p_258, ATerm t_33, ATerm t);
static ATerm a_6 (ATerm j_33, ATerm k_33, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm output_1_0 (ATerm k_146 (ATerm), ATerm t);
static ATerm w_22 (ATerm m_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_6 (ATerm p_33, ATerm t);
static ATerm d_6 (ATerm i_55, ATerm j_55, ATerm t);
static ATerm e_6 (ATerm j_35, ATerm k_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_26 (ATerm o_23, ATerm t);
static ATerm j_26 (ATerm c_24, ATerm d_24, ATerm m_24, ATerm t);
static ATerm k_26 (ATerm j_25, ATerm k_25, ATerm x_25, ATerm t);
static ATerm f_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm l_146 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_128 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_6 (ATerm d_39, ATerm e_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_6 (ATerm a_58, ATerm b_58, ATerm z_57, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_6 (ATerm c_42, ATerm d_42, ATerm t);
ATerm foldr_2_0 (ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_125 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_6 (ATerm p_62, ATerm q_62, ATerm r_62, ATerm t);
ATerm lookup_table_0_1 (ATerm m_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_62, ATerm y_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_6 (ATerm u_62, ATerm v_62, ATerm t);
static ATerm j_6 (ATerm z_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_128 (ATerm), ATerm t);
static ATerm q_6 (ATerm s_62, ATerm t_62, ATerm t);
static ATerm l_6 (ATerm t_59, ATerm u_59, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm e_148 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm parse_options_3_0 (ATerm b_148 (ATerm), ATerm c_148 (ATerm), ATerm d_148 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm e_146 (ATerm), ATerm f_146 (ATerm), ATerm g_146 (ATerm), ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
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
      ATerm x_5 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  if(match_cons(t, sym__2))
    {
      ATerm h_6 = ATgetArgument(t, 0);
      ATerm k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_6 = t;
    int r_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,u_1 = NULL;
        t = term_s_6;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_6, g_1);
        t = w_5(u_1, g_1, t);
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
        LocalPopChoice(r_6);
      }
    else
      {
        t = n_6;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_2 = NULL,y_2 = NULL;
              t = term_s_6;
              y_2 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_6, g_1);
              t = w_5(y_2, g_1, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm w_6 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_6) != ATmakeSymbol("j_0", 0, ATtrue)))
                    _fail(t);
                  q_2 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_2;
              LocalPopChoice(v_6);
            }
          else
            {
              t = u_6;
              {
                ATerm c_3 = NULL,i_3 = NULL;
                t = term_s_6;
                i_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_6, g_1);
                t = w_5(i_3, g_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_6 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_6) != ATmakeSymbol("b_0", 0, ATtrue)))
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
  t = g_6(k_4, l_4, t);
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
  t = g_6(m_4, n_4, t);
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
  ATerm d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(d_5, e_5, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm d_3 = NULL,g_3 = NULL,h_3 = NULL,m_3 = NULL,q_3 = NULL;
  g_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      h_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
      d_3 = ATgetArgument(t, 2);
      {
        ATerm u_3 = NULL,y_3 = NULL,e_4 = NULL;
        t = h_3;
        if(match_cons(t, sym_SVar_1))
          {
            m_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_3;
        t = foldr_3_0(c_0, q_0, v_0, t);
        u_3 = t;
        t = d_3;
        t = foldr_3_0(w_0, y_0, a_1, t);
        y_3 = t;
        {
          ATerm a_7 = t;
          int b_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, m_3, (ATerm) ATmakeAppl(sym__2, u_3, y_3));
              t = RenameVar_0_0(t);
              e_4 = t;
              LocalPopChoice(b_7);
            }
          else
            {
              t = a_7;
              t = m_3;
              t = HoArg_0_0(t);
              e_4 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_4), q_3, d_3);
      }
    }
  else
    {
      ATerm w_4 = NULL,a_5 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          h_3 = ATgetArgument(t, 0);
          q_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_3;
      if(match_cons(t, sym_SVar_1))
        {
          m_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_3;
      t = foldr_3_0(c_1, f_1, h_1, t);
      w_4 = t;
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym__2, m_3, w_4);
            t = RenameVar_0_0(t);
            a_5 = t;
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            t = m_3;
            t = HoArg_0_0(t);
            a_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_5), q_3);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    t = topdown_1_0(e_116, t);
    return(t);
  }
  t = e_116(t);
  t = SRTS_all(j_1, t);
  return(t);
}
static ATerm u_5 (ATerm k_151 (ATerm), ATerm e_75, ATerm c_75, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL;
  z_3 = t;
  t = k_151(t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_3, e_75, c_75);
  t = m_6(v_3, e_75, c_75, t);
  {
    ATerm f_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL;
        t = term_h_7;
        g_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_3, term_h_7);
        t = l_6(v_3, g_4, t);
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
      w_3 = ATgetFirst((ATermList) t);
      x_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_3, term_h_7, (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATinsert(CheckATermList(w_3), e_75)));
  t = lookup_table_0_1(v_3, t);
  f_4 = t;
  t = term_h_7;
  b_4 = t;
  t = (ATerm) ATinsert(CheckATermList(x_3), (ATerm) ATinsert(CheckATermList(w_3), e_75));
  c_4 = t;
  t = f_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(b_4, c_4, d_4, t);
  t = z_3;
  return(t);
}
static ATerm w_5 (ATerm l_58, ATerm m_58, ATerm t)
{
  ATerm h_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_58, m_58);
  t = l_6(l_58, m_58, t);
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
        t = w_5(s_7, e_7, t);
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
              ATerm w_7 = NULL,f_8 = NULL;
              t = term_m_7;
              f_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
              t = w_5(f_8, e_7, t);
              if(match_cons(t, sym_Defined_2))
                {
                  ATerm p_7 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("r_0", 0, ATtrue)))
                    _fail(t);
                  w_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_7;
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
                    ATerm m_8 = NULL;
                    t = term_m_7;
                    m_8 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                    t = w_5(m_8, e_7, t);
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
                          ATerm t_8 = NULL,z_8 = NULL;
                          t = term_m_7;
                          z_8 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                          t = w_5(z_8, e_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm v_7 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              t_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = t_8;
                          LocalPopChoice(u_7);
                        }
                      else
                        {
                          t = t_7;
                          {
                            ATerm x_7 = t;
                            int y_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_9 = NULL;
                                t = term_m_7;
                                j_9 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                                t = w_5(j_9, e_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = e_7;
                                _fail(t);
                                LocalPopChoice(y_7);
                              }
                            else
                              {
                                t = x_7;
                                {
                                  ATerm o_9 = NULL,z_9 = NULL;
                                  t = term_m_7;
                                  z_9 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_m_7, e_7);
                                  t = w_5(z_9, e_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm z_7 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) z_7) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      o_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = o_9;
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
  ATerm a_8 = NULL,b_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_8 = ATgetFirst((ATermList) t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_8;
  if(match_int(t, 95))
    {
      ATerm d_8 = NULL;
      t = b_8;
      t = t_0(t);
      d_8 = t;
      t = (ATerm) ATinsert(ATinsert(CheckATermList(d_8), term_c_8), term_c_8);
    }
  else
    {
      if(match_int(t, 45))
        {
          ATerm p_8 = NULL;
          t = b_8;
          t = t_0(t);
          p_8 = t;
          t = (ATerm) ATinsert(CheckATermList(p_8), term_c_8);
        }
      else
        {
          ATerm r_8 = NULL;
          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
            _fail(t);
          t = b_8;
          t = t_0(t);
          r_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(r_8), term_c_8), term_e_8), term_c_8);
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm i_139 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  w_8 = t;
  t = SSL_explode_string(w_8);
  {
    static ATerm w_9 (ATerm t);
    static ATerm w_9 (ATerm t)
    {
      ATerm g_8 = t;
      int h_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_139(w_9, t);
          LocalPopChoice(h_8);
        }
      else
        {
          t = g_8;
          {
            ATerm s_9 = NULL,u_9 = NULL,v_9 = NULL;
            v_9 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_9 = ATgetFirst((ATermList) t);
                u_9 = (ATerm) ATgetNext((ATermList) t);
                {
                  ATerm i_10 = NULL,l_10 = NULL,a_0 = NULL;
                  t = SSLgetAnnotations(v_9);
                  i_10 = t;
                  t = u_9;
                  t = w_9(t);
                  l_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_10), s_9);
                  a_0 = t;
                  t = SSLsetAnnotations(a_0, i_10);
                }
              }
            else
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_9;
              }
          }
        }
      return(t);
    }
    t = w_9(t);
  }
  v_8 = t;
  t = SSL_implode_string(v_8);
  return(t);
}
ATerm foldr_3_0 (ATerm c_134 (ATerm), ATerm d_134 (ATerm), ATerm e_134 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,e_10 = NULL,f_10 = NULL;
  c_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_10;
      t = c_134(t);
    }
  else
    {
      ATerm p_10 = NULL,q_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_10 = ATgetFirst((ATermList) t);
          f_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_10;
      t = e_134(t);
      p_10 = t;
      t = f_10;
      t = foldr_3_0(c_134, d_134, e_134, t);
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_10, q_10);
      t = d_134(t);
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
  ATerm b_13 = NULL,c_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(b_13, c_13, t);
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
  ATerm g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(g_13, h_13, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_s_6;
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
  ATerm j_16 = NULL,k_16 = NULL;
  if(match_cons(t, sym__2))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(j_16, k_16, t);
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
  ATerm l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(l_16, m_16, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_s_6;
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
  ATerm z_19 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(z_19, b_20, t);
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
  ATerm g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(g_20, h_20, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_m_7;
  return(t);
}
ATerm RenameSDef_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  u_19 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
      x_19 = ATgetArgument(t, 2);
      y_19 = ATgetArgument(t, 3);
      {
        ATerm l_12 = NULL,m_12 = NULL,p_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,y_12 = NULL,a_13 = NULL,r_13 = NULL,w_13 = NULL;
        t = w_19;
        t = foldr_3_0(k_1, l_1, n_1, t);
        l_12 = t;
        t = x_19;
        t = foldr_3_0(p_1, q_1, s_1, t);
        m_12 = t;
        t = v_19;
        if(match_cons(t, sym_Mod_2))
          {
            r_13 = ATgetArgument(t, 0);
            w_13 = ATgetArgument(t, 1);
            {
              ATerm i_8 = t;
              int j_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_14 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_13), term_k_8), r_13);
                  y_14 = t;
                  t = SSL_concat_strings(y_14);
                  LocalPopChoice(j_8);
                }
              else
                {
                  t = i_8;
                  t = v_19;
                }
            }
          }
        else
          {
            t = v_19;
          }
        t = escape_1_0(Cify_1_0, t);
        t_12 = t;
        t = SSL_int_to_string(l_12);
        u_12 = t;
        t = SSL_int_to_string(m_12);
        v_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_12), term_l_8), u_12), term_l_8), t_12);
        a_13 = t;
        t = SSL_concat_strings(a_13);
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym__2, l_12, m_12));
        w_12 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_8, p_12);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym__2, l_12, m_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_n_8, p_12));
        t = u_5(t_1, w_12, y_12, t);
        t = p_12;
        {
          ATerm o_8 = t;
          int q_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_14 = NULL,e_14 = NULL;
              t = v_19;
              t = HoArg_0_0(t);
              a_14 = t;
              t = term_s_8;
              e_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_19, term_s_8);
              t = u_5(v_1, v_19, e_14, t);
              t = a_14;
              LocalPopChoice(q_8);
            }
          else
            {
              t = o_8;
              {
                ATerm f_14 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_8, p_12);
                f_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym_Defined_2, term_u_8, p_12));
                t = u_5(z_1, v_19, f_14, t);
                t = p_12;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, p_12, w_19, x_19, y_19);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          v_19 = ATgetArgument(t, 0);
          w_19 = ATgetArgument(t, 1);
          x_19 = ATgetArgument(t, 2);
          {
            ATerm m_15 = NULL,n_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,u_15 = NULL,b_16 = NULL,c_16 = NULL,g_16 = NULL,b_17 = NULL,c_17 = NULL;
            t = w_19;
            t = foldr_3_0(a_2, b_2, c_2, t);
            m_15 = t;
            t = x_19;
            t = foldr_3_0(d_2, e_2, f_2, t);
            n_15 = t;
            t = v_19;
            if(match_cons(t, sym_Mod_2))
              {
                b_17 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
                {
                  ATerm x_8 = t;
                  int y_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_17), term_k_8), b_17);
                      i_18 = t;
                      t = SSL_concat_strings(i_18);
                      LocalPopChoice(y_8);
                    }
                  else
                    {
                      t = x_8;
                      t = v_19;
                    }
                }
              }
            else
              {
                t = v_19;
              }
            t = escape_1_0(Cify_1_0, t);
            r_15 = t;
            t = SSL_int_to_string(m_15);
            s_15 = t;
            t = SSL_int_to_string(n_15);
            u_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_15), term_l_8), s_15), term_l_8), r_15);
            g_16 = t;
            t = SSL_concat_strings(g_16);
            q_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym__2, m_15, n_15));
            b_16 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_9, q_15);
            c_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym__2, m_15, n_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_a_9, q_15));
            t = u_5(g_2, b_16, c_16, t);
            t = q_15;
            {
              ATerm b_9 = t;
              int c_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_17 = NULL,p_17 = NULL;
                  t = v_19;
                  t = HoArg_0_0(t);
                  l_17 = t;
                  t = term_s_8;
                  p_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_19, term_s_8);
                  t = u_5(h_2, v_19, p_17, t);
                  t = l_17;
                  LocalPopChoice(c_9);
                }
              else
                {
                  t = b_9;
                  {
                    ATerm r_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, q_15);
                    r_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, q_15));
                    t = u_5(i_2, v_19, r_17, t);
                    t = q_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, q_15, w_19, x_19);
          }
        }
      else
        {
          ATerm w_18 = NULL,d_19 = NULL,g_19 = NULL,h_19 = NULL,j_19 = NULL,m_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,a_21 = NULL,b_21 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              v_19 = ATgetArgument(t, 0);
              w_19 = ATgetArgument(t, 1);
              x_19 = ATgetArgument(t, 2);
              y_19 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = w_19;
          t = foldr_3_0(j_2, k_2, l_2, t);
          w_18 = t;
          t = x_19;
          t = foldr_3_0(m_2, n_2, o_2, t);
          d_19 = t;
          t = v_19;
          if(match_cons(t, sym_Mod_2))
            {
              a_21 = ATgetArgument(t, 0);
              b_21 = ATgetArgument(t, 1);
              {
                ATerm e_9 = t;
                int f_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_22 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_21), term_k_8), a_21);
                    h_22 = t;
                    t = SSL_concat_strings(h_22);
                    LocalPopChoice(f_9);
                  }
                else
                  {
                    t = e_9;
                    t = v_19;
                  }
              }
            }
          else
            {
              t = v_19;
            }
          t = escape_1_0(Cify_1_0, t);
          h_19 = t;
          t = SSL_int_to_string(w_18);
          j_19 = t;
          t = SSL_int_to_string(d_19);
          m_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_19), term_l_8), j_19), term_l_8), h_19);
          r_19 = t;
          t = SSL_concat_strings(r_19);
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym__2, w_18, d_19));
          p_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, g_19);
          q_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym__2, w_18, d_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_g_9, g_19));
          t = u_5(p_2, p_19, q_19, t);
          t = g_19;
          {
            ATerm h_9 = t;
            int i_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_21 = NULL,n_21 = NULL;
                t = v_19;
                t = HoArg_0_0(t);
                l_21 = t;
                t = term_s_8;
                n_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_19, term_s_8);
                t = u_5(r_2, v_19, n_21, t);
                t = l_21;
                LocalPopChoice(i_9);
              }
            else
              {
                t = h_9;
                {
                  ATerm u_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, g_19);
                  u_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_19, (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, g_19));
                  t = u_5(s_2, v_19, u_21, t);
                  t = g_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, g_19, w_19, x_19, y_19);
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
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
    }
  return(t);
}
ATerm rename_sdefs_0_0 (ATerm t)
{
  t = map_1_0(RenameSDef_0_0, t);
  t = map_1_0(t_2, t);
  return(t);
}
ATerm Cons_2_0 (ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,t_20 = NULL,i_0 = NULL;
  t_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_20 = ATgetFirst((ATermList) t);
      o_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_20);
  m_20 = t;
  t = n_20;
  t = l_91(t);
  p_20 = t;
  t = o_20;
  t = m_91(t);
  q_20 = t;
  t = (ATerm) ATinsert(CheckATermList(q_20), p_20);
  i_0 = t;
  t = SSLsetAnnotations(i_0, m_20);
  return(t);
}
static ATerm y_5 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm w_20 = NULL;
  t = SSL_fputc(h_35, i_35);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_20);
  return(t);
}
static ATerm z_5 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm x_20 = NULL;
  t = SSL_write_term_to_stream_text(n_33, o_33);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_20);
  return(t);
}
static ATerm b_6 (ATerm t_123 (ATerm), ATerm p_258, ATerm t_33, ATerm t)
{
  ATerm y_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_258, term_n_9);
  t = f_6(t);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, t_33);
  t = t_123(t);
  t = fclose_0_0(t);
  t = t_33;
  return(t);
}
static ATerm a_6 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm z_20 = NULL;
  t = SSL_write_term_to_stream_baf(j_33, k_33);
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_20);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm m_21 = NULL,o_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      if(match_cons(p_9, sym_Stream_1))
        {
          m_21 = ATgetArgument(p_9, 0);
        }
      else
        _fail(t);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(m_21, o_21, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_9 = ATgetArgument(t, 0);
      if(match_cons(q_9, sym_Stream_1))
        {
          s_21 = ATgetArgument(q_9, 0);
        }
      else
        _fail(t);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(s_21, t_21, t);
  p_21 = t;
  t = term_r_9;
  q_21 = t;
  t = p_21;
  if(match_cons(t, sym_Stream_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, p_21);
  t = y_5(q_21, r_21, t);
  return(t);
}
ATerm output_1_0 (ATerm k_146 (ATerm), ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  t = k_146(t);
  d_21 = t;
  {
    ATerm t_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21 = NULL,f_21 = NULL;
        t = term_y_9;
        e_21 = t;
        t = term_a_10;
        f_21 = t;
        t = term_b_10;
        t = l_6(e_21, f_21, t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = t_9;
        t = term_d_10;
      }
  }
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_21, d_21);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL,j_21 = NULL;
        t = term_y_9;
        i_21 = t;
        t = term_j_10;
        j_21 = t;
        t = term_k_10;
        t = l_6(i_21, j_21, t);
        t = (ATerm) ATmakeAppl(sym__2, c_21, d_21);
        LocalPopChoice(h_10);
        if(match_cons(t, sym__2))
          {
            ATerm m_10 = ATgetArgument(t, 0);
            ATerm n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_6(v_2, c_21, d_21, t);
      }
    else
      {
        t = g_10;
        if(match_cons(t, sym__2))
          {
            ATerm o_10 = ATgetArgument(t, 0);
            ATerm r_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_6(w_2, c_21, d_21, t);
      }
  }
  return(t);
}
static ATerm w_22 (ATerm m_22, ATerm t)
{
  t = SSL_fclose(m_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL;
  u_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_22 = ATgetArgument(t, 0);
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_22);
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = w_22(u_22, t);
          }
      }
    }
  else
    {
      t = w_22(u_22, t);
    }
  return(t);
}
static ATerm c_6 (ATerm p_33, ATerm t)
{
  t = SSL_read_term_from_stream(p_33);
  return(t);
}
static ATerm d_6 (ATerm i_55, ATerm j_55, ATerm t)
{
  t = SSL_strcat(i_55, j_55);
  return(t);
}
static ATerm e_6 (ATerm j_35, ATerm k_35, ATerm t)
{
  ATerm z_22 = NULL;
  t = SSL_fopen(j_35, k_35);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_stdin_stream();
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_23 = NULL;
  t = SSL_stdout_stream();
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_stderr_stream();
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
  return(t);
}
static ATerm i_26 (ATerm o_23, ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_explode_term(o_23);
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_10 = ATgetArgument(t, 1);
        if(((ATgetType(v_10) == AT_LIST) && !(ATisEmpty(v_10))))
          {
            w_23 = ATgetFirst((ATermList) v_10);
            {
              ATerm w_10 = (ATerm) ATgetNext((ATermList) v_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_26 (ATerm c_24, ATerm d_24, ATerm m_24, ATerm t)
{
  ATerm p_24 = NULL,r_24 = NULL,s_24 = NULL,g_25 = NULL,s_0 = NULL;
  t = SSLgetAnnotations(m_24);
  s_24 = t;
  t = c_24;
  if(match_cons(t, sym_Path_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_25, d_24);
  s_0 = t;
  t = SSLsetAnnotations(s_0, s_24);
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(p_24, r_24, t);
  return(t);
}
static ATerm k_26 (ATerm j_25, ATerm k_25, ATerm x_25, ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,d_26 = NULL,u_0 = NULL;
  t = SSLgetAnnotations(x_25);
  a_26 = t;
  t = SSL_is_string(j_25);
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_26, k_25);
  u_0 = t;
  t = SSLsetAnnotations(u_0, a_26);
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(y_25, z_25, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym__2))
    {
      g_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_26(f_26, t);
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm z_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_26(g_26, h_26, f_26, t);
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = z_10;
                  t = k_26(g_26, h_26, f_26, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_26(f_26, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,t_26 = NULL;
  t_26 = t;
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_26, term_d_11);
        t = f_6(t);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          ATerm f_23 = NULL,g_23 = NULL;
          t = term_e_11;
          g_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_11, t_26);
          t = d_6(g_23, t_26, t);
          f_23 = t;
          t = SSL_perror(f_23);
          _fail(t);
        }
      }
  }
  n_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(o_26, t);
  m_26 = t;
  t = n_26;
  t = fclose_0_0(t);
  t = m_26;
  return(t);
}
ATerm input_1_0 (ATerm l_146 (ATerm), ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_26 = NULL,x_26 = NULL;
      t = term_y_9;
      w_26 = t;
      t = term_h_11;
      x_26 = t;
      t = term_i_11;
      t = l_6(w_26, x_26, t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      t = term_j_11;
    }
  t = ReadFromFile_0_0(t);
  t = l_146(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  t = term_y_9;
  y_26 = t;
  t = term_k_11;
  z_26 = t;
  t = term_l_11;
  t = l_6(y_26, z_26, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
  b_27 = t;
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_11 = ATgetFirst((ATermList) t);
                ATerm p_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_27;
          }
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        t = (ATerm) ATinsert(ATempty, b_27);
      }
  }
  c_27 = t;
  t = term_d_10;
  d_27 = t;
  t = SSL_printnl(d_27, c_27);
  t = b_27;
  return(t);
}
ATerm map_1_0 (ATerm f_128 (ATerm), ATerm t)
{
  static ATerm x_27 (ATerm t);
  static ATerm x_27 (ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
    u_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_27;
      }
    else
      {
        ATerm l_23 = NULL,p_23 = NULL,q_23 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_27 = ATgetFirst((ATermList) t);
            w_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_27);
        l_23 = t;
        t = v_27;
        t = f_128(t);
        p_23 = t;
        t = w_27;
        t = x_27(t);
        q_23 = t;
        t = (ATerm) ATinsert(CheckATermList(q_23), p_23);
        x_0 = t;
        t = SSLsetAnnotations(x_0, l_23);
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      b_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_28 = NULL,g_28 = NULL;
        static ATerm x_2 (ATerm t);
        static ATerm x_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_28)), not_null(g_28));
          return(t);
        }
        t = b_28;
        t = p_0(t);
        if(((f_28 != NULL) && (f_28 != t)))
          _fail(t);
        else
          f_28 = t;
        t = a_28;
        t = n_0(t);
        if(((g_28 != NULL) && (g_28 != t)))
          _fail(t);
        else
          g_28 = t;
        t = b_28;
        t = reverse_acc_2_0(n_0, x_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_11;
      t = p_0(t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,z_0 = NULL;
  q_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_28);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_28);
  z_0 = t;
  t = SSLsetAnnotations(z_0, o_28);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm u_28 = NULL;
  u_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_28), term_r_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm j_148 (ATerm), ATerm k_148 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_28 = NULL,n_28 = NULL;
      t = term_y_9;
      m_28 = t;
      t = term_k_11;
      n_28 = t;
      t = term_l_11;
      t = l_6(m_28, n_28, t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      t = fetch_1_0(z_2, t);
    }
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_148(t);
        t = echo_0_0(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
      }
  }
  t = term_w_11;
  t = echo_0_0(t);
  t = term_x_11;
  k_28 = t;
  t = term_y_11;
  l_28 = t;
  t = term_z_11;
  t = l_6(k_28, l_28, t);
  t = reverse_acc_2_0(_id, a_3, t);
  t = map_1_0(b_3, t);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL;
        t = k_148(t);
        v_28 = t;
        t = (ATerm) ATinsert(CheckATermList(v_28), term_c_12);
        t = echo_0_0(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
      }
  }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,b_1 = NULL;
  d_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_29);
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_29);
  b_1 = t;
  t = SSLsetAnnotations(b_1, b_29);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL,a_29 = NULL;
        t = term_y_9;
        z_28 = t;
        t = term_k_11;
        a_29 = t;
        t = term_l_11;
        t = l_6(z_28, a_29, t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = fetch_1_0(e_3, t);
      }
  }
  t = y_28;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  if(match_string(t, "-k"))
    {
      t = f_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_29;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  g_29 = t;
  t = SSL_string_to_int(g_29);
  h_29 = t;
  t = term_f_12;
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, h_29);
  t = o_6(i_29, h_29, t);
  t = g_29;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_3, j_3, k_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  if(match_string(t, "-S"))
    {
      t = k_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_29;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  t = term_h_12;
  l_29 = t;
  t = term_y_6;
  m_29 = t;
  t = term_i_12;
  t = o_6(l_29, m_29, t);
  t = term_j_12;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_k_12;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  n_29 = t;
  t = SSL_string_to_int(n_29);
  o_29 = t;
  t = term_h_12;
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, o_29);
  t = o_6(p_29, o_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_29);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_n_12;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  t = term_o_12;
  q_29 = t;
  t = term_q_11;
  r_29 = t;
  t = term_q_12;
  t = o_6(q_29, r_29, t);
  t = term_r_12;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, n_3, o_3, t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = x_12;
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_3, r_3, s_3, t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = Option_3_0(t_3, a_4, i_4, t);
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = term_y_9;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_9, d_39, e_39);
  t = lookup_table_0_1(s_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(d_39, e_39, t_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_9, d_39, e_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
      t = term_q_11;
      t = f_0(t);
      z_29 = t;
      t = term_x_11;
      a_30 = t;
      t = term_y_11;
      b_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_11, term_y_11, z_29);
      t = m_6(a_30, b_30, z_29, t);
      _fail(t);
    }
  else
    {
      ATerm e_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_29 = ATgetFirst((ATermList) t);
          y_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_29;
      t = d_0(t);
      t = term_q_11;
      t = e_0(t);
      e_30 = t;
      t = (ATerm) ATinsert(CheckATermList(y_29), e_30);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  if(match_string(t, "-o"))
    {
      t = g_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_30;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  h_30 = t;
  t = term_a_10;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, h_30);
  t = o_6(i_30, h_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_30);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, o_4, p_4, t);
  return(t);
}
static ATerm m_6 (ATerm a_58, ATerm b_58, ATerm z_57, ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            ATerm l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
        t = l_6(a_58, b_58, t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = (ATerm) ATempty;
      }
  }
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_58, b_58, (ATerm) ATinsert(CheckATermList(l_30), z_57));
  t = lookup_table_0_1(a_58, t);
  o_30 = t;
  t = (ATerm) ATinsert(CheckATermList(l_30), z_57);
  m_30 = t;
  t = o_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(b_58, m_30, n_30, t);
  t = k_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
      t = term_q_11;
      t = l_0(t);
      z_30 = t;
      t = term_x_11;
      a_31 = t;
      t = term_y_11;
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_11, term_y_11, z_30);
      t = m_6(a_31, b_31, z_30, t);
      _fail(t);
    }
  else
    {
      ATerm f_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_30 = ATgetFirst((ATermList) t);
          w_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_30;
      t = h_0(t);
      t = x_30;
      t = k_0(t);
      f_31 = t;
      t = (ATerm) ATinsert(CheckATermList(y_30), f_31);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  if(match_string(t, "-i"))
    {
      t = h_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_31;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  t = term_h_11;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, i_31);
  t = o_6(j_31, i_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_31);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_11;
  t = whoami_0_0(t);
  k_31 = t;
  t = term_n_13;
  m_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_13), k_31);
  n_31 = t;
  t = SSL_printnl(m_31, n_31);
  t = term_z_6;
  l_31 = t;
  t = SSL_exit(l_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  t = term_y_9;
  o_31 = t;
  t = term_k_11;
  p_31 = t;
  t = term_l_11;
  t = l_6(o_31, p_31, t);
  return(t);
}
static ATerm g_6 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_42, d_42);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      t = SSL_addr(c_42, d_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_134 (ATerm), ATerm b_134 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_31;
      t = a_134(t);
    }
  else
    {
      ATerm w_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_31 = ATgetFirst((ATermList) t);
          t_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_31;
      t = foldr_2_0(a_134, b_134, t);
      w_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_31, w_31);
      t = b_134(t);
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
  t = g_6(e_24, f_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_31 = NULL,v_23 = NULL,x_23 = NULL;
  t = times_0_0(t);
  x_23 = t;
  t = SSL_explode_term(x_23);
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_23;
  t = foldr_2_0(t_4, u_4, t);
  z_31 = t;
  t = SSL_TicksToSeconds(z_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_32;
        if((l_32 != t))
          {
            _fail(t);
          }
        t = k_32;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
        {
          ATerm v_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_32, m_32);
              LocalPopChoice(x_13);
            }
          else
            {
              t = v_13;
              t = SSL_gtr(l_32, m_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_32, m_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm q_32 = NULL;
  q_32 = t;
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
        t = term_y_9;
        t_32 = t;
        t = term_h_12;
        u_32 = t;
        t = term_b_14;
        t = l_6(t_32, u_32, t);
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_32, term_z_6);
        t = geq_0_0(t);
        t = q_32;
        t = k_125(t);
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        t = q_32;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,z_32 = NULL,a_33 = NULL;
  t = run_time_0_0(t);
  w_32 = t;
  t = term_q_11;
  t = whoami_0_0(t);
  x_32 = t;
  t = term_n_13;
  z_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_14), w_32), term_c_14), x_32);
  a_33 = t;
  t = SSL_printnl(z_32, a_33);
  t = (ATerm) ATmakeAppl(sym__2, term_n_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_14), w_32), term_c_14), x_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_6;
  b_33 = t;
  t = SSL_exit(b_33);
  return(t);
}
static ATerm p_6 (ATerm p_62, ATerm q_62, ATerm r_62, ATerm t)
{
  ATerm c_33 = NULL;
  t = SSL_hashtable_put(r_62, p_62, q_62);
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_59, ATerm t)
{
  ATerm q_33 = NULL;
  t = table_hashtable_0_0(t);
  q_33 = t;
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL;
        t = q_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_6(m_59, v_24, t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        {
          ATerm a_25 = NULL;
          t = m_59;
          t = table_create_0_0(t);
          t = q_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_6(m_59, a_25, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_62, ATerm y_62, ATerm t)
{
  ATerm v_33 = NULL;
  t = SSL_hashtable_create(x_62, y_62);
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_33);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,a_34 = NULL,b_34 = NULL;
  w_33 = t;
  t = term_i_14;
  a_34 = t;
  t = term_j_14;
  b_34 = t;
  t = w_33;
  t = new_hashtable_0_2(a_34, b_34, t);
  x_33 = t;
  t = w_33;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(w_33, x_33, y_33, t);
  t = w_33;
  return(t);
}
static ATerm i_6 (ATerm u_62, ATerm v_62, ATerm t)
{
  ATerm c_34 = NULL;
  t = SSL_hashtable_remove(v_62, u_62);
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_34);
  return(t);
}
static ATerm j_6 (ATerm z_62, ATerm t)
{
  ATerm d_34 = NULL;
  t = SSL_hashtable_destroy(z_62);
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_34);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_34 = NULL;
  t = SSL_table_hashtable();
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_34);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  f_34 = t;
  t = table_hashtable_0_0(t);
  g_34 = t;
  t = lookup_table_0_1(f_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_6(i_34, t);
  t = g_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(f_34, h_34, t);
  t = f_34;
  return(t);
}
ATerm fetch_1_0 (ATerm n_128 (ATerm), ATerm t)
{
  static ATerm f_35 (ATerm t);
  static ATerm f_35 (ATerm t)
  {
    ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
    c_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_35 = ATgetFirst((ATermList) t);
        e_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_25 = NULL,n_25 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(c_35);
          h_25 = t;
          t = d_35;
          t = n_128(t);
          n_25 = t;
          t = (ATerm) ATinsert(CheckATermList(e_35), n_25);
          d_1 = t;
          t = SSLsetAnnotations(d_1, h_25);
          LocalPopChoice(l_14);
        }
      else
        {
          t = k_14;
          {
            ATerm v_25 = NULL,a_27 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(c_35);
            v_25 = t;
            t = e_35;
            t = f_35(t);
            a_27 = t;
            t = (ATerm) ATinsert(CheckATermList(a_27), d_35);
            e_1 = t;
            t = SSLsetAnnotations(e_1, v_25);
          }
        }
    }
    return(t);
  }
  t = f_35(t);
  return(t);
}
static ATerm q_6 (ATerm s_62, ATerm t_62, ATerm t)
{
  t = SSL_hashtable_get(t_62, s_62);
  return(t);
}
static ATerm l_6 (ATerm t_59, ATerm u_59, ATerm t)
{
  ATerm o_35 = NULL;
  t = lookup_table_0_1(t_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(u_59, o_35, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  t = term_m_14;
  q_35 = t;
  t = term_q_11;
  r_35 = t;
  t = term_n_14;
  t = o_6(q_35, r_35, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_o_14;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t = term_m_14;
  u_35 = t;
  t = term_q_11;
  v_35 = t;
  t = term_n_14;
  t = o_6(u_35, v_35, t);
  t = term_p_14;
  s_35 = t;
  t = term_q_11;
  t_35 = t;
  t = term_q_14;
  t = o_6(s_35, t_35, t);
  t = term_r_14;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, y_4, z_4, t);
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      t = Option_3_0(b_5, c_5, f_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_148 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL,f_36 = NULL,g_36 = NULL,m_1 = NULL;
  a_36 = t;
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_14;
        t = e_148(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
      }
  }
  t = a_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_36 = ATgetFirst((ATermList) t);
      d_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_36);
  b_36 = t;
  t = term_k_11;
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, c_36);
  t = o_6(g_36, c_36, t);
  t = d_36;
  {
    static ATerm q_36 (ATerm t);
    static ATerm q_36 (ATerm t)
    {
      ATerm z_14 = t;
      int a_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_36 = NULL;
              j_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_36;
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              t = e_148(t);
              t = Cons_2_0(_id, q_36, t);
            }
          LocalPopChoice(a_15);
        }
      else
        {
          t = z_14;
          {
            ATerm m_36 = NULL,n_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_36 = ATgetFirst((ATermList) t);
                n_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_36), (ATerm) ATmakeAppl(sym_Undefined_1, m_36));
          }
        }
      return(t);
    }
    t = q_36(t);
  }
  f_36 = t;
  t = (ATerm) ATinsert(CheckATermList(f_36), (ATerm) ATmakeAppl(sym_Program_1, c_36));
  m_1 = t;
  t = SSLsetAnnotations(m_1, b_36);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  if(match_string(t, "--help"))
    {
      t = d_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_37;
        }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL;
  t = term_d_15;
  e_37 = t;
  t = term_q_11;
  f_37 = t;
  t = term_e_15;
  t = o_6(e_37, f_37, t);
  t = term_f_15;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_g_15;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm b_148 (ATerm), ATerm c_148 (ATerm), ATerm d_148 (ATerm), ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  x_36 = t;
  t = term_x_11;
  y_36 = t;
  t = term_h_15;
  t = lookup_table_0_1(y_36, t);
  c_37 = t;
  t = term_y_11;
  z_36 = t;
  t = (ATerm) ATempty;
  a_37 = t;
  t = c_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(z_36, a_37, b_37, t);
  t = x_36;
  {
    static ATerm g_5 (ATerm t);
    static ATerm g_5 (ATerm t)
    {
      ATerm i_15 = t;
      int j_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_148(t);
          LocalPopChoice(j_15);
        }
      else
        {
          t = i_15;
          {
            ATerm k_15 = t;
            int l_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_5, i_5, j_5, t);
                LocalPopChoice(l_15);
              }
            else
              {
                t = k_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_5, t);
  }
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_37 = NULL;
        q_37 = t;
        {
          ATerm t_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_28 = NULL;
              t = q_37;
              {
                ATerm w_15 = t;
                int x_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_28 = NULL,e_29 = NULL;
                    t = term_y_9;
                    j_28 = t;
                    t = term_d_15;
                    e_29 = t;
                    t = term_y_15;
                    t = l_6(j_28, e_29, t);
                    LocalPopChoice(x_15);
                  }
                else
                  {
                    t = w_15;
                    t = fetch_1_0(k_5, t);
                  }
              }
              t = q_37;
              t = c_148(t);
              t = term_y_6;
              i_28 = t;
              t = SSL_exit(i_28);
              LocalPopChoice(v_15);
            }
          else
            {
              t = t_15;
              {
                ATerm j_30 = NULL,s_30 = NULL,t_30 = NULL;
                t = term_y_9;
                s_30 = t;
                t = term_m_14;
                t_30 = t;
                t = term_z_15;
                t = l_6(s_30, t_30, t);
                t = q_37;
                t = d_148(t);
                t = term_y_6;
                j_30 = t;
                t = SSL_exit(j_30);
              }
            }
        }
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        {
          ATerm a_16 = t;
          int d_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
              static ATerm l_5 (ATerm t);
              static ATerm l_5 (ATerm t)
              {
                ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,o_1 = NULL;
                w_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_37);
                u_37 = t;
                t = v_37;
                if(((v_36 != NULL) && (v_36 != t)))
                  _fail(t);
                else
                  v_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_37);
                o_1 = t;
                t = SSLsetAnnotations(o_1, u_37);
                return(t);
              }
              t = fetch_1_0(l_5, t);
              t = term_n_13;
              s_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_36)), term_e_16);
              t_37 = t;
              t = SSL_printnl(s_37, t_37);
              t = (ATerm) ATmakeAppl(sym__2, term_n_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_36)), term_e_16));
              t = c_148(t);
              t = term_z_6;
              r_37 = t;
              t = SSL_exit(r_37);
              LocalPopChoice(d_16);
            }
          else
            {
              t = a_16;
            }
        }
      }
  }
  w_36 = t;
  t = term_x_11;
  t = table_destroy_0_0(t);
  t = w_36;
  return(t);
}
ATerm option_wrap_5_0 (ATerm e_146 (ATerm), ATerm f_146 (ATerm), ATerm g_146 (ATerm), ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL;
  t = parse_options_3_0(e_146, f_146, g_146, t);
  b_38 = t;
  t = term_f_16;
  t = table_create_0_0(t);
  t = term_f_16;
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_16, term_h_16, b_38);
  t = lookup_table_0_1(c_38, t);
  f_38 = t;
  t = term_h_16;
  d_38 = t;
  t = f_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_6(d_38, b_38, e_38, t);
  t = b_38;
  t = h_146(t);
  {
    ATerm i_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_146(t);
        t = report_success_0_0(t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = i_16;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm s_16 = t;
              int t_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_5, p_5, q_5, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(v_16);
                      }
                    else
                      {
                        t = u_16;
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
  ATerm h_38 = NULL,i_38 = NULL;
  t = term_j_10;
  h_38 = t;
  t = term_q_11;
  i_38 = t;
  t = term_w_16;
  t = o_6(h_38, i_38, t);
  t = term_x_16;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_y_16;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = output_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,y_1 = NULL,x_1 = NULL;
  r_38 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_38);
  k_38 = t;
  t = l_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_38 = ATgetFirst((ATermList) t);
      o_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_38);
  m_38 = t;
  t = o_38;
  t = Cons_2_0(t_5, v_5, t);
  p_38 = t;
  t = (ATerm) ATinsert(CheckATermList(p_38), n_38);
  x_1 = t;
  t = SSLsetAnnotations(x_1, m_38);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_38);
  y_1 = t;
  t = SSLsetAnnotations(y_1, k_38);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_1 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  s_38 = t;
  t = t_38;
  t = rename_sdefs_0_0(t);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_38);
  w_1 = t;
  t = SSLsetAnnotations(w_1, s_38);
  return(t);
}
static ATerm v_5 (ATerm t)
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

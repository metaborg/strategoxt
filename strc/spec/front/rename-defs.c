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
static ATerm term_f_17;
static ATerm term_e_17;
static ATerm term_d_17;
static ATerm term_r_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_i_16;
static ATerm term_f_16;
static ATerm term_n_15;
static ATerm term_m_15;
static ATerm term_l_15;
static ATerm term_k_15;
static ATerm term_j_15;
static ATerm term_e_15;
static ATerm term_y_14;
static ATerm term_x_14;
static ATerm term_w_14;
static ATerm term_v_14;
static ATerm term_u_14;
static ATerm term_t_14;
static ATerm term_s_14;
static ATerm term_p_14;
static ATerm term_o_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_i_14;
static ATerm term_w_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_n_13;
static ATerm term_h_13;
static ATerm term_d_13;
static ATerm term_b_13;
static ATerm term_w_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_s_12;
static ATerm term_q_12;
static ATerm term_o_12;
static ATerm term_n_12;
static ATerm term_m_12;
static ATerm term_e_12;
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
static ATerm term_n_10;
static ATerm term_g_10;
static ATerm term_f_10;
static ATerm term_e_10;
static ATerm term_d_10;
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
static ATerm term_n_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
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
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_n_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_l_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_o_11);
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
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_y_6);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_6);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_u_11);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_o_12);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_u_11);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_u_11);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_u_11);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, (ATerm) ATempty);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_j_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_s_14);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_u_11);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm topdown_1_0 (ATerm y_116 (ATerm), ATerm t);
static ATerm x_5 (ATerm n_152 (ATerm), ATerm y_75, ATerm w_75, ATerm t);
static ATerm z_5 (ATerm u_58, ATerm v_58, ATerm t);
ATerm HoArg_0_0 (ATerm t);
ATerm Cify_1_0 (ATerm t_0 (ATerm), ATerm t);
ATerm escape_1_0 (ATerm h_140 (ATerm (ATerm), ATerm), ATerm t);
ATerm foldr_3_0 (ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t);
static ATerm b_6 (ATerm h_35, ATerm i_35, ATerm t);
static ATerm c_6 (ATerm n_33, ATerm o_33, ATerm t);
static ATerm e_6 (ATerm n_124 (ATerm), ATerm s_259, ATerm t_33, ATerm t);
static ATerm d_6 (ATerm j_33, ATerm k_33, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_1_0 (ATerm j_147 (ATerm), ATerm t);
static ATerm b_23 (ATerm r_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm p_33, ATerm t);
static ATerm g_6 (ATerm r_55, ATerm s_55, ATerm t);
static ATerm h_6 (ATerm j_35, ATerm k_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_26 (ATerm b_24, ATerm t);
static ATerm o_26 (ATerm p_24, ATerm r_24, ATerm s_24, ATerm t);
static ATerm p_26 (ATerm y_25, ATerm z_25, ATerm c_26, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm k_147 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_129 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_6 (ATerm j_39, ATerm k_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_6 (ATerm j_58, ATerm k_58, ATerm i_58, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm i_42, ATerm j_42, ATerm t);
ATerm foldr_2_0 (ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_126 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm y_62, ATerm z_62, ATerm a_63, ATerm t);
ATerm lookup_table_0_1 (ATerm v_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm g_63, ATerm h_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_6 (ATerm d_63, ATerm e_63, ATerm t);
static ATerm m_6 (ATerm i_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_129 (ATerm), ATerm t);
static ATerm t_6 (ATerm b_63, ATerm c_63, ATerm t);
static ATerm o_6 (ATerm c_60, ATerm d_60, ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm d_149 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm parse_options_3_0 (ATerm a_149 (ATerm), ATerm b_149 (ATerm), ATerm c_149 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t);
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
      ATerm w_5 = ATgetArgument(t, 0);
      ATerm y_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_6 = t;
    int k_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,u_1 = NULL;
        t = term_n_6;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_6, g_1);
        t = z_5(u_1, g_1, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm q_6 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_6) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            r_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_1;
        LocalPopChoice(k_6);
      }
    else
      {
        t = a_6;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL,a_3 = NULL;
              t = term_n_6;
              a_3 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_n_6, g_1);
              t = z_5(a_3, g_1, t);
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
                ATerm f_3 = NULL,l_3 = NULL;
                t = term_n_6;
                l_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_6, g_1);
                t = z_5(l_3, g_1, t);
                if(match_cons(t, sym_Defined_2))
                  {
                    ATerm x_6 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) x_6) != ATmakeSymbol("b_0", 0, ATtrue)))
                      _fail(t);
                    f_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_3;
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
  ATerm h_4 = NULL,l_4 = NULL;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(h_4, l_4, t);
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
  t = j_6(m_4, n_4, t);
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
  ATerm d_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(d_5, g_5, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm RenameCall_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,e_3 = NULL,g_3 = NULL,j_3 = NULL;
  x_2 = t;
  if(match_cons(t, sym_CallT_3))
    {
      e_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      w_2 = ATgetArgument(t, 2);
      {
        ATerm u_3 = NULL,x_3 = NULL,d_4 = NULL;
        t = e_3;
        if(match_cons(t, sym_SVar_1))
          {
            g_3 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_3;
        t = foldr_3_0(c_0, q_0, v_0, t);
        u_3 = t;
        t = w_2;
        t = foldr_3_0(w_0, y_0, a_1, t);
        x_3 = t;
        {
          ATerm a_7 = t;
          int b_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATmakeAppl(sym__2, u_3, x_3));
              t = RenameVar_0_0(t);
              d_4 = t;
              LocalPopChoice(b_7);
            }
          else
            {
              t = a_7;
              t = g_3;
              t = HoArg_0_0(t);
              d_4 = t;
            }
        }
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_4), j_3, w_2);
      }
    }
  else
    {
      ATerm y_4 = NULL,c_5 = NULL;
      if(match_cons(t, sym_Call_2))
        {
          e_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_3;
      if(match_cons(t, sym_SVar_1))
        {
          g_3 = ATgetArgument(t, 0);
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
            t = (ATerm) ATmakeAppl(sym__2, g_3, y_4);
            t = RenameVar_0_0(t);
            c_5 = t;
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            t = g_3;
            t = HoArg_0_0(t);
            c_5 = t;
          }
      }
      t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_5), j_3);
    }
  return(t);
}
ATerm topdown_1_0 (ATerm y_116 (ATerm), ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    t = topdown_1_0(y_116, t);
    return(t);
  }
  t = y_116(t);
  t = SRTS_all(j_1, t);
  return(t);
}
static ATerm x_5 (ATerm n_152 (ATerm), ATerm y_75, ATerm w_75, ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL;
  z_3 = t;
  t = n_152(t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_3, y_75, w_75);
  t = p_6(v_3, y_75, w_75, t);
  {
    ATerm e_7 = t;
    int g_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL;
        t = term_h_7;
        g_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_3, term_h_7);
        t = o_6(v_3, g_4, t);
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
        t = e_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_3 = ATgetFirst((ATermList) t);
      y_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_3, term_h_7, (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATinsert(CheckATermList(w_3), y_75)));
  t = lookup_table_0_1(v_3, t);
  f_4 = t;
  t = term_h_7;
  a_4 = t;
  t = (ATerm) ATinsert(CheckATermList(y_3), (ATerm) ATinsert(CheckATermList(w_3), y_75));
  c_4 = t;
  t = f_4;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(a_4, c_4, e_4, t);
  t = z_3;
  return(t);
}
static ATerm z_5 (ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm i_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
  t = o_6(u_58, v_58, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_4 = ATgetFirst((ATermList) t);
      {
        ATerm j_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_4;
  return(t);
}
ATerm HoArg_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_m_7;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_7, f_7);
        t = z_5(s_7, f_7, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = f_7;
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
              t = (ATerm) ATmakeAppl(sym__2, term_m_7, f_7);
              t = z_5(h_8, f_7, t);
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
                    t = (ATerm) ATmakeAppl(sym__2, term_m_7, f_7);
                    t = z_5(o_8, f_7, t);
                    if(!(match_cons(t, sym_Undefined_0)))
                      _fail(t);
                    t = f_7;
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
                          ATerm w_8 = NULL,b_9 = NULL;
                          t = term_m_7;
                          b_9 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_m_7, f_7);
                          t = z_5(b_9, f_7, t);
                          if(match_cons(t, sym_Defined_2))
                            {
                              ATerm v_7 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("m_0", 0, ATtrue)))
                                _fail(t);
                              w_8 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = w_8;
                          LocalPopChoice(u_7);
                        }
                      else
                        {
                          t = t_7;
                          {
                            ATerm x_7 = t;
                            int a_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm m_9 = NULL;
                                t = term_m_7;
                                m_9 = t;
                                t = (ATerm) ATmakeAppl(sym__2, term_m_7, f_7);
                                t = z_5(m_9, f_7, t);
                                if(!(match_cons(t, sym_Undefined_0)))
                                  _fail(t);
                                t = f_7;
                                _fail(t);
                                LocalPopChoice(a_8);
                              }
                            else
                              {
                                t = x_7;
                                {
                                  ATerm r_9 = NULL,c_10 = NULL;
                                  t = term_m_7;
                                  c_10 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, term_m_7, f_7);
                                  t = z_5(c_10, f_7, t);
                                  if(match_cons(t, sym_Defined_2))
                                    {
                                      ATerm b_8 = ATgetArgument(t, 0);
                                      if((ATgetSymbol((ATermAppl) b_8) != ATmakeSymbol("g_0", 0, ATtrue)))
                                        _fail(t);
                                      r_9 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = r_9;
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
  ATerm w_7 = NULL,z_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_7 = ATgetFirst((ATermList) t);
      z_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_7;
  if(match_int(t, 92))
    {
      ATerm d_8 = NULL;
      t = z_7;
      t = t_0(t);
      d_8 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(d_8), term_c_8), term_e_8), term_c_8);
    }
  else
    {
      if(match_int(t, 34))
        {
          ATerm f_8 = NULL;
          t = z_7;
          t = t_0(t);
          f_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(f_8), term_c_8), term_g_8), term_c_8);
        }
      else
        {
          if(match_int(t, 95))
            {
              ATerm s_8 = NULL;
              t = z_7;
              t = t_0(t);
              s_8 = t;
              t = (ATerm) ATinsert(ATinsert(CheckATermList(s_8), term_c_8), term_c_8);
            }
          else
            {
              if(match_int(t, 45))
                {
                  ATerm u_8 = NULL;
                  t = z_7;
                  t = t_0(t);
                  u_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_8), term_c_8);
                }
              else
                {
                  ATerm x_8 = NULL;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 39)))
                    _fail(t);
                  t = z_7;
                  t = t_0(t);
                  x_8 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(x_8), term_c_8), term_i_8), term_c_8);
                }
            }
        }
    }
  return(t);
}
ATerm escape_1_0 (ATerm h_140 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm a_9 = NULL,f_9 = NULL;
  f_9 = t;
  t = SSL_explode_string(f_9);
  {
    static ATerm a_10 (ATerm t);
    static ATerm a_10 (ATerm t)
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_140(a_10, t);
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
                  ATerm l_10 = NULL,o_10 = NULL,a_0 = NULL;
                  t = SSLgetAnnotations(z_9);
                  l_10 = t;
                  t = y_9;
                  t = a_10(t);
                  o_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_10), x_9);
                  a_0 = t;
                  t = SSLsetAnnotations(a_0, l_10);
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
    t = a_10(t);
  }
  a_9 = t;
  t = SSL_implode_string(a_9);
  return(t);
}
ATerm foldr_3_0 (ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm z_134 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,k_10 = NULL;
  h_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_10;
      t = x_134(t);
    }
  else
    {
      ATerm u_10 = NULL,v_10 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_10 = ATgetFirst((ATermList) t);
          k_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_10;
      t = z_134(t);
      u_10 = t;
      t = k_10;
      t = foldr_3_0(x_134, y_134, z_134, t);
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
      t = y_134(t);
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
  ATerm e_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(e_13, f_13, t);
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
  ATerm g_13 = NULL,i_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(g_13, i_13, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_n_6;
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
  ATerm l_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(l_16, o_16, t);
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
  ATerm p_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(p_16, q_16, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_n_6;
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
  ATerm w_19 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(w_19, b_20, t);
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
  ATerm f_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(f_20, l_20, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_n_6;
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
  ATerm z_19 = NULL,a_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
  z_19 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      a_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      d_20 = ATgetArgument(t, 2);
      e_20 = ATgetArgument(t, 3);
      {
        ATerm l_12 = NULL,p_12 = NULL,r_12 = NULL,t_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL,u_13 = NULL,v_13 = NULL;
        t = c_20;
        t = foldr_3_0(k_1, l_1, n_1, t);
        l_12 = t;
        t = d_20;
        t = foldr_3_0(p_1, q_1, s_1, t);
        p_12 = t;
        t = a_20;
        if(match_cons(t, sym_Mod_2))
          {
            u_13 = ATgetArgument(t, 0);
            v_13 = ATgetArgument(t, 1);
            {
              ATerm l_8 = t;
              int m_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_14 = NULL;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_13), term_n_8), u_13);
                  z_14 = t;
                  t = SSL_concat_strings(z_14);
                  LocalPopChoice(m_8);
                }
              else
                {
                  t = l_8;
                  t = a_20;
                }
            }
          }
        else
          {
            t = a_20;
          }
        t = escape_1_0(Cify_1_0, t);
        t_12 = t;
        t = SSL_int_to_string(l_12);
        x_12 = t;
        t = SSL_int_to_string(p_12);
        y_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_12), term_p_8), x_12), term_p_8), t_12);
        c_13 = t;
        t = SSL_concat_strings(c_13);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, l_12, p_12));
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_8, r_12);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, l_12, p_12)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_8, r_12));
        t = x_5(t_1, z_12, a_13, t);
        t = r_12;
        {
          ATerm r_8 = t;
          int t_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL,f_14 = NULL;
              t = a_20;
              t = HoArg_0_0(t);
              e_14 = t;
              t = term_v_8;
              f_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_20, term_v_8);
              t = x_5(v_1, a_20, f_14, t);
              t = e_14;
              LocalPopChoice(t_8);
            }
          else
            {
              t = r_8;
              {
                ATerm j_14 = NULL;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_8, r_12);
                j_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym_Defined_2, term_y_8, r_12));
                t = x_5(z_1, a_20, j_14, t);
                t = r_12;
              }
            }
        }
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, r_12, c_20, d_20, e_20);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtSDef_3))
        {
          a_20 = ATgetArgument(t, 0);
          c_20 = ATgetArgument(t, 1);
          d_20 = ATgetArgument(t, 2);
          {
            ATerm o_15 = NULL,p_15 = NULL,s_15 = NULL,t_15 = NULL,w_15 = NULL,x_15 = NULL,z_15 = NULL,g_16 = NULL,h_16 = NULL,z_16 = NULL,g_17 = NULL;
            t = c_20;
            t = foldr_3_0(a_2, b_2, c_2, t);
            o_15 = t;
            t = d_20;
            t = foldr_3_0(d_2, e_2, f_2, t);
            p_15 = t;
            t = a_20;
            if(match_cons(t, sym_Mod_2))
              {
                z_16 = ATgetArgument(t, 0);
                g_17 = ATgetArgument(t, 1);
                {
                  ATerm z_8 = t;
                  int c_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_18 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_17), term_n_8), z_16);
                      k_18 = t;
                      t = SSL_concat_strings(k_18);
                      LocalPopChoice(c_9);
                    }
                  else
                    {
                      t = z_8;
                      t = a_20;
                    }
                }
              }
            else
              {
                t = a_20;
              }
            t = escape_1_0(Cify_1_0, t);
            t_15 = t;
            t = SSL_int_to_string(o_15);
            w_15 = t;
            t = SSL_int_to_string(p_15);
            x_15 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_15), term_p_8), w_15), term_p_8), t_15);
            h_16 = t;
            t = SSL_concat_strings(h_16);
            s_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, o_15, p_15));
            z_15 = t;
            t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, s_15);
            g_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, o_15, p_15)), (ATerm) ATmakeAppl(sym_Defined_2, term_d_9, s_15));
            t = x_5(g_2, z_15, g_16, t);
            t = s_15;
            {
              ATerm e_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_17 = NULL,q_17 = NULL;
                  t = a_20;
                  t = HoArg_0_0(t);
                  p_17 = t;
                  t = term_v_8;
                  q_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_20, term_v_8);
                  t = x_5(h_2, a_20, q_17, t);
                  t = p_17;
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = e_9;
                  {
                    ATerm u_17 = NULL;
                    t = (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, s_15);
                    u_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym_Defined_2, term_h_9, s_15));
                    t = x_5(i_2, a_20, u_17, t);
                    t = s_15;
                  }
                }
            }
            t = (ATerm) ATmakeAppl(sym_ExtSDef_3, s_15, c_20, d_20);
          }
        }
      else
        {
          ATerm y_18 = NULL,a_19 = NULL,d_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,p_19 = NULL,s_19 = NULL,v_19 = NULL,a_21 = NULL,f_21 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              a_20 = ATgetArgument(t, 0);
              c_20 = ATgetArgument(t, 1);
              d_20 = ATgetArgument(t, 2);
              e_20 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = c_20;
          t = foldr_3_0(j_2, k_2, l_2, t);
          y_18 = t;
          t = d_20;
          t = foldr_3_0(m_2, n_2, o_2, t);
          a_19 = t;
          t = a_20;
          if(match_cons(t, sym_Mod_2))
            {
              a_21 = ATgetArgument(t, 0);
              f_21 = ATgetArgument(t, 1);
              {
                ATerm i_9 = t;
                int j_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_22 = NULL;
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_21), term_n_8), a_21);
                    l_22 = t;
                    t = SSL_concat_strings(l_22);
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
          k_19 = t;
          t = SSL_int_to_string(y_18);
          l_19 = t;
          t = SSL_int_to_string(a_19);
          m_19 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_19), term_p_8), l_19), term_p_8), k_19);
          v_19 = t;
          t = SSL_concat_strings(v_19);
          d_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, y_18, a_19));
          p_19 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, d_19);
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym__2, y_18, a_19)), (ATerm) ATmakeAppl(sym_Defined_2, term_k_9, d_19));
          t = x_5(p_2, p_19, s_19, t);
          t = d_19;
          {
            ATerm l_9 = t;
            int n_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_21 = NULL,q_21 = NULL;
                t = a_20;
                t = HoArg_0_0(t);
                p_21 = t;
                t = term_v_8;
                q_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_20, term_v_8);
                t = x_5(q_2, a_20, q_21, t);
                t = p_21;
                LocalPopChoice(n_9);
              }
            else
              {
                t = l_9;
                {
                  ATerm s_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_9, d_19);
                  s_21 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_20, (ATerm) ATmakeAppl(sym_Defined_2, term_o_9, d_19));
                  t = x_5(r_2, a_20, s_21, t);
                  t = d_19;
                }
              }
          }
          t = (ATerm) ATmakeAppl(sym_SDefT_4, d_19, c_20, d_20, e_20);
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
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = RenameCall_0_0(t);
      LocalPopChoice(q_9);
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
ATerm Cons_2_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,y_20 = NULL,i_0 = NULL;
  y_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_20 = ATgetFirst((ATermList) t);
      t_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_20);
  r_20 = t;
  t = s_20;
  t = f_92(t);
  u_20 = t;
  t = t_20;
  t = g_92(t);
  v_20 = t;
  t = (ATerm) ATinsert(CheckATermList(v_20), u_20);
  i_0 = t;
  t = SSLsetAnnotations(i_0, r_20);
  return(t);
}
static ATerm b_6 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm b_21 = NULL;
  t = SSL_fputc(h_35, i_35);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_21);
  return(t);
}
static ATerm c_6 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm c_21 = NULL;
  t = SSL_write_term_to_stream_text(n_33, o_33);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_21);
  return(t);
}
static ATerm e_6 (ATerm n_124 (ATerm), ATerm s_259, ATerm t_33, ATerm t)
{
  ATerm d_21 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_259, term_s_9);
  t = i_6(t);
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_21, t_33);
  t = n_124(t);
  t = fclose_0_0(t);
  t = t_33;
  return(t);
}
static ATerm d_6 (ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm e_21 = NULL;
  t = SSL_write_term_to_stream_baf(j_33, k_33);
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_21);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_9 = ATgetArgument(t, 0);
      if(match_cons(t_9, sym_Stream_1))
        {
          r_21 = ATgetArgument(t_9, 0);
        }
      else
        _fail(t);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(r_21, t_21, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL;
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
  t = c_6(x_21, y_21, t);
  u_21 = t;
  t = term_v_9;
  v_21 = t;
  t = u_21;
  if(match_cons(t, sym_Stream_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, u_21);
  t = b_6(v_21, w_21, t);
  return(t);
}
ATerm output_1_0 (ATerm j_147 (ATerm), ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  t = j_147(t);
  i_21 = t;
  {
    ATerm w_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL,k_21 = NULL;
        t = term_d_10;
        j_21 = t;
        t = term_e_10;
        k_21 = t;
        t = term_f_10;
        t = o_6(j_21, k_21, t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = w_9;
        t = term_g_10;
      }
  }
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
  {
    ATerm j_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL;
        t = term_d_10;
        n_21 = t;
        t = term_n_10;
        o_21 = t;
        t = term_p_10;
        t = o_6(n_21, o_21, t);
        t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
        LocalPopChoice(m_10);
        if(match_cons(t, sym__2))
          {
            ATerm q_10 = ATgetArgument(t, 0);
            ATerm r_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(v_2, h_21, i_21, t);
      }
    else
      {
        t = j_10;
        if(match_cons(t, sym__2))
          {
            ATerm s_10 = ATgetArgument(t, 0);
            ATerm t_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(y_2, h_21, i_21, t);
      }
  }
  return(t);
}
static ATerm b_23 (ATerm r_22, ATerm t)
{
  t = SSL_fclose(r_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_22 = ATgetArgument(t, 0);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_22);
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            t = b_23(z_22, t);
          }
      }
    }
  else
    {
      t = b_23(z_22, t);
    }
  return(t);
}
static ATerm f_6 (ATerm p_33, ATerm t)
{
  t = SSL_read_term_from_stream(p_33);
  return(t);
}
static ATerm g_6 (ATerm r_55, ATerm s_55, ATerm t)
{
  t = SSL_strcat(r_55, s_55);
  return(t);
}
static ATerm h_6 (ATerm j_35, ATerm k_35, ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_fopen(j_35, k_35);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_23 = NULL;
  t = SSL_stdin_stream();
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_23 = NULL;
  t = SSL_stdout_stream();
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_23);
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
static ATerm n_26 (ATerm b_24, ATerm t)
{
  ATerm c_24 = NULL;
  t = SSL_explode_term(b_24);
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_10 = ATgetArgument(t, 1);
        if(((ATgetType(z_10) == AT_LIST) && !(ATisEmpty(z_10))))
          {
            c_24 = ATgetFirst((ATermList) z_10);
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
  t = c_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_26 (ATerm p_24, ATerm r_24, ATerm s_24, ATerm t)
{
  ATerm t_24 = NULL,d_25 = NULL,g_25 = NULL,k_25 = NULL,s_0 = NULL;
  t = SSLgetAnnotations(s_24);
  g_25 = t;
  t = p_24;
  if(match_cons(t, sym_Path_1))
    {
      k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_25, r_24);
  s_0 = t;
  t = SSLsetAnnotations(s_0, g_25);
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(t_24, d_25, t);
  return(t);
}
static ATerm p_26 (ATerm y_25, ATerm z_25, ATerm c_26, ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL,i_26 = NULL,u_0 = NULL;
  t = SSLgetAnnotations(c_26);
  f_26 = t;
  t = SSL_is_string(y_25);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_26, z_25);
  u_0 = t;
  t = SSLsetAnnotations(u_0, f_26);
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(d_26, e_26, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_26(k_26, t);
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
                  t = o_26(l_26, m_26, k_26, t);
                  LocalPopChoice(e_11);
                }
              else
                {
                  t = d_11;
                  t = p_26(l_26, m_26, k_26, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_26(k_26, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,y_26 = NULL;
  y_26 = t;
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_26, term_h_11);
        t = i_6(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        {
          ATerm i_23 = NULL,k_23 = NULL;
          t = term_i_11;
          k_23 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_11, y_26);
          t = g_6(k_23, y_26, t);
          i_23 = t;
          t = SSL_perror(i_23);
          _fail(t);
        }
      }
  }
  s_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(t_26, t);
  r_26 = t;
  t = s_26;
  t = fclose_0_0(t);
  t = r_26;
  return(t);
}
ATerm input_1_0 (ATerm k_147 (ATerm), ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,c_27 = NULL;
      t = term_d_10;
      b_27 = t;
      t = term_l_11;
      c_27 = t;
      t = term_m_11;
      t = o_6(b_27, c_27, t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = term_n_11;
    }
  t = ReadFromFile_0_0(t);
  t = k_147(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  t = term_d_10;
  d_27 = t;
  t = term_o_11;
  e_27 = t;
  t = term_p_11;
  t = o_6(d_27, e_27, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_27;
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
            t = g_27;
          }
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATinsert(ATempty, g_27);
      }
  }
  h_27 = t;
  t = term_g_10;
  i_27 = t;
  t = SSL_printnl(i_27, h_27);
  t = g_27;
  return(t);
}
ATerm map_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  static ATerm c_28 (ATerm t);
  static ATerm c_28 (ATerm t)
  {
    ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
    z_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_27;
      }
    else
      {
        ATerm p_23 = NULL,s_23 = NULL,t_23 = NULL,x_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_28 = ATgetFirst((ATermList) t);
            b_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_27);
        p_23 = t;
        t = a_28;
        t = a_129(t);
        s_23 = t;
        t = b_28;
        t = c_28(t);
        t_23 = t;
        t = (ATerm) ATinsert(CheckATermList(t_23), s_23);
        x_0 = t;
        t = SSLsetAnnotations(x_0, p_23);
      }
    return(t);
  }
  t = c_28(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_28 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_28 = NULL,l_28 = NULL;
        static ATerm z_2 (ATerm t);
        static ATerm z_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_28)), not_null(l_28));
          return(t);
        }
        t = g_28;
        t = p_0(t);
        if(((k_28 != NULL) && (k_28 != t)))
          _fail(t);
        else
          k_28 = t;
        t = f_28;
        t = n_0(t);
        if(((l_28 != NULL) && (l_28 != t)))
          _fail(t);
        else
          l_28 = t;
        t = g_28;
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
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,z_0 = NULL;
  w_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_28);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_28);
  z_0 = t;
  t = SSLsetAnnotations(z_0, u_28);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_29), term_v_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm i_149 (ATerm), ATerm j_149 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_28 = NULL,t_28 = NULL;
      t = term_d_10;
      s_28 = t;
      t = term_o_11;
      t_28 = t;
      t = term_p_11;
      t = o_6(s_28, t_28, t);
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
        t = i_149(t);
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
  q_28 = t;
  t = term_c_12;
  r_28 = t;
  t = term_d_12;
  t = o_6(q_28, r_28, t);
  t = reverse_acc_2_0(_id, c_3, t);
  t = map_1_0(d_3, t);
  t = term_e_12;
  t = echo_0_0(t);
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_149(t);
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_29 = NULL;
              b_29 = t;
              t = SSL_is_string(b_29);
              t = b_29;
              LocalPopChoice(i_12);
              {
                ATerm c_29 = NULL;
                c_29 = t;
                t = (ATerm) ATinsert(ATempty, c_29);
              }
            }
          else
            {
              t = h_12;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,b_1 = NULL;
  l_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_29);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_29);
  b_1 = t;
  t = SSLsetAnnotations(b_1, j_29);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_29 = NULL,i_29 = NULL;
        t = term_d_10;
        h_29 = t;
        t = term_o_11;
        i_29 = t;
        t = term_p_11;
        t = o_6(h_29, i_29, t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = fetch_1_0(h_3, t);
      }
  }
  t = g_29;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  if(match_string(t, "-k"))
    {
      t = n_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_29;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  t = SSL_string_to_int(o_29);
  p_29 = t;
  t = term_m_12;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, p_29);
  t = r_6(q_29, p_29, t);
  t = o_29;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, k_3, m_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  if(match_string(t, "-S"))
    {
      t = s_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_29;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  t = term_o_12;
  t_29 = t;
  t = term_y_6;
  u_29 = t;
  t = term_q_12;
  t = r_6(t_29, u_29, t);
  t = term_s_12;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_u_12;
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
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  t = SSL_string_to_int(v_29);
  w_29 = t;
  t = term_o_12;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_12, w_29);
  t = r_6(x_29, w_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_29);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_v_12;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  t = term_w_12;
  y_29 = t;
  t = term_u_11;
  z_29 = t;
  t = term_b_13;
  t = r_6(y_29, z_29, t);
  t = term_d_13;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, o_3, p_3, t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, r_3, s_3, t);
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            t = Option_3_0(t_3, b_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm j_39, ATerm k_39, ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  t = term_d_10;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, j_39, k_39);
  t = lookup_table_0_1(a_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(j_39, k_39, b_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_10, j_39, k_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
      t = term_u_11;
      t = f_0(t);
      h_30 = t;
      t = term_b_12;
      i_30 = t;
      t = term_c_12;
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, h_30);
      t = p_6(i_30, j_30, h_30, t);
      _fail(t);
    }
  else
    {
      ATerm m_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_30 = ATgetFirst((ATermList) t);
          g_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_30;
      t = d_0(t);
      t = term_u_11;
      t = e_0(t);
      m_30 = t;
      t = (ATerm) ATinsert(CheckATermList(g_30), m_30);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_30 = NULL;
  o_30 = t;
  if(match_string(t, "-o"))
    {
      t = o_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_30;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  p_30 = t;
  t = term_e_10;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, p_30);
  t = r_6(q_30, p_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_30);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, o_4, p_4, t);
  return(t);
}
static ATerm p_6 (ATerm j_58, ATerm k_58, ATerm i_58, ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_13 = ATgetArgument(t, 0);
            ATerm r_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
        t = o_6(j_58, k_58, t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = (ATerm) ATempty;
      }
  }
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_58, k_58, (ATerm) ATinsert(CheckATermList(t_30), i_58));
  t = lookup_table_0_1(j_58, t);
  w_30 = t;
  t = (ATerm) ATinsert(CheckATermList(t_30), i_58);
  u_30 = t;
  t = w_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(k_58, u_30, v_30, t);
  t = s_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
      t = term_u_11;
      t = l_0(t);
      h_31 = t;
      t = term_b_12;
      i_31 = t;
      t = term_c_12;
      j_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_12, term_c_12, h_31);
      t = p_6(i_31, j_31, h_31, t);
      _fail(t);
    }
  else
    {
      ATerm n_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_31 = ATgetFirst((ATermList) t);
          e_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_31 = ATgetFirst((ATermList) t);
          g_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_31;
      t = h_0(t);
      t = f_31;
      t = k_0(t);
      n_31 = t;
      t = (ATerm) ATinsert(CheckATermList(g_31), n_31);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  if(match_string(t, "-i"))
    {
      t = p_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_31;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  t = term_l_11;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, q_31);
  t = r_6(r_31, q_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_31);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_11;
  t = whoami_0_0(t);
  s_31 = t;
  t = term_t_13;
  u_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_13), s_31);
  v_31 = t;
  t = SSL_printnl(u_31, v_31);
  t = term_z_6;
  t_31 = t;
  t = SSL_exit(t_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  t = term_d_10;
  w_31 = t;
  t = term_o_11;
  x_31 = t;
  t = term_p_11;
  t = o_6(w_31, x_31, t);
  return(t);
}
static ATerm j_6 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_42, j_42);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      t = SSL_addr(i_42, j_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_31;
      t = v_134(t);
    }
  else
    {
      ATerm e_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          b_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_32;
      t = foldr_2_0(v_134, w_134, t);
      e_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_32, e_32);
      t = w_134(t);
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
  ATerm f_24 = NULL,g_24 = NULL;
  if(match_cons(t, sym__2))
    {
      f_24 = ATgetArgument(t, 0);
      g_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(f_24, g_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_32 = NULL,y_23 = NULL,z_23 = NULL;
  t = times_0_0(t);
  z_23 = t;
  t = SSL_explode_term(z_23);
  if(match_cons(t, sym__2))
    {
      ATerm z_13 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_23;
  t = foldr_2_0(t_4, u_4, t);
  h_32 = t;
  t = SSL_TicksToSeconds(h_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  s_32 = t;
  if(match_cons(t, sym__2))
    {
      t_32 = ATgetArgument(t, 0);
      u_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_32;
        if((t_32 != t))
          {
            _fail(t);
          }
        t = s_32;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_32, u_32);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              t = SSL_gtr(t_32, u_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_32, u_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
        t = term_d_10;
        b_33 = t;
        t = term_o_12;
        c_33 = t;
        t = term_i_14;
        t = o_6(b_33, c_33, t);
        a_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_33, term_z_6);
        t = geq_0_0(t);
        t = y_32;
        t = f_126(t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = y_32;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,h_33 = NULL,i_33 = NULL;
  t = run_time_0_0(t);
  e_33 = t;
  t = term_u_11;
  t = whoami_0_0(t);
  f_33 = t;
  t = term_t_13;
  h_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), e_33), term_k_14), f_33);
  i_33 = t;
  t = SSL_printnl(h_33, i_33);
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_14), e_33), term_k_14), f_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_6;
  l_33 = t;
  t = SSL_exit(l_33);
  return(t);
}
static ATerm s_6 (ATerm y_62, ATerm z_62, ATerm a_63, ATerm t)
{
  ATerm m_33 = NULL;
  t = SSL_hashtable_put(a_63, y_62, z_62);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_59, ATerm t)
{
  ATerm a_34 = NULL;
  t = table_hashtable_0_0(t);
  a_34 = t;
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        t = a_34;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_6(v_59, w_24, t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          ATerm b_25 = NULL;
          t = v_59;
          t = table_create_0_0(t);
          t = a_34;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_6(v_59, b_25, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm g_63, ATerm h_63, ATerm t)
{
  ATerm d_34 = NULL;
  t = SSL_hashtable_create(g_63, h_63);
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_34);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,i_34 = NULL,j_34 = NULL;
  e_34 = t;
  t = term_o_14;
  i_34 = t;
  t = term_p_14;
  j_34 = t;
  t = e_34;
  t = new_hashtable_0_2(i_34, j_34, t);
  f_34 = t;
  t = e_34;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(e_34, f_34, g_34, t);
  t = e_34;
  return(t);
}
static ATerm l_6 (ATerm d_63, ATerm e_63, ATerm t)
{
  ATerm k_34 = NULL;
  t = SSL_hashtable_remove(e_63, d_63);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_34);
  return(t);
}
static ATerm m_6 (ATerm i_63, ATerm t)
{
  ATerm l_34 = NULL;
  t = SSL_hashtable_destroy(i_63);
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_34);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_34 = NULL;
  t = SSL_table_hashtable();
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_34);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  n_34 = t;
  t = table_hashtable_0_0(t);
  o_34 = t;
  t = lookup_table_0_1(n_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(q_34, t);
  t = o_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(n_34, p_34, t);
  t = n_34;
  return(t);
}
ATerm fetch_1_0 (ATerm i_129 (ATerm), ATerm t)
{
  static ATerm t_35 (ATerm t);
  static ATerm t_35 (ATerm t)
  {
    ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
    q_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_35 = ATgetFirst((ATermList) t);
        s_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_25 = NULL,o_25 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(q_35);
          l_25 = t;
          t = r_35;
          t = i_129(t);
          o_25 = t;
          t = (ATerm) ATinsert(CheckATermList(s_35), o_25);
          d_1 = t;
          t = SSLsetAnnotations(d_1, l_25);
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
          {
            ATerm w_25 = NULL,q_26 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(q_35);
            w_25 = t;
            t = s_35;
            t = t_35(t);
            q_26 = t;
            t = (ATerm) ATinsert(CheckATermList(q_26), r_35);
            e_1 = t;
            t = SSLsetAnnotations(e_1, w_25);
          }
        }
    }
    return(t);
  }
  t = t_35(t);
  return(t);
}
static ATerm t_6 (ATerm b_63, ATerm c_63, ATerm t)
{
  t = SSL_hashtable_get(c_63, b_63);
  return(t);
}
static ATerm o_6 (ATerm c_60, ATerm d_60, ATerm t)
{
  ATerm w_35 = NULL;
  t = lookup_table_0_1(c_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(d_60, w_35, t);
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
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_s_14;
  y_35 = t;
  t = term_u_11;
  z_35 = t;
  t = term_t_14;
  t = r_6(y_35, z_35, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_u_14;
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
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  t = term_s_14;
  c_36 = t;
  t = term_u_11;
  d_36 = t;
  t = term_t_14;
  t = r_6(c_36, d_36, t);
  t = term_v_14;
  a_36 = t;
  t = term_u_11;
  b_36 = t;
  t = term_w_14;
  t = r_6(a_36, b_36, t);
  t = term_x_14;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, x_4, z_4, t);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      t = Option_3_0(a_5, b_5, e_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_149 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,n_36 = NULL,o_36 = NULL,m_1 = NULL;
  i_36 = t;
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_15;
        t = d_149(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
      }
  }
  t = i_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_36 = ATgetFirst((ATermList) t);
      l_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  j_36 = t;
  t = term_o_11;
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_11, k_36);
  t = r_6(o_36, k_36, t);
  t = l_36;
  {
    static ATerm y_36 (ATerm t);
    static ATerm y_36 (ATerm t)
    {
      ATerm f_15 = t;
      int g_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_36 = NULL;
              r_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_36;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = d_149(t);
              t = Cons_2_0(_id, y_36, t);
            }
          LocalPopChoice(g_15);
        }
      else
        {
          t = f_15;
          {
            ATerm u_36 = NULL,v_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_36 = ATgetFirst((ATermList) t);
                v_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_36), (ATerm) ATmakeAppl(sym_Undefined_1, u_36));
          }
        }
      return(t);
    }
    t = y_36(t);
  }
  n_36 = t;
  t = (ATerm) ATinsert(CheckATermList(n_36), (ATerm) ATmakeAppl(sym_Program_1, k_36));
  m_1 = t;
  t = SSLsetAnnotations(m_1, j_36);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  if(match_string(t, "--help"))
    {
      t = l_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_37;
        }
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  t = term_j_15;
  m_37 = t;
  t = term_u_11;
  n_37 = t;
  t = term_k_15;
  t = r_6(m_37, n_37, t);
  t = term_l_15;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_m_15;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm a_149 (ATerm), ATerm b_149 (ATerm), ATerm c_149 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  f_37 = t;
  t = term_b_12;
  g_37 = t;
  t = term_n_15;
  t = lookup_table_0_1(g_37, t);
  k_37 = t;
  t = term_c_12;
  h_37 = t;
  t = (ATerm) ATempty;
  i_37 = t;
  t = k_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(h_37, i_37, j_37, t);
  t = f_37;
  {
    static ATerm f_5 (ATerm t);
    static ATerm f_5 (ATerm t)
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_149(t);
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          {
            ATerm u_15 = t;
            int v_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_5, i_5, j_5, t);
                LocalPopChoice(v_15);
              }
            else
              {
                t = u_15;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_5, t);
  }
  {
    ATerm y_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_37 = NULL;
        y_37 = t;
        {
          ATerm b_16 = t;
          int c_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_28 = NULL;
              t = y_37;
              {
                ATerm d_16 = t;
                int e_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_28 = NULL,o_28 = NULL;
                    t = term_d_10;
                    n_28 = t;
                    t = term_j_15;
                    o_28 = t;
                    t = term_f_16;
                    t = o_6(n_28, o_28, t);
                    LocalPopChoice(e_16);
                  }
                else
                  {
                    t = d_16;
                    t = fetch_1_0(k_5, t);
                  }
              }
              t = y_37;
              t = b_149(t);
              t = term_y_6;
              m_28 = t;
              t = SSL_exit(m_28);
              LocalPopChoice(c_16);
            }
          else
            {
              t = b_16;
              {
                ATerm d_30 = NULL,n_30 = NULL,r_30 = NULL;
                t = term_d_10;
                n_30 = t;
                t = term_s_14;
                r_30 = t;
                t = term_i_16;
                t = o_6(n_30, r_30, t);
                t = y_37;
                t = c_149(t);
                t = term_y_6;
                d_30 = t;
                t = SSL_exit(d_30);
              }
            }
        }
        LocalPopChoice(a_16);
      }
    else
      {
        t = y_15;
        {
          ATerm j_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
              static ATerm l_5 (ATerm t);
              static ATerm l_5 (ATerm t)
              {
                ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,o_1 = NULL;
                e_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_38);
                c_38 = t;
                t = d_38;
                if(((d_37 != NULL) && (d_37 != t)))
                  _fail(t);
                else
                  d_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_38);
                o_1 = t;
                t = SSLsetAnnotations(o_1, c_38);
                return(t);
              }
              t = fetch_1_0(l_5, t);
              t = term_t_13;
              a_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_37)), term_m_16);
              b_38 = t;
              t = SSL_printnl(a_38, b_38);
              t = (ATerm) ATmakeAppl(sym__2, term_t_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_37)), term_m_16));
              t = b_149(t);
              t = term_z_6;
              z_37 = t;
              t = SSL_exit(z_37);
              LocalPopChoice(k_16);
            }
          else
            {
              t = j_16;
            }
        }
      }
  }
  e_37 = t;
  t = term_b_12;
  t = table_destroy_0_0(t);
  t = e_37;
  return(t);
}
ATerm option_wrap_5_0 (ATerm d_147 (ATerm), ATerm e_147 (ATerm), ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  t = parse_options_3_0(d_147, e_147, f_147, t);
  j_38 = t;
  t = term_n_16;
  t = table_create_0_0(t);
  t = term_n_16;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_16, term_r_16, j_38);
  t = lookup_table_0_1(k_38, t);
  n_38 = t;
  t = term_r_16;
  l_38 = t;
  t = n_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(l_38, j_38, m_38, t);
  t = j_38;
  t = g_147(t);
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_147(t);
        t = report_success_0_0(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm u_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm y_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_5, p_5, q_5, t);
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = y_16;
                  {
                    ATerm b_17 = t;
                    int c_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_17);
                      }
                    else
                      {
                        t = b_17;
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
  ATerm p_38 = NULL,q_38 = NULL;
  t = term_n_10;
  p_38 = t;
  t = term_u_11;
  q_38 = t;
  t = term_d_17;
  t = r_6(p_38, q_38, t);
  t = term_e_17;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = output_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,y_1 = NULL,x_1 = NULL;
  z_38 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_38);
  s_38 = t;
  t = t_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_38 = ATgetFirst((ATermList) t);
      w_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_38);
  u_38 = t;
  t = w_38;
  t = Cons_2_0(t_5, u_5, t);
  x_38 = t;
  t = (ATerm) ATinsert(CheckATermList(x_38), v_38);
  x_1 = t;
  t = SSLsetAnnotations(x_1, u_38);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_38);
  y_1 = t;
  t = SSLsetAnnotations(y_1, s_38);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,w_1 = NULL;
  d_39 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_39);
  a_39 = t;
  t = b_39;
  t = rename_sdefs_0_0(t);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_39);
  w_1 = t;
  t = SSLsetAnnotations(w_1, a_39);
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

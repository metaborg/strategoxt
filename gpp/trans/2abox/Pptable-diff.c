#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Old_Table_1;
Symbol sym_New_Table_1;
Symbol sym_Verbose_0;
Symbol sym_Patch_0;
Symbol sym_Prune_0;
Symbol sym_Patched_1;
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
Symbol sym_Undefined_0;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_SOpt_2;
Symbol sym_Strict_0;
static void init_module_constructors (void)
{
  sym_Old_Table_1 = ATmakeSymbol("Old-Table", 1, ATfalse);
  ATprotectSymbol(sym_Old_Table_1);
  sym_New_Table_1 = ATmakeSymbol("New-Table", 1, ATfalse);
  ATprotectSymbol(sym_New_Table_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Patch_0 = ATmakeSymbol("Patch", 0, ATfalse);
  ATprotectSymbol(sym_Patch_0);
  sym_Prune_0 = ATmakeSymbol("Prune", 0, ATfalse);
  ATprotectSymbol(sym_Prune_0);
  sym_Patched_1 = ATmakeSymbol("Patched", 1, ATfalse);
  ATprotectSymbol(sym_Patched_1);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
}
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_f_26;
ATerm term_a_26;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_u_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_v_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_i_19;
ATerm term_y_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_16;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_x_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_r_9, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_l_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_q_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_w_12);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_v_12);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_o_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_x_10);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_x_21);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_m_20);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_w_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_o_21);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_x_10);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_k_24, term_x_10);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_x_10);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__3, term_k_21, term_o_21, (ATerm) ATempty);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_h_24);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_x_10);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm c_6 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm d_6 (ATerm p_17, ATerm q_17, ATerm t);
static ATerm f_6 (ATerm b_79 (ATerm), ATerm k_161, ATerm v_17, ATerm t);
static ATerm e_6 (ATerm l_17, ATerm m_17, ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm output_1_0 (ATerm z_97 (ATerm), ATerm t);
static ATerm g_6 (ATerm g_33, ATerm h_33, ATerm t);
static ATerm h_6 (ATerm c_104 (ATerm), ATerm a_56, ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm n_6 (ATerm v_15, ATerm w_15, ATerm t);
static ATerm u_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm o_6 (ATerm q_83 (ATerm), ATerm r_23, ATerm q_23, ATerm t);
ATerm at_end_1_0 (ATerm b_80 (ATerm), ATerm t);
static ATerm h_19 (ATerm u_18, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm t_6 (ATerm r_630, ATerm w_630, ATerm z_53, ATerm t);
ATerm while_not_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm t);
ATerm for_3_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm g_24 (ATerm i_21, ATerm l_21, ATerm m_21, ATerm t);
static ATerm h_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm v_6 (ATerm v_83 (ATerm), ATerm t_23, ATerm s_23, ATerm t);
ATerm foldr_3_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm collect_om_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t);
static ATerm w_6 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm x_23, ATerm w_23, ATerm t);
static ATerm x_6 (ATerm o_83 (ATerm), ATerm p_23, ATerm o_23, ATerm t);
static ATerm y_6 (ATerm h_51, ATerm t);
static ATerm z_6 (ATerm h_49, ATerm i_49, ATerm t);
static ATerm p_2 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm a_7 (ATerm a_55, ATerm b_55, ATerm t);
ATerm unescape_chars_1_0 (ATerm y_89 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm m_80 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm unquote_chars_2_0 (ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm y_72 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm j_7 (ATerm z_54, ATerm t);
static ATerm l_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm e_38 (ATerm x_37, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_7 (ATerm r_17, ATerm t);
static ATerm m_7 (ATerm n_31, ATerm o_31, ATerm t);
static ATerm n_7 (ATerm w_32, ATerm x_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_40 (ATerm p_38, ATerm t);
static ATerm c_40 (ATerm t_38, ATerm u_38, ATerm v_38, ATerm t);
static ATerm d_40 (ATerm h_39, ATerm m_39, ATerm n_39, ATerm t);
static ATerm o_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_79 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_7 (ATerm n_42, ATerm o_42, ATerm t);
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_7 (ATerm i_47, ATerm j_47, ATerm h_47, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_7 (ATerm q_35, ATerm r_35, ATerm t);
ATerm foldr_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_95 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm need_help_1_0 (ATerm q_97 (ATerm), ATerm t);
static ATerm y_7 (ATerm a_51, ATerm b_51, ATerm c_51, ATerm t);
ATerm lookup_table_0_1 (ATerm u_48, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_51, ATerm j_51, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_7 (ATerm f_51, ATerm g_51, ATerm t);
static ATerm t_7 (ATerm k_51, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_79 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_79 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_7 (ATerm d_51, ATerm e_51, ATerm t);
static ATerm v_7 (ATerm b_49, ATerm c_49, ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_99 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm parse_options_1_0 (ATerm s_99 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm io_Pptable_diff_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL,t_0 = NULL;
  o_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_0;
    }
  else
    {
      static ATerm a_0 (ATerm t)
      {
        t = not_null(t_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_0 = ATgetFirst((ATermList) t);
          if(((t_0 != NULL) && (t_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_0;
      t = at_end_1_0(a_0, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm w_0 = t;
    int g_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_74(t);
        LocalPopChoice(g_4);
      }
    else
      {
        t = w_0;
        t = SRTS_one(f_1, t);
      }
    return(t);
  }
  t = f_1(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm g_1 = NULL,i_1 = NULL;
  t = term_r_9;
  g_1 = t;
  t = term_t_9;
  i_1 = t;
  t = term_u_9;
  t = v_7(g_1, i_1, t);
  return(t);
}
static ATerm c_6 (ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm j_1 = NULL;
  t = SSL_fputc(u_32, v_32);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_1);
  return(t);
}
static ATerm d_6 (ATerm p_17, ATerm q_17, ATerm t)
{
  ATerm k_1 = NULL;
  t = SSL_write_term_to_stream_text(p_17, q_17);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_1);
  return(t);
}
static ATerm f_6 (ATerm b_79 (ATerm), ATerm k_161, ATerm v_17, ATerm t)
{
  ATerm l_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_161, term_v_9);
  t = o_7(t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, v_17);
  t = b_79(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm e_6 (ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm m_1 = NULL;
  t = SSL_write_term_to_stream_baf(l_17, m_17);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_1);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          u_1 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(u_1, v_1, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(match_cons(z_9, sym_Stream_1))
        {
          z_1 = ATgetArgument(z_9, 0);
        }
      else
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(z_1, a_2, t);
  w_1 = t;
  t = term_c_10;
  x_1 = t;
  t = w_1;
  if(match_cons(t, sym_Stream_1))
    {
      y_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, w_1);
  t = c_6(x_1, y_1, t);
  return(t);
}
ATerm output_1_0 (ATerm z_97 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  t = z_97(t);
  o_1 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 = NULL,q_1 = NULL;
        t = term_i_10;
        p_1 = t;
        t = term_l_10;
        q_1 = t;
        t = term_m_10;
        t = v_7(p_1, q_1, t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = term_n_10;
      }
  }
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,t_1 = NULL;
        t = term_i_10;
        s_1 = t;
        t = term_q_10;
        t_1 = t;
        t = term_r_10;
        t = v_7(s_1, t_1, t);
        t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
        LocalPopChoice(p_10);
        if(match_cons(t, sym__2))
          {
            ATerm s_10 = ATgetArgument(t, 0);
            ATerm t_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(b_0, n_1, o_1, t);
      }
    else
      {
        t = o_10;
        if(match_cons(t, sym__2))
          {
            ATerm v_10 = ATgetArgument(t, 0);
            ATerm w_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_6(f_0, n_1, o_1, t);
      }
  }
  return(t);
}
static ATerm g_6 (ATerm g_33, ATerm h_33, ATerm t)
{
  t = SSL_mkterm(g_33, h_33);
  return(t);
}
static ATerm h_6 (ATerm c_104 (ATerm), ATerm a_56, ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL;
  t = term_x_10;
  t = c_104(t);
  b_2 = t;
  t = (ATerm) ATinsert(ATempty, a_56);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATinsert(ATempty, a_56));
  t = g_6(b_2, d_2, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,z_0 = NULL;
      ATerm a_11 = t;
      int b_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm c_11 = ATgetFirst((ATermList) t);
              if(((ATgetType(c_11) != AT_INT) || (ATgetInt((ATermInt) c_11) != 34)))
                _fail(t);
              d_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(d_3), term_f_11), term_e_11);
          LocalPopChoice(b_11);
        }
      else
        {
          t = a_11;
          {
            ATerm h_3 = NULL,i_3 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_3 = ATgetFirst((ATermList) t);
                i_3 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_3;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(i_3), term_e_11), term_e_11);
              }
            else
              {
                if(match_int(t, 10))
                  {
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(i_3), term_h_11), term_e_11);
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(i_3), term_i_11), term_e_11);
                  }
              }
          }
        }
      b_3 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_2 = ATgetFirst((ATermList) t);
          z_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_3);
      w_2 = t;
      t = z_2;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      a_3 = t;
      t = (ATerm) ATinsert(CheckATermList(a_3), x_2);
      z_0 = t;
      t = SSLsetAnnotations(z_0, w_2);
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
        f_4 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_4 = ATgetFirst((ATermList) t);
            e_4 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm h_0 = NULL,p_0 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(f_4);
              h_0 = t;
              t = e_4;
              t = escape_chars_0_0(t);
              p_0 = t;
              t = (ATerm) ATinsert(CheckATermList(p_0), d_4);
              a_1 = t;
              t = SSLsetAnnotations(a_1, h_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_4;
          }
      }
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,h_10 = NULL,j_10 = NULL,k_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym_Arg_1))
    {
      h_10 = ATgetArgument(t, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 = NULL,k_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(k_10);
            i_2 = t;
            t = SSL_int_to_string(h_10);
            k_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, k_2);
            d_1 = t;
            t = SSLsetAnnotations(d_1, i_2);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = k_10;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          h_10 = ATgetArgument(t, 0);
          a_10 = ATgetArgument(t, 1);
          {
            ATerm p_11 = t;
            int r_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_2 = NULL,u_2 = NULL,v_2 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(k_10);
                r_2 = t;
                t = SSL_int_to_string(h_10);
                u_2 = t;
                t = SSL_int_to_string(a_10);
                v_2 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, u_2, v_2);
                e_1 = t;
                t = SSLsetAnnotations(e_1, r_2);
                LocalPopChoice(r_11);
              }
            else
              {
                t = p_11;
                t = k_10;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              h_10 = ATgetArgument(t, 0);
              a_10 = ATgetArgument(t, 1);
              {
                ATerm v_11 = t;
                int w_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_3 = NULL,h_1 = NULL;
                    t = SSLgetAnnotations(k_10);
                    p_3 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, h_10, a_10);
                    h_1 = t;
                    t = SSLsetAnnotations(h_1, p_3);
                    LocalPopChoice(w_11);
                  }
                else
                  {
                    t = v_11;
                    t = k_10;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  h_10 = ATgetArgument(t, 0);
                  {
                    ATerm x_11 = t;
                    int z_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 = NULL,o_4 = NULL,r_1 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,t_4 = NULL;
                        t = SSLgetAnnotations(k_10);
                        m_4 = t;
                        t = SSL_explode_string(h_10);
                        t = escape_chars_0_0(t);
                        t_4 = t;
                        t = SSL_implode_string(t_4);
                        x_4 = t;
                        t = SSL_explode_string(x_4);
                        z_4 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_4), term_f_11), (ATerm) ATinsert(ATempty, term_f_11));
                        t = conc_0_0(t);
                        w_4 = t;
                        t = SSL_implode_string(w_4);
                        o_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, o_4);
                        r_1 = t;
                        t = SSLsetAnnotations(r_1, m_4);
                        LocalPopChoice(z_11);
                      }
                    else
                      {
                        t = x_11;
                        t = k_10;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      h_10 = ATgetArgument(t, 0);
                      a_10 = ATgetArgument(t, 1);
                      {
                        ATerm d_12 = t;
                        int g_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_5 = NULL,o_5 = NULL,c_2 = NULL;
                            t = SSLgetAnnotations(k_10);
                            e_5 = t;
                            t = SSL_int_to_string(h_10);
                            o_5 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, o_5, a_10);
                            c_2 = t;
                            t = SSLsetAnnotations(c_2, e_5);
                            LocalPopChoice(g_12);
                          }
                        else
                          {
                            t = d_12;
                            t = k_10;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          h_10 = ATgetArgument(t, 0);
                          t = h_10;
                          if(match_cons(t, sym_Path_2))
                            {
                              j_10 = ATgetArgument(t, 0);
                              b_10 = ATgetArgument(t, 1);
                              {
                                ATerm i_12 = t;
                                int m_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_6 = NULL,k_6 = NULL;
                                    t = (ATerm) ATinsert(ATinsert(ATempty, j_10), term_q_12);
                                    k_6 = t;
                                    t = SSL_concat_strings(k_6);
                                    j_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Path_2, j_6, b_10);
                                    LocalPopChoice(m_12);
                                  }
                                else
                                  {
                                    t = i_12;
                                    t = k_10;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Path1_1))
                                {
                                  j_10 = ATgetArgument(t, 0);
                                  {
                                    ATerm t_12 = t;
                                    int u_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm u_6 = NULL,c_7 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, j_10), term_q_12);
                                        c_7 = t;
                                        t = SSL_concat_strings(c_7);
                                        u_6 = t;
                                        t = (ATerm) ATmakeAppl(sym_Path1_1, u_6);
                                        LocalPopChoice(u_12);
                                      }
                                    else
                                      {
                                        t = t_12;
                                        t = k_10;
                                      }
                                  }
                                }
                              else
                                {
                                  t = k_10;
                                }
                            }
                        }
                      else
                        {
                          t = k_10;
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(j_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm y_11 = NULL,b_12 = NULL;
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), y_11);
    t = v_7(not_null(t_11), y_11, t);
    b_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_11, b_12);
    return(t);
  }
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  t = lookup_table_0_1(t_11, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(u_11, t);
  t = map_1_0(m_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm c_12 = NULL,e_12 = NULL,f_12 = NULL,h_12 = NULL,k_12 = NULL;
  c_12 = t;
  t = term_v_12;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, c_12);
  t = v_7(k_12, c_12, t);
  e_12 = t;
  t = term_w_12;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, c_12, e_12);
  t = lookup_table_0_1(f_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(c_12, e_12, h_12, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, c_12, e_12);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm l_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,r_12 = NULL,s_12 = NULL,x_12 = NULL,a_13 = NULL,c_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,k_13 = NULL,m_13 = NULL,v_3 = NULL;
  l_12 = t;
  t = term_w_12;
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, l_12);
  t = v_7(e_13, l_12, t);
  m_13 = t;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_13);
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, g_13), h_13);
  v_3 = t;
  t = SSLsetAnnotations(v_3, f_13);
  k_13 = t;
  t = term_w_12;
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, (ATerm)ATmakeAppl(sym_Patched_1, l_12), k_13);
  t = lookup_table_0_1(s_12, t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, l_12);
  x_12 = t;
  t = c_13;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(x_12, k_13, a_13, t);
  t = term_v_12;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, l_12);
  t = v_7(r_12, l_12, t);
  n_12 = t;
  t = term_w_12;
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, l_12, n_12);
  t = lookup_table_0_1(o_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(l_12, n_12, p_12, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_12, l_12, n_12);
  return(t);
}
static ATerm n_6 (ATerm v_15, ATerm w_15, ATerm t)
{
  t = v_15;
  t = map_1_0(r_0, t);
  t = w_15;
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      p_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(p_8);
  u_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_8), term_z_12), u_8), term_y_12);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  if(match_cons(t, sym_Path1_1))
    {
      j_14 = ATgetArgument(t, 0);
      t = j_14;
    }
  else
    {
      ATerm m_8 = NULL,n_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          j_14 = ATgetArgument(t, 0);
          k_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_14;
      t = map_1_0(u_0, t);
      t = concat_0_0(t);
      m_8 = t;
      t = (ATerm) ATinsert(CheckATermList(m_8), j_14);
      n_8 = t;
      t = SSL_concat_strings(n_8);
    }
  return(t);
}
static ATerm o_6 (ATerm q_83 (ATerm), ATerm r_23, ATerm q_23, ATerm t)
{
  static ATerm v_16 (ATerm t)
  {
    ATerm m_16 = NULL,n_16 = NULL,p_16 = NULL;
    m_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_16;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_16 = ATgetFirst((ATermList) t);
            p_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_16;
              {
                static ATerm v_0 (ATerm t)
                {
                  t = q_23;
                  return(t);
                }
                t = w_6(q_83, v_0, n_16, p_16, t);
              }
              t = v_16(t);
              LocalPopChoice(i_13);
            }
          else
            {
              t = d_13;
              {
                ATerm f_9 = NULL,i_9 = NULL,z_3 = NULL;
                t = SSLgetAnnotations(m_16);
                f_9 = t;
                t = p_16;
                t = v_16(t);
                i_9 = t;
                t = (ATerm) ATinsert(CheckATermList(i_9), n_16);
                z_3 = t;
                t = SSLsetAnnotations(z_3, f_9);
              }
            }
        }
      }
    return(t);
  }
  t = r_23;
  t = v_16(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  static ATerm q_18 (ATerm t)
  {
    ATerm c_18 = NULL,m_18 = NULL,p_18 = NULL;
    p_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_18 = ATgetFirst((ATermList) t);
        m_18 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_10 = NULL,g_10 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(p_18);
          d_10 = t;
          t = m_18;
          t = q_18(t);
          g_10 = t;
          t = (ATerm) ATinsert(CheckATermList(g_10), c_18);
          b_4 = t;
          t = SSLsetAnnotations(b_4, d_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_18;
        t = b_80(t);
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
static ATerm h_19 (ATerm u_18, ATerm t)
{
  ATerm v_18 = NULL;
  t = SSL_explode_term(u_18);
  if(match_cons(t, sym__2))
    {
      ATerm j_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_18;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_18 = NULL,a_19 = NULL,b_19 = NULL;
  b_19 = t;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
      {
        ATerm l_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = a_19;
              return(t);
            }
            t = x_18;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = l_13;
            t = h_19(b_19, t);
          }
      }
    }
  else
    {
      t = h_19(b_19, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t)
{
  static ATerm u_19 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_81(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        {
          ATerm j_19 = NULL,o_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,q_4 = NULL;
          t = p_81(t);
          t_19 = t;
          if(match_cons(t, sym__2))
            {
              o_19 = ATgetArgument(t, 0);
              q_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_19);
          j_19 = t;
          t = o_19;
          t = r_81(t);
          r_19 = t;
          t = q_19;
          t = u_19(t);
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_19, s_19);
          q_4 = t;
          t = SSLsetAnnotations(q_4, j_19);
          t = q_81(t);
        }
      }
    return(t);
  }
  t = u_19(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(((ATgetType(q_13) != AT_LIST) || !(ATisEmpty(q_13))))
        _fail(t);
      {
        ATerm r_13 = ATgetArgument(t, 1);
        if(((ATgetType(r_13) != AT_LIST) || !(ATisEmpty(r_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(((ATgetType(s_13) == AT_LIST) && !(ATisEmpty(s_13))))
        {
          g_20 = ATgetFirst((ATermList) s_13);
          h_20 = (ATerm) ATgetNext((ATermList) s_13);
        }
      else
        _fail(t);
      {
        ATerm t_13 = ATgetArgument(t, 1);
        if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
          {
            i_20 = ATgetFirst((ATermList) t_13);
            j_20 = (ATerm) ATgetNext((ATermList) t_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_20, i_20), (ATerm) ATmakeAppl(sym__2, h_20, j_20));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm k_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_20), k_20);
  return(t);
}
static ATerm t_6 (ATerm r_630, ATerm w_630, ATerm z_53, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,d_20 = NULL,e_20 = NULL;
  t = SSL_explode_term(w_630);
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      d_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_630);
  if(match_cons(t, sym__2))
    {
      if((w_19 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_19, d_20);
  t = genzip_4_0(y_0, b_1, c_1, _id, t);
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_20, z_53);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm p_72 (ATerm), ATerm q_72 (ATerm), ATerm t)
{
  static ATerm p_20 (ATerm t)
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_72(t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = q_72(t);
        t = p_20(t);
      }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm for_3_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm t)
{
  t = s_72(t);
  t = while_not_2_0(t_72, u_72, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_21);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,y_4 = NULL;
  h_21 = t;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_21);
  e_21 = t;
  t = g_21;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_21, g_21);
  y_4 = t;
  t = SSLsetAnnotations(y_4, e_21);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,d_23 = NULL;
  y_22 = t;
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_23 = ATgetFirst((ATermList) t);
      d_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_24(z_22, a_23, y_22, t);
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_22), b_23), d_23);
          }
      }
    }
  else
    {
      t = g_24(z_22, a_23, y_22, t);
    }
  return(t);
}
static ATerm g_24 (ATerm i_21, ATerm l_21, ATerm m_21, ATerm t)
{
  ATerm r_21 = NULL,u_21 = NULL,b_5 = NULL,z_21 = NULL,f_22 = NULL,h_22 = NULL,i_22 = NULL;
  t = SSLgetAnnotations(m_21);
  r_21 = t;
  t = l_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_21 = ATgetFirst((ATermList) t);
      i_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_21;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_13 = t;
    int z_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_22;
        if((f_22 != t))
          {
            _fail(t);
          }
        t = i_22;
        LocalPopChoice(z_13);
      }
    else
      {
        t = y_13;
        t = l_21;
        t = t_6(f_22, h_22, i_22, t);
      }
  }
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_21, u_21);
  b_5 = t;
  t = SSLsetAnnotations(b_5, r_21);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm e_24 = NULL;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      if((e_24 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_2, f_2, g_2, t);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm m_23 = NULL,n_23 = NULL,u_23 = NULL;
        m_23 = t;
        if(match_cons(t, sym__2))
          {
            n_23 = ATgetArgument(t, 0);
            u_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_23;
        t = o_6(h_2, n_23, u_23, t);
      }
    }
  return(t);
}
static ATerm v_6 (ATerm v_83 (ATerm), ATerm t_23, ATerm s_23, ATerm t)
{
  static ATerm i_25 (ATerm t)
  {
    ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
    d_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_23;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_25 = ATgetFirst((ATermList) t);
            f_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_25;
              {
                static ATerm j_2 (ATerm t)
                {
                  t = s_23;
                  return(t);
                }
                t = w_6(v_83, j_2, e_25, f_25, t);
              }
              t = i_25(t);
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              {
                ATerm u_10 = NULL,d_11 = NULL,i_5 = NULL;
                t = SSLgetAnnotations(d_25);
                u_10 = t;
                t = f_25;
                t = i_25(t);
                d_11 = t;
                t = (ATerm) ATinsert(CheckATermList(d_11), e_25);
                i_5 = t;
                t = SSLsetAnnotations(i_5, u_10);
              }
            }
        }
      }
    return(t);
  }
  t = t_23;
  t = i_25(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_25;
      t = l_86(t);
    }
  else
    {
      ATerm q_25 = NULL,r_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_25 = ATgetFirst((ATermList) t);
          n_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_25;
      t = n_86(t);
      q_25 = t;
      t = n_25;
      t = foldr_3_0(l_86, m_86, n_86, t);
      r_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
      t = m_86(t);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm d_85 (ATerm), ATerm e_85 (ATerm), ATerm t)
{
  ATerm f_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = NULL;
      t = d_85(t);
      x_25 = t;
      t = (ATerm) ATinsert(ATempty, x_25);
      LocalPopChoice(h_14);
    }
  else
    {
      t = f_14;
      {
        ATerm m_11 = NULL,n_11 = NULL;
        static ATerm m_2 (ATerm t)
        {
          t = collect_om_2_0(d_85, e_85, t);
          return(t);
        }
        n_11 = t;
        t = SSL_explode_term(n_11);
        if(match_cons(t, sym__2))
          {
            ATerm l_14 = ATgetArgument(t, 0);
            m_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11;
        t = foldr_3_0(l_2, e_85, m_2, t);
      }
    }
  return(t);
}
static ATerm w_6 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm x_23, ATerm w_23, ATerm t)
{
  t = z_83(t);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm y_25 = NULL;
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_23, y_25);
      t = y_83(t);
      return(t);
    }
    t = fetch_1_0(n_2, t);
  }
  t = w_23;
  return(t);
}
static ATerm x_6 (ATerm o_83 (ATerm), ATerm p_23, ATerm o_23, ATerm t)
{
  static ATerm d_27 (ATerm t)
  {
    static ATerm f_27 (ATerm h_26, ATerm t)
    {
      ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,o_26 = NULL,q_26 = NULL,r_26 = NULL,l_5 = NULL;
      t = h_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_26 = ATgetFirst((ATermList) t);
          k_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm o_2 (ATerm t)
        {
          t = o_23;
          return(t);
        }
        t = w_6(o_83, o_2, j_26, k_26, t);
      }
      t = h_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_26 = ATgetFirst((ATermList) t);
          q_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_26);
      l_26 = t;
      t = q_26;
      t = d_27(t);
      r_26 = t;
      t = (ATerm) ATinsert(CheckATermList(r_26), o_26);
      l_5 = t;
      t = SSLsetAnnotations(l_5, l_26);
      return(t);
    }
    ATerm s_26 = NULL,z_26 = NULL;
    s_26 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_26;
      }
    else
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_14 = ATgetFirst((ATermList) t);
                z_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(n_14);
            {
              ATerm p_14 = t;
              int q_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_27(s_26, t);
                  LocalPopChoice(q_14);
                }
              else
                {
                  t = p_14;
                  t = z_26;
                  t = d_27(t);
                }
            }
          }
        else
          {
            t = m_14;
            t = f_27(s_26, t);
          }
      }
    return(t);
  }
  t = p_23;
  t = d_27(t);
  return(t);
}
static ATerm y_6 (ATerm h_51, ATerm t)
{
  t = SSL_hashtable_keys(h_51);
  return(t);
}
static ATerm z_6 (ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm g_27 = NULL,k_27 = NULL,l_27 = NULL,o_27 = NULL;
  k_27 = t;
  t = lookup_table_0_1(h_49, t);
  g_27 = t;
  t = k_27;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(i_49, g_27, o_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(h_49, l_27, t);
  t = i_49;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm o_28 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      o_28 = ATgetArgument(t, 0);
      {
        ATerm r_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_28;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      x_27 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, x_27);
    }
  else
    {
      ATerm n_28 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          x_27 = ATgetArgument(t, 0);
          y_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_27;
      t = map_1_0(p_2, t);
      n_28 = t;
      t = (ATerm) ATinsert(CheckATermList(n_28), x_27);
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_s_14;
  return(t);
}
static ATerm a_7 (ATerm a_55, ATerm b_55, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,t_28 = NULL,u_28 = NULL,w_28 = NULL,x_28 = NULL;
  t = a_55;
  t = mk_key_0_0(t);
  r_28 = t;
  t = term_t_14;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_14, r_28, (ATerm) ATmakeAppl(sym__2, a_55, b_55));
  t = lookup_table_0_1(t_28, t);
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_55, b_55);
  u_28 = t;
  t = x_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(r_28, u_28, w_28, t);
  t = a_55;
  t = path_to_string_0_0(t);
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_28, b_55);
  t = if_verbose1_1_0(q_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  static ATerm v_29 (ATerm t)
  {
    ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_89(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
      }
    u_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_29 = ATgetFirst((ATermList) t);
        t_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_12 = NULL,j_12 = NULL,n_5 = NULL;
          t = SSLgetAnnotations(u_29);
          a_12 = t;
          t = t_29;
          t = v_29(t);
          j_12 = t;
          t = (ATerm) ATinsert(CheckATermList(j_12), s_29);
          n_5 = t;
          t = SSLsetAnnotations(n_5, a_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_29;
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm at_last_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  static ATerm e_31 (ATerm t)
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
      ATerm x_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(b_31);
          b_13 = t;
          t = d_31;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(d_31), c_31);
          t_5 = t;
          t = SSLsetAnnotations(t_5, b_13);
          t = m_80(t);
          LocalPopChoice(z_14);
        }
      else
        {
          t = x_14;
          {
            ATerm a_14 = NULL,g_14 = NULL,y_5 = NULL;
            t = SSLgetAnnotations(b_31);
            a_14 = t;
            t = d_31;
            t = e_31(t);
            g_14 = t;
            t = (ATerm) ATinsert(CheckATermList(g_14), c_31);
            y_5 = t;
            t = SSLsetAnnotations(y_5, a_14);
          }
        }
    }
    return(t);
  }
  t = e_31(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_31 = ATgetFirst((ATermList) t);
      s_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_31;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_31;
    }
  else
    {
      t = s_31;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm i_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_15 = ATgetFirst((ATermList) t);
      i_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_32;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm k_89 (ATerm), ATerm l_89 (ATerm), ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,h_32 = NULL;
  d_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_32 = ATgetFirst((ATermList) t);
      {
        ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_32;
  t = k_89(t);
  t = d_32;
  t = last_0_0(t);
  t = l_89(t);
  t = d_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_15 = ATgetFirst((ATermList) t);
      e_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_32;
  t = at_last_1_0(t_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_16 = ATgetFirst((ATermList) t);
      a_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_16;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = a_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_17 = ATgetFirst((ATermList) t);
      f_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(f_17), term_f_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(f_17), term_e_11);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(f_17), term_c_10);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(f_17), term_d_15);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(f_17), term_e_15);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,h_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym_Arg_1))
    {
      f_36 = ATgetArgument(t, 0);
      {
        ATerm w_14 = NULL,y_14 = NULL,p_6 = NULL;
        t = SSLgetAnnotations(e_36);
        w_14 = t;
        t = SSL_string_to_int(f_36);
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, y_14);
        p_6 = t;
        t = SSLsetAnnotations(p_6, w_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          f_36 = ATgetArgument(t, 0);
          h_36 = ATgetArgument(t, 1);
          {
            ATerm f_15 = NULL,i_15 = NULL,j_15 = NULL,b_7 = NULL;
            t = SSLgetAnnotations(e_36);
            f_15 = t;
            t = SSL_string_to_int(f_36);
            i_15 = t;
            t = SSL_string_to_int(h_36);
            j_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, i_15, j_15);
            b_7 = t;
            t = SSLsetAnnotations(b_7, f_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              f_36 = ATgetArgument(t, 0);
              h_36 = ATgetArgument(t, 1);
              {
                ATerm s_15 = NULL,d_7 = NULL;
                t = SSLgetAnnotations(e_36);
                s_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, f_36, h_36);
                d_7 = t;
                t = SSLsetAnnotations(d_7, s_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  f_36 = ATgetArgument(t, 0);
                  {
                    ATerm f_16 = NULL,o_16 = NULL,r_16 = NULL,t_16 = NULL,u_16 = NULL,e_7 = NULL;
                    t = SSLgetAnnotations(e_36);
                    f_16 = t;
                    t = SSL_explode_string(f_36);
                    t = unquote_chars_2_0(y_2, c_3, t);
                    u_16 = t;
                    t = SSL_implode_string(u_16);
                    t_16 = t;
                    t = SSL_explode_string(t_16);
                    t = unescape_chars_1_0(e_3, t);
                    r_16 = t;
                    t = SSL_implode_string(r_16);
                    o_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, o_16);
                    e_7 = t;
                    t = SSLsetAnnotations(e_7, f_16);
                  }
                }
              else
                {
                  ATerm b_18 = NULL,f_18 = NULL,f_7 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      f_36 = ATgetArgument(t, 0);
                      h_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_36);
                  b_18 = t;
                  t = SSL_string_to_int(f_36);
                  f_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, f_18, h_36);
                  f_7 = t;
                  t = SSLsetAnnotations(f_7, b_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm y_72 (ATerm), ATerm t)
{
  static ATerm f_3 (ATerm t)
  {
    t = topdown_1_0(y_72, t);
    return(t);
  }
  t = y_72(t);
  t = SRTS_all(f_3, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  t = topdown_1_0(k_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      u_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(u_36, v_36, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
    }
  return(t);
}
static ATerm j_7 (ATerm z_54, ATerm t)
{
  t = z_54;
  t = reverse_acc_2_0(_id, g_3, t);
  t = map_1_0(j_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
      t = term_m_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(l_3, t);
      t = term_n_15;
      b_37 = t;
      t = (ATerm) ATinsert(ATempty, term_o_15);
      c_37 = t;
      t = SSL_printnl(b_37, c_37);
      t = term_p_15;
      a_37 = t;
      t = SSL_exit(a_37);
      t = (ATerm) ATinsert(ATempty, term_o_15);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm i_37 = NULL,j_37 = NULL;
        t = term_n_15;
        i_37 = t;
        t = (ATerm) ATinsert(ATempty, term_q_15);
        j_37 = t;
        t = SSL_printnl(i_37, j_37);
        t = (ATerm) ATinsert(ATempty, term_q_15);
      }
    }
  return(t);
}
static ATerm e_38 (ATerm x_37, ATerm t)
{
  t = SSL_fclose(x_37);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  c_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_38 = ATgetArgument(t, 0);
      {
        ATerm r_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_38);
            LocalPopChoice(t_15);
          }
        else
          {
            t = r_15;
            t = e_38(c_38, t);
          }
      }
    }
  else
    {
      t = e_38(c_38, t);
    }
  return(t);
}
static ATerm l_7 (ATerm r_17, ATerm t)
{
  t = SSL_read_term_from_stream(r_17);
  return(t);
}
static ATerm m_7 (ATerm n_31, ATerm o_31, ATerm t)
{
  t = SSL_strcat(n_31, o_31);
  return(t);
}
static ATerm n_7 (ATerm w_32, ATerm x_32, ATerm t)
{
  ATerm f_38 = NULL;
  t = SSL_fopen(w_32, x_32);
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_38);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_38 = NULL;
  t = SSL_stdin_stream();
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_38);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_38 = NULL;
  t = SSL_stdout_stream();
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_38);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_38 = NULL;
  t = SSL_stderr_stream();
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_38);
  return(t);
}
static ATerm b_40 (ATerm p_38, ATerm t)
{
  ATerm q_38 = NULL;
  t = SSL_explode_term(p_38);
  if(match_cons(t, sym__2))
    {
      ATerm u_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_15 = ATgetArgument(t, 1);
        if(((ATgetType(x_15) == AT_LIST) && !(ATisEmpty(x_15))))
          {
            q_38 = ATgetFirst((ATermList) x_15);
            {
              ATerm y_15 = (ATerm) ATgetNext((ATermList) x_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_38;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_38;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_38;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_38;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_40 (ATerm t_38, ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,a_39 = NULL,f_39 = NULL,u_7 = NULL;
  t = SSLgetAnnotations(v_38);
  a_39 = t;
  t = t_38;
  if(match_cons(t, sym_Path_1))
    {
      f_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_39, u_38);
  u_7 = t;
  t = SSLsetAnnotations(u_7, a_39);
  if(match_cons(t, sym__2))
    {
      w_38 = ATgetArgument(t, 0);
      x_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(w_38, x_38, t);
  return(t);
}
static ATerm d_40 (ATerm h_39, ATerm m_39, ATerm n_39, ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,u_39 = NULL,w_7 = NULL;
  t = SSLgetAnnotations(n_39);
  r_39 = t;
  t = SSL_is_string(h_39);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_39, m_39);
  w_7 = t;
  t = SSLsetAnnotations(w_7, r_39);
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(p_39, q_39, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm w_39 = NULL,y_39 = NULL,z_39 = NULL;
  w_39 = t;
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      z_39 = ATgetArgument(t, 1);
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_40(w_39, t);
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            {
              ATerm b_16 = t;
              int c_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_40(y_39, z_39, w_39, t);
                  LocalPopChoice(c_16);
                }
              else
                {
                  t = b_16;
                  t = d_40(y_39, z_39, w_39, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_40(w_39, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,n_40 = NULL;
  n_40 = t;
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_40, term_g_16);
        t = o_7(t);
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        {
          ATerm d_19 = NULL,e_19 = NULL;
          t = term_h_16;
          e_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_16, n_40);
          t = m_7(e_19, n_40, t);
          d_19 = t;
          t = SSL_perror(d_19);
          _fail(t);
        }
      }
  }
  g_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(h_40, t);
  f_40 = t;
  t = g_40;
  t = fclose_0_0(t);
  t = f_40;
  return(t);
}
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  r_40 = t;
  t = z_78(t);
  t_40 = t;
  t = term_n_15;
  u_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_40), t_40);
  v_40 = t;
  t = SSL_printnl(u_40, v_40);
  t = r_40;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,k_19 = NULL,l_19 = NULL;
  t = if_verbose1_1_0(n_3, t);
  t = ReadFromFile_0_0(t);
  y_40 = t;
  t = SSL_explode_term(y_40);
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      {
        ATerm i_16 = ATgetArgument(t, 1);
        if(((ATgetType(i_16) == AT_LIST) && !(ATisEmpty(i_16))))
          {
            k_19 = ATgetFirst((ATermList) i_16);
            {
              ATerm j_16 = (ATerm) ATgetNext((ATermList) i_16);
              if(((ATgetType(j_16) != AT_LIST) || !(ATisEmpty(j_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_19;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = k_19;
  if(match_cons(t, sym_PP_Table_1))
    {
      x_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(x_40, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  t = term_t_14;
  t = table_create_0_0(t);
  t = w_40;
  t = map_1_0(m_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm z_40 = NULL;
  static ATerm q_3 (ATerm t)
  {
    t = w_79(t);
    if(((z_40 != NULL) && (z_40 != t)))
      _fail(t);
    else
      z_40 = t;
    return(t);
  }
  t = fetch_1_0(q_3, t);
  t = not_null(z_40);
  return(t);
}
ATerm option_value_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm l_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(u_96, t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = l_16;
      t = v_96(t);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
  t = term_n_15;
  j_43 = t;
  t = (ATerm) ATinsert(ATempty, term_s_16);
  k_43 = t;
  t = SSL_printnl(j_43, k_43);
  t = term_p_15;
  i_43 = t;
  t = SSL_exit(i_43);
  t = (ATerm) ATinsert(ATempty, term_s_16);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm u_43 = NULL;
  if(match_cons(t, sym__2))
    {
      u_43 = ATgetArgument(t, 0);
      if((u_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL;
  v_43 = t;
  t = term_w_12;
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, v_43);
  t = v_7(a_44, v_43, t);
  x_43 = t;
  t = SSL_explode_term(x_43);
  if(match_cons(t, sym__2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_16 = ATgetArgument(t, 1);
        if(((ATgetType(x_16) == AT_LIST) && !(ATisEmpty(x_16))))
          {
            w_43 = ATgetFirst((ATermList) x_16);
            {
              ATerm y_16 = (ATerm) ATgetNext((ATermList) x_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_43;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  g_44 = t;
  t = term_v_12;
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, g_44);
  t = v_7(j_44, g_44, t);
  i_44 = t;
  t = SSL_explode_term(i_44);
  if(match_cons(t, sym__2))
    {
      ATerm b_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_17 = ATgetArgument(t, 1);
        if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
          {
            h_44 = ATgetFirst((ATermList) c_17);
            {
              ATerm d_17 = (ATerm) ATgetNext((ATermList) c_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_44;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,z_44 = NULL,a_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,r_8 = NULL;
  x_44 = t;
  t = term_w_12;
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, x_44);
  t = v_7(z_44, x_44, t);
  g_45 = t;
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_45);
  a_45 = t;
  t = e_45;
  t = collect_om_2_0(c_4, h_4, t);
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_45, f_45);
  r_8 = t;
  t = SSLsetAnnotations(r_8, a_45);
  if(match_cons(t, sym__2))
    {
      v_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_44, v_44, w_44);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t_45 = t;
  if(match_cons(t, sym_S_1))
    {
      u_45 = ATgetArgument(t, 0);
      {
        ATerm z_19 = NULL,k_8 = NULL;
        t = SSLgetAnnotations(t_45);
        z_19 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, u_45);
        k_8 = t;
        t = SSLsetAnnotations(k_8, z_19);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          u_45 = ATgetArgument(t, 0);
          {
            ATerm r_20 = NULL,o_8 = NULL;
            t = SSLgetAnnotations(t_45);
            r_20 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, u_45);
            o_8 = t;
            t = SSLsetAnnotations(o_8, r_20);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              u_45 = ATgetArgument(t, 0);
              {
                ATerm g_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, u_45);
        }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL;
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(i_4, z_45, a_46, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm b_46 = NULL;
  if(match_cons(t, sym__2))
    {
      b_46 = ATgetArgument(t, 0);
      if((b_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,x_8 = NULL;
  g_46 = t;
  t = term_v_12;
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, g_46);
  t = v_7(h_46, g_46, t);
  m_46 = t;
  if(match_cons(t, sym__2))
    {
      j_46 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_46);
  i_46 = t;
  t = k_46;
  t = collect_om_2_0(k_4, l_4, t);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_46, l_46);
  x_8 = t;
  t = SSLsetAnnotations(x_8, i_46);
  if(match_cons(t, sym__2))
    {
      e_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_46, e_46, f_46);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL;
  d_47 = t;
  if(match_cons(t, sym_S_1))
    {
      e_47 = ATgetArgument(t, 0);
      {
        ATerm y_20 = NULL,s_8 = NULL;
        t = SSLgetAnnotations(d_47);
        y_20 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, e_47);
        s_8 = t;
        t = SSLsetAnnotations(s_8, y_20);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          e_47 = ATgetArgument(t, 0);
          {
            ATerm n_21 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(d_47);
            n_21 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, e_47);
            t_8 = t;
            t = SSLsetAnnotations(t_8, n_21);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              e_47 = ATgetArgument(t, 0);
              {
                ATerm h_17 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, e_47);
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_47 = NULL,o_47 = NULL;
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(n_4, l_47, o_47, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm r_47 = NULL;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      if((r_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm s_47 = NULL;
  if(match_cons(t, sym__3))
    {
      s_47 = ATgetArgument(t, 0);
      {
        ATerm i_17 = ATgetArgument(t, 1);
      }
      {
        ATerm j_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = s_47;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      z_47 = ATgetArgument(t, 1);
      {
        ATerm n_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_47;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm m_48 = NULL,p_48 = NULL,q_48 = NULL;
  m_48 = t;
  t = term_w_12;
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, m_48);
  t = lookup_table_0_1(p_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(m_48, q_48, t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_12, m_48);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_17 = ATgetArgument(t, 0);
      ATerm s_17 = ATgetArgument(t, 1);
      if(match_cons(s_17, sym__2))
        {
          j_49 = ATgetArgument(s_17, 0);
          k_49 = ATgetArgument(s_17, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, j_49, k_49);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,q_42 = NULL,r_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  static ATerm r_3 (ATerm t)
  {
    ATerm d_43 = NULL,e_43 = NULL,h_43 = NULL,g_8 = NULL;
    h_43 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        e_43 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_43);
    d_43 = t;
    t = e_43;
    if(((z_41 != NULL) && (z_41 != t)))
      _fail(t);
    else
      z_41 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, e_43);
    g_8 = t;
    t = SSLsetAnnotations(g_8, d_43);
    return(t);
  }
  t = option_value_2_0(r_3, s_3, t);
  t = (ATerm) ATinsert(ATempty, not_null(z_41));
  t = read_pp_tables_0_0(t);
  t = term_t_14;
  a_43 = t;
  t = term_w_12;
  b_43 = t;
  t = term_u_17;
  t = z_6(a_43, b_43, t);
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm m_43 = NULL,n_43 = NULL,t_43 = NULL,j_8 = NULL;
      t_43 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          n_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_43);
      m_43 = t;
      t = n_43;
      if(((a_42 != NULL) && (a_42 != t)))
        _fail(t);
      else
        a_42 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, n_43);
      j_8 = t;
      t = SSLsetAnnotations(j_8, m_43);
      return(t);
    }
    static ATerm u_3 (ATerm t)
    {
      t = term_w_17;
      if(((a_42 != NULL) && (a_42 != t)))
        _fail(t);
      else
        a_42 = t;
      return(t);
    }
    t = option_value_2_0(t_3, u_3, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(a_42));
  t = read_pp_tables_0_0(t);
  t = term_t_14;
  w_42 = t;
  t = term_v_12;
  z_42 = t;
  t = term_x_17;
  t = z_6(w_42, z_42, t);
  t = term_w_12;
  u_42 = t;
  t = lookup_table_0_1(u_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(v_42, t);
  c_42 = t;
  t = term_v_12;
  q_42 = t;
  t = lookup_table_0_1(q_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(r_42, t);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_42, b_42);
  t = x_6(w_3, c_42, b_42, t);
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_42, b_42);
  t = diff_0_0(t);
  j_42 = t;
  t = map_1_0(x_3, t);
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
        ATerm a_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_18;
          }
        b_44 = t;
        t = term_n_15;
        c_44 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_44), term_d_18);
        d_44 = t;
        t = SSL_printnl(c_44, d_44);
        t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATempty, b_44), term_d_18));
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, b_42, c_42);
  t = diff_0_0(t);
  l_42 = t;
  t = map_1_0(y_3, t);
  {
    ATerm e_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
        ATerm h_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = h_18;
          }
        m_44 = t;
        t = term_n_15;
        n_44 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_44), term_i_18);
        o_44 = t;
        t = SSL_printnl(n_44, o_44);
        t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATempty, m_44), term_i_18));
        LocalPopChoice(g_18);
      }
    else
      {
        t = e_18;
      }
  }
  t = d_42;
  t = map_1_0(a_4, t);
  e_42 = t;
  t = d_42;
  t = map_1_0(j_4, t);
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_42, f_42);
  t = diff_0_0(t);
  m_42 = t;
  t = map_1_0(p_4, t);
  k_42 = t;
  t = m_42;
  t = map_1_0(r_4, t);
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
        ATerm l_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_18;
          }
        a_48 = t;
        t = term_n_15;
        b_48 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_48), term_n_18);
        c_48 = t;
        t = SSL_printnl(b_48, c_48);
        t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATempty, a_48), term_n_18));
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
      }
  }
  {
    ATerm o_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(s_4, t);
        t = (ATerm) ATmakeAppl(sym__2, l_42, k_42);
        t = n_6(l_42, k_42, t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = o_18;
      }
  }
  {
    ATerm t_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(u_4, t);
        t = j_42;
        t = map_1_0(v_4, t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = t_18;
      }
  }
  {
    ATerm z_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_48 = NULL,z_48 = NULL;
        ATerm f_19 = t;
        int g_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_49 = NULL;
            a_49 = t;
            t = term_s_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(a_5, t);
            t = a_49;
            LocalPopChoice(g_19);
          }
        else
          {
            t = f_19;
            {
              ATerm e_49 = NULL;
              e_49 = t;
              t = term_y_18;
              t = get_options_0_0(t);
              t = oncetd_1_0(c_5, t);
              t = e_49;
            }
          }
        t = term_w_12;
        t = table_getlist_0_0(t);
        t = map_1_0(d_5, t);
        t = desugar_0_0(t);
        y_48 = t;
        t = (ATerm) ATmakeAppl(sym_PP_Table_1, y_48);
        z_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATmakeAppl(sym_PP_Table_1, y_48));
        t = h_6(f_5, z_48, t);
        t = output_1_0(_id, t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = z_18;
      }
  }
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_19 = t;
        if((PushChoice() == 0))
          {
            ATerm s_49 = NULL;
            s_49 = t;
            t = term_s_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(g_5, t);
            t = s_49;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_19;
          }
        {
          ATerm v_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_22 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_42), k_42);
              t = concat_0_0(t);
              {
                ATerm a_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_20;
                  }
              }
              t = term_p_15;
              c_22 = t;
              t = SSL_exit(c_22);
              LocalPopChoice(y_19);
            }
          else
            {
              t = v_19;
            }
        }
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_50 = NULL,i_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  f_50 = t;
  t = term_x_10;
  t = whoami_0_0(t);
  i_50 = t;
  t = term_n_15;
  l_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_20), i_50), term_b_20);
  m_50 = t;
  t = SSL_printnl(l_50, m_50);
  t = term_p_15;
  k_50 = t;
  t = SSL_exit(k_50);
  t = f_50;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm o_50 = NULL;
  o_50 = t;
  if(match_string(t, "-k"))
    {
      t = o_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_50;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm p_50 = NULL,r_50 = NULL,s_50 = NULL;
  p_50 = t;
  t = SSL_string_to_int(p_50);
  r_50 = t;
  t = term_f_20;
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_20, r_50);
  t = x_7(s_50, r_50, t);
  t = p_50;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, j_5, k_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm y_50 = NULL;
  y_50 = t;
  if(match_string(t, "-S"))
    {
      t = y_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_50;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_51 = NULL,p_51 = NULL;
  t = term_m_20;
  m_51 = t;
  t = term_o_20;
  p_51 = t;
  t = term_q_20;
  t = x_7(m_51, p_51, t);
  t = term_s_20;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm q_51 = NULL,t_51 = NULL,v_51 = NULL;
  q_51 = t;
  t = SSL_string_to_int(q_51);
  t_51 = t;
  t = term_m_20;
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, t_51);
  t = x_7(v_51, t_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_51);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_u_20;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm w_51 = NULL,a_52 = NULL;
  t = term_v_20;
  w_51 = t;
  t = term_x_10;
  a_52 = t;
  t = term_w_20;
  t = x_7(w_51, a_52, t);
  t = term_x_20;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_z_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_5, p_5, q_5, t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm d_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_5, s_5, u_5, t);
            LocalPopChoice(j_21);
          }
        else
          {
            t = d_21;
            t = Option_3_0(v_5, w_5, x_5, t);
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL;
  t = term_i_10;
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_10, n_42, o_42);
  t = lookup_table_0_1(b_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(n_42, o_42, c_52, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_10, n_42, o_42);
  return(t);
}
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,l_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
      t = term_x_10;
      t = i_0(t);
      n_52 = t;
      t = term_k_21;
      o_52 = t;
      t = term_o_21;
      p_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_21, term_o_21, n_52);
      t = p_7(o_52, p_52, n_52, t);
      _fail(t);
    }
  else
    {
      ATerm v_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_52 = ATgetFirst((ATermList) t);
          l_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_52;
      t = e_0(t);
      t = term_x_10;
      t = g_0(t);
      v_52 = t;
      t = (ATerm) ATinsert(CheckATermList(l_52), v_52);
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm z_52 = NULL;
  z_52 = t;
  if(match_string(t, "-o"))
    {
      t = z_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_52;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL;
  c_53 = t;
  t = term_l_10;
  d_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, c_53);
  t = x_7(d_53, c_53, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_53);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_p_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
static ATerm p_7 (ATerm i_47, ATerm j_47, ATerm h_47, ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL,j_53 = NULL;
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_47, j_47);
  {
    ATerm q_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_21 = ATgetArgument(t, 0);
            ATerm v_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_47, j_47);
        t = v_7(i_47, j_47, t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATempty;
      }
  }
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_47, j_47, (ATerm) ATinsert(CheckATermList(g_53), h_47));
  t = lookup_table_0_1(i_47, t);
  j_53 = t;
  t = (ATerm) ATinsert(CheckATermList(g_53), h_47);
  h_53 = t;
  t = j_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(j_47, h_53, i_53, t);
  t = f_53;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,u_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_53 = NULL,a_54 = NULL,b_54 = NULL;
      t = term_x_10;
      t = n_0(t);
      v_53 = t;
      t = term_k_21;
      a_54 = t;
      t = term_o_21;
      b_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_21, term_o_21, v_53);
      t = p_7(a_54, b_54, v_53, t);
      _fail(t);
    }
  else
    {
      ATerm f_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_53 = ATgetFirst((ATermList) t);
          r_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_53 = ATgetFirst((ATermList) t);
          u_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_53;
      t = k_0(t);
      t = s_53;
      t = l_0(t);
      f_54 = t;
      t = (ATerm) ATinsert(CheckATermList(u_53), f_54);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_10;
  t = whoami_0_0(t);
  g_54 = t;
  t = term_n_15;
  i_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_21), g_54);
  j_54 = t;
  t = SSL_printnl(i_54, j_54);
  t = term_p_15;
  h_54 = t;
  t = SSL_exit(h_54);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  t = term_i_10;
  k_54 = t;
  t = term_x_21;
  l_54 = t;
  t = term_y_21;
  t = v_7(k_54, l_54, t);
  return(t);
}
static ATerm q_7 (ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_35, r_35);
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      t = SSL_addr(q_35, r_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_54;
      t = j_86(t);
    }
  else
    {
      ATerm s_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_54 = ATgetFirst((ATermList) t);
          p_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_54;
      t = foldr_2_0(j_86, k_86, t);
      s_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_54, s_54);
      t = k_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(m_22, o_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_54 = NULL,d_22 = NULL,e_22 = NULL;
  t = times_0_0(t);
  e_22 = t;
  t = SSL_explode_term(e_22);
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_22;
  t = foldr_2_0(i_6, l_6, t);
  v_54 = t;
  t = SSL_TicksToSeconds(v_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
  v_55 = t;
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_55;
        if((w_55 != t))
          {
            _fail(t);
          }
        t = v_55;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
        {
          ATerm l_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_55, x_55);
              LocalPopChoice(n_22);
            }
          else
            {
              t = l_22;
              t = SSL_gtr(w_55, x_55);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm e_56 = NULL;
  e_56 = t;
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
        t = term_i_10;
        h_56 = t;
        t = term_m_20;
        i_56 = t;
        t = term_r_22;
        t = v_7(h_56, i_56, t);
        g_56 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_56, term_p_15);
        t = geq_0_0(t);
        t = e_56;
        t = a_95(t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = e_56;
      }
  }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL,n_56 = NULL,o_56 = NULL;
  t = run_time_0_0(t);
  k_56 = t;
  t = term_x_10;
  t = whoami_0_0(t);
  l_56 = t;
  t = term_n_15;
  n_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), k_56), term_s_22), l_56);
  o_56 = t;
  t = SSL_printnl(n_56, o_56);
  t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_22), k_56), term_s_22), l_56));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_20;
  p_56 = t;
  t = SSL_exit(p_56);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL;
  c_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_57 = ATgetArgument(t, 0);
          {
            ATerm k_23 = NULL,s_9 = NULL;
            t = SSLgetAnnotations(c_57);
            k_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_57);
            s_9 = t;
            t = SSLsetAnnotations(s_9, k_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_56 = NULL,v_56 = NULL;
      t = term_i_10;
      u_56 = t;
      t = term_w_22;
      v_56 = t;
      t = term_x_22;
      t = v_7(u_56, v_56, t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      t = fetch_1_0(q_6, t);
    }
  t = q_97(t);
  return(t);
}
static ATerm y_7 (ATerm a_51, ATerm b_51, ATerm c_51, ATerm t)
{
  ATerm e_57 = NULL;
  t = SSL_hashtable_put(c_51, a_51, b_51);
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_57);
  return(t);
}
ATerm lookup_table_0_1 (ATerm u_48, ATerm t)
{
  ATerm n_57 = NULL;
  t = table_hashtable_0_0(t);
  n_57 = t;
  {
    ATerm c_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_24 = NULL;
        t = n_57;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_7(u_48, d_24, t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = c_23;
        {
          ATerm l_24 = NULL;
          t = u_48;
          t = table_create_0_0(t);
          t = n_57;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(u_48, l_24, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_51, ATerm j_51, ATerm t)
{
  ATerm q_57 = NULL;
  t = SSL_hashtable_create(i_51, j_51);
  q_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_57);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,v_57 = NULL,w_57 = NULL;
  r_57 = t;
  t = term_f_23;
  v_57 = t;
  t = term_g_23;
  w_57 = t;
  t = r_57;
  t = new_hashtable_0_2(v_57, w_57, t);
  s_57 = t;
  t = r_57;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(r_57, s_57, t_57, t);
  t = r_57;
  return(t);
}
static ATerm s_7 (ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm x_57 = NULL;
  t = SSL_hashtable_remove(g_51, f_51);
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_57);
  return(t);
}
static ATerm t_7 (ATerm k_51, ATerm t)
{
  ATerm y_57 = NULL;
  t = SSL_hashtable_destroy(k_51);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_57);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_57 = NULL;
  t = SSL_table_hashtable();
  z_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_57);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  a_58 = t;
  t = table_hashtable_0_0(t);
  b_58 = t;
  t = lookup_table_0_1(a_58, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(d_58, t);
  t = b_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(a_58, c_58, t);
  t = a_58;
  return(t);
}
ATerm map_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  static ATerm s_58 (ATerm t)
  {
    ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
    p_58 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_58;
      }
    else
      {
        ATerm t_24 = NULL,w_24 = NULL,x_24 = NULL,w_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_58 = ATgetFirst((ATermList) t);
            r_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_58);
        t_24 = t;
        t = q_58;
        t = k_79(t);
        w_24 = t;
        t = r_58;
        t = s_58(t);
        x_24 = t;
        t = (ATerm) ATinsert(CheckATermList(x_24), w_24);
        w_9 = t;
        t = SSLsetAnnotations(w_9, t_24);
      }
    return(t);
  }
  t = s_58(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_58 = ATgetFirst((ATermList) t);
      w_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_59 = NULL,b_59 = NULL;
        static ATerm r_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_59)), not_null(b_59));
          return(t);
        }
        t = w_58;
        t = d_0(t);
        if(((a_59 != NULL) && (a_59 != t)))
          _fail(t);
        else
          a_59 = t;
        t = v_58;
        t = c_0(t);
        if(((b_59 != NULL) && (b_59 != t)))
          _fail(t);
        else
          b_59 = t;
        t = w_58;
        t = reverse_acc_2_0(c_0, r_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_10;
      t = d_0(t);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL,y_9 = NULL;
  j_59 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_59);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_59);
  y_9 = t;
  t = SSLsetAnnotations(y_9, h_59);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_59), term_h_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL;
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_59 = NULL,g_59 = NULL;
      t = term_i_10;
      f_59 = t;
      t = term_x_21;
      g_59 = t;
      t = term_y_21;
      t = v_7(f_59, g_59, t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      t = fetch_1_0(s_6, t);
    }
  t = term_l_23;
  t = echo_0_0(t);
  t = term_k_21;
  d_59 = t;
  t = term_o_21;
  e_59 = t;
  t = term_v_23;
  t = v_7(d_59, e_59, t);
  t = reverse_acc_2_0(_id, g_7, t);
  t = map_1_0(h_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  static ATerm i_60 (ATerm t)
  {
    ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL;
    f_60 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_60 = ATgetFirst((ATermList) t);
        h_60 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_26 = NULL,e_26 = NULL,g_11 = NULL;
          t = SSLgetAnnotations(f_60);
          b_26 = t;
          t = g_60;
          t = u_79(t);
          e_26 = t;
          t = (ATerm) ATinsert(CheckATermList(h_60), e_26);
          g_11 = t;
          t = SSLsetAnnotations(g_11, b_26);
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          {
            ATerm v_26 = NULL,a_27 = NULL,j_11 = NULL;
            t = SSLgetAnnotations(f_60);
            v_26 = t;
            t = h_60;
            t = i_60(t);
            a_27 = t;
            t = (ATerm) ATinsert(CheckATermList(a_27), g_60);
            j_11 = t;
            t = SSLsetAnnotations(j_11, v_26);
          }
        }
    }
    return(t);
  }
  t = i_60(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
  m_60 = t;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_60;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_24 = ATgetFirst((ATermList) t);
                ATerm f_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_60;
          }
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = (ATerm) ATinsert(ATempty, m_60);
      }
  }
  n_60 = t;
  t = term_n_10;
  o_60 = t;
  t = SSL_printnl(o_60, n_60);
  t = m_60;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_60 = NULL,t_60 = NULL;
  t = term_i_10;
  s_60 = t;
  t = term_x_21;
  t_60 = t;
  t = term_y_21;
  t = v_7(s_60, t_60, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_7 (ATerm d_51, ATerm e_51, ATerm t)
{
  t = SSL_hashtable_get(e_51, d_51);
  return(t);
}
static ATerm v_7 (ATerm b_49, ATerm c_49, ATerm t)
{
  ATerm u_60 = NULL;
  t = lookup_table_0_1(b_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(c_49, u_60, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL;
  t = term_h_24;
  w_60 = t;
  t = term_x_10;
  x_60 = t;
  t = term_i_24;
  t = x_7(w_60, x_60, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  t = term_h_24;
  a_61 = t;
  t = term_x_10;
  b_61 = t;
  t = term_i_24;
  t = x_7(a_61, b_61, t);
  t = term_k_24;
  y_60 = t;
  t = term_x_10;
  z_60 = t;
  t = term_m_24;
  t = x_7(y_60, z_60, t);
  t = term_n_24;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_7, k_7, r_7, t);
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = Option_3_0(a_8, b_8, c_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_56 (ATerm), ATerm s_56 (ATerm), ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,o_11 = NULL;
  h_61 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_61 = ATgetFirst((ATermList) t);
      e_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_61);
  c_61 = t;
  t = d_61;
  t = r_56(t);
  f_61 = t;
  t = e_61;
  t = s_56(t);
  g_61 = t;
  t = (ATerm) ATinsert(CheckATermList(g_61), f_61);
  o_11 = t;
  t = SSLsetAnnotations(o_11, c_61);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,r_61 = NULL,s_61 = NULL,q_11 = NULL;
  m_61 = t;
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_24;
        t = t_99(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
      }
  }
  t = m_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_61 = ATgetFirst((ATermList) t);
      p_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_61);
  n_61 = t;
  t = term_x_21;
  s_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, o_61);
  t = x_7(s_61, o_61, t);
  t = p_61;
  {
    static ATerm c_62 (ATerm t)
    {
      ATerm v_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_24 = t;
          int a_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_61 = NULL;
              v_61 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_61;
              LocalPopChoice(a_25);
            }
          else
            {
              t = z_24;
              t = t_99(t);
              t = Cons_2_0(_id, c_62, t);
            }
          LocalPopChoice(y_24);
        }
      else
        {
          t = v_24;
          {
            ATerm y_61 = NULL,z_61 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_61 = ATgetFirst((ATermList) t);
                z_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_61), (ATerm) ATmakeAppl(sym_Undefined_1, y_61));
          }
        }
      return(t);
    }
    t = c_62(t);
  }
  r_61 = t;
  t = (ATerm) ATinsert(CheckATermList(r_61), (ATerm) ATmakeAppl(sym_Program_1, o_61));
  q_11 = t;
  t = SSLsetAnnotations(q_11, n_61);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm p_62 = NULL;
  p_62 = t;
  if(match_string(t, "--help"))
    {
      t = p_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_62;
        }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL;
  t = term_w_22;
  q_62 = t;
  t = term_x_10;
  r_62 = t;
  t = term_b_25;
  t = x_7(q_62, r_62, t);
  t = term_c_25;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
  j_62 = t;
  t = term_k_21;
  k_62 = t;
  t = term_h_25;
  t = lookup_table_0_1(k_62, t);
  o_62 = t;
  t = term_o_21;
  l_62 = t;
  t = (ATerm) ATempty;
  m_62 = t;
  t = o_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(l_62, m_62, n_62, t);
  t = j_62;
  {
    static ATerm d_8 (ATerm t)
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_99(t);
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          {
            ATerm o_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_8, f_8, h_8, t);
                LocalPopChoice(p_25);
              }
            else
              {
                t = o_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_8, t);
  }
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_63 = NULL;
        c_63 = t;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_27 = NULL;
              t = c_63;
              {
                ATerm w_25 = t;
                int z_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_27 = NULL,t_27 = NULL;
                    t = term_i_10;
                    r_27 = t;
                    t = term_w_22;
                    t_27 = t;
                    t = term_x_22;
                    t = v_7(r_27, t_27, t);
                    LocalPopChoice(z_25);
                  }
                else
                  {
                    t = w_25;
                    t = fetch_1_0(i_8, t);
                  }
              }
              t = c_63;
              t = default_system_usage_0_0(t);
              t = term_o_20;
              p_27 = t;
              t = SSL_exit(p_27);
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              {
                ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
                t = term_i_10;
                g_28 = t;
                t = term_h_24;
                h_28 = t;
                t = term_a_26;
                t = v_7(g_28, h_28, t);
                t = c_63;
                t = default_system_about_0_0(t);
                t = term_o_20;
                f_28 = t;
                t = SSL_exit(f_28);
              }
            }
        }
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
              static ATerm l_8 (ATerm t)
              {
                ATerm g_63 = NULL,h_63 = NULL,i_63 = NULL,s_11 = NULL;
                i_63 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_63 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_63);
                g_63 = t;
                t = h_63;
                if(((h_62 != NULL) && (h_62 != t)))
                  _fail(t);
                else
                  h_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_63);
                s_11 = t;
                t = SSLsetAnnotations(s_11, g_63);
                return(t);
              }
              t = fetch_1_0(l_8, t);
              t = term_n_15;
              e_63 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_62)), term_f_26);
              f_63 = t;
              t = SSL_printnl(e_63, f_63);
              t = (ATerm) ATmakeAppl(sym__2, term_n_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_62)), term_f_26));
              t = default_system_usage_0_0(t);
              t = term_p_15;
              d_63 = t;
              t = SSL_exit(d_63);
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
            }
        }
      }
  }
  i_62 = t;
  t = term_k_21;
  t = table_destroy_0_0(t);
  t = i_62;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL;
  t = parse_options_1_0(s_97, t);
  n_63 = t;
  t = term_r_9;
  t = table_create_0_0(t);
  t = term_r_9;
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_9, term_t_9, n_63);
  t = lookup_table_0_1(o_63, t);
  r_63 = t;
  t = term_t_9;
  p_63 = t;
  t = r_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(p_63, n_63, q_63, t);
  t = n_63;
  t = u_97(t);
  {
    ATerm g_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_97, t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = g_26;
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_97(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm p_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_8, y_8, z_8, t);
      LocalPopChoice(t_26);
    }
  else
    {
      t = p_26;
      {
        ATerm u_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_9, b_9, c_9, t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = u_26;
            {
              ATerm x_26 = t;
              int y_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(d_9, e_9, g_9, t);
                  LocalPopChoice(y_26);
                }
              else
                {
                  t = x_26;
                  {
                    ATerm b_27 = t;
                    int c_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(h_9, j_9, k_9, t);
                        LocalPopChoice(c_27);
                      }
                    else
                      {
                        t = b_27;
                        {
                          ATerm e_27 = t;
                          int h_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(l_9, m_9, n_9, t);
                              LocalPopChoice(h_27);
                            }
                          else
                            {
                              t = e_27;
                              {
                                ATerm i_27 = t;
                                int j_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(j_27);
                                  }
                                else
                                  {
                                    t = i_27;
                                    {
                                      ATerm m_27 = t;
                                      int n_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(o_9, p_9, q_9, t);
                                          LocalPopChoice(n_27);
                                        }
                                      else
                                        {
                                          t = m_27;
                                          {
                                            ATerm q_27 = t;
                                            int s_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(s_27);
                                              }
                                            else
                                              {
                                                t = q_27;
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_v_27;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_s_18;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_y_18;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_z_27;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm t_63 = NULL;
  t_63 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, t_63);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_a_28;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm u_63 = NULL;
  u_63 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, u_63);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  t = term_q_10;
  v_63 = t;
  t = term_x_10;
  w_63 = t;
  t = term_c_28;
  t = x_7(v_63, w_63, t);
  t = term_d_28;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_8, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}

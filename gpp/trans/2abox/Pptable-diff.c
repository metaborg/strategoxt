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
Symbol sym_selector_2;
Symbol sym_Path_2;
Symbol sym_Path1_1;
Symbol sym_PP_Entry_2;
Symbol sym_PP_Table_1;
Symbol sym_SOpt_2;
Symbol sym_Arg2_2;
Symbol sym_Arg_1;
Symbol sym_S_1;
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
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
}
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_f_27;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_o_24;
ATerm term_j_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_b_19;
ATerm term_s_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_r_11;
ATerm term_l_11;
ATerm term_a_11;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_t_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_s_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_h_12);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_g_12);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_z_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_a_11);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_r_21);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_y_19);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_n_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_a_21);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_a_11);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_a_11);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_a_11);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__3, term_x_20, term_a_21, (ATerm) ATempty);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_o_23);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_a_11);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm d_6 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm e_6 (ATerm u_17, ATerm v_17, ATerm t);
static ATerm g_6 (ATerm e_89 (ATerm), ATerm p_172, ATerm a_18, ATerm t);
static ATerm f_6 (ATerm q_17, ATerm r_17, ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm output_1_0 (ATerm j_109 (ATerm), ATerm t);
static ATerm h_6 (ATerm l_33, ATerm m_33, ATerm t);
static ATerm i_6 (ATerm m_115 (ATerm), ATerm u_65, ATerm t);
ATerm escape_chars_1_0 (ATerm c_100 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm o_6 (ATerm a_16, ATerm b_16, ATerm t);
static ATerm v_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm p_6 (ATerm t_93 (ATerm), ATerm w_23, ATerm v_23, ATerm t);
ATerm at_end_1_0 (ATerm e_90 (ATerm), ATerm t);
static ATerm h_19 (ATerm o_18, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm u_6 (ATerm a_705, ATerm f_705, ATerm t_63, ATerm t);
ATerm while_not_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t);
ATerm for_3_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm g_24 (ATerm k_21, ATerm l_21, ATerm m_21, ATerm t);
static ATerm i_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_6 (ATerm y_93 (ATerm), ATerm y_23, ATerm x_23, ATerm t);
ATerm foldr_3_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
ATerm collect_om_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t);
static ATerm x_6 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm c_24, ATerm b_24, ATerm t);
static ATerm y_6 (ATerm r_93 (ATerm), ATerm u_23, ATerm t_23, ATerm t);
static ATerm z_6 (ATerm b_61, ATerm t);
static ATerm a_7 (ATerm b_58, ATerm c_58, ATerm t);
static ATerm v_2 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_7 (ATerm u_64, ATerm v_64, ATerm t);
ATerm unescape_chars_1_0 (ATerm e_100 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm p_90 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm unquote_chars_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_83 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm k_7 (ATerm t_64, ATerm t);
static ATerm n_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm w_37 (ATerm l_37, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_7 (ATerm w_17, ATerm t);
static ATerm n_7 (ATerm s_31, ATerm t_31, ATerm t);
static ATerm o_7 (ATerm b_33, ATerm c_33, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_39 (ATerm k_38, ATerm t);
static ATerm r_39 (ATerm r_38, ATerm s_38, ATerm t_38, ATerm t);
static ATerm s_39 (ATerm c_39, ATerm d_39, ATerm e_39, ATerm t);
static ATerm p_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_89 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_89 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_7 (ATerm h_51, ATerm i_51, ATerm t);
ATerm Option_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_7 (ATerm c_56, ATerm d_56, ATerm b_56, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_7 (ATerm v_35, ATerm w_35, ATerm t);
ATerm foldr_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_106 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm need_help_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm z_7 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm t);
ATerm lookup_table_0_1 (ATerm o_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_61, ATerm d_61, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_7 (ATerm z_60, ATerm a_61, ATerm t);
static ATerm u_7 (ATerm e_61, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm n_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_89 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_8 (ATerm x_60, ATerm y_60, ATerm t);
static ATerm w_7 (ATerm v_57, ATerm w_57, ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_66 (ATerm), ATerm m_66 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_111 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm parse_options_1_0 (ATerm c_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
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
  ATerm k_0 = NULL,r_0 = NULL,u_0 = NULL;
  k_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_0;
    }
  else
    {
      static ATerm a_0 (ATerm t)
      {
        t = not_null(u_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_0 = ATgetFirst((ATermList) t);
          if(((u_0 != NULL) && (u_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_0;
      t = at_end_1_0(a_0, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm x_0 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_84(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = x_0;
        t = SRTS_one(g_1, t);
      }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL;
  t = term_t_9;
  h_1 = t;
  t = term_u_9;
  j_1 = t;
  t = term_v_9;
  t = w_7(h_1, j_1, t);
  return(t);
}
static ATerm d_6 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm k_1 = NULL;
  t = SSL_fputc(z_32, a_33);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_1);
  return(t);
}
static ATerm e_6 (ATerm u_17, ATerm v_17, ATerm t)
{
  ATerm l_1 = NULL;
  t = SSL_write_term_to_stream_text(u_17, v_17);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_1);
  return(t);
}
static ATerm g_6 (ATerm e_89 (ATerm), ATerm p_172, ATerm a_18, ATerm t)
{
  ATerm m_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_172, term_w_9);
  t = p_7(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, a_18);
  t = e_89(t);
  t = fclose_0_0(t);
  t = a_18;
  return(t);
}
static ATerm f_6 (ATerm q_17, ATerm r_17, ATerm t)
{
  ATerm n_1 = NULL;
  t = SSL_write_term_to_stream_baf(q_17, r_17);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_1);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          v_1 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(v_1, w_1, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          a_2 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(a_2, b_2, t);
  x_1 = t;
  t = term_z_9;
  y_1 = t;
  t = x_1;
  if(match_cons(t, sym_Stream_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, x_1);
  t = d_6(y_1, z_1, t);
  return(t);
}
ATerm output_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = j_109(t);
  p_1 = t;
  {
    ATerm j_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 = NULL,r_1 = NULL;
        t = term_m_10;
        q_1 = t;
        t = term_n_10;
        r_1 = t;
        t = term_o_10;
        t = w_7(q_1, r_1, t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = j_10;
        t = term_p_10;
      }
  }
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, p_1);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,u_1 = NULL;
        t = term_m_10;
        t_1 = t;
        t = term_s_10;
        u_1 = t;
        t = term_u_10;
        t = w_7(t_1, u_1, t);
        t = (ATerm) ATmakeAppl(sym__2, o_1, p_1);
        LocalPopChoice(r_10);
        if(match_cons(t, sym__2))
          {
            ATerm v_10 = ATgetArgument(t, 0);
            ATerm w_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_6(b_0, o_1, p_1, t);
      }
    else
      {
        t = q_10;
        if(match_cons(t, sym__2))
          {
            ATerm y_10 = ATgetArgument(t, 0);
            ATerm z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_6(c_0, o_1, p_1, t);
      }
  }
  return(t);
}
static ATerm h_6 (ATerm l_33, ATerm m_33, ATerm t)
{
  t = SSL_mkterm(l_33, m_33);
  return(t);
}
static ATerm i_6 (ATerm m_115 (ATerm), ATerm u_65, ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL;
  t = term_a_11;
  t = m_115(t);
  c_2 = t;
  t = (ATerm) ATinsert(ATempty, u_65);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, (ATerm) ATinsert(ATempty, u_65));
  t = h_6(c_2, d_2, t);
  return(t);
}
ATerm escape_chars_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  static ATerm v_3 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL,x_2 = NULL,y_2 = NULL,z_0 = NULL;
        t = c_100(t);
        y_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_2 = ATgetFirst((ATermList) t);
            p_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_2);
        m_2 = t;
        t = p_2;
        t = Cons_2_0(_id, v_3, t);
        x_2 = t;
        t = (ATerm) ATinsert(CheckATermList(x_2), o_2);
        z_0 = t;
        t = SSLsetAnnotations(z_0, m_2);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          ATerm r_3 = NULL,s_3 = NULL,u_3 = NULL;
          u_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_3 = ATgetFirst((ATermList) t);
              s_3 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm e_0 = NULL,n_0 = NULL,a_1 = NULL;
                t = SSLgetAnnotations(u_3);
                e_0 = t;
                t = s_3;
                t = v_3(t);
                n_0 = t;
                t = (ATerm) ATinsert(CheckATermList(n_0), r_3);
                a_1 = t;
                t = SSLsetAnnotations(a_1, e_0);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_3;
            }
        }
      }
    return(t);
  }
  t = v_3(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,i_10 = NULL,k_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym_Arg_1))
    {
      c_10 = ATgetArgument(t, 0);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 = NULL,u_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(k_10);
            s_2 = t;
            t = SSL_int_to_string(c_10);
            u_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, u_2);
            d_1 = t;
            t = SSLsetAnnotations(d_1, s_2);
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            t = k_10;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          c_10 = ATgetArgument(t, 0);
          a_10 = ATgetArgument(t, 1);
          {
            ATerm f_11 = t;
            int g_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_3 = NULL,o_3 = NULL,q_3 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(k_10);
                g_3 = t;
                t = SSL_int_to_string(c_10);
                o_3 = t;
                t = SSL_int_to_string(a_10);
                q_3 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, o_3, q_3);
                e_1 = t;
                t = SSLsetAnnotations(e_1, g_3);
                LocalPopChoice(g_11);
              }
            else
              {
                t = f_11;
                t = k_10;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              c_10 = ATgetArgument(t, 0);
              a_10 = ATgetArgument(t, 1);
              {
                ATerm h_11 = t;
                int i_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_4 = NULL,f_1 = NULL;
                    t = SSLgetAnnotations(k_10);
                    d_4 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, c_10, a_10);
                    f_1 = t;
                    t = SSLsetAnnotations(f_1, d_4);
                    LocalPopChoice(i_11);
                  }
                else
                  {
                    t = h_11;
                    t = k_10;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  c_10 = ATgetArgument(t, 0);
                  {
                    ATerm j_11 = t;
                    int k_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 = NULL,p_4 = NULL,i_1 = NULL,k_6 = NULL,l_6 = NULL,q_6 = NULL,p_5 = NULL;
                        t = SSLgetAnnotations(k_10);
                        m_4 = t;
                        t = SSL_explode_string(c_10);
                        t = escape_chars_1_0(i_0, t);
                        p_5 = t;
                        t = SSL_implode_string(p_5);
                        l_6 = t;
                        t = SSL_explode_string(l_6);
                        q_6 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_6), term_l_11), (ATerm) ATinsert(ATempty, term_l_11));
                        t = conc_0_0(t);
                        k_6 = t;
                        t = SSL_implode_string(k_6);
                        p_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, p_4);
                        i_1 = t;
                        t = SSLsetAnnotations(i_1, m_4);
                        LocalPopChoice(k_11);
                      }
                    else
                      {
                        t = j_11;
                        t = k_10;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      c_10 = ATgetArgument(t, 0);
                      a_10 = ATgetArgument(t, 1);
                      {
                        ATerm m_11 = t;
                        int n_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_7 = NULL,e_8 = NULL,s_1 = NULL;
                            t = SSLgetAnnotations(k_10);
                            c_7 = t;
                            t = SSL_int_to_string(c_10);
                            e_8 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, e_8, a_10);
                            s_1 = t;
                            t = SSLsetAnnotations(s_1, c_7);
                            LocalPopChoice(n_11);
                          }
                        else
                          {
                            t = m_11;
                            t = k_10;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          c_10 = ATgetArgument(t, 0);
                          t = c_10;
                          if(match_cons(t, sym_Path_2))
                            {
                              i_10 = ATgetArgument(t, 0);
                              b_10 = ATgetArgument(t, 1);
                              {
                                ATerm p_11 = t;
                                int q_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm v_8 = NULL,w_8 = NULL;
                                    t = (ATerm) ATinsert(ATinsert(ATempty, i_10), term_r_11);
                                    w_8 = t;
                                    t = SSL_concat_strings(w_8);
                                    v_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Path_2, v_8, b_10);
                                    LocalPopChoice(q_11);
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
                              if(match_cons(t, sym_Path1_1))
                                {
                                  i_10 = ATgetArgument(t, 0);
                                  {
                                    ATerm s_11 = t;
                                    int v_11 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm g_9 = NULL,h_9 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, i_10), term_r_11);
                                        h_9 = t;
                                        t = SSL_concat_strings(h_9);
                                        g_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Path1_1, g_9);
                                        LocalPopChoice(v_11);
                                      }
                                    else
                                      {
                                        t = s_11;
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
static ATerm i_0 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_5 = ATgetFirst((ATermList) t);
      w_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_5;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_l_11), term_x_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_x_11), term_x_11);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_z_11), term_x_11);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(w_5), term_a_12), term_x_11);
            }
        }
    }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(f_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  static ATerm q_0 (ATerm t)
  {
    ATerm y_11 = NULL,b_12 = NULL;
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), y_11);
    t = w_7(not_null(t_11), y_11, t);
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
  t = z_6(u_11, t);
  t = map_1_0(q_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,k_12 = NULL;
  c_12 = t;
  t = term_g_12;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, c_12);
  t = w_7(k_12, c_12, t);
  d_12 = t;
  t = term_h_12;
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, c_12, d_12);
  t = lookup_table_0_1(e_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(c_12, d_12, f_12, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, c_12, d_12);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm l_12 = NULL,n_12 = NULL,r_12 = NULL,u_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,d_13 = NULL,k_13 = NULL,n_13 = NULL,p_13 = NULL,s_13 = NULL,t_13 = NULL,v_13 = NULL,w_13 = NULL,j_2 = NULL;
  l_12 = t;
  t = term_h_12;
  n_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, l_12);
  t = w_7(n_13, l_12, t);
  w_13 = t;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_13);
  p_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, s_13), t_13);
  j_2 = t;
  t = SSLsetAnnotations(j_2, p_13);
  v_13 = t;
  t = term_h_12;
  x_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, (ATerm)ATmakeAppl(sym_Patched_1, l_12), v_13);
  t = lookup_table_0_1(x_12, t);
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, l_12);
  y_12 = t;
  t = k_13;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(y_12, v_13, d_13, t);
  t = term_g_12;
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, l_12);
  t = w_7(w_12, l_12, t);
  n_12 = t;
  t = term_h_12;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, l_12, n_12);
  t = lookup_table_0_1(r_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(l_12, n_12, u_12, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, l_12, n_12);
  return(t);
}
static ATerm o_6 (ATerm a_16, ATerm b_16, ATerm t)
{
  t = a_16;
  t = map_1_0(s_0, t);
  t = b_16;
  t = map_1_0(t_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(f_10);
  h_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_10), term_j_12), h_10), term_i_12);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  if(match_cons(t, sym_Path1_1))
    {
      q_14 = ATgetArgument(t, 0);
      t = q_14;
    }
  else
    {
      ATerm d_10 = NULL,e_10 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          q_14 = ATgetArgument(t, 0);
          r_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_14;
      t = map_1_0(v_0, t);
      t = concat_0_0(t);
      d_10 = t;
      t = (ATerm) ATinsert(CheckATermList(d_10), q_14);
      e_10 = t;
      t = SSL_concat_strings(e_10);
    }
  return(t);
}
static ATerm p_6 (ATerm t_93 (ATerm), ATerm w_23, ATerm v_23, ATerm t)
{
  static ATerm a_17 (ATerm t)
  {
    ATerm t_16 = NULL,v_16 = NULL,x_16 = NULL;
    t_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_16;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_16 = ATgetFirst((ATermList) t);
            x_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_12 = t;
          int p_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_16;
              {
                static ATerm w_0 (ATerm t)
                {
                  t = v_23;
                  return(t);
                }
                t = x_6(t_93, w_0, v_16, x_16, t);
              }
              t = a_17(t);
              LocalPopChoice(p_12);
            }
          else
            {
              t = m_12;
              {
                ATerm t_10 = NULL,x_10 = NULL,l_2 = NULL;
                t = SSLgetAnnotations(t_16);
                t_10 = t;
                t = x_16;
                t = a_17(t);
                x_10 = t;
                t = (ATerm) ATinsert(CheckATermList(x_10), v_16);
                l_2 = t;
                t = SSLsetAnnotations(l_2, t_10);
              }
            }
        }
      }
    return(t);
  }
  t = w_23;
  t = a_17(t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  static ATerm e_18 (ATerm t)
  {
    ATerm s_17 = NULL,x_17 = NULL,c_18 = NULL;
    c_18 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_17 = ATgetFirst((ATermList) t);
        x_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_11 = NULL,w_11 = NULL,b_3 = NULL;
          t = SSLgetAnnotations(c_18);
          o_11 = t;
          t = x_17;
          t = e_18(t);
          w_11 = t;
          t = (ATerm) ATinsert(CheckATermList(w_11), s_17);
          b_3 = t;
          t = SSLsetAnnotations(b_3, o_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_18;
        t = e_90(t);
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
static ATerm h_19 (ATerm o_18, ATerm t)
{
  ATerm p_18 = NULL;
  t = SSL_explode_term(o_18);
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_18;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_18 = NULL,y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
      {
        ATerm t_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_0 (ATerm t)
            {
              t = y_18;
              return(t);
            }
            t = u_18;
            t = at_end_1_0(y_0, t);
            LocalPopChoice(v_12);
          }
        else
          {
            t = t_12;
            t = h_19(z_18, t);
          }
      }
    }
  else
    {
      t = h_19(z_18, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm t)
{
  static ATerm u_19 (ATerm t)
  {
    ATerm z_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_91(t);
        LocalPopChoice(a_13);
      }
    else
      {
        t = z_12;
        {
          ATerm j_19 = NULL,o_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,h_3 = NULL;
          t = s_91(t);
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
          t = u_91(t);
          r_19 = t;
          t = q_19;
          t = u_19(t);
          s_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_19, s_19);
          h_3 = t;
          t = SSLsetAnnotations(h_3, j_19);
          t = t_91(t);
        }
      }
    return(t);
  }
  t = u_19(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(((ATgetType(b_13) != AT_LIST) || !(ATisEmpty(b_13))))
        _fail(t);
      {
        ATerm f_13 = ATgetArgument(t, 1);
        if(((ATgetType(f_13) != AT_LIST) || !(ATisEmpty(f_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,i_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
        {
          e_20 = ATgetFirst((ATermList) g_13);
          f_20 = (ATerm) ATgetNext((ATermList) g_13);
        }
      else
        _fail(t);
      {
        ATerm h_13 = ATgetArgument(t, 1);
        if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
          {
            i_20 = ATgetFirst((ATermList) h_13);
            k_20 = (ATerm) ATgetNext((ATermList) h_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_20, i_20), (ATerm) ATmakeAppl(sym__2, f_20, k_20));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_20), l_20);
  return(t);
}
static ATerm u_6 (ATerm a_705, ATerm f_705, ATerm t_63, ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,a_20 = NULL,c_20 = NULL;
  t = SSL_explode_term(f_705);
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_705);
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
  t = (ATerm) ATmakeAppl(sym__2, x_19, a_20);
  t = genzip_4_0(b_1, c_1, e_2, _id, t);
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_20, t_63);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm s_82 (ATerm), ATerm t_82 (ATerm), ATerm t)
{
  static ATerm q_20 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_82(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = t_82(t);
        t = q_20(t);
      }
    return(t);
  }
  t = q_20(t);
  return(t);
}
ATerm for_3_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t)
{
  t = v_82(t);
  t = while_not_2_0(w_82, x_82, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_21);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,h_21 = NULL,j_21 = NULL,j_3 = NULL;
  j_21 = t;
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  e_21 = t;
  t = h_21;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_21, h_21);
  j_3 = t;
  t = SSLsetAnnotations(j_3, e_21);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,c_23 = NULL;
  r_22 = t;
  if(match_cons(t, sym__2))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_22 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_24(s_22, t_22, r_22, t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = l_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_22), u_22), c_23);
          }
      }
    }
  else
    {
      t = g_24(s_22, t_22, r_22, t);
    }
  return(t);
}
static ATerm g_24 (ATerm k_21, ATerm l_21, ATerm m_21, ATerm t)
{
  ATerm p_21 = NULL,u_21 = NULL,k_3 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL;
  t = SSLgetAnnotations(m_21);
  p_21 = t;
  t = l_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      f_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_22;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_22;
        if((b_22 != t))
          {
            _fail(t);
          }
        t = f_22;
        LocalPopChoice(u_13);
      }
    else
      {
        t = q_13;
        t = l_21;
        t = u_6(b_22, c_22, f_22, t);
      }
  }
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, u_21);
  k_3 = t;
  t = SSLsetAnnotations(k_3, p_21);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_24 = NULL;
  if(match_cons(t, sym__2))
    {
      f_24 = ATgetArgument(t, 0);
      if((f_24 != ATgetArgument(t, 1)))
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
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(f_2, g_2, h_2, t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm h_23 = NULL,k_23 = NULL,m_23 = NULL;
        h_23 = t;
        if(match_cons(t, sym__2))
          {
            k_23 = ATgetArgument(t, 0);
            m_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_23;
        t = p_6(i_2, k_23, m_23, t);
      }
    }
  return(t);
}
static ATerm w_6 (ATerm y_93 (ATerm), ATerm y_23, ATerm x_23, ATerm t)
{
  static ATerm i_25 (ATerm t)
  {
    ATerm w_24 = NULL,e_25 = NULL,f_25 = NULL;
    w_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_23;
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
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_24;
              {
                static ATerm k_2 (ATerm t)
                {
                  t = x_23;
                  return(t);
                }
                t = x_6(y_93, k_2, e_25, f_25, t);
              }
              t = i_25(t);
              LocalPopChoice(a_14);
            }
          else
            {
              t = z_13;
              {
                ATerm o_12 = NULL,s_12 = NULL,w_3 = NULL;
                t = SSLgetAnnotations(w_24);
                o_12 = t;
                t = f_25;
                t = i_25(t);
                s_12 = t;
                t = (ATerm) ATinsert(CheckATermList(s_12), e_25);
                w_3 = t;
                t = SSLsetAnnotations(w_3, o_12);
              }
            }
        }
      }
    return(t);
  }
  t = y_23;
  t = i_25(t);
  return(t);
}
ATerm foldr_3_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_25;
      t = o_96(t);
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
      t = q_96(t);
      q_25 = t;
      t = n_25;
      t = foldr_3_0(o_96, p_96, q_96, t);
      r_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
      t = p_96(t);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_25 = NULL;
      t = g_95(t);
      x_25 = t;
      t = (ATerm) ATinsert(ATempty, x_25);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      {
        ATerm c_13 = NULL,e_13 = NULL;
        static ATerm q_2 (ATerm t)
        {
          t = collect_om_2_0(g_95, h_95, t);
          return(t);
        }
        e_13 = t;
        t = SSL_explode_term(e_13);
        if(match_cons(t, sym__2))
          {
            ATerm d_14 = ATgetArgument(t, 0);
            c_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_13;
        t = foldr_3_0(n_2, h_95, q_2, t);
      }
    }
  return(t);
}
static ATerm x_6 (ATerm b_94 (ATerm), ATerm c_94 (ATerm), ATerm c_24, ATerm b_24, ATerm t)
{
  t = c_94(t);
  {
    static ATerm r_2 (ATerm t)
    {
      ATerm y_25 = NULL;
      y_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_24, y_25);
      t = b_94(t);
      return(t);
    }
    t = fetch_1_0(r_2, t);
  }
  t = b_24;
  return(t);
}
static ATerm y_6 (ATerm r_93 (ATerm), ATerm u_23, ATerm t_23, ATerm t)
{
  static ATerm g_27 (ATerm t)
  {
    static ATerm h_27 (ATerm h_26, ATerm t)
    {
      ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,o_26 = NULL,q_26 = NULL,r_26 = NULL,r_4 = NULL;
      t = h_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_26 = ATgetFirst((ATermList) t);
          k_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm t_2 (ATerm t)
        {
          t = t_23;
          return(t);
        }
        t = x_6(r_93, t_2, j_26, k_26, t);
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
      t = g_27(t);
      r_26 = t;
      t = (ATerm) ATinsert(CheckATermList(r_26), o_26);
      r_4 = t;
      t = SSLsetAnnotations(r_4, l_26);
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
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_14 = ATgetFirst((ATermList) t);
                z_26 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(f_14);
            {
              ATerm h_14 = t;
              int i_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_27(s_26, t);
                  LocalPopChoice(i_14);
                }
              else
                {
                  t = h_14;
                  t = z_26;
                  t = g_27(t);
                }
            }
          }
        else
          {
            t = e_14;
            t = h_27(s_26, t);
          }
      }
    return(t);
  }
  t = u_23;
  t = g_27(t);
  return(t);
}
static ATerm z_6 (ATerm b_61, ATerm t)
{
  t = SSL_hashtable_keys(b_61);
  return(t);
}
static ATerm a_7 (ATerm b_58, ATerm c_58, ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,s_27 = NULL;
  j_27 = t;
  t = lookup_table_0_1(b_58, t);
  i_27 = t;
  t = j_27;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(c_58, i_27, s_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(b_58, k_27, t);
  t = c_58;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_28 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      q_28 = ATgetArgument(t, 0);
      {
        ATerm j_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_28;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      d_28 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, d_28);
    }
  else
    {
      ATerm p_28 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          d_28 = ATgetArgument(t, 0);
          e_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_28;
      t = map_1_0(v_2, t);
      p_28 = t;
      t = (ATerm) ATinsert(CheckATermList(p_28), d_28);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_k_14;
  return(t);
}
static ATerm b_7 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,a_29 = NULL;
  t = u_64;
  t = mk_key_0_0(t);
  u_28 = t;
  t = term_l_14;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_14, u_28, (ATerm) ATmakeAppl(sym__2, u_64, v_64));
  t = lookup_table_0_1(v_28, t);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_64, v_64);
  w_28 = t;
  t = a_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(u_28, w_28, x_28, t);
  t = u_64;
  t = path_to_string_0_0(t);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_28, v_64);
  t = if_verbose1_1_0(w_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  static ATerm a_30 (ATerm t)
  {
    ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_100(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
      }
    z_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_29 = ATgetFirst((ATermList) t);
        y_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_13 = NULL,r_13 = NULL,t_4 = NULL;
          t = SSLgetAnnotations(z_29);
          m_13 = t;
          t = y_29;
          t = a_30(t);
          r_13 = t;
          t = (ATerm) ATinsert(CheckATermList(r_13), x_29);
          t_4 = t;
          t = SSLsetAnnotations(t_4, m_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_29;
      }
    return(t);
  }
  t = a_30(t);
  return(t);
}
ATerm at_last_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  static ATerm c_31 (ATerm t)
  {
    ATerm x_30 = NULL,y_30 = NULL,b_31 = NULL;
    x_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_30 = ATgetFirst((ATermList) t);
        b_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_14 = NULL,v_4 = NULL;
          t = SSLgetAnnotations(x_30);
          u_14 = t;
          t = b_31;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_31), y_30);
          v_4 = t;
          t = SSLsetAnnotations(v_4, u_14);
          t = p_90(t);
          LocalPopChoice(s_14);
        }
      else
        {
          t = o_14;
          {
            ATerm h_15 = NULL,k_15 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(x_30);
            h_15 = t;
            t = b_31;
            t = c_31(t);
            k_15 = t;
            t = (ATerm) ATinsert(CheckATermList(k_15), y_30);
            w_4 = t;
            t = SSLsetAnnotations(w_4, h_15);
          }
        }
    }
    return(t);
  }
  t = c_31(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_31 = ATgetFirst((ATermList) t);
      k_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_31;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_31;
    }
  else
    {
      t = k_31;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm u_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_14 = ATgetFirst((ATermList) t);
      u_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_31;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_31 = ATgetFirst((ATermList) t);
      {
        ATerm v_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_31;
  t = p_99(t);
  t = p_31;
  t = last_0_0(t);
  t = q_99(t);
  t = p_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_14 = ATgetFirst((ATermList) t);
      q_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_31;
  t = at_last_1_0(a_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm n_18 = NULL,q_18 = NULL,r_18 = NULL,t_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_18 = ATgetFirst((ATermList) t);
      q_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_18;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = q_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_18 = ATgetFirst((ATermList) t);
      t_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_18;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(t_18), term_l_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(t_18), term_x_11);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(t_18), term_z_9);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(t_18), term_x_14);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(t_18), term_y_14);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
  p_35 = t;
  if(match_cons(t, sym_Arg_1))
    {
      q_35 = ATgetArgument(t, 0);
      {
        ATerm r_15 = NULL,t_15 = NULL,z_4 = NULL;
        t = SSLgetAnnotations(p_35);
        r_15 = t;
        t = SSL_string_to_int(q_35);
        t_15 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, t_15);
        z_4 = t;
        t = SSLsetAnnotations(z_4, r_15);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          q_35 = ATgetArgument(t, 0);
          r_35 = ATgetArgument(t, 1);
          {
            ATerm d_16 = NULL,g_16 = NULL,j_16 = NULL,a_5 = NULL;
            t = SSLgetAnnotations(p_35);
            d_16 = t;
            t = SSL_string_to_int(q_35);
            g_16 = t;
            t = SSL_string_to_int(r_35);
            j_16 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, g_16, j_16);
            a_5 = t;
            t = SSLsetAnnotations(a_5, d_16);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              q_35 = ATgetArgument(t, 0);
              r_35 = ATgetArgument(t, 1);
              {
                ATerm d_17 = NULL,b_5 = NULL;
                t = SSLgetAnnotations(p_35);
                d_17 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, q_35, r_35);
                b_5 = t;
                t = SSLsetAnnotations(b_5, d_17);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  q_35 = ATgetArgument(t, 0);
                  {
                    ATerm d_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,c_5 = NULL;
                    t = SSLgetAnnotations(p_35);
                    d_18 = t;
                    t = SSL_explode_string(q_35);
                    t = unquote_chars_2_0(c_3, d_3, t);
                    k_18 = t;
                    t = SSL_implode_string(k_18);
                    j_18 = t;
                    t = SSL_explode_string(j_18);
                    t = unescape_chars_1_0(e_3, t);
                    i_18 = t;
                    t = SSL_implode_string(i_18);
                    h_18 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, h_18);
                    c_5 = t;
                    t = SSLsetAnnotations(c_5, d_18);
                  }
                }
              else
                {
                  ATerm l_19 = NULL,p_19 = NULL,d_5 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      q_35 = ATgetArgument(t, 0);
                      r_35 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_35);
                  l_19 = t;
                  t = SSL_string_to_int(q_35);
                  p_19 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, p_19, r_35);
                  d_5 = t;
                  t = SSLsetAnnotations(d_5, l_19);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  static ATerm f_3 (ATerm t)
  {
    t = topdown_1_0(b_83, t);
    return(t);
  }
  t = b_83(t);
  t = SRTS_all(f_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm h_36 = NULL,k_36 = NULL;
  t = topdown_1_0(m_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      h_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(h_36, k_36, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
    }
  return(t);
}
static ATerm k_7 (ATerm t_64, ATerm t)
{
  t = t_64;
  t = reverse_acc_2_0(_id, i_3, t);
  t = map_1_0(l_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_36 = NULL,p_36 = NULL,s_36 = NULL;
      t = term_d_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(n_3, t);
      t = term_e_15;
      p_36 = t;
      t = (ATerm) ATinsert(ATempty, term_f_15);
      s_36 = t;
      t = SSL_printnl(p_36, s_36);
      t = term_g_15;
      o_36 = t;
      t = SSL_exit(o_36);
      t = (ATerm) ATinsert(ATempty, term_f_15);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm u_36 = NULL,v_36 = NULL;
        t = term_e_15;
        u_36 = t;
        t = (ATerm) ATinsert(ATempty, term_i_15);
        v_36 = t;
        t = SSL_printnl(u_36, v_36);
        t = (ATerm) ATinsert(ATempty, term_i_15);
      }
    }
  return(t);
}
static ATerm w_37 (ATerm l_37, ATerm t)
{
  t = SSL_fclose(l_37);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  t_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_37 = ATgetArgument(t, 0);
      {
        ATerm j_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_37);
            LocalPopChoice(l_15);
          }
        else
          {
            t = j_15;
            t = w_37(t_37, t);
          }
      }
    }
  else
    {
      t = w_37(t_37, t);
    }
  return(t);
}
static ATerm m_7 (ATerm w_17, ATerm t)
{
  t = SSL_read_term_from_stream(w_17);
  return(t);
}
static ATerm n_7 (ATerm s_31, ATerm t_31, ATerm t)
{
  t = SSL_strcat(s_31, t_31);
  return(t);
}
static ATerm o_7 (ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm x_37 = NULL;
  t = SSL_fopen(b_33, c_33);
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_37);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_37 = NULL;
  t = SSL_stdin_stream();
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_37);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_37 = NULL;
  t = SSL_stdout_stream();
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_37);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_38 = NULL;
  t = SSL_stderr_stream();
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_38);
  return(t);
}
static ATerm q_39 (ATerm k_38, ATerm t)
{
  ATerm m_38 = NULL;
  t = SSL_explode_term(k_38);
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_15 = ATgetArgument(t, 1);
        if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
          {
            m_38 = ATgetFirst((ATermList) n_15);
            {
              ATerm o_15 = (ATerm) ATgetNext((ATermList) n_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_38;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_38;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_38;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_38;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_39 (ATerm r_38, ATerm s_38, ATerm t_38, ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,a_39 = NULL,j_5 = NULL;
  t = SSLgetAnnotations(t_38);
  w_38 = t;
  t = r_38;
  if(match_cons(t, sym_Path_1))
    {
      a_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_39, s_38);
  j_5 = t;
  t = SSLsetAnnotations(j_5, w_38);
  if(match_cons(t, sym__2))
    {
      u_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(u_38, v_38, t);
  return(t);
}
static ATerm s_39 (ATerm c_39, ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,k_39 = NULL,k_5 = NULL;
  t = SSLgetAnnotations(e_39);
  h_39 = t;
  t = SSL_is_string(c_39);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_39, d_39);
  k_5 = t;
  t = SSLsetAnnotations(k_5, h_39);
  if(match_cons(t, sym__2))
    {
      f_39 = ATgetArgument(t, 0);
      g_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(f_39, g_39, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_39(n_39, t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm s_15 = t;
              int u_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_39(o_39, p_39, n_39, t);
                  LocalPopChoice(u_15);
                }
              else
                {
                  t = s_15;
                  t = s_39(o_39, p_39, n_39, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_39(n_39, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,y_39 = NULL,j_40 = NULL;
  j_40 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_40, term_x_15);
        t = p_7(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm u_20 = NULL,v_20 = NULL;
          t = term_y_15;
          v_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_15, j_40);
          t = n_7(v_20, j_40, t);
          u_20 = t;
          t = SSL_perror(u_20);
          _fail(t);
        }
      }
  }
  v_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(y_39, t);
  u_39 = t;
  t = v_39;
  t = fclose_0_0(t);
  t = u_39;
  return(t);
}
ATerm debug_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  n_40 = t;
  t = c_89(t);
  o_40 = t;
  t = term_e_15;
  p_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_40), o_40);
  q_40 = t;
  t = SSL_printnl(p_40, q_40);
  t = n_40;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,y_20 = NULL,z_20 = NULL;
  t = if_verbose1_1_0(t_3, t);
  t = ReadFromFile_0_0(t);
  t_40 = t;
  t = SSL_explode_term(t_40);
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      {
        ATerm z_15 = ATgetArgument(t, 1);
        if(((ATgetType(z_15) == AT_LIST) && !(ATisEmpty(z_15))))
          {
            y_20 = ATgetFirst((ATermList) z_15);
            {
              ATerm c_16 = (ATerm) ATgetNext((ATermList) z_15);
              if(((ATgetType(c_16) != AT_LIST) || !(ATisEmpty(c_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_20;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = y_20;
  if(match_cons(t, sym_PP_Table_1))
    {
      s_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(s_40, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_e_16;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm r_40 = NULL;
  r_40 = t;
  t = term_l_14;
  t = table_create_0_0(t);
  t = r_40;
  t = map_1_0(p_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm v_40 = NULL;
  static ATerm y_3 (ATerm t)
  {
    t = z_89(t);
    if(((v_40 != NULL) && (v_40 != t)))
      _fail(t);
    else
      v_40 = t;
    return(t);
  }
  t = fetch_1_0(y_3, t);
  t = not_null(v_40);
  return(t);
}
ATerm option_value_2_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm t)
{
  ATerm f_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(e_108, t);
      LocalPopChoice(h_16);
    }
  else
    {
      t = f_16;
      t = f_108(t);
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  t = term_e_15;
  w_42 = t;
  t = (ATerm) ATinsert(ATempty, term_i_16);
  x_42 = t;
  t = SSL_printnl(w_42, x_42);
  t = term_g_15;
  v_42 = t;
  t = SSL_exit(v_42);
  t = (ATerm) ATinsert(ATempty, term_i_16);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm b_43 = NULL;
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      if((b_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm c_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  c_43 = t;
  t = term_h_12;
  i_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, c_43);
  t = w_7(i_43, c_43, t);
  h_43 = t;
  t = SSL_explode_term(h_43);
  if(match_cons(t, sym__2))
    {
      ATerm k_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_16 = ATgetArgument(t, 1);
        if(((ATgetType(l_16) == AT_LIST) && !(ATisEmpty(l_16))))
          {
            g_43 = ATgetFirst((ATermList) l_16);
            {
              ATerm m_16 = (ATerm) ATgetNext((ATermList) l_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_43;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  r_43 = t;
  t = term_g_12;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, r_43);
  t = w_7(w_43, r_43, t);
  v_43 = t;
  t = SSL_explode_term(v_43);
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_16 = ATgetArgument(t, 1);
        if(((ATgetType(o_16) == AT_LIST) && !(ATisEmpty(o_16))))
          {
            u_43 = ATgetFirst((ATermList) o_16);
            {
              ATerm p_16 = (ATerm) ATgetNext((ATermList) o_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_43;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,u_44 = NULL,v_44 = NULL,z_5 = NULL;
  n_44 = t;
  t = term_h_12;
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, n_44);
  t = w_7(o_44, n_44, t);
  v_44 = t;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_44);
  p_44 = t;
  t = r_44;
  t = collect_om_2_0(i_4, j_4, t);
  u_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_44, u_44);
  z_5 = t;
  t = SSLsetAnnotations(z_5, p_44);
  if(match_cons(t, sym__2))
    {
      g_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_44, g_44, h_44);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  m_45 = t;
  if(match_cons(t, sym_S_1))
    {
      n_45 = ATgetArgument(t, 0);
      {
        ATerm n_21 = NULL,u_5 = NULL;
        t = SSLgetAnnotations(m_45);
        n_21 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, n_45);
        u_5 = t;
        t = SSLsetAnnotations(u_5, n_21);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          n_45 = ATgetArgument(t, 0);
          {
            ATerm d_22 = NULL,x_5 = NULL;
            t = SSLgetAnnotations(m_45);
            d_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, n_45);
            x_5 = t;
            t = SSLsetAnnotations(x_5, d_22);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              n_45 = ATgetArgument(t, 0);
              {
                ATerm q_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, n_45);
        }
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  if(match_cons(t, sym__2))
    {
      t_45 = ATgetArgument(t, 0);
      u_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(k_4, t_45, u_45, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      v_45 = ATgetArgument(t, 0);
      if((v_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,f_46 = NULL,n_6 = NULL;
  y_45 = t;
  t = term_g_12;
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, y_45);
  t = w_7(z_45, y_45, t);
  f_46 = t;
  if(match_cons(t, sym__2))
    {
      b_46 = ATgetArgument(t, 0);
      c_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_46);
  a_46 = t;
  t = c_46;
  t = collect_om_2_0(n_4, o_4, t);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_46, d_46);
  n_6 = t;
  t = SSLsetAnnotations(n_6, a_46);
  if(match_cons(t, sym__2))
    {
      w_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_45, w_45, x_45);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  v_46 = t;
  if(match_cons(t, sym_S_1))
    {
      w_46 = ATgetArgument(t, 0);
      {
        ATerm o_22 = NULL,c_6 = NULL;
        t = SSLgetAnnotations(v_46);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, w_46);
        c_6 = t;
        t = SSLsetAnnotations(c_6, o_22);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          w_46 = ATgetArgument(t, 0);
          {
            ATerm b_23 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(v_46);
            b_23 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, w_46);
            m_6 = t;
            t = SSLsetAnnotations(m_6, b_23);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              w_46 = ATgetArgument(t, 0);
              {
                ATerm r_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, w_46);
        }
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      a_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(q_4, z_46, a_47, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm b_47 = NULL;
  if(match_cons(t, sym__2))
    {
      b_47 = ATgetArgument(t, 0);
      if((b_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_47 = NULL;
  if(match_cons(t, sym__3))
    {
      c_47 = ATgetArgument(t, 0);
      {
        ATerm s_16 = ATgetArgument(t, 1);
      }
      {
        ATerm u_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_47;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_47 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
      {
        ATerm y_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_47;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,s_47 = NULL;
  o_47 = t;
  t = term_h_12;
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, o_47);
  t = lookup_table_0_1(p_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(o_47, s_47, t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, o_47);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_16 = ATgetArgument(t, 0);
      ATerm b_17 = ATgetArgument(t, 1);
      if(match_cons(b_17, sym__2))
        {
          l_48 = ATgetArgument(b_17, 0);
          m_48 = ATgetArgument(b_17, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, l_48, m_48);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL,b_42 = NULL,e_42 = NULL,g_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  static ATerm z_3 (ATerm t)
  {
    ATerm p_42 = NULL,r_42 = NULL,s_42 = NULL,r_5 = NULL;
    s_42 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        r_42 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_42);
    p_42 = t;
    t = r_42;
    if(((n_41 != NULL) && (n_41 != t)))
      _fail(t);
    else
      n_41 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, r_42);
    r_5 = t;
    t = SSLsetAnnotations(r_5, p_42);
    return(t);
  }
  t = option_value_2_0(z_3, a_4, t);
  t = (ATerm) ATinsert(ATempty, not_null(n_41));
  t = read_pp_tables_0_0(t);
  t = term_l_14;
  n_42 = t;
  t = term_h_12;
  o_42 = t;
  t = term_e_17;
  t = a_7(n_42, o_42, t);
  {
    static ATerm b_4 (ATerm t)
    {
      ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,t_5 = NULL;
      a_43 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          z_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_43);
      y_42 = t;
      t = z_42;
      if(((o_41 != NULL) && (o_41 != t)))
        _fail(t);
      else
        o_41 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, z_42);
      t_5 = t;
      t = SSLsetAnnotations(t_5, y_42);
      return(t);
    }
    static ATerm c_4 (ATerm t)
    {
      t = term_f_17;
      if(((o_41 != NULL) && (o_41 != t)))
        _fail(t);
      else
        o_41 = t;
      return(t);
    }
    t = option_value_2_0(b_4, c_4, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(o_41));
  t = read_pp_tables_0_0(t);
  t = term_l_14;
  l_42 = t;
  t = term_g_12;
  m_42 = t;
  t = term_g_17;
  t = a_7(l_42, m_42, t);
  t = term_h_12;
  g_42 = t;
  t = lookup_table_0_1(g_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(k_42, t);
  r_41 = t;
  t = term_g_12;
  b_42 = t;
  t = lookup_table_0_1(b_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(e_42, t);
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_41, q_41);
  t = y_6(e_4, r_41, q_41, t);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_41, q_41);
  t = diff_0_0(t);
  v_41 = t;
  t = map_1_0(f_4, t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_43 = NULL,l_43 = NULL,m_43 = NULL;
        ATerm j_17 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_17;
          }
        j_43 = t;
        t = term_e_15;
        l_43 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, j_43), term_k_17);
        m_43 = t;
        t = SSL_printnl(l_43, m_43);
        t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, j_43), term_k_17));
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, q_41, r_41);
  t = diff_0_0(t);
  x_41 = t;
  t = map_1_0(g_4, t);
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_43 = NULL,z_43 = NULL,c_44 = NULL;
        ATerm n_17 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_17;
          }
        y_43 = t;
        t = term_e_15;
        z_43 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, y_43), term_o_17);
        c_44 = t;
        t = SSL_printnl(z_43, c_44);
        t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, y_43), term_o_17));
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
      }
  }
  t = s_41;
  t = map_1_0(h_4, t);
  t_41 = t;
  t = s_41;
  t = map_1_0(l_4, t);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
  t = diff_0_0(t);
  z_41 = t;
  t = map_1_0(s_4, t);
  w_41 = t;
  t = z_41;
  t = map_1_0(u_4, t);
  {
    ATerm p_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
        ATerm y_17 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_17;
          }
        e_47 = t;
        t = term_e_15;
        f_47 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_47), term_z_17);
        g_47 = t;
        t = SSL_printnl(f_47, g_47);
        t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, e_47), term_z_17));
        LocalPopChoice(t_17);
      }
    else
      {
        t = p_17;
      }
  }
  {
    ATerm b_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(x_4, t);
        t = (ATerm) ATmakeAppl(sym__2, x_41, w_41);
        t = o_6(x_41, w_41, t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = b_18;
      }
  }
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(y_4, t);
        t = v_41;
        t = map_1_0(e_5, t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
      }
  }
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_48 = NULL,f_48 = NULL;
        ATerm x_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_48 = NULL;
            g_48 = t;
            t = term_g_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(f_5, t);
            t = g_48;
            LocalPopChoice(a_19);
          }
        else
          {
            t = x_18;
            {
              ATerm i_48 = NULL;
              i_48 = t;
              t = term_s_18;
              t = get_options_0_0(t);
              t = oncetd_1_0(g_5, t);
              t = i_48;
            }
          }
        t = term_h_12;
        t = table_getlist_0_0(t);
        t = map_1_0(h_5, t);
        t = desugar_0_0(t);
        e_48 = t;
        t = (ATerm) ATmakeAppl(sym_PP_Table_1, e_48);
        f_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, (ATerm) ATmakeAppl(sym_PP_Table_1, e_48));
        t = i_6(i_5, f_48, t);
        t = output_1_0(_id, t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
      }
  }
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = t;
        if((PushChoice() == 0))
          {
            ATerm s_48 = NULL;
            s_48 = t;
            t = term_g_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(l_5, t);
            t = s_48;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_19;
          }
        {
          ATerm f_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_23 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_41), w_41);
              t = concat_0_0(t);
              {
                ATerm i_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_19;
                  }
              }
              t = term_g_15;
              q_23 = t;
              t = SSL_exit(q_23);
              LocalPopChoice(g_19);
            }
          else
            {
              t = f_19;
            }
        }
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm d_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  d_49 = t;
  t = term_a_11;
  t = whoami_0_0(t);
  g_49 = t;
  t = term_e_15;
  i_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_19), g_49), term_k_19);
  j_49 = t;
  t = SSL_printnl(i_49, j_49);
  t = term_g_15;
  h_49 = t;
  t = SSL_exit(h_49);
  t = d_49;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm n_49 = NULL;
  n_49 = t;
  if(match_string(t, "-k"))
    {
      t = n_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_49;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,s_49 = NULL;
  o_49 = t;
  t = SSL_string_to_int(o_49);
  p_49 = t;
  t = term_n_19;
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, p_49);
  t = y_7(s_49, p_49, t);
  t = o_49;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm w_49 = NULL;
  w_49 = t;
  if(match_string(t, "-S"))
    {
      t = w_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_49;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL;
  t = term_y_19;
  y_49 = t;
  t = term_z_19;
  z_49 = t;
  t = term_b_20;
  t = y_7(y_49, z_49, t);
  t = term_d_20;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  t = SSL_string_to_int(a_50);
  b_50 = t;
  t = term_y_19;
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, b_50);
  t = y_7(c_50, b_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_50);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_h_20;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm d_50 = NULL,f_50 = NULL;
  t = term_j_20;
  d_50 = t;
  t = term_a_11;
  f_50 = t;
  t = term_n_20;
  t = y_7(d_50, f_50, t);
  t = term_o_20;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_5, s_5, y_5, t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      {
        ATerm t_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_6, b_6, j_6, t);
            LocalPopChoice(w_20);
          }
        else
          {
            t = t_20;
            t = Option_3_0(r_6, s_6, t_6, t);
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm h_51, ATerm i_51, ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  t = term_m_10;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_10, h_51, i_51);
  t = lookup_table_0_1(g_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(h_51, i_51, h_50, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_10, h_51, i_51);
  return(t);
}
ATerm Option_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_50 = NULL,w_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_50 = NULL,z_50 = NULL,d_51 = NULL;
      t = term_a_11;
      t = l_0(t);
      y_50 = t;
      t = term_x_20;
      z_50 = t;
      t = term_a_21;
      d_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_20, term_a_21, y_50);
      t = q_7(z_50, d_51, y_50, t);
      _fail(t);
    }
  else
    {
      ATerm g_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_50 = ATgetFirst((ATermList) t);
          w_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_50;
      t = h_0(t);
      t = term_a_11;
      t = j_0(t);
      g_51 = t;
      t = (ATerm) ATinsert(CheckATermList(w_50), g_51);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm m_51 = NULL;
  m_51 = t;
  if(match_string(t, "-o"))
    {
      t = m_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_51;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm n_51 = NULL,q_51 = NULL;
  n_51 = t;
  t = term_n_10;
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, n_51);
  t = y_7(q_51, n_51, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_51);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_b_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_6, d_7, e_7, t);
  return(t);
}
static ATerm q_7 (ATerm c_56, ATerm d_56, ATerm b_56, ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,w_51 = NULL,z_51 = NULL,a_52 = NULL;
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_56, d_56);
  {
    ATerm c_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            ATerm o_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_56, d_56);
        t = w_7(c_56, d_56, t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = c_21;
        t = (ATerm) ATempty;
      }
  }
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_56, d_56, (ATerm) ATinsert(CheckATermList(u_51), b_56));
  t = lookup_table_0_1(c_56, t);
  a_52 = t;
  t = (ATerm) ATinsert(CheckATermList(u_51), b_56);
  w_51 = t;
  t = a_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(d_56, w_51, z_51, t);
  t = t_51;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_52 = NULL,q_52 = NULL,r_52 = NULL;
      t = term_a_11;
      t = p_0(t);
      p_52 = t;
      t = term_x_20;
      q_52 = t;
      t = term_a_21;
      r_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_20, term_a_21, p_52);
      t = q_7(q_52, r_52, p_52, t);
      _fail(t);
    }
  else
    {
      ATerm v_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_52 = ATgetFirst((ATermList) t);
          m_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_52 = ATgetFirst((ATermList) t);
          o_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_52;
      t = m_0(t);
      t = n_52;
      t = o_0(t);
      v_52 = t;
      t = (ATerm) ATinsert(CheckATermList(o_52), v_52);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_11;
  t = whoami_0_0(t);
  w_52 = t;
  t = term_e_15;
  y_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_21), w_52);
  z_52 = t;
  t = SSL_printnl(y_52, z_52);
  t = term_g_15;
  x_52 = t;
  t = SSL_exit(x_52);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL;
  t = term_m_10;
  a_53 = t;
  t = term_r_21;
  b_53 = t;
  t = term_s_21;
  t = w_7(a_53, b_53, t);
  return(t);
}
static ATerm r_7 (ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm t_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_35, w_35);
      LocalPopChoice(v_21);
    }
  else
    {
      t = t_21;
      t = SSL_addr(v_35, w_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
  d_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_53;
      t = m_96(t);
    }
  else
    {
      ATerm i_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_53 = ATgetFirst((ATermList) t);
          f_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_53;
      t = foldr_2_0(m_96, n_96, t);
      i_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_53, i_53);
      t = n_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(h_24, i_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_53 = NULL,r_23 = NULL,z_23 = NULL;
  t = times_0_0(t);
  z_23 = t;
  t = SSL_explode_term(z_23);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_23;
  t = foldr_2_0(f_7, g_7, t);
  l_53 = t;
  t = SSL_TicksToSeconds(l_53);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL;
  w_53 = t;
  if(match_cons(t, sym__2))
    {
      x_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_53;
        if((x_53 != t))
          {
            _fail(t);
          }
        t = w_53;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = (ATerm) ATmakeAppl(sym__2, x_53, y_53);
        {
          ATerm z_21 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_53, y_53);
              LocalPopChoice(e_22);
            }
          else
            {
              t = z_21;
              t = SSL_gtr(x_53, y_53);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_53, y_53);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
        t = term_m_10;
        f_54 = t;
        t = term_y_19;
        g_54 = t;
        t = term_i_22;
        t = w_7(f_54, g_54, t);
        e_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_54, term_g_15);
        t = geq_0_0(t);
        t = c_54;
        t = k_106(t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = c_54;
      }
  }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,l_54 = NULL,m_54 = NULL;
  t = run_time_0_0(t);
  i_54 = t;
  t = term_a_11;
  t = whoami_0_0(t);
  j_54 = t;
  t = term_e_15;
  l_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), i_54), term_j_22), j_54);
  m_54 = t;
  t = SSL_printnl(l_54, m_54);
  t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_22), i_54), term_j_22), j_54));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_54 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_19;
  n_54 = t;
  t = SSL_exit(n_54);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  y_54 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_54;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_54 = ATgetArgument(t, 0);
          {
            ATerm d_25 = NULL,l_7 = NULL;
            t = SSLgetAnnotations(y_54);
            d_25 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_54);
            l_7 = t;
            t = SSLsetAnnotations(l_7, d_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_54;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_54 = NULL,r_54 = NULL;
      t = term_m_10;
      q_54 = t;
      t = term_n_22;
      r_54 = t;
      t = term_p_22;
      t = w_7(q_54, r_54, t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      t = fetch_1_0(i_7, t);
    }
  t = a_109(t);
  return(t);
}
static ATerm z_7 (ATerm u_60, ATerm v_60, ATerm w_60, ATerm t)
{
  ATerm a_55 = NULL;
  t = SSL_hashtable_put(w_60, u_60, v_60);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_55);
  return(t);
}
ATerm lookup_table_0_1 (ATerm o_57, ATerm t)
{
  ATerm j_55 = NULL;
  t = table_hashtable_0_0(t);
  j_55 = t;
  {
    ATerm q_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL;
        t = j_55;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_8(o_57, a_26, t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = q_22;
        {
          ATerm f_26 = NULL;
          t = o_57;
          t = table_create_0_0(t);
          t = j_55;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_8(o_57, f_26, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_61, ATerm d_61, ATerm t)
{
  ATerm r_55 = NULL;
  t = SSL_hashtable_create(c_61, d_61);
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_55);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,w_55 = NULL,x_55 = NULL;
  s_55 = t;
  t = term_w_22;
  w_55 = t;
  t = term_x_22;
  x_55 = t;
  t = s_55;
  t = new_hashtable_0_2(w_55, x_55, t);
  t_55 = t;
  t = s_55;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(s_55, t_55, u_55, t);
  t = s_55;
  return(t);
}
static ATerm t_7 (ATerm z_60, ATerm a_61, ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_hashtable_remove(a_61, z_60);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_55);
  return(t);
}
static ATerm u_7 (ATerm e_61, ATerm t)
{
  ATerm a_56 = NULL;
  t = SSL_hashtable_destroy(e_61);
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_56);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_56 = NULL;
  t = SSL_table_hashtable();
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_56);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  f_56 = t;
  t = table_hashtable_0_0(t);
  g_56 = t;
  t = lookup_table_0_1(f_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(i_56, t);
  t = g_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(f_56, h_56, t);
  t = f_56;
  return(t);
}
ATerm map_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  static ATerm x_56 (ATerm t)
  {
    ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL;
    u_56 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_56;
      }
    else
      {
        ATerm t_26 = NULL,w_26 = NULL,y_26 = NULL,v_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_56 = ATgetFirst((ATermList) t);
            w_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_56);
        t_26 = t;
        t = v_56;
        t = n_89(t);
        w_26 = t;
        t = w_56;
        t = x_56(t);
        y_26 = t;
        t = (ATerm) ATinsert(CheckATermList(y_26), w_26);
        v_7 = t;
        t = SSLsetAnnotations(v_7, t_26);
      }
    return(t);
  }
  t = x_56(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_57 = ATgetFirst((ATermList) t);
      b_57 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_57 = NULL,i_57 = NULL;
        static ATerm j_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_57)), not_null(i_57));
          return(t);
        }
        t = b_57;
        t = g_0(t);
        if(((h_57 != NULL) && (h_57 != t)))
          _fail(t);
        else
          h_57 = t;
        t = a_57;
        t = d_0(t);
        if(((i_57 != NULL) && (i_57 != t)))
          _fail(t);
        else
          i_57 = t;
        t = b_57;
        t = reverse_acc_2_0(d_0, j_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_11;
      t = g_0(t);
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,b_8 = NULL;
  u_57 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_57);
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_57);
  b_8 = t;
  t = SSLsetAnnotations(b_8, s_57);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_57), term_y_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL;
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_57 = NULL,n_57 = NULL;
      t = term_m_10;
      m_57 = t;
      t = term_r_21;
      n_57 = t;
      t = term_s_21;
      t = w_7(m_57, n_57, t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      t = fetch_1_0(s_7, t);
    }
  t = term_d_23;
  t = echo_0_0(t);
  t = term_x_20;
  k_57 = t;
  t = term_a_21;
  l_57 = t;
  t = term_e_23;
  t = w_7(k_57, l_57, t);
  t = reverse_acc_2_0(_id, x_7, t);
  t = map_1_0(c_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  static ATerm y_58 (ATerm t)
  {
    ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
    v_58 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_58 = ATgetFirst((ATermList) t);
        x_58 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_27 = NULL,q_27 = NULL,j_8 = NULL;
          t = SSLgetAnnotations(v_58);
          n_27 = t;
          t = w_58;
          t = x_89(t);
          q_27 = t;
          t = (ATerm) ATinsert(CheckATermList(x_58), q_27);
          j_8 = t;
          t = SSLsetAnnotations(j_8, n_27);
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm c_28 = NULL,n_28 = NULL,k_8 = NULL;
            t = SSLgetAnnotations(v_58);
            c_28 = t;
            t = x_58;
            t = y_58(t);
            n_28 = t;
            t = (ATerm) ATinsert(CheckATermList(n_28), w_58);
            k_8 = t;
            t = SSLsetAnnotations(k_8, c_28);
          }
        }
    }
    return(t);
  }
  t = y_58(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL;
  c_59 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_23 = ATgetFirst((ATermList) t);
                ATerm n_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_59;
          }
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = (ATerm) ATinsert(ATempty, c_59);
      }
  }
  d_59 = t;
  t = term_p_10;
  e_59 = t;
  t = SSL_printnl(e_59, d_59);
  t = c_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL;
  t = term_m_10;
  i_59 = t;
  t = term_r_21;
  j_59 = t;
  t = term_s_21;
  t = w_7(i_59, j_59, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_8 (ATerm x_60, ATerm y_60, ATerm t)
{
  t = SSL_hashtable_get(y_60, x_60);
  return(t);
}
static ATerm w_7 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm k_59 = NULL;
  t = lookup_table_0_1(v_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(w_57, k_59, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm m_59 = NULL,n_59 = NULL;
  t = term_o_23;
  m_59 = t;
  t = term_a_11;
  n_59 = t;
  t = term_p_23;
  t = y_7(m_59, n_59, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_s_23;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  t = term_o_23;
  q_59 = t;
  t = term_a_11;
  r_59 = t;
  t = term_p_23;
  t = y_7(q_59, r_59, t);
  t = term_a_24;
  o_59 = t;
  t = term_a_11;
  p_59 = t;
  t = term_d_24;
  t = y_7(o_59, p_59, t);
  t = term_e_24;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_8, f_8, g_8, t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      t = Option_3_0(h_8, i_8, l_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_66 (ATerm), ATerm m_66 (ATerm), ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,s_8 = NULL;
  x_59 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_59 = ATgetFirst((ATermList) t);
      u_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_59);
  s_59 = t;
  t = t_59;
  t = l_66(t);
  v_59 = t;
  t = u_59;
  t = m_66(t);
  w_59 = t;
  t = (ATerm) ATinsert(CheckATermList(w_59), v_59);
  s_8 = t;
  t = SSLsetAnnotations(s_8, s_59);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_111 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,h_60 = NULL,i_60 = NULL,x_8 = NULL;
  c_60 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_24;
        t = d_111(t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
      }
  }
  t = c_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_60 = ATgetFirst((ATermList) t);
      f_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_60);
  d_60 = t;
  t = term_r_21;
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, e_60);
  t = y_7(i_60, e_60, t);
  t = f_60;
  {
    static ATerm s_60 (ATerm t)
    {
      ATerm p_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_60 = NULL;
              l_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_60;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              t = d_111(t);
              t = Cons_2_0(_id, s_60, t);
            }
          LocalPopChoice(q_24);
        }
      else
        {
          t = p_24;
          {
            ATerm o_60 = NULL,p_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_60 = ATgetFirst((ATermList) t);
                p_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_60), (ATerm) ATmakeAppl(sym_Undefined_1, o_60));
          }
        }
      return(t);
    }
    t = s_60(t);
  }
  h_60 = t;
  t = (ATerm) ATinsert(CheckATermList(h_60), (ATerm) ATmakeAppl(sym_Program_1, e_60));
  x_8 = t;
  t = SSLsetAnnotations(x_8, d_60);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm q_61 = NULL;
  q_61 = t;
  if(match_string(t, "--help"))
    {
      t = q_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_61;
        }
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL;
  t = term_n_22;
  r_61 = t;
  t = term_a_11;
  s_61 = t;
  t = term_t_24;
  t = y_7(r_61, s_61, t);
  t = term_u_24;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  k_61 = t;
  t = term_x_20;
  l_61 = t;
  t = term_x_24;
  t = lookup_table_0_1(l_61, t);
  p_61 = t;
  t = term_a_21;
  m_61 = t;
  t = (ATerm) ATempty;
  n_61 = t;
  t = p_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(m_61, n_61, o_61, t);
  t = k_61;
  {
    static ATerm m_8 (ATerm t)
    {
      ATerm y_24 = t;
      int z_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_111(t);
          LocalPopChoice(z_24);
        }
      else
        {
          t = y_24;
          {
            ATerm a_25 = t;
            int b_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_8, o_8, p_8, t);
                LocalPopChoice(b_25);
              }
            else
              {
                t = a_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_8, t);
  }
  {
    ATerm c_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_62 = NULL;
        d_62 = t;
        {
          ATerm h_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_29 = NULL;
              t = d_62;
              {
                ATerm k_25 = t;
                int o_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_29 = NULL,f_29 = NULL;
                    t = term_m_10;
                    e_29 = t;
                    t = term_n_22;
                    f_29 = t;
                    t = term_p_22;
                    t = w_7(e_29, f_29, t);
                    LocalPopChoice(o_25);
                  }
                else
                  {
                    t = k_25;
                    t = fetch_1_0(q_8, t);
                  }
              }
              t = d_62;
              t = default_system_usage_0_0(t);
              t = term_z_19;
              d_29 = t;
              t = SSL_exit(d_29);
              LocalPopChoice(j_25);
            }
          else
            {
              t = h_25;
              {
                ATerm n_29 = NULL,q_29 = NULL,t_29 = NULL;
                t = term_m_10;
                q_29 = t;
                t = term_o_23;
                t_29 = t;
                t = term_p_25;
                t = w_7(q_29, t_29, t);
                t = d_62;
                t = default_system_about_0_0(t);
                t = term_z_19;
                n_29 = t;
                t = SSL_exit(n_29);
              }
            }
        }
        LocalPopChoice(g_25);
      }
    else
      {
        t = c_25;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
              static ATerm r_8 (ATerm t)
              {
                ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,b_9 = NULL;
                j_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_62 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_62);
                h_62 = t;
                t = i_62;
                if(((i_61 != NULL) && (i_61 != t)))
                  _fail(t);
                else
                  i_61 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_62);
                b_9 = t;
                t = SSLsetAnnotations(b_9, h_62);
                return(t);
              }
              t = fetch_1_0(r_8, t);
              t = term_e_15;
              f_62 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_61)), term_u_25);
              g_62 = t;
              t = SSL_printnl(f_62, g_62);
              t = (ATerm) ATmakeAppl(sym__2, term_e_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_61)), term_u_25));
              t = default_system_usage_0_0(t);
              t = term_g_15;
              e_62 = t;
              t = SSL_exit(e_62);
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
            }
        }
      }
  }
  j_61 = t;
  t = term_x_20;
  t = table_destroy_0_0(t);
  t = j_61;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
  t = parse_options_1_0(c_109, t);
  o_62 = t;
  t = term_t_9;
  t = table_create_0_0(t);
  t = term_t_9;
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_9, term_u_9, o_62);
  t = lookup_table_0_1(p_62, t);
  s_62 = t;
  t = term_u_9;
  q_62 = t;
  t = s_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(q_62, o_62, r_62, t);
  t = o_62;
  t = e_109(t);
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_109, t);
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
        {
          ATerm z_25 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_26);
            }
          else
            {
              t = z_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_8, y_8, z_8, t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm e_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_9, c_9, d_9, t);
            LocalPopChoice(g_26);
          }
        else
          {
            t = e_26;
            {
              ATerm i_26 = t;
              int m_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(e_9, f_9, i_9, t);
                  LocalPopChoice(m_26);
                }
              else
                {
                  t = i_26;
                  {
                    ATerm n_26 = t;
                    int p_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(j_9, k_9, l_9, t);
                        LocalPopChoice(p_26);
                      }
                    else
                      {
                        t = n_26;
                        {
                          ATerm u_26 = t;
                          int v_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(m_9, n_9, o_9, t);
                              LocalPopChoice(v_26);
                            }
                          else
                            {
                              t = u_26;
                              {
                                ATerm x_26 = t;
                                int a_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(a_27);
                                  }
                                else
                                  {
                                    t = x_26;
                                    {
                                      ATerm b_27 = t;
                                      int c_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(p_9, q_9, r_9, t);
                                          LocalPopChoice(c_27);
                                        }
                                      else
                                        {
                                          t = b_27;
                                          {
                                            ATerm d_27 = t;
                                            int e_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(e_27);
                                              }
                                            else
                                              {
                                                t = d_27;
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
static ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_f_27;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_g_18;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_m_27;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_s_18;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm u_62 = NULL;
  u_62 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, u_62);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_p_27;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm v_62 = NULL;
  v_62 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, v_62);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_r_27;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL;
  t = term_s_10;
  w_62 = t;
  t = term_a_11;
  x_62 = t;
  t = term_t_27;
  t = y_7(w_62, x_62, t);
  t = term_u_27;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_v_27;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_8, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}

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
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_i_27;
ATerm term_a_27;
ATerm term_y_26;
ATerm term_u_25;
ATerm term_q_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_h_24;
ATerm term_b_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_p_19;
ATerm term_y_18;
ATerm term_r_18;
ATerm term_k_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_t_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_l_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_v_12);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_u_12);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_e_20, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_r_10);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_r_21);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_e_20);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_s_22);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_r_10);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_v_23, term_r_10);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_r_10);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_m_23);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_r_10);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm p_5 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm q_5 (ATerm p_17, ATerm q_17, ATerm t);
static ATerm s_5 (ATerm j_77 (ATerm), ATerm j_159, ATerm v_17, ATerm t);
static ATerm r_5 (ATerm l_17, ATerm m_17, ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm output_1_0 (ATerm z_95 (ATerm), ATerm t);
static ATerm t_5 (ATerm g_33, ATerm h_33, ATerm t);
static ATerm u_5 (ATerm b_102 (ATerm), ATerm i_54, ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm a_6 (ATerm v_15, ATerm w_15, ATerm t);
static ATerm u_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm b_6 (ATerm y_81 (ATerm), ATerm r_23, ATerm q_23, ATerm t);
ATerm at_end_1_0 (ATerm j_78 (ATerm), ATerm t);
static ATerm m_18 (ATerm g_17, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_6 (ATerm c_609, ATerm h_609, ATerm h_52, ATerm t);
ATerm while_not_2_0 (ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm t);
ATerm for_3_0 (ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm y_22 (ATerm r_20, ATerm t_20, ATerm u_20, ATerm t);
static ATerm h_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_6 (ATerm d_82 (ATerm), ATerm t_23, ATerm s_23, ATerm t);
ATerm foldr_3_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
ATerm collect_om_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
static ATerm j_6 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm x_23, ATerm w_23, ATerm t);
static ATerm k_6 (ATerm w_81 (ATerm), ATerm p_23, ATerm o_23, ATerm t);
static ATerm l_6 (ATerm e_49, ATerm f_49, ATerm t);
static ATerm p_2 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm m_6 (ATerm i_53, ATerm j_53, ATerm t);
ATerm unescape_chars_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm u_78 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm unquote_chars_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm g_71 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm v_6 (ATerm h_53, ATerm t);
static ATerm l_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm o_36 (ATerm h_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_6 (ATerm r_17, ATerm t);
static ATerm y_6 (ATerm n_31, ATerm o_31, ATerm t);
static ATerm z_6 (ATerm w_32, ATerm x_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_38 (ATerm f_37, ATerm t);
static ATerm n_38 (ATerm k_37, ATerm l_37, ATerm m_37, ATerm t);
static ATerm o_38 (ATerm w_37, ATerm x_37, ATerm y_37, ATerm t);
static ATerm a_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm debug_1_0 (ATerm h_77 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_78 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm g_4 (ATerm t);
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
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_7 (ATerm n_42, ATerm o_42, ATerm t);
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_7 (ATerm i_47, ATerm j_47, ATerm h_47, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_7 (ATerm q_35, ATerm r_35, ATerm t);
ATerm foldr_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_93 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm need_help_1_0 (ATerm q_95 (ATerm), ATerm t);
ATerm map_1_0 (ATerm s_77 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_78 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm f_7 (ATerm z_48, ATerm a_49, ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_54 (ATerm), ATerm a_55 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_97 (ATerm), ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm parse_options_1_0 (ATerm s_97 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
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
ATerm oncetd_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm w_0 = t;
    int f_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_72(t);
        LocalPopChoice(f_4);
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
  t = term_o_9;
  g_1 = t;
  t = term_p_9;
  i_1 = t;
  t = term_q_9;
  t = f_7(g_1, i_1, t);
  return(t);
}
static ATerm p_5 (ATerm u_32, ATerm v_32, ATerm t)
{
  ATerm j_1 = NULL;
  t = SSL_fputc(u_32, v_32);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_1);
  return(t);
}
static ATerm q_5 (ATerm p_17, ATerm q_17, ATerm t)
{
  ATerm k_1 = NULL;
  t = SSL_write_term_to_stream_text(p_17, q_17);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_1);
  return(t);
}
static ATerm s_5 (ATerm j_77 (ATerm), ATerm j_159, ATerm v_17, ATerm t)
{
  ATerm l_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_159, term_s_9);
  t = a_7(t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, v_17);
  t = j_77(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm r_5 (ATerm l_17, ATerm m_17, ATerm t)
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
      ATerm v_9 = ATgetArgument(t, 0);
      if(match_cons(v_9, sym_Stream_1))
        {
          u_1 = ATgetArgument(v_9, 0);
        }
      else
        _fail(t);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(u_1, v_1, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      if(match_cons(w_9, sym_Stream_1))
        {
          z_1 = ATgetArgument(w_9, 0);
        }
      else
        _fail(t);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(z_1, a_2, t);
  w_1 = t;
  t = term_x_9;
  x_1 = t;
  t = w_1;
  if(match_cons(t, sym_Stream_1))
    {
      y_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, w_1);
  t = p_5(x_1, y_1, t);
  return(t);
}
ATerm output_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  t = z_95(t);
  o_1 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 = NULL,q_1 = NULL;
        t = term_f_10;
        p_1 = t;
        t = term_g_10;
        q_1 = t;
        t = term_h_10;
        t = f_7(p_1, q_1, t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        t = term_i_10;
      }
  }
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,t_1 = NULL;
        t = term_f_10;
        s_1 = t;
        t = term_l_10;
        t_1 = t;
        t = term_m_10;
        t = f_7(s_1, t_1, t);
        t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
        LocalPopChoice(k_10);
        if(match_cons(t, sym__2))
          {
            ATerm n_10 = ATgetArgument(t, 0);
            ATerm o_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5(b_0, n_1, o_1, t);
      }
    else
      {
        t = j_10;
        if(match_cons(t, sym__2))
          {
            ATerm p_10 = ATgetArgument(t, 0);
            ATerm q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5(f_0, n_1, o_1, t);
      }
  }
  return(t);
}
static ATerm t_5 (ATerm g_33, ATerm h_33, ATerm t)
{
  t = SSL_mkterm(g_33, h_33);
  return(t);
}
static ATerm u_5 (ATerm b_102 (ATerm), ATerm i_54, ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL;
  t = term_r_10;
  t = b_102(t);
  b_2 = t;
  t = (ATerm) ATinsert(ATempty, i_54);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, (ATerm) ATinsert(ATempty, i_54));
  t = t_5(b_2, d_2, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,z_0 = NULL;
      ATerm u_10 = t;
      int x_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_3 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_10 = ATgetFirst((ATermList) t);
              if(((ATgetType(y_10) != AT_INT) || (ATgetInt((ATermInt) y_10) != 34)))
                _fail(t);
              c_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_3), term_c_11), term_b_11);
          LocalPopChoice(x_10);
        }
      else
        {
          t = u_10;
          {
            ATerm g_3 = NULL,h_3 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_3 = ATgetFirst((ATermList) t);
                h_3 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_3;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(h_3), term_b_11), term_b_11);
              }
            else
              {
                if(match_int(t, 10))
                  {
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(h_3), term_e_11), term_b_11);
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                      _fail(t);
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(h_3), term_f_11), term_b_11);
                  }
              }
          }
        }
      a_3 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_2 = ATgetFirst((ATermList) t);
          y_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_3);
      v_2 = t;
      t = y_2;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      z_2 = t;
      t = (ATerm) ATinsert(CheckATermList(z_2), w_2);
      z_0 = t;
      t = SSLsetAnnotations(z_0, v_2);
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
        ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
        e_4 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_4 = ATgetFirst((ATermList) t);
            d_4 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm h_0 = NULL,p_0 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(e_4);
              h_0 = t;
              t = d_4;
              t = escape_chars_0_0(t);
              p_0 = t;
              t = (ATerm) ATinsert(CheckATermList(p_0), c_4);
              a_1 = t;
              t = SSLsetAnnotations(a_1, h_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_4;
          }
      }
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL;
  b_10 = t;
  if(match_cons(t, sym_Arg_1))
    {
      y_9 = ATgetArgument(t, 0);
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_2 = NULL,k_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(b_10);
            i_2 = t;
            t = SSL_int_to_string(y_9);
            k_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, k_2);
            d_1 = t;
            t = SSLsetAnnotations(d_1, i_2);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            t = b_10;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          y_9 = ATgetArgument(t, 0);
          t_9 = ATgetArgument(t, 1);
          {
            ATerm j_11 = t;
            int o_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_2 = NULL,u_2 = NULL,x_2 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(b_10);
                r_2 = t;
                t = SSL_int_to_string(y_9);
                u_2 = t;
                t = SSL_int_to_string(t_9);
                x_2 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, u_2, x_2);
                e_1 = t;
                t = SSLsetAnnotations(e_1, r_2);
                LocalPopChoice(o_11);
              }
            else
              {
                t = j_11;
                t = b_10;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              y_9 = ATgetArgument(t, 0);
              t_9 = ATgetArgument(t, 1);
              {
                ATerm u_11 = t;
                int c_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 = NULL,h_1 = NULL;
                    t = SSLgetAnnotations(b_10);
                    r_3 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, y_9, t_9);
                    h_1 = t;
                    t = SSLsetAnnotations(h_1, r_3);
                    LocalPopChoice(c_12);
                  }
                else
                  {
                    t = u_11;
                    t = b_10;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  y_9 = ATgetArgument(t, 0);
                  {
                    ATerm d_12 = t;
                    int e_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 = NULL,o_4 = NULL,r_1 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,t_4 = NULL;
                        t = SSLgetAnnotations(b_10);
                        m_4 = t;
                        t = SSL_explode_string(y_9);
                        t = escape_chars_0_0(t);
                        t_4 = t;
                        t = SSL_implode_string(t_4);
                        x_4 = t;
                        t = SSL_explode_string(x_4);
                        z_4 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_4), term_c_11), (ATerm) ATinsert(ATempty, term_c_11));
                        t = conc_0_0(t);
                        w_4 = t;
                        t = SSL_implode_string(w_4);
                        o_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, o_4);
                        r_1 = t;
                        t = SSLsetAnnotations(r_1, m_4);
                        LocalPopChoice(e_12);
                      }
                    else
                      {
                        t = d_12;
                        t = b_10;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      y_9 = ATgetArgument(t, 0);
                      t_9 = ATgetArgument(t, 1);
                      {
                        ATerm h_12 = t;
                        int l_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_5 = NULL,n_5 = NULL,c_2 = NULL;
                            t = SSLgetAnnotations(b_10);
                            k_5 = t;
                            t = SSL_int_to_string(y_9);
                            n_5 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, n_5, t_9);
                            c_2 = t;
                            t = SSLsetAnnotations(c_2, k_5);
                            LocalPopChoice(l_12);
                          }
                        else
                          {
                            t = h_12;
                            t = b_10;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          y_9 = ATgetArgument(t, 0);
                          t = y_9;
                          if(match_cons(t, sym_Path_2))
                            {
                              z_9 = ATgetArgument(t, 0);
                              u_9 = ATgetArgument(t, 1);
                              {
                                ATerm n_12 = t;
                                int p_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_6 = NULL,m_7 = NULL;
                                    t = (ATerm) ATinsert(ATinsert(ATempty, z_9), term_r_12);
                                    m_7 = t;
                                    t = SSL_concat_strings(m_7);
                                    q_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Path_2, q_6, u_9);
                                    LocalPopChoice(p_12);
                                  }
                                else
                                  {
                                    t = n_12;
                                    t = b_10;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Path1_1))
                                {
                                  z_9 = ATgetArgument(t, 0);
                                  {
                                    ATerm s_12 = t;
                                    int t_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm v_7 = NULL,w_7 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, z_9), term_r_12);
                                        w_7 = t;
                                        t = SSL_concat_strings(w_7);
                                        v_7 = t;
                                        t = (ATerm) ATmakeAppl(sym_Path1_1, v_7);
                                        LocalPopChoice(t_12);
                                      }
                                    else
                                      {
                                        t = s_12;
                                        t = b_10;
                                      }
                                  }
                                }
                              else
                                {
                                  t = b_10;
                                }
                            }
                        }
                      else
                        {
                          t = b_10;
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
  ATerm m_11 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm n_11 = NULL,p_11 = NULL;
    n_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_11), n_11);
    t = f_7(not_null(m_11), n_11, t);
    p_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_11, p_11);
    return(t);
  }
  if(((m_11 != NULL) && (m_11 != t)))
    _fail(t);
  else
    m_11 = t;
  t = SSL_table_keys(m_11);
  t = map_1_0(m_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm q_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL;
  q_11 = t;
  t = term_u_12;
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, q_11);
  t = f_7(v_11, q_11, t);
  s_11 = t;
  t = term_v_12;
  t_11 = t;
  t = SSL_table_put(t_11, q_11, s_11);
  t = (ATerm) ATmakeAppl(sym__3, term_v_12, q_11, s_11);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,f_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,o_12 = NULL,q_12 = NULL,u_3 = NULL;
  w_11 = t;
  t = term_v_12;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, w_11);
  t = f_7(f_12, w_11, t);
  q_12 = t;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_12);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, j_12), k_12);
  u_3 = t;
  t = SSLsetAnnotations(u_3, i_12);
  o_12 = t;
  t = term_v_12;
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, w_11);
  b_12 = t;
  t = SSL_table_put(a_12, b_12, o_12);
  t = term_u_12;
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, w_11);
  t = f_7(z_11, w_11, t);
  x_11 = t;
  t = term_v_12;
  y_11 = t;
  t = SSL_table_put(y_11, w_11, x_11);
  t = (ATerm) ATmakeAppl(sym__3, term_v_12, w_11, x_11);
  return(t);
}
static ATerm a_6 (ATerm v_15, ATerm w_15, ATerm t)
{
  t = v_15;
  t = map_1_0(r_0, t);
  t = w_15;
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      o_8 = ATgetArgument(t, 0);
      p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(o_8);
  q_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_8), term_x_12), q_8), term_w_12);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,o_13 = NULL;
  i_13 = t;
  if(match_cons(t, sym_Path1_1))
    {
      j_13 = ATgetArgument(t, 0);
      t = j_13;
    }
  else
    {
      ATerm j_8 = NULL,n_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          j_13 = ATgetArgument(t, 0);
          o_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_13;
      t = map_1_0(u_0, t);
      t = concat_0_0(t);
      j_8 = t;
      t = (ATerm) ATinsert(CheckATermList(j_8), j_13);
      n_8 = t;
      t = SSL_concat_strings(n_8);
    }
  return(t);
}
static ATerm b_6 (ATerm y_81 (ATerm), ATerm r_23, ATerm q_23, ATerm t)
{
  static ATerm a_16 (ATerm t)
  {
    ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
    p_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_14;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_14 = ATgetFirst((ATermList) t);
            r_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_12 = t;
          int z_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_14;
              {
                static ATerm v_0 (ATerm t)
                {
                  t = q_23;
                  return(t);
                }
                t = j_6(y_81, v_0, q_14, r_14, t);
              }
              t = a_16(t);
              LocalPopChoice(z_12);
            }
          else
            {
              t = y_12;
              {
                ATerm d_9 = NULL,l_9 = NULL,y_3 = NULL;
                t = SSLgetAnnotations(p_14);
                d_9 = t;
                t = r_14;
                t = a_16(t);
                l_9 = t;
                t = (ATerm) ATinsert(CheckATermList(l_9), q_14);
                y_3 = t;
                t = SSLsetAnnotations(y_3, d_9);
              }
            }
        }
      }
    return(t);
  }
  t = r_23;
  t = a_16(t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  static ATerm c_17 (ATerm t)
  {
    ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
    b_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_16 = ATgetFirst((ATermList) t);
        a_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_10 = NULL,e_10 = NULL,a_4 = NULL;
          t = SSLgetAnnotations(b_17);
          a_10 = t;
          t = a_17;
          t = c_17(t);
          e_10 = t;
          t = (ATerm) ATinsert(CheckATermList(e_10), z_16);
          a_4 = t;
          t = SSLsetAnnotations(a_4, a_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_17;
        t = j_78(t);
      }
    return(t);
  }
  t = c_17(t);
  return(t);
}
static ATerm m_18 (ATerm g_17, ATerm t)
{
  ATerm k_17 = NULL;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_17;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_17 = NULL,i_18 = NULL,j_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = i_18;
              return(t);
            }
            t = s_17;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = m_18(j_18, t);
          }
      }
    }
  else
    {
      t = m_18(j_18, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm), ATerm z_79 (ATerm), ATerm t)
{
  static ATerm w_18 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_79(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        {
          ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,q_4 = NULL;
          t = x_79(t);
          v_18 = t;
          if(match_cons(t, sym__2))
            {
              p_18 = ATgetArgument(t, 0);
              q_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_18);
          n_18 = t;
          t = p_18;
          t = z_79(t);
          t_18 = t;
          t = q_18;
          t = w_18(t);
          u_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_18, u_18);
          q_4 = t;
          t = SSLsetAnnotations(q_4, n_18);
          t = y_79(t);
        }
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(((ATgetType(f_13) != AT_LIST) || !(ATisEmpty(f_13))))
        _fail(t);
      {
        ATerm g_13 = ATgetArgument(t, 1);
        if(((ATgetType(g_13) != AT_LIST) || !(ATisEmpty(g_13))))
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
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_13 = ATgetArgument(t, 0);
      if(((ATgetType(h_13) == AT_LIST) && !(ATisEmpty(h_13))))
        {
          g_19 = ATgetFirst((ATermList) h_13);
          h_19 = (ATerm) ATgetNext((ATermList) h_13);
        }
      else
        _fail(t);
      {
        ATerm l_13 = ATgetArgument(t, 1);
        if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
          {
            i_19 = ATgetFirst((ATermList) l_13);
            j_19 = (ATerm) ATgetNext((ATermList) l_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_19, i_19), (ATerm) ATmakeAppl(sym__2, h_19, j_19));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_19), n_19);
  return(t);
}
static ATerm g_6 (ATerm c_609, ATerm h_609, ATerm h_52, ATerm t)
{
  ATerm a_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  t = SSL_explode_term(h_609);
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_609);
  if(match_cons(t, sym__2))
    {
      if((a_19 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_19, d_19);
  t = genzip_4_0(y_0, b_1, c_1, _id, t);
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_19, h_52);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm x_70 (ATerm), ATerm y_70 (ATerm), ATerm t)
{
  static ATerm q_19 (ATerm t)
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_70(t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = y_70(t);
        t = q_19(t);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm for_3_0 (ATerm a_71 (ATerm), ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm t)
{
  t = a_71(t);
  t = while_not_2_0(b_71, c_71, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm j_20 = NULL;
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_20);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,y_4 = NULL;
  o_20 = t;
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_20);
  l_20 = t;
  t = n_20;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_20, n_20);
  y_4 = t;
  t = SSLsetAnnotations(y_4, l_20);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm z_21 = NULL,c_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  z_21 = t;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_22;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_22 = ATgetFirst((ATermList) t);
      g_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_22(c_22, e_22, z_21, t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_22), f_22), g_22);
          }
      }
    }
  else
    {
      t = y_22(c_22, e_22, z_21, t);
    }
  return(t);
}
static ATerm y_22 (ATerm r_20, ATerm t_20, ATerm u_20, ATerm t)
{
  ATerm v_20 = NULL,d_21 = NULL,a_5 = NULL,g_21 = NULL,j_21 = NULL,l_21 = NULL,p_21 = NULL;
  t = SSLgetAnnotations(u_20);
  v_20 = t;
  t = t_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_21 = ATgetFirst((ATermList) t);
      p_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_21;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_21;
        if((j_21 != t))
          {
            _fail(t);
          }
        t = p_21;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        t = t_20;
        t = g_6(j_21, l_21, p_21, t);
      }
  }
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_20, d_21);
  a_5 = t;
  t = SSLsetAnnotations(a_5, v_20);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      if((x_22 != ATgetArgument(t, 1)))
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
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(e_2, f_2, g_2, t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm q_22 = NULL,t_22 = NULL,u_22 = NULL;
        q_22 = t;
        if(match_cons(t, sym__2))
          {
            t_22 = ATgetArgument(t, 0);
            u_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_22;
        t = b_6(h_2, t_22, u_22, t);
      }
    }
  return(t);
}
static ATerm i_6 (ATerm d_82 (ATerm), ATerm t_23, ATerm s_23, ATerm t)
{
  static ATerm a_24 (ATerm t)
  {
    ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
    j_23 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_23;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_23 = ATgetFirst((ATermList) t);
            l_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_23;
              {
                static ATerm j_2 (ATerm t)
                {
                  t = s_23;
                  return(t);
                }
                t = j_6(d_82, j_2, k_23, l_23, t);
              }
              t = a_24(t);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              {
                ATerm w_10 = NULL,a_11 = NULL,e_5 = NULL;
                t = SSLgetAnnotations(j_23);
                w_10 = t;
                t = l_23;
                t = a_24(t);
                a_11 = t;
                t = (ATerm) ATinsert(CheckATermList(a_11), k_23);
                e_5 = t;
                t = SSLsetAnnotations(e_5, w_10);
              }
            }
        }
      }
    return(t);
  }
  t = t_23;
  t = a_24(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
  j_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_24;
      t = l_84(t);
    }
  else
    {
      ATerm o_24 = NULL,r_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_24 = ATgetFirst((ATermList) t);
          l_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_24;
      t = n_84(t);
      o_24 = t;
      t = l_24;
      t = foldr_3_0(l_84, m_84, n_84, t);
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, r_24);
      t = m_84(t);
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_25 = NULL;
      t = i_83(t);
      b_25 = t;
      t = (ATerm) ATinsert(ATempty, b_25);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm k_11 = NULL,l_11 = NULL;
        static ATerm m_2 (ATerm t)
        {
          t = collect_om_2_0(i_83, j_83, t);
          return(t);
        }
        l_11 = t;
        t = SSL_explode_term(l_11);
        if(match_cons(t, sym__2))
          {
            ATerm z_13 = ATgetArgument(t, 0);
            k_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_11;
        t = foldr_3_0(l_2, j_83, m_2, t);
      }
    }
  return(t);
}
static ATerm j_6 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm x_23, ATerm w_23, ATerm t)
{
  t = h_82(t);
  {
    static ATerm n_2 (ATerm t)
    {
      ATerm c_25 = NULL;
      c_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_23, c_25);
      t = g_82(t);
      return(t);
    }
    t = fetch_1_0(n_2, t);
  }
  t = w_23;
  return(t);
}
static ATerm k_6 (ATerm w_81 (ATerm), ATerm p_23, ATerm o_23, ATerm t)
{
  static ATerm e_26 (ATerm t)
  {
    static ATerm j_26 (ATerm g_25, ATerm t)
    {
      ATerm j_25 = NULL,k_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,v_25 = NULL,h_5 = NULL;
      t = g_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_25 = ATgetFirst((ATermList) t);
          k_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm o_2 (ATerm t)
        {
          t = o_23;
          return(t);
        }
        t = j_6(w_81, o_2, j_25, k_25, t);
      }
      t = g_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_25 = ATgetFirst((ATermList) t);
          o_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_25);
      m_25 = t;
      t = o_25;
      t = e_26(t);
      v_25 = t;
      t = (ATerm) ATinsert(CheckATermList(v_25), n_25);
      h_5 = t;
      t = SSLsetAnnotations(h_5, m_25);
      return(t);
    }
    ATerm w_25 = NULL,z_25 = NULL;
    w_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_25;
      }
    else
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_14 = ATgetFirst((ATermList) t);
                z_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(c_14);
            {
              ATerm e_14 = t;
              int f_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_26(w_25, t);
                  LocalPopChoice(f_14);
                }
              else
                {
                  t = e_14;
                  t = z_25;
                  t = e_26(t);
                }
            }
          }
        else
          {
            t = b_14;
            t = j_26(w_25, t);
          }
      }
    return(t);
  }
  t = p_23;
  t = e_26(t);
  return(t);
}
static ATerm l_6 (ATerm e_49, ATerm f_49, ATerm t)
{
  t = SSL_table_rename(e_49, f_49);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm c_27 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      c_27 = ATgetArgument(t, 0);
      {
        ATerm g_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_27;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      o_26 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, o_26);
    }
  else
    {
      ATerm b_27 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          o_26 = ATgetArgument(t, 0);
          p_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_26;
      t = map_1_0(p_2, t);
      b_27 = t;
      t = (ATerm) ATinsert(CheckATermList(b_27), o_26);
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
  t = term_h_14;
  return(t);
}
static ATerm m_6 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,j_27 = NULL;
  t = i_53;
  t = mk_key_0_0(t);
  g_27 = t;
  t = term_i_14;
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_53, j_53);
  j_27 = t;
  t = SSL_table_put(h_27, g_27, j_27);
  t = i_53;
  t = path_to_string_0_0(t);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, j_53);
  t = if_verbose1_1_0(q_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  static ATerm d_28 (ATerm t)
  {
    ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
    ATerm j_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_87(t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = j_14;
      }
    b_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_27 = ATgetFirst((ATermList) t);
        a_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_12 = NULL,m_12 = NULL,o_5 = NULL;
          t = SSLgetAnnotations(b_28);
          g_12 = t;
          t = a_28;
          t = d_28(t);
          m_12 = t;
          t = (ATerm) ATinsert(CheckATermList(m_12), z_27);
          o_5 = t;
          t = SSLsetAnnotations(o_5, g_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_28;
      }
    return(t);
  }
  t = d_28(t);
  return(t);
}
ATerm at_last_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  static ATerm w_29 (ATerm t)
  {
    ATerm s_29 = NULL,u_29 = NULL,v_29 = NULL;
    s_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_29 = ATgetFirst((ATermList) t);
        v_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_13 = NULL,x_5 = NULL;
          t = SSLgetAnnotations(s_29);
          k_13 = t;
          t = v_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_29), u_29);
          x_5 = t;
          t = SSLsetAnnotations(x_5, k_13);
          t = u_78(t);
          LocalPopChoice(n_14);
        }
      else
        {
          t = m_14;
          {
            ATerm a_14 = NULL,k_14 = NULL,e_6 = NULL;
            t = SSLgetAnnotations(s_29);
            a_14 = t;
            t = v_29;
            t = w_29(t);
            k_14 = t;
            t = (ATerm) ATinsert(CheckATermList(k_14), u_29);
            e_6 = t;
            t = SSLsetAnnotations(e_6, a_14);
          }
        }
    }
    return(t);
  }
  t = w_29(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_30 = ATgetFirst((ATermList) t);
      l_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_30;
    }
  else
    {
      t = l_30;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm w_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_14 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_30 = ATgetFirst((ATermList) t);
      {
        ATerm s_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_30;
  t = k_87(t);
  t = t_30;
  t = last_0_0(t);
  t = l_87(t);
  t = t_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_14 = ATgetFirst((ATermList) t);
      u_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_30;
  t = at_last_1_0(t_2, t);
  return(t);
}
static ATerm b_3 (ATerm t)
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
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL,v_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_16 = ATgetFirst((ATermList) t);
      s_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_16;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = s_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_16 = ATgetFirst((ATermList) t);
      v_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_16;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(v_16), term_c_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(v_16), term_b_11);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(v_16), term_x_9);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(v_16), term_u_14);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(v_16), term_v_14);
                }
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm s_34 = NULL,w_34 = NULL,y_34 = NULL;
  s_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      w_34 = ATgetArgument(t, 0);
      {
        ATerm w_14 = NULL,y_14 = NULL,s_6 = NULL;
        t = SSLgetAnnotations(s_34);
        w_14 = t;
        t = SSL_string_to_int(w_34);
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, y_14);
        s_6 = t;
        t = SSLsetAnnotations(s_6, w_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          w_34 = ATgetArgument(t, 0);
          y_34 = ATgetArgument(t, 1);
          {
            ATerm f_15 = NULL,i_15 = NULL,j_15 = NULL,t_6 = NULL;
            t = SSLgetAnnotations(s_34);
            f_15 = t;
            t = SSL_string_to_int(w_34);
            i_15 = t;
            t = SSL_string_to_int(y_34);
            j_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, i_15, j_15);
            t_6 = t;
            t = SSLsetAnnotations(t_6, f_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              w_34 = ATgetArgument(t, 0);
              y_34 = ATgetArgument(t, 1);
              {
                ATerm s_15 = NULL,u_6 = NULL;
                t = SSLgetAnnotations(s_34);
                s_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, w_34, y_34);
                u_6 = t;
                t = SSLsetAnnotations(u_6, s_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  w_34 = ATgetArgument(t, 0);
                  {
                    ATerm f_16 = NULL,j_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,w_6 = NULL;
                    t = SSLgetAnnotations(s_34);
                    f_16 = t;
                    t = SSL_explode_string(w_34);
                    t = unquote_chars_2_0(b_3, d_3, t);
                    n_16 = t;
                    t = SSL_implode_string(n_16);
                    m_16 = t;
                    t = SSL_explode_string(m_16);
                    t = unescape_chars_1_0(e_3, t);
                    l_16 = t;
                    t = SSL_implode_string(l_16);
                    j_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, j_16);
                    w_6 = t;
                    t = SSLsetAnnotations(w_6, f_16);
                  }
                }
              else
                {
                  ATerm y_17 = NULL,b_18 = NULL,d_7 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      w_34 = ATgetArgument(t, 0);
                      y_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_34);
                  y_17 = t;
                  t = SSL_string_to_int(w_34);
                  b_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, b_18, y_34);
                  d_7 = t;
                  t = SSLsetAnnotations(d_7, y_17);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm g_71 (ATerm), ATerm t)
{
  static ATerm f_3 (ATerm t)
  {
    t = topdown_1_0(g_71, t);
    return(t);
  }
  t = g_71(t);
  t = SRTS_all(f_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  t = topdown_1_0(k_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      k_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(k_35, l_35, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
    }
  return(t);
}
static ATerm v_6 (ATerm h_53, ATerm t)
{
  t = h_53;
  t = reverse_acc_2_0(_id, i_3, t);
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
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_35 = NULL,p_35 = NULL,s_35 = NULL;
      t = term_c_15;
      t = get_options_0_0(t);
      t = oncetd_1_0(l_3, t);
      t = term_d_15;
      p_35 = t;
      t = (ATerm) ATinsert(ATempty, term_e_15);
      s_35 = t;
      t = SSL_printnl(p_35, s_35);
      t = term_g_15;
      o_35 = t;
      t = SSL_exit(o_35);
      t = (ATerm) ATinsert(ATempty, term_e_15);
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      {
        ATerm v_35 = NULL,w_35 = NULL;
        t = term_d_15;
        v_35 = t;
        t = (ATerm) ATinsert(ATempty, term_h_15);
        w_35 = t;
        t = SSL_printnl(v_35, w_35);
        t = (ATerm) ATinsert(ATempty, term_h_15);
      }
    }
  return(t);
}
static ATerm o_36 (ATerm h_36, ATerm t)
{
  t = SSL_fclose(h_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  m_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_36 = ATgetArgument(t, 0);
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_36);
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            t = o_36(m_36, t);
          }
      }
    }
  else
    {
      t = o_36(m_36, t);
    }
  return(t);
}
static ATerm x_6 (ATerm r_17, ATerm t)
{
  t = SSL_read_term_from_stream(r_17);
  return(t);
}
static ATerm y_6 (ATerm n_31, ATerm o_31, ATerm t)
{
  t = SSL_strcat(n_31, o_31);
  return(t);
}
static ATerm z_6 (ATerm w_32, ATerm x_32, ATerm t)
{
  ATerm p_36 = NULL;
  t = SSL_fopen(w_32, x_32);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_stdin_stream();
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_stdout_stream();
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_36 = NULL;
  t = SSL_stderr_stream();
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_36);
  return(t);
}
static ATerm m_38 (ATerm f_37, ATerm t)
{
  ATerm g_37 = NULL;
  t = SSL_explode_term(f_37);
  if(match_cons(t, sym__2))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_15 = ATgetArgument(t, 1);
        if(((ATgetType(n_15) == AT_LIST) && !(ATisEmpty(n_15))))
          {
            g_37 = ATgetFirst((ATermList) n_15);
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
  t = g_37;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_37;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_37;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_37;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_38 (ATerm k_37, ATerm l_37, ATerm m_37, ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,u_37 = NULL,l_7 = NULL;
  t = SSLgetAnnotations(m_37);
  p_37 = t;
  t = k_37;
  if(match_cons(t, sym_Path_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_37, l_37);
  l_7 = t;
  t = SSLsetAnnotations(l_7, p_37);
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(n_37, o_37, t);
  return(t);
}
static ATerm o_38 (ATerm w_37, ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,e_38 = NULL,q_7 = NULL;
  t = SSLgetAnnotations(y_37);
  b_38 = t;
  t = SSL_is_string(w_37);
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_38, x_37);
  q_7 = t;
  t = SSLsetAnnotations(q_7, b_38);
  if(match_cons(t, sym__2))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(z_37, a_38, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm h_38 = NULL,j_38 = NULL,k_38 = NULL;
  h_38 = t;
  if(match_cons(t, sym__2))
    {
      j_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_38(h_38, t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm r_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_38(j_38, k_38, h_38, t);
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = r_15;
                  t = o_38(j_38, k_38, h_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_38(h_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,c_39 = NULL;
  c_39 = t;
  {
    ATerm u_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_39, term_y_15);
        t = a_7(t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = u_15;
        {
          ATerm b_19 = NULL,k_19 = NULL;
          t = term_z_15;
          k_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_15, c_39);
          t = y_6(k_19, c_39, t);
          b_19 = t;
          t = SSL_perror(b_19);
          _fail(t);
        }
      }
  }
  r_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(s_38, t);
  q_38 = t;
  t = r_38;
  t = fclose_0_0(t);
  t = q_38;
  return(t);
}
ATerm debug_1_0 (ATerm h_77 (ATerm), ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  i_39 = t;
  t = h_77(t);
  j_39 = t;
  t = term_d_15;
  k_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_39), j_39);
  l_39 = t;
  t = SSL_printnl(k_39, l_39);
  t = i_39;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm p_39 = NULL,s_39 = NULL,r_19 = NULL,s_19 = NULL;
  t = if_verbose1_1_0(n_3, t);
  t = ReadFromFile_0_0(t);
  s_39 = t;
  t = SSL_explode_term(s_39);
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      {
        ATerm b_16 = ATgetArgument(t, 1);
        if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
          {
            r_19 = ATgetFirst((ATermList) b_16);
            {
              ATerm c_16 = (ATerm) ATgetNext((ATermList) b_16);
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
  t = s_19;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = r_19;
  if(match_cons(t, sym_PP_Table_1))
    {
      p_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(p_39, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm m_39 = NULL,o_39 = NULL;
  m_39 = t;
  t = term_i_14;
  o_39 = t;
  t = SSL_table_create(o_39);
  t = m_39;
  t = map_1_0(m_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_78 (ATerm), ATerm t)
{
  ATerm t_39 = NULL;
  static ATerm p_3 (ATerm t)
  {
    t = e_78(t);
    if(((t_39 != NULL) && (t_39 != t)))
      _fail(t);
    else
      t_39 = t;
    return(t);
  }
  t = fetch_1_0(p_3, t);
  t = not_null(t_39);
  return(t);
}
ATerm option_value_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t)
{
  ATerm e_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(u_94, t);
      LocalPopChoice(g_16);
    }
  else
    {
      t = e_16;
      t = v_94(t);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,z_41 = NULL;
  t = term_d_15;
  w_41 = t;
  t = (ATerm) ATinsert(ATempty, term_h_16);
  z_41 = t;
  t = SSL_printnl(w_41, z_41);
  t = term_g_15;
  v_41 = t;
  t = SSL_exit(v_41);
  t = (ATerm) ATinsert(ATempty, term_h_16);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_42 = NULL;
  if(match_cons(t, sym__2))
    {
      f_42 = ATgetArgument(t, 0);
      if((f_42 != ATgetArgument(t, 1)))
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
  ATerm h_42 = NULL,i_42 = NULL,l_42 = NULL,m_42 = NULL;
  h_42 = t;
  t = term_v_12;
  m_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, h_42);
  t = f_7(m_42, h_42, t);
  l_42 = t;
  t = SSL_explode_term(l_42);
  if(match_cons(t, sym__2))
    {
      ATerm i_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_16 = ATgetArgument(t, 1);
        if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
          {
            i_42 = ATgetFirst((ATermList) k_16);
            {
              ATerm o_16 = (ATerm) ATgetNext((ATermList) k_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_42;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  u_42 = t;
  t = term_u_12;
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, u_42);
  t = f_7(x_42, u_42, t);
  w_42 = t;
  t = SSL_explode_term(w_42);
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_16 = ATgetArgument(t, 1);
        if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
          {
            v_42 = ATgetFirst((ATermList) q_16);
            {
              ATerm u_16 = (ATerm) ATgetNext((ATermList) q_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_42;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,h_8 = NULL;
  j_43 = t;
  t = term_v_12;
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, j_43);
  t = f_7(k_43, j_43, t);
  p_43 = t;
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_43);
  l_43 = t;
  t = n_43;
  t = collect_om_2_0(g_4, h_4, t);
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_43, o_43);
  h_8 = t;
  t = SSLsetAnnotations(h_8, l_43);
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_43, h_43, i_43);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  b_44 = t;
  if(match_cons(t, sym_S_1))
    {
      c_44 = ATgetArgument(t, 0);
      {
        ATerm y_19 = NULL,c_8 = NULL;
        t = SSLgetAnnotations(b_44);
        y_19 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, c_44);
        c_8 = t;
        t = SSLsetAnnotations(c_8, y_19);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          c_44 = ATgetArgument(t, 0);
          {
            ATerm f_20 = NULL,d_8 = NULL;
            t = SSLgetAnnotations(b_44);
            f_20 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, c_44);
            d_8 = t;
            t = SSLsetAnnotations(d_8, f_20);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              c_44 = ATgetArgument(t, 0);
              {
                ATerm w_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, c_44);
        }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(i_4, h_44, i_44, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_44 = NULL;
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      if((j_44 != ATgetArgument(t, 1)))
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
  ATerm k_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,y_44 = NULL,z_44 = NULL,m_8 = NULL;
  s_44 = t;
  t = term_u_12;
  t_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, s_44);
  t = f_7(t_44, s_44, t);
  z_44 = t;
  if(match_cons(t, sym__2))
    {
      v_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_44);
  u_44 = t;
  t = w_44;
  t = collect_om_2_0(k_4, l_4, t);
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_44, y_44);
  m_8 = t;
  t = SSLsetAnnotations(m_8, u_44);
  if(match_cons(t, sym__2))
    {
      k_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_44, k_44, r_44);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL;
  o_45 = t;
  if(match_cons(t, sym_S_1))
    {
      p_45 = ATgetArgument(t, 0);
      {
        ATerm s_20 = NULL,k_8 = NULL;
        t = SSLgetAnnotations(o_45);
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, p_45);
        k_8 = t;
        t = SSLsetAnnotations(k_8, s_20);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm i_21 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(o_45);
            i_21 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, p_45);
            l_8 = t;
            t = SSLsetAnnotations(l_8, i_21);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              p_45 = ATgetArgument(t, 0);
              {
                ATerm x_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, p_45);
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_45 = NULL,y_45 = NULL;
  if(match_cons(t, sym__2))
    {
      v_45 = ATgetArgument(t, 0);
      y_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(n_4, v_45, y_45, t);
  return(t);
}
static ATerm n_4 (ATerm t)
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
static ATerm p_4 (ATerm t)
{
  ATerm c_46 = NULL;
  if(match_cons(t, sym__3))
    {
      c_46 = ATgetArgument(t, 0);
      {
        ATerm y_16 = ATgetArgument(t, 1);
      }
      {
        ATerm d_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = c_46;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_46 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
      {
        ATerm f_17 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_46;
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
  ATerm d_47 = NULL,e_47 = NULL;
  d_47 = t;
  t = term_v_12;
  e_47 = t;
  t = SSL_table_remove(e_47, d_47);
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, d_47);
  return(t);
}
static ATerm b_5 (ATerm t)
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
  ATerm y_47 = NULL,z_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_17 = ATgetArgument(t, 0);
      ATerm i_17 = ATgetArgument(t, 1);
      if(match_cons(i_17, sym__2))
        {
          y_47 = ATgetArgument(i_17, 0);
          z_47 = ATgetArgument(i_17, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, y_47, z_47);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_j_17;
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
  ATerm o_40 = NULL,q_40 = NULL,r_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,y_40 = NULL,z_40 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  static ATerm q_3 (ATerm t)
  {
    ATerm q_41 = NULL,r_41 = NULL,u_41 = NULL,y_7 = NULL;
    u_41 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        r_41 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_41);
    q_41 = t;
    t = r_41;
    if(((o_40 != NULL) && (o_40 != t)))
      _fail(t);
    else
      o_40 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, r_41);
    y_7 = t;
    t = SSLsetAnnotations(y_7, q_41);
    return(t);
  }
  t = option_value_2_0(q_3, s_3, t);
  t = (ATerm) ATinsert(ATempty, not_null(o_40));
  t = read_pp_tables_0_0(t);
  t = term_i_14;
  o_41 = t;
  t = term_v_12;
  p_41 = t;
  t = term_n_17;
  t = l_6(o_41, p_41, t);
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm a_42 = NULL,d_42 = NULL,e_42 = NULL,b_8 = NULL;
      e_42 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          d_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_42);
      a_42 = t;
      t = d_42;
      if(((q_40 != NULL) && (q_40 != t)))
        _fail(t);
      else
        q_40 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, d_42);
      b_8 = t;
      t = SSLsetAnnotations(b_8, a_42);
      return(t);
    }
    static ATerm v_3 (ATerm t)
    {
      t = term_o_17;
      if(((q_40 != NULL) && (q_40 != t)))
        _fail(t);
      else
        q_40 = t;
      return(t);
    }
    t = option_value_2_0(t_3, v_3, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(q_40));
  t = read_pp_tables_0_0(t);
  t = term_i_14;
  m_41 = t;
  t = term_u_12;
  n_41 = t;
  t = term_t_17;
  t = l_6(m_41, n_41, t);
  t = term_v_12;
  j_41 = t;
  t = SSL_table_keys(j_41);
  u_40 = t;
  t = term_u_12;
  i_41 = t;
  t = SSL_table_keys(i_41);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, r_40);
  t = k_6(w_3, u_40, r_40, t);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, r_40);
  t = diff_0_0(t);
  z_40 = t;
  t = map_1_0(x_3, t);
  {
    ATerm u_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
        ATerm x_17 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_17;
          }
        p_42 = t;
        t = term_d_15;
        q_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, p_42), term_z_17);
        r_42 = t;
        t = SSL_printnl(q_42, r_42);
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATempty, p_42), term_z_17));
        LocalPopChoice(w_17);
      }
    else
      {
        t = u_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, r_40, u_40);
  t = diff_0_0(t);
  g_41 = t;
  t = map_1_0(z_3, t);
  {
    ATerm a_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
        ATerm d_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_18;
          }
        a_43 = t;
        t = term_d_15;
        b_43 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_43), term_e_18);
        c_43 = t;
        t = SSL_printnl(b_43, c_43);
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATempty, a_43), term_e_18));
        LocalPopChoice(c_18);
      }
    else
      {
        t = a_18;
      }
  }
  t = v_40;
  t = map_1_0(b_4, t);
  w_40 = t;
  t = v_40;
  t = map_1_0(j_4, t);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_40, y_40);
  t = diff_0_0(t);
  h_41 = t;
  t = map_1_0(p_4, t);
  f_41 = t;
  t = h_41;
  t = map_1_0(r_4, t);
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_46 = NULL,i_46 = NULL,m_46 = NULL;
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
        h_46 = t;
        t = term_d_15;
        i_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, h_46), term_k_18);
        m_46 = t;
        t = SSL_printnl(i_46, m_46);
        t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATempty, h_46), term_k_18));
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
      }
  }
  {
    ATerm l_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(s_4, t);
        t = (ATerm) ATmakeAppl(sym__2, g_41, f_41);
        t = a_6(g_41, f_41, t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = l_18;
      }
  }
  {
    ATerm s_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(u_4, t);
        t = z_40;
        t = map_1_0(v_4, t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = s_18;
      }
  }
  {
    ATerm z_18 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_47 = NULL,p_47 = NULL;
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_47 = NULL;
            q_47 = t;
            t = term_r_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(b_5, t);
            t = q_47;
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm u_47 = NULL;
              u_47 = t;
              t = term_y_18;
              t = get_options_0_0(t);
              t = oncetd_1_0(c_5, t);
              t = u_47;
            }
          }
        t = term_v_12;
        t = table_getlist_0_0(t);
        t = map_1_0(d_5, t);
        t = desugar_0_0(t);
        o_47 = t;
        t = (ATerm) ATmakeAppl(sym_PP_Table_1, o_47);
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATmakeAppl(sym_PP_Table_1, o_47));
        t = u_5(f_5, p_47, t);
        t = output_1_0(_id, t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = z_18;
      }
  }
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_19 = t;
        if((PushChoice() == 0))
          {
            ATerm d_48 = NULL;
            d_48 = t;
            t = term_r_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(g_5, t);
            t = d_48;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = v_19;
          }
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_21 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, g_41), f_41);
              t = concat_0_0(t);
              {
                ATerm z_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_19;
                  }
              }
              t = term_g_15;
              v_21 = t;
              t = SSL_exit(v_21);
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
            }
        }
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  o_48 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  p_48 = t;
  t = term_d_15;
  r_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_20), p_48), term_a_20);
  s_48 = t;
  t = SSL_printnl(r_48, s_48);
  t = term_g_15;
  q_48 = t;
  t = SSL_exit(q_48);
  t = o_48;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  if(match_string(t, "-k"))
    {
      t = u_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_48;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  t = SSL_string_to_int(v_48);
  w_48 = t;
  t = term_c_20;
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_20, w_48);
  t = h_7(x_48, w_48, t);
  t = v_48;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_d_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, l_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm b_49 = NULL;
  b_49 = t;
  if(match_string(t, "-S"))
    {
      t = b_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_49;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  t = term_e_20;
  c_49 = t;
  t = term_g_20;
  d_49 = t;
  t = term_h_20;
  t = h_7(c_49, d_49, t);
  t = term_i_20;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  t = SSL_string_to_int(g_49);
  h_49 = t;
  t = term_e_20;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, h_49);
  t = h_7(i_49, h_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_49);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_p_20;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL;
  t = term_q_20;
  j_49 = t;
  t = term_r_10;
  k_49 = t;
  t = term_w_20;
  t = h_7(j_49, k_49, t);
  t = term_x_20;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_5, v_5, w_5, t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_5, z_5, c_6, t);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = Option_3_0(d_6, f_6, h_6, t);
          }
      }
    }
  return(t);
}
static ATerm h_7 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm l_49 = NULL;
  t = term_f_10;
  l_49 = t;
  t = SSL_table_put(l_49, n_42, o_42);
  t = (ATerm) ATmakeAppl(sym__3, term_f_10, n_42, o_42);
  return(t);
}
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL;
      t = term_r_10;
      t = i_0(t);
      q_49 = t;
      t = term_e_21;
      r_49 = t;
      t = term_f_21;
      s_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_f_21, q_49);
      t = b_7(r_49, s_49, q_49, t);
      _fail(t);
    }
  else
    {
      ATerm v_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_49 = ATgetFirst((ATermList) t);
          p_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_49;
      t = e_0(t);
      t = term_r_10;
      t = g_0(t);
      v_49 = t;
      t = (ATerm) ATinsert(CheckATermList(p_49), v_49);
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm x_49 = NULL;
  x_49 = t;
  if(match_string(t, "-o"))
    {
      t = x_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_49;
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL;
  y_49 = t;
  t = term_g_10;
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_10, y_49);
  t = h_7(z_49, y_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_49);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_6, o_6, p_6, t);
  return(t);
}
static ATerm b_7 (ATerm i_47, ATerm j_47, ATerm h_47, ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_47, j_47);
  {
    ATerm k_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_21 = ATgetArgument(t, 0);
            ATerm o_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_47, j_47);
        t = f_7(i_47, j_47, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATempty;
      }
  }
  c_50 = t;
  t = (ATerm) ATinsert(CheckATermList(c_50), h_47);
  d_50 = t;
  t = SSL_table_put(i_47, j_47, d_50);
  t = b_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
      t = term_r_10;
      t = n_0(t);
      o_50 = t;
      t = term_e_21;
      p_50 = t;
      t = term_f_21;
      q_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_f_21, o_50);
      t = b_7(p_50, q_50, o_50, t);
      _fail(t);
    }
  else
    {
      ATerm u_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_50 = ATgetFirst((ATermList) t);
          l_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_50 = ATgetFirst((ATermList) t);
          n_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_50;
      t = k_0(t);
      t = m_50;
      t = l_0(t);
      u_50 = t;
      t = (ATerm) ATinsert(CheckATermList(n_50), u_50);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_10;
  t = whoami_0_0(t);
  v_50 = t;
  t = term_d_15;
  x_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_21), v_50);
  y_50 = t;
  t = SSL_printnl(x_50, y_50);
  t = term_g_15;
  w_50 = t;
  t = SSL_exit(w_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL;
  t = term_f_10;
  z_50 = t;
  t = term_r_21;
  a_51 = t;
  t = term_s_21;
  t = f_7(z_50, a_51, t);
  return(t);
}
static ATerm c_7 (ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_35, r_35);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      t = SSL_addr(q_35, r_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_84 (ATerm), ATerm k_84 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_51;
      t = j_84(t);
    }
  else
    {
      ATerm h_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_51 = ATgetFirst((ATermList) t);
          e_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_51;
      t = foldr_2_0(j_84, k_84, t);
      h_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_51, h_51);
      t = k_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_g_20;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(j_22, l_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_51 = NULL,a_22 = NULL,b_22 = NULL;
  t = times_0_0(t);
  b_22 = t;
  t = SSL_explode_term(b_22);
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_22;
  t = foldr_2_0(r_6, e_7, t);
  k_51 = t;
  t = SSL_TicksToSeconds(k_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  if(match_cons(t, sym__2))
    {
      w_51 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_51;
        if((w_51 != t))
          {
            _fail(t);
          }
        t = v_51;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = (ATerm) ATmakeAppl(sym__2, w_51, x_51);
        {
          ATerm d_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_51, x_51);
              LocalPopChoice(h_22);
            }
          else
            {
              t = d_22;
              t = SSL_gtr(w_51, x_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_51, x_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm c_52 = NULL;
  c_52 = t;
  {
    ATerm i_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
        t = term_f_10;
        j_52 = t;
        t = term_e_20;
        k_52 = t;
        t = term_m_22;
        t = f_7(j_52, k_52, t);
        i_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_52, term_g_15);
        t = geq_0_0(t);
        t = c_52;
        t = a_93(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = i_22;
        t = c_52;
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,p_52 = NULL,q_52 = NULL;
  t = run_time_0_0(t);
  m_52 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  n_52 = t;
  t = term_d_15;
  p_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_22), m_52), term_n_22), n_52);
  q_52 = t;
  t = SSL_printnl(p_52, q_52);
  t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_22), m_52), term_n_22), n_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_20;
  r_52 = t;
  t = SSL_exit(r_52);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL;
  c_53 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_53;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_53 = ATgetArgument(t, 0);
          {
            ATerm c_24 = NULL,h_9 = NULL;
            t = SSLgetAnnotations(c_53);
            c_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_53);
            h_9 = t;
            t = SSLsetAnnotations(h_9, c_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_53;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm p_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_52 = NULL,v_52 = NULL;
      t = term_f_10;
      u_52 = t;
      t = term_s_22;
      v_52 = t;
      t = term_v_22;
      t = f_7(u_52, v_52, t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = p_22;
      t = fetch_1_0(i_7, t);
    }
  t = q_95(t);
  return(t);
}
ATerm map_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  static ATerm k_54 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,j_54 = NULL;
    e_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_54;
      }
    else
      {
        ATerm q_24 = NULL,u_24 = NULL,v_24 = NULL,j_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_54 = ATgetFirst((ATermList) t);
            j_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_54);
        q_24 = t;
        t = f_54;
        t = s_77(t);
        u_24 = t;
        t = j_54;
        t = k_54(t);
        v_24 = t;
        t = (ATerm) ATinsert(CheckATermList(v_24), u_24);
        j_9 = t;
        t = SSLsetAnnotations(j_9, q_24);
      }
    return(t);
  }
  t = k_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_54 = ATgetFirst((ATermList) t);
      o_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_54 = NULL,t_54 = NULL;
        static ATerm j_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_54)), not_null(t_54));
          return(t);
        }
        t = o_54;
        t = d_0(t);
        if(((s_54 != NULL) && (s_54 != t)))
          _fail(t);
        else
          s_54 = t;
        t = n_54;
        t = c_0(t);
        if(((t_54 != NULL) && (t_54 != t)))
          _fail(t);
        else
          t_54 = t;
        t = o_54;
        t = reverse_acc_2_0(c_0, j_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_10;
      t = d_0(t);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,r_9 = NULL;
  d_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_55);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_55);
  r_9 = t;
  t = SSLsetAnnotations(r_9, b_55);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm f_55 = NULL;
  f_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_55), term_w_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL;
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_54 = NULL,y_54 = NULL;
      t = term_f_10;
      x_54 = t;
      t = term_r_21;
      y_54 = t;
      t = term_s_21;
      t = f_7(x_54, y_54, t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      t = fetch_1_0(k_7, t);
    }
  t = term_b_23;
  t = echo_0_0(t);
  t = term_e_21;
  v_54 = t;
  t = term_f_21;
  w_54 = t;
  t = term_c_23;
  t = f_7(v_54, w_54, t);
  t = reverse_acc_2_0(_id, n_7, t);
  t = map_1_0(o_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  static ATerm c_56 (ATerm t)
  {
    ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
    z_55 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_56 = ATgetFirst((ATermList) t);
        b_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_25 = NULL,r_25 = NULL,v_10 = NULL;
          t = SSLgetAnnotations(z_55);
          l_25 = t;
          t = a_56;
          t = c_78(t);
          r_25 = t;
          t = (ATerm) ATinsert(CheckATermList(b_56), r_25);
          v_10 = t;
          t = SSLsetAnnotations(v_10, l_25);
          LocalPopChoice(e_23);
        }
      else
        {
          t = d_23;
          {
            ATerm f_26 = NULL,i_26 = NULL,z_10 = NULL;
            t = SSLgetAnnotations(z_55);
            f_26 = t;
            t = b_56;
            t = c_56(t);
            i_26 = t;
            t = (ATerm) ATinsert(CheckATermList(i_26), a_56);
            z_10 = t;
            t = SSLsetAnnotations(z_10, f_26);
          }
        }
    }
    return(t);
  }
  t = c_56(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_23 = ATgetFirst((ATermList) t);
                ATerm i_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_56;
          }
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATinsert(ATempty, g_56);
      }
  }
  h_56 = t;
  t = term_i_10;
  i_56 = t;
  t = SSL_printnl(i_56, h_56);
  t = g_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  t = term_f_10;
  m_56 = t;
  t = term_r_21;
  n_56 = t;
  t = term_s_21;
  t = f_7(m_56, n_56, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm f_7 (ATerm z_48, ATerm a_49, ATerm t)
{
  t = SSL_table_get(z_48, a_49);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL;
  t = term_m_23;
  o_56 = t;
  t = term_r_10;
  p_56 = t;
  t = term_n_23;
  t = h_7(o_56, p_56, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL;
  t = term_m_23;
  s_56 = t;
  t = term_r_10;
  t_56 = t;
  t = term_n_23;
  t = h_7(s_56, t_56, t);
  t = term_v_23;
  q_56 = t;
  t = term_r_10;
  r_56 = t;
  t = term_y_23;
  t = h_7(q_56, r_56, t);
  t = term_z_23;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_7, r_7, s_7, t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      t = Option_3_0(t_7, u_7, x_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_54 (ATerm), ATerm a_55 (ATerm), ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,d_11 = NULL;
  z_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_56 = ATgetFirst((ATermList) t);
      w_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_56);
  u_56 = t;
  t = v_56;
  t = z_54(t);
  x_56 = t;
  t = w_56;
  t = a_55(t);
  y_56 = t;
  t = (ATerm) ATinsert(CheckATermList(y_56), x_56);
  d_11 = t;
  t = SSLsetAnnotations(d_11, u_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,j_57 = NULL,k_57 = NULL,i_11 = NULL;
  e_57 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_24;
        t = t_97(t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
      }
  }
  t = e_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_57 = ATgetFirst((ATermList) t);
      h_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_57);
  f_57 = t;
  t = term_r_21;
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_21, g_57);
  t = h_7(k_57, g_57, t);
  t = h_57;
  {
    static ATerm u_57 (ATerm t)
    {
      ATerm i_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_57 = NULL;
              n_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_57;
              LocalPopChoice(p_24);
            }
          else
            {
              t = n_24;
              t = t_97(t);
              t = Cons_2_0(_id, u_57, t);
            }
          LocalPopChoice(m_24);
        }
      else
        {
          t = i_24;
          {
            ATerm q_57 = NULL,r_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_57 = ATgetFirst((ATermList) t);
                r_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_57), (ATerm) ATmakeAppl(sym_Undefined_1, q_57));
          }
        }
      return(t);
    }
    t = u_57(t);
  }
  j_57 = t;
  t = (ATerm) ATinsert(CheckATermList(j_57), (ATerm) ATmakeAppl(sym_Program_1, g_57));
  i_11 = t;
  t = SSLsetAnnotations(i_11, f_57);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  if(match_string(t, "--help"))
    {
      t = g_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_58;
        }
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  t = term_s_22;
  h_58 = t;
  t = term_r_10;
  i_58 = t;
  t = term_s_24;
  t = h_7(h_58, i_58, t);
  t = term_t_24;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL;
  b_58 = t;
  t = term_e_21;
  d_58 = t;
  t = term_f_21;
  e_58 = t;
  t = (ATerm) ATempty;
  f_58 = t;
  t = SSL_table_put(d_58, e_58, f_58);
  t = b_58;
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm x_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_97(t);
          LocalPopChoice(y_24);
        }
      else
        {
          t = x_24;
          {
            ATerm z_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_8, e_8, f_8, t);
                LocalPopChoice(a_25);
              }
            else
              {
                t = z_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_7, t);
  }
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_58 = NULL;
        t_58 = t;
        {
          ATerm f_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_26 = NULL;
              t = t_58;
              {
                ATerm i_25 = t;
                int p_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_27 = NULL,e_27 = NULL;
                    t = term_f_10;
                    d_27 = t;
                    t = term_s_22;
                    e_27 = t;
                    t = term_v_22;
                    t = f_7(d_27, e_27, t);
                    LocalPopChoice(p_25);
                  }
                else
                  {
                    t = i_25;
                    t = fetch_1_0(g_8, t);
                  }
              }
              t = t_58;
              t = default_system_usage_0_0(t);
              t = term_g_20;
              z_26 = t;
              t = SSL_exit(z_26);
              LocalPopChoice(h_25);
            }
          else
            {
              t = f_25;
              {
                ATerm m_27 = NULL,x_27 = NULL,y_27 = NULL;
                t = term_f_10;
                x_27 = t;
                t = term_m_23;
                y_27 = t;
                t = term_q_25;
                t = f_7(x_27, y_27, t);
                t = t_58;
                t = default_system_about_0_0(t);
                t = term_g_20;
                m_27 = t;
                t = SSL_exit(m_27);
              }
            }
        }
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
              static ATerm i_8 (ATerm t)
              {
                ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,r_11 = NULL;
                z_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_58);
                x_58 = t;
                t = y_58;
                if(((z_57 != NULL) && (z_57 != t)))
                  _fail(t);
                else
                  z_57 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_58);
                r_11 = t;
                t = SSLsetAnnotations(r_11, x_58);
                return(t);
              }
              t = fetch_1_0(i_8, t);
              t = term_d_15;
              v_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), term_u_25);
              w_58 = t;
              t = SSL_printnl(v_58, w_58);
              t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_57)), term_u_25));
              t = default_system_usage_0_0(t);
              t = term_g_15;
              u_58 = t;
              t = SSL_exit(u_58);
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
            }
        }
      }
  }
  a_58 = t;
  t = term_e_21;
  c_58 = t;
  t = SSL_table_destroy(c_58);
  t = a_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  t = parse_options_1_0(s_95, t);
  e_59 = t;
  t = term_o_9;
  h_59 = t;
  t = SSL_table_create(h_59);
  t = term_o_9;
  f_59 = t;
  t = term_p_9;
  g_59 = t;
  t = SSL_table_put(f_59, g_59, e_59);
  t = e_59;
  t = u_95(t);
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_95, t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = x_25;
        {
          ATerm a_26 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_95(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_26);
            }
          else
            {
              t = a_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_8, t_8, u_8, t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(v_8, w_8, x_8, t);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm k_26 = t;
              int l_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_8, z_8, a_9, t);
                  LocalPopChoice(l_26);
                }
              else
                {
                  t = k_26;
                  {
                    ATerm m_26 = t;
                    int n_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(b_9, c_9, e_9, t);
                        LocalPopChoice(n_26);
                      }
                    else
                      {
                        t = m_26;
                        {
                          ATerm q_26 = t;
                          int r_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(f_9, g_9, i_9, t);
                              LocalPopChoice(r_26);
                            }
                          else
                            {
                              t = q_26;
                              {
                                ATerm s_26 = t;
                                int t_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(t_26);
                                  }
                                else
                                  {
                                    t = s_26;
                                    {
                                      ATerm u_26 = t;
                                      int v_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(k_9, m_9, n_9, t);
                                          LocalPopChoice(v_26);
                                        }
                                      else
                                        {
                                          t = u_26;
                                          {
                                            ATerm w_26 = t;
                                            int x_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(x_26);
                                              }
                                            else
                                              {
                                                t = w_26;
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
static ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_a_27;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_r_18;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_y_18;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm j_59 = NULL;
  j_59 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, j_59);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm k_59 = NULL;
  k_59 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, k_59);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_n_27;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  t = term_l_10;
  l_59 = t;
  t = term_r_10;
  m_59 = t;
  t = term_o_27;
  t = h_7(l_59, m_59, t);
  t = term_p_27;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_8, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}

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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_b_26;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_s_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_m_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_r_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_i_19;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_p_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_w_10;
ATerm term_o_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
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
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_n_12);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_m_12);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_b_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_o_10);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_d_21);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_o_10);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_i_24, term_o_10);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_m_22, term_o_10);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_o_10);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_71 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm u_5 (ATerm m_32, ATerm n_32, ATerm t);
static ATerm v_5 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm x_5 (ATerm s_76 (ATerm), ATerm j_158, ATerm u_17, ATerm t);
static ATerm w_5 (ATerm k_17, ATerm l_17, ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm output_1_0 (ATerm y_94 (ATerm), ATerm t);
static ATerm y_5 (ATerm y_32, ATerm z_32, ATerm t);
static ATerm z_5 (ATerm a_101 (ATerm), ATerm s_53, ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm e_6 (ATerm u_15, ATerm v_15, ATerm t);
static ATerm u_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm f_6 (ATerm b_81 (ATerm), ATerm j_23, ATerm i_23, ATerm t);
ATerm at_end_1_0 (ATerm s_77 (ATerm), ATerm t);
static ATerm n_17 (ATerm w_16, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm k_6 (ATerm f_605, ATerm k_605, ATerm r_51, ATerm t);
ATerm while_not_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm o_22 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t);
static ATerm d_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_6 (ATerm g_81 (ATerm), ATerm l_23, ATerm k_23, ATerm t);
ATerm foldr_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm collect_om_2_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t);
static ATerm n_6 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm p_23, ATerm o_23, ATerm t);
static ATerm o_6 (ATerm z_80 (ATerm), ATerm h_23, ATerm g_23, ATerm t);
static ATerm p_6 (ATerm b_49, ATerm c_49, ATerm t);
static ATerm p_2 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm q_6 (ATerm s_52, ATerm t_52, ATerm t);
ATerm unescape_chars_1_0 (ATerm x_86 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm d_78 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm unquote_chars_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_70 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm y_6 (ATerm r_52, ATerm t);
static ATerm h_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm j_36 (ATerm c_36, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_7 (ATerm q_17, ATerm t);
static ATerm b_7 (ATerm o_32, ATerm p_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_38 (ATerm v_36, ATerm t);
static ATerm l_38 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm t);
static ATerm m_38 (ATerm q_37, ATerm u_37, ATerm v_37, ATerm t);
static ATerm c_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm n_77 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_7 (ATerm f_42, ATerm g_42, ATerm t);
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_7 (ATerm f_47, ATerm g_47, ATerm e_47, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_7 (ATerm i_35, ATerm j_35, ATerm t);
ATerm foldr_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_91 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm need_help_1_0 (ATerm p_94 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_77 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_7 (ATerm f_31, ATerm g_31, ATerm t);
ATerm debug_1_0 (ATerm q_76 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_77 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm i_7 (ATerm w_48, ATerm x_48, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_96 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm parse_options_1_0 (ATerm r_96 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
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
ATerm oncetd_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm w_0 = t;
    int z_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_71(t);
        LocalPopChoice(z_3);
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
  t = term_t_9;
  g_1 = t;
  t = term_u_9;
  i_1 = t;
  t = term_v_9;
  t = i_7(g_1, i_1, t);
  return(t);
}
static ATerm u_5 (ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm j_1 = NULL;
  t = SSL_fputc(m_32, n_32);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_1);
  return(t);
}
static ATerm v_5 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm k_1 = NULL;
  t = SSL_write_term_to_stream_text(o_17, p_17);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_1);
  return(t);
}
static ATerm x_5 (ATerm s_76 (ATerm), ATerm j_158, ATerm u_17, ATerm t)
{
  ATerm l_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_158, term_w_9);
  t = c_7(t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_1, u_17);
  t = s_76(t);
  t = fclose_0_0(t);
  t = u_17;
  return(t);
}
static ATerm w_5 (ATerm k_17, ATerm l_17, ATerm t)
{
  ATerm m_1 = NULL;
  t = SSL_write_term_to_stream_baf(k_17, l_17);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_1);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          p_1 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      q_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(p_1, q_1, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          v_1 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      w_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(v_1, w_1, t);
  s_1 = t;
  t = term_z_9;
  t_1 = t;
  t = s_1;
  if(match_cons(t, sym_Stream_1))
    {
      u_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, s_1);
  t = u_5(t_1, u_1, t);
  return(t);
}
ATerm output_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  t = y_94(t);
  o_1 = t;
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_10;
        t = get_config_0_0(t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        t = term_e_10;
      }
  }
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_10;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, n_1, o_1);
        LocalPopChoice(g_10);
        if(match_cons(t, sym__2))
          {
            ATerm i_10 = ATgetArgument(t, 0);
            ATerm j_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(b_0, n_1, o_1, t);
      }
    else
      {
        t = f_10;
        if(match_cons(t, sym__2))
          {
            ATerm l_10 = ATgetArgument(t, 0);
            ATerm n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(f_0, n_1, o_1, t);
      }
  }
  return(t);
}
static ATerm y_5 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_mkterm(y_32, z_32);
  return(t);
}
static ATerm z_5 (ATerm a_101 (ATerm), ATerm s_53, ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  t = term_o_10;
  t = a_101(t);
  x_1 = t;
  t = (ATerm) ATinsert(ATempty, s_53);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, (ATerm) ATinsert(ATempty, s_53));
  t = y_5(x_1, y_1, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL,k_2 = NULL,m_2 = NULL,n_2 = NULL,v_2 = NULL,z_0 = NULL;
      ATerm s_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_2 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_10 = ATgetFirst((ATermList) t);
              if(((ATgetType(u_10) != AT_INT) || (ATgetInt((ATermInt) u_10) != 34)))
                _fail(t);
              w_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_2), term_e_11), term_w_10);
          LocalPopChoice(t_10);
        }
      else
        {
          t = s_10;
          {
            ATerm z_2 = NULL,c_3 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_2 = ATgetFirst((ATermList) t);
                c_3 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_2;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_3), term_w_10), term_w_10);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_3), term_h_11), term_w_10);
              }
          }
        }
      v_2 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_2 = ATgetFirst((ATermList) t);
          m_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_2);
      i_2 = t;
      t = m_2;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      n_2 = t;
      t = (ATerm) ATinsert(CheckATermList(n_2), k_2);
      z_0 = t;
      t = SSLsetAnnotations(z_0, i_2);
      LocalPopChoice(r_10);
    }
  else
    {
      t = p_10;
      {
        ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
        x_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_3 = ATgetFirst((ATermList) t);
            w_3 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm h_0 = NULL,p_0 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(x_3);
              h_0 = t;
              t = w_3;
              t = escape_chars_0_0(t);
              p_0 = t;
              t = (ATerm) ATinsert(CheckATermList(p_0), v_3);
              a_1 = t;
              t = SSLsetAnnotations(a_1, h_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_3;
          }
      }
    }
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm e_9 = NULL,k_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Arg_1))
    {
      m_9 = ATgetArgument(t, 0);
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 = NULL,g_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(o_9);
            e_2 = t;
            t = SSL_int_to_string(m_9);
            g_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, g_2);
            d_1 = t;
            t = SSLsetAnnotations(d_1, e_2);
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = o_9;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          m_9 = ATgetArgument(t, 0);
          e_9 = ATgetArgument(t, 1);
          {
            ATerm o_11 = t;
            int p_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_2 = NULL,u_2 = NULL,y_2 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(o_9);
                r_2 = t;
                t = SSL_int_to_string(m_9);
                u_2 = t;
                t = SSL_int_to_string(e_9);
                y_2 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, u_2, y_2);
                e_1 = t;
                t = SSLsetAnnotations(e_1, r_2);
                LocalPopChoice(p_11);
              }
            else
              {
                t = o_11;
                t = o_9;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              m_9 = ATgetArgument(t, 0);
              e_9 = ATgetArgument(t, 1);
              {
                ATerm t_11 = t;
                int w_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_3 = NULL,h_1 = NULL;
                    t = SSLgetAnnotations(o_9);
                    s_3 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, m_9, e_9);
                    h_1 = t;
                    t = SSLsetAnnotations(h_1, s_3);
                    LocalPopChoice(w_11);
                  }
                else
                  {
                    t = t_11;
                    t = o_9;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  m_9 = ATgetArgument(t, 0);
                  {
                    ATerm b_12 = t;
                    int e_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_4 = NULL,j_4 = NULL,r_1 = NULL,u_4 = NULL,v_4 = NULL,z_4 = NULL,o_4 = NULL;
                        t = SSLgetAnnotations(o_9);
                        h_4 = t;
                        t = SSL_explode_string(m_9);
                        t = escape_chars_0_0(t);
                        o_4 = t;
                        t = SSL_implode_string(o_4);
                        v_4 = t;
                        t = SSL_explode_string(v_4);
                        z_4 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_4), term_e_11), (ATerm) ATinsert(ATempty, term_e_11));
                        t = conc_0_0(t);
                        u_4 = t;
                        t = SSL_implode_string(u_4);
                        j_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, j_4);
                        r_1 = t;
                        t = SSLsetAnnotations(r_1, h_4);
                        LocalPopChoice(e_12);
                      }
                    else
                      {
                        t = b_12;
                        t = o_9;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      m_9 = ATgetArgument(t, 0);
                      e_9 = ATgetArgument(t, 1);
                      {
                        ATerm f_12 = t;
                        int g_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_5 = NULL,s_5 = NULL,z_1 = NULL;
                            t = SSLgetAnnotations(o_9);
                            o_5 = t;
                            t = SSL_int_to_string(m_9);
                            s_5 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, s_5, e_9);
                            z_1 = t;
                            t = SSLsetAnnotations(z_1, o_5);
                            LocalPopChoice(g_12);
                          }
                        else
                          {
                            t = f_12;
                            t = o_9;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          m_9 = ATgetArgument(t, 0);
                          t = m_9;
                          if(match_cons(t, sym_Path_2))
                            {
                              n_9 = ATgetArgument(t, 0);
                              k_9 = ATgetArgument(t, 1);
                              {
                                ATerm h_12 = t;
                                int i_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_6 = NULL,q_7 = NULL;
                                    t = (ATerm) ATinsert(ATinsert(ATempty, n_9), term_j_12);
                                    q_7 = t;
                                    t = SSL_concat_strings(q_7);
                                    u_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Path_2, u_6, k_9);
                                    LocalPopChoice(i_12);
                                  }
                                else
                                  {
                                    t = h_12;
                                    t = o_9;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Path1_1))
                                {
                                  n_9 = ATgetArgument(t, 0);
                                  {
                                    ATerm k_12 = t;
                                    int l_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm z_7 = NULL,a_8 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, n_9), term_j_12);
                                        a_8 = t;
                                        t = SSL_concat_strings(a_8);
                                        z_7 = t;
                                        t = (ATerm) ATmakeAppl(sym_Path1_1, z_7);
                                        LocalPopChoice(l_12);
                                      }
                                    else
                                      {
                                        t = k_12;
                                        t = o_9;
                                      }
                                  }
                                }
                              else
                                {
                                  t = o_9;
                                }
                            }
                        }
                      else
                        {
                          t = o_9;
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
  ATerm x_10 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL;
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), y_10);
    t = i_7(not_null(x_10), y_10, t);
    z_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_10, z_10);
    return(t);
  }
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  t = SSL_table_keys(x_10);
  t = map_1_0(m_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL;
  a_11 = t;
  t = term_m_12;
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, a_11);
  t = i_7(f_11, a_11, t);
  c_11 = t;
  t = term_n_12;
  d_11 = t;
  t = SSL_table_put(d_11, a_11, c_11);
  t = (ATerm) ATmakeAppl(sym__3, term_n_12, a_11, c_11);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm g_11 = NULL,i_11 = NULL,j_11 = NULL,n_11 = NULL,s_11 = NULL,v_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,c_12 = NULL,d_12 = NULL,n_3 = NULL;
  g_11 = t;
  t = term_n_12;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, g_11);
  t = i_7(x_11, g_11, t);
  d_12 = t;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, z_11), a_12);
  n_3 = t;
  t = SSLsetAnnotations(n_3, y_11);
  c_12 = t;
  t = term_n_12;
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, g_11);
  v_11 = t;
  t = SSL_table_put(s_11, v_11, c_12);
  t = term_m_12;
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, g_11);
  t = i_7(n_11, g_11, t);
  i_11 = t;
  t = term_n_12;
  j_11 = t;
  t = SSL_table_put(j_11, g_11, i_11);
  t = (ATerm) ATmakeAppl(sym__3, term_n_12, g_11, i_11);
  return(t);
}
static ATerm e_6 (ATerm u_15, ATerm v_15, ATerm t)
{
  t = u_15;
  t = map_1_0(r_0, t);
  t = v_15;
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      s_8 = ATgetArgument(t, 0);
      t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(s_8);
  u_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_8), term_p_12), u_8), term_o_12);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,z_12 = NULL;
  v_12 = t;
  if(match_cons(t, sym_Path1_1))
    {
      w_12 = ATgetArgument(t, 0);
      t = w_12;
    }
  else
    {
      ATerm n_8 = NULL,r_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          w_12 = ATgetArgument(t, 0);
          z_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_12;
      t = map_1_0(u_0, t);
      t = concat_0_0(t);
      n_8 = t;
      t = (ATerm) ATinsert(CheckATermList(n_8), w_12);
      r_8 = t;
      t = SSL_concat_strings(r_8);
    }
  return(t);
}
static ATerm f_6 (ATerm b_81 (ATerm), ATerm j_23, ATerm i_23, ATerm t)
{
  static ATerm k_14 (ATerm t)
  {
    ATerm a_14 = NULL,e_14 = NULL,h_14 = NULL;
    a_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_14;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_14 = ATgetFirst((ATermList) t);
            h_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_14;
              {
                static ATerm v_0 (ATerm t)
                {
                  t = i_23;
                  return(t);
                }
                t = n_6(b_81, v_0, e_14, h_14, t);
              }
              t = k_14(t);
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              {
                ATerm h_9 = NULL,l_9 = NULL,q_3 = NULL;
                t = SSLgetAnnotations(a_14);
                h_9 = t;
                t = h_14;
                t = k_14(t);
                l_9 = t;
                t = (ATerm) ATinsert(CheckATermList(l_9), e_14);
                q_3 = t;
                t = SSLsetAnnotations(q_3, h_9);
              }
            }
        }
      }
    return(t);
  }
  t = j_23;
  t = k_14(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  static ATerm s_16 (ATerm t)
  {
    ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
    r_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_16 = ATgetFirst((ATermList) t);
        q_16 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_10 = NULL,k_10 = NULL,t_3 = NULL;
          t = SSLgetAnnotations(r_16);
          c_10 = t;
          t = q_16;
          t = s_16(t);
          k_10 = t;
          t = (ATerm) ATinsert(CheckATermList(k_10), p_16);
          t_3 = t;
          t = SSLsetAnnotations(t_3, c_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_16;
        t = s_77(t);
      }
    return(t);
  }
  t = s_16(t);
  return(t);
}
static ATerm n_17 (ATerm w_16, ATerm t)
{
  ATerm x_16 = NULL;
  t = SSL_explode_term(w_16);
  if(match_cons(t, sym__2))
    {
      ATerm t_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_16;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_16 = NULL,h_17 = NULL,i_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym__2))
    {
      z_16 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      {
        ATerm u_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = h_17;
              return(t);
            }
            t = z_16;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(y_12);
          }
        else
          {
            t = u_12;
            t = n_17(i_17, t);
          }
      }
    }
  else
    {
      t = n_17(i_17, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm t)
{
  static ATerm b_18 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_79(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        {
          ATerm r_17 = NULL,s_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,a_18 = NULL,l_4 = NULL;
          t = g_79(t);
          a_18 = t;
          if(match_cons(t, sym__2))
            {
              s_17 = ATgetArgument(t, 0);
              v_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_18);
          r_17 = t;
          t = s_17;
          t = i_79(t);
          w_17 = t;
          t = v_17;
          t = b_18(t);
          x_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_17, x_17);
          l_4 = t;
          t = SSLsetAnnotations(l_4, r_17);
          t = h_79(t);
        }
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      if(((ATgetType(c_13) != AT_LIST) || !(ATisEmpty(c_13))))
        _fail(t);
      {
        ATerm d_13 = ATgetArgument(t, 1);
        if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
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
  ATerm w_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
        {
          w_18 = ATgetFirst((ATermList) e_13);
          z_18 = (ATerm) ATgetNext((ATermList) e_13);
        }
      else
        _fail(t);
      {
        ATerm f_13 = ATgetArgument(t, 1);
        if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
          {
            a_19 = ATgetFirst((ATermList) f_13);
            b_19 = (ATerm) ATgetNext((ATermList) f_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_18, a_19), (ATerm) ATmakeAppl(sym__2, z_18, b_19));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_19), c_19);
  return(t);
}
static ATerm k_6 (ATerm f_605, ATerm k_605, ATerm r_51, ATerm t)
{
  ATerm i_18 = NULL,k_18 = NULL,q_18 = NULL,u_18 = NULL;
  t = SSL_explode_term(k_605);
  if(match_cons(t, sym__2))
    {
      i_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_605);
  if(match_cons(t, sym__2))
    {
      if((i_18 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_18, q_18);
  t = genzip_4_0(y_0, b_1, c_1, _id, t);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, r_51);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t)
{
  static ATerm l_19 (ATerm t)
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_70(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = h_70(t);
        t = l_19(t);
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm for_3_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  t = j_70(t);
  t = while_not_2_0(k_70, l_70, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm x_19 = NULL;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_19);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,c_20 = NULL,e_20 = NULL,r_4 = NULL;
  e_20 = t;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_20);
  y_19 = t;
  t = c_20;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_19, c_20);
  r_4 = t;
  t = SSLsetAnnotations(r_4, y_19);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,v_21 = NULL;
  p_21 = t;
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_21 = ATgetFirst((ATermList) t);
      v_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_22(q_21, r_21, p_21, t);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_21), s_21), v_21);
          }
      }
    }
  else
    {
      t = o_22(q_21, r_21, p_21, t);
    }
  return(t);
}
static ATerm o_22 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm k_20 = NULL,q_20 = NULL,s_4 = NULL,w_20 = NULL,y_20 = NULL,a_21 = NULL,b_21 = NULL;
  t = SSLgetAnnotations(h_20);
  k_20 = t;
  t = g_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_20 = ATgetFirst((ATermList) t);
      b_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_20;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_21;
        if((y_20 != t))
          {
            _fail(t);
          }
        t = b_21;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = g_20;
        t = k_6(y_20, a_21, b_21, t);
      }
  }
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_20, q_20);
  s_4 = t;
  t = SSLsetAnnotations(s_4, k_20);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      if((n_22 != ATgetArgument(t, 1)))
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
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_2, b_2, c_2, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm a_22 = NULL,d_22 = NULL,f_22 = NULL;
        a_22 = t;
        if(match_cons(t, sym__2))
          {
            d_22 = ATgetArgument(t, 0);
            f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_22;
        t = f_6(d_2, d_22, f_22, t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm g_81 (ATerm), ATerm l_23, ATerm k_23, ATerm t)
{
  static ATerm e_23 (ATerm t)
  {
    ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
    z_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_23;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_23 = ATgetFirst((ATermList) t);
            b_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_22;
              {
                static ATerm f_2 (ATerm t)
                {
                  t = k_23;
                  return(t);
                }
                t = n_6(g_81, f_2, a_23, b_23, t);
              }
              t = e_23(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              {
                ATerm b_11 = NULL,k_11 = NULL,x_4 = NULL;
                t = SSLgetAnnotations(z_22);
                b_11 = t;
                t = b_23;
                t = e_23(t);
                k_11 = t;
                t = (ATerm) ATinsert(CheckATermList(k_11), a_23);
                x_4 = t;
                t = SSLsetAnnotations(x_4, b_11);
              }
            }
        }
      }
    return(t);
  }
  t = l_23;
  t = e_23(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,w_23 = NULL;
  t_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_23;
      t = k_83(t);
    }
  else
    {
      ATerm a_24 = NULL,b_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_23 = ATgetFirst((ATermList) t);
          w_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_23;
      t = m_83(t);
      a_24 = t;
      t = w_23;
      t = foldr_3_0(k_83, l_83, m_83, t);
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_24, b_24);
      t = l_83(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24 = NULL;
      t = l_82(t);
      f_24 = t;
      t = (ATerm) ATinsert(ATempty, f_24);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm q_11 = NULL,r_11 = NULL;
        static ATerm j_2 (ATerm t)
        {
          t = collect_om_2_0(l_82, m_82, t);
          return(t);
        }
        r_11 = t;
        t = SSL_explode_term(r_11);
        if(match_cons(t, sym__2))
          {
            ATerm t_13 = ATgetArgument(t, 0);
            q_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_11;
        t = foldr_3_0(h_2, m_82, j_2, t);
      }
    }
  return(t);
}
static ATerm n_6 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm p_23, ATerm o_23, ATerm t)
{
  t = k_81(t);
  {
    static ATerm l_2 (ATerm t)
    {
      ATerm h_24 = NULL;
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_23, h_24);
      t = j_81(t);
      return(t);
    }
    t = fetch_1_0(l_2, t);
  }
  t = o_23;
  return(t);
}
static ATerm o_6 (ATerm z_80 (ATerm), ATerm h_23, ATerm g_23, ATerm t)
{
  static ATerm m_25 (ATerm t)
  {
    static ATerm o_25 (ATerm p_24, ATerm t)
    {
      ATerm t_24 = NULL,w_24 = NULL,x_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,a_5 = NULL;
      t = p_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_24 = ATgetFirst((ATermList) t);
          w_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm o_2 (ATerm t)
        {
          t = g_23;
          return(t);
        }
        t = n_6(z_80, o_2, t_24, w_24, t);
      }
      t = p_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_24);
      x_24 = t;
      t = a_25;
      t = m_25(t);
      b_25 = t;
      t = (ATerm) ATinsert(CheckATermList(b_25), z_24);
      a_5 = t;
      t = SSLsetAnnotations(a_5, x_24);
      return(t);
    }
    ATerm c_25 = NULL,g_25 = NULL;
    c_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_13 = ATgetFirst((ATermList) t);
                g_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(v_13);
            {
              ATerm x_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_25(c_25, t);
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = x_13;
                  t = g_25;
                  t = m_25(t);
                }
            }
          }
        else
          {
            t = u_13;
            t = o_25(c_25, t);
          }
      }
    return(t);
  }
  t = h_23;
  t = m_25(t);
  return(t);
}
static ATerm p_6 (ATerm b_49, ATerm c_49, ATerm t)
{
  t = SSL_table_rename(b_49, c_49);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm k_26 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      k_26 = ATgetArgument(t, 0);
      {
        ATerm z_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_26;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      s_25 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, s_25);
    }
  else
    {
      ATerm j_26 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          s_25 = ATgetArgument(t, 0);
          u_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_25;
      t = map_1_0(p_2, t);
      j_26 = t;
      t = (ATerm) ATinsert(CheckATermList(j_26), s_25);
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
  t = term_b_14;
  return(t);
}
static ATerm q_6 (ATerm s_52, ATerm t_52, ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  t = s_52;
  t = mk_key_0_0(t);
  m_26 = t;
  t = term_c_14;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_52, t_52);
  o_26 = t;
  t = SSL_table_put(n_26, m_26, o_26);
  t = s_52;
  t = path_to_string_0_0(t);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_26, t_52);
  t = if_verbose1_1_0(q_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  static ATerm k_27 (ATerm t)
  {
    ATerm f_27 = NULL,g_27 = NULL,j_27 = NULL;
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_86(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = d_14;
      }
    j_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_27 = ATgetFirst((ATermList) t);
        g_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_12 = NULL,x_12 = NULL,d_5 = NULL;
          t = SSLgetAnnotations(j_27);
          q_12 = t;
          t = g_27;
          t = k_27(t);
          x_12 = t;
          t = (ATerm) ATinsert(CheckATermList(x_12), f_27);
          d_5 = t;
          t = SSLsetAnnotations(d_5, q_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_27;
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm at_last_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  static ATerm m_29 (ATerm t)
  {
    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
    j_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_29 = ATgetFirst((ATermList) t);
        l_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = NULL,f_5 = NULL;
          t = SSLgetAnnotations(j_29);
          m_13 = t;
          t = l_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(l_29), k_29);
          f_5 = t;
          t = SSLsetAnnotations(f_5, m_13);
          t = d_78(t);
          LocalPopChoice(j_14);
        }
      else
        {
          t = i_14;
          {
            ATerm f_14 = NULL,n_14 = NULL,g_5 = NULL;
            t = SSLgetAnnotations(j_29);
            f_14 = t;
            t = l_29;
            t = m_29(t);
            n_14 = t;
            t = (ATerm) ATinsert(CheckATermList(n_14), k_29);
            g_5 = t;
            t = SSLsetAnnotations(g_5, f_14);
          }
        }
    }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_29 = NULL,y_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_29 = ATgetFirst((ATermList) t);
      y_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_29;
    }
  else
    {
      t = y_29;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm u_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_14 = ATgetFirst((ATermList) t);
      u_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm j_86 (ATerm), ATerm k_86 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,q_30 = NULL;
  n_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_30 = ATgetFirst((ATermList) t);
      {
        ATerm m_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_30;
  t = j_86(t);
  t = n_30;
  t = last_0_0(t);
  t = k_86(t);
  t = n_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_14 = ATgetFirst((ATermList) t);
      o_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_30;
  t = at_last_1_0(t_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm v_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_16 = ATgetFirst((ATermList) t);
      a_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_16;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = a_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(c_17), term_e_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(c_17), term_w_10);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(c_17), term_z_9);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_17), term_p_14);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      n_34 = ATgetArgument(t, 0);
      {
        ATerm u_14 = NULL,w_14 = NULL,j_5 = NULL;
        t = SSLgetAnnotations(m_34);
        u_14 = t;
        t = SSL_string_to_int(n_34);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, w_14);
        j_5 = t;
        t = SSLsetAnnotations(j_5, u_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          n_34 = ATgetArgument(t, 0);
          o_34 = ATgetArgument(t, 1);
          {
            ATerm d_15 = NULL,g_15 = NULL,h_15 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(m_34);
            d_15 = t;
            t = SSL_string_to_int(n_34);
            g_15 = t;
            t = SSL_string_to_int(o_34);
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, g_15, h_15);
            l_5 = t;
            t = SSLsetAnnotations(l_5, d_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              n_34 = ATgetArgument(t, 0);
              o_34 = ATgetArgument(t, 1);
              {
                ATerm r_15 = NULL,m_5 = NULL;
                t = SSLgetAnnotations(m_34);
                r_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, n_34, o_34);
                m_5 = t;
                t = SSLsetAnnotations(m_5, r_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  n_34 = ATgetArgument(t, 0);
                  {
                    ATerm g_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,r_5 = NULL;
                    t = SSLgetAnnotations(m_34);
                    g_16 = t;
                    t = SSL_explode_string(n_34);
                    t = unquote_chars_2_0(x_2, a_3, t);
                    m_16 = t;
                    t = SSL_implode_string(m_16);
                    l_16 = t;
                    t = SSL_explode_string(l_16);
                    t = unescape_chars_1_0(b_3, t);
                    k_16 = t;
                    t = SSL_implode_string(k_16);
                    j_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, j_16);
                    r_5 = t;
                    t = SSLsetAnnotations(r_5, g_16);
                  }
                }
              else
                {
                  ATerm e_18 = NULL,h_18 = NULL,t_5 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      n_34 = ATgetArgument(t, 0);
                      o_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_34);
                  e_18 = t;
                  t = SSL_string_to_int(n_34);
                  h_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, h_18, o_34);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, e_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm p_70 (ATerm), ATerm t)
{
  static ATerm d_3 (ATerm t)
  {
    t = topdown_1_0(p_70, t);
    return(t);
  }
  t = p_70(t);
  t = SRTS_all(d_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  t = topdown_1_0(g_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      y_34 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(y_34, z_34, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
    }
  return(t);
}
static ATerm y_6 (ATerm r_52, ATerm t)
{
  t = r_52;
  t = reverse_acc_2_0(_id, e_3, t);
  t = map_1_0(f_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_35 = NULL,d_35 = NULL,g_35 = NULL;
      t = term_v_14;
      t = get_options_0_0(t);
      t = oncetd_1_0(h_3, t);
      t = term_x_14;
      d_35 = t;
      t = (ATerm) ATinsert(ATempty, term_y_14);
      g_35 = t;
      t = SSL_printnl(d_35, g_35);
      t = term_z_14;
      c_35 = t;
      t = SSL_exit(c_35);
      t = (ATerm) ATinsert(ATempty, term_y_14);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm k_35 = NULL,l_35 = NULL;
        t = term_x_14;
        k_35 = t;
        t = (ATerm) ATinsert(ATempty, term_a_15);
        l_35 = t;
        t = SSL_printnl(k_35, l_35);
        t = (ATerm) ATinsert(ATempty, term_a_15);
      }
    }
  return(t);
}
static ATerm j_36 (ATerm c_36, ATerm t)
{
  t = SSL_fclose(c_36);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL;
  h_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_36 = ATgetArgument(t, 0);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_36);
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            t = j_36(h_36, t);
          }
      }
    }
  else
    {
      t = j_36(h_36, t);
    }
  return(t);
}
static ATerm a_7 (ATerm q_17, ATerm t)
{
  t = SSL_read_term_from_stream(q_17);
  return(t);
}
static ATerm b_7 (ATerm o_32, ATerm p_32, ATerm t)
{
  ATerm k_36 = NULL;
  t = SSL_fopen(o_32, p_32);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  t = SSL_stdin_stream();
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_36 = NULL;
  t = SSL_stdout_stream();
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_36 = NULL;
  t = SSL_stderr_stream();
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_36);
  return(t);
}
static ATerm j_38 (ATerm v_36, ATerm t)
{
  ATerm x_36 = NULL;
  t = SSL_explode_term(v_36);
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_15 = ATgetArgument(t, 1);
        if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
          {
            x_36 = ATgetFirst((ATermList) f_15);
            {
              ATerm i_15 = (ATerm) ATgetNext((ATermList) f_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_38 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,l_37 = NULL,x_6 = NULL;
  t = SSLgetAnnotations(d_37);
  g_37 = t;
  t = b_37;
  if(match_cons(t, sym_Path_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_37, c_37);
  x_6 = t;
  t = SSLsetAnnotations(x_6, g_37);
  if(match_cons(t, sym__2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(e_37, f_37, t);
  return(t);
}
static ATerm m_38 (ATerm q_37, ATerm u_37, ATerm v_37, ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,c_38 = NULL,z_6 = NULL;
  t = SSLgetAnnotations(v_37);
  y_37 = t;
  t = SSL_is_string(q_37);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_38, u_37);
  z_6 = t;
  t = SSLsetAnnotations(z_6, y_37);
  if(match_cons(t, sym__2))
    {
      w_37 = ATgetArgument(t, 0);
      x_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(w_37, x_37, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  if(match_cons(t, sym__2))
    {
      h_38 = ATgetArgument(t, 0);
      i_38 = ATgetArgument(t, 1);
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_38(g_38, t);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            {
              ATerm l_15 = t;
              int m_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_38(h_38, i_38, g_38, t);
                  LocalPopChoice(m_15);
                }
              else
                {
                  t = l_15;
                  t = m_38(h_38, i_38, g_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_38(g_38, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_38 = NULL,q_38 = NULL,r_38 = NULL,a_39 = NULL;
  a_39 = t;
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_39, term_p_15);
        t = c_7(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          ATerm f_19 = NULL,g_19 = NULL;
          t = term_q_15;
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_15, a_39);
          t = h_7(g_19, a_39, t);
          f_19 = t;
          t = SSL_perror(f_19);
          _fail(t);
        }
      }
  }
  q_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(r_38, t);
  o_38 = t;
  t = q_38;
  t = fclose_0_0(t);
  t = o_38;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,j_19 = NULL,m_19 = NULL;
  t = if_verbose1_1_0(j_3, t);
  t = ReadFromFile_0_0(t);
  j_39 = t;
  t = SSL_explode_term(j_39);
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      {
        ATerm s_15 = ATgetArgument(t, 1);
        if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
          {
            j_19 = ATgetFirst((ATermList) s_15);
            {
              ATerm t_15 = (ATerm) ATgetNext((ATermList) s_15);
              if(((ATgetType(t_15) != AT_LIST) || !(ATisEmpty(t_15))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_19;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = j_19;
  if(match_cons(t, sym_PP_Table_1))
    {
      i_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(i_39, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  t = term_c_14;
  f_39 = t;
  t = SSL_table_create(f_39);
  t = e_39;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm k_39 = NULL;
  static ATerm l_3 (ATerm t)
  {
    t = n_77(t);
    if(((k_39 != NULL) && (k_39 != t)))
      _fail(t);
    else
      k_39 = t;
    return(t);
  }
  t = fetch_1_0(l_3, t);
  t = not_null(k_39);
  return(t);
}
ATerm option_value_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(t_93, t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = u_93(t);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  t = term_x_14;
  h_41 = t;
  t = (ATerm) ATinsert(ATempty, term_z_15);
  i_41 = t;
  t = SSL_printnl(h_41, i_41);
  t = term_z_14;
  g_41 = t;
  t = SSL_exit(g_41);
  t = (ATerm) ATinsert(ATempty, term_z_15);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm m_41 = NULL;
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      if((m_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL;
  n_41 = t;
  t = term_n_12;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, n_41);
  t = i_7(r_41, n_41, t);
  q_41 = t;
  t = SSL_explode_term(q_41);
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_16 = ATgetArgument(t, 1);
        if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
          {
            o_41 = ATgetFirst((ATermList) b_16);
            {
              ATerm c_16 = (ATerm) ATgetNext((ATermList) b_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_41;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm x_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  x_41 = t;
  t = term_m_12;
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, x_41);
  t = i_7(c_42, x_41, t);
  b_42 = t;
  t = SSL_explode_term(b_42);
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_16 = ATgetArgument(t, 1);
        if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
          {
            a_42 = ATgetFirst((ATermList) e_16);
            {
              ATerm f_16 = (ATerm) ATgetNext((ATermList) e_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_42;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,u_42 = NULL,v_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,f_43 = NULL,h_43 = NULL,o_7 = NULL;
  u_42 = t;
  t = term_n_12;
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, u_42);
  t = i_7(v_42, u_42, t);
  h_43 = t;
  if(match_cons(t, sym__2))
    {
      y_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_43);
  x_42 = t;
  t = z_42;
  t = collect_om_2_0(c_4, d_4, t);
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_42, f_43);
  o_7 = t;
  t = SSLsetAnnotations(o_7, x_42);
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_42, m_42, n_42);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  t_43 = t;
  if(match_cons(t, sym_S_1))
    {
      u_43 = ATgetArgument(t, 0);
      {
        ATerm s_19 = NULL,m_7 = NULL;
        t = SSLgetAnnotations(t_43);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, u_43);
        m_7 = t;
        t = SSLsetAnnotations(m_7, s_19);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          u_43 = ATgetArgument(t, 0);
          {
            ATerm d_20 = NULL,n_7 = NULL;
            t = SSLgetAnnotations(t_43);
            d_20 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, u_43);
            n_7 = t;
            t = SSLsetAnnotations(n_7, d_20);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              u_43 = ATgetArgument(t, 0);
              {
                ATerm h_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, u_43);
        }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  if(match_cons(t, sym__2))
    {
      x_43 = ATgetArgument(t, 0);
      y_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(e_4, x_43, y_43, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm b_44 = NULL;
  if(match_cons(t, sym__2))
    {
      b_44 = ATgetArgument(t, 0);
      if((b_44 != ATgetArgument(t, 1)))
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
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,g_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,p_44 = NULL,x_7 = NULL;
  e_44 = t;
  t = term_m_12;
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, e_44);
  t = i_7(g_44, e_44, t);
  p_44 = t;
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_44);
  i_44 = t;
  t = k_44;
  t = collect_om_2_0(g_4, i_4, t);
  l_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_44, l_44);
  x_7 = t;
  t = SSLsetAnnotations(x_7, i_44);
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_44, c_44, d_44);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL;
  o_45 = t;
  if(match_cons(t, sym_S_1))
    {
      p_45 = ATgetArgument(t, 0);
      {
        ATerm t_20 = NULL,p_7 = NULL;
        t = SSLgetAnnotations(o_45);
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, p_45);
        p_7 = t;
        t = SSLsetAnnotations(p_7, t_20);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm j_21 = NULL,u_7 = NULL;
            t = SSLgetAnnotations(o_45);
            j_21 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, p_45);
            u_7 = t;
            t = SSLsetAnnotations(u_7, j_21);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              p_45 = ATgetArgument(t, 0);
              {
                ATerm i_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, p_45);
        }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm u_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(k_4, u_45, x_45, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm y_45 = NULL;
  if(match_cons(t, sym__2))
    {
      y_45 = ATgetArgument(t, 0);
      if((y_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_45 = NULL;
  if(match_cons(t, sym__3))
    {
      z_45 = ATgetArgument(t, 0);
      {
        ATerm n_16 = ATgetArgument(t, 1);
      }
      {
        ATerm o_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = z_45;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm a_46 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
      {
        ATerm u_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = a_46;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  k_46 = t;
  t = term_n_12;
  l_46 = t;
  t = SSL_table_remove(l_46, k_46);
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, k_46);
  return(t);
}
static ATerm w_4 (ATerm t)
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
static ATerm b_5 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      ATerm d_17 = ATgetArgument(t, 1);
      if(match_cons(d_17, sym__2))
        {
          z_46 = ATgetArgument(d_17, 0);
          a_47 = ATgetArgument(d_17, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, z_46, a_47);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  static ATerm m_3 (ATerm t)
  {
    ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,j_7 = NULL;
    f_41 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        e_41 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_41);
    d_41 = t;
    t = e_41;
    if(((j_40 != NULL) && (j_40 != t)))
      _fail(t);
    else
      j_40 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, e_41);
    j_7 = t;
    t = SSLsetAnnotations(j_7, d_41);
    return(t);
  }
  t = option_value_2_0(m_3, o_3, t);
  t = (ATerm) ATinsert(ATempty, not_null(j_40));
  t = read_pp_tables_0_0(t);
  t = term_c_14;
  b_41 = t;
  t = term_n_12;
  c_41 = t;
  t = term_f_17;
  t = p_6(b_41, c_41, t);
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,l_7 = NULL;
      l_41 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          k_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_41);
      j_41 = t;
      t = k_41;
      if(((k_40 != NULL) && (k_40 != t)))
        _fail(t);
      else
        k_40 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, k_41);
      l_7 = t;
      t = SSLsetAnnotations(l_7, j_41);
      return(t);
    }
    static ATerm r_3 (ATerm t)
    {
      t = term_g_17;
      if(((k_40 != NULL) && (k_40 != t)))
        _fail(t);
      else
        k_40 = t;
      return(t);
    }
    t = option_value_2_0(p_3, r_3, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(k_40));
  t = read_pp_tables_0_0(t);
  t = term_c_14;
  x_40 = t;
  t = term_m_12;
  a_41 = t;
  t = term_j_17;
  t = p_6(x_40, a_41, t);
  t = term_n_12;
  w_40 = t;
  t = SSL_table_keys(w_40);
  n_40 = t;
  t = term_m_12;
  v_40 = t;
  t = SSL_table_keys(v_40);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_40, l_40);
  t = o_6(u_3, n_40, l_40, t);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_40, l_40);
  t = diff_0_0(t);
  r_40 = t;
  t = map_1_0(y_3, t);
  {
    ATerm m_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
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
        s_41 = t;
        t = term_x_14;
        t_41 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_41), term_z_17);
        u_41 = t;
        t = SSL_printnl(t_41, u_41);
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, s_41), term_z_17));
        LocalPopChoice(t_17);
      }
    else
      {
        t = m_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, l_40, n_40);
  t = diff_0_0(t);
  t_40 = t;
  t = map_1_0(a_4, t);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_42 = NULL,e_42 = NULL,i_42 = NULL;
        ATerm f_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_18;
          }
        d_42 = t;
        t = term_x_14;
        e_42 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_42), term_g_18);
        i_42 = t;
        t = SSL_printnl(e_42, i_42);
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, d_42), term_g_18));
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
      }
  }
  t = o_40;
  t = map_1_0(b_4, t);
  p_40 = t;
  t = o_40;
  t = map_1_0(f_4, t);
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_40, q_40);
  t = diff_0_0(t);
  u_40 = t;
  t = map_1_0(m_4, t);
  s_40 = t;
  t = u_40;
  t = map_1_0(n_4, t);
  {
    ATerm j_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
        ATerm m_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_18;
          }
        b_46 = t;
        t = term_x_14;
        c_46 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_46), term_n_18);
        d_46 = t;
        t = SSL_printnl(c_46, d_46);
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, b_46), term_n_18));
        LocalPopChoice(l_18);
      }
    else
      {
        t = j_18;
      }
  }
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(p_4, t);
        t = (ATerm) ATmakeAppl(sym__2, t_40, s_40);
        t = e_6(t_40, s_40, t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
      }
  }
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(q_4, t);
        t = r_40;
        t = map_1_0(t_4, t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
      }
  }
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL,u_46 = NULL;
        ATerm e_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_46 = NULL;
            v_46 = t;
            t = term_r_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(w_4, t);
            t = v_46;
            LocalPopChoice(h_19);
          }
        else
          {
            t = e_19;
            {
              ATerm x_46 = NULL;
              x_46 = t;
              t = term_v_18;
              t = get_options_0_0(t);
              t = oncetd_1_0(y_4, t);
              t = x_46;
            }
          }
        t = term_n_12;
        t = table_getlist_0_0(t);
        t = map_1_0(b_5, t);
        t = desugar_0_0(t);
        t_46 = t;
        t = (ATerm) ATmakeAppl(sym_PP_Table_1, t_46);
        u_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_19, (ATerm) ATmakeAppl(sym_PP_Table_1, t_46));
        t = z_5(c_5, u_46, t);
        t = output_1_0(_id, t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
      }
  }
  {
    ATerm k_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = t;
        if((PushChoice() == 0))
          {
            ATerm i_47 = NULL;
            i_47 = t;
            t = term_r_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(e_5, t);
            t = i_47;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_19;
          }
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_22 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, t_40), s_40);
              t = concat_0_0(t);
              {
                ATerm r_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_19;
                  }
              }
              t = term_z_14;
              b_22 = t;
              t = SSL_exit(b_22);
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
            }
        }
        LocalPopChoice(n_19);
      }
    else
      {
        t = k_19;
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL;
  r_47 = t;
  t = term_o_10;
  t = whoami_0_0(t);
  s_47 = t;
  t = term_x_14;
  u_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_19), s_47), term_t_19);
  v_47 = t;
  t = SSL_printnl(u_47, v_47);
  t = term_z_14;
  t_47 = t;
  t = SSL_exit(t_47);
  t = r_47;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  if(match_string(t, "-k"))
    {
      t = x_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_47;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
  y_47 = t;
  t = SSL_string_to_int(y_47);
  z_47 = t;
  t = term_v_19;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, z_47);
  t = k_7(a_48, z_47, t);
  t = y_47;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, i_5, k_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  if(match_string(t, "-S"))
    {
      t = c_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_48;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  t = term_a_20;
  d_48 = t;
  t = term_b_20;
  e_48 = t;
  t = term_i_20;
  t = k_7(d_48, e_48, t);
  t = term_j_20;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_l_20;
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
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  t = SSL_string_to_int(h_48);
  i_48 = t;
  t = term_a_20;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, i_48);
  t = k_7(j_48, i_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_48);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  t = term_n_20;
  k_48 = t;
  t = term_o_10;
  l_48 = t;
  t = term_o_20;
  t = k_7(k_48, l_48, t);
  t = term_p_20;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_5, p_5, q_5, t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = s_20;
      {
        ATerm v_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_6, b_6, c_6, t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = v_20;
            t = Option_3_0(d_6, g_6, h_6, t);
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm m_48 = NULL;
  t = term_z_20;
  m_48 = t;
  t = SSL_table_put(m_48, f_42, g_42);
  t = (ATerm) ATmakeAppl(sym__3, term_z_20, f_42, g_42);
  return(t);
}
ATerm Option_3_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
      t = term_o_10;
      t = i_0(t);
      r_48 = t;
      t = term_c_21;
      s_48 = t;
      t = term_d_21;
      t_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_21, term_d_21, r_48);
      t = d_7(s_48, t_48, r_48, t);
      _fail(t);
    }
  else
    {
      ATerm y_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_48 = ATgetFirst((ATermList) t);
          q_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_48;
      t = e_0(t);
      t = term_o_10;
      t = g_0(t);
      y_48 = t;
      t = (ATerm) ATinsert(CheckATermList(q_48), y_48);
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm a_49 = NULL;
  a_49 = t;
  if(match_string(t, "-o"))
    {
      t = a_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_49;
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  d_49 = t;
  t = term_d_10;
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_10, d_49);
  t = k_7(e_49, d_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_49);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, j_6, l_6, t);
  return(t);
}
static ATerm d_7 (ATerm f_47, ATerm g_47, ATerm e_47, ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_47, g_47);
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            ATerm i_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_47, g_47);
        t = i_7(f_47, g_47, t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATempty;
      }
  }
  h_49 = t;
  t = (ATerm) ATinsert(CheckATermList(h_49), e_47);
  i_49 = t;
  t = SSL_table_put(f_47, g_47, i_49);
  t = g_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
      t = term_o_10;
      t = n_0(t);
      t_49 = t;
      t = term_c_21;
      u_49 = t;
      t = term_d_21;
      v_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_21, term_d_21, t_49);
      t = d_7(u_49, v_49, t_49, t);
      _fail(t);
    }
  else
    {
      ATerm z_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_49 = ATgetFirst((ATermList) t);
          q_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_49 = ATgetFirst((ATermList) t);
          s_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_49;
      t = k_0(t);
      t = r_49;
      t = l_0(t);
      z_49 = t;
      t = (ATerm) ATinsert(CheckATermList(s_49), z_49);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_10;
  t = whoami_0_0(t);
  a_50 = t;
  t = term_x_14;
  c_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_21), a_50);
  d_50 = t;
  t = SSL_printnl(c_50, d_50);
  t = term_z_14;
  b_50 = t;
  t = SSL_exit(b_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_21;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_7 (ATerm i_35, ATerm j_35, ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_35, j_35);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = SSL_addr(i_35, j_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  f_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_50;
      t = i_83(t);
    }
  else
    {
      ATerm k_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_50 = ATgetFirst((ATermList) t);
          h_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_50;
      t = foldr_2_0(i_83, j_83, t);
      k_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_50, k_50);
      t = j_83(t);
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
  t = term_b_20;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm i_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(i_22, k_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_50 = NULL,c_22 = NULL,e_22 = NULL;
  t = times_0_0(t);
  e_22 = t;
  t = SSL_explode_term(e_22);
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_22;
  t = foldr_2_0(r_6, s_6, t);
  n_50 = t;
  t = SSL_TicksToSeconds(n_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
  y_50 = t;
  if(match_cons(t, sym__2))
    {
      z_50 = ATgetArgument(t, 0);
      a_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_51;
        if((z_50 != t))
          {
            _fail(t);
          }
        t = y_50;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
        {
          ATerm w_21 = t;
          int x_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_50, a_51);
              LocalPopChoice(x_21);
            }
          else
            {
              t = w_21;
              t = SSL_gtr(z_50, a_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_91 (ATerm), ATerm t)
{
  ATerm e_51 = NULL;
  e_51 = t;
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_51 = NULL;
        t = term_a_20;
        t = get_config_0_0(t);
        g_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_51, term_z_14);
        t = geq_0_0(t);
        t = e_51;
        t = z_91(t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = e_51;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,m_51 = NULL,n_51 = NULL;
  t = run_time_0_0(t);
  i_51 = t;
  t = term_o_10;
  t = whoami_0_0(t);
  j_51 = t;
  t = term_x_14;
  m_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), i_51), term_g_22), j_51);
  n_51 = t;
  t = SSL_printnl(m_51, n_51);
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), i_51), term_g_22), j_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_20;
  s_51 = t;
  t = SSL_exit(s_51);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  b_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_52 = ATgetArgument(t, 0);
          {
            ATerm g_24 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(b_52);
            g_24 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_52);
            q_8 = t;
            t = SSLsetAnnotations(q_8, g_24);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm j_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_22;
      t = get_config_0_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = j_22;
      t = fetch_1_0(v_6, t);
    }
  t = p_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_52 = ATgetFirst((ATermList) t);
      f_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_52 = NULL,k_52 = NULL;
        static ATerm w_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_52)), not_null(k_52));
          return(t);
        }
        t = f_52;
        t = d_0(t);
        if(((j_52 != NULL) && (j_52 != t)))
          _fail(t);
        else
          j_52 = t;
        t = e_52;
        t = c_0(t);
        if(((k_52 != NULL) && (k_52 != t)))
          _fail(t);
        else
          k_52 = t;
        t = f_52;
        t = reverse_acc_2_0(c_0, w_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_10;
      t = d_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,u_52 = NULL,w_8 = NULL;
  u_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_52);
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_52);
  w_8 = t;
  t = SSLsetAnnotations(w_8, o_52);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm a_53 = NULL;
  a_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_53), term_p_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL;
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
      t = get_config_0_0(t);
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      t = fetch_1_0(f_7, t);
    }
  t = term_s_22;
  t = echo_0_0(t);
  t = term_c_21;
  m_52 = t;
  t = term_d_21;
  n_52 = t;
  t = term_t_22;
  t = i_7(m_52, n_52, t);
  t = reverse_acc_2_0(_id, g_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  static ATerm h_54 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
    e_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_54 = ATgetFirst((ATermList) t);
        g_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_22 = t;
      int v_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_24 = NULL,v_24 = NULL,c_9 = NULL;
          t = SSLgetAnnotations(e_54);
          r_24 = t;
          t = f_54;
          t = l_77(t);
          v_24 = t;
          t = (ATerm) ATinsert(CheckATermList(g_54), v_24);
          c_9 = t;
          t = SSLsetAnnotations(c_9, r_24);
          LocalPopChoice(v_22);
        }
      else
        {
          t = u_22;
          {
            ATerm n_25 = NULL,t_25 = NULL,d_9 = NULL;
            t = SSLgetAnnotations(e_54);
            n_25 = t;
            t = g_54;
            t = h_54(t);
            t_25 = t;
            t = (ATerm) ATinsert(CheckATermList(t_25), f_54);
            d_9 = t;
            t = SSLsetAnnotations(d_9, n_25);
          }
        }
    }
    return(t);
  }
  t = h_54(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_22 = ATgetFirst((ATermList) t);
                ATerm c_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_54;
          }
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATinsert(ATempty, n_54);
      }
  }
  o_54 = t;
  t = term_e_10;
  p_54 = t;
  t = SSL_printnl(p_54, o_54);
  t = n_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm f_31, ATerm g_31, ATerm t)
{
  t = SSL_strcat(f_31, g_31);
  return(t);
}
ATerm debug_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
  t_54 = t;
  t = q_76(t);
  u_54 = t;
  t = term_x_14;
  v_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_54), u_54);
  w_54 = t;
  t = SSL_printnl(v_54, w_54);
  t = t_54;
  return(t);
}
ATerm map_1_0 (ATerm b_77 (ATerm), ATerm t)
{
  static ATerm l_55 (ATerm t)
  {
    ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
    i_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_55;
      }
    else
      {
        ATerm p_26 = NULL,w_26 = NULL,x_26 = NULL,m_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_55 = ATgetFirst((ATermList) t);
            k_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_55);
        p_26 = t;
        t = j_55;
        t = b_77(t);
        w_26 = t;
        t = k_55;
        t = l_55(t);
        x_26 = t;
        t = (ATerm) ATinsert(CheckATermList(x_26), w_26);
        m_10 = t;
        t = SSLsetAnnotations(m_10, p_26);
      }
    return(t);
  }
  t = l_55(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm d_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = d_23;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_55 = NULL;
      t_55 = t;
      t = SSL_is_string(t_55);
      LocalPopChoice(q_23);
    }
  else
    {
      t = n_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_7, t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL;
              z_55 = t;
              if(match_cons(t, sym_Path_1))
                {
                  a_56 = ATgetArgument(t, 0);
                  t = a_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      a_56 = ATgetArgument(t, 0);
                      t = a_56;
                      {
                        ATerm v_23 = t;
                        int x_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(x_23);
                          }
                        else
                          {
                            t = v_23;
                            t = debug_1_0(t_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm f_56 = NULL,g_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          a_56 = ATgetArgument(t, 0);
                          b_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = a_56;
                      t = eval_config_0_0(t);
                      f_56 = t;
                      t = b_56;
                      t = eval_config_0_0(t);
                      g_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_56, g_56);
                      t = h_7(f_56, g_56, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm w_48, ATerm x_48, ATerm t)
{
  t = SSL_table_get(w_48, x_48);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  k_56 = t;
  t = term_z_20;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_20, k_56);
  t = i_7(l_56, k_56, t);
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_56 = NULL,n_56 = NULL;
        t = eval_config_0_0(t);
        m_56 = t;
        t = term_z_20;
        n_56 = t;
        t = SSL_table_put(n_56, k_56, m_56);
        t = m_56;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  t = term_c_24;
  q_56 = t;
  t = term_o_10;
  r_56 = t;
  t = term_d_24;
  t = k_7(q_56, r_56, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t = term_c_24;
  u_56 = t;
  t = term_o_10;
  v_56 = t;
  t = term_d_24;
  t = k_7(u_56, v_56, t);
  t = term_i_24;
  s_56 = t;
  t = term_o_10;
  t_56 = t;
  t = term_j_24;
  t = k_7(s_56, t_56, t);
  t = term_k_24;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_7, w_7, y_7, t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      t = Option_3_0(b_8, c_8, d_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_54 (ATerm), ATerm k_54 (ATerm), ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,q_10 = NULL;
  b_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_56 = ATgetFirst((ATermList) t);
      y_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_57);
  w_56 = t;
  t = x_56;
  t = j_54(t);
  z_56 = t;
  t = y_56;
  t = k_54(t);
  a_57 = t;
  t = (ATerm) ATinsert(CheckATermList(a_57), z_56);
  q_10 = t;
  t = SSLsetAnnotations(q_10, w_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_96 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,l_57 = NULL,m_57 = NULL,v_10 = NULL;
  g_57 = t;
  {
    ATerm o_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_24;
        t = s_96(t);
        LocalPopChoice(q_24);
      }
    else
      {
        t = o_24;
      }
  }
  t = g_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_57 = ATgetFirst((ATermList) t);
      j_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  h_57 = t;
  t = term_l_21;
  m_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_21, i_57);
  t = k_7(m_57, i_57, t);
  t = j_57;
  {
    static ATerm w_57 (ATerm t)
    {
      ATerm u_24 = t;
      int y_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_57 = NULL;
              p_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_57;
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              t = s_96(t);
              t = Cons_2_0(_id, w_57, t);
            }
          LocalPopChoice(y_24);
        }
      else
        {
          t = u_24;
          {
            ATerm s_57 = NULL,t_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_57 = ATgetFirst((ATermList) t);
                t_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_57), (ATerm) ATmakeAppl(sym_Undefined_1, s_57));
          }
        }
      return(t);
    }
    t = w_57(t);
  }
  l_57 = t;
  t = (ATerm) ATinsert(CheckATermList(l_57), (ATerm) ATmakeAppl(sym_Program_1, i_57));
  v_10 = t;
  t = SSLsetAnnotations(v_10, h_57);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm i_58 = NULL;
  i_58 = t;
  if(match_string(t, "--help"))
    {
      t = i_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_58;
        }
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  t = term_m_22;
  j_58 = t;
  t = term_o_10;
  k_58 = t;
  t = term_f_25;
  t = k_7(j_58, k_58, t);
  t = term_h_25;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  d_58 = t;
  t = term_c_21;
  f_58 = t;
  t = term_d_21;
  g_58 = t;
  t = (ATerm) ATempty;
  h_58 = t;
  t = SSL_table_put(f_58, g_58, h_58);
  t = d_58;
  {
    static ATerm e_8 (ATerm t)
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_96(t);
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          {
            ATerm l_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_8, g_8, h_8, t);
                LocalPopChoice(p_25);
              }
            else
              {
                t = l_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_8, t);
  }
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_58 = NULL;
        r_58 = t;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_27 = NULL;
              t = r_58;
              {
                ATerm x_25 = t;
                int y_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_22;
                    t = get_config_0_0(t);
                    LocalPopChoice(y_25);
                  }
                else
                  {
                    t = x_25;
                    t = fetch_1_0(i_8, t);
                  }
              }
              t = r_58;
              t = default_system_usage_0_0(t);
              t = term_b_20;
              y_27 = t;
              t = SSL_exit(y_27);
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              {
                ATerm f_28 = NULL;
                t = term_c_24;
                t = get_config_0_0(t);
                t = r_58;
                t = default_system_about_0_0(t);
                t = term_b_20;
                f_28 = t;
                t = SSL_exit(f_28);
              }
            }
        }
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL;
              static ATerm j_8 (ATerm t)
              {
                ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,u_11 = NULL;
                x_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_58);
                v_58 = t;
                t = w_58;
                if(((b_58 != NULL) && (b_58 != t)))
                  _fail(t);
                else
                  b_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_58);
                u_11 = t;
                t = SSLsetAnnotations(u_11, v_58);
                return(t);
              }
              t = fetch_1_0(j_8, t);
              t = term_x_14;
              t_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_58)), term_b_26);
              u_58 = t;
              t = SSL_printnl(t_58, u_58);
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_58)), term_b_26));
              t = default_system_usage_0_0(t);
              t = term_z_14;
              s_58 = t;
              t = SSL_exit(s_58);
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
            }
        }
      }
  }
  c_58 = t;
  t = term_c_21;
  e_58 = t;
  t = SSL_table_destroy(e_58);
  t = c_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
  t = parse_options_1_0(r_94, t);
  c_59 = t;
  t = term_t_9;
  f_59 = t;
  t = SSL_table_create(f_59);
  t = term_t_9;
  d_59 = t;
  t = term_u_9;
  e_59 = t;
  t = SSL_table_put(d_59, e_59, c_59);
  t = c_59;
  t = t_94(t);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_94, t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_94(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_8, m_8, o_8, t);
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm i_26 = t;
        int q_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(p_8, v_8, x_8, t);
            LocalPopChoice(q_26);
          }
        else
          {
            t = i_26;
            {
              ATerm r_26 = t;
              int s_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_8, z_8, a_9, t);
                  LocalPopChoice(s_26);
                }
              else
                {
                  t = r_26;
                  {
                    ATerm t_26 = t;
                    int u_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(b_9, f_9, g_9, t);
                        LocalPopChoice(u_26);
                      }
                    else
                      {
                        t = t_26;
                        {
                          ATerm v_26 = t;
                          int y_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(i_9, j_9, p_9, t);
                              LocalPopChoice(y_26);
                            }
                          else
                            {
                              t = v_26;
                              {
                                ATerm z_26 = t;
                                int a_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(a_27);
                                  }
                                else
                                  {
                                    t = z_26;
                                    {
                                      ATerm b_27 = t;
                                      int c_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(q_9, r_9, s_9, t);
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
static ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_h_27;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_r_18;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_l_27;
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
  t = term_v_18;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_m_27;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm h_59 = NULL;
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, h_59);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_n_27;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm i_59 = NULL;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, i_59);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  t = term_h_10;
  j_59 = t;
  t = term_o_10;
  k_59 = t;
  t = term_p_27;
  t = k_7(j_59, k_59, t);
  t = term_q_27;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_8, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}

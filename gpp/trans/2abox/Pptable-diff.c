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
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_s_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_k_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_t_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_c_19;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_l_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_r_17;
ATerm term_g_17;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_p_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_z_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_r_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_e_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
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
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_n_12);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_m_12);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_s_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_r_10);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_u_20);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_r_10);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_r_10);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_r_10);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_r_10);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm t_5 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm u_5 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm w_5 (ATerm c_75 (ATerm), ATerm e_155, ATerm s_17, ATerm t);
static ATerm v_5 (ATerm k_17, ATerm l_17, ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm output_1_0 (ATerm z_92 (ATerm), ATerm t);
static ATerm x_5 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm y_5 (ATerm u_98 (ATerm), ATerm c_52, ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm e_6 (ATerm u_15, ATerm v_15, ATerm t);
static ATerm w_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm f_6 (ATerm k_79 (ATerm), ATerm f_23, ATerm e_23, ATerm t);
ATerm at_end_1_0 (ATerm b_76 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_17 (ATerm s_16, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t);
static ATerm h_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm k_6 (ATerm k_594, ATerm p_594, ATerm r_50, ATerm t);
ATerm while_not_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm i_22 (ATerm y_19, ATerm b_20, ATerm d_20, ATerm t);
static ATerm f_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_6 (ATerm p_79 (ATerm), ATerm h_23, ATerm g_23, ATerm t);
ATerm foldr_3_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm collect_om_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t);
static ATerm n_6 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm l_23, ATerm k_23, ATerm t);
static ATerm o_6 (ATerm i_79 (ATerm), ATerm d_23, ATerm c_23, ATerm t);
static ATerm p_6 (ATerm b_48, ATerm c_48, ATerm t);
static ATerm m_2 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_6 (ATerm c_51, ATerm d_51, ATerm t);
ATerm unescape_chars_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm m_76 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm unquote_chars_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_68 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm y_6 (ATerm b_51, ATerm t);
static ATerm g_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm d_36 (ATerm v_35, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_7 (ATerm q_17, ATerm t);
static ATerm b_7 (ATerm k_32, ATerm l_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_38 (ATerm o_36, ATerm t);
static ATerm h_38 (ATerm w_36, ATerm y_36, ATerm c_37, ATerm t);
static ATerm i_38 (ATerm n_37, ATerm o_37, ATerm p_37, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm x_75 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_7 (ATerm f_41, ATerm g_41, ATerm t);
ATerm Option_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_7 (ATerm f_46, ATerm g_46, ATerm e_46, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_7 (ATerm e_35, ATerm f_35, ATerm t);
ATerm foldr_2_0 (ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_90 (ATerm), ATerm t);
static ATerm t_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm need_help_1_0 (ATerm q_92 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_75 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_7 (ATerm b_31, ATerm c_31, ATerm t);
ATerm debug_1_0 (ATerm a_75 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_75 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm i_7 (ATerm w_47, ATerm x_47, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_52 (ATerm), ATerm u_52 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_94 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm parse_options_1_0 (ATerm s_94 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm io_Pptable_diff_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm t_5 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm f_0 = NULL;
  t = SSL_fputc(i_32, j_32);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_0);
  return(t);
}
static ATerm u_5 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm q_0 = NULL;
  t = SSL_write_term_to_stream_text(o_17, p_17);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_0);
  return(t);
}
static ATerm w_5 (ATerm c_75 (ATerm), ATerm e_155, ATerm s_17, ATerm t)
{
  ATerm r_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_155, term_e_3);
  t = c_7(t);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_0, s_17);
  t = c_75(t);
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
static ATerm v_5 (ATerm k_17, ATerm l_17, ATerm t)
{
  ATerm s_0 = NULL;
  t = SSL_write_term_to_stream_baf(k_17, l_17);
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_0);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(match_cons(i_9, sym_Stream_1))
        {
          y_0 = ATgetArgument(i_9, 0);
        }
      else
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(y_0, z_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm d_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_9 = ATgetArgument(t, 0);
      if(match_cons(m_9, sym_Stream_1))
        {
          i_1 = ATgetArgument(m_9, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(i_1, j_1, t);
  d_1 = t;
  t = term_n_9;
  f_1 = t;
  t = d_1;
  if(match_cons(t, sym_Stream_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, d_1);
  t = t_5(f_1, g_1, t);
  return(t);
}
ATerm output_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm t_0 = NULL,v_0 = NULL;
  t = z_92(t);
  v_0 = t;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_9;
        t = get_config_0_0(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = term_v_9;
      }
  }
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, v_0);
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_9;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, t_0, v_0);
        LocalPopChoice(y_9);
        if(match_cons(t, sym__2))
          {
            ATerm b_10 = ATgetArgument(t, 0);
            ATerm c_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_5(a_0, t_0, v_0, t);
      }
    else
      {
        t = x_9;
        if(match_cons(t, sym__2))
          {
            ATerm f_10 = ATgetArgument(t, 0);
            ATerm l_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_5(b_0, t_0, v_0, t);
      }
  }
  return(t);
}
static ATerm x_5 (ATerm u_32, ATerm v_32, ATerm t)
{
  t = SSL_mkterm(u_32, v_32);
  return(t);
}
static ATerm y_5 (ATerm u_98 (ATerm), ATerm c_52, ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  t = term_r_10;
  t = u_98(t);
  k_1 = t;
  t = (ATerm) ATinsert(ATempty, c_52);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, (ATerm) ATinsert(ATempty, c_52));
  t = x_5(k_1, l_1, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,b_1 = NULL;
      ATerm v_10 = t;
      int x_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_10 = ATgetFirst((ATermList) t);
              if(((ATgetType(y_10) != AT_INT) || (ATgetInt((ATermInt) y_10) != 34)))
                _fail(t);
              z_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(z_1), term_d_11), term_a_11);
          LocalPopChoice(x_10);
        }
      else
        {
          t = v_10;
          {
            ATerm b_2 = NULL,c_2 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_2 = ATgetFirst((ATermList) t);
                c_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_2;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_2), term_a_11), term_a_11);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_2), term_h_11), term_a_11);
              }
          }
        }
      y_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_1 = ATgetFirst((ATermList) t);
          w_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_1);
      u_1 = t;
      t = w_1;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      x_1 = t;
      t = (ATerm) ATinsert(CheckATermList(x_1), v_1);
      b_1 = t;
      t = SSLsetAnnotations(b_1, u_1);
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        ATerm x_2 = NULL,c_3 = NULL,d_3 = NULL;
        d_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_2 = ATgetFirst((ATermList) t);
            c_3 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_0 = NULL,m_0 = NULL,c_1 = NULL;
              t = SSLgetAnnotations(d_3);
              e_0 = t;
              t = c_3;
              t = escape_chars_0_0(t);
              m_0 = t;
              t = (ATerm) ATinsert(CheckATermList(m_0), x_2);
              c_1 = t;
              t = SSLsetAnnotations(c_1, e_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_3;
          }
      }
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  h_8 = t;
  if(match_cons(t, sym_Arg_1))
    {
      f_8 = ATgetArgument(t, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 = NULL,k_2 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(h_8);
            t_1 = t;
            t = SSL_int_to_string(f_8);
            k_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, k_2);
            m_1 = t;
            t = SSLsetAnnotations(m_1, t_1);
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            t = h_8;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          f_8 = ATgetArgument(t, 0);
          z_7 = ATgetArgument(t, 1);
          {
            ATerm n_11 = t;
            int p_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_2 = NULL,a_3 = NULL,b_3 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(h_8);
                u_2 = t;
                t = SSL_int_to_string(f_8);
                a_3 = t;
                t = SSL_int_to_string(z_7);
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, a_3, b_3);
                n_1 = t;
                t = SSLsetAnnotations(n_1, u_2);
                LocalPopChoice(p_11);
              }
            else
              {
                t = n_11;
                t = h_8;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              f_8 = ATgetArgument(t, 0);
              z_7 = ATgetArgument(t, 1);
              {
                ATerm r_11 = t;
                int s_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_3 = NULL,o_1 = NULL;
                    t = SSLgetAnnotations(h_8);
                    n_3 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, f_8, z_7);
                    o_1 = t;
                    t = SSLsetAnnotations(o_1, n_3);
                    LocalPopChoice(s_11);
                  }
                else
                  {
                    t = r_11;
                    t = h_8;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  f_8 = ATgetArgument(t, 0);
                  {
                    ATerm t_11 = t;
                    int u_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_3 = NULL,d_4 = NULL,p_1 = NULL,z_4 = NULL,c_5 = NULL,m_5 = NULL,o_4 = NULL;
                        t = SSLgetAnnotations(h_8);
                        y_3 = t;
                        t = SSL_explode_string(f_8);
                        t = escape_chars_0_0(t);
                        o_4 = t;
                        t = SSL_implode_string(o_4);
                        c_5 = t;
                        t = SSL_explode_string(c_5);
                        m_5 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_5), term_d_11), (ATerm) ATinsert(ATempty, term_d_11));
                        t = conc_0_0(t);
                        z_4 = t;
                        t = SSL_implode_string(z_4);
                        d_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, d_4);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, y_3);
                        LocalPopChoice(u_11);
                      }
                    else
                      {
                        t = t_11;
                        t = h_8;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      f_8 = ATgetArgument(t, 0);
                      z_7 = ATgetArgument(t, 1);
                      {
                        ATerm v_11 = t;
                        int w_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_5 = NULL,c_6 = NULL,q_1 = NULL;
                            t = SSLgetAnnotations(h_8);
                            s_5 = t;
                            t = SSL_int_to_string(f_8);
                            c_6 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, c_6, z_7);
                            q_1 = t;
                            t = SSLsetAnnotations(q_1, s_5);
                            LocalPopChoice(w_11);
                          }
                        else
                          {
                            t = v_11;
                            t = h_8;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          f_8 = ATgetArgument(t, 0);
                          t = f_8;
                          if(match_cons(t, sym_Path_2))
                            {
                              g_8 = ATgetArgument(t, 0);
                              a_8 = ATgetArgument(t, 1);
                              {
                                ATerm x_11 = t;
                                int y_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_7 = NULL,s_7 = NULL;
                                    t = (ATerm) ATinsert(ATinsert(ATempty, g_8), term_z_11);
                                    s_7 = t;
                                    t = SSL_concat_strings(s_7);
                                    r_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_Path_2, r_7, a_8);
                                    LocalPopChoice(y_11);
                                  }
                                else
                                  {
                                    t = x_11;
                                    t = h_8;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Path1_1))
                                {
                                  g_8 = ATgetArgument(t, 0);
                                  {
                                    ATerm a_12 = t;
                                    int b_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm d_8 = NULL,e_8 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, g_8), term_z_11);
                                        e_8 = t;
                                        t = SSL_concat_strings(e_8);
                                        d_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Path1_1, d_8);
                                        LocalPopChoice(b_12);
                                      }
                                    else
                                      {
                                        t = a_12;
                                        t = h_8;
                                      }
                                  }
                                }
                              else
                                {
                                  t = h_8;
                                }
                            }
                        }
                      else
                        {
                          t = h_8;
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
  t = topdown_1_0(c_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  static ATerm h_0 (ATerm t)
  {
    ATerm w_9 = NULL,a_10 = NULL;
    w_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), w_9);
    t = i_7(not_null(u_9), w_9, t);
    a_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_9, a_10);
    return(t);
  }
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = SSL_table_keys(u_9);
  t = map_1_0(h_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  static ATerm d_10 (ATerm t)
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = SRTS_one(d_10, t);
      }
    return(t);
  }
  t = d_10(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm e_10 = NULL,g_10 = NULL;
  t = term_j_12;
  e_10 = t;
  t = term_k_12;
  g_10 = t;
  t = term_l_12;
  t = i_7(e_10, g_10, t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm h_10 = NULL,j_10 = NULL,k_10 = NULL,m_10 = NULL;
  h_10 = t;
  t = term_m_12;
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, h_10);
  t = i_7(m_10, h_10, t);
  j_10 = t;
  t = term_n_12;
  k_10 = t;
  t = SSL_table_put(k_10, h_10, j_10);
  t = (ATerm) ATmakeAppl(sym__3, term_n_12, h_10, j_10);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,w_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL,e_11 = NULL,f_11 = NULL,i_11 = NULL,j_11 = NULL,o_2 = NULL;
  n_10 = t;
  t = term_n_12;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, n_10);
  t = i_7(b_11, n_10, t);
  j_11 = t;
  if(match_cons(t, sym__2))
    {
      e_11 = ATgetArgument(t, 0);
      f_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_11);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, e_11), f_11);
  o_2 = t;
  t = SSLsetAnnotations(o_2, c_11);
  i_11 = t;
  t = term_n_12;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, n_10);
  z_10 = t;
  t = SSL_table_put(w_10, z_10, i_11);
  t = term_m_12;
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, n_10);
  t = i_7(q_10, n_10, t);
  o_10 = t;
  t = term_n_12;
  p_10 = t;
  t = SSL_table_put(p_10, n_10, o_10);
  t = (ATerm) ATmakeAppl(sym__3, term_n_12, n_10, o_10);
  return(t);
}
static ATerm e_6 (ATerm u_15, ATerm v_15, ATerm t)
{
  t = u_15;
  t = map_1_0(j_0, t);
  t = v_15;
  t = map_1_0(u_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(w_8);
  z_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_8), term_p_12), z_8), term_o_12);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL,g_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Path1_1))
    {
      f_12 = ATgetArgument(t, 0);
      t = f_12;
    }
  else
    {
      ATerm r_8 = NULL,v_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          f_12 = ATgetArgument(t, 0);
          g_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_12;
      t = map_1_0(w_0, t);
      t = concat_0_0(t);
      r_8 = t;
      t = (ATerm) ATinsert(CheckATermList(r_8), f_12);
      v_8 = t;
      t = SSL_concat_strings(v_8);
    }
  return(t);
}
static ATerm f_6 (ATerm k_79 (ATerm), ATerm f_23, ATerm e_23, ATerm t)
{
  static ATerm p_13 (ATerm t)
  {
    ATerm h_13 = NULL,j_13 = NULL,k_13 = NULL;
    h_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_13 = ATgetFirst((ATermList) t);
            k_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_12 = t;
          int r_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_13;
              {
                static ATerm x_0 (ATerm t)
                {
                  t = e_23;
                  return(t);
                }
                t = n_6(k_79, x_0, j_13, k_13, t);
              }
              t = p_13(t);
              LocalPopChoice(r_12);
            }
          else
            {
              t = q_12;
              {
                ATerm j_9 = NULL,s_9 = NULL,w_2 = NULL;
                t = SSLgetAnnotations(h_13);
                j_9 = t;
                t = k_13;
                t = p_13(t);
                s_9 = t;
                t = (ATerm) ATinsert(CheckATermList(s_9), j_13);
                w_2 = t;
                t = SSLsetAnnotations(w_2, j_9);
              }
            }
        }
      }
    return(t);
  }
  t = f_23;
  t = p_13(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  static ATerm o_16 (ATerm t)
  {
    ATerm c_16 = NULL,h_16 = NULL,m_16 = NULL;
    m_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_16 = ATgetFirst((ATermList) t);
        h_16 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_10 = NULL,s_10 = NULL,w_3 = NULL;
          t = SSLgetAnnotations(m_16);
          i_10 = t;
          t = h_16;
          t = o_16(t);
          s_10 = t;
          t = (ATerm) ATinsert(CheckATermList(s_10), c_16);
          w_3 = t;
          t = SSLsetAnnotations(w_3, i_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_16;
        t = b_76(t);
      }
    return(t);
  }
  t = o_16(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_13;
    }
  else
    {
      static ATerm a_1 (ATerm t)
      {
        t = not_null(w_13);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_13 = ATgetFirst((ATermList) t);
          if(((w_13 != NULL) && (w_13 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_13;
      t = at_end_1_0(a_1, t);
    }
  return(t);
}
static ATerm h_17 (ATerm s_16, ATerm t)
{
  ATerm t_16 = NULL;
  t = SSL_explode_term(s_16);
  if(match_cons(t, sym__2))
    {
      ATerm t_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  x_16 = t;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
      {
        ATerm u_12 = t;
        int v_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_1 (ATerm t)
            {
              t = w_16;
              return(t);
            }
            t = v_16;
            t = at_end_1_0(e_1, t);
            LocalPopChoice(v_12);
          }
        else
          {
            t = u_12;
            t = h_17(x_16, t);
          }
      }
    }
  else
    {
      t = h_17(x_16, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm o_77 (ATerm), ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm), ATerm t)
{
  static ATerm v_17 (ATerm t)
  {
    ATerm w_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_77(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = w_12;
        {
          ATerm i_17 = NULL,j_17 = NULL,m_17 = NULL,n_17 = NULL,t_17 = NULL,u_17 = NULL,a_4 = NULL;
          t = p_77(t);
          u_17 = t;
          if(match_cons(t, sym__2))
            {
              j_17 = ATgetArgument(t, 0);
              m_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_17);
          i_17 = t;
          t = j_17;
          t = r_77(t);
          n_17 = t;
          t = m_17;
          t = v_17(t);
          t_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_17, t_17);
          a_4 = t;
          t = SSLsetAnnotations(a_4, i_17);
          t = q_77(t);
        }
      }
    return(t);
  }
  t = v_17(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_12 = ATgetArgument(t, 0);
      if(((ATgetType(z_12) != AT_LIST) || !(ATisEmpty(z_12))))
        _fail(t);
      {
        ATerm a_13 = ATgetArgument(t, 1);
        if(((ATgetType(a_13) != AT_LIST) || !(ATisEmpty(a_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
        {
          p_18 = ATgetFirst((ATermList) b_13);
          v_18 = (ATerm) ATgetNext((ATermList) b_13);
        }
      else
        _fail(t);
      {
        ATerm c_13 = ATgetArgument(t, 1);
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            w_18 = ATgetFirst((ATermList) c_13);
            x_18 = (ATerm) ATgetNext((ATermList) c_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_18, w_18), (ATerm) ATmakeAppl(sym__2, v_18, x_18));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_18), y_18);
  return(t);
}
static ATerm k_6 (ATerm k_594, ATerm p_594, ATerm r_50, ATerm t)
{
  ATerm z_17 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  t = SSL_explode_term(p_594);
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_594);
  if(match_cons(t, sym__2))
    {
      if((z_17 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_18, g_18);
  t = genzip_4_0(h_1, r_1, s_1, _id, t);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_18, r_50);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_68 (ATerm), ATerm r_68 (ATerm), ATerm t)
{
  static ATerm b_19 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_68(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = r_68(t);
        t = b_19(t);
      }
    return(t);
  }
  t = b_19(t);
  return(t);
}
ATerm for_3_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm v_68 (ATerm), ATerm t)
{
  t = t_68(t);
  t = while_not_2_0(u_68, v_68, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_19 = NULL;
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_19);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm r_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,c_4 = NULL;
  x_19 = t;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_19);
  r_19 = t;
  t = w_19;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_19, w_19);
  c_4 = t;
  t = SSLsetAnnotations(c_4, r_19);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm f_21 = NULL,h_21 = NULL,l_21 = NULL,o_21 = NULL,p_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym__2))
    {
      h_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_21 = ATgetFirst((ATermList) t);
      p_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_22(h_21, l_21, f_21, t);
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_21), o_21), p_21);
          }
      }
    }
  else
    {
      t = i_22(h_21, l_21, f_21, t);
    }
  return(t);
}
static ATerm i_22 (ATerm y_19, ATerm b_20, ATerm d_20, ATerm t)
{
  ATerm e_20 = NULL,j_20 = NULL,e_4 = NULL,p_20 = NULL,q_20 = NULL,t_20 = NULL,v_20 = NULL;
  t = SSLgetAnnotations(d_20);
  e_20 = t;
  t = b_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_20 = ATgetFirst((ATermList) t);
      v_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_20;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      t_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_20;
        if((q_20 != t))
          {
            _fail(t);
          }
        t = v_20;
        LocalPopChoice(l_13);
      }
    else
      {
        t = i_13;
        t = b_20;
        t = k_6(q_20, t_20, v_20, t);
      }
  }
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_19, j_20);
  e_4 = t;
  t = SSLsetAnnotations(e_4, e_20);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      if((e_22 != ATgetArgument(t, 1)))
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
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_2, d_2, e_2, t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
        w_21 = t;
        if(match_cons(t, sym__2))
          {
            x_21 = ATgetArgument(t, 0);
            y_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_21;
        t = f_6(f_2, x_21, y_21, t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm p_79 (ATerm), ATerm h_23, ATerm g_23, ATerm t)
{
  static ATerm a_23 (ATerm t)
  {
    ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
    v_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_23;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_22 = ATgetFirst((ATermList) t);
            x_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_22;
              {
                static ATerm g_2 (ATerm t)
                {
                  t = g_23;
                  return(t);
                }
                t = n_6(p_79, g_2, w_22, x_22, t);
              }
              t = a_23(t);
              LocalPopChoice(q_13);
            }
          else
            {
              t = o_13;
              {
                ATerm g_11 = NULL,m_11 = NULL,h_4 = NULL;
                t = SSLgetAnnotations(v_22);
                g_11 = t;
                t = x_22;
                t = a_23(t);
                m_11 = t;
                t = (ATerm) ATinsert(CheckATermList(m_11), w_22);
                h_4 = t;
                t = SSLsetAnnotations(h_4, g_11);
              }
            }
        }
      }
    return(t);
  }
  t = h_23;
  t = a_23(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm s_81 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,n_23 = NULL,q_23 = NULL;
  j_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_23;
      t = q_81(t);
    }
  else
    {
      ATerm v_23 = NULL,w_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_23 = ATgetFirst((ATermList) t);
          q_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_23;
      t = s_81(t);
      v_23 = t;
      t = q_23;
      t = foldr_3_0(q_81, r_81, s_81, t);
      w_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
      t = r_81(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm r_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = NULL;
      t = u_80(t);
      a_24 = t;
      t = (ATerm) ATinsert(ATempty, a_24);
      LocalPopChoice(t_13);
    }
  else
    {
      t = r_13;
      {
        ATerm c_12 = NULL,e_12 = NULL;
        static ATerm i_2 (ATerm t)
        {
          t = collect_om_2_0(u_80, v_80, t);
          return(t);
        }
        e_12 = t;
        t = SSL_explode_term(e_12);
        if(match_cons(t, sym__2))
          {
            ATerm x_13 = ATgetArgument(t, 0);
            c_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_12;
        t = foldr_3_0(h_2, v_80, i_2, t);
      }
    }
  return(t);
}
static ATerm n_6 (ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm l_23, ATerm k_23, ATerm t)
{
  t = t_79(t);
  {
    static ATerm j_2 (ATerm t)
    {
      ATerm b_24 = NULL;
      b_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_23, b_24);
      t = s_79(t);
      return(t);
    }
    t = fetch_1_0(j_2, t);
  }
  t = k_23;
  return(t);
}
static ATerm o_6 (ATerm i_79 (ATerm), ATerm d_23, ATerm c_23, ATerm t)
{
  static ATerm c_25 (ATerm t)
  {
    static ATerm f_25 (ATerm g_24, ATerm t)
    {
      ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL,v_24 = NULL,w_24 = NULL,k_4 = NULL;
      t = g_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_24 = ATgetFirst((ATermList) t);
          o_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm l_2 (ATerm t)
        {
          t = c_23;
          return(t);
        }
        t = n_6(i_79, l_2, n_24, o_24, t);
      }
      t = g_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_24);
      p_24 = t;
      t = v_24;
      t = c_25(t);
      w_24 = t;
      t = (ATerm) ATinsert(CheckATermList(w_24), s_24);
      k_4 = t;
      t = SSLsetAnnotations(k_4, p_24);
      return(t);
    }
    ATerm y_24 = NULL,a_25 = NULL;
    y_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_24;
      }
    else
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_14 = ATgetFirst((ATermList) t);
                a_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(z_13);
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_25(y_24, t);
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  t = a_25;
                  t = c_25(t);
                }
            }
          }
        else
          {
            t = y_13;
            t = f_25(y_24, t);
          }
      }
    return(t);
  }
  t = d_23;
  t = c_25(t);
  return(t);
}
static ATerm p_6 (ATerm b_48, ATerm c_48, ATerm t)
{
  t = SSL_table_rename(b_48, c_48);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm f_26 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      f_26 = ATgetArgument(t, 0);
      {
        ATerm d_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = f_26;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      n_25 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, n_25);
    }
  else
    {
      ATerm d_26 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          n_25 = ATgetArgument(t, 0);
          o_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_25;
      t = map_1_0(m_2, t);
      d_26 = t;
      t = (ATerm) ATinsert(CheckATermList(d_26), n_25);
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_e_14;
  return(t);
}
static ATerm q_6 (ATerm c_51, ATerm d_51, ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL;
  t = c_51;
  t = mk_key_0_0(t);
  i_26 = t;
  t = term_f_14;
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_51, d_51);
  k_26 = t;
  t = SSL_table_put(j_26, i_26, k_26);
  t = c_51;
  t = path_to_string_0_0(t);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_26, d_51);
  t = if_verbose1_1_0(n_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  static ATerm e_27 (ATerm t)
  {
    ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_85(t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
      }
    d_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_27 = ATgetFirst((ATermList) t);
        c_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_12 = NULL,x_12 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(d_27);
          s_12 = t;
          t = c_27;
          t = e_27(t);
          x_12 = t;
          t = (ATerm) ATinsert(CheckATermList(x_12), b_27);
          p_4 = t;
          t = SSLsetAnnotations(p_4, s_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_27;
      }
    return(t);
  }
  t = e_27(t);
  return(t);
}
ATerm at_last_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  static ATerm g_29 (ATerm t)
  {
    ATerm x_28 = NULL,e_29 = NULL,f_29 = NULL;
    x_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_29 = ATgetFirst((ATermList) t);
        f_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_14 = t;
      int k_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_13 = NULL,r_4 = NULL;
          t = SSLgetAnnotations(x_28);
          s_13 = t;
          t = f_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(f_29), e_29);
          r_4 = t;
          t = SSLsetAnnotations(r_4, s_13);
          t = m_76(t);
          LocalPopChoice(k_14);
        }
      else
        {
          t = j_14;
          {
            ATerm i_14 = NULL,m_14 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(x_28);
            i_14 = t;
            t = f_29;
            t = g_29(t);
            m_14 = t;
            t = (ATerm) ATinsert(CheckATermList(m_14), e_29);
            s_4 = t;
            t = SSLsetAnnotations(s_4, i_14);
          }
        }
    }
    return(t);
  }
  t = g_29(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_29 = ATgetFirst((ATermList) t);
      p_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_29;
    }
  else
    {
      t = p_29;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm k_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_14 = ATgetFirst((ATermList) t);
      k_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,j_30 = NULL;
  d_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_30 = ATgetFirst((ATermList) t);
      {
        ATerm n_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_30;
  t = p_84(t);
  t = d_30;
  t = last_0_0(t);
  t = q_84(t);
  t = d_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_14 = ATgetFirst((ATermList) t);
      e_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_30;
  t = at_last_1_0(q_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_17 = ATgetFirst((ATermList) t);
      b_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_17;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = b_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_17 = ATgetFirst((ATermList) t);
      d_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(d_17), term_d_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(d_17), term_a_11);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(d_17), term_n_9);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_17), term_p_14);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
  g_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      h_34 = ATgetArgument(t, 0);
      {
        ATerm u_14 = NULL,w_14 = NULL,w_4 = NULL;
        t = SSLgetAnnotations(g_34);
        u_14 = t;
        t = SSL_string_to_int(h_34);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, w_14);
        w_4 = t;
        t = SSLsetAnnotations(w_4, u_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          h_34 = ATgetArgument(t, 0);
          i_34 = ATgetArgument(t, 1);
          {
            ATerm d_15 = NULL,g_15 = NULL,h_15 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(g_34);
            d_15 = t;
            t = SSL_string_to_int(h_34);
            g_15 = t;
            t = SSL_string_to_int(i_34);
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, g_15, h_15);
            x_4 = t;
            t = SSLsetAnnotations(x_4, d_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              h_34 = ATgetArgument(t, 0);
              i_34 = ATgetArgument(t, 1);
              {
                ATerm t_15 = NULL,y_4 = NULL;
                t = SSLgetAnnotations(g_34);
                t_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, h_34, i_34);
                y_4 = t;
                t = SSLsetAnnotations(y_4, t_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  h_34 = ATgetArgument(t, 0);
                  {
                    ATerm i_16 = NULL,k_16 = NULL,l_16 = NULL,n_16 = NULL,q_16 = NULL,a_5 = NULL;
                    t = SSLgetAnnotations(g_34);
                    i_16 = t;
                    t = SSL_explode_string(h_34);
                    t = unquote_chars_2_0(r_2, s_2, t);
                    q_16 = t;
                    t = SSL_implode_string(q_16);
                    n_16 = t;
                    t = SSL_explode_string(n_16);
                    t = unescape_chars_1_0(t_2, t);
                    l_16 = t;
                    t = SSL_implode_string(l_16);
                    k_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, k_16);
                    a_5 = t;
                    t = SSLsetAnnotations(a_5, i_16);
                  }
                }
              else
                {
                  ATerm d_18 = NULL,k_18 = NULL,b_5 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      h_34 = ATgetArgument(t, 0);
                      i_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_34);
                  d_18 = t;
                  t = SSL_string_to_int(h_34);
                  k_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, k_18, i_34);
                  b_5 = t;
                  t = SSLsetAnnotations(b_5, d_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  static ATerm v_2 (ATerm t)
  {
    t = topdown_1_0(z_68, t);
    return(t);
  }
  t = z_68(t);
  t = SRTS_all(v_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  t = topdown_1_0(f_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      s_34 = ATgetArgument(t, 0);
      t_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(s_34, t_34, t);
  return(t);
}
static ATerm f_3 (ATerm t)
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
static ATerm y_6 (ATerm b_51, ATerm t)
{
  t = b_51;
  t = reverse_acc_2_0(_id, y_2, t);
  t = map_1_0(z_2, t);
  return(t);
}
static ATerm g_3 (ATerm t)
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
      ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
      t = term_v_14;
      t = get_options_0_0(t);
      t = oncetd_1_0(g_3, t);
      t = term_x_14;
      x_34 = t;
      t = (ATerm) ATinsert(ATempty, term_y_14);
      y_34 = t;
      t = SSL_printnl(x_34, y_34);
      t = term_z_14;
      w_34 = t;
      t = SSL_exit(w_34);
      t = (ATerm) ATinsert(ATempty, term_y_14);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm c_35 = NULL,d_35 = NULL;
        t = term_x_14;
        c_35 = t;
        t = (ATerm) ATinsert(ATempty, term_a_15);
        d_35 = t;
        t = SSL_printnl(c_35, d_35);
        t = (ATerm) ATinsert(ATempty, term_a_15);
      }
    }
  return(t);
}
static ATerm d_36 (ATerm v_35, ATerm t)
{
  t = SSL_fclose(v_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_35 = NULL,b_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_35 = ATgetArgument(t, 0);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_35);
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            t = d_36(b_36, t);
          }
      }
    }
  else
    {
      t = d_36(b_36, t);
    }
  return(t);
}
static ATerm a_7 (ATerm q_17, ATerm t)
{
  t = SSL_read_term_from_stream(q_17);
  return(t);
}
static ATerm b_7 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_fopen(k_32, l_32);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_stdin_stream();
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_stdout_stream();
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_36 = NULL;
  t = SSL_stderr_stream();
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_36);
  return(t);
}
static ATerm e_38 (ATerm o_36, ATerm t)
{
  ATerm q_36 = NULL;
  t = SSL_explode_term(o_36);
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_15 = ATgetArgument(t, 1);
        if(((ATgetType(f_15) == AT_LIST) && !(ATisEmpty(f_15))))
          {
            q_36 = ATgetFirst((ATermList) f_15);
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
  t = q_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_38 (ATerm w_36, ATerm y_36, ATerm c_37, ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,j_37 = NULL,i_5 = NULL;
  t = SSLgetAnnotations(c_37);
  f_37 = t;
  t = w_36;
  if(match_cons(t, sym_Path_1))
    {
      j_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_37, y_36);
  i_5 = t;
  t = SSLsetAnnotations(i_5, f_37);
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(d_37, e_37, t);
  return(t);
}
static ATerm i_38 (ATerm n_37, ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,t_37 = NULL,w_37 = NULL,j_5 = NULL;
  t = SSLgetAnnotations(p_37);
  t_37 = t;
  t = SSL_is_string(n_37);
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_37, o_37);
  j_5 = t;
  t = SSLsetAnnotations(j_5, t_37);
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(q_37, r_37, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm z_37 = NULL,c_38 = NULL,d_38 = NULL;
  z_37 = t;
  if(match_cons(t, sym__2))
    {
      c_38 = ATgetArgument(t, 0);
      d_38 = ATgetArgument(t, 1);
      {
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_38(z_37, t);
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
                  t = h_38(c_38, d_38, z_37, t);
                  LocalPopChoice(m_15);
                }
              else
                {
                  t = l_15;
                  t = i_38(c_38, d_38, z_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_38(z_37, t);
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_n_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_38 = NULL,l_38 = NULL,m_38 = NULL;
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_38 = NULL;
      p_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_38, term_q_15);
      t = c_7(t);
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = debug_1_0(h_3, t);
      _fail(t);
    }
  l_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(m_38, t);
  j_38 = t;
  t = l_38;
  t = fclose_0_0(t);
  t = j_38;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,e_19 = NULL,f_19 = NULL;
  t = if_verbose1_1_0(j_3, t);
  t = ReadFromFile_0_0(t);
  y_38 = t;
  t = SSL_explode_term(y_38);
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      {
        ATerm r_15 = ATgetArgument(t, 1);
        if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
          {
            e_19 = ATgetFirst((ATermList) r_15);
            {
              ATerm s_15 = (ATerm) ATgetNext((ATermList) r_15);
              if(((ATgetType(s_15) != AT_LIST) || !(ATisEmpty(s_15))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_19;
  if(!(match_string(t, "\"pp-tables-0\"")))
    {
      t = type_failure_0_0(t);
    }
  t = e_19;
  if(match_cons(t, sym_PP_Table_1))
    {
      x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(x_38, t);
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
  ATerm r_38 = NULL,w_38 = NULL;
  r_38 = t;
  t = term_f_14;
  w_38 = t;
  t = SSL_table_create(w_38);
  t = r_38;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm z_38 = NULL;
  static ATerm l_3 (ATerm t)
  {
    t = x_75(t);
    if(((z_38 != NULL) && (z_38 != t)))
      _fail(t);
    else
      z_38 = t;
    return(t);
  }
  t = fetch_1_0(l_3, t);
  t = not_null(z_38);
  return(t);
}
ATerm option_value_2_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(u_91, t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = v_91(t);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  t = term_x_14;
  r_40 = t;
  t = (ATerm) ATinsert(ATempty, term_z_15);
  s_40 = t;
  t = SSL_printnl(r_40, s_40);
  t = term_z_14;
  q_40 = t;
  t = SSL_exit(q_40);
  t = (ATerm) ATinsert(ATempty, term_z_15);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm x_40 = NULL;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      if((x_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  y_40 = t;
  t = term_n_12;
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, y_40);
  t = i_7(b_41, y_40, t);
  a_41 = t;
  t = SSL_explode_term(a_41);
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_16 = ATgetArgument(t, 1);
        if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
          {
            z_40 = ATgetFirst((ATermList) b_16);
            {
              ATerm d_16 = (ATerm) ATgetNext((ATermList) b_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_40;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,u_41 = NULL;
  l_41 = t;
  t = term_m_12;
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, l_41);
  t = i_7(u_41, l_41, t);
  n_41 = t;
  t = SSL_explode_term(n_41);
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_16 = ATgetArgument(t, 1);
        if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
          {
            m_41 = ATgetFirst((ATermList) f_16);
            {
              ATerm g_16 = (ATerm) ATgetNext((ATermList) f_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_41;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm c_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_6 = NULL;
  f_42 = t;
  t = term_n_12;
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, f_42);
  t = i_7(g_42, f_42, t);
  r_42 = t;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  h_42 = t;
  t = p_42;
  t = collect_om_2_0(v_3, x_3, t);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_42, q_42);
  s_6 = t;
  t = SSLsetAnnotations(s_6, h_42);
  if(match_cons(t, sym__2))
    {
      c_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_42, c_42, e_42);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  d_43 = t;
  if(match_cons(t, sym_S_1))
    {
      e_43 = ATgetArgument(t, 0);
      {
        ATerm l_19 = NULL,a_6 = NULL;
        t = SSLgetAnnotations(d_43);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, e_43);
        a_6 = t;
        t = SSLsetAnnotations(a_6, l_19);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          e_43 = ATgetArgument(t, 0);
          {
            ATerm u_19 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(d_43);
            u_19 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, e_43);
            h_6 = t;
            t = SSLsetAnnotations(h_6, u_19);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              e_43 = ATgetArgument(t, 0);
              {
                ATerm j_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, e_43);
        }
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(z_3, h_43, i_43, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      if((j_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,w_43 = NULL,z_43 = NULL,c_44 = NULL,f_44 = NULL,w_6 = NULL;
  q_43 = t;
  t = term_m_12;
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, q_43);
  t = i_7(r_43, q_43, t);
  f_44 = t;
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_44);
  s_43 = t;
  t = z_43;
  t = collect_om_2_0(f_4, g_4, t);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_43, c_44);
  w_6 = t;
  t = SSLsetAnnotations(w_6, s_43);
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_43, m_43, p_43);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm y_44 = NULL,b_45 = NULL;
  y_44 = t;
  if(match_cons(t, sym_S_1))
    {
      b_45 = ATgetArgument(t, 0);
      {
        ATerm l_20 = NULL,u_6 = NULL;
        t = SSLgetAnnotations(y_44);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, b_45);
        u_6 = t;
        t = SSLsetAnnotations(u_6, l_20);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          b_45 = ATgetArgument(t, 0);
          {
            ATerm d_21 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(y_44);
            d_21 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, b_45);
            v_6 = t;
            t = SSLsetAnnotations(v_6, d_21);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              b_45 = ATgetArgument(t, 0);
              {
                ATerm p_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, b_45);
        }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(i_4, g_45, h_45, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm i_45 = NULL;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      if((i_45 != ATgetArgument(t, 1)))
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
  ATerm j_45 = NULL;
  if(match_cons(t, sym__3))
    {
      j_45 = ATgetArgument(t, 0);
      {
        ATerm r_16 = ATgetArgument(t, 1);
      }
      {
        ATerm u_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_45;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm k_45 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm y_16 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
      {
        ATerm z_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_45;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL;
  z_45 = t;
  t = term_n_12;
  a_46 = t;
  t = SSL_table_remove(a_46, z_45);
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, z_45);
  return(t);
}
static ATerm t_4 (ATerm t)
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
  ATerm n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      ATerm f_17 = ATgetArgument(t, 1);
      if(match_cons(f_17, sym__2))
        {
          n_46 = ATgetArgument(f_17, 0);
          o_46 = ATgetArgument(f_17, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, n_46, o_46);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_g_17;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL;
  static ATerm m_3 (ATerm t)
  {
    ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_5 = NULL;
    p_40 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        o_40 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_40);
    n_40 = t;
    t = o_40;
    if(((u_39 != NULL) && (u_39 != t)))
      _fail(t);
    else
      u_39 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, o_40);
    q_5 = t;
    t = SSLsetAnnotations(q_5, n_40);
    return(t);
  }
  t = option_value_2_0(m_3, o_3, t);
  t = (ATerm) ATinsert(ATempty, not_null(u_39));
  t = read_pp_tables_0_0(t);
  t = term_f_14;
  l_40 = t;
  t = term_n_12;
  m_40 = t;
  t = term_r_17;
  t = p_6(l_40, m_40, t);
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,r_5 = NULL;
      v_40 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          u_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_40);
      t_40 = t;
      t = u_40;
      if(((v_39 != NULL) && (v_39 != t)))
        _fail(t);
      else
        v_39 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, u_40);
      r_5 = t;
      t = SSLsetAnnotations(r_5, t_40);
      return(t);
    }
    static ATerm q_3 (ATerm t)
    {
      t = term_w_17;
      if(((v_39 != NULL) && (v_39 != t)))
        _fail(t);
      else
        v_39 = t;
      return(t);
    }
    t = option_value_2_0(p_3, q_3, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(v_39));
  t = read_pp_tables_0_0(t);
  t = term_f_14;
  j_40 = t;
  t = term_m_12;
  k_40 = t;
  t = term_x_17;
  t = p_6(j_40, k_40, t);
  t = term_n_12;
  i_40 = t;
  t = SSL_table_keys(i_40);
  x_39 = t;
  t = term_m_12;
  h_40 = t;
  t = SSL_table_keys(h_40);
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_39, w_39);
  t = o_6(r_3, x_39, w_39, t);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_39, w_39);
  t = diff_0_0(t);
  d_40 = t;
  t = map_1_0(s_3, t);
  {
    ATerm y_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
        ATerm b_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_18;
          }
        c_41 = t;
        t = term_x_14;
        d_41 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_41), term_c_18);
        e_41 = t;
        t = SSL_printnl(d_41, e_41);
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, c_41), term_c_18));
        LocalPopChoice(a_18);
      }
    else
      {
        t = y_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
  t = diff_0_0(t);
  b_40 = t;
  t = map_1_0(t_3, t);
  {
    ATerm e_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_41 = NULL,w_41 = NULL,y_41 = NULL;
        ATerm j_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_18;
          }
        v_41 = t;
        t = term_x_14;
        w_41 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, v_41), term_l_18);
        y_41 = t;
        t = SSL_printnl(w_41, y_41);
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, v_41), term_l_18));
        LocalPopChoice(i_18);
      }
    else
      {
        t = e_18;
      }
  }
  t = y_39;
  t = map_1_0(u_3, t);
  z_39 = t;
  t = y_39;
  t = map_1_0(b_4, t);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_39, a_40);
  t = diff_0_0(t);
  e_40 = t;
  t = map_1_0(j_4, t);
  c_40 = t;
  t = e_40;
  t = map_1_0(l_4, t);
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_45 = NULL,m_45 = NULL,s_45 = NULL;
        ATerm o_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_18;
          }
        l_45 = t;
        t = term_x_14;
        m_45 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, l_45), term_q_18);
        s_45 = t;
        t = SSL_printnl(m_45, s_45);
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, l_45), term_q_18));
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
      }
  }
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(m_4, t);
        t = (ATerm) ATmakeAppl(sym__2, b_40, c_40);
        t = e_6(b_40, c_40, t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
      }
  }
  {
    ATerm u_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_19;
        t = get_options_0_0(t);
        t = oncetd_1_0(n_4, t);
        t = d_40;
        t = map_1_0(q_4, t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = u_18;
      }
  }
  {
    ATerm d_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_46 = NULL,i_46 = NULL;
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_46 = NULL;
            j_46 = t;
            t = term_t_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(t_4, t);
            t = j_46;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm l_46 = NULL;
              l_46 = t;
              t = term_c_19;
              t = get_options_0_0(t);
              t = oncetd_1_0(u_4, t);
              t = l_46;
            }
          }
        t = term_n_12;
        t = table_getlist_0_0(t);
        t = map_1_0(v_4, t);
        t = desugar_0_0(t);
        h_46 = t;
        t = (ATerm) ATmakeAppl(sym_PP_Table_1, h_46);
        i_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_19, (ATerm) ATmakeAppl(sym_PP_Table_1, h_46));
        t = y_5(d_5, i_46, t);
        t = output_1_0(_id, t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = d_19;
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
  w_46 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  x_46 = t;
  t = term_x_14;
  z_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_19), x_46), term_k_19);
  a_47 = t;
  t = SSL_printnl(z_46, a_47);
  t = term_z_14;
  y_46 = t;
  t = SSL_exit(y_46);
  t = w_46;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  if(match_string(t, "-k"))
    {
      t = c_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_47;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,h_47 = NULL;
  d_47 = t;
  t = SSL_string_to_int(d_47);
  e_47 = t;
  t = term_n_19;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, e_47);
  t = k_7(h_47, e_47, t);
  t = d_47;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, f_5, g_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  if(match_string(t, "-S"))
    {
      t = j_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_47;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  t = term_q_19;
  k_47 = t;
  t = term_s_19;
  l_47 = t;
  t = term_t_19;
  t = k_7(k_47, l_47, t);
  t = term_z_19;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_a_20;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  t = SSL_string_to_int(m_47);
  n_47 = t;
  t = term_q_19;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, n_47);
  t = k_7(o_47, n_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_47);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  t = term_f_20;
  p_47 = t;
  t = term_r_10;
  q_47 = t;
  t = term_g_20;
  t = k_7(p_47, q_47, t);
  t = term_h_20;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_5, k_5, l_5, t);
      LocalPopChoice(m_20);
    }
  else
    {
      t = k_20;
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_5, o_5, p_5, t);
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            t = Option_3_0(z_5, b_6, d_6, t);
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm f_41, ATerm g_41, ATerm t)
{
  ATerm r_47 = NULL;
  t = term_r_20;
  r_47 = t;
  t = SSL_table_put(r_47, f_41, g_41);
  t = (ATerm) ATmakeAppl(sym__3, term_r_20, f_41, g_41);
  return(t);
}
ATerm Option_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
      t = term_r_10;
      t = l_0(t);
      y_47 = t;
      t = term_s_20;
      z_47 = t;
      t = term_u_20;
      a_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_20, term_u_20, y_47);
      t = d_7(z_47, a_48, y_47, t);
      _fail(t);
    }
  else
    {
      ATerm f_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_47 = ATgetFirst((ATermList) t);
          v_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_47;
      t = i_0(t);
      t = term_r_10;
      t = k_0(t);
      f_48 = t;
      t = (ATerm) ATinsert(CheckATermList(v_47), f_48);
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  if(match_string(t, "-o"))
    {
      t = h_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_48;
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  i_48 = t;
  t = term_r_9;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, i_48);
  t = k_7(j_48, i_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_48);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_w_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, i_6, j_6, t);
  return(t);
}
static ATerm d_7 (ATerm f_46, ATerm g_46, ATerm e_46, ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_46, g_46);
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            ATerm a_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_46, g_46);
        t = i_7(f_46, g_46, t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = (ATerm) ATempty;
      }
  }
  m_48 = t;
  t = (ATerm) ATinsert(CheckATermList(m_48), e_46);
  n_48 = t;
  t = SSL_table_put(f_46, g_46, n_48);
  t = l_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
      t = term_r_10;
      t = p_0(t);
      y_48 = t;
      t = term_s_20;
      z_48 = t;
      t = term_u_20;
      a_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_20, term_u_20, y_48);
      t = d_7(z_48, a_49, y_48, t);
      _fail(t);
    }
  else
    {
      ATerm e_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_48 = ATgetFirst((ATermList) t);
          v_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_48 = ATgetFirst((ATermList) t);
          x_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_48;
      t = n_0(t);
      t = w_48;
      t = o_0(t);
      e_49 = t;
      t = (ATerm) ATinsert(CheckATermList(x_48), e_49);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_10;
  t = whoami_0_0(t);
  f_49 = t;
  t = term_x_14;
  h_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_21), f_49);
  i_49 = t;
  t = SSL_printnl(h_49, i_49);
  t = term_z_14;
  g_49 = t;
  t = SSL_exit(g_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_21;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_7 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm e_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_35, f_35);
      LocalPopChoice(g_21);
    }
  else
    {
      t = e_21;
      t = SSL_addr(e_35, f_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_81 (ATerm), ATerm p_81 (ATerm), ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
  k_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_49;
      t = o_81(t);
    }
  else
    {
      ATerm p_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_49 = ATgetFirst((ATermList) t);
          m_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_49;
      t = foldr_2_0(o_81, p_81, t);
      p_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_49, p_49);
      t = p_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_s_19;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm t_21 = NULL,v_21 = NULL;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(t_21, v_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_49 = NULL,k_21 = NULL,m_21 = NULL;
  t = times_0_0(t);
  m_21 = t;
  t = SSL_explode_term(m_21);
  if(match_cons(t, sym__2))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_21;
  t = foldr_2_0(l_6, r_6, t);
  s_49 = t;
  t = SSL_TicksToSeconds(s_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_50;
        if((e_50 != t))
          {
            _fail(t);
          }
        t = d_50;
        LocalPopChoice(n_21);
      }
    else
      {
        t = j_21;
        t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_50, f_50);
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = SSL_gtr(e_50, f_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm j_50 = NULL;
  j_50 = t;
  {
    ATerm s_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_50 = NULL;
        t = term_q_19;
        t = get_config_0_0(t);
        m_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_50, term_z_14);
        t = geq_0_0(t);
        t = j_50;
        t = a_90(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = s_21;
        t = j_50;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,v_50 = NULL,w_50 = NULL;
  t = run_time_0_0(t);
  s_50 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  t_50 = t;
  t = term_x_14;
  v_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_22), s_50), term_z_21), t_50);
  w_50 = t;
  t = SSL_printnl(v_50, w_50);
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_22), s_50), term_z_21), t_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_19;
  x_50 = t;
  t = SSL_exit(x_50);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  v_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_51 = ATgetArgument(t, 0);
          {
            ATerm m_23 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(v_51);
            m_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_51);
            o_7 = t;
            t = SSLsetAnnotations(o_7, m_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_92 (ATerm), ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_22;
      t = get_config_0_0(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = fetch_1_0(x_6, t);
    }
  t = q_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_51 = ATgetFirst((ATermList) t);
      z_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_52 = NULL,h_52 = NULL;
        static ATerm z_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_52)), not_null(h_52));
          return(t);
        }
        t = z_51;
        t = g_0(t);
        if(((g_52 != NULL) && (g_52 != t)))
          _fail(t);
        else
          g_52 = t;
        t = y_51;
        t = d_0(t);
        if(((h_52 != NULL) && (h_52 != t)))
          _fail(t);
        else
          h_52 = t;
        t = z_51;
        t = reverse_acc_2_0(d_0, z_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_10;
      t = g_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,w_7 = NULL;
  n_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_52);
  l_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_52);
  w_7 = t;
  t = SSLsetAnnotations(w_7, l_52);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm p_52 = NULL;
  p_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_52), term_f_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_21;
      t = get_config_0_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      t = fetch_1_0(f_7, t);
    }
  t = term_j_22;
  t = echo_0_0(t);
  t = term_s_20;
  j_52 = t;
  t = term_u_20;
  k_52 = t;
  t = term_k_22;
  t = i_7(j_52, k_52, t);
  t = reverse_acc_2_0(_id, g_7, t);
  t = map_1_0(j_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_75 (ATerm), ATerm t)
{
  static ATerm o_53 (ATerm t)
  {
    ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
    l_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_53 = ATgetFirst((ATermList) t);
        n_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_22 = t;
      int m_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_24 = NULL,i_24 = NULL,k_9 = NULL;
          t = SSLgetAnnotations(l_53);
          e_24 = t;
          t = m_53;
          t = v_75(t);
          i_24 = t;
          t = (ATerm) ATinsert(CheckATermList(n_53), i_24);
          k_9 = t;
          t = SSLsetAnnotations(k_9, e_24);
          LocalPopChoice(m_22);
        }
      else
        {
          t = l_22;
          {
            ATerm x_24 = NULL,g_25 = NULL,l_9 = NULL;
            t = SSLgetAnnotations(l_53);
            x_24 = t;
            t = n_53;
            t = o_53(t);
            g_25 = t;
            t = (ATerm) ATinsert(CheckATermList(g_25), m_53);
            l_9 = t;
            t = SSLsetAnnotations(l_9, x_24);
          }
        }
    }
    return(t);
  }
  t = o_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_53 = NULL,t_53 = NULL,u_53 = NULL;
  s_53 = t;
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_22 = ATgetFirst((ATermList) t);
                ATerm q_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_53;
          }
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = (ATerm) ATinsert(ATempty, s_53);
      }
  }
  t_53 = t;
  t = term_v_9;
  u_53 = t;
  t = SSL_printnl(u_53, t_53);
  t = s_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm b_31, ATerm c_31, ATerm t)
{
  t = SSL_strcat(b_31, c_31);
  return(t);
}
ATerm debug_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL;
  y_53 = t;
  t = a_75(t);
  z_53 = t;
  t = term_x_14;
  a_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_53), z_53);
  b_54 = t;
  t = SSL_printnl(a_54, b_54);
  t = y_53;
  return(t);
}
ATerm map_1_0 (ATerm l_75 (ATerm), ATerm t)
{
  static ATerm q_54 (ATerm t)
  {
    ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
    n_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_54;
      }
    else
      {
        ATerm v_25 = NULL,b_26 = NULL,c_26 = NULL,o_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_54 = ATgetFirst((ATermList) t);
            p_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_54);
        v_25 = t;
        t = o_54;
        t = l_75(t);
        b_26 = t;
        t = p_54;
        t = q_54(t);
        c_26 = t;
        t = (ATerm) ATinsert(CheckATermList(c_26), b_26);
        o_9 = t;
        t = SSLsetAnnotations(o_9, v_25);
      }
    return(t);
  }
  t = q_54(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_54 = NULL;
      y_54 = t;
      t = SSL_is_string(y_54);
      LocalPopChoice(y_22);
    }
  else
    {
      t = u_22;
      {
        ATerm z_22 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_7, t);
            LocalPopChoice(b_23);
          }
        else
          {
            t = z_22;
            {
              ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
              e_55 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_55 = ATgetArgument(t, 0);
                  t = f_55;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_55 = ATgetArgument(t, 0);
                      t = f_55;
                      {
                        ATerm i_23 = t;
                        int o_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(o_23);
                          }
                        else
                          {
                            t = i_23;
                            t = debug_1_0(m_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_55 = NULL,l_55 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_55 = ATgetArgument(t, 0);
                          g_55 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_55;
                      t = eval_config_0_0(t);
                      k_55 = t;
                      t = g_55;
                      t = eval_config_0_0(t);
                      l_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_55, l_55);
                      t = h_7(k_55, l_55, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm w_47, ATerm x_47, ATerm t)
{
  t = SSL_table_get(w_47, x_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  p_55 = t;
  t = term_r_20;
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_20, p_55);
  t = i_7(q_55, p_55, t);
  {
    ATerm p_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_55 = NULL,s_55 = NULL;
        t = eval_config_0_0(t);
        r_55 = t;
        t = term_r_20;
        s_55 = t;
        t = SSL_table_put(s_55, p_55, r_55);
        t = r_55;
        LocalPopChoice(r_23);
      }
    else
      {
        t = p_23;
      }
  }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  t = term_s_23;
  v_55 = t;
  t = term_r_10;
  w_55 = t;
  t = term_t_23;
  t = k_7(v_55, w_55, t);
  return(t);
}
static ATerm q_7 (ATerm t)
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
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
  t = term_s_23;
  z_55 = t;
  t = term_r_10;
  a_56 = t;
  t = term_t_23;
  t = k_7(z_55, a_56, t);
  t = term_x_23;
  x_55 = t;
  t = term_r_10;
  y_55 = t;
  t = term_y_23;
  t = k_7(x_55, y_55, t);
  t = term_z_23;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_7, p_7, q_7, t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = d_24;
      t = Option_3_0(t_7, u_7, v_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_52 (ATerm), ATerm u_52 (ATerm), ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,t_9 = NULL;
  g_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_56 = ATgetFirst((ATermList) t);
      d_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_56);
  b_56 = t;
  t = c_56;
  t = t_52(t);
  e_56 = t;
  t = d_56;
  t = u_52(t);
  f_56 = t;
  t = (ATerm) ATinsert(CheckATermList(f_56), e_56);
  t_9 = t;
  t = SSLsetAnnotations(t_9, b_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,q_56 = NULL,r_56 = NULL,o_11 = NULL;
  l_56 = t;
  {
    ATerm h_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_24;
        t = t_94(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = h_24;
      }
  }
  t = l_56;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_56 = ATgetFirst((ATermList) t);
      o_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_56);
  m_56 = t;
  t = term_c_21;
  r_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_21, n_56);
  t = k_7(r_56, n_56, t);
  t = o_56;
  {
    static ATerm b_57 (ATerm t)
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_56 = NULL;
              u_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_56;
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              t = t_94(t);
              t = Cons_2_0(_id, b_57, t);
            }
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          {
            ATerm x_56 = NULL,y_56 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_56 = ATgetFirst((ATermList) t);
                y_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_56), (ATerm) ATmakeAppl(sym_Undefined_1, x_56));
          }
        }
      return(t);
    }
    t = b_57(t);
  }
  q_56 = t;
  t = (ATerm) ATinsert(CheckATermList(q_56), (ATerm) ATmakeAppl(sym_Program_1, n_56));
  o_11 = t;
  t = SSLsetAnnotations(o_11, m_56);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm n_57 = NULL;
  n_57 = t;
  if(match_string(t, "--help"))
    {
      t = n_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_57;
        }
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL;
  t = term_d_22;
  o_57 = t;
  t = term_r_10;
  p_57 = t;
  t = term_t_24;
  t = k_7(o_57, p_57, t);
  t = term_u_24;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
  i_57 = t;
  t = term_s_20;
  k_57 = t;
  t = term_u_20;
  l_57 = t;
  t = (ATerm) ATempty;
  m_57 = t;
  t = SSL_table_put(k_57, l_57, m_57);
  t = i_57;
  {
    static ATerm x_7 (ATerm t)
    {
      ATerm b_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_94(t);
          LocalPopChoice(d_25);
        }
      else
        {
          t = b_25;
          {
            ATerm e_25 = t;
            int h_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_7, b_8, c_8, t);
                LocalPopChoice(h_25);
              }
            else
              {
                t = e_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_7, t);
  }
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_57 = NULL;
        w_57 = t;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_27 = NULL;
              t = w_57;
              {
                ATerm m_25 = t;
                int p_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_d_22;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_25);
                  }
                else
                  {
                    t = m_25;
                    t = fetch_1_0(i_8, t);
                  }
              }
              t = w_57;
              t = default_system_usage_0_0(t);
              t = term_s_19;
              m_27 = t;
              t = SSL_exit(m_27);
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              {
                ATerm u_27 = NULL;
                t = term_s_23;
                t = get_config_0_0(t);
                t = w_57;
                t = default_system_about_0_0(t);
                t = term_s_19;
                u_27 = t;
                t = SSL_exit(u_27);
              }
            }
        }
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
              static ATerm j_8 (ATerm t)
              {
                ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,q_11 = NULL;
                c_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_58);
                a_58 = t;
                t = b_58;
                if(((g_57 != NULL) && (g_57 != t)))
                  _fail(t);
                else
                  g_57 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_58);
                q_11 = t;
                t = SSLsetAnnotations(q_11, a_58);
                return(t);
              }
              t = fetch_1_0(j_8, t);
              t = term_x_14;
              y_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_57)), term_s_25);
              z_57 = t;
              t = SSL_printnl(y_57, z_57);
              t = (ATerm) ATmakeAppl(sym__2, term_x_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_57)), term_s_25));
              t = default_system_usage_0_0(t);
              t = term_z_14;
              x_57 = t;
              t = SSL_exit(x_57);
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
            }
        }
      }
  }
  h_57 = t;
  t = term_s_20;
  j_57 = t;
  t = SSL_table_destroy(j_57);
  t = h_57;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_92 (ATerm), ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm v_92 (ATerm), ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL;
  t = parse_options_1_0(s_92, t);
  h_58 = t;
  t = term_j_12;
  k_58 = t;
  t = SSL_table_create(k_58);
  t = term_j_12;
  i_58 = t;
  t = term_k_12;
  j_58 = t;
  t = SSL_table_put(i_58, j_58, h_58);
  t = h_58;
  t = u_92(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_92, t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          ATerm w_25 = t;
          int x_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_92(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_25);
            }
          else
            {
              t = w_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_8, m_8, n_8, t);
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm a_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(o_8, p_8, q_8, t);
            LocalPopChoice(e_26);
          }
        else
          {
            t = a_26;
            {
              ATerm g_26 = t;
              int l_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(s_8, t_8, u_8, t);
                  LocalPopChoice(l_26);
                }
              else
                {
                  t = g_26;
                  {
                    ATerm m_26 = t;
                    int n_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(y_8, a_9, b_9, t);
                        LocalPopChoice(n_26);
                      }
                    else
                      {
                        t = m_26;
                        {
                          ATerm o_26 = t;
                          int p_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(c_9, d_9, e_9, t);
                              LocalPopChoice(p_26);
                            }
                          else
                            {
                              t = o_26;
                              {
                                ATerm q_26 = t;
                                int r_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
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
                                          t = Option_3_0(f_9, g_9, h_9, t);
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
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(v_26);
                                              }
                                            else
                                              {
                                                t = u_26;
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
  t = term_w_26;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_c_19;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm m_58 = NULL;
  m_58 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, m_58);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_a_27;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm n_58 = NULL;
  n_58 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, n_58);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_f_27;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL;
  t = term_z_9;
  o_58 = t;
  t = term_r_10;
  p_58 = t;
  t = term_g_27;
  t = k_7(o_58, p_58, t);
  t = term_h_27;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_i_27;
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

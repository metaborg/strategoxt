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
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_a_26;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_t_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_n_23;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_j_19;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_b_18;
ATerm term_r_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_q_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_l_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_q_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_v_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_o_12);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_n_12);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_c_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_q_10);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_d_21);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_q_10);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_q_10);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_q_10);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_q_10);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_70 (ATerm), ATerm t);
ATerm get_options_0_0 (ATerm t);
static ATerm u_5 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm v_5 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm x_5 (ATerm y_75 (ATerm), ATerm r_156, ATerm s_17, ATerm t);
static ATerm w_5 (ATerm k_17, ATerm l_17, ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm output_1_0 (ATerm a_94 (ATerm), ATerm t);
static ATerm y_5 (ATerm u_32, ATerm v_32, ATerm t);
static ATerm z_5 (ATerm v_99 (ATerm), ATerm y_52, ATerm t);
ATerm escape_chars_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm e_6 (ATerm u_15, ATerm v_15, ATerm t);
static ATerm t_0 (ATerm t);
ATerm path_to_string_0_0 (ATerm t);
static ATerm f_6 (ATerm g_80 (ATerm), ATerm f_23, ATerm e_23, ATerm t);
ATerm at_end_1_0 (ATerm x_76 (ATerm), ATerm t);
static ATerm m_17 (ATerm v_16, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm k_6 (ATerm j_601, ATerm o_601, ATerm n_51, ATerm t);
ATerm while_not_2_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm n_22 (ATerm e_20, ATerm f_20, ATerm g_20, ATerm t);
static ATerm d_2 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm m_6 (ATerm l_80 (ATerm), ATerm h_23, ATerm g_23, ATerm t);
ATerm foldr_3_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm collect_om_2_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t);
static ATerm n_6 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm l_23, ATerm k_23, ATerm t);
static ATerm o_6 (ATerm e_80 (ATerm), ATerm d_23, ATerm c_23, ATerm t);
static ATerm p_6 (ATerm x_48, ATerm y_48, ATerm t);
static ATerm q_2 (ATerm t);
ATerm mk_key_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm q_6 (ATerm y_51, ATerm z_51, ATerm t);
ATerm unescape_chars_1_0 (ATerm z_85 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm i_77 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm unquote_chars_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
static ATerm w_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm MakePPTerm_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_69 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm y_6 (ATerm x_51, ATerm t);
static ATerm h_3 (ATerm t);
ATerm type_failure_0_0 (ATerm t);
static ATerm g_36 (ATerm z_35, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_7 (ATerm q_17, ATerm t);
static ATerm b_7 (ATerm k_32, ATerm l_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_38 (ATerm t_36, ATerm t);
static ATerm i_38 (ATerm y_36, ATerm z_36, ATerm a_37, ATerm t);
static ATerm j_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t);
static ATerm c_7 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm read_pp_tables_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm t_76 (ATerm), ATerm t);
ATerm option_value_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm z_3 (ATerm t);
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
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_7 (ATerm b_42, ATerm c_42, ATerm t);
ATerm Option_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm d_7 (ATerm b_47, ATerm c_47, ATerm a_47, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_7 (ATerm e_35, ATerm f_35, ATerm t);
ATerm foldr_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_91 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm need_help_1_0 (ATerm r_93 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_76 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_7 (ATerm b_31, ATerm c_31, ATerm t);
ATerm debug_1_0 (ATerm w_75 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_76 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm i_7 (ATerm s_48, ATerm t_48, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_53 (ATerm), ATerm q_53 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_95 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm parse_options_1_0 (ATerm t_95 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
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
  ATerm j_0 = NULL,r_0 = NULL,u_0 = NULL;
  j_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_0;
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
ATerm oncetd_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm x_0 = t;
    int x_3 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_70(t);
        LocalPopChoice(x_3);
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
  t = term_u_9;
  h_1 = t;
  t = term_v_9;
  j_1 = t;
  t = term_w_9;
  t = i_7(h_1, j_1, t);
  return(t);
}
static ATerm u_5 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm k_1 = NULL;
  t = SSL_fputc(i_32, j_32);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_1);
  return(t);
}
static ATerm v_5 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm l_1 = NULL;
  t = SSL_write_term_to_stream_text(o_17, p_17);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_1);
  return(t);
}
static ATerm x_5 (ATerm y_75 (ATerm), ATerm r_156, ATerm s_17, ATerm t)
{
  ATerm m_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_156, term_x_9);
  t = c_7(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, s_17);
  t = y_75(t);
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
static ATerm w_5 (ATerm k_17, ATerm l_17, ATerm t)
{
  ATerm n_1 = NULL;
  t = SSL_write_term_to_stream_baf(k_17, l_17);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_1);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          q_1 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      r_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(q_1, r_1, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_9 = ATgetArgument(t, 0);
      if(match_cons(z_9, sym_Stream_1))
        {
          w_1 = ATgetArgument(z_9, 0);
        }
      else
        _fail(t);
      x_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(w_1, x_1, t);
  t_1 = t;
  t = term_a_10;
  u_1 = t;
  t = t_1;
  if(match_cons(t, sym_Stream_1))
    {
      v_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, t_1);
  t = u_5(u_1, v_1, t);
  return(t);
}
ATerm output_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  t = a_94(t);
  p_1 = t;
  {
    ATerm b_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_10;
        t = get_config_0_0(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = b_10;
        t = term_f_10;
      }
  }
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_1, p_1);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_10;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, o_1, p_1);
        LocalPopChoice(h_10);
        if(match_cons(t, sym__2))
          {
            ATerm j_10 = ATgetArgument(t, 0);
            ATerm m_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(b_0, o_1, p_1, t);
      }
    else
      {
        t = g_10;
        if(match_cons(t, sym__2))
          {
            ATerm n_10 = ATgetArgument(t, 0);
            ATerm o_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_5(c_0, o_1, p_1, t);
      }
  }
  return(t);
}
static ATerm y_5 (ATerm u_32, ATerm v_32, ATerm t)
{
  t = SSL_mkterm(u_32, v_32);
  return(t);
}
static ATerm z_5 (ATerm v_99 (ATerm), ATerm y_52, ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  t = term_q_10;
  t = v_99(t);
  y_1 = t;
  t = (ATerm) ATinsert(ATempty, y_52);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, (ATerm) ATinsert(ATempty, y_52));
  t = y_5(y_1, z_1, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,n_2 = NULL,o_2 = NULL,z_0 = NULL;
      ATerm t_10 = t;
      int v_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_2 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_11 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_11) != AT_INT) || (ATgetInt((ATermInt) a_11) != 34)))
                _fail(t);
              v_2 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(v_2), term_h_11), term_e_11);
          LocalPopChoice(v_10);
        }
      else
        {
          t = t_10;
          {
            ATerm x_2 = NULL,c_3 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_2 = ATgetFirst((ATermList) t);
                c_3 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_2;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_3), term_e_11), term_e_11);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(c_3), term_l_11), term_e_11);
              }
          }
        }
      o_2 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_2 = ATgetFirst((ATermList) t);
          l_2 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_2);
      i_2 = t;
      t = l_2;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      n_2 = t;
      t = (ATerm) ATinsert(CheckATermList(n_2), j_2);
      z_0 = t;
      t = SSLsetAnnotations(z_0, i_2);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL;
        w_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_3 = ATgetFirst((ATermList) t);
            v_3 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_0 = NULL,m_0 = NULL,a_1 = NULL;
              t = SSLgetAnnotations(w_3);
              e_0 = t;
              t = v_3;
              t = escape_chars_0_0(t);
              m_0 = t;
              t = (ATerm) ATinsert(CheckATermList(m_0), u_3);
              a_1 = t;
              t = SSLsetAnnotations(a_1, e_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_3;
          }
      }
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,k_9 = NULL,m_9 = NULL,n_9 = NULL;
  n_9 = t;
  if(match_cons(t, sym_Arg_1))
    {
      k_9 = ATgetArgument(t, 0);
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_2 = NULL,g_2 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(n_9);
            e_2 = t;
            t = SSL_int_to_string(k_9);
            g_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, g_2);
            d_1 = t;
            t = SSLsetAnnotations(d_1, e_2);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = n_9;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          k_9 = ATgetArgument(t, 0);
          d_9 = ATgetArgument(t, 1);
          {
            ATerm p_11 = t;
            int t_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_2 = NULL,y_2 = NULL,z_2 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(n_9);
                s_2 = t;
                t = SSL_int_to_string(k_9);
                y_2 = t;
                t = SSL_int_to_string(d_9);
                z_2 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, y_2, z_2);
                e_1 = t;
                t = SSLsetAnnotations(e_1, s_2);
                LocalPopChoice(t_11);
              }
            else
              {
                t = p_11;
                t = n_9;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              k_9 = ATgetArgument(t, 0);
              d_9 = ATgetArgument(t, 1);
              {
                ATerm a_12 = t;
                int d_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_3 = NULL,f_1 = NULL;
                    t = SSLgetAnnotations(n_9);
                    s_3 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, k_9, d_9);
                    f_1 = t;
                    t = SSLsetAnnotations(f_1, s_3);
                    LocalPopChoice(d_12);
                  }
                else
                  {
                    t = a_12;
                    t = n_9;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  k_9 = ATgetArgument(t, 0);
                  {
                    ATerm e_12 = t;
                    int f_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_4 = NULL,j_4 = NULL,i_1 = NULL,u_4 = NULL,v_4 = NULL,c_5 = NULL,o_4 = NULL;
                        t = SSLgetAnnotations(n_9);
                        h_4 = t;
                        t = SSL_explode_string(k_9);
                        t = escape_chars_0_0(t);
                        o_4 = t;
                        t = SSL_implode_string(o_4);
                        v_4 = t;
                        t = SSL_explode_string(v_4);
                        c_5 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_5), term_h_11), (ATerm) ATinsert(ATempty, term_h_11));
                        t = conc_0_0(t);
                        u_4 = t;
                        t = SSL_implode_string(u_4);
                        j_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, j_4);
                        i_1 = t;
                        t = SSLsetAnnotations(i_1, h_4);
                        LocalPopChoice(f_12);
                      }
                    else
                      {
                        t = e_12;
                        t = n_9;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      k_9 = ATgetArgument(t, 0);
                      d_9 = ATgetArgument(t, 1);
                      {
                        ATerm g_12 = t;
                        int h_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_5 = NULL,t_5 = NULL,s_1 = NULL;
                            t = SSLgetAnnotations(n_9);
                            o_5 = t;
                            t = SSL_int_to_string(k_9);
                            t_5 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, t_5, d_9);
                            s_1 = t;
                            t = SSLsetAnnotations(s_1, o_5);
                            LocalPopChoice(h_12);
                          }
                        else
                          {
                            t = g_12;
                            t = n_9;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          k_9 = ATgetArgument(t, 0);
                          t = k_9;
                          if(match_cons(t, sym_Path_2))
                            {
                              m_9 = ATgetArgument(t, 0);
                              e_9 = ATgetArgument(t, 1);
                              {
                                ATerm i_12 = t;
                                int j_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_7 = NULL,q_7 = NULL;
                                    t = (ATerm) ATinsert(ATinsert(ATempty, m_9), term_k_12);
                                    q_7 = t;
                                    t = SSL_concat_strings(q_7);
                                    p_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_Path_2, p_7, e_9);
                                    LocalPopChoice(j_12);
                                  }
                                else
                                  {
                                    t = i_12;
                                    t = n_9;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Path1_1))
                                {
                                  m_9 = ATgetArgument(t, 0);
                                  {
                                    ATerm l_12 = t;
                                    int m_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm z_7 = NULL,a_8 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, m_9), term_k_12);
                                        a_8 = t;
                                        t = SSL_concat_strings(a_8);
                                        z_7 = t;
                                        t = (ATerm) ATmakeAppl(sym_Path1_1, z_7);
                                        LocalPopChoice(m_12);
                                      }
                                    else
                                      {
                                        t = l_12;
                                        t = n_9;
                                      }
                                  }
                                }
                              else
                                {
                                  t = n_9;
                                }
                            }
                        }
                      else
                        {
                          t = n_9;
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
  t = topdown_1_0(f_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_10 = NULL;
  static ATerm h_0 (ATerm t)
  {
    ATerm x_10 = NULL,y_10 = NULL;
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), x_10);
    t = i_7(not_null(w_10), x_10, t);
    y_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_10, y_10);
    return(t);
  }
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = SSL_table_keys(w_10);
  t = map_1_0(h_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm z_10 = NULL,c_11 = NULL,d_11 = NULL,f_11 = NULL;
  z_10 = t;
  t = term_n_12;
  f_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, z_10);
  t = i_7(f_11, z_10, t);
  c_11 = t;
  t = term_o_12;
  d_11 = t;
  t = SSL_table_put(d_11, z_10, c_11);
  t = (ATerm) ATmakeAppl(sym__3, term_o_12, z_10, c_11);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm g_11 = NULL,i_11 = NULL,j_11 = NULL,m_11 = NULL,s_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,n_3 = NULL;
  g_11 = t;
  t = term_o_12;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_12, g_11);
  t = i_7(w_11, g_11, t);
  c_12 = t;
  if(match_cons(t, sym__2))
    {
      y_11 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_12);
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, y_11), z_11);
  n_3 = t;
  t = SSLsetAnnotations(n_3, x_11);
  b_12 = t;
  t = term_o_12;
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, g_11);
  v_11 = t;
  t = SSL_table_put(s_11, v_11, b_12);
  t = term_n_12;
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, g_11);
  t = i_7(m_11, g_11, t);
  i_11 = t;
  t = term_o_12;
  j_11 = t;
  t = SSL_table_put(j_11, g_11, i_11);
  t = (ATerm) ATmakeAppl(sym__3, term_o_12, g_11, i_11);
  return(t);
}
static ATerm e_6 (ATerm u_15, ATerm v_15, ATerm t)
{
  t = u_15;
  t = map_1_0(q_0, t);
  t = v_15;
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_8), term_r_12), u_8), term_p_12);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,y_12 = NULL;
  v_12 = t;
  if(match_cons(t, sym_Path1_1))
    {
      w_12 = ATgetArgument(t, 0);
      t = w_12;
    }
  else
    {
      ATerm q_8 = NULL,r_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          w_12 = ATgetArgument(t, 0);
          y_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_12;
      t = map_1_0(t_0, t);
      t = concat_0_0(t);
      q_8 = t;
      t = (ATerm) ATinsert(CheckATermList(q_8), w_12);
      r_8 = t;
      t = SSL_concat_strings(r_8);
    }
  return(t);
}
static ATerm f_6 (ATerm g_80 (ATerm), ATerm f_23, ATerm e_23, ATerm t)
{
  static ATerm j_14 (ATerm t)
  {
    ATerm w_13 = NULL,d_14 = NULL,g_14 = NULL;
    w_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_13;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_14 = ATgetFirst((ATermList) t);
            g_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_12 = t;
          int t_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_13;
              {
                static ATerm v_0 (ATerm t)
                {
                  t = e_23;
                  return(t);
                }
                t = n_6(g_80, v_0, d_14, g_14, t);
              }
              t = j_14(t);
              LocalPopChoice(t_12);
            }
          else
            {
              t = s_12;
              {
                ATerm i_9 = NULL,q_9 = NULL,q_3 = NULL;
                t = SSLgetAnnotations(w_13);
                i_9 = t;
                t = g_14;
                t = j_14(t);
                q_9 = t;
                t = (ATerm) ATinsert(CheckATermList(q_9), d_14);
                q_3 = t;
                t = SSLsetAnnotations(q_3, i_9);
              }
            }
        }
      }
    return(t);
  }
  t = f_23;
  t = j_14(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  static ATerm r_16 (ATerm t)
  {
    ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
    q_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_16 = ATgetFirst((ATermList) t);
        p_16 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_10 = NULL,k_10 = NULL,t_3 = NULL;
          t = SSLgetAnnotations(q_16);
          c_10 = t;
          t = p_16;
          t = r_16(t);
          k_10 = t;
          t = (ATerm) ATinsert(CheckATermList(k_10), o_16);
          t_3 = t;
          t = SSLsetAnnotations(t_3, c_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_16;
        t = x_76(t);
      }
    return(t);
  }
  t = r_16(t);
  return(t);
}
static ATerm m_17 (ATerm v_16, ATerm t)
{
  ATerm w_16 = NULL;
  t = SSL_explode_term(v_16);
  if(match_cons(t, sym__2))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_16;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_16 = NULL,g_17 = NULL,h_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t)
            {
              t = g_17;
              return(t);
            }
            t = y_16;
            t = at_end_1_0(w_0, t);
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            t = m_17(h_17, t);
          }
      }
    }
  else
    {
      t = m_17(h_17, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm m_78 (ATerm), ATerm n_78 (ATerm), ATerm t)
{
  static ATerm f_18 (ATerm t)
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_78(t);
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        {
          ATerm n_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,z_17 = NULL,l_4 = NULL;
          t = l_78(t);
          z_17 = t;
          if(match_cons(t, sym__2))
            {
              t_17 = ATgetArgument(t, 0);
              u_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_17);
          n_17 = t;
          t = t_17;
          t = n_78(t);
          v_17 = t;
          t = u_17;
          t = f_18(t);
          w_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_17, w_17);
          l_4 = t;
          t = SSLsetAnnotations(l_4, n_17);
          t = m_78(t);
        }
      }
    return(t);
  }
  t = f_18(t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
        _fail(t);
      {
        ATerm e_13 = ATgetArgument(t, 1);
        if(((ATgetType(e_13) != AT_LIST) || !(ATisEmpty(e_13))))
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
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_13 = ATgetArgument(t, 0);
      if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
        {
          x_18 = ATgetFirst((ATermList) f_13);
          y_18 = (ATerm) ATgetNext((ATermList) f_13);
        }
      else
        _fail(t);
      {
        ATerm g_13 = ATgetArgument(t, 1);
        if(((ATgetType(g_13) == AT_LIST) && !(ATisEmpty(g_13))))
          {
            z_18 = ATgetFirst((ATermList) g_13);
            a_19 = (ATerm) ATgetNext((ATermList) g_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_18, z_18), (ATerm) ATmakeAppl(sym__2, y_18, a_19));
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_19), b_19);
  return(t);
}
static ATerm k_6 (ATerm j_601, ATerm o_601, ATerm n_51, ATerm t)
{
  ATerm h_18 = NULL,j_18 = NULL,p_18 = NULL,v_18 = NULL;
  t = SSL_explode_term(o_601);
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      p_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_601);
  if(match_cons(t, sym__2))
    {
      if((h_18 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_18, p_18);
  t = genzip_4_0(y_0, b_1, c_1, _id, t);
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_18, n_51);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_69 (ATerm), ATerm n_69 (ATerm), ATerm t)
{
  static ATerm k_19 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_69(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = n_69(t);
        t = k_19(t);
      }
    return(t);
  }
  t = k_19(t);
  return(t);
}
ATerm for_3_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm t)
{
  t = p_69(t);
  t = while_not_2_0(q_69, r_69, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_19);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,b_20 = NULL,d_20 = NULL,r_4 = NULL;
  d_20 = t;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  x_19 = t;
  t = b_20;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_19, b_20);
  r_4 = t;
  t = SSLsetAnnotations(r_4, x_19);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,u_21 = NULL;
  o_21 = t;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_21 = ATgetFirst((ATermList) t);
      u_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_22(p_21, q_21, o_21, t);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_21), r_21), u_21);
          }
      }
    }
  else
    {
      t = n_22(p_21, q_21, o_21, t);
    }
  return(t);
}
static ATerm n_22 (ATerm e_20, ATerm f_20, ATerm g_20, ATerm t)
{
  ATerm j_20 = NULL,p_20 = NULL,s_4 = NULL,v_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  t = SSLgetAnnotations(g_20);
  j_20 = t;
  t = f_20;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_20 = ATgetFirst((ATermList) t);
      z_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_20;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_20;
        if((x_20 != t))
          {
            _fail(t);
          }
        t = z_20;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = f_20;
        t = k_6(x_20, y_20, z_20, t);
      }
  }
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_20, p_20);
  s_4 = t;
  t = SSLsetAnnotations(s_4, j_20);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      if((m_22 != ATgetArgument(t, 1)))
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
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_2, b_2, c_2, t);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm z_21 = NULL,c_22 = NULL,e_22 = NULL;
        z_21 = t;
        if(match_cons(t, sym__2))
          {
            c_22 = ATgetArgument(t, 0);
            e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_21;
        t = f_6(d_2, c_22, e_22, t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm l_80 (ATerm), ATerm h_23, ATerm g_23, ATerm t)
{
  static ATerm j_23 (ATerm t)
  {
    ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
    y_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_23;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_22 = ATgetFirst((ATermList) t);
            a_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_22;
              {
                static ATerm f_2 (ATerm t)
                {
                  t = g_23;
                  return(t);
                }
                t = n_6(l_80, f_2, z_22, a_23, t);
              }
              t = j_23(t);
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              {
                ATerm b_11 = NULL,k_11 = NULL,x_4 = NULL;
                t = SSLgetAnnotations(y_22);
                b_11 = t;
                t = a_23;
                t = j_23(t);
                k_11 = t;
                t = (ATerm) ATinsert(CheckATermList(k_11), z_22);
                x_4 = t;
                t = SSLsetAnnotations(x_4, b_11);
              }
            }
        }
      }
    return(t);
  }
  t = h_23;
  t = j_23(t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm o_82 (ATerm), ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,v_23 = NULL;
  s_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_23;
      t = m_82(t);
    }
  else
    {
      ATerm z_23 = NULL,a_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_23 = ATgetFirst((ATermList) t);
          v_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_23;
      t = o_82(t);
      z_23 = t;
      t = v_23;
      t = foldr_3_0(m_82, n_82, o_82, t);
      a_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_23, a_24);
      t = n_82(t);
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_24 = NULL;
      t = q_81(t);
      e_24 = t;
      t = (ATerm) ATinsert(ATempty, e_24);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm q_11 = NULL,r_11 = NULL;
        static ATerm k_2 (ATerm t)
        {
          t = collect_om_2_0(q_81, r_81, t);
          return(t);
        }
        r_11 = t;
        t = SSL_explode_term(r_11);
        if(match_cons(t, sym__2))
          {
            ATerm u_13 = ATgetArgument(t, 0);
            q_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_11;
        t = foldr_3_0(h_2, r_81, k_2, t);
      }
    }
  return(t);
}
static ATerm n_6 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm l_23, ATerm k_23, ATerm t)
{
  t = p_80(t);
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm g_24 = NULL;
      g_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_23, g_24);
      t = o_80(t);
      return(t);
    }
    t = fetch_1_0(m_2, t);
  }
  t = k_23;
  return(t);
}
static ATerm o_6 (ATerm e_80 (ATerm), ATerm d_23, ATerm c_23, ATerm t)
{
  static ATerm l_25 (ATerm t)
  {
    static ATerm n_25 (ATerm o_24, ATerm t)
    {
      ATerm s_24 = NULL,v_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,z_4 = NULL;
      t = o_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm p_2 (ATerm t)
        {
          t = c_23;
          return(t);
        }
        t = n_6(e_80, p_2, s_24, v_24, t);
      }
      t = o_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_24 = ATgetFirst((ATermList) t);
          z_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_24);
      w_24 = t;
      t = z_24;
      t = l_25(t);
      a_25 = t;
      t = (ATerm) ATinsert(CheckATermList(a_25), y_24);
      z_4 = t;
      t = SSLsetAnnotations(z_4, w_24);
      return(t);
    }
    ATerm b_25 = NULL,f_25 = NULL;
    b_25 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_25;
      }
    else
      {
        ATerm v_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_13 = ATgetFirst((ATermList) t);
                f_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(x_13);
            {
              ATerm z_13 = t;
              int a_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_25(b_25, t);
                  LocalPopChoice(a_14);
                }
              else
                {
                  t = z_13;
                  t = f_25;
                  t = l_25(t);
                }
            }
          }
        else
          {
            t = v_13;
            t = n_25(b_25, t);
          }
      }
    return(t);
  }
  t = d_23;
  t = l_25(t);
  return(t);
}
static ATerm p_6 (ATerm x_48, ATerm y_48, ATerm t)
{
  t = SSL_table_rename(x_48, y_48);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm j_26 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      j_26 = ATgetArgument(t, 0);
      {
        ATerm b_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_26;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      r_25 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, r_25);
    }
  else
    {
      ATerm i_26 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          r_25 = ATgetArgument(t, 0);
          t_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_25;
      t = map_1_0(q_2, t);
      i_26 = t;
      t = (ATerm) ATinsert(CheckATermList(i_26), r_25);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm q_6 (ATerm y_51, ATerm z_51, ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  t = y_51;
  t = mk_key_0_0(t);
  l_26 = t;
  t = term_e_14;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, z_51);
  n_26 = t;
  t = SSL_table_put(m_26, l_26, n_26);
  t = y_51;
  t = path_to_string_0_0(t);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_26, z_51);
  t = if_verbose1_1_0(r_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  static ATerm j_27 (ATerm t)
  {
    ATerm e_27 = NULL,f_27 = NULL,i_27 = NULL;
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_85(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
      }
    i_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_27 = ATgetFirst((ATermList) t);
        f_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_12 = NULL,x_12 = NULL,b_5 = NULL;
          t = SSLgetAnnotations(i_27);
          q_12 = t;
          t = f_27;
          t = j_27(t);
          x_12 = t;
          t = (ATerm) ATinsert(CheckATermList(x_12), e_27);
          b_5 = t;
          t = SSLsetAnnotations(b_5, q_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_27;
      }
    return(t);
  }
  t = j_27(t);
  return(t);
}
ATerm at_last_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  static ATerm j_29 (ATerm t)
  {
    ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
    g_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_29 = ATgetFirst((ATermList) t);
        i_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_13 = NULL,e_5 = NULL;
          t = SSLgetAnnotations(g_29);
          n_13 = t;
          t = i_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(i_29), h_29);
          e_5 = t;
          t = SSLsetAnnotations(e_5, n_13);
          t = i_77(t);
          LocalPopChoice(l_14);
        }
      else
        {
          t = k_14;
          {
            ATerm f_14 = NULL,n_14 = NULL,f_5 = NULL;
            t = SSLgetAnnotations(g_29);
            f_14 = t;
            t = i_29;
            t = j_29(t);
            n_14 = t;
            t = (ATerm) ATinsert(CheckATermList(n_14), h_29);
            f_5 = t;
            t = SSLsetAnnotations(f_5, f_14);
          }
        }
    }
    return(t);
  }
  t = j_29(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_29 = NULL,z_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_29 = ATgetFirst((ATermList) t);
      z_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_29;
    }
  else
    {
      t = z_29;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm r_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_14 = ATgetFirst((ATermList) t);
      r_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_30;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,m_30 = NULL,q_30 = NULL;
  k_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_30 = ATgetFirst((ATermList) t);
      {
        ATerm o_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_30;
  t = l_85(t);
  t = k_30;
  t = last_0_0(t);
  t = m_85(t);
  t = k_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_14 = ATgetFirst((ATermList) t);
      m_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_30;
  t = at_last_1_0(u_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
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
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL;
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
      b_17 = ATgetFirst((ATermList) t);
      c_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_17;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(c_17), term_h_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(c_17), term_e_11);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(c_17), term_a_10);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_17), term_q_14);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym_Arg_1))
    {
      k_34 = ATgetArgument(t, 0);
      {
        ATerm u_14 = NULL,w_14 = NULL,i_5 = NULL;
        t = SSLgetAnnotations(j_34);
        u_14 = t;
        t = SSL_string_to_int(k_34);
        w_14 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, w_14);
        i_5 = t;
        t = SSLsetAnnotations(i_5, u_14);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          k_34 = ATgetArgument(t, 0);
          l_34 = ATgetArgument(t, 1);
          {
            ATerm d_15 = NULL,g_15 = NULL,h_15 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(j_34);
            d_15 = t;
            t = SSL_string_to_int(k_34);
            g_15 = t;
            t = SSL_string_to_int(l_34);
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, g_15, h_15);
            j_5 = t;
            t = SSLsetAnnotations(j_5, d_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              k_34 = ATgetArgument(t, 0);
              l_34 = ATgetArgument(t, 1);
              {
                ATerm s_15 = NULL,l_5 = NULL;
                t = SSLgetAnnotations(j_34);
                s_15 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, k_34, l_34);
                l_5 = t;
                t = SSLsetAnnotations(l_5, s_15);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  k_34 = ATgetArgument(t, 0);
                  {
                    ATerm g_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,n_16 = NULL,q_5 = NULL;
                    t = SSLgetAnnotations(j_34);
                    g_16 = t;
                    t = SSL_explode_string(k_34);
                    t = unquote_chars_2_0(w_2, a_3, t);
                    n_16 = t;
                    t = SSL_implode_string(n_16);
                    l_16 = t;
                    t = SSL_explode_string(l_16);
                    t = unescape_chars_1_0(b_3, t);
                    k_16 = t;
                    t = SSL_implode_string(k_16);
                    j_16 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, j_16);
                    q_5 = t;
                    t = SSLsetAnnotations(q_5, g_16);
                  }
                }
              else
                {
                  ATerm d_18 = NULL,i_18 = NULL,r_5 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      k_34 = ATgetArgument(t, 0);
                      l_34 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_34);
                  d_18 = t;
                  t = SSL_string_to_int(k_34);
                  i_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, i_18, l_34);
                  r_5 = t;
                  t = SSLsetAnnotations(r_5, d_18);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  static ATerm d_3 (ATerm t)
  {
    t = topdown_1_0(v_69, t);
    return(t);
  }
  t = v_69(t);
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
  ATerm v_34 = NULL,w_34 = NULL;
  t = topdown_1_0(g_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      v_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(v_34, w_34, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
    }
  return(t);
}
static ATerm y_6 (ATerm x_51, ATerm t)
{
  t = x_51;
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
  ATerm t_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_34 = NULL,c_35 = NULL,d_35 = NULL;
      t = term_x_14;
      t = get_options_0_0(t);
      t = oncetd_1_0(h_3, t);
      t = term_y_14;
      c_35 = t;
      t = (ATerm) ATinsert(ATempty, term_z_14);
      d_35 = t;
      t = SSL_printnl(c_35, d_35);
      t = term_a_15;
      z_34 = t;
      t = SSL_exit(z_34);
      t = (ATerm) ATinsert(ATempty, term_z_14);
      LocalPopChoice(v_14);
    }
  else
    {
      t = t_14;
      {
        ATerm h_35 = NULL,m_35 = NULL;
        t = term_y_14;
        h_35 = t;
        t = (ATerm) ATinsert(ATempty, term_b_15);
        m_35 = t;
        t = SSL_printnl(h_35, m_35);
        t = (ATerm) ATinsert(ATempty, term_b_15);
      }
    }
  return(t);
}
static ATerm g_36 (ATerm z_35, ATerm t)
{
  t = SSL_fclose(z_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_36 = ATgetArgument(t, 0);
      {
        ATerm c_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_36);
            LocalPopChoice(e_15);
          }
        else
          {
            t = c_15;
            t = g_36(e_36, t);
          }
      }
    }
  else
    {
      t = g_36(e_36, t);
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
  ATerm h_36 = NULL;
  t = SSL_fopen(k_32, l_32);
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_36 = NULL;
  t = SSL_stdin_stream();
  i_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_36 = NULL;
  t = SSL_stdout_stream();
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_36 = NULL;
  t = SSL_stderr_stream();
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_36);
  return(t);
}
static ATerm h_38 (ATerm t_36, ATerm t)
{
  ATerm u_36 = NULL;
  t = SSL_explode_term(t_36);
  if(match_cons(t, sym__2))
    {
      ATerm f_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
          {
            u_36 = ATgetFirst((ATermList) i_15);
            {
              ATerm j_15 = (ATerm) ATgetNext((ATermList) i_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_38 (ATerm y_36, ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,k_37 = NULL,w_6 = NULL;
  t = SSLgetAnnotations(a_37);
  d_37 = t;
  t = y_36;
  if(match_cons(t, sym_Path_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_37, z_36);
  w_6 = t;
  t = SSLsetAnnotations(w_6, d_37);
  if(match_cons(t, sym__2))
    {
      b_37 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(b_37, c_37, t);
  return(t);
}
static ATerm j_38 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,b_38 = NULL,x_6 = NULL;
  t = SSLgetAnnotations(s_37);
  v_37 = t;
  t = SSL_is_string(q_37);
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_38, r_37);
  x_6 = t;
  t = SSLsetAnnotations(x_6, v_37);
  if(match_cons(t, sym__2))
    {
      t_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(t_37, u_37, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  if(match_cons(t, sym__2))
    {
      e_38 = ATgetArgument(t, 0);
      f_38 = ATgetArgument(t, 1);
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_38(d_38, t);
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_38(e_38, f_38, d_38, t);
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = m_15;
                  t = j_38(e_38, f_38, d_38, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_38(d_38, t);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_o_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_38 = NULL,m_38 = NULL,n_38 = NULL;
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL;
      q_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_38, term_r_15);
      t = c_7(t);
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      t = debug_1_0(i_3, t);
      _fail(t);
    }
  m_38 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_7(n_38, t);
  k_38 = t;
  t = m_38;
  t = fclose_0_0(t);
  t = k_38;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,e_19 = NULL,f_19 = NULL;
  t = if_verbose1_1_0(k_3, t);
  t = ReadFromFile_0_0(t);
  x_38 = t;
  t = SSL_explode_term(x_38);
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      {
        ATerm t_15 = ATgetArgument(t, 1);
        if(((ATgetType(t_15) == AT_LIST) && !(ATisEmpty(t_15))))
          {
            e_19 = ATgetFirst((ATermList) t_15);
            {
              ATerm w_15 = (ATerm) ATgetNext((ATermList) t_15);
              if(((ATgetType(w_15) != AT_LIST) || !(ATisEmpty(w_15))))
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
      w_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(w_38, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_x_15;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm s_38 = NULL,v_38 = NULL;
  s_38 = t;
  t = term_e_14;
  v_38 = t;
  t = SSL_table_create(v_38);
  t = s_38;
  t = map_1_0(j_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm z_38 = NULL;
  static ATerm m_3 (ATerm t)
  {
    t = t_76(t);
    if(((z_38 != NULL) && (z_38 != t)))
      _fail(t);
    else
      z_38 = t;
    return(t);
  }
  t = fetch_1_0(m_3, t);
  t = not_null(z_38);
  return(t);
}
ATerm option_value_2_0 (ATerm v_92 (ATerm), ATerm w_92 (ATerm), ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(v_92, t);
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      t = w_92(t);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  t = term_y_14;
  y_40 = t;
  t = (ATerm) ATinsert(ATempty, term_a_16);
  z_40 = t;
  t = SSL_printnl(y_40, z_40);
  t = term_a_15;
  x_40 = t;
  t = SSL_exit(x_40);
  t = (ATerm) ATinsert(ATempty, term_a_16);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      d_41 = ATgetArgument(t, 0);
      if((d_41 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  e_41 = t;
  t = term_o_12;
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_12, e_41);
  t = i_7(h_41, e_41, t);
  g_41 = t;
  t = SSL_explode_term(g_41);
  if(match_cons(t, sym__2))
    {
      ATerm b_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_16 = ATgetArgument(t, 1);
        if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
          {
            f_41 = ATgetFirst((ATermList) c_16);
            {
              ATerm d_16 = (ATerm) ATgetNext((ATermList) c_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_41;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  o_41 = t;
  t = term_n_12;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, o_41);
  t = i_7(r_41, o_41, t);
  q_41 = t;
  t = SSL_explode_term(q_41);
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_16 = ATgetArgument(t, 1);
        if(((ATgetType(f_16) == AT_LIST) && !(ATisEmpty(f_16))))
          {
            p_41 = ATgetFirst((ATermList) f_16);
            {
              ATerm h_16 = (ATerm) ATgetNext((ATermList) f_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_41;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_41 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,h_42 = NULL,i_42 = NULL,p_42 = NULL,q_42 = NULL,s_42 = NULL,n_7 = NULL;
  e_42 = t;
  t = term_o_12;
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_12, e_42);
  t = i_7(f_42, e_42, t);
  s_42 = t;
  if(match_cons(t, sym__2))
    {
      i_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  h_42 = t;
  t = p_42;
  t = collect_om_2_0(d_4, e_4, t);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_42, q_42);
  n_7 = t;
  t = SSLsetAnnotations(n_7, h_42);
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_42, z_41, d_42);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  k_43 = t;
  if(match_cons(t, sym_S_1))
    {
      l_43 = ATgetArgument(t, 0);
      {
        ATerm n_19 = NULL,l_7 = NULL;
        t = SSLgetAnnotations(k_43);
        n_19 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, l_43);
        l_7 = t;
        t = SSLsetAnnotations(l_7, n_19);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          l_43 = ATgetArgument(t, 0);
          {
            ATerm u_19 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(k_43);
            u_19 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, l_43);
            m_7 = t;
            t = SSLsetAnnotations(m_7, u_19);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              l_43 = ATgetArgument(t, 0);
              {
                ATerm i_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, l_43);
        }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL;
  if(match_cons(t, sym__2))
    {
      o_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(f_4, o_43, p_43, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm q_43 = NULL;
  if(match_cons(t, sym__2))
    {
      q_43 = ATgetArgument(t, 0);
      if((q_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,w_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,c_44 = NULL,d_44 = NULL,w_7 = NULL;
  t_43 = t;
  t = term_n_12;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, t_43);
  t = i_7(w_43, t_43, t);
  d_44 = t;
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_44);
  y_43 = t;
  t = a_44;
  t = collect_om_2_0(i_4, k_4, t);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_43, c_44);
  w_7 = t;
  t = SSLsetAnnotations(w_7, y_43);
  if(match_cons(t, sym__2))
    {
      r_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_43, r_43, s_43);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  z_44 = t;
  if(match_cons(t, sym_S_1))
    {
      a_45 = ATgetArgument(t, 0);
      {
        ATerm k_20 = NULL,o_7 = NULL;
        t = SSLgetAnnotations(z_44);
        k_20 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, a_45);
        o_7 = t;
        t = SSLsetAnnotations(o_7, k_20);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          a_45 = ATgetArgument(t, 0);
          {
            ATerm a_21 = NULL,t_7 = NULL;
            t = SSLgetAnnotations(z_44);
            a_21 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, a_45);
            t_7 = t;
            t = SSLsetAnnotations(t_7, a_21);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              a_45 = ATgetArgument(t, 0);
              {
                ATerm m_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, a_45);
        }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  if(match_cons(t, sym__2))
    {
      j_45 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(m_4, j_45, k_45, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm l_45 = NULL;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      if((l_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_45 = NULL;
  if(match_cons(t, sym__3))
    {
      m_45 = ATgetArgument(t, 0);
      {
        ATerm s_16 = ATgetArgument(t, 1);
      }
      {
        ATerm t_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = m_45;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm p_45 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
      {
        ATerm x_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = p_45;
  t = path_to_string_0_0(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  b_46 = t;
  t = term_o_12;
  c_46 = t;
  t = SSL_table_remove(c_46, b_46);
  t = (ATerm) ATmakeAppl(sym__2, term_o_12, b_46);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      ATerm e_17 = ATgetArgument(t, 1);
      if(match_cons(e_17, sym__2))
        {
          q_46 = ATgetArgument(e_17, 0);
          r_46 = ATgetArgument(e_17, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, q_46, r_46);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm w_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm s_40 = NULL,v_40 = NULL,w_40 = NULL,g_7 = NULL;
    w_40 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        v_40 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_40);
    s_40 = t;
    t = v_40;
    if(((w_39 != NULL) && (w_39 != t)))
      _fail(t);
    else
      w_39 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, v_40);
    g_7 = t;
    t = SSLsetAnnotations(g_7, s_40);
    return(t);
  }
  t = option_value_2_0(o_3, p_3, t);
  t = (ATerm) ATinsert(ATempty, not_null(w_39));
  t = read_pp_tables_0_0(t);
  t = term_e_14;
  q_40 = t;
  t = term_o_12;
  r_40 = t;
  t = term_i_17;
  t = p_6(q_40, r_40, t);
  {
    static ATerm r_3 (ATerm t)
    {
      ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,j_7 = NULL;
      c_41 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          b_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_41);
      a_41 = t;
      t = b_41;
      if(((z_39 != NULL) && (z_39 != t)))
        _fail(t);
      else
        z_39 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, b_41);
      j_7 = t;
      t = SSLsetAnnotations(j_7, a_41);
      return(t);
    }
    static ATerm y_3 (ATerm t)
    {
      t = term_j_17;
      if(((z_39 != NULL) && (z_39 != t)))
        _fail(t);
      else
        z_39 = t;
      return(t);
    }
    t = option_value_2_0(r_3, y_3, t);
  }
  t = (ATerm) ATinsert(ATempty, not_null(z_39));
  t = read_pp_tables_0_0(t);
  t = term_e_14;
  o_40 = t;
  t = term_n_12;
  p_40 = t;
  t = term_r_17;
  t = p_6(o_40, p_40, t);
  t = term_o_12;
  n_40 = t;
  t = SSL_table_keys(n_40);
  b_40 = t;
  t = term_n_12;
  m_40 = t;
  t = SSL_table_keys(m_40);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, a_40);
  t = o_6(z_3, b_40, a_40, t);
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_40, a_40);
  t = diff_0_0(t);
  i_40 = t;
  t = map_1_0(a_4, t);
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_41 = NULL,j_41 = NULL,l_41 = NULL;
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
        i_41 = t;
        t = term_y_14;
        j_41 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_41), term_b_18);
        l_41 = t;
        t = SSL_printnl(j_41, l_41);
        t = (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(ATinsert(ATempty, i_41), term_b_18));
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, a_40, b_40);
  t = diff_0_0(t);
  k_40 = t;
  t = map_1_0(b_4, t);
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_41 = NULL,v_41 = NULL,w_41 = NULL;
        ATerm g_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_18;
          }
        s_41 = t;
        t = term_y_14;
        v_41 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_41), term_k_18);
        w_41 = t;
        t = SSL_printnl(v_41, w_41);
        t = (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(ATinsert(ATempty, s_41), term_k_18));
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
      }
  }
  t = e_40;
  t = map_1_0(c_4, t);
  f_40 = t;
  t = e_40;
  t = map_1_0(g_4, t);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_40, g_40);
  t = diff_0_0(t);
  l_40 = t;
  t = map_1_0(n_4, t);
  j_40 = t;
  t = l_40;
  t = map_1_0(p_4, t);
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
        ATerm n_18 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_18;
          }
        s_45 = t;
        t = term_y_14;
        t_45 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, s_45), term_o_18);
        u_45 = t;
        t = SSL_printnl(t_45, u_45);
        t = (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(ATinsert(ATempty, s_45), term_o_18));
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
      }
  }
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(q_4, t);
        t = (ATerm) ATmakeAppl(sym__2, k_40, j_40);
        t = e_6(k_40, j_40, t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
      }
  }
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_18;
        t = get_options_0_0(t);
        t = oncetd_1_0(t_4, t);
        t = i_40;
        t = map_1_0(w_4, t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
      }
  }
  {
    ATerm d_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL,g_46 = NULL;
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_46 = NULL;
            h_46 = t;
            t = term_s_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(y_4, t);
            t = h_46;
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm o_46 = NULL;
              o_46 = t;
              t = term_w_18;
              t = get_options_0_0(t);
              t = oncetd_1_0(a_5, t);
              t = o_46;
            }
          }
        t = term_o_12;
        t = table_getlist_0_0(t);
        t = map_1_0(d_5, t);
        t = desugar_0_0(t);
        f_46 = t;
        t = (ATerm) ATmakeAppl(sym_PP_Table_1, f_46);
        g_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_19, (ATerm) ATmakeAppl(sym_PP_Table_1, f_46));
        t = z_5(g_5, g_46, t);
        t = output_1_0(_id, t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = d_19;
      }
  }
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = t;
        if((PushChoice() == 0))
          {
            ATerm v_46 = NULL;
            v_46 = t;
            t = term_s_18;
            t = get_options_0_0(t);
            t = oncetd_1_0(h_5, t);
            t = v_46;
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
              ATerm n_21 = NULL;
              t = (ATerm) ATinsert(ATinsert(ATempty, k_40), j_40);
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
              t = term_a_15;
              n_21 = t;
              t = SSL_exit(n_21);
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
            }
        }
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
      }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL;
  i_47 = t;
  t = term_q_10;
  t = whoami_0_0(t);
  j_47 = t;
  t = term_y_14;
  l_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_19), j_47), term_s_19);
  m_47 = t;
  t = SSL_printnl(l_47, m_47);
  t = term_a_15;
  k_47 = t;
  t = SSL_exit(k_47);
  t = i_47;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm o_47 = NULL;
  o_47 = t;
  if(match_string(t, "-k"))
    {
      t = o_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_47;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  t = SSL_string_to_int(p_47);
  q_47 = t;
  t = term_v_19;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_19, q_47);
  t = k_7(r_47, q_47, t);
  t = p_47;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, m_5, n_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  if(match_string(t, "-S"))
    {
      t = t_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_47;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  t = term_a_20;
  u_47 = t;
  t = term_c_20;
  v_47 = t;
  t = term_h_20;
  t = k_7(u_47, v_47, t);
  t = term_i_20;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
  w_47 = t;
  t = SSL_string_to_int(w_47);
  x_47 = t;
  t = term_a_20;
  y_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, x_47);
  t = k_7(y_47, x_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_47);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  t = term_n_20;
  z_47 = t;
  t = term_q_10;
  a_48 = t;
  t = term_o_20;
  t = k_7(z_47, a_48, t);
  t = term_q_20;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_r_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, s_5, a_6, t);
      LocalPopChoice(t_20);
    }
  else
    {
      t = s_20;
      {
        ATerm u_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_6, c_6, d_6, t);
            LocalPopChoice(w_20);
          }
        else
          {
            t = u_20;
            t = Option_3_0(g_6, h_6, i_6, t);
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm b_42, ATerm c_42, ATerm t)
{
  ATerm d_48 = NULL;
  t = term_b_21;
  d_48 = t;
  t = SSL_table_put(d_48, b_42, c_42);
  t = (ATerm) ATmakeAppl(sym__3, term_b_21, b_42, c_42);
  return(t);
}
ATerm Option_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
      t = term_q_10;
      t = l_0(t);
      i_48 = t;
      t = term_c_21;
      j_48 = t;
      t = term_d_21;
      k_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_21, term_d_21, i_48);
      t = d_7(j_48, k_48, i_48, t);
      _fail(t);
    }
  else
    {
      ATerm n_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_48 = ATgetFirst((ATermList) t);
          h_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_48;
      t = i_0(t);
      t = term_q_10;
      t = k_0(t);
      n_48 = t;
      t = (ATerm) ATinsert(CheckATermList(h_48), n_48);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  if(match_string(t, "-o"))
    {
      t = p_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_48;
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  q_48 = t;
  t = term_e_10;
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, q_48);
  t = k_7(r_48, q_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_48);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, l_6, r_6, t);
  return(t);
}
static ATerm d_7 (ATerm b_47, ATerm c_47, ATerm a_47, ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,z_48 = NULL;
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_47, c_47);
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
        t = (ATerm) ATmakeAppl(sym__2, b_47, c_47);
        t = i_7(b_47, c_47, t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATempty;
      }
  }
  w_48 = t;
  t = (ATerm) ATinsert(CheckATermList(w_48), a_47);
  z_48 = t;
  t = SSL_table_put(b_47, c_47, z_48);
  t = v_48;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
      t = term_q_10;
      t = p_0(t);
      k_49 = t;
      t = term_c_21;
      l_49 = t;
      t = term_d_21;
      m_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_21, term_d_21, k_49);
      t = d_7(l_49, m_49, k_49, t);
      _fail(t);
    }
  else
    {
      ATerm q_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_49 = ATgetFirst((ATermList) t);
          h_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_49 = ATgetFirst((ATermList) t);
          j_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_49;
      t = n_0(t);
      t = i_49;
      t = o_0(t);
      q_49 = t;
      t = (ATerm) ATinsert(CheckATermList(j_49), q_49);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_10;
  t = whoami_0_0(t);
  r_49 = t;
  t = term_y_14;
  t_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_21), r_49);
  u_49 = t;
  t = SSL_printnl(t_49, u_49);
  t = term_a_15;
  s_49 = t;
  t = SSL_exit(s_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_21;
  t = get_config_0_0(t);
  return(t);
}
static ATerm e_7 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_35, f_35);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      t = SSL_addr(e_35, f_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_49;
      t = k_82(t);
    }
  else
    {
      ATerm b_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_49 = ATgetFirst((ATermList) t);
          y_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_49;
      t = foldr_2_0(k_82, l_82, t);
      b_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_49, b_50);
      t = l_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm b_22 = NULL,d_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(b_22, d_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_50 = NULL,s_21 = NULL,t_21 = NULL;
  t = times_0_0(t);
  t_21 = t;
  t = SSL_explode_term(t_21);
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_21;
  t = foldr_2_0(s_6, t_6, t);
  e_50 = t;
  t = SSL_TicksToSeconds(e_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_50;
        if((q_50 != t))
          {
            _fail(t);
          }
        t = p_50;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = (ATerm) ATmakeAppl(sym__2, q_50, r_50);
        {
          ATerm y_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_50, r_50);
              LocalPopChoice(a_22);
            }
          else
            {
              t = y_21;
              t = SSL_gtr(q_50, r_50);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_50, r_50);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm v_50 = NULL;
  v_50 = t;
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_50 = NULL;
        t = term_a_20;
        t = get_config_0_0(t);
        x_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_50, term_a_15);
        t = geq_0_0(t);
        t = v_50;
        t = b_91(t);
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        t = v_50;
      }
  }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,c_51 = NULL,d_51 = NULL;
  t = run_time_0_0(t);
  z_50 = t;
  t = term_q_10;
  t = whoami_0_0(t);
  a_51 = t;
  t = term_y_14;
  c_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_22), z_50), term_h_22), a_51);
  d_51 = t;
  t = SSL_printnl(c_51, d_51);
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_22), z_50), term_h_22), a_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_20;
  e_51 = t;
  t = SSL_exit(e_51);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  s_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_51 = ATgetArgument(t, 0);
          {
            ATerm r_23 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(s_51);
            r_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_51);
            p_8 = t;
            t = SSLsetAnnotations(p_8, r_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_22;
      t = get_config_0_0(t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      t = fetch_1_0(v_6, t);
    }
  t = r_93(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_51 = NULL,a_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_51 = ATgetFirst((ATermList) t);
      a_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_52 = NULL,q_52 = NULL;
        static ATerm z_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_52)), not_null(q_52));
          return(t);
        }
        t = a_52;
        t = g_0(t);
        if(((j_52 != NULL) && (j_52 != t)))
          _fail(t);
        else
          j_52 = t;
        t = v_51;
        t = d_0(t);
        if(((q_52 != NULL) && (q_52 != t)))
          _fail(t);
        else
          q_52 = t;
        t = a_52;
        t = reverse_acc_2_0(d_0, z_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_10;
      t = g_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,z_52 = NULL,w_8 = NULL;
  z_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_52);
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_52);
  w_8 = t;
  t = SSLsetAnnotations(w_8, u_52);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm b_53 = NULL;
  b_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_53), term_o_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL;
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_21;
      t = get_config_0_0(t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      t = fetch_1_0(f_7, t);
    }
  t = term_r_22;
  t = echo_0_0(t);
  t = term_c_21;
  s_52 = t;
  t = term_d_21;
  t_52 = t;
  t = term_s_22;
  t = i_7(s_52, t_52, t);
  t = reverse_acc_2_0(_id, r_7, t);
  t = map_1_0(s_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_76 (ATerm), ATerm t)
{
  static ATerm a_54 (ATerm t)
  {
    ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
    x_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_53 = ATgetFirst((ATermList) t);
        z_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_24 = NULL,n_24 = NULL,b_9 = NULL;
          t = SSLgetAnnotations(x_53);
          k_24 = t;
          t = y_53;
          t = r_76(t);
          n_24 = t;
          t = (ATerm) ATinsert(CheckATermList(z_53), n_24);
          b_9 = t;
          t = SSLsetAnnotations(b_9, k_24);
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm g_25 = NULL,j_25 = NULL,c_9 = NULL;
            t = SSLgetAnnotations(x_53);
            g_25 = t;
            t = z_53;
            t = a_54(t);
            j_25 = t;
            t = (ATerm) ATinsert(CheckATermList(j_25), y_53);
            c_9 = t;
            t = SSLsetAnnotations(c_9, g_25);
          }
        }
    }
    return(t);
  }
  t = a_54(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
  e_54 = t;
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_22 = ATgetFirst((ATermList) t);
                ATerm b_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_54;
          }
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = (ATerm) ATinsert(ATempty, e_54);
      }
  }
  f_54 = t;
  t = term_f_10;
  g_54 = t;
  t = SSL_printnl(g_54, f_54);
  t = e_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm b_31, ATerm c_31, ATerm t)
{
  t = SSL_strcat(b_31, c_31);
  return(t);
}
ATerm debug_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL,n_54 = NULL;
  k_54 = t;
  t = w_75(t);
  l_54 = t;
  t = term_y_14;
  m_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_54), l_54);
  n_54 = t;
  t = SSL_printnl(m_54, n_54);
  t = k_54;
  return(t);
}
ATerm map_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  static ATerm c_55 (ATerm t)
  {
    ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL;
    z_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_54;
      }
    else
      {
        ATerm b_26 = NULL,g_26 = NULL,o_26 = NULL,l_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_55 = ATgetFirst((ATermList) t);
            b_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_54);
        b_26 = t;
        t = a_55;
        t = h_76(t);
        g_26 = t;
        t = b_55;
        t = c_55(t);
        o_26 = t;
        t = (ATerm) ATinsert(CheckATermList(o_26), g_26);
        l_10 = t;
        t = SSLsetAnnotations(l_10, b_26);
      }
    return(t);
  }
  t = c_55(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm i_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_55 = NULL;
      k_55 = t;
      t = SSL_is_string(k_55);
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      {
        ATerm q_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_7, t);
            LocalPopChoice(u_23);
          }
        else
          {
            t = q_23;
            {
              ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
              q_55 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_55 = ATgetArgument(t, 0);
                  t = r_55;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_55 = ATgetArgument(t, 0);
                      t = r_55;
                      {
                        ATerm w_23 = t;
                        int x_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(x_23);
                          }
                        else
                          {
                            t = w_23;
                            t = debug_1_0(v_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_55 = NULL,x_55 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_55 = ATgetArgument(t, 0);
                          s_55 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_55;
                      t = eval_config_0_0(t);
                      w_55 = t;
                      t = s_55;
                      t = eval_config_0_0(t);
                      x_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
                      t = h_7(w_55, x_55, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_7 (ATerm s_48, ATerm t_48, ATerm t)
{
  t = SSL_table_get(s_48, t_48);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  b_56 = t;
  t = term_b_21;
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_21, b_56);
  t = i_7(c_56, b_56, t);
  {
    ATerm y_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_56 = NULL,e_56 = NULL;
        t = eval_config_0_0(t);
        d_56 = t;
        t = term_b_21;
        e_56 = t;
        t = SSL_table_put(e_56, b_56, d_56);
        t = d_56;
        LocalPopChoice(b_24);
      }
    else
      {
        t = y_23;
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  t = term_c_24;
  h_56 = t;
  t = term_q_10;
  i_56 = t;
  t = term_d_24;
  t = k_7(h_56, i_56, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_f_24;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
  t = term_c_24;
  l_56 = t;
  t = term_q_10;
  m_56 = t;
  t = term_d_24;
  t = k_7(l_56, m_56, t);
  t = term_h_24;
  j_56 = t;
  t = term_q_10;
  k_56 = t;
  t = term_i_24;
  t = k_7(j_56, k_56, t);
  t = term_j_24;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_7, y_7, b_8, t);
      LocalPopChoice(p_24);
    }
  else
    {
      t = m_24;
      t = Option_3_0(c_8, d_8, e_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_53 (ATerm), ATerm q_53 (ATerm), ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,p_10 = NULL;
  s_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_56 = ATgetFirst((ATermList) t);
      p_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_56);
  n_56 = t;
  t = o_56;
  t = p_53(t);
  q_56 = t;
  t = p_56;
  t = q_53(t);
  r_56 = t;
  t = (ATerm) ATinsert(CheckATermList(r_56), q_56);
  p_10 = t;
  t = SSLsetAnnotations(p_10, n_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_95 (ATerm), ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,c_57 = NULL,d_57 = NULL,u_10 = NULL;
  x_56 = t;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_24;
        t = u_95(t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
      }
  }
  t = x_56;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_56 = ATgetFirst((ATermList) t);
      a_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_56);
  y_56 = t;
  t = term_k_21;
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, z_56);
  t = k_7(d_57, z_56, t);
  t = a_57;
  {
    static ATerm n_57 (ATerm t)
    {
      ATerm u_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_25 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_57 = NULL;
              g_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_57;
              LocalPopChoice(d_25);
            }
          else
            {
              t = c_25;
              t = u_95(t);
              t = Cons_2_0(_id, n_57, t);
            }
          LocalPopChoice(x_24);
        }
      else
        {
          t = u_24;
          {
            ATerm j_57 = NULL,k_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_57 = ATgetFirst((ATermList) t);
                k_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_57), (ATerm) ATmakeAppl(sym_Undefined_1, j_57));
          }
        }
      return(t);
    }
    t = n_57(t);
  }
  c_57 = t;
  t = (ATerm) ATinsert(CheckATermList(c_57), (ATerm) ATmakeAppl(sym_Program_1, z_56));
  u_10 = t;
  t = SSLsetAnnotations(u_10, y_56);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm z_57 = NULL;
  z_57 = t;
  if(match_string(t, "--help"))
    {
      t = z_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_57;
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  t = term_l_22;
  a_58 = t;
  t = term_q_10;
  b_58 = t;
  t = term_e_25;
  t = k_7(a_58, b_58, t);
  t = term_h_25;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  u_57 = t;
  t = term_c_21;
  w_57 = t;
  t = term_d_21;
  x_57 = t;
  t = (ATerm) ATempty;
  y_57 = t;
  t = SSL_table_put(w_57, x_57, y_57);
  t = u_57;
  {
    static ATerm f_8 (ATerm t)
    {
      ATerm k_25 = t;
      int m_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_95(t);
          LocalPopChoice(m_25);
        }
      else
        {
          t = k_25;
          {
            ATerm o_25 = t;
            int p_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_8, h_8, i_8, t);
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
    t = parse_options_p__1_0(f_8, t);
  }
  {
    ATerm q_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_58 = NULL;
        i_58 = t;
        {
          ATerm u_25 = t;
          int v_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_27 = NULL;
              t = i_58;
              {
                ATerm w_25 = t;
                int x_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_22;
                    t = get_config_0_0(t);
                    LocalPopChoice(x_25);
                  }
                else
                  {
                    t = w_25;
                    t = fetch_1_0(j_8, t);
                  }
              }
              t = i_58;
              t = default_system_usage_0_0(t);
              t = term_c_20;
              t_27 = t;
              t = SSL_exit(t_27);
              LocalPopChoice(v_25);
            }
          else
            {
              t = u_25;
              {
                ATerm x_27 = NULL;
                t = term_c_24;
                t = get_config_0_0(t);
                t = i_58;
                t = default_system_about_0_0(t);
                t = term_c_20;
                x_27 = t;
                t = SSL_exit(x_27);
              }
            }
        }
        LocalPopChoice(s_25);
      }
    else
      {
        t = q_25;
        {
          ATerm y_25 = t;
          int z_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL;
              static ATerm k_8 (ATerm t)
              {
                ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,u_11 = NULL;
                o_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_58);
                m_58 = t;
                t = n_58;
                if(((s_57 != NULL) && (s_57 != t)))
                  _fail(t);
                else
                  s_57 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_58);
                u_11 = t;
                t = SSLsetAnnotations(u_11, m_58);
                return(t);
              }
              t = fetch_1_0(k_8, t);
              t = term_y_14;
              k_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_57)), term_a_26);
              l_58 = t;
              t = SSL_printnl(k_58, l_58);
              t = (ATerm) ATmakeAppl(sym__2, term_y_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_57)), term_a_26));
              t = default_system_usage_0_0(t);
              t = term_a_15;
              j_58 = t;
              t = SSL_exit(j_58);
              LocalPopChoice(z_25);
            }
          else
            {
              t = y_25;
            }
        }
      }
  }
  t_57 = t;
  t = term_c_21;
  v_57 = t;
  t = SSL_table_destroy(v_57);
  t = t_57;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm w_93 (ATerm), ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL;
  t = parse_options_1_0(t_93, t);
  t_58 = t;
  t = term_u_9;
  w_58 = t;
  t = SSL_table_create(w_58);
  t = term_u_9;
  u_58 = t;
  t = term_v_9;
  v_58 = t;
  t = SSL_table_put(u_58, v_58, t_58);
  t = t_58;
  t = v_93(t);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_93, t);
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
              t = w_93(t);
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
static ATerm l_8 (ATerm t)
{
  ATerm h_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_8, n_8, o_8, t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = h_26;
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(v_8, x_8, y_8, t);
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
                  t = Option_3_0(z_8, a_9, f_9, t);
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
                        t = ArgOption_3_0(g_9, h_9, j_9, t);
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
                              t = ArgOption_3_0(l_9, o_9, p_9, t);
                              LocalPopChoice(x_26);
                            }
                          else
                            {
                              t = w_26;
                              {
                                ATerm y_26 = t;
                                int z_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(z_26);
                                  }
                                else
                                  {
                                    t = y_26;
                                    {
                                      ATerm a_27 = t;
                                      int b_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(r_9, s_9, t_9, t);
                                          LocalPopChoice(b_27);
                                        }
                                      else
                                        {
                                          t = a_27;
                                          {
                                            ATerm c_27 = t;
                                            int d_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(d_27);
                                              }
                                            else
                                              {
                                                t = c_27;
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
static ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_g_27;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_h_27;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_s_18;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_w_18;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, y_58);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_m_27;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm z_58 = NULL;
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, z_58);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_n_27;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL;
  t = term_i_10;
  a_59 = t;
  t = term_q_10;
  b_59 = t;
  t = term_o_27;
  t = k_7(a_59, b_59, t);
  t = term_p_27;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_8, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}

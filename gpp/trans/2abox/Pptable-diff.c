#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Old_Table_1;
Symbol sym_New_Table_1;
Symbol sym_Verbose_0;
Symbol sym_Patch_0;
Symbol sym_Prune_0;
Symbol sym_Patched_1;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_k_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_g_24;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_t_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_h_21;
ATerm term_b_21;
ATerm term_u_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_r_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_v_17;
ATerm term_n_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_o_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_a_12;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_r_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_l_9;
ATerm term_b_3;
void init_constant_terms (void)
{
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_m_12);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_l_12);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_r_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_r_10);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_n_20);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_r_10);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_r_10);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_r_10);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_r_10);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm s_5 (ATerm u_33, ATerm v_33, ATerm);
ATerm t_5 (ATerm i_37, ATerm j_37, ATerm);
ATerm v_5 (ATerm o_82 (ATerm), ATerm r_414, ATerm m_37, ATerm);
ATerm u_5 (ATerm e_37, ATerm f_37, ATerm);
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm output_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm w_5 (ATerm t_28, ATerm u_28, ATerm);
ATerm x_5 (ATerm r_91 (ATerm), ATerm c_49, ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm e_65 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm w_0 (ATerm);
ATerm d_6 (ATerm u_13, ATerm v_13, ATerm);
ATerm x_0 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm e_6 (ATerm q_73 (ATerm), ATerm r_20, ATerm q_20, ATerm);
ATerm at_end_1_0 (ATerm h_70 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_17 (ATerm x_16, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm r_1 (ATerm);
ATerm x_1 (ATerm);
ATerm i_6 (ATerm h_570, ATerm m_570, ATerm v_47, ATerm);
ATerm while_not_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm);
ATerm for_3_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm h_22 (ATerm j_19, ATerm k_19, ATerm n_19, ATerm);
ATerm d_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm k_6 (ATerm v_73 (ATerm), ATerm t_20, ATerm s_20, ATerm);
ATerm foldr_3_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm collect_om_2_0 (ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm);
ATerm l_6 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm x_20, ATerm w_20, ATerm);
ATerm m_6 (ATerm o_73 (ATerm), ATerm p_20, ATerm o_20, ATerm);
ATerm n_6 (ATerm f_45, ATerm g_45, ATerm);
ATerm m_2 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm o_6 (ATerm c_48, ATerm d_48, ATerm);
ATerm unescape_chars_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm unquote_chars_2_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm f_3 (ATerm);
ATerm w_6 (ATerm b_48, ATerm);
ATerm g_3 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm n_35 (ATerm b_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_6 (ATerm k_37, ATerm);
ATerm z_6 (ATerm w_33, ATerm x_33, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm r_37 (ATerm z_35, ATerm);
ATerm u_37 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm);
ATerm v_37 (ATerm p_36, ATerm r_36, ATerm u_36, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm d_70 (ATerm), ATerm);
ATerm option_value_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm c_5 (ATerm);
ATerm pptable_diff_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm g_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_7 (ATerm l_38, ATerm m_38, ATerm);
ATerm Option_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm a_7 (ATerm j_43, ATerm k_43, ATerm i_43, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm b_7 (ATerm u_30, ATerm v_30, ATerm);
ATerm foldr_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_7 (ATerm);
ATerm need_help_1_0 (ATerm o_86 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_7 (ATerm k_28, ATerm l_28, ATerm);
ATerm debug_1_0 (ATerm m_82 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm f_7 (ATerm a_45, ATerm b_45, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm u_7 (ATerm);
ATerm z_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_54 (ATerm), ATerm h_54 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm r_88 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_1_0 (ATerm q_88 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm x_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm io_Pptable_diff_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm s_5 (ATerm u_33, ATerm v_33, ATerm t)
{
  ATerm f_0 = NULL;
  t = SSL_fputc(u_33, v_33);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_0);
  return(t);
}
ATerm t_5 (ATerm i_37, ATerm j_37, ATerm t)
{
  ATerm p_0 = NULL;
  t = SSL_write_term_to_stream_text(i_37, j_37);
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_0);
  return(t);
}
ATerm v_5 (ATerm o_82 (ATerm), ATerm r_414, ATerm m_37, ATerm t)
{
  ATerm q_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_414, term_b_3);
  t = open_stream_0_0(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, m_37);
  t = o_82(t);
  t = fclose_0_0(t);
  t = m_37;
  return(t);
}
ATerm u_5 (ATerm e_37, ATerm f_37, ATerm t)
{
  ATerm r_0 = NULL;
  t = SSL_write_term_to_stream_baf(e_37, f_37);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_0);
  return(t);
}
ATerm a_0 (ATerm t)
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
  t = u_5(y_0, z_0, t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL,h_1 = NULL,i_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if(match_cons(k_9, sym_Stream_1))
        {
          h_1 = ATgetArgument(k_9, 0);
        }
      else
        _fail(t);
      i_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(h_1, i_1, t);
  d_1 = t;
  t = term_l_9;
  e_1 = t;
  t = d_1;
  if(match_cons(t, sym_Stream_1))
    {
      f_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, d_1);
  t = s_5(e_1, f_1, t);
  return(t);
}
ATerm output_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  t = x_86(t);
  v_0 = t;
  {
    ATerm n_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_9;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(q_9);
      }
    else
      {
        t = n_9;
        t = term_w_9;
      }
    s_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_0, v_0);
    {
      ATerm x_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_10;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, s_0, v_0);
          LocalPopChoice(y_9);
          if(match_cons(t, sym__2))
            {
              ATerm b_10 = ATgetArgument(t, 0);
              ATerm d_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_5(a_0, s_0, v_0, t);
        }
      else
        {
          t = x_9;
          if(match_cons(t, sym__2))
            {
              ATerm g_10 = ATgetArgument(t, 0);
              ATerm q_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_5(b_0, s_0, v_0, t);
        }
    }
  }
  return(t);
}
ATerm w_5 (ATerm t_28, ATerm u_28, ATerm t)
{
  t = SSL_mkterm(t_28, u_28);
  return(t);
}
ATerm x_5 (ATerm r_91 (ATerm), ATerm c_49, ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  t = term_r_10;
  t = r_91(t);
  j_1 = t;
  t = (ATerm) ATinsert(ATempty, c_49);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_1, (ATerm) ATinsert(ATempty, c_49));
  t = w_5(j_1, k_1, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm t_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,n_0 = NULL;
      ATerm w_10 = t;
      int y_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_11 = ATgetFirst((ATermList) t);
              if(((ATgetType(a_11) != AT_INT) || (ATgetInt((ATermInt) a_11) != 34)))
                _fail(t);
              w_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_1), term_e_11), term_c_11);
          ;
          LocalPopChoice(y_10);
        }
      else
        {
          t = w_10;
          {
            ATerm y_1 = NULL,z_1 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_1 = ATgetFirst((ATermList) t);
                z_1 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_1;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_1), term_c_11), term_c_11);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(z_1), term_f_11), term_c_11);
              }
          }
        }
      v_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_1 = ATgetFirst((ATermList) t);
          t_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_1);
      q_1 = t;
      t = t_1;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      u_1 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), s_1);
      n_0 = t;
      t = SSLsetAnnotations(n_0, q_1);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = t_10;
      {
        ATerm v_2 = NULL,w_2 = NULL,y_2 = NULL;
        y_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_2 = ATgetFirst((ATermList) t);
            w_2 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_0 = NULL,u_0 = NULL,c_1 = NULL;
              t = SSLgetAnnotations(y_2);
              e_0 = t;
              t = w_2;
              t = escape_chars_0_0(t);
              u_0 = t;
              t = (ATerm) ATinsert(CheckATermList(u_0), v_2);
              c_1 = t;
              t = SSLsetAnnotations(c_1, e_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_2;
          }
      }
    }
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,d_8 = NULL;
  d_8 = t;
  if(match_cons(t, sym_Arg_1))
    {
      x_7 = ATgetArgument(t, 0);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_2 = NULL,l_2 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(d_8);
            f_2 = t;
            t = SSL_int_to_string(x_7);
            l_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, l_2);
            m_1 = t;
            t = SSLsetAnnotations(m_1, f_2);
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = d_8;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          x_7 = ATgetArgument(t, 0);
          v_7 = ATgetArgument(t, 1);
          {
            ATerm l_11 = t;
            int n_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_2 = NULL,d_3 = NULL,e_3 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(d_8);
                x_2 = t;
                t = SSL_int_to_string(x_7);
                d_3 = t;
                t = SSL_int_to_string(v_7);
                e_3 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, d_3, e_3);
                n_1 = t;
                t = SSLsetAnnotations(n_1, x_2);
                ;
                LocalPopChoice(n_11);
              }
            else
              {
                t = l_11;
                t = d_8;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              x_7 = ATgetArgument(t, 0);
              v_7 = ATgetArgument(t, 1);
              {
                ATerm p_11 = t;
                int q_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_3 = NULL,o_1 = NULL;
                    t = SSLgetAnnotations(d_8);
                    m_3 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, x_7, v_7);
                    o_1 = t;
                    t = SSLsetAnnotations(o_1, m_3);
                    ;
                    LocalPopChoice(q_11);
                  }
                else
                  {
                    t = p_11;
                    t = d_8;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  x_7 = ATgetArgument(t, 0);
                  {
                    ATerm r_11 = t;
                    int s_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_4 = NULL,j_4 = NULL,p_1 = NULL,b_5 = NULL,j_5 = NULL,n_5 = NULL,u_4 = NULL;
                        t = SSLgetAnnotations(d_8);
                        c_4 = t;
                        t = SSL_explode_string(x_7);
                        t = escape_chars_0_0(t);
                        u_4 = t;
                        t = SSL_implode_string(u_4);
                        j_5 = t;
                        t = SSL_explode_string(j_5);
                        n_5 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_5), term_e_11), (ATerm) ATinsert(ATempty, term_e_11));
                        t = conc_0_0(t);
                        b_5 = t;
                        t = SSL_implode_string(b_5);
                        j_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, j_4);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, c_4);
                        ;
                        LocalPopChoice(s_11);
                      }
                    else
                      {
                        t = r_11;
                        t = d_8;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      x_7 = ATgetArgument(t, 0);
                      v_7 = ATgetArgument(t, 1);
                      {
                        ATerm t_11 = t;
                        int v_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_5 = NULL,f_6 = NULL,e_2 = NULL;
                            t = SSLgetAnnotations(d_8);
                            z_5 = t;
                            t = SSL_int_to_string(x_7);
                            f_6 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, f_6, v_7);
                            e_2 = t;
                            t = SSLsetAnnotations(e_2, z_5);
                            ;
                            LocalPopChoice(v_11);
                          }
                        else
                          {
                            t = t_11;
                            t = d_8;
                          }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Patched_1))
                        {
                          x_7 = ATgetArgument(t, 0);
                          t = x_7;
                          if(match_cons(t, sym_Path_2))
                            {
                              y_7 = ATgetArgument(t, 0);
                              w_7 = ATgetArgument(t, 1);
                              {
                                ATerm w_11 = t;
                                int z_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_7 = NULL,t_7 = NULL;
                                    t = (ATerm) ATinsert(ATinsert(ATempty, y_7), term_a_12);
                                    t_7 = t;
                                    t = SSL_concat_strings(t_7);
                                    r_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_Path_2, r_7, w_7);
                                    ;
                                    LocalPopChoice(z_11);
                                  }
                                else
                                  {
                                    t = w_11;
                                    t = d_8;
                                  }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Path1_1))
                                {
                                  y_7 = ATgetArgument(t, 0);
                                  {
                                    ATerm b_12 = t;
                                    int e_12 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm f_8 = NULL,h_8 = NULL;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, y_7), term_a_12);
                                        h_8 = t;
                                        t = SSL_concat_strings(h_8);
                                        f_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Path1_1, f_8);
                                        ;
                                        LocalPopChoice(e_12);
                                      }
                                    else
                                      {
                                        t = b_12;
                                        t = d_8;
                                      }
                                  }
                                }
                              else
                                {
                                  t = d_8;
                                }
                            }
                        }
                      else
                        {
                          t = d_8;
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
  ATerm o_9 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm s_9 = NULL,t_9 = NULL;
    s_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_9), s_9);
    t = f_7(not_null(o_9), s_9, t);
    t_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_9, t_9);
    return(t);
  }
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = SSL_table_keys(o_9);
  t = map_1_0(o_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm e_65 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_65(t);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = SRTS_one(v_9, t);
      }
    return(t);
  }
  t = v_9(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm z_9 = NULL,c_10 = NULL;
  t = term_h_12;
  z_9 = t;
  t = term_j_12;
  c_10 = t;
  t = term_k_12;
  t = f_7(z_9, c_10, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,h_10 = NULL,i_10 = NULL;
  e_10 = t;
  t = term_l_12;
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, e_10);
  t = f_7(i_10, e_10, t);
  f_10 = t;
  t = term_m_12;
  h_10 = t;
  t = SSL_table_put(h_10, e_10, f_10);
  t = (ATerm) ATmakeAppl(sym__3, term_m_12, e_10, f_10);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,u_10 = NULL,x_10 = NULL,z_10 = NULL,b_11 = NULL,d_11 = NULL,g_11 = NULL,n_2 = NULL;
  k_10 = t;
  t = term_m_12;
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, k_10);
  t = f_7(u_10, k_10, t);
  g_11 = t;
  if(match_cons(t, sym__2))
    {
      z_10 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_11);
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Patched_1, z_10), b_11);
  n_2 = t;
  t = SSLsetAnnotations(n_2, x_10);
  d_11 = t;
  t = term_m_12;
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym_Patched_1, k_10);
  p_10 = t;
  t = SSL_table_put(o_10, p_10, d_11);
  t = term_l_12;
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, k_10);
  t = f_7(n_10, k_10, t);
  l_10 = t;
  t = term_m_12;
  m_10 = t;
  t = SSL_table_put(m_10, k_10, l_10);
  t = (ATerm) ATmakeAppl(sym__3, term_m_12, k_10, l_10);
  return(t);
}
ATerm d_6 (ATerm u_13, ATerm v_13, ATerm t)
{
  t = u_13;
  t = map_1_0(t_0, t);
  t = v_13;
  t = map_1_0(w_0, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm w_8 = NULL,y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      w_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(w_8);
  z_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_8), term_o_12), z_8), term_n_12);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm x_11 = NULL,y_11 = NULL,c_12 = NULL;
  x_11 = t;
  if(match_cons(t, sym_Path1_1))
    {
      y_11 = ATgetArgument(t, 0);
      t = y_11;
    }
  else
    {
      ATerm u_8 = NULL,v_8 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          y_11 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_12;
      t = map_1_0(x_0, t);
      t = concat_0_0(t);
      u_8 = t;
      t = (ATerm) ATinsert(CheckATermList(u_8), y_11);
      v_8 = t;
      t = SSL_concat_strings(v_8);
    }
  return(t);
}
ATerm e_6 (ATerm q_73 (ATerm), ATerm r_20, ATerm q_20, ATerm t)
{
  ATerm k_14 (ATerm t)
  {
    ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
    d_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_14;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_14 = ATgetFirst((ATermList) t);
            f_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_14;
              {
                ATerm a_1 (ATerm t)
                {
                  t = q_20;
                  return(t);
                }
                t = l_6(q_73, a_1, e_14, f_14, t);
                t = k_14(t);
              }
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm p_9 = NULL,u_9 = NULL,c_3 = NULL;
                t = SSLgetAnnotations(d_14);
                p_9 = t;
                t = f_14;
                t = k_14(t);
                u_9 = t;
                t = (ATerm) ATinsert(CheckATermList(u_9), e_14);
                c_3 = t;
                t = SSLsetAnnotations(c_3, p_9);
              }
            }
        }
      }
    return(t);
  }
  t = r_20;
  t = k_14(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  ATerm k_16 (ATerm t)
  {
    ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL;
    i_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_16 = ATgetFirst((ATermList) t);
        h_16 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_10 = NULL,s_10 = NULL,v_3 = NULL;
          t = SSLgetAnnotations(i_16);
          j_10 = t;
          t = h_16;
          t = k_16(t);
          s_10 = t;
          t = (ATerm) ATinsert(CheckATermList(s_10), e_16);
          v_3 = t;
          t = SSLsetAnnotations(v_3, j_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_16;
        t = h_70(t);
      }
    return(t);
  }
  t = k_16(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_14 = NULL,p_14 = NULL,s_14 = NULL;
  n_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_14;
    }
  else
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(s_14);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_14 = ATgetFirst((ATermList) t);
          if(((s_14 != NULL) && (s_14 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_14;
      t = at_end_1_0(b_1, t);
    }
  return(t);
}
ATerm f_17 (ATerm x_16, ATerm t)
{
  ATerm y_16 = NULL;
  t = SSL_explode_term(x_16);
  if(match_cons(t, sym__2))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_16;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_1 (ATerm t)
            {
              t = b_17;
              return(t);
            }
            t = a_17;
            t = at_end_1_0(g_1, t);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = f_17(c_17, t);
          }
      }
    }
  else
    {
      t = f_17(c_17, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm w_71 (ATerm), ATerm x_71 (ATerm), ATerm t)
{
  ATerm u_17 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_71(t);
        ;
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm g_17 = NULL,k_17 = NULL,l_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,y_3 = NULL;
          t = v_71(t);
          t_17 = t;
          if(match_cons(t, sym__2))
            {
              k_17 = ATgetArgument(t, 0);
              l_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_17);
          g_17 = t;
          t = k_17;
          t = x_71(t);
          r_17 = t;
          t = l_17;
          t = u_17(t);
          s_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_17, s_17);
          y_3 = t;
          t = SSLsetAnnotations(y_3, g_17);
          t = w_71(t);
        }
      }
    return(t);
  }
  t = u_17(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      if(((ATgetType(y_12) != AT_LIST) || !(ATisEmpty(y_12))))
        _fail(t);
      {
        ATerm z_12 = ATgetArgument(t, 1);
        if(((ATgetType(z_12) != AT_LIST) || !(ATisEmpty(z_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      if(((ATgetType(a_13) == AT_LIST) && !(ATisEmpty(a_13))))
        {
          d_18 = ATgetFirst((ATermList) a_13);
          e_18 = (ATerm) ATgetNext((ATermList) a_13);
        }
      else
        _fail(t);
      {
        ATerm b_13 = ATgetArgument(t, 1);
        if(((ATgetType(b_13) == AT_LIST) && !(ATisEmpty(b_13))))
          {
            f_18 = ATgetFirst((ATermList) b_13);
            k_18 = (ATerm) ATgetNext((ATermList) b_13);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_18, f_18), (ATerm) ATmakeAppl(sym__2, e_18, k_18));
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_18), m_18);
  return(t);
}
ATerm i_6 (ATerm h_570, ATerm m_570, ATerm v_47, ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,b_18 = NULL;
  t = SSL_explode_term(m_570);
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_570);
  if(match_cons(t, sym__2))
    {
      if((w_17 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_17, y_17);
  t = genzip_4_0(l_1, r_1, x_1, _id, t);
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_18, v_47);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm p_18 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_63(t);
        ;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = s_63(t);
        t = p_18(t);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm for_3_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  t = u_63(t);
  t = while_not_2_0(v_63, w_63, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm y_18 = NULL;
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_18);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,a_4 = NULL;
  i_19 = t;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_19);
  f_19 = t;
  t = h_19;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_19, h_19);
  a_4 = t;
  t = SSLsetAnnotations(a_4, f_19);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm c_21 = NULL,e_21 = NULL,g_21 = NULL,i_21 = NULL,m_21 = NULL;
  c_21 = t;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_21 = ATgetFirst((ATermList) t);
      m_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_13 = t;
        int g_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_22(e_21, g_21, c_21, t);
            ;
            LocalPopChoice(g_13);
          }
        else
          {
            t = e_13;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_21), i_21), m_21);
          }
      }
    }
  else
    {
      t = h_22(e_21, g_21, c_21, t);
    }
  return(t);
}
ATerm h_22 (ATerm j_19, ATerm k_19, ATerm n_19, ATerm t)
{
  ATerm t_19 = NULL,x_19 = NULL,b_4 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  t = SSLgetAnnotations(n_19);
  t_19 = t;
  t = k_19;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_20 = ATgetFirst((ATermList) t);
      g_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_20;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_20;
        if((e_20 != t))
          {
            _fail(t);
          }
        t = g_20;
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = k_19;
        t = i_6(e_20, f_20, g_20, t);
      }
    x_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_19, x_19);
    b_4 = t;
    t = SSLsetAnnotations(b_4, t_19);
  }
  return(t);
}
ATerm d_2 (ATerm t)
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
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(a_2, b_2, c_2, t);
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm s_21 = NULL,z_21 = NULL,b_22 = NULL;
        s_21 = t;
        if(match_cons(t, sym__2))
          {
            z_21 = ATgetArgument(t, 0);
            b_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_21;
        t = e_6(d_2, z_21, b_22, t);
      }
    }
  return(t);
}
ATerm k_6 (ATerm v_73 (ATerm), ATerm t_20, ATerm s_20, ATerm t)
{
  ATerm d_23 (ATerm t)
  {
    ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
    y_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_20;
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
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_22;
              {
                ATerm g_2 (ATerm t)
                {
                  t = s_20;
                  return(t);
                }
                t = l_6(v_73, g_2, z_22, a_23, t);
                t = d_23(t);
              }
              ;
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              {
                ATerm h_11 = NULL,u_11 = NULL,f_4 = NULL;
                t = SSLgetAnnotations(y_22);
                h_11 = t;
                t = a_23;
                t = d_23(t);
                u_11 = t;
                t = (ATerm) ATinsert(CheckATermList(u_11), z_22);
                f_4 = t;
                t = SSLsetAnnotations(f_4, h_11);
              }
            }
        }
      }
    return(t);
  }
  t = t_20;
  t = d_23(t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_23;
      t = w_75(t);
    }
  else
    {
      ATerm o_23 = NULL,p_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_23 = ATgetFirst((ATermList) t);
          i_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_23;
      t = y_75(t);
      o_23 = t;
      t = i_23;
      t = foldr_3_0(w_75, x_75, y_75, t);
      p_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_23, p_23);
      t = x_75(t);
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm a_75 (ATerm), ATerm b_75 (ATerm), ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = NULL;
      t = a_75(t);
      t_23 = t;
      t = (ATerm) ATinsert(ATempty, t_23);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm d_12 = NULL,i_12 = NULL;
        ATerm i_2 (ATerm t)
        {
          t = collect_om_2_0(a_75, b_75, t);
          return(t);
        }
        i_12 = t;
        t = SSL_explode_term(i_12);
        if(match_cons(t, sym__2))
          {
            ATerm p_13 = ATgetArgument(t, 0);
            d_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_12;
        t = foldr_3_0(h_2, b_75, i_2, t);
      }
    }
  return(t);
}
ATerm l_6 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm x_20, ATerm w_20, ATerm t)
{
  t = z_73(t);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm u_23 = NULL;
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_20, u_23);
      t = y_73(t);
      return(t);
    }
    t = fetch_1_0(j_2, t);
    t = w_20;
  }
  return(t);
}
ATerm m_6 (ATerm o_73 (ATerm), ATerm p_20, ATerm o_20, ATerm t)
{
  ATerm s_24 (ATerm t)
  {
    ATerm t_24 (ATerm y_23, ATerm t)
    {
      ATerm b_24 = NULL,c_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL,i_24 = NULL,h_4 = NULL;
      t = y_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_24 = ATgetFirst((ATermList) t);
          c_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_2 (ATerm t)
        {
          t = o_20;
          return(t);
        }
        t = l_6(o_73, k_2, b_24, c_24, t);
        t = y_23;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_24 = ATgetFirst((ATermList) t);
            h_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_23);
        e_24 = t;
        t = h_24;
        t = s_24(t);
        i_24 = t;
        t = (ATerm) ATinsert(CheckATermList(i_24), f_24);
        h_4 = t;
        t = SSLsetAnnotations(h_4, e_24);
      }
      return(t);
    }
    ATerm n_24 = NULL,q_24 = NULL;
    n_24 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_24;
      }
    else
      {
        ATerm q_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_13 = ATgetFirst((ATermList) t);
                q_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(s_13);
            {
              ATerm w_13 = t;
              int y_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_24(n_24, t);
                  ;
                  LocalPopChoice(y_13);
                }
              else
                {
                  t = w_13;
                  t = q_24;
                  t = s_24(t);
                }
            }
          }
        else
          {
            t = q_13;
            t = t_24(n_24, t);
          }
      }
    return(t);
  }
  t = p_20;
  t = s_24(t);
  return(t);
}
ATerm n_6 (ATerm f_45, ATerm g_45, ATerm t)
{
  t = SSL_table_rename(f_45, g_45);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm r_25 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      r_25 = ATgetArgument(t, 0);
      {
        ATerm z_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_25;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm z_24 = NULL,b_25 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      z_24 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, z_24);
    }
  else
    {
      ATerm q_25 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          z_24 = ATgetArgument(t, 0);
          b_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_25;
      t = map_1_0(m_2, t);
      q_25 = t;
      t = (ATerm) ATinsert(CheckATermList(q_25), z_24);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm o_6 (ATerm c_48, ATerm d_48, ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = c_48;
  t = mk_key_0_0(t);
  u_25 = t;
  t = term_b_14;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_48, d_48);
  w_25 = t;
  t = SSL_table_put(v_25, u_25, w_25);
  t = c_48;
  t = path_to_string_0_0(t);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, d_48);
  t = if_verbose1_1_0(o_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm q_26 (ATerm t)
  {
    ATerm m_26 = NULL,o_26 = NULL,p_26 = NULL;
    ATerm c_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_79(t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = c_14;
      }
    p_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_26 = ATgetFirst((ATermList) t);
        o_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_12 = NULL,x_12 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(p_26);
          u_12 = t;
          t = o_26;
          t = q_26(t);
          x_12 = t;
          t = (ATerm) ATinsert(CheckATermList(x_12), m_26);
          m_4 = t;
          t = SSLsetAnnotations(m_4, u_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_26;
      }
    return(t);
  }
  t = q_26(t);
  return(t);
}
ATerm at_last_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  ATerm g_29 (ATerm t)
  {
    ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
    y_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_28 = ATgetFirst((ATermList) t);
        a_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_13 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(y_28);
          f_13 = t;
          t = a_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(a_29), z_28);
          p_4 = t;
          t = SSLsetAnnotations(p_4, f_13);
          t = s_70(t);
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm r_13 = NULL,x_13 = NULL,q_4 = NULL;
            t = SSLgetAnnotations(y_28);
            r_13 = t;
            t = a_29;
            t = g_29(t);
            x_13 = t;
            t = (ATerm) ATinsert(CheckATermList(x_13), z_28);
            q_4 = t;
            t = SSLsetAnnotations(q_4, r_13);
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
  ATerm m_29 = NULL,n_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_29 = ATgetFirst((ATermList) t);
      n_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_29;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_29;
    }
  else
    {
      t = n_29;
      t = last_0_0(t);
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm x_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_14 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_29;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm a_79 (ATerm), ATerm b_79 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,v_29 = NULL,w_29 = NULL;
  s_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_29 = ATgetFirst((ATermList) t);
      {
        ATerm l_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_29;
  t = a_79(t);
  t = s_29;
  t = last_0_0(t);
  t = b_79(t);
  t = s_29;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_14 = ATgetFirst((ATermList) t);
      v_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_29;
  t = at_last_1_0(q_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm x_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_18 = ATgetFirst((ATermList) t);
      z_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_18;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = z_18;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_19 = ATgetFirst((ATermList) t);
      b_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_19;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(b_19), term_e_11);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(b_19), term_c_11);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(b_19), term_l_9);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_19), term_o_14);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,q_33 = NULL;
  m_33 = t;
  if(match_cons(t, sym_Arg_1))
    {
      n_33 = ATgetArgument(t, 0);
      {
        ATerm l_15 = NULL,n_15 = NULL,w_4 = NULL;
        t = SSLgetAnnotations(m_33);
        l_15 = t;
        t = SSL_string_to_int(n_33);
        n_15 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, n_15);
        w_4 = t;
        t = SSLsetAnnotations(w_4, l_15);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          n_33 = ATgetArgument(t, 0);
          q_33 = ATgetArgument(t, 1);
          {
            ATerm u_15 = NULL,b_16 = NULL,c_16 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(m_33);
            u_15 = t;
            t = SSL_string_to_int(n_33);
            b_16 = t;
            t = SSL_string_to_int(q_33);
            c_16 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, b_16, c_16);
            x_4 = t;
            t = SSLsetAnnotations(x_4, u_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              n_33 = ATgetArgument(t, 0);
              q_33 = ATgetArgument(t, 1);
              {
                ATerm o_16 = NULL,y_4 = NULL;
                t = SSLgetAnnotations(m_33);
                o_16 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, n_33, q_33);
                y_4 = t;
                t = SSLsetAnnotations(y_4, o_16);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  n_33 = ATgetArgument(t, 0);
                  {
                    ATerm i_17 = NULL,m_17 = NULL,z_4 = NULL,t_18 = NULL,u_18 = NULL,q_18 = NULL;
                    t = SSLgetAnnotations(m_33);
                    i_17 = t;
                    t = SSL_explode_string(n_33);
                    t = unquote_chars_2_0(r_2, s_2, t);
                    q_18 = t;
                    t = SSL_implode_string(q_18);
                    u_18 = t;
                    t = SSL_explode_string(u_18);
                    t = unescape_chars_1_0(t_2, t);
                    t_18 = t;
                    t = SSL_implode_string(t_18);
                    m_17 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, m_17);
                    z_4 = t;
                    t = SSLsetAnnotations(z_4, i_17);
                  }
                }
              else
                {
                  ATerm q_19 = NULL,u_19 = NULL,a_5 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      n_33 = ATgetArgument(t, 0);
                      q_33 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(m_33);
                  q_19 = t;
                  t = SSL_string_to_int(n_33);
                  u_19 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, u_19, q_33);
                  a_5 = t;
                  t = SSLsetAnnotations(a_5, q_19);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    t = topdown_1_0(a_64, t);
    return(t);
  }
  t = a_64(t);
  t = SRTS_all(u_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  t = topdown_1_0(f_3, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(g_34, h_34, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
    }
  return(t);
}
ATerm w_6 (ATerm b_48, ATerm t)
{
  t = b_48;
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(a_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
      t = term_v_14;
      t = get_options_0_0(t);
      t = oncetd_1_0(g_3, t);
      t = term_w_14;
      l_34 = t;
      t = (ATerm) ATinsert(ATempty, term_x_14);
      m_34 = t;
      t = SSL_printnl(l_34, m_34);
      t = term_y_14;
      k_34 = t;
      t = SSL_exit(k_34);
      t = (ATerm) ATinsert(ATempty, term_x_14);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm o_34 = NULL,p_34 = NULL;
        t = term_w_14;
        o_34 = t;
        t = (ATerm) ATinsert(ATempty, term_z_14);
        p_34 = t;
        t = SSL_printnl(o_34, p_34);
        t = (ATerm) ATinsert(ATempty, term_z_14);
      }
    }
  return(t);
}
ATerm n_35 (ATerm b_35, ATerm t)
{
  t = SSL_fclose(b_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  h_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_35 = ATgetArgument(t, 0);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_35);
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            t = n_35(h_35, t);
          }
      }
    }
  else
    {
      t = n_35(h_35, t);
    }
  return(t);
}
ATerm y_6 (ATerm k_37, ATerm t)
{
  t = SSL_read_term_from_stream(k_37);
  return(t);
}
ATerm z_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm p_35 = NULL;
  t = SSL_fopen(w_33, x_33);
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_35 = NULL;
  t = SSL_stdin_stream();
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_35 = NULL;
  t = SSL_stdout_stream();
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_35 = NULL;
  t = SSL_stderr_stream();
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_35);
  return(t);
}
ATerm r_37 (ATerm z_35, ATerm t)
{
  ATerm b_36 = NULL;
  t = SSL_explode_term(z_35);
  if(match_cons(t, sym__2))
    {
      ATerm c_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_15 = ATgetArgument(t, 1);
        if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
          {
            b_36 = ATgetFirst((ATermList) d_15);
            {
              ATerm e_15 = (ATerm) ATgetNext((ATermList) d_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_37 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,m_36 = NULL,h_5 = NULL;
  t = SSLgetAnnotations(g_36);
  j_36 = t;
  t = e_36;
  if(match_cons(t, sym_Path_1))
    {
      m_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_36, f_36);
  h_5 = t;
  t = SSLsetAnnotations(h_5, j_36);
  if(match_cons(t, sym__2))
    {
      h_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(h_36, i_36, t);
  return(t);
}
ATerm v_37 (ATerm p_36, ATerm r_36, ATerm u_36, ATerm t)
{
  ATerm w_36 = NULL,a_37 = NULL,b_37 = NULL,g_37 = NULL,i_5 = NULL;
  t = SSLgetAnnotations(u_36);
  b_37 = t;
  t = SSL_is_string(p_36);
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, r_36);
  i_5 = t;
  t = SSLsetAnnotations(i_5, b_37);
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(w_36, a_37, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,q_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_15 = ATgetArgument(t, 0);
      ATerm g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  n_37 = t;
  if(match_cons(t, sym__2))
    {
      o_37 = ATgetArgument(t, 0);
      q_37 = ATgetArgument(t, 1);
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_37(n_37, t);
            ;
            LocalPopChoice(i_15);
          }
        else
          {
            t = h_15;
            {
              ATerm j_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_37(o_37, q_37, n_37, t);
                  ;
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = j_15;
                  t = v_37(o_37, q_37, n_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_37(n_37, t);
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  ATerm o_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_38 = NULL;
      a_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_38, term_q_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = o_15;
      t = debug_1_0(h_3, t);
      _fail(t);
    }
  x_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(y_37, t);
  w_37 = t;
  t = x_37;
  t = fclose_0_0(t);
  t = w_37;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,d_21 = NULL,f_21 = NULL;
  t = if_verbose1_1_0(j_3, t);
  t = ReadFromFile_0_0(t);
  g_38 = t;
  t = SSL_explode_term(g_38);
  if(match_cons(t, sym__2))
    {
      f_21 = ATgetArgument(t, 0);
      {
        ATerm r_15 = ATgetArgument(t, 1);
        if(((ATgetType(r_15) == AT_LIST) && !(ATisEmpty(r_15))))
          {
            d_21 = ATgetFirst((ATermList) r_15);
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
  t = f_21;
  {
    ATerm t_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = t_15;
        t = type_failure_0_0(t);
      }
    t = d_21;
    if(match_cons(t, sym_PP_Table_1))
      {
        f_38 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = w_6(f_38, t);
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  c_38 = t;
  t = term_b_14;
  d_38 = t;
  t = SSL_table_create(d_38);
  t = c_38;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  ATerm j_38 = NULL;
  ATerm l_3 (ATerm t)
  {
    t = d_70(t);
    if(((j_38 != NULL) && (j_38 != t)))
      _fail(t);
    else
      j_38 = t;
    return(t);
  }
  t = fetch_1_0(l_3, t);
  t = not_null(j_38);
  return(t);
}
ATerm option_value_2_0 (ATerm s_85 (ATerm), ATerm t_85 (ATerm), ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(s_85, t);
      ;
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
      t = t_85(t);
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  t = term_w_14;
  p_40 = t;
  t = (ATerm) ATinsert(ATempty, term_z_15);
  q_40 = t;
  t = SSL_printnl(p_40, q_40);
  t = term_y_14;
  o_40 = t;
  t = SSL_exit(o_40);
  t = (ATerm) ATinsert(ATempty, term_z_15);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm u_40 = NULL;
  if(match_cons(t, sym__2))
    {
      u_40 = ATgetArgument(t, 0);
      if((u_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,a_41 = NULL;
  v_40 = t;
  t = term_m_12;
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, v_40);
  t = f_7(a_41, v_40, t);
  x_40 = t;
  t = SSL_explode_term(x_40);
  if(match_cons(t, sym__2))
    {
      ATerm a_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_16 = ATgetArgument(t, 1);
        if(((ATgetType(d_16) == AT_LIST) && !(ATisEmpty(d_16))))
          {
            w_40 = ATgetFirst((ATermList) d_16);
            {
              ATerm f_16 = (ATerm) ATgetNext((ATermList) d_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_40;
  t = path_to_string_0_0(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  g_41 = t;
  t = term_l_12;
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, g_41);
  t = f_7(j_41, g_41, t);
  i_41 = t;
  t = SSL_explode_term(i_41);
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_16 = ATgetArgument(t, 1);
        if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
          {
            h_41 = ATgetFirst((ATermList) j_16);
            {
              ATerm l_16 = (ATerm) ATgetNext((ATermList) j_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_41;
  t = path_to_string_0_0(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,a_42 = NULL,h_6 = NULL;
  s_41 = t;
  t = term_m_12;
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, s_41);
  t = f_7(t_41, s_41, t);
  a_42 = t;
  if(match_cons(t, sym__2))
    {
      v_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  u_41 = t;
  t = w_41;
  t = collect_om_2_0(w_3, x_3, t);
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_41, x_41);
  h_6 = t;
  t = SSLsetAnnotations(h_6, u_41);
  if(match_cons(t, sym__2))
    {
      q_41 = ATgetArgument(t, 0);
      r_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_41, q_41, r_41);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm o_42 = NULL,q_42 = NULL;
  o_42 = t;
  if(match_cons(t, sym_S_1))
    {
      q_42 = ATgetArgument(t, 0);
      {
        ATerm o_21 = NULL,y_5 = NULL;
        t = SSLgetAnnotations(o_42);
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, q_42);
        y_5 = t;
        t = SSLsetAnnotations(y_5, o_21);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          q_42 = ATgetArgument(t, 0);
          {
            ATerm a_22 = NULL,a_6 = NULL;
            t = SSLgetAnnotations(o_42);
            a_22 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, q_42);
            a_6 = t;
            t = SSLsetAnnotations(a_6, a_22);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              q_42 = ATgetArgument(t, 0);
              {
                ATerm m_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, q_42);
        }
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      e_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(z_3, e_43, f_43, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm h_43 = NULL;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      if((h_43 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_6 = NULL;
  n_43 = t;
  t = term_l_12;
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, n_43);
  t = f_7(o_43, n_43, t);
  u_43 = t;
  if(match_cons(t, sym__2))
    {
      q_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_43);
  p_43 = t;
  t = s_43;
  t = collect_om_2_0(e_4, g_4, t);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_43, t_43);
  v_6 = t;
  t = SSLsetAnnotations(v_6, p_43);
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_43, l_43, m_43);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  l_44 = t;
  if(match_cons(t, sym_S_1))
    {
      m_44 = ATgetArgument(t, 0);
      {
        ATerm m_22 = NULL,s_6 = NULL;
        t = SSLgetAnnotations(l_44);
        m_22 = t;
        t = (ATerm) ATmakeAppl(sym_S_1, m_44);
        s_6 = t;
        t = SSLsetAnnotations(s_6, m_22);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg_1))
        {
          m_44 = ATgetArgument(t, 0);
          {
            ATerm n_23 = NULL,u_6 = NULL;
            t = SSLgetAnnotations(l_44);
            n_23 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, m_44);
            u_6 = t;
            t = SSLsetAnnotations(u_6, n_23);
          }
        }
      else
        {
          if(match_cons(t, sym_Arg2_2))
            {
              m_44 = ATgetArgument(t, 0);
              {
                ATerm n_16 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Arg_1, m_44);
        }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_44 = ATgetArgument(t, 0);
      v_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(i_4, u_44, v_44, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      w_44 = ATgetArgument(t, 0);
      if((w_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm x_44 = NULL;
  if(match_cons(t, sym__3))
    {
      x_44 = ATgetArgument(t, 0);
      {
        ATerm p_16 = ATgetArgument(t, 1);
      }
      {
        ATerm q_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_44;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm y_44 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
      {
        ATerm s_16 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = y_44;
  t = path_to_string_0_0(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  s_45 = t;
  t = term_m_12;
  t_45 = t;
  t = SSL_table_remove(t_45, s_45);
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, s_45);
  return(t);
}
ATerm s_4 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      ATerm u_16 = ATgetArgument(t, 1);
      if(match_cons(u_16, sym__2))
        {
          m_46 = ATgetArgument(u_16, 0);
          n_46 = ATgetArgument(u_16, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, m_46, n_46);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_v_16;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  ATerm n_3 (ATerm t)
  {
    ATerm k_40 = NULL,l_40 = NULL,n_40 = NULL,m_5 = NULL;
    n_40 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        l_40 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_40);
    k_40 = t;
    t = l_40;
    if(((n_39 != NULL) && (n_39 != t)))
      _fail(t);
    else
      n_39 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, l_40);
    m_5 = t;
    t = SSLsetAnnotations(m_5, k_40);
    return(t);
  }
  t = option_value_2_0(n_3, o_3, t);
  t = (ATerm) ATinsert(ATempty, not_null(n_39));
  t = read_pp_tables_0_0(t);
  t = term_b_14;
  i_40 = t;
  t = term_m_12;
  j_40 = t;
  t = term_w_16;
  t = n_6(i_40, j_40, t);
  {
    ATerm p_3 (ATerm t)
    {
      ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,q_5 = NULL;
      t_40 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          s_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_40);
      r_40 = t;
      t = s_40;
      if(((o_39 != NULL) && (o_39 != t)))
        _fail(t);
      else
        o_39 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, s_40);
      q_5 = t;
      t = SSLsetAnnotations(q_5, r_40);
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      t = term_z_16;
      if(((o_39 != NULL) && (o_39 != t)))
        _fail(t);
      else
        o_39 = t;
      return(t);
    }
    t = option_value_2_0(p_3, q_3, t);
    t = (ATerm) ATinsert(ATempty, not_null(o_39));
    t = read_pp_tables_0_0(t);
    t = term_b_14;
    g_40 = t;
    t = term_l_12;
    h_40 = t;
    t = term_d_17;
    t = n_6(g_40, h_40, t);
    t = term_m_12;
    f_40 = t;
    t = SSL_table_keys(f_40);
    s_39 = t;
    t = term_l_12;
    c_40 = t;
    t = SSL_table_keys(c_40);
    p_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_39, p_39);
    t = m_6(r_3, s_39, p_39, t);
    t_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_39, p_39);
    t = diff_0_0(t);
    a_40 = t;
    t = map_1_0(s_3, t);
    {
      ATerm e_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
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
          b_41 = t;
          t = term_w_14;
          c_41 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, b_41), term_n_17);
          d_41 = t;
          t = SSL_printnl(c_41, d_41);
          t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, b_41), term_n_17));
          ;
          LocalPopChoice(h_17);
        }
      else
        {
          t = e_17;
        }
      t = (ATerm) ATmakeAppl(sym__2, p_39, s_39);
      t = diff_0_0(t);
      w_39 = t;
      t = map_1_0(t_3, t);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
            ATerm q_17 = t;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_17;
              }
            k_41 = t;
            t = term_w_14;
            l_41 = t;
            t = (ATerm) ATinsert(ATinsert(ATempty, k_41), term_v_17);
            m_41 = t;
            t = SSL_printnl(l_41, m_41);
            t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, k_41), term_v_17));
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
          }
        t = t_39;
        t = map_1_0(u_3, t);
        u_39 = t;
        t = t_39;
        t = map_1_0(d_4, t);
        v_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
        t = diff_0_0(t);
        b_40 = t;
        t = map_1_0(k_4, t);
        x_39 = t;
        t = b_40;
        t = map_1_0(l_4, t);
        {
          ATerm z_17 = t;
          int a_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_44 = NULL,c_45 = NULL,d_45 = NULL;
              ATerm c_18 = t;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = c_18;
                }
              z_44 = t;
              t = term_w_14;
              c_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_44), term_g_18);
              d_45 = t;
              t = SSL_printnl(c_45, d_45);
              t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, z_44), term_g_18));
              ;
              LocalPopChoice(a_18);
            }
          else
            {
              t = z_17;
            }
          {
            ATerm h_18 = t;
            int i_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_18;
                t = get_options_0_0(t);
                t = oncetd_1_0(n_4, t);
                t = (ATerm) ATmakeAppl(sym__2, w_39, x_39);
                t = d_6(w_39, x_39, t);
                ;
                LocalPopChoice(i_18);
              }
            else
              {
                t = h_18;
              }
            {
              ATerm l_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_18;
                  t = get_options_0_0(t);
                  t = oncetd_1_0(o_4, t);
                  t = a_40;
                  t = map_1_0(r_4, t);
                  ;
                  LocalPopChoice(o_18);
                }
              else
                {
                  t = l_18;
                }
              {
                ATerm s_18 = t;
                int v_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_46 = NULL,d_46 = NULL;
                    ATerm w_18 = t;
                    int c_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_46 = NULL;
                        e_46 = t;
                        t = term_j_18;
                        t = get_options_0_0(t);
                        t = oncetd_1_0(s_4, t);
                        t = e_46;
                        ;
                        LocalPopChoice(c_19);
                      }
                    else
                      {
                        t = w_18;
                        {
                          ATerm i_46 = NULL;
                          i_46 = t;
                          t = term_r_18;
                          t = get_options_0_0(t);
                          t = oncetd_1_0(t_4, t);
                          t = i_46;
                        }
                      }
                    t = term_m_12;
                    t = table_getlist_0_0(t);
                    t = map_1_0(v_4, t);
                    t = desugar_0_0(t);
                    c_46 = t;
                    t = (ATerm) ATmakeAppl(sym_PP_Table_1, c_46);
                    d_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATmakeAppl(sym_PP_Table_1, c_46));
                    t = x_5(c_5, d_46, t);
                    t = output_1_0(_id, t);
                    ;
                    LocalPopChoice(v_18);
                  }
                else
                  {
                    t = s_18;
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
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  v_46 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  w_46 = t;
  t = term_w_14;
  y_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_19), w_46), term_e_19);
  z_46 = t;
  t = SSL_printnl(y_46, z_46);
  t = term_y_14;
  x_46 = t;
  t = SSL_exit(x_46);
  t = v_46;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm b_47 = NULL;
  b_47 = t;
  if(match_string(t, "-k"))
    {
      t = b_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_47;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  t = SSL_string_to_int(c_47);
  d_47 = t;
  t = term_m_19;
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_19, d_47);
  t = h_7(e_47, d_47, t);
  t = c_47;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  if(match_string(t, "-S"))
    {
      t = g_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_47;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  t = term_p_19;
  h_47 = t;
  t = term_r_19;
  i_47 = t;
  t = term_s_19;
  t = h_7(h_47, i_47, t);
  t = term_v_19;
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  t = SSL_string_to_int(j_47);
  k_47 = t;
  t = term_p_19;
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, k_47);
  t = h_7(l_47, k_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_47);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  t = term_z_19;
  m_47 = t;
  t = term_r_10;
  n_47 = t;
  t = term_a_20;
  t = h_7(m_47, n_47, t);
  t = term_b_20;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, k_5, l_5, t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_5, p_5, r_5, t);
            ;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = Option_3_0(b_6, c_6, g_6, t);
          }
      }
    }
  return(t);
}
ATerm h_7 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm o_47 = NULL;
  t = term_l_20;
  o_47 = t;
  t = SSL_table_put(o_47, l_38, m_38);
  t = (ATerm) ATmakeAppl(sym__3, term_l_20, l_38, m_38);
  return(t);
}
ATerm Option_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_47 = NULL,z_47 = NULL,e_48 = NULL;
      t = term_r_10;
      t = j_0(t);
      y_47 = t;
      t = term_m_20;
      z_47 = t;
      t = term_n_20;
      e_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_20, term_n_20, y_47);
      t = a_7(z_47, e_48, y_47, t);
      _fail(t);
    }
  else
    {
      ATerm l_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_47 = ATgetFirst((ATermList) t);
          x_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_47;
      t = h_0(t);
      t = term_r_10;
      t = i_0(t);
      l_48 = t;
      t = (ATerm) ATinsert(CheckATermList(x_47), l_48);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  if(match_string(t, "-o"))
    {
      t = u_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_48;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  v_48 = t;
  t = term_r_9;
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, v_48);
  t = h_7(w_48, v_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_48);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, p_6, q_6, t);
  return(t);
}
ATerm a_7 (ATerm j_43, ATerm k_43, ATerm i_43, ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,d_49 = NULL;
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
  {
    ATerm v_20 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
        t = f_7(j_43, k_43, t);
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = v_20;
        t = (ATerm) ATempty;
      }
    z_48 = t;
    t = (ATerm) ATinsert(CheckATermList(z_48), i_43);
    d_49 = t;
    t = SSL_table_put(j_43, k_43, d_49);
    t = y_48;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL;
      t = term_r_10;
      t = m_0(t);
      o_49 = t;
      t = term_m_20;
      p_49 = t;
      t = term_n_20;
      q_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_20, term_n_20, o_49);
      t = a_7(p_49, q_49, o_49, t);
      _fail(t);
    }
  else
    {
      ATerm u_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_49 = ATgetFirst((ATermList) t);
          l_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_49 = ATgetFirst((ATermList) t);
          n_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_49;
      t = k_0(t);
      t = m_49;
      t = l_0(t);
      u_49 = t;
      t = (ATerm) ATinsert(CheckATermList(n_49), u_49);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_10;
  t = whoami_0_0(t);
  v_49 = t;
  t = term_w_14;
  x_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_21), v_49);
  y_49 = t;
  t = SSL_printnl(x_49, y_49);
  t = term_y_14;
  w_49 = t;
  t = SSL_exit(w_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm b_7 (ATerm u_30, ATerm v_30, ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_30, v_30);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      t = SSL_addr(u_30, v_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL;
  a_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_50;
      t = u_75(t);
    }
  else
    {
      ATerm f_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_50 = ATgetFirst((ATermList) t);
          c_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_50;
      t = foldr_2_0(u_75, v_75, t);
      f_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_50, f_50);
      t = v_75(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  if(match_cons(t, sym__2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(k_24, l_24, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_50 = NULL,a_24 = NULL,d_24 = NULL;
  t = times_0_0(t);
  d_24 = t;
  t = SSL_explode_term(d_24);
  if(match_cons(t, sym__2))
    {
      ATerm l_21 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_24;
  t = foldr_2_0(r_6, t_6, t);
  i_50 = t;
  t = SSL_TicksToSeconds(i_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t_50 = t;
  if(match_cons(t, sym__2))
    {
      u_50 = ATgetArgument(t, 0);
      v_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_50;
        if((u_50 != t))
          {
            _fail(t);
          }
        t = t_50;
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = n_21;
        t = (ATerm) ATmakeAppl(sym__2, u_50, v_50);
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_50, v_50);
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              t = SSL_gtr(u_50, v_50);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_50, v_50);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm z_50 = NULL;
  z_50 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL;
        t = term_p_19;
        t = get_config_0_0(t);
        b_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_51, term_y_14);
        t = geq_0_0(t);
        t = z_50;
        t = y_83(t);
        ;
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = z_50;
      }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,g_51 = NULL,h_51 = NULL;
  t = run_time_0_0(t);
  d_51 = t;
  t = term_r_10;
  t = whoami_0_0(t);
  e_51 = t;
  t = term_w_14;
  g_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_21), d_51), term_v_21), e_51);
  h_51 = t;
  t = SSL_printnl(g_51, h_51);
  t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_21), d_51), term_v_21), e_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_19;
  i_51 = t;
  t = SSL_exit(i_51);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL;
  r_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_51 = ATgetArgument(t, 0);
          {
            ATerm n_25 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(r_51);
            n_25 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_51);
            m_7 = t;
            t = SSLsetAnnotations(m_7, n_25);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      t = fetch_1_0(c_7, t);
    }
  t = o_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_51 = ATgetFirst((ATermList) t);
      v_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_51 = NULL,a_52 = NULL;
        ATerm d_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_51)), not_null(a_52));
          return(t);
        }
        t = v_51;
        t = g_0(t);
        if(((z_51 != NULL) && (z_51 != t)))
          _fail(t);
        else
          z_51 = t;
        t = u_51;
        t = d_0(t);
        if(((a_52 != NULL) && (a_52 != t)))
          _fail(t);
        else
          a_52 = t;
        t = v_51;
        t = reverse_acc_2_0(d_0, d_7, t);
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
ATerm g_7 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,s_7 = NULL;
  g_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_52);
  e_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_52);
  s_7 = t;
  t = SSLsetAnnotations(s_7, e_52);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_52), term_d_22);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = fetch_1_0(g_7, t);
    }
  t = term_i_22;
  t = echo_0_0(t);
  t = term_m_20;
  c_52 = t;
  t = term_n_20;
  d_52 = t;
  t = term_j_22;
  t = f_7(c_52, d_52, t);
  t = reverse_acc_2_0(_id, i_7, t);
  t = map_1_0(j_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm f_53 (ATerm t)
  {
    ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
    c_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_53 = ATgetFirst((ATermList) t);
        e_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_22 = t;
      int l_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_26 = NULL,u_26 = NULL,c_9 = NULL;
          t = SSLgetAnnotations(c_53);
          j_26 = t;
          t = d_53;
          t = b_70(t);
          u_26 = t;
          t = (ATerm) ATinsert(CheckATermList(e_53), u_26);
          c_9 = t;
          t = SSLsetAnnotations(c_9, j_26);
          ;
          LocalPopChoice(l_22);
        }
      else
        {
          t = k_22;
          {
            ATerm f_27 = NULL,j_27 = NULL,j_9 = NULL;
            t = SSLgetAnnotations(c_53);
            f_27 = t;
            t = e_53;
            t = f_53(t);
            j_27 = t;
            t = (ATerm) ATinsert(CheckATermList(j_27), d_53);
            j_9 = t;
            t = SSLsetAnnotations(j_9, f_27);
          }
        }
    }
    return(t);
  }
  t = f_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_53;
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
            t = j_53;
          }
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = (ATerm) ATinsert(ATempty, j_53);
      }
    k_53 = t;
    t = term_w_9;
    l_53 = t;
    t = SSL_printnl(l_53, k_53);
    t = j_53;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_7 (ATerm k_28, ATerm l_28, ATerm t)
{
  t = SSL_strcat(k_28, l_28);
  return(t);
}
ATerm debug_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  p_53 = t;
  t = m_82(t);
  q_53 = t;
  t = term_w_14;
  r_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_53), q_53);
  s_53 = t;
  t = SSL_printnl(r_53, s_53);
  t = p_53;
  return(t);
}
ATerm map_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm j_54 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,i_54 = NULL;
    e_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_54;
      }
    else
      {
        ATerm z_27 = NULL,d_28 = NULL,e_28 = NULL,m_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_54 = ATgetFirst((ATermList) t);
            i_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_54);
        z_27 = t;
        t = f_54;
        t = r_69(t);
        d_28 = t;
        t = i_54;
        t = j_54(t);
        e_28 = t;
        t = (ATerm) ATinsert(CheckATermList(e_28), d_28);
        m_9 = t;
        t = SSLsetAnnotations(m_9, z_27);
      }
    return(t);
  }
  t = j_54(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_54 = NULL;
      r_54 = t;
      t = SSL_is_string(r_54);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_7, t);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            {
              ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
              x_54 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_54 = ATgetArgument(t, 0);
                  t = y_54;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_54 = ATgetArgument(t, 0);
                      t = y_54;
                      {
                        ATerm b_23 = t;
                        int c_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_23);
                          }
                        else
                          {
                            t = b_23;
                            t = debug_1_0(l_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_55 = NULL,e_55 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_54 = ATgetArgument(t, 0);
                          z_54 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_54;
                      t = eval_config_0_0(t);
                      d_55 = t;
                      t = z_54;
                      t = eval_config_0_0(t);
                      e_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_55, e_55);
                      t = e_7(d_55, e_55, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm f_7 (ATerm a_45, ATerm b_45, ATerm t)
{
  t = SSL_table_get(a_45, b_45);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL;
  i_55 = t;
  t = term_l_20;
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, i_55);
  t = f_7(j_55, i_55, t);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_55 = NULL,l_55 = NULL;
        t = eval_config_0_0(t);
        k_55 = t;
        t = term_l_20;
        l_55 = t;
        t = SSL_table_put(l_55, i_55, k_55);
        t = k_55;
        ;
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
      }
  }
  return(t);
}
ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  t = term_j_23;
  o_55 = t;
  t = term_r_10;
  p_55 = t;
  t = term_k_23;
  t = h_7(o_55, p_55, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm q_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  t = term_j_23;
  s_55 = t;
  t = term_r_10;
  t_55 = t;
  t = term_k_23;
  t = h_7(s_55, t_55, t);
  t = term_m_23;
  q_55 = t;
  t = term_r_10;
  r_55 = t;
  t = term_q_23;
  t = h_7(q_55, r_55, t);
  t = term_r_23;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_s_23;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_7, o_7, p_7, t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = Option_3_0(q_7, u_7, z_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_54 (ATerm), ATerm h_54 (ATerm), ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,k_11 = NULL;
  z_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_55 = ATgetFirst((ATermList) t);
      w_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_55);
  u_55 = t;
  t = v_55;
  t = g_54(t);
  x_55 = t;
  t = w_55;
  t = h_54(t);
  y_55 = t;
  t = (ATerm) ATinsert(CheckATermList(y_55), x_55);
  k_11 = t;
  t = SSLsetAnnotations(k_11, u_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,j_56 = NULL,k_56 = NULL,m_11 = NULL;
  e_56 = t;
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_24;
        t = r_88(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
      }
    t = e_56;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_56 = ATgetFirst((ATermList) t);
        h_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_56);
    f_56 = t;
    t = term_h_21;
    k_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_21, g_56);
    t = h_7(k_56, g_56, t);
    t = h_56;
    {
      ATerm u_56 (ATerm t)
      {
        ATerm j_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_56 = NULL;
                n_56 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_56;
                ;
                LocalPopChoice(p_24);
              }
            else
              {
                t = o_24;
                t = r_88(t);
                t = Cons_2_0(_id, u_56, t);
              }
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = j_24;
            {
              ATerm q_56 = NULL,r_56 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_56 = ATgetFirst((ATermList) t);
                  r_56 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_56), (ATerm) ATmakeAppl(sym_Undefined_1, q_56));
            }
          }
        return(t);
      }
      t = u_56(t);
      j_56 = t;
      t = (ATerm) ATinsert(CheckATermList(j_56), (ATerm) ATmakeAppl(sym_Program_1, g_56));
      m_11 = t;
      t = SSLsetAnnotations(m_11, f_56);
    }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  if(match_string(t, "--help"))
    {
      t = g_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_57;
        }
    }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL;
  t = term_c_22;
  h_57 = t;
  t = term_r_10;
  i_57 = t;
  t = term_r_24;
  t = h_7(h_57, i_57, t);
  t = term_u_24;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL;
  b_57 = t;
  t = term_m_20;
  d_57 = t;
  t = term_n_20;
  e_57 = t;
  t = (ATerm) ATempty;
  f_57 = t;
  t = SSL_table_put(d_57, e_57, f_57);
  t = b_57;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm w_24 = t;
      int x_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_88(t);
          ;
          LocalPopChoice(x_24);
        }
      else
        {
          t = w_24;
          {
            ATerm y_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, c_8, e_8, t);
                ;
                LocalPopChoice(a_25);
              }
            else
              {
                t = y_24;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_57 = NULL;
          p_57 = t;
          {
            ATerm e_25 = t;
            int f_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_29 = NULL;
                t = p_57;
                {
                  ATerm g_25 = t;
                  int h_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_22;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_25);
                    }
                  else
                    {
                      t = g_25;
                      t = fetch_1_0(g_8, t);
                    }
                  t = p_57;
                  t = default_system_usage_0_0(t);
                  t = term_r_19;
                  d_29 = t;
                  t = SSL_exit(d_29);
                }
                ;
                LocalPopChoice(f_25);
              }
            else
              {
                t = e_25;
                {
                  ATerm k_29 = NULL;
                  t = term_j_23;
                  t = get_config_0_0(t);
                  t = p_57;
                  t = default_system_about_0_0(t);
                  t = term_r_19;
                  k_29 = t;
                  t = SSL_exit(k_29);
                }
              }
          }
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          {
            ATerm i_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
                ATerm i_8 (ATerm t)
                {
                  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,o_11 = NULL;
                  v_57 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_57);
                  t_57 = t;
                  t = u_57;
                  if(((z_56 != NULL) && (z_56 != t)))
                    _fail(t);
                  else
                    z_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_57);
                  o_11 = t;
                  t = SSLsetAnnotations(o_11, t_57);
                  return(t);
                }
                t = fetch_1_0(i_8, t);
                t = term_w_14;
                r_57 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_56)), term_k_25);
                s_57 = t;
                t = SSL_printnl(r_57, s_57);
                t = (ATerm) ATmakeAppl(sym__2, term_w_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_56)), term_k_25));
                t = default_system_usage_0_0(t);
                t = term_y_14;
                q_57 = t;
                t = SSL_exit(q_57);
                ;
                LocalPopChoice(j_25);
              }
            else
              {
                t = i_25;
              }
          }
        }
      a_57 = t;
      t = term_m_20;
      c_57 = t;
      t = SSL_table_destroy(c_57);
      t = a_57;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm s_86 (ATerm), ATerm t_86 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  t = parse_options_1_0(q_86, t);
  a_58 = t;
  t = term_h_12;
  d_58 = t;
  t = SSL_table_create(d_58);
  t = term_h_12;
  b_58 = t;
  t = term_j_12;
  c_58 = t;
  t = SSL_table_put(b_58, c_58, a_58);
  t = a_58;
  t = s_86(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_86, t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm o_25 = t;
          int p_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_86(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(p_25);
            }
          else
            {
              t = o_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm t_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_8, l_8, m_8, t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = t_25;
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(n_8, o_8, p_8, t);
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            {
              ATerm a_26 = t;
              int b_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(q_8, r_8, s_8, t);
                  ;
                  LocalPopChoice(b_26);
                }
              else
                {
                  t = a_26;
                  {
                    ATerm c_26 = t;
                    int d_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(t_8, x_8, a_9, t);
                        ;
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
                              t = ArgOption_3_0(b_9, d_9, e_9, t);
                              ;
                              LocalPopChoice(f_26);
                            }
                          else
                            {
                              t = e_26;
                              {
                                ATerm g_26 = t;
                                int h_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    ;
                                    LocalPopChoice(h_26);
                                  }
                                else
                                  {
                                    t = g_26;
                                    {
                                      ATerm i_26 = t;
                                      int k_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(f_9, g_9, h_9, t);
                                          ;
                                          LocalPopChoice(k_26);
                                        }
                                      else
                                        {
                                          t = i_26;
                                          {
                                            ATerm l_26 = t;
                                            int n_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                ;
                                                LocalPopChoice(n_26);
                                              }
                                            else
                                              {
                                                t = l_26;
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
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_s_26;
  return(t);
}
ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_r_18;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm t_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm f_58 = NULL;
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, f_58);
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, g_58);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  t = term_a_10;
  h_58 = t;
  t = term_r_10;
  i_58 = t;
  t = term_y_26;
  t = h_7(h_58, i_58, t);
  t = term_z_26;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_8, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}

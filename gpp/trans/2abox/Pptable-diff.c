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
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_o_21;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_f_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_y_14;
ATerm term_s_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_g_13;
ATerm term_a_13;
ATerm term_w_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_i_9;
ATerm term_y_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_j_8;
ATerm term_g_3;
void init_constant_terms (void)
{
  ATprotect(&(term_g_3));
  term_g_3 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify new table with --new switch", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_n_10);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_m_10);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_i_9);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_c_17);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_i_9);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_i_9);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_i_9);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_i_9);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm v_4 (ATerm b_33, ATerm c_33, ATerm);
ATerm w_4 (ATerm p_36, ATerm q_36, ATerm);
ATerm y_4 (ATerm v_81 (ATerm), ATerm l_407, ATerm t_36, ATerm);
ATerm x_4 (ATerm l_36, ATerm m_36, ATerm);
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm output_1_0 (ATerm e_86 (ATerm), ATerm);
ATerm z_4 (ATerm z_27, ATerm a_28, ATerm);
ATerm a_5 (ATerm y_90 (ATerm), ATerm j_48, ATerm);
ATerm escape_chars_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm patch_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm path_to_string_0_0 (ATerm);
ATerm g_5 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm b_20, ATerm a_20, ATerm);
ATerm h_5 (ATerm x_72 (ATerm), ATerm v_19, ATerm u_19, ATerm);
ATerm at_end_1_0 (ATerm o_69 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm h_14 (ATerm q_13, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm);
ATerm l_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm m_5 (ATerm b_563, ATerm g_563, ATerm c_47, ATerm);
ATerm while_not_2_0 (ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm x_18 (ATerm r_16, ATerm t_16, ATerm u_16, ATerm);
ATerm d_2 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm o_5 (ATerm m_44, ATerm n_44, ATerm);
ATerm e_2 (ATerm);
ATerm mk_key_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm p_5 (ATerm j_47, ATerm k_47, ATerm);
ATerm unescape_chars_1_0 (ATerm r_78 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm unquote_chars_2_0 (ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm o_2 (ATerm);
ATerm MakePPTerm_0_0 (ATerm);
ATerm topdown_1_0 (ATerm h_63 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_5 (ATerm i_47, ATerm);
ATerm v_2 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm m_28 (ATerm f_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm z_5 (ATerm r_36, ATerm);
ATerm a_6 (ATerm d_33, ATerm e_33, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_30 (ATerm c_29, ATerm);
ATerm l_30 (ATerm h_29, ATerm i_29, ATerm j_29, ATerm);
ATerm o_30 (ATerm t_29, ATerm u_29, ATerm v_29, ATerm);
ATerm b_6 (ATerm);
ATerm w_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm read_pp_tables_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm option_value_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm pptable_diff_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm a_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_6 (ATerm s_37, ATerm t_37, ATerm);
ATerm Option_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_6 (ATerm q_42, ATerm r_42, ATerm p_42, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm d_6 (ATerm b_30, ATerm c_30, ATerm);
ATerm foldr_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_69 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_6 (ATerm q_27, ATerm r_27, ATerm);
ATerm debug_1_0 (ATerm t_81 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm h_6 (ATerm h_44, ATerm i_44, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_53 (ATerm), ATerm o_53 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm y_87 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm parse_options_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm io_Pptable_diff_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm v_4 (ATerm b_33, ATerm c_33, ATerm t)
{
  ATerm f_0 = NULL;
  t = SSL_fputc(b_33, c_33);
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_0);
  return(t);
}
ATerm w_4 (ATerm p_36, ATerm q_36, ATerm t)
{
  ATerm p_0 = NULL;
  t = SSL_write_term_to_stream_text(p_36, q_36);
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_0);
  return(t);
}
ATerm y_4 (ATerm v_81 (ATerm), ATerm l_407, ATerm t_36, ATerm t)
{
  ATerm q_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_407, term_g_3);
  t = b_6(t);
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_0, t_36);
  t = v_81(t);
  t = fclose_0_0(t);
  t = t_36;
  return(t);
}
ATerm x_4 (ATerm l_36, ATerm m_36, ATerm t)
{
  ATerm r_0 = NULL;
  t = SSL_write_term_to_stream_baf(l_36, m_36);
  r_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_0);
  return(t);
}
ATerm a_0 (ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(match_cons(g_8, sym_Stream_1))
        {
          w_0 = ATgetArgument(g_8, 0);
        }
      else
        _fail(t);
      z_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(w_0, z_0, t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if(match_cons(h_8, sym_Stream_1))
        {
          g_1 = ATgetArgument(h_8, 0);
        }
      else
        _fail(t);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(g_1, h_1, t);
  c_1 = t;
  t = term_j_8;
  d_1 = t;
  t = c_1;
  if(match_cons(t, sym_Stream_1))
    {
      e_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_8, c_1);
  t = v_4(d_1, e_1, t);
  return(t);
}
ATerm output_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL;
  t = e_86(t);
  v_0 = t;
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_8;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        t = term_s_8;
      }
    s_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_0, v_0);
    {
      ATerm u_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_y_8;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, s_0, v_0);
          LocalPopChoice(w_8);
          if(match_cons(t, sym__2))
            {
              ATerm e_9 = ATgetArgument(t, 0);
              ATerm f_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_4(a_0, s_0, v_0, t);
        }
      else
        {
          t = u_8;
          if(match_cons(t, sym__2))
            {
              ATerm g_9 = ATgetArgument(t, 0);
              ATerm h_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_4(b_0, s_0, v_0, t);
        }
    }
  }
  return(t);
}
ATerm z_4 (ATerm z_27, ATerm a_28, ATerm t)
{
  t = SSL_mkterm(z_27, a_28);
  return(t);
}
ATerm a_5 (ATerm y_90 (ATerm), ATerm j_48, ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  t = term_i_9;
  t = y_90(t);
  i_1 = t;
  t = (ATerm) ATinsert(ATempty, j_48);
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, (ATerm) ATinsert(ATempty, j_48));
  t = z_4(i_1, j_1, t);
  return(t);
}
ATerm escape_chars_0_0 (ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,u_1 = NULL,w_1 = NULL,n_0 = NULL;
      ATerm l_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_9 = ATgetFirst((ATermList) t);
              if(((ATgetType(n_9) != AT_INT) || (ATgetInt((ATermInt) n_9) != 34)))
                _fail(t);
              x_1 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_1), term_p_9), term_o_9);
          ;
          LocalPopChoice(m_9);
        }
      else
        {
          t = l_9;
          {
            ATerm l_2 = NULL,m_2 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_2 = ATgetFirst((ATermList) t);
                m_2 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_2;
            if(match_int(t, 92))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_2), term_o_9), term_o_9);
              }
            else
              {
                if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 10)))
                  _fail(t);
                t = (ATerm) ATinsert(ATinsert(CheckATermList(m_2), term_r_9), term_o_9);
              }
          }
        }
      w_1 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_1 = ATgetFirst((ATermList) t);
          s_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_1);
      q_1 = t;
      t = s_1;
      t = Cons_2_0(_id, escape_chars_0_0, t);
      u_1 = t;
      t = (ATerm) ATinsert(CheckATermList(u_1), r_1);
      n_0 = t;
      t = SSLsetAnnotations(n_0, q_1);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm c_3 = NULL,d_3 = NULL,e_3 = NULL;
        e_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_3 = ATgetFirst((ATermList) t);
            d_3 = (ATerm) ATgetNext((ATermList) t);
            {
              ATerm e_0 = NULL,u_0 = NULL,f_1 = NULL;
              t = SSLgetAnnotations(e_3);
              e_0 = t;
              t = d_3;
              t = escape_chars_0_0(t);
              u_0 = t;
              t = (ATerm) ATinsert(CheckATermList(u_0), c_3);
              f_1 = t;
              t = SSLsetAnnotations(f_1, e_0);
            }
          }
        else
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_3;
          }
      }
    }
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
  i_7 = t;
  if(match_cons(t, sym_Arg_1))
    {
      g_7 = ATgetArgument(t, 0);
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL,a_2 = NULL,m_1 = NULL;
            t = SSLgetAnnotations(i_7);
            y_1 = t;
            t = SSL_int_to_string(g_7);
            a_2 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, a_2);
            m_1 = t;
            t = SSLsetAnnotations(m_1, y_1);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            t = i_7;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          g_7 = ATgetArgument(t, 0);
          h_7 = ATgetArgument(t, 1);
          {
            ATerm u_9 = t;
            int v_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_2 = NULL,n_2 = NULL,q_2 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(i_7);
                i_2 = t;
                t = SSL_int_to_string(g_7);
                n_2 = t;
                t = SSL_int_to_string(h_7);
                q_2 = t;
                t = (ATerm) ATmakeAppl(sym_Arg2_2, n_2, q_2);
                n_1 = t;
                t = SSLsetAnnotations(n_1, i_2);
                ;
                LocalPopChoice(v_9);
              }
            else
              {
                t = u_9;
                t = i_7;
              }
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              g_7 = ATgetArgument(t, 0);
              h_7 = ATgetArgument(t, 1);
              {
                ATerm w_9 = t;
                int x_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_3 = NULL,o_1 = NULL;
                    t = SSLgetAnnotations(i_7);
                    m_3 = t;
                    t = (ATerm) ATmakeAppl(sym_SOpt_2, g_7, h_7);
                    o_1 = t;
                    t = SSLsetAnnotations(o_1, m_3);
                    ;
                    LocalPopChoice(x_9);
                  }
                else
                  {
                    t = w_9;
                    t = i_7;
                  }
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  g_7 = ATgetArgument(t, 0);
                  {
                    ATerm y_9 = t;
                    int c_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_4 = NULL,j_4 = NULL,p_1 = NULL,u_4 = NULL,d_5 = NULL,f_5 = NULL,p_4 = NULL;
                        t = SSLgetAnnotations(i_7);
                        b_4 = t;
                        t = SSL_explode_string(g_7);
                        t = escape_chars_0_0(t);
                        p_4 = t;
                        t = SSL_implode_string(p_4);
                        d_5 = t;
                        t = SSL_explode_string(d_5);
                        f_5 = t;
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_5), term_p_9), (ATerm) ATinsert(ATempty, term_p_9));
                        t = conc_0_0(t);
                        u_4 = t;
                        t = SSL_implode_string(u_4);
                        j_4 = t;
                        t = (ATerm) ATmakeAppl(sym_S_1, j_4);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, b_4);
                        ;
                        LocalPopChoice(c_10);
                      }
                    else
                      {
                        t = y_9;
                        t = i_7;
                      }
                  }
                }
              else
                {
                  if(match_cons(t, sym_selector_2))
                    {
                      g_7 = ATgetArgument(t, 0);
                      h_7 = ATgetArgument(t, 1);
                      {
                        ATerm e_10 = t;
                        int f_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_5 = NULL,v_5 = NULL,s_2 = NULL;
                            t = SSLgetAnnotations(i_7);
                            r_5 = t;
                            t = SSL_int_to_string(g_7);
                            v_5 = t;
                            t = (ATerm) ATmakeAppl(sym_selector_2, v_5, h_7);
                            s_2 = t;
                            t = SSLsetAnnotations(s_2, r_5);
                            ;
                            LocalPopChoice(f_10);
                          }
                        else
                          {
                            t = e_10;
                            t = i_7;
                          }
                      }
                    }
                  else
                    {
                      t = i_7;
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
  ATerm l_8 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm m_8 = NULL,q_8 = NULL;
    m_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), m_8);
    t = h_6(not_null(l_8), m_8, t);
    q_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_8, q_8);
    return(t);
  }
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = SSL_table_keys(l_8);
  t = map_1_0(o_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_64(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = SRTS_one(r_8, t);
      }
    return(t);
  }
  t = r_8(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  ATerm t_8 = NULL,x_8 = NULL;
  t = term_j_10;
  t_8 = t;
  t = term_k_10;
  x_8 = t;
  t = term_l_10;
  t = h_6(t_8, x_8, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL;
  a_9 = t;
  t = term_m_10;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, a_9);
  t = h_6(d_9, a_9, t);
  b_9 = t;
  t = term_n_10;
  c_9 = t;
  t = SSL_table_put(c_9, a_9, b_9);
  t = (ATerm) ATmakeAppl(sym__3, term_n_10, a_9, b_9);
  return(t);
}
ATerm patch_0_0 (ATerm t)
{
  t = map_1_0(t_0, t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      l_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_int_to_string(l_7);
  n_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_7), term_p_10), n_7), term_o_10);
  return(t);
}
ATerm path_to_string_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  z_9 = t;
  if(match_cons(t, sym_Path1_1))
    {
      a_10 = ATgetArgument(t, 0);
      t = a_10;
    }
  else
    {
      ATerm j_7 = NULL,k_7 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          a_10 = ATgetArgument(t, 0);
          b_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_10;
      t = map_1_0(x_0, t);
      t = concat_0_0(t);
      j_7 = t;
      t = (ATerm) ATinsert(CheckATermList(j_7), a_10);
      k_7 = t;
      t = SSL_concat_strings(k_7);
    }
  return(t);
}
ATerm g_5 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm b_20, ATerm a_20, ATerm t)
{
  t = g_73(t);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm i_10 = NULL;
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_20, i_10);
      t = f_73(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = a_20;
  }
  return(t);
}
ATerm h_5 (ATerm x_72 (ATerm), ATerm v_19, ATerm u_19, ATerm t)
{
  ATerm h_11 (ATerm t)
  {
    ATerm x_10 = NULL,b_11 = NULL,e_11 = NULL;
    x_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_10;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_11 = ATgetFirst((ATermList) t);
            e_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_10;
              {
                ATerm a_1 (ATerm t)
                {
                  t = u_19;
                  return(t);
                }
                t = g_5(x_72, a_1, b_11, e_11, t);
                t = h_11(t);
              }
              ;
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
              {
                ATerm b_8 = NULL,e_8 = NULL,z_2 = NULL;
                t = SSLgetAnnotations(x_10);
                b_8 = t;
                t = e_11;
                t = h_11(t);
                e_8 = t;
                t = (ATerm) ATinsert(CheckATermList(e_8), b_11);
                z_2 = t;
                t = SSLsetAnnotations(z_2, b_8);
              }
            }
        }
      }
    return(t);
  }
  t = v_19;
  t = h_11(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_69 (ATerm), ATerm t)
{
  ATerm m_13 (ATerm t)
  {
    ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
    l_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_13 = ATgetFirst((ATermList) t);
        k_13 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_8 = NULL,z_8 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(l_13);
          v_8 = t;
          t = k_13;
          t = m_13(t);
          z_8 = t;
          t = (ATerm) ATinsert(CheckATermList(z_8), j_13);
          h_3 = t;
          t = SSLsetAnnotations(h_3, v_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_13;
        t = o_69(t);
      }
    return(t);
  }
  t = m_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL;
  s_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_11;
    }
  else
    {
      ATerm b_1 (ATerm t)
      {
        t = not_null(v_11);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_11 = ATgetFirst((ATermList) t);
          if(((v_11 != NULL) && (v_11 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_11;
      t = at_end_1_0(b_1, t);
    }
  return(t);
}
ATerm h_14 (ATerm q_13, ATerm t)
{
  ATerm r_13 = NULL;
  t = SSL_explode_term(q_13);
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_13;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_13 = NULL,y_13 = NULL,d_14 = NULL;
  d_14 = t;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = y_13;
              return(t);
            }
            t = w_13;
            t = at_end_1_0(k_1, t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = h_14(d_14, t);
          }
      }
    }
  else
    {
      t = h_14(d_14, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t)
{
  ATerm x_14 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_71(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        {
          ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,v_14 = NULL,w_14 = NULL,u_3 = NULL;
          t = c_71(t);
          w_14 = t;
          if(match_cons(t, sym__2))
            {
              n_14 = ATgetArgument(t, 0);
              o_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_14);
          m_14 = t;
          t = n_14;
          t = e_71(t);
          p_14 = t;
          t = o_14;
          t = x_14(t);
          v_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_14, v_14);
          u_3 = t;
          t = SSLsetAnnotations(u_3, m_14);
          t = d_71(t);
        }
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_10 = ATgetArgument(t, 0);
      if(((ATgetType(y_10) != AT_LIST) || !(ATisEmpty(y_10))))
        _fail(t);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(((ATgetType(a_11) != AT_LIST) || !(ATisEmpty(a_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,l_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_11 = ATgetArgument(t, 0);
      if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
        {
          h_15 = ATgetFirst((ATermList) c_11);
          i_15 = (ATerm) ATgetNext((ATermList) c_11);
        }
      else
        _fail(t);
      {
        ATerm d_11 = ATgetArgument(t, 1);
        if(((ATgetType(d_11) == AT_LIST) && !(ATisEmpty(d_11))))
          {
            l_15 = ATgetFirst((ATermList) d_11);
            m_15 = (ATerm) ATgetNext((ATermList) d_11);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_15, l_15), (ATerm) ATmakeAppl(sym__2, i_15, m_15));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_15), n_15);
  return(t);
}
ATerm m_5 (ATerm b_563, ATerm g_563, ATerm c_47, ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  t = SSL_explode_term(g_563);
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_563);
  if(match_cons(t, sym__2))
    {
      if((c_15 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_15, e_15);
  t = genzip_4_0(l_1, t_1, v_1, _id, t);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, c_47);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_62 (ATerm), ATerm z_62 (ATerm), ATerm t)
{
  ATerm t_15 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_62(t);
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = z_62(t);
        t = t_15(t);
      }
    return(t);
  }
  t = t_15(t);
  return(t);
}
ATerm for_3_0 (ATerm b_63 (ATerm), ATerm c_63 (ATerm), ATerm d_63 (ATerm), ATerm t)
{
  t = b_63(t);
  t = while_not_2_0(c_63, d_63, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, i_16);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,o_16 = NULL,y_3 = NULL;
  o_16 = t;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_16);
  j_16 = t;
  t = l_16;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
  y_3 = t;
  t = SSLsetAnnotations(y_3, j_16);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm q_17 = NULL,t_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym__2))
    {
      t_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_17 = ATgetFirst((ATermList) t);
      x_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_18(t_17, v_17, q_17, t);
            ;
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_17), w_17), x_17);
          }
      }
    }
  else
    {
      t = x_18(t_17, v_17, q_17, t);
    }
  return(t);
}
ATerm x_18 (ATerm r_16, ATerm t_16, ATerm u_16, ATerm t)
{
  ATerm x_16 = NULL,b_17 = NULL,z_3 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,j_17 = NULL;
  t = SSLgetAnnotations(u_16);
  x_16 = t;
  t = t_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_17 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_17;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_17;
        if((f_17 != t))
          {
            _fail(t);
          }
        t = j_17;
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = t_16;
        t = m_5(f_17, g_17, j_17, t);
      }
    b_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_16, b_17);
    z_3 = t;
    t = SSLsetAnnotations(z_3, x_16);
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      w_18 = ATgetArgument(t, 0);
      if((w_18 != ATgetArgument(t, 1)))
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(z_1, b_2, c_2, t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
        l_18 = t;
        if(match_cons(t, sym__2))
          {
            m_18 = ATgetArgument(t, 0);
            n_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_18;
        t = h_5(d_2, m_18, n_18, t);
      }
    }
  return(t);
}
ATerm o_5 (ATerm m_44, ATerm n_44, ATerm t)
{
  t = SSL_table_rename(m_44, n_44);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm y_19 = NULL;
  if(match_cons(t, sym_selector_2))
    {
      y_19 = ATgetArgument(t, 0);
      {
        ATerm o_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_19;
  return(t);
}
ATerm mk_key_0_0 (ATerm t)
{
  ATerm g_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym_Path1_1))
    {
      g_19 = ATgetArgument(t, 0);
      t = (ATerm) ATinsert(ATempty, g_19);
    }
  else
    {
      ATerm w_19 = NULL;
      if(match_cons(t, sym_Path_2))
        {
          g_19 = ATgetArgument(t, 0);
          i_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_19;
      t = map_1_0(e_2, t);
      w_19 = t;
      t = (ATerm) ATinsert(CheckATermList(w_19), g_19);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm p_5 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm z_19 = NULL,i_20 = NULL,k_20 = NULL,l_20 = NULL;
  t = j_47;
  t = mk_key_0_0(t);
  i_20 = t;
  t = term_r_11;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_47, k_47);
  l_20 = t;
  t = SSL_table_put(k_20, i_20, l_20);
  t = j_47;
  t = path_to_string_0_0(t);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_19, k_47);
  t = if_verbose1_1_0(f_2, t);
  return(t);
}
ATerm unescape_chars_1_0 (ATerm r_78 (ATerm), ATerm t)
{
  ATerm m_21 (ATerm t)
  {
    ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_78(t);
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
      }
    h_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_21 = ATgetFirst((ATermList) t);
        g_21 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_9 = NULL,d_10 = NULL,d_4 = NULL;
          t = SSLgetAnnotations(h_21);
          q_9 = t;
          t = g_21;
          t = m_21(t);
          d_10 = t;
          t = (ATerm) ATinsert(CheckATermList(d_10), f_21);
          d_4 = t;
          t = SSLsetAnnotations(d_4, q_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_21;
      }
    return(t);
  }
  t = m_21(t);
  return(t);
}
ATerm at_last_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm q_22 (ATerm t)
  {
    ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
    n_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_22 = ATgetFirst((ATermList) t);
        p_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 = NULL,g_4 = NULL;
          t = SSLgetAnnotations(n_22);
          z_10 = t;
          t = p_22;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(p_22), o_22);
          g_4 = t;
          t = SSLsetAnnotations(g_4, z_10);
          t = z_69(t);
          ;
          LocalPopChoice(z_11);
        }
      else
        {
          t = y_11;
          {
            ATerm p_11 = NULL,t_11 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(n_22);
            p_11 = t;
            t = p_22;
            t = q_22(t);
            t_11 = t;
            t = (ATerm) ATinsert(CheckATermList(t_11), o_22);
            h_4 = t;
            t = SSLsetAnnotations(h_4, p_11);
          }
        }
    }
    return(t);
  }
  t = q_22(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_22 = NULL,b_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_22 = ATgetFirst((ATermList) t);
      b_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_23;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_22;
    }
  else
    {
      t = b_23;
      t = last_0_0(t);
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm r_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_12 = ATgetFirst((ATermList) t);
      r_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_23;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm h_78 (ATerm), ATerm i_78 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,p_23 = NULL;
  j_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_23 = ATgetFirst((ATermList) t);
      {
        ATerm b_12 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_23;
  t = h_78(t);
  t = j_23;
  t = last_0_0(t);
  t = i_78(t);
  t = j_23;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_12 = ATgetFirst((ATermList) t);
      k_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_23;
  t = at_last_1_0(h_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,s_16 = NULL,v_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_16 = ATgetFirst((ATermList) t);
      q_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_16;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = q_16;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_16 = ATgetFirst((ATermList) t);
      v_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_16;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(v_16), term_p_9);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(v_16), term_o_9);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(v_16), term_j_8);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_16), term_d_12);
            }
        }
    }
  return(t);
}
ATerm MakePPTerm_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,w_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym_Arg_1))
    {
      t_26 = ATgetArgument(t, 0);
      {
        ATerm z_12 = NULL,b_13 = NULL,m_4 = NULL;
        t = SSLgetAnnotations(s_26);
        z_12 = t;
        t = SSL_string_to_int(t_26);
        b_13 = t;
        t = (ATerm) ATmakeAppl(sym_Arg_1, b_13);
        m_4 = t;
        t = SSLsetAnnotations(m_4, z_12);
      }
    }
  else
    {
      if(match_cons(t, sym_Arg2_2))
        {
          t_26 = ATgetArgument(t, 0);
          w_26 = ATgetArgument(t, 1);
          {
            ATerm s_13 = NULL,x_13 = NULL,z_13 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(s_26);
            s_13 = t;
            t = SSL_string_to_int(t_26);
            x_13 = t;
            t = SSL_string_to_int(w_26);
            z_13 = t;
            t = (ATerm) ATmakeAppl(sym_Arg2_2, x_13, z_13);
            r_4 = t;
            t = SSLsetAnnotations(r_4, s_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SOpt_2))
            {
              t_26 = ATgetArgument(t, 0);
              w_26 = ATgetArgument(t, 1);
              {
                ATerm l_14 = NULL,s_4 = NULL;
                t = SSLgetAnnotations(s_26);
                l_14 = t;
                t = (ATerm) ATmakeAppl(sym_SOpt_2, t_26, w_26);
                s_4 = t;
                t = SSLsetAnnotations(s_4, l_14);
              }
            }
          else
            {
              if(match_cons(t, sym_S_1))
                {
                  t_26 = ATgetArgument(t, 0);
                  {
                    ATerm b_15 = NULL,k_15 = NULL,t_4 = NULL,g_16 = NULL,h_16 = NULL,d_16 = NULL;
                    t = SSLgetAnnotations(s_26);
                    b_15 = t;
                    t = SSL_explode_string(t_26);
                    t = unquote_chars_2_0(j_2, k_2, t);
                    d_16 = t;
                    t = SSL_implode_string(d_16);
                    h_16 = t;
                    t = SSL_explode_string(h_16);
                    t = unescape_chars_1_0(o_2, t);
                    g_16 = t;
                    t = SSL_implode_string(g_16);
                    k_15 = t;
                    t = (ATerm) ATmakeAppl(sym_S_1, k_15);
                    t_4 = t;
                    t = SSLsetAnnotations(t_4, b_15);
                  }
                }
              else
                {
                  ATerm u_17 = NULL,a_18 = NULL,b_5 = NULL;
                  if(match_cons(t, sym_selector_2))
                    {
                      t_26 = ATgetArgument(t, 0);
                      w_26 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_26);
                  u_17 = t;
                  t = SSL_string_to_int(t_26);
                  a_18 = t;
                  t = (ATerm) ATmakeAppl(sym_selector_2, a_18, w_26);
                  b_5 = t;
                  t = SSLsetAnnotations(b_5, u_17);
                }
            }
        }
    }
  return(t);
}
ATerm topdown_1_0 (ATerm h_63 (ATerm), ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = topdown_1_0(h_63, t);
    return(t);
  }
  t = h_63(t);
  t = SRTS_all(p_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  t = topdown_1_0(u_2, t);
  if(match_cons(t, sym_PP_Entry_2))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(f_27, g_27, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MakePPTerm_0_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
    }
  return(t);
}
ATerm x_5 (ATerm i_47, ATerm t)
{
  t = i_47;
  t = reverse_acc_2_0(_id, r_2, t);
  t = map_1_0(t_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,l_27 = NULL,m_27 = NULL;
      t = term_i_12;
      t = get_options_0_0(t);
      t = oncetd_1_0(v_2, t);
      t = term_j_12;
      l_27 = t;
      t = (ATerm) ATinsert(ATempty, term_k_12);
      m_27 = t;
      t = SSL_printnl(l_27, m_27);
      t = term_l_12;
      j_27 = t;
      t = SSL_exit(j_27);
      t = (ATerm) ATinsert(ATempty, term_k_12);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      {
        ATerm o_27 = NULL,p_27 = NULL;
        t = term_j_12;
        o_27 = t;
        t = (ATerm) ATinsert(ATempty, term_m_12);
        p_27 = t;
        t = SSL_printnl(o_27, p_27);
        t = (ATerm) ATinsert(ATempty, term_m_12);
      }
    }
  return(t);
}
ATerm m_28 (ATerm f_28, ATerm t)
{
  t = SSL_fclose(f_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  k_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_28 = ATgetArgument(t, 0);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_28);
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            t = m_28(k_28, t);
          }
      }
    }
  else
    {
      t = m_28(k_28, t);
    }
  return(t);
}
ATerm z_5 (ATerm r_36, ATerm t)
{
  t = SSL_read_term_from_stream(r_36);
  return(t);
}
ATerm a_6 (ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm n_28 = NULL;
  t = SSL_fopen(d_33, e_33);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_28 = NULL;
  t = SSL_stdin_stream();
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_28 = NULL;
  t = SSL_stdout_stream();
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_28 = NULL;
  t = SSL_stderr_stream();
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_28);
  return(t);
}
ATerm j_30 (ATerm c_29, ATerm t)
{
  ATerm d_29 = NULL;
  t = SSL_explode_term(c_29);
  if(match_cons(t, sym__2))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_12 = ATgetArgument(t, 1);
        if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
          {
            d_29 = ATgetFirst((ATermList) q_12);
            {
              ATerm r_12 = (ATerm) ATgetNext((ATermList) q_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm l_30 (ATerm h_29, ATerm i_29, ATerm j_29, ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,r_29 = NULL,t_5 = NULL;
  t = SSLgetAnnotations(j_29);
  m_29 = t;
  t = h_29;
  if(match_cons(t, sym_Path_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_29, i_29);
  t_5 = t;
  t = SSLsetAnnotations(t_5, m_29);
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(k_29, l_29, t);
  return(t);
}
ATerm o_30 (ATerm t_29, ATerm u_29, ATerm v_29, ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,d_30 = NULL,y_5 = NULL;
  t = SSLgetAnnotations(v_29);
  y_29 = t;
  t = SSL_is_string(t_29);
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_30, u_29);
  y_5 = t;
  t = SSLsetAnnotations(y_5, y_29);
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_6(w_29, x_29, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,i_30 = NULL;
  f_30 = t;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_30(f_30, t);
            ;
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm u_12 = t;
              int v_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_30(g_30, i_30, f_30, t);
                  ;
                  LocalPopChoice(v_12);
                }
              else
                {
                  t = u_12;
                  t = o_30(g_30, i_30, f_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_30(f_30, t);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_30 = NULL,u_30 = NULL,v_30 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_30 = NULL;
      w_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, term_a_13);
      t = b_6(t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = debug_1_0(w_2, t);
      _fail(t);
    }
  u_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(v_30, t);
  q_30 = t;
  t = u_30;
  t = fclose_0_0(t);
  t = q_30;
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,u_18 = NULL,v_18 = NULL;
  t = if_verbose1_1_0(y_2, t);
  t = ReadFromFile_0_0(t);
  c_31 = t;
  t = SSL_explode_term(c_31);
  if(match_cons(t, sym__2))
    {
      v_18 = ATgetArgument(t, 0);
      {
        ATerm c_13 = ATgetArgument(t, 1);
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            u_18 = ATgetFirst((ATermList) c_13);
            {
              ATerm d_13 = (ATerm) ATgetNext((ATermList) c_13);
              if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_18;
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = type_failure_0_0(t);
      }
    t = u_18;
    if(match_cons(t, sym_PP_Table_1))
      {
        b_31 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = x_5(b_31, t);
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = debug_1_0(a_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm read_pp_tables_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  y_30 = t;
  t = term_r_11;
  z_30 = t;
  t = SSL_table_create(z_30);
  t = y_30;
  t = map_1_0(x_2, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm d_31 = NULL;
  ATerm b_3 (ATerm t)
  {
    t = k_69(t);
    if(((d_31 != NULL) && (d_31 != t)))
      _fail(t);
    else
      d_31 = t;
    return(t);
  }
  t = fetch_1_0(b_3, t);
  t = not_null(d_31);
  return(t);
}
ATerm option_value_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0_0(t);
      t = fetch_elem_1_0(z_84, t);
      ;
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      t = a_85(t);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t = term_j_12;
  u_32 = t;
  t = (ATerm) ATinsert(ATempty, term_n_13);
  v_32 = t;
  t = SSL_printnl(u_32, v_32);
  t = term_l_12;
  t_32 = t;
  t = SSL_exit(t_32);
  t = (ATerm) ATinsert(ATempty, term_n_13);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  t = term_j_12;
  i_33 = t;
  t = (ATerm) ATinsert(ATempty, term_o_13);
  j_33 = t;
  t = SSL_printnl(i_33, j_33);
  t = term_l_12;
  h_33 = t;
  t = SSL_exit(h_33);
  t = (ATerm) ATinsert(ATempty, term_o_13);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,r_33 = NULL;
  m_33 = t;
  t = term_n_10;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, m_33);
  t = h_6(r_33, m_33, t);
  o_33 = t;
  t = SSL_explode_term(o_33);
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_13 = ATgetArgument(t, 1);
        if(((ATgetType(t_13) == AT_LIST) && !(ATisEmpty(t_13))))
          {
            n_33 = ATgetFirst((ATermList) t_13);
            {
              ATerm u_13 = (ATerm) ATgetNext((ATermList) t_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_33;
  t = path_to_string_0_0(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,v_33 = NULL,w_33 = NULL;
  s_33 = t;
  t = term_m_10;
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, s_33);
  t = h_6(w_33, s_33, t);
  v_33 = t;
  t = SSL_explode_term(v_33);
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_14 = ATgetArgument(t, 1);
        if(((ATgetType(a_14) == AT_LIST) && !(ATisEmpty(a_14))))
          {
            t_33 = ATgetFirst((ATermList) a_14);
            {
              ATerm b_14 = (ATerm) ATgetNext((ATermList) a_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_33;
  t = path_to_string_0_0(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  t = term_n_10;
  c_34 = t;
  t = SSL_table_remove(c_34, b_34);
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, b_34);
  return(t);
}
ATerm r_3 (ATerm t)
{
  if(!(match_cons(t, sym_Patch_0)))
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Prune_0)))
    _fail(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      ATerm e_14 = ATgetArgument(t, 1);
      if(match_cons(e_14, sym__2))
        {
          n_34 = ATgetArgument(e_14, 0);
          o_34 = ATgetArgument(e_14, 1);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, n_34, o_34);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_f_14;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,t_31 = NULL,u_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,g_32 = NULL,h_32 = NULL,k_32 = NULL,l_32 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm m_32 = NULL,r_32 = NULL,s_32 = NULL,l_6 = NULL;
    s_32 = t;
    if(match_cons(t, sym_Old_Table_1))
      {
        r_32 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_32);
    m_32 = t;
    t = r_32;
    if(((l_31 != NULL) && (l_31 != t)))
      _fail(t);
    else
      l_31 = t;
    t = (ATerm) ATmakeAppl(sym_Old_Table_1, r_32);
    l_6 = t;
    t = SSLsetAnnotations(l_6, m_32);
    return(t);
  }
  t = option_value_2_0(f_3, i_3, t);
  t = (ATerm) ATinsert(ATempty, not_null(l_31));
  t = read_pp_tables_0_0(t);
  t = term_r_11;
  k_32 = t;
  t = term_n_10;
  l_32 = t;
  t = term_g_14;
  t = o_5(k_32, l_32, t);
  {
    ATerm j_3 (ATerm t)
    {
      ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,m_6 = NULL;
      a_33 = t;
      if(match_cons(t, sym_New_Table_1))
        {
          z_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_33);
      y_32 = t;
      t = z_32;
      if(((m_31 != NULL) && (m_31 != t)))
        _fail(t);
      else
        m_31 = t;
      t = (ATerm) ATmakeAppl(sym_New_Table_1, z_32);
      m_6 = t;
      t = SSLsetAnnotations(m_6, y_32);
      return(t);
    }
    t = option_value_2_0(j_3, k_3, t);
    t = (ATerm) ATinsert(ATempty, not_null(m_31));
    t = read_pp_tables_0_0(t);
    t = term_r_11;
    g_32 = t;
    t = term_m_10;
    h_32 = t;
    t = term_i_14;
    t = o_5(g_32, h_32, t);
    t = term_n_10;
    e_32 = t;
    t = SSL_table_keys(e_32);
    p_31 = t;
    t = term_m_10;
    d_32 = t;
    t = SSL_table_keys(d_32);
    o_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_31, o_31);
    t = diff_0_0(t);
    r_31 = t;
    t = map_1_0(l_3, t);
    u_31 = t;
    t = term_j_12;
    z_31 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, u_31), term_j_14);
    c_32 = t;
    t = SSL_printnl(z_31, c_32);
    t = (ATerm) ATmakeAppl(sym__2, o_31, p_31);
    t = diff_0_0(t);
    q_31 = t;
    t = map_1_0(n_3, t);
    t_31 = t;
    t = term_j_12;
    x_31 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, t_31), term_k_14);
    y_31 = t;
    t = SSL_printnl(x_31, y_31);
    t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, t_31), term_k_14));
    {
      ATerm q_14 = t;
      int r_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_s_14;
          t = get_options_0_0(t);
          t = oncetd_1_0(o_3, t);
          t = q_31;
          t = patch_0_0(t);
          ;
          LocalPopChoice(r_14);
        }
      else
        {
          t = q_14;
        }
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_y_14;
            t = get_options_0_0(t);
            t = oncetd_1_0(p_3, t);
            t = r_31;
            t = map_1_0(q_3, t);
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
          }
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_34 = NULL,i_34 = NULL;
              ATerm g_15 = t;
              int j_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_34 = NULL;
                  j_34 = t;
                  t = term_s_14;
                  t = get_options_0_0(t);
                  t = oncetd_1_0(r_3, t);
                  t = j_34;
                  ;
                  LocalPopChoice(j_15);
                }
              else
                {
                  t = g_15;
                  {
                    ATerm l_34 = NULL;
                    l_34 = t;
                    t = term_y_14;
                    t = get_options_0_0(t);
                    t = oncetd_1_0(s_3, t);
                    t = l_34;
                  }
                }
              t = term_n_10;
              t = table_getlist_0_0(t);
              t = map_1_0(t_3, t);
              t = desugar_0_0(t);
              f_34 = t;
              t = (ATerm) ATmakeAppl(sym_PP_Table_1, f_34);
              i_34 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_o_15, (ATerm) ATmakeAppl(sym_PP_Table_1, f_34));
              t = a_5(v_3, i_34, t);
              t = output_1_0(_id, t);
              ;
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
            }
        }
      }
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  s_34 = t;
  t = term_i_9;
  t = whoami_0_0(t);
  t_34 = t;
  t = term_j_12;
  v_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_15), t_34), term_p_15);
  w_34 = t;
  t = SSL_printnl(v_34, w_34);
  t = term_l_12;
  u_34 = t;
  t = SSL_exit(u_34);
  t = s_34;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-k"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  t = SSL_string_to_int(a_35);
  b_35 = t;
  t = term_s_15;
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_15, b_35);
  t = j_6(c_35, b_35, t);
  t = a_35;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, a_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  if(match_string(t, "-S"))
    {
      t = e_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_35;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm f_35 = NULL,i_35 = NULL;
  t = term_v_15;
  f_35 = t;
  t = term_w_15;
  i_35 = t;
  t = term_x_15;
  t = j_6(f_35, i_35, t);
  t = term_y_15;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  j_35 = t;
  t = SSL_string_to_int(j_35);
  k_35 = t;
  t = term_v_15;
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_15, k_35);
  t = j_6(l_35, k_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_35);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm m_35 = NULL,o_35 = NULL;
  t = term_b_16;
  m_35 = t;
  t = term_i_9;
  o_35 = t;
  t = term_c_16;
  t = j_6(m_35, o_35, t);
  t = term_e_16;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_f_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, e_4, f_4, t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm w_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_4, k_4, l_4, t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = w_16;
            t = Option_3_0(n_4, o_4, q_4, t);
          }
      }
    }
  return(t);
}
ATerm j_6 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm p_35 = NULL;
  t = term_z_16;
  p_35 = t;
  t = SSL_table_put(p_35, s_37, t_37);
  t = (ATerm) ATmakeAppl(sym__3, term_z_16, s_37, t_37);
  return(t);
}
ATerm Option_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,v_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_35 = NULL,y_35 = NULL,z_35 = NULL;
      t = term_i_9;
      t = j_0(t);
      w_35 = t;
      t = term_a_17;
      y_35 = t;
      t = term_c_17;
      z_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_17, term_c_17, w_35);
      t = c_6(y_35, z_35, w_35, t);
      _fail(t);
    }
  else
    {
      ATerm i_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_35 = ATgetFirst((ATermList) t);
          v_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_35;
      t = h_0(t);
      t = term_i_9;
      t = i_0(t);
      i_36 = t;
      t = (ATerm) ATinsert(CheckATermList(v_35), i_36);
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  if(match_string(t, "-o"))
    {
      t = k_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_36;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  n_36 = t;
  t = term_p_8;
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, n_36);
  t = j_6(o_36, n_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_36);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, e_5, i_5, t);
  return(t);
}
ATerm c_6 (ATerm q_42, ATerm r_42, ATerm p_42, ATerm t)
{
  ATerm v_36 = NULL,x_36 = NULL,y_36 = NULL;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_42, r_42);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_17 = ATgetArgument(t, 0);
            ATerm l_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_42, r_42);
        t = h_6(q_42, r_42, t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = (ATerm) ATempty;
      }
    x_36 = t;
    t = (ATerm) ATinsert(CheckATermList(x_36), p_42);
    y_36 = t;
    t = SSL_table_put(q_42, r_42, y_36);
    t = v_36;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
      t = term_i_9;
      t = m_0(t);
      n_37 = t;
      t = term_a_17;
      o_37 = t;
      t = term_c_17;
      p_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_17, term_c_17, n_37);
      t = c_6(o_37, p_37, n_37, t);
      _fail(t);
    }
  else
    {
      ATerm h_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_37 = ATgetFirst((ATermList) t);
          g_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          k_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_37;
      t = k_0(t);
      t = h_37;
      t = l_0(t);
      h_38 = t;
      t = (ATerm) ATinsert(CheckATermList(k_37), h_38);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_9;
  t = whoami_0_0(t);
  k_38 = t;
  t = term_j_12;
  m_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_17), k_38);
  n_38 = t;
  t = SSL_printnl(m_38, n_38);
  t = term_l_12;
  l_38 = t;
  t = SSL_exit(l_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm d_6 (ATerm b_30, ATerm c_30, ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_30, c_30);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = SSL_addr(b_30, c_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_75 (ATerm), ATerm c_75 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_38;
      t = b_75(t);
    }
  else
    {
      ATerm c_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_38 = ATgetFirst((ATermList) t);
          t_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_38;
      t = foldr_2_0(b_75, c_75, t);
      c_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_38, c_39);
      t = c_75(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm h_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(h_19, k_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_39 = NULL,b_19 = NULL,c_19 = NULL;
  t = times_0_0(t);
  c_19 = t;
  t = SSL_explode_term(c_19);
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_19;
  t = foldr_2_0(j_5, k_5, t);
  h_39 = t;
  t = SSL_TicksToSeconds(h_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  u_39 = t;
  if(match_cons(t, sym__2))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_39;
        if((v_39 != t))
          {
            _fail(t);
          }
        t = u_39;
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = s_17;
        t = (ATerm) ATmakeAppl(sym__2, v_39, w_39);
        {
          ATerm z_17 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_39, w_39);
              ;
              LocalPopChoice(b_18);
            }
          else
            {
              t = z_17;
              t = SSL_gtr(v_39, w_39);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_39, w_39);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm a_40 = NULL;
  a_40 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_40 = NULL;
        t = term_v_15;
        t = get_config_0_0(t);
        c_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_40, term_l_12);
        t = geq_0_0(t);
        t = a_40;
        t = f_83(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = a_40;
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,h_40 = NULL,i_40 = NULL;
  t = run_time_0_0(t);
  e_40 = t;
  t = term_i_9;
  t = whoami_0_0(t);
  f_40 = t;
  t = term_j_12;
  h_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_18), e_40), term_e_18), f_40);
  i_40 = t;
  t = SSL_printnl(h_40, i_40);
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_18), e_40), term_e_18), f_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_15;
  j_40 = t;
  t = SSL_exit(j_40);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  s_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_40 = ATgetArgument(t, 0);
          {
            ATerm m_20 = NULL,p_6 = NULL;
            t = SSLgetAnnotations(s_40);
            m_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_40);
            p_6 = t;
            t = SSLsetAnnotations(p_6, m_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
      t = fetch_1_0(n_5, t);
    }
  t = v_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_40 = ATgetFirst((ATermList) t);
      w_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_41 = NULL,b_41 = NULL;
        ATerm q_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_41)), not_null(b_41));
          return(t);
        }
        t = w_40;
        t = g_0(t);
        if(((a_41 != NULL) && (a_41 != t)))
          _fail(t);
        else
          a_41 = t;
        t = v_40;
        t = d_0(t);
        if(((b_41 != NULL) && (b_41 != t)))
          _fail(t);
        else
          b_41 = t;
        t = w_40;
        t = reverse_acc_2_0(d_0, q_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_9;
      t = g_0(t);
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,r_6 = NULL;
  h_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_41);
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_41);
  r_6 = t;
  t = SSLsetAnnotations(r_6, f_41);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_41), term_j_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  ATerm k_18 = t;
  int o_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_18);
    }
  else
    {
      t = k_18;
      t = fetch_1_0(s_5, t);
    }
  t = term_p_18;
  t = echo_0_0(t);
  t = term_a_17;
  d_41 = t;
  t = term_c_17;
  e_41 = t;
  t = term_q_18;
  t = h_6(d_41, e_41, t);
  t = reverse_acc_2_0(_id, u_5, t);
  t = map_1_0(w_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_69 (ATerm), ATerm t)
{
  ATerm l_42 (ATerm t)
  {
    ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
    i_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_42 = ATgetFirst((ATermList) t);
        k_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_21 = NULL,k_21 = NULL,t_6 = NULL;
          t = SSLgetAnnotations(i_42);
          c_21 = t;
          t = j_42;
          t = i_69(t);
          k_21 = t;
          t = (ATerm) ATinsert(CheckATermList(k_42), k_21);
          t_6 = t;
          t = SSLsetAnnotations(t_6, c_21);
          ;
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          {
            ATerm j_22 = NULL,s_22 = NULL,u_6 = NULL;
            t = SSLgetAnnotations(i_42);
            j_22 = t;
            t = k_42;
            t = l_42(t);
            s_22 = t;
            t = (ATerm) ATinsert(CheckATermList(s_22), j_42);
            u_6 = t;
            t = SSLsetAnnotations(u_6, j_22);
          }
        }
    }
    return(t);
  }
  t = l_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  {
    ATerm t_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_18 = ATgetFirst((ATermList) t);
                ATerm a_19 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_42;
          }
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATinsert(ATempty, t_42);
      }
    u_42 = t;
    t = term_s_8;
    v_42 = t;
    t = SSL_printnl(v_42, u_42);
    t = t_42;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm g_6 (ATerm q_27, ATerm r_27, ATerm t)
{
  t = SSL_strcat(q_27, r_27);
  return(t);
}
ATerm debug_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  z_42 = t;
  t = t_81(t);
  a_43 = t;
  t = term_j_12;
  b_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_42), a_43);
  c_43 = t;
  t = SSL_printnl(b_43, c_43);
  t = z_42;
  return(t);
}
ATerm map_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm t_43 (ATerm t)
  {
    ATerm o_43 = NULL,p_43 = NULL,s_43 = NULL;
    o_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_43;
      }
    else
      {
        ATerm l_23 = NULL,o_23 = NULL,q_23 = NULL,a_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_43 = ATgetFirst((ATermList) t);
            s_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_43);
        l_23 = t;
        t = p_43;
        t = y_68(t);
        o_23 = t;
        t = s_43;
        t = t_43(t);
        q_23 = t;
        t = (ATerm) ATinsert(CheckATermList(q_23), o_23);
        a_7 = t;
        t = SSLsetAnnotations(a_7, l_23);
      }
    return(t);
  }
  t = t_43(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm d_19 = t;
  int e_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_19);
    }
  else
    {
      t = d_19;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_44 = NULL;
      b_44 = t;
      t = SSL_is_string(b_44);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = j_19;
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_6, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
              j_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_44 = ATgetArgument(t, 0);
                  t = k_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_44 = ATgetArgument(t, 0);
                      t = k_44;
                      {
                        ATerm o_19 = t;
                        int p_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_19);
                          }
                        else
                          {
                            t = o_19;
                            t = debug_1_0(f_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_44 = NULL,s_44 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_44 = ATgetArgument(t, 0);
                          l_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_44;
                      t = eval_config_0_0(t);
                      r_44 = t;
                      t = l_44;
                      t = eval_config_0_0(t);
                      s_44 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_44, s_44);
                      t = g_6(r_44, s_44, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm h_6 (ATerm h_44, ATerm i_44, ATerm t)
{
  t = SSL_table_get(h_44, i_44);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  w_44 = t;
  t = term_z_16;
  x_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_16, w_44);
  t = h_6(x_44, w_44, t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_44 = NULL,z_44 = NULL;
        t = eval_config_0_0(t);
        y_44 = t;
        t = term_z_16;
        z_44 = t;
        t = SSL_table_put(z_44, w_44, y_44);
        t = y_44;
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
      }
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  t = term_s_19;
  c_45 = t;
  t = term_i_9;
  d_45 = t;
  t = term_t_19;
  t = j_6(c_45, d_45, t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  t = term_s_19;
  g_45 = t;
  t = term_i_9;
  h_45 = t;
  t = term_t_19;
  t = j_6(g_45, h_45, t);
  t = term_c_20;
  e_45 = t;
  t = term_i_9;
  f_45 = t;
  t = term_d_20;
  t = j_6(e_45, f_45, t);
  t = term_e_20;
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_f_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_6, k_6, n_6, t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      t = Option_3_0(o_6, q_6, s_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_53 (ATerm), ATerm o_53 (ATerm), ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,a_8 = NULL;
  n_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_45 = ATgetFirst((ATermList) t);
      k_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_45);
  i_45 = t;
  t = j_45;
  t = n_53(t);
  l_45 = t;
  t = k_45;
  t = o_53(t);
  m_45 = t;
  t = (ATerm) ATinsert(CheckATermList(m_45), l_45);
  a_8 = t;
  t = SSLsetAnnotations(a_8, i_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,x_45 = NULL,y_45 = NULL,i_8 = NULL;
  s_45 = t;
  {
    ATerm j_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_20;
        t = y_87(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = j_20;
      }
    t = s_45;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_45 = ATgetFirst((ATermList) t);
        v_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_45);
    t_45 = t;
    t = term_n_17;
    y_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_17, u_45);
    t = j_6(y_45, u_45, t);
    t = v_45;
    {
      ATerm i_46 (ATerm t)
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_46 = NULL;
                b_46 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_46;
                ;
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                t = y_87(t);
                t = Cons_2_0(_id, i_46, t);
              }
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm e_46 = NULL,f_46 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_46 = ATgetFirst((ATermList) t);
                  f_46 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_46), (ATerm) ATmakeAppl(sym_Undefined_1, e_46));
            }
          }
        return(t);
      }
      t = i_46(t);
      x_45 = t;
      t = (ATerm) ATinsert(CheckATermList(x_45), (ATerm) ATmakeAppl(sym_Program_1, u_45));
      i_8 = t;
      t = SSLsetAnnotations(i_8, t_45);
    }
  }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm u_46 = NULL;
  u_46 = t;
  if(match_string(t, "--help"))
    {
      t = u_46;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_46;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_46;
        }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm v_46 = NULL,x_46 = NULL;
  t = term_i_18;
  v_46 = t;
  t = term_i_9;
  x_46 = t;
  t = term_t_20;
  t = j_6(v_46, x_46, t);
  t = term_u_20;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_v_20;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL;
  p_46 = t;
  t = term_a_17;
  r_46 = t;
  t = term_c_17;
  s_46 = t;
  t = (ATerm) ATempty;
  t_46 = t;
  t = SSL_table_put(r_46, s_46, t_46);
  t = p_46;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm w_20 = t;
      int x_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_87(t);
          ;
          LocalPopChoice(x_20);
        }
      else
        {
          t = w_20;
          {
            ATerm y_20 = t;
            int z_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_6, x_6, y_6, t);
                ;
                LocalPopChoice(z_20);
              }
            else
              {
                t = y_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_6, t);
    {
      ATerm a_21 = t;
      int b_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_47 = NULL;
          m_47 = t;
          {
            ATerm d_21 = t;
            int e_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_24 = NULL;
                t = m_47;
                {
                  ATerm i_21 = t;
                  int j_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_21);
                    }
                  else
                    {
                      t = i_21;
                      t = fetch_1_0(z_6, t);
                    }
                  t = m_47;
                  t = default_system_usage_0_0(t);
                  t = term_w_15;
                  z_24 = t;
                  t = SSL_exit(z_24);
                }
                ;
                LocalPopChoice(e_21);
              }
            else
              {
                t = d_21;
                {
                  ATerm n_25 = NULL;
                  t = term_s_19;
                  t = get_config_0_0(t);
                  t = m_47;
                  t = default_system_about_0_0(t);
                  t = term_w_15;
                  n_25 = t;
                  t = SSL_exit(n_25);
                }
              }
          }
          ;
          LocalPopChoice(b_21);
        }
      else
        {
          t = a_21;
          {
            ATerm l_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_47 = NULL,s_47 = NULL,u_47 = NULL;
                ATerm b_7 (ATerm t)
                {
                  ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL,k_8 = NULL;
                  d_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      c_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(d_48);
                  b_48 = t;
                  t = c_48;
                  if(((n_46 != NULL) && (n_46 != t)))
                    _fail(t);
                  else
                    n_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, c_48);
                  k_8 = t;
                  t = SSLsetAnnotations(k_8, b_48);
                  return(t);
                }
                t = fetch_1_0(b_7, t);
                t = term_j_12;
                s_47 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_46)), term_o_21);
                u_47 = t;
                t = SSL_printnl(s_47, u_47);
                t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_46)), term_o_21));
                t = default_system_usage_0_0(t);
                t = term_l_12;
                r_47 = t;
                t = SSL_exit(r_47);
                ;
                LocalPopChoice(n_21);
              }
            else
              {
                t = l_21;
              }
          }
        }
      o_46 = t;
      t = term_a_17;
      q_46 = t;
      t = SSL_table_destroy(q_46);
      t = o_46;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  t = parse_options_1_0(x_85, t);
  l_48 = t;
  t = term_j_10;
  o_48 = t;
  t = SSL_table_create(o_48);
  t = term_j_10;
  m_48 = t;
  t = term_k_10;
  n_48 = t;
  t = SSL_table_put(m_48, n_48, l_48);
  t = l_48;
  t = z_85(t);
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_85, t);
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_86(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_7, e_7, f_7, t);
      ;
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(o_7, p_7, q_7, t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm x_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(r_7, s_7, t_7, t);
                  ;
                  LocalPopChoice(y_21);
                }
              else
                {
                  t = x_21;
                  {
                    ATerm z_21 = t;
                    int a_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(u_7, v_7, w_7, t);
                        ;
                        LocalPopChoice(a_22);
                      }
                    else
                      {
                        t = z_21;
                        {
                          ATerm b_22 = t;
                          int c_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ArgOption_3_0(x_7, y_7, z_7, t);
                              ;
                              LocalPopChoice(c_22);
                            }
                          else
                            {
                              t = b_22;
                              {
                                ATerm d_22 = t;
                                int e_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    ;
                                    LocalPopChoice(e_22);
                                  }
                                else
                                  {
                                    t = d_22;
                                    {
                                      ATerm f_22 = t;
                                      int g_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(c_8, d_8, f_8, t);
                                          ;
                                          LocalPopChoice(g_22);
                                        }
                                      else
                                        {
                                          t = f_22;
                                          {
                                            ATerm h_22 = t;
                                            int i_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                ;
                                                LocalPopChoice(i_22);
                                              }
                                            else
                                              {
                                                t = h_22;
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
ATerm d_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-V", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_m_22;
  return(t);
}
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym_Old_Table_1, q_48);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_t_22;
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym_New_Table_1, r_48);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t = term_y_8;
  s_48 = t;
  t = term_i_9;
  t_48 = t;
  t = term_v_22;
  t = j_6(s_48, t_48, t);
  t = term_w_22;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm io_Pptable_diff_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_7, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Pptable_diff_0_0(t);
  return(t);
}

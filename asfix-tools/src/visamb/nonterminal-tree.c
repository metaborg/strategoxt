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
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_sort_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_layout_0;
Symbol sym_empty_0;
Symbol sym_seq_2;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_set_1;
Symbol sym_pair_2;
Symbol sym_func_2;
Symbol sym_alt_2;
Symbol sym_perm_1;
Symbol sym_sort_1;
Symbol sym_label_2;
Symbol sym_lit_1;
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_set_1 = ATmakeSymbol("set", 1, ATfalse);
  ATprotectSymbol(sym_set_1);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_perm_1 = ATmakeSymbol("perm", 1, ATfalse);
  ATprotectSymbol(sym_perm_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_x_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_p_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_l_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_j_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_m_9;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_k_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_y_5;
ATerm term_i_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_x_0;
void init_constant_terms (void)
{
  ATprotect(&(term_x_0));
  term_x_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_11);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_x_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_b_13);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_x_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_x_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_x_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_x_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm at_last_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm b_95 (ATerm), ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm j_5 (ATerm v_32, ATerm x_32, ATerm w_32, ATerm);
ATerm topdown_1_0 (ATerm u_88 (ATerm), ATerm);
ATerm _2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm m_5 (ATerm r_52, ATerm s_52, ATerm);
ATerm n_5 (ATerm f_56, ATerm g_56, ATerm);
ATerm p_5 (ATerm c_107 (ATerm), ATerm q_431, ATerm j_56, ATerm);
ATerm o_5 (ATerm b_56, ATerm c_56, ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_110 (ATerm), ATerm);
ATerm k_11 (ATerm a_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_5 (ATerm h_56, ATerm);
ATerm r_5 (ATerm t_52, ATerm u_52, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm l_5 (ATerm h_47, ATerm i_47, ATerm);
ATerm debug_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_5 (ATerm i_57, ATerm j_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_5 (ATerm g_62, ATerm h_62, ATerm f_62, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_5 (ATerm r_49, ATerm s_49, ATerm);
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm need_help_1_0 (ATerm c_111 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_5 (ATerm x_63, ATerm y_63, ATerm);
ATerm Program_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_113 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm parse_options_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm iowrap_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,n_0 = NULL,o_0 = NULL,p_0 = NULL,q_0 = NULL;
  b_0 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  n_0 = t;
  t = term_a_5;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_5), n_0), term_b_5);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_d_5;
  q_0 = t;
  t = SSL_exit(q_0);
  t = b_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_5 = t;
  int f_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_5);
    }
  else
    {
      t = e_5;
      {
        ATerm t_0 = NULL,u_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_0 = ATgetFirst((ATermList) t);
            u_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_0;
        {
          ATerm z_0 (ATerm t)
          {
            t = u_0;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_0, t);
        }
      }
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_1 = ATgetFirst((ATermList) t);
      k_1 = (ATerm) ATgetNext((ATermList) t);
      t = k_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_1 = ATgetFirst((ATermList) t);
          i_1 = (ATerm) ATgetNext((ATermList) t);
          t = h_1;
          if(match_int(t, 34))
            {
              t = j_1;
              if(match_int(t, 92))
                {
                  ATerm g_5 = t;
                  int h_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_1 = NULL;
                      t = i_1;
                      t = De_Escape_0_0(t);
                      n_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_1), term_i_5);
                      ;
                      LocalPopChoice(h_5);
                    }
                  else
                    {
                      t = g_5;
                      {
                        ATerm q_1 = NULL;
                        t = k_1;
                        t = De_Escape_0_0(t);
                        q_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(q_1), j_1);
                      }
                    }
                }
              else
                {
                  ATerm t_1 = NULL;
                  t = k_1;
                  t = De_Escape_0_0(t);
                  t_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_1), j_1);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = j_1;
                  if(match_int(t, 92))
                    {
                      ATerm k_5 = t;
                      int t_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_1 = NULL;
                          t = i_1;
                          t = De_Escape_0_0(t);
                          x_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(x_1), term_y_5);
                          ;
                          LocalPopChoice(t_5);
                        }
                      else
                        {
                          t = k_5;
                          {
                            ATerm a_2 = NULL;
                            t = k_1;
                            t = De_Escape_0_0(t);
                            a_2 = t;
                            t = (ATerm) ATinsert(CheckATermList(a_2), j_1);
                          }
                        }
                    }
                  else
                    {
                      ATerm p_2 = NULL;
                      t = k_1;
                      t = De_Escape_0_0(t);
                      p_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_2), j_1);
                    }
                }
              else
                {
                  ATerm d_3 = NULL;
                  t = k_1;
                  t = De_Escape_0_0(t);
                  d_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_3), j_1);
                }
            }
        }
      else
        {
          ATerm h_3 = NULL;
          t = k_1;
          t = De_Escape_0_0(t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), j_1);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,a_4 = NULL;
  s_3 = t;
  t = SSL_explode_string(s_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
      t = a_4;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_3 = ATgetFirst((ATermList) t);
          v_3 = (ATerm) ATgetNext((ATermList) t);
          t = u_3;
          if(match_int(t, 34))
            {
              t = x_3;
              if(match_int(t, 92))
                {
                  ATerm z_5 = t;
                  int b_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_4 = NULL;
                      t = v_3;
                      t = De_Escape_0_0(t);
                      e_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_4), term_i_5);
                      ;
                      LocalPopChoice(b_6);
                    }
                  else
                    {
                      t = z_5;
                      {
                        ATerm k_4 = NULL;
                        t = a_4;
                        t = De_Escape_0_0(t);
                        k_4 = t;
                        t = (ATerm) ATinsert(CheckATermList(k_4), x_3);
                      }
                    }
                }
              else
                {
                  ATerm o_4 = NULL;
                  t = a_4;
                  t = De_Escape_0_0(t);
                  o_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(o_4), x_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = x_3;
                  if(match_int(t, 92))
                    {
                      ATerm c_6 = t;
                      int k_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_4 = NULL;
                          t = v_3;
                          t = De_Escape_0_0(t);
                          r_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(r_4), term_y_5);
                          ;
                          LocalPopChoice(k_6);
                        }
                      else
                        {
                          t = c_6;
                          {
                            ATerm z_4 = NULL;
                            t = a_4;
                            t = De_Escape_0_0(t);
                            z_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(z_4), x_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm w_5 = NULL;
                      t = a_4;
                      t = De_Escape_0_0(t);
                      w_5 = t;
                      t = (ATerm) ATinsert(CheckATermList(w_5), x_3);
                    }
                }
              else
                {
                  ATerm a_6 = NULL;
                  t = a_4;
                  t = De_Escape_0_0(t);
                  a_6 = t;
                  t = (ATerm) ATinsert(CheckATermList(a_6), x_3);
                }
            }
        }
      else
        {
          ATerm d_6 = NULL;
          t = a_4;
          t = De_Escape_0_0(t);
          d_6 = t;
          t = (ATerm) ATinsert(CheckATermList(d_6), x_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  t_3 = t;
  t = SSL_implode_string(t_3);
  return(t);
}
ATerm a_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm l_6 = t;
    int m_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_1, t);
        t = m_95(t);
        ;
        LocalPopChoice(m_6);
      }
    else
      {
        t = l_6;
        t = Cons_2_0(_id, e_6, t);
      }
    return(t);
  }
  t = e_6(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_6 = ATgetFirst((ATermList) t);
      if(((ATgetType(o_6) != AT_INT) || (ATgetInt((ATermInt) o_6) != 34)))
        _fail(t);
      {
        ATerm q_6 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(q_6) != AT_LIST) || !(ATisEmpty(q_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  g_6 = t;
  t = SSL_explode_string(g_6);
  f_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_6 = ATgetFirst((ATermList) t);
      {
        ATerm r_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_6;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = f_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_6 = ATgetFirst((ATermList) t);
      i_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_6;
  t = at_last_1_0(b_1, t);
  j_6 = t;
  t = SSL_implode_string(j_6);
  return(t);
}
ATerm filter_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      {
        ATerm v_6 = t;
        int w_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 (ATerm t)
            {
              t = filter_1_0(r_101, t);
              return(t);
            }
            t = Cons_2_0(r_101, c_1, t);
            ;
            LocalPopChoice(w_6);
          }
        else
          {
            t = v_6;
            {
              ATerm n_6 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm x_6 = ATgetFirst((ATermList) t);
                  n_6 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_6;
              t = filter_1_0(r_101, t);
            }
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_6, t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_95(t);
      }
    return(t);
  }
  t = p_6(t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_7);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_7);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_7);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
  e_7 = t;
  if(match_cons(t, sym_cf_1))
    {
      c_7 = ATgetArgument(t, 0);
      t = c_7;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          c_7 = ATgetArgument(t, 0);
          t = c_7;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_g_7);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  c_7 = ATgetArgument(t, 0);
                  d_7 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(d_7), c_7);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      c_7 = ATgetArgument(t, 0);
                      t = c_7;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(e_1, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          c_7 = ATgetArgument(t, 0);
                          t = c_7;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(f_1, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              c_7 = ATgetArgument(t, 0);
                              t = c_7;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(g_1, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  c_7 = ATgetArgument(t, 0);
                                  d_7 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_7 = NULL,p_7 = NULL;
                                    t = c_7;
                                    t = Sym2Strs_0_0(t);
                                    o_7 = t;
                                    t = d_7;
                                    t = Sym2Strs_0_0(t);
                                    p_7 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_7)), p_7), o_7);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      c_7 = ATgetArgument(t, 0);
                                      d_7 = ATgetArgument(t, 1);
                                      {
                                        ATerm s_7 = NULL,t_7 = NULL;
                                        t = c_7;
                                        t = Sym2Strs_0_0(t);
                                        s_7 = t;
                                        t = d_7;
                                        t = Sym2Strs_0_0(t);
                                        t_7 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_7)), t_7), s_7);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm h_7 = t;
                                      int i_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              c_7 = ATgetArgument(t, 0);
                                              {
                                                ATerm j_7 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(i_7);
                                          {
                                            ATerm v_7 = NULL;
                                            t = c_7;
                                            t = Sym2Strs_0_0(t);
                                            v_7 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_7)), v_7);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = h_7;
                                          {
                                            ATerm l_7 = t;
                                            int m_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    c_7 = ATgetArgument(t, 0);
                                                    d_7 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_7 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(m_7);
                                                {
                                                  ATerm z_7 = NULL,a_8 = NULL;
                                                  t = c_7;
                                                  t = Sym2Strs_0_0(t);
                                                  z_7 = t;
                                                  t = d_7;
                                                  t = Sym2Strs_0_0(t);
                                                  a_8 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_7)), a_8), z_7);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = l_7;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    c_7 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_8 = NULL;
                                                      t = c_7;
                                                      t = Sym2Strs_0_0(t);
                                                      c_8 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, c_8), (ATerm) ATinsert(ATempty, term_q_7));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        c_7 = ATgetArgument(t, 0);
                                                        d_7 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_8 = NULL,g_8 = NULL;
                                                          t = c_7;
                                                          t = Sym2Strs_0_0(t);
                                                          f_8 = t;
                                                          t = d_7;
                                                          t = Sym2Strs_0_0(t);
                                                          g_8 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, g_8), (ATerm) ATinsert(ATempty, term_r_7)), f_8);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            c_7 = ATgetArgument(t, 0);
                                                            d_7 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm j_8 = NULL,k_8 = NULL;
                                                              t = c_7;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              j_8 = t;
                                                              t = d_7;
                                                              t = Sym2Strs_0_0(t);
                                                              k_8 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_8), (ATerm) ATinsert(ATempty, term_u_7)), j_8);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                c_7 = ATgetArgument(t, 0);
                                                                d_7 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm n_8 = NULL,o_8 = NULL;
                                                                  t = c_7;
                                                                  t = Sym2Strs_0_0(t);
                                                                  n_8 = t;
                                                                  t = d_7;
                                                                  t = Sym2Strs_0_0(t);
                                                                  o_8 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_8), (ATerm) ATinsert(ATempty, term_w_7)), n_8);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    c_7 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm q_8 = NULL;
                                                                      t = c_7;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      q_8 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(q_8), term_x_7);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        c_7 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, c_7);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            c_7 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm r_0 = NULL;
                                                                              t = c_7;
                                                                              {
                                                                                ATerm y_7 = t;
                                                                                int b_8 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(b_8);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = y_7;
                                                                                  }
                                                                                r_0 = t;
                                                                                t = (ATerm) ATinsert(ATempty, r_0);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm d_8 = t;
                                                                            int e_8 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    c_7 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm h_8 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(e_8);
                                                                                {
                                                                                  ATerm d_1 = NULL;
                                                                                  t = c_7;
                                                                                  {
                                                                                    ATerm i_8 = t;
                                                                                    int l_8 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(l_8);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_8;
                                                                                      }
                                                                                    d_1 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, d_1);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = d_8;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_m_8);
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
                    }
                }
            }
        }
    }
  return(t);
}
ATerm j_5 (ATerm v_32, ATerm x_32, ATerm w_32, ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  t = x_32;
  t = Sym2Strs_0_0(t);
  v_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_8)), v_8), (ATerm) ATinsert(ATempty, term_p_8));
  t = concat_0_0(t);
  x_8 = t;
  t = SSL_concat_strings(x_8);
  w_8 = t;
  t = SSL_mkterm(w_8, w_32);
  return(t);
}
ATerm topdown_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  t = u_88(t);
  {
    ATerm l_1 (ATerm t)
    {
      t = topdown_1_0(u_88, t);
      return(t);
    }
    t = SRTS_all(l_1, t);
  }
  return(t);
}
ATerm _2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,f_0 = NULL,k_0 = NULL;
  d_9 = t;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_9);
  y_8 = t;
  t = z_8;
  t = k_70(t);
  b_9 = t;
  t = a_9;
  t = l_70(t);
  c_9 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, c_9);
  f_0 = t;
  t = SSLsetAnnotations(f_0, y_8);
  return(t);
}
ATerm m_5 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm g_9 = NULL;
  t = SSL_fputc(r_52, s_52);
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_9);
  return(t);
}
ATerm n_5 (ATerm f_56, ATerm g_56, ATerm t)
{
  ATerm h_9 = NULL;
  t = SSL_write_term_to_stream_text(f_56, g_56);
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_9);
  return(t);
}
ATerm p_5 (ATerm c_107 (ATerm), ATerm q_431, ATerm j_56, ATerm t)
{
  ATerm i_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_431, term_r_8);
  t = open_stream_0_0(t);
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_9, j_56);
  t = c_107(t);
  t = fclose_0_0(t);
  t = j_56;
  return(t);
}
ATerm o_5 (ATerm b_56, ATerm c_56, ATerm t)
{
  ATerm j_9 = NULL;
  t = SSL_write_term_to_stream_baf(b_56, c_56);
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_9);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = fetch_1_0(u_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm o_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      o_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(v_1, o_9, q_9, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_8 = ATgetArgument(t, 0);
      if(match_cons(s_8, sym_Stream_1))
        {
          s_9 = ATgetArgument(s_8, 0);
        }
      else
        _fail(t);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(s_9, t_9, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm v_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(y_1, v_9, y_9, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      if(match_cons(t_8, sym_Stream_1))
        {
          a_10 = ATgetArgument(t_8, 0);
        }
      else
        _fail(t);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(a_10, c_10, t);
  z_9 = t;
  t = term_u_8;
  d_10 = t;
  t = z_9;
  if(match_cons(t, sym_Stream_1))
    {
      g_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, z_9);
  t = m_5(d_10, g_10, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  k_9 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm e_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((l_9 != NULL) && (l_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_1, t);
          ;
          LocalPopChoice(f_9);
        }
      else
        {
          t = e_9;
          t = term_m_9;
          if(((l_9 != NULL) && (l_9 != t)))
            _fail(t);
          else
            l_9 = t;
        }
      return(t);
    }
    t = _2_0(m_1, _id, t);
    t = k_9;
    {
      ATerm p_1 (ATerm t)
      {
        ATerm n_9 = NULL;
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), n_9);
        return(t);
      }
      t = _2_0(_id, p_1, t);
      {
        ATerm p_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(r_1, s_1, t);
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = p_9;
            t = _2_0(_id, w_1, t);
          }
      }
    }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm e_110 (ATerm), ATerm t)
{
  ATerm h_10 = NULL,j_10 = NULL,l_10 = NULL,m_10 = NULL,o_10 = NULL;
  h_10 = t;
  t = dtime_0_0(t);
  t = h_10;
  t = e_110(t);
  j_10 = t;
  t = dtime_0_0(t);
  l_10 = t;
  t = j_10;
  if(match_cons(t, sym__2))
    {
      m_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_10), (ATerm) ATmakeAppl(sym_Runtime_1, l_10)), o_10);
  return(t);
}
ATerm k_11 (ATerm a_11, ATerm t)
{
  t = SSL_fclose(a_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_11 = NULL,h_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_11 = ATgetArgument(t, 0);
      {
        ATerm u_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_11);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = u_9;
            t = k_11(h_11, t);
          }
      }
    }
  else
    {
      t = k_11(h_11, t);
    }
  return(t);
}
ATerm q_5 (ATerm h_56, ATerm t)
{
  t = SSL_read_term_from_stream(h_56);
  return(t);
}
ATerm r_5 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm l_11 = NULL;
  t = SSL_fopen(t_52, u_52);
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_11 = NULL;
  t = SSL_stdin_stream();
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  t = SSL_stdout_stream();
  o_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  t = SSL_stderr_stream();
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_11);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_12;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = SSL_is_string(h_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      ATerm b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL,g_2 = NULL;
        z_11 = t;
        t = SSL_explode_term(z_11);
        if(match_cons(t, sym__2))
          {
            ATerm i_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_10 = ATgetArgument(t, 1);
              if(((ATgetType(k_10) == AT_LIST) && !(ATisEmpty(k_10))))
                {
                  g_2 = ATgetFirst((ATermList) k_10);
                  {
                    ATerm n_10 = (ATerm) ATgetNext((ATermList) k_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_12 = NULL,b_12 = NULL;
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_12 = ATgetArgument(t, 0);
                  b_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_5(a_12, b_12, t);
              ;
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              {
                ATerm e_12 = NULL,f_12 = NULL;
                t = _2_0(b_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_12 = ATgetArgument(t, 0);
                    f_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_5(e_12, f_12, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_12 = NULL;
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_12, term_u_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      t = debug_1_0(c_2, t);
      _fail(t);
    }
  k_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(m_12, t);
  l_12 = t;
  t = k_12;
  t = fclose_0_0(t);
  t = l_12;
  return(t);
}
ATerm fetch_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm q_12 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_94, _id, t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = Cons_2_0(_id, q_12, t);
      }
    return(t);
  }
  t = q_12(t);
  return(t);
}
ATerm l_5 (ATerm h_47, ATerm i_47, ATerm t)
{
  t = SSL_strcat(h_47, i_47);
  return(t);
}
ATerm debug_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL;
  s_12 = t;
  t = a_107(t);
  u_12 = t;
  t = term_a_5;
  v_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_12), u_12);
  w_12 = t;
  t = SSL_printnl(v_12, w_12);
  t = s_12;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL;
      c_13 = t;
      t = SSL_is_string(c_13);
      ;
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
            t = map_1_0(d_2, t);
            ;
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
            {
              ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
              g_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_13 = ATgetArgument(t, 0);
                  t = h_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_13 = ATgetArgument(t, 0);
                      t = h_13;
                      {
                        ATerm g_11 = t;
                        int i_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_11);
                          }
                        else
                          {
                            t = g_11;
                            t = debug_1_0(e_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_13 = NULL,o_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_13 = ATgetArgument(t, 0);
                          i_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_13;
                      t = eval_config_0_0(t);
                      n_13 = t;
                      t = i_13;
                      t = eval_config_0_0(t);
                      o_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_13, o_13);
                      t = l_5(n_13, o_13, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  v_13 = t;
  t = term_j_11;
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, v_13);
  t = u_5(w_13, v_13, t);
  {
    ATerm m_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,b_14 = NULL;
        t = eval_config_0_0(t);
        z_13 = t;
        t = term_j_11;
        b_14 = t;
        t = SSL_table_put(b_14, v_13, z_13);
        t = z_13;
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = m_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm q_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL,k_14 = NULL;
      g_14 = t;
      t = term_t_11;
      t = get_config_0_0(t);
      k_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_14, term_u_11);
      t = geq_0_0(t);
      t = g_14;
      t = n_108(t);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = q_11;
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm m_14 = NULL;
  m_14 = t;
  if(match_string(t, "-k"))
    {
      t = m_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_14;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  t = SSL_string_to_int(o_14);
  p_14 = t;
  t = term_v_11;
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, p_14);
  t = x_5(q_14, p_14, t);
  t = o_14;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, h_2, i_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  if(match_string(t, "-S"))
    {
      t = z_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_14;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  t = term_t_11;
  a_15 = t;
  t = term_x_11;
  b_15 = t;
  t = term_y_11;
  t = x_5(a_15, b_15, t);
  t = term_c_12;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  c_15 = t;
  t = SSL_string_to_int(c_15);
  d_15 = t;
  t = term_t_11;
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, d_15);
  t = x_5(e_15, d_15, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_15);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm f_15 = NULL,h_15 = NULL;
  t = term_j_12;
  f_15 = t;
  t = term_x_0;
  h_15 = t;
  t = term_n_12;
  t = x_5(f_15, h_15, t);
  t = term_p_12;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, k_2, l_2, t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = t_12;
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, n_2, o_2, t);
            ;
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = Option_3_0(q_2, r_2, s_2, t);
          }
      }
    }
  return(t);
}
ATerm x_5 (ATerm i_57, ATerm j_57, ATerm t)
{
  ATerm k_15 = NULL;
  t = term_j_11;
  k_15 = t;
  t = SSL_table_put(k_15, i_57, j_57);
  t = (ATerm) ATmakeAppl(sym__3, term_j_11, i_57, j_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_15 = NULL,v_15 = NULL,y_15 = NULL;
      t = term_x_0;
      t = d_0(t);
      t_15 = t;
      t = term_a_13;
      v_15 = t;
      t = term_b_13;
      y_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_13, term_b_13, t_15);
      t = v_5(v_15, y_15, t_15, t);
      _fail(t);
    }
  else
    {
      ATerm c_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_15 = ATgetFirst((ATermList) t);
          s_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_15;
      t = a_0(t);
      t = term_x_0;
      t = c_0(t);
      c_16 = t;
      t = (ATerm) ATinsert(CheckATermList(s_15), c_16);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm e_16 = NULL;
  e_16 = t;
  if(match_string(t, "-o"))
    {
      t = e_16;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_16;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm f_16 = NULL,i_16 = NULL;
  f_16 = t;
  t = term_d_13;
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, f_16);
  t = x_5(i_16, f_16, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_16);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_2, u_2, x_2, t);
  return(t);
}
ATerm v_5 (ATerm g_62, ATerm h_62, ATerm f_62, ATerm t)
{
  ATerm k_16 = NULL,p_16 = NULL,q_16 = NULL;
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_62, h_62);
  {
    ATerm f_13 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, g_62, h_62);
        t = u_5(g_62, h_62, t);
        ;
        LocalPopChoice(j_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATempty;
      }
    p_16 = t;
    t = (ATerm) ATinsert(CheckATermList(p_16), f_62);
    q_16 = t;
    t = SSL_table_put(g_62, h_62, q_16);
    t = k_16;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,d_17 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_17 = NULL,g_17 = NULL,j_17 = NULL;
      t = term_x_0;
      t = j_0(t);
      f_17 = t;
      t = term_a_13;
      g_17 = t;
      t = term_b_13;
      j_17 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_13, term_b_13, f_17);
      t = v_5(g_17, j_17, f_17, t);
      _fail(t);
    }
  else
    {
      ATerm o_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_16 = ATgetFirst((ATermList) t);
          a_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_17;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_17 = ATgetFirst((ATermList) t);
          d_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_16;
      t = h_0(t);
      t = b_17;
      t = i_0(t);
      o_17 = t;
      t = (ATerm) ATinsert(CheckATermList(d_17), o_17);
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm q_17 = NULL;
  q_17 = t;
  if(match_string(t, "-i"))
    {
      t = q_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_17;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  r_17 = t;
  t = term_m_13;
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_13, r_17);
  t = x_5(s_17, r_17, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_17);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, b_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,y_17 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_0;
  t = whoami_0_0(t);
  t_17 = t;
  t = term_a_5;
  u_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_13), t_17);
  v_17 = t;
  t = SSL_printnl(u_17, v_17);
  t = term_d_5;
  y_17 = t;
  t = SSL_exit(y_17);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_5 (ATerm r_49, ATerm s_49, ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_49, s_49);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      t = SSL_addr(r_49, s_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_100(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = u_13;
      {
        ATerm b_18 = NULL,c_18 = NULL,g_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_18 = ATgetFirst((ATermList) t);
            c_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_18;
        t = foldr_2_0(o_100, p_100, t);
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_18, g_18);
        t = p_100(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(z_2, a_3, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_18 = NULL,v_2 = NULL,w_2 = NULL;
  t = times_0_0(t);
  v_2 = t;
  t = SSL_explode_term(v_2);
  if(match_cons(t, sym__2))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_2;
  t = foldr_2_0(e_3, f_3, t);
  p_18 = t;
  t = SSL_TicksToSeconds(p_18);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_19;
        if((f_19 != t))
          {
            _fail(t);
          }
        t = e_19;
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_19, g_19);
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              t = SSL_gtr(f_19, g_19);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_19, g_19);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm f_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_19 = NULL,m_19 = NULL;
      j_19 = t;
      t = term_t_11;
      t = get_config_0_0(t);
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_19, term_d_5);
      t = geq_0_0(t);
      t = j_19;
      t = m_108(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = f_14;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm o_19 = NULL,q_19 = NULL,t_19 = NULL,u_19 = NULL;
  t = run_time_0_0(t);
  o_19 = t;
  t = term_x_0;
  t = whoami_0_0(t);
  q_19 = t;
  t = term_a_5;
  t_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), o_19), term_i_14), q_19);
  u_19 = t;
  t = SSL_printnl(t_19, u_19);
  t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), o_19), term_i_14), q_19));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_11;
  v_19 = t;
  t = SSL_exit(v_19);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm l_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(n_14);
    }
  else
    {
      t = l_14;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      t = fetch_1_0(i_3, t);
    }
  t = c_111(t);
  return(t);
}
ATerm map_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm w_19 (ATerm t)
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = Cons_2_0(l_94, w_19, t);
      }
    return(t);
  }
  t = w_19(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,g_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_20 = ATgetFirst((ATermList) t);
      g_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_20 = NULL,p_20 = NULL;
        t = g_20;
        t = g_0(t);
        o_20 = t;
        t = d_20;
        t = e_0(t);
        p_20 = t;
        t = g_20;
        {
          ATerm j_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(o_20), p_20);
            return(t);
          }
          t = reverse_acc_2_0(e_0, j_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_0;
      t = g_0(t);
    }
  return(t);
}
ATerm u_5 (ATerm x_63, ATerm y_63, ATerm t)
{
  t = SSL_table_get(x_63, y_63);
  return(t);
}
ATerm Program_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,u_20 = NULL,w_20 = NULL,z_20 = NULL,l_0 = NULL,m_0 = NULL;
  z_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_20);
  q_20 = t;
  t = u_20;
  t = p_80(t);
  w_20 = t;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_20);
  l_0 = t;
  t = SSLsetAnnotations(l_0, q_20);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_21), term_y_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  ATerm g_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = g_15;
      t = fetch_1_0(k_3, t);
    }
  t = term_j_15;
  t = echo_0_0(t);
  t = term_a_13;
  c_21 = t;
  t = term_b_13;
  d_21 = t;
  t = term_l_15;
  t = u_5(c_21, d_21, t);
  t = reverse_acc_2_0(_id, l_3, t);
  t = map_1_0(m_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,s_0 = NULL,v_0 = NULL;
  i_21 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_21);
  f_21 = t;
  t = g_21;
  t = q_80(t);
  h_21 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_21);
  s_0 = t;
  t = SSLsetAnnotations(s_0, f_21);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_21;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_15 = ATgetFirst((ATermList) t);
                ATerm p_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_21;
          }
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = (ATerm) ATinsert(ATempty, m_21);
      }
    n_21 = t;
    t = term_m_9;
    o_21 = t;
    t = SSL_printnl(o_21, n_21);
    t = m_21;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  t = term_q_15;
  w_21 = t;
  t = term_x_0;
  x_21 = t;
  t = term_u_15;
  t = x_5(w_21, x_21, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_w_15;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL;
  t = term_q_15;
  a_22 = t;
  t = term_x_0;
  b_22 = t;
  t = term_u_15;
  t = x_5(a_22, b_22, t);
  t = term_x_15;
  c_22 = t;
  t = term_x_0;
  f_22 = t;
  t = term_z_15;
  t = x_5(c_22, f_22, t);
  t = term_a_16;
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, o_3, p_3, t);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = d_16;
      t = Option_3_0(q_3, w_3, y_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,w_0 = NULL,y_0 = NULL;
  m_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_22 = ATgetFirst((ATermList) t);
      i_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_22);
  g_22 = t;
  t = h_22;
  t = z_74(t);
  k_22 = t;
  t = i_22;
  t = a_75(t);
  l_22 = t;
  y_0 = t;
  t = (ATerm) ATinsert(CheckATermList(l_22), k_22);
  w_0 = t;
  t = SSLsetAnnotations(w_0, g_22);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  t = term_r_13;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, r_22);
  t = x_5(s_22, r_22, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, r_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_113 (ATerm), ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  {
    ATerm h_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_16;
        t = f_113(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = h_16;
      }
    t = q_22;
    {
      ATerm c_4 (ATerm t)
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_16 = t;
            int r_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_16);
              }
            else
              {
                t = o_16;
                t = f_113(t);
                t = Cons_2_0(_id, c_4, t);
              }
            ;
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm u_22 = NULL,v_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_22 = ATgetFirst((ATermList) t);
                  v_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_22), (ATerm) ATmakeAppl(sym_Undefined_1, u_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_3, c_4, t);
    }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm n_23 = NULL;
  n_23 = t;
  if(match_string(t, "--help"))
    {
      t = n_23;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_23;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_23;
        }
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  t = term_v_14;
  o_23 = t;
  t = term_x_0;
  p_23 = t;
  t = term_s_16;
  t = x_5(o_23, p_23, t);
  t = term_t_16;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_u_16;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  g_23 = t;
  t = term_a_13;
  j_23 = t;
  t = term_b_13;
  k_23 = t;
  t = (ATerm) ATempty;
  l_23 = t;
  t = SSL_table_put(j_23, k_23, l_23);
  t = g_23;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_113(t);
          ;
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_4, g_4, h_4, t);
                ;
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_4, t);
    {
      ATerm c_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_23 = NULL;
          w_23 = t;
          {
            ATerm h_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_3 = NULL;
                t = w_23;
                {
                  ATerm k_17 = t;
                  int l_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(l_17);
                    }
                  else
                    {
                      t = k_17;
                      t = fetch_1_0(i_4, t);
                    }
                  t = w_23;
                  t = default_system_usage_0_0(t);
                  t = term_x_11;
                  r_3 = t;
                  t = SSL_exit(r_3);
                }
                ;
                LocalPopChoice(i_17);
              }
            else
              {
                t = h_17;
                {
                  ATerm b_4 = NULL;
                  t = term_q_15;
                  t = get_config_0_0(t);
                  t = w_23;
                  t = default_system_about_0_0(t);
                  t = term_x_11;
                  b_4 = t;
                  t = SSL_exit(b_4);
                }
              }
          }
          ;
          LocalPopChoice(e_17);
        }
      else
        {
          t = c_17;
          {
            ATerm m_17 = t;
            int n_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
                ATerm j_4 (ATerm t)
                {
                  ATerm l_4 (ATerm t)
                  {
                    if(((h_23 != NULL) && (h_23 != t)))
                      _fail(t);
                    else
                      h_23 = t;
                    return(t);
                  }
                  t = Undefined_1_0(l_4, t);
                  return(t);
                }
                t = fetch_1_0(j_4, t);
                t = term_a_5;
                x_23 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_23)), term_p_17);
                y_23 = t;
                t = SSL_printnl(x_23, y_23);
                t = (ATerm) ATmakeAppl(sym__2, term_a_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_23)), term_p_17));
                t = default_system_usage_0_0(t);
                t = term_d_5;
                z_23 = t;
                t = SSL_exit(z_23);
                ;
                LocalPopChoice(n_17);
              }
            else
              {
                t = m_17;
              }
          }
        }
      i_23 = t;
      t = term_a_13;
      m_23 = t;
      t = SSL_table_destroy(m_23);
      t = i_23;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  t = parse_options_1_0(e_111, t);
  c_24 = t;
  t = term_w_17;
  d_24 = t;
  t = SSL_table_create(d_24);
  t = term_w_17;
  e_24 = t;
  t = term_x_17;
  f_24 = t;
  t = SSL_table_put(e_24, f_24, c_24);
  t = c_24;
  t = g_111(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_111, t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = if_verbose2_1_0(u_4, t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  t = term_f_18;
  g_24 = t;
  t = term_x_0;
  h_24 = t;
  t = term_h_18;
  t = x_5(g_24, h_24, t);
  t = term_i_18;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  i_24 = t;
  t = term_r_13;
  t = get_config_0_0(t);
  j_24 = t;
  t = term_a_5;
  k_24 = t;
  t = (ATerm) ATinsert(ATempty, j_24);
  l_24 = t;
  t = SSL_printnl(k_24, l_24);
  t = i_24;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_110(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              {
                ATerm o_18 = t;
                int q_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_18);
                  }
                else
                  {
                    t = o_18;
                    {
                      ATerm r_18 = t;
                      int s_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_4, s_4, t_4, t);
                          ;
                          LocalPopChoice(s_18);
                        }
                      else
                        {
                          t = r_18;
                          {
                            ATerm t_18 = t;
                            int u_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_18);
                              }
                            else
                              {
                                t = t_18;
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
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
    m_24 = t;
    {
      ATerm v_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_24 != NULL) && (n_24 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_24 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_4, t);
          ;
          LocalPopChoice(w_18);
        }
      else
        {
          t = v_18;
          t = term_x_18;
          n_24 = t;
        }
      t = not_null(n_24);
      t = ReadFromFile_0_0(t);
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_24, o_24);
      t = apply_strategy_1_0(n_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_4, p_110, n_4, p_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = _2_0(_id, x_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = topdown_1_0(y_4, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = NULL,s_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
      v_24 = t;
      if(match_cons(t, sym_appl_2))
        {
          w_24 = ATgetArgument(t, 0);
          u_24 = ATgetArgument(t, 1);
          t = w_24;
          if(match_cons(t, sym_prod_3))
            {
              r_24 = ATgetArgument(t, 0);
              s_24 = ATgetArgument(t, 1);
              {
                ATerm a_19 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = v_24;
          t = j_5(r_24, s_24, u_24, t);
        }
      else
        {
          if(match_cons(t, sym_lit_1))
            {
              w_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_24;
        }
      ;
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_4, _fail, default_usage_0_0, t);
  return(t);
}

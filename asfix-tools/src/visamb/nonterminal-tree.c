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
ATerm term_d_16;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_c_10;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_j_6;
ATerm term_z_5;
ATerm term_k_5;
ATerm term_i_5;
ATerm term_g_5;
ATerm term_r_4;
ATerm term_n_4;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_f_4;
ATerm term_d_4;
ATerm term_u_0;
void init_constant_terms (void)
{
  ATprotect(&(term_u_0));
  term_u_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_m_10, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_u_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_e_11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_u_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_u_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_u_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_u_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm o_79 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm filter_1_0 (ATerm u_85 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm j_5 (ATerm v_16, ATerm x_16, ATerm w_16, ATerm);
ATerm topdown_1_0 (ATerm w_72 (ATerm), ATerm);
ATerm m_5 (ATerm t_36, ATerm u_36, ATerm);
ATerm n_5 (ATerm h_40, ATerm i_40, ATerm);
ATerm p_5 (ATerm k_91 (ATerm), ATerm s_399, ATerm l_40, ATerm);
ATerm o_5 (ATerm d_40, ATerm e_40, ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_94 (ATerm), ATerm);
ATerm w_18 (ATerm q_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_5 (ATerm j_40, ATerm);
ATerm r_5 (ATerm v_36, ATerm w_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm w_20 (ATerm k_19, ATerm);
ATerm x_20 (ATerm o_19, ATerm p_19, ATerm q_19, ATerm);
ATerm y_20 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm l_5 (ATerm j_31, ATerm k_31, ATerm);
ATerm debug_1_0 (ATerm i_91 (ATerm), ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_92 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_5 (ATerm k_41, ATerm l_41, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_5 (ATerm i_46, ATerm j_46, ATerm h_46, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm g_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_5 (ATerm t_33, ATerm u_33, ATerm);
ATerm foldr_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_92 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm need_help_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_78 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm u_5 (ATerm z_47, ATerm a_48, ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_97 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm parse_options_1_0 (ATerm m_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm iowrap_3_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_u_0;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_4;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_4), b_0), term_f_4);
  n_0 = t;
  t = SSL_printnl(e_0, n_0);
  t = term_h_4;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL;
  p_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_0;
    }
  else
    {
      ATerm f_0 (ATerm t)
      {
        t = not_null(r_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_0 = ATgetFirst((ATermList) t);
          if(((r_0 != NULL) && (r_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_0;
      t = at_end_1_0(f_0, t);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_1 = ATgetFirst((ATermList) t);
      g_1 = (ATerm) ATgetNext((ATermList) t);
      t = g_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_1 = ATgetFirst((ATermList) t);
          e_1 = (ATerm) ATgetNext((ATermList) t);
          t = c_1;
          if(match_int(t, 34))
            {
              t = f_1;
              if(match_int(t, 92))
                {
                  ATerm j_4 = t;
                  int k_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_1 = NULL;
                      t = e_1;
                      t = De_Escape_0_0(t);
                      j_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(j_1), term_n_4);
                      ;
                      LocalPopChoice(k_4);
                    }
                  else
                    {
                      t = j_4;
                      {
                        ATerm m_1 = NULL;
                        t = g_1;
                        t = De_Escape_0_0(t);
                        m_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(m_1), f_1);
                      }
                    }
                }
              else
                {
                  ATerm p_1 = NULL;
                  t = g_1;
                  t = De_Escape_0_0(t);
                  p_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_1), f_1);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = f_1;
                  if(match_int(t, 92))
                    {
                      ATerm o_4 = t;
                      int p_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_1 = NULL;
                          t = e_1;
                          t = De_Escape_0_0(t);
                          r_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(r_1), term_r_4);
                          ;
                          LocalPopChoice(p_4);
                        }
                      else
                        {
                          t = o_4;
                          {
                            ATerm u_1 = NULL;
                            t = g_1;
                            t = De_Escape_0_0(t);
                            u_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(u_1), f_1);
                          }
                        }
                    }
                  else
                    {
                      ATerm z_1 = NULL;
                      t = g_1;
                      t = De_Escape_0_0(t);
                      z_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_1), f_1);
                    }
                }
              else
                {
                  ATerm e_2 = NULL;
                  t = g_1;
                  t = De_Escape_0_0(t);
                  e_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_2), f_1);
                }
            }
        }
      else
        {
          ATerm p_2 = NULL;
          t = g_1;
          t = De_Escape_0_0(t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), f_1);
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
  ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL;
  l_3 = t;
  t = SSL_explode_string(l_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_3 = ATgetFirst((ATermList) t);
      q_3 = (ATerm) ATgetNext((ATermList) t);
      t = q_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_3 = ATgetFirst((ATermList) t);
          n_3 = (ATerm) ATgetNext((ATermList) t);
          t = m_3;
          if(match_int(t, 34))
            {
              t = o_3;
              if(match_int(t, 92))
                {
                  ATerm s_4 = t;
                  int t_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_3 = NULL;
                      t = n_3;
                      t = De_Escape_0_0(t);
                      t_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(t_3), term_n_4);
                      ;
                      LocalPopChoice(t_4);
                    }
                  else
                    {
                      t = s_4;
                      {
                        ATerm y_3 = NULL;
                        t = q_3;
                        t = De_Escape_0_0(t);
                        y_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(y_3), o_3);
                      }
                    }
                }
              else
                {
                  ATerm c_4 = NULL;
                  t = q_3;
                  t = De_Escape_0_0(t);
                  c_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_4), o_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = o_3;
                  if(match_int(t, 92))
                    {
                      ATerm u_4 = t;
                      int v_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_4 = NULL;
                          t = n_3;
                          t = De_Escape_0_0(t);
                          e_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(e_4), term_r_4);
                          ;
                          LocalPopChoice(v_4);
                        }
                      else
                        {
                          t = u_4;
                          {
                            ATerm i_4 = NULL;
                            t = q_3;
                            t = De_Escape_0_0(t);
                            i_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(i_4), o_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm m_4 = NULL;
                      t = q_3;
                      t = De_Escape_0_0(t);
                      m_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(m_4), o_3);
                    }
                }
              else
                {
                  ATerm q_4 = NULL;
                  t = q_3;
                  t = De_Escape_0_0(t);
                  q_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_4), o_3);
                }
            }
        }
      else
        {
          ATerm c_5 = NULL;
          t = q_3;
          t = De_Escape_0_0(t);
          c_5 = t;
          t = (ATerm) ATinsert(CheckATermList(c_5), o_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  k_3 = t;
  t = SSL_implode_string(k_3);
  return(t);
}
ATerm at_last_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
    e_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_7 = ATgetFirst((ATermList) t);
        g_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_4 = t;
      int x_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 = NULL,w_5 = NULL;
          t = SSLgetAnnotations(e_7);
          w_0 = t;
          t = g_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_7), f_7);
          w_5 = t;
          t = SSLsetAnnotations(w_5, w_0);
          t = o_79(t);
          ;
          LocalPopChoice(x_4);
        }
      else
        {
          t = w_4;
          {
            ATerm c_2 = NULL,h_2 = NULL,y_5 = NULL;
            t = SSLgetAnnotations(e_7);
            c_2 = t;
            t = g_7;
            t = h_7(t);
            h_2 = t;
            t = (ATerm) ATinsert(CheckATermList(h_2), f_7);
            y_5 = t;
            t = SSLsetAnnotations(y_5, c_2);
          }
        }
    }
    return(t);
  }
  t = h_7(t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_4 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_4) != AT_INT) || (ATgetInt((ATermInt) y_4) != 34)))
        _fail(t);
      {
        ATerm a_5 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(a_5) != AT_LIST) || !(ATisEmpty(a_5))))
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
  ATerm n_7 = NULL,o_7 = NULL,q_7 = NULL,v_7 = NULL,x_7 = NULL;
  x_7 = t;
  t = SSL_explode_string(x_7);
  n_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_7 = ATgetFirst((ATermList) t);
      {
        ATerm b_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_7;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = n_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_5 = ATgetFirst((ATermList) t);
      q_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_7;
  t = at_last_1_0(o_0, t);
  o_7 = t;
  t = SSL_implode_string(o_7);
  return(t);
}
ATerm filter_1_0 (ATerm u_85 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_8 = ATgetFirst((ATermList) t);
          v_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 = NULL,v_2 = NULL,w_2 = NULL,f_6 = NULL;
            t = SSLgetAnnotations(t_8);
            s_2 = t;
            t = u_8;
            t = u_85(t);
            v_2 = t;
            t = v_8;
            t = filter_1_0(u_85, t);
            w_2 = t;
            t = (ATerm) ATinsert(CheckATermList(w_2), v_2);
            f_6 = t;
            t = SSLsetAnnotations(f_6, s_2);
            ;
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            t = v_8;
            t = filter_1_0(u_85, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm b_10 (ATerm t)
  {
    ATerm v_9 = NULL,y_9 = NULL,z_9 = NULL;
    z_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_9 = ATgetFirst((ATermList) t);
        y_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_3 = NULL,h_3 = NULL,k_6 = NULL;
          t = SSLgetAnnotations(z_9);
          e_3 = t;
          t = y_9;
          t = b_10(t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), v_9);
          k_6 = t;
          t = SSLsetAnnotations(k_6, e_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_9;
        t = d_79(t);
      }
    return(t);
  }
  t = b_10(t);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_5);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_5);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_5);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm j_11 = NULL,l_11 = NULL,m_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym_cf_1))
    {
      j_11 = ATgetArgument(t, 0);
      t = j_11;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          j_11 = ATgetArgument(t, 0);
          t = j_11;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_z_5);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  j_11 = ATgetArgument(t, 0);
                  l_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(l_11), j_11);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      j_11 = ATgetArgument(t, 0);
                      t = j_11;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(s_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          j_11 = ATgetArgument(t, 0);
                          t = j_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(t_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              j_11 = ATgetArgument(t, 0);
                              t = j_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(v_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  j_11 = ATgetArgument(t, 0);
                                  l_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_12 = NULL,i_12 = NULL;
                                    t = j_11;
                                    t = Sym2Strs_0_0(t);
                                    h_12 = t;
                                    t = l_11;
                                    t = Sym2Strs_0_0(t);
                                    i_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_5)), i_12), h_12);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      j_11 = ATgetArgument(t, 0);
                                      l_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm p_12 = NULL,s_12 = NULL;
                                        t = j_11;
                                        t = Sym2Strs_0_0(t);
                                        p_12 = t;
                                        t = l_11;
                                        t = Sym2Strs_0_0(t);
                                        s_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_5)), s_12), p_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm e_6 = t;
                                      int g_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              j_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(g_6);
                                          {
                                            ATerm v_12 = NULL;
                                            t = j_11;
                                            t = Sym2Strs_0_0(t);
                                            v_12 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_6)), v_12);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = e_6;
                                          {
                                            ATerm l_6 = t;
                                            int m_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    j_11 = ATgetArgument(t, 0);
                                                    l_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(m_6);
                                                {
                                                  ATerm d_13 = NULL,e_13 = NULL;
                                                  t = j_11;
                                                  t = Sym2Strs_0_0(t);
                                                  d_13 = t;
                                                  t = l_11;
                                                  t = Sym2Strs_0_0(t);
                                                  e_13 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_6)), e_13), d_13);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = l_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    j_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_13 = NULL;
                                                      t = j_11;
                                                      t = Sym2Strs_0_0(t);
                                                      g_13 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, g_13), (ATerm) ATinsert(ATempty, term_p_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        j_11 = ATgetArgument(t, 0);
                                                        l_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_13 = NULL,m_13 = NULL;
                                                          t = j_11;
                                                          t = Sym2Strs_0_0(t);
                                                          j_13 = t;
                                                          t = l_11;
                                                          t = Sym2Strs_0_0(t);
                                                          m_13 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_13), (ATerm) ATinsert(ATempty, term_q_6)), j_13);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            j_11 = ATgetArgument(t, 0);
                                                            l_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm q_13 = NULL,u_13 = NULL;
                                                              t = j_11;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              q_13 = t;
                                                              t = l_11;
                                                              t = Sym2Strs_0_0(t);
                                                              u_13 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_13), (ATerm) ATinsert(ATempty, term_b_7)), q_13);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                j_11 = ATgetArgument(t, 0);
                                                                l_11 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm x_13 = NULL,y_13 = NULL;
                                                                  t = j_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  x_13 = t;
                                                                  t = l_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  y_13 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_13), (ATerm) ATinsert(ATempty, term_c_7)), x_13);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    j_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm c_14 = NULL;
                                                                      t = j_11;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      c_14 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(c_14), term_d_7);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        j_11 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, j_11);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            j_11 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm l_4 = NULL;
                                                                              t = j_11;
                                                                              {
                                                                                ATerm i_7 = t;
                                                                                int m_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(m_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_7;
                                                                                  }
                                                                                l_4 = t;
                                                                                t = (ATerm) ATinsert(ATempty, l_4);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm p_7 = t;
                                                                            int r_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    j_11 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm s_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(r_7);
                                                                                {
                                                                                  ATerm z_4 = NULL;
                                                                                  t = j_11;
                                                                                  {
                                                                                    ATerm t_7 = t;
                                                                                    int u_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(u_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = t_7;
                                                                                      }
                                                                                    z_4 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, z_4);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = p_7;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_w_7);
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
ATerm j_5 (ATerm v_16, ATerm x_16, ATerm w_16, ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,p_14 = NULL;
  t = x_16;
  t = Sym2Strs_0_0(t);
  m_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_7)), m_14), (ATerm) ATinsert(ATempty, term_y_7));
  t = concat_0_0(t);
  p_14 = t;
  t = SSL_concat_strings(p_14);
  l_14 = t;
  t = SSL_mkterm(l_14, w_16);
  return(t);
}
ATerm topdown_1_0 (ATerm w_72 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(w_72, t);
    return(t);
  }
  t = w_72(t);
  t = SRTS_all(x_0, t);
  return(t);
}
ATerm m_5 (ATerm t_36, ATerm u_36, ATerm t)
{
  ATerm q_14 = NULL;
  t = SSL_fputc(t_36, u_36);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_14);
  return(t);
}
ATerm n_5 (ATerm h_40, ATerm i_40, ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_write_term_to_stream_text(h_40, i_40);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm p_5 (ATerm k_91 (ATerm), ATerm s_399, ATerm l_40, ATerm t)
{
  ATerm x_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_399, term_z_7);
  t = open_stream_0_0(t);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_14, l_40);
  t = k_91(t);
  t = fclose_0_0(t);
  t = l_40;
  return(t);
}
ATerm o_5 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm a_15 = NULL;
  t = SSL_write_term_to_stream_baf(d_40, e_40);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_15);
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm d_6 = NULL,h_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          d_6 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(d_6, h_6, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,z_6 = NULL,k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          k_7 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(k_7, l_7, t);
  w_6 = t;
  t = term_d_8;
  x_6 = t;
  t = w_6;
  if(match_cons(t, sym_Stream_1))
    {
      z_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_8, w_6);
  t = m_5(x_6, z_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,n_15 = NULL,p_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,r_17 = NULL,s_17 = NULL,u_6 = NULL,t_6 = NULL;
  h_15 = t;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_15);
  t_15 = t;
  t = u_15;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((g_15 != NULL) && (g_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_0, t);
        ;
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = term_h_8;
        g_15 = t;
      }
    w_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_15, v_15);
    t_6 = t;
    t = SSLsetAnnotations(t_6, t_15);
    t = h_15;
    if(match_cons(t, sym__2))
      {
        j_15 = ATgetArgument(t, 0);
        n_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_15);
    i_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_15, (ATerm) ATmakeAppl(sym__2, not_null(g_15), n_15));
    u_6 = t;
    t = SSLsetAnnotations(u_6, i_15);
    p_15 = t;
    if(match_cons(t, sym__2))
      {
        r_17 = ATgetArgument(t, 0);
        s_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_8 = t;
      int l_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_5 = NULL,t_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,y_6 = NULL;
          t = SSLgetAnnotations(p_15);
          h_5 = t;
          t = r_17;
          t = fetch_1_0(z_0, t);
          t_5 = t;
          t = s_17;
          if(match_cons(t, sym__2))
            {
              b_6 = ATgetArgument(t, 0);
              c_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_5(a_1, b_6, c_6, t);
          a_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_5, a_6);
          y_6 = t;
          t = SSLsetAnnotations(y_6, h_5);
          ;
          LocalPopChoice(l_8);
        }
      else
        {
          t = k_8;
          {
            ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL,v_6 = NULL,a_7 = NULL;
            t = SSLgetAnnotations(p_15);
            o_6 = t;
            t = s_17;
            if(match_cons(t, sym__2))
              {
                s_6 = ATgetArgument(t, 0);
                v_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_5(b_1, s_6, v_6, t);
            r_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_17, r_6);
            a_7 = t;
            t = SSLsetAnnotations(a_7, o_6);
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
ATerm apply_strategy_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  t = dtime_0_0(t);
  t = b_18;
  t = m_94(t);
  a_18 = t;
  t = dtime_0_0(t);
  x_17 = t;
  t = a_18;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_17), (ATerm) ATmakeAppl(sym_Runtime_1, x_17)), z_17);
  return(t);
}
ATerm w_18 (ATerm q_18, ATerm t)
{
  t = SSL_fclose(q_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_18 = ATgetArgument(t, 0);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_18);
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = w_18(u_18, t);
          }
      }
    }
  else
    {
      t = w_18(u_18, t);
    }
  return(t);
}
ATerm q_5 (ATerm j_40, ATerm t)
{
  t = SSL_read_term_from_stream(j_40);
  return(t);
}
ATerm r_5 (ATerm v_36, ATerm w_36, ATerm t)
{
  ATerm x_18 = NULL;
  t = SSL_fopen(v_36, w_36);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  t = SSL_stdin_stream();
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_18 = NULL;
  t = SSL_stdout_stream();
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_19 = NULL;
  t = SSL_stderr_stream();
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_19);
  return(t);
}
ATerm w_20 (ATerm k_19, ATerm t)
{
  ATerm l_19 = NULL;
  t = SSL_explode_term(k_19);
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
          {
            l_19 = ATgetFirst((ATermList) q_8);
            {
              ATerm s_8 = (ATerm) ATgetNext((ATermList) q_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm x_20 (ATerm o_19, ATerm p_19, ATerm q_19, ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,u_19 = NULL,x_19 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(q_19);
  u_19 = t;
  t = o_19;
  if(match_cons(t, sym_Path_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_19, p_19);
  j_7 = t;
  t = SSLsetAnnotations(j_7, u_19);
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(r_19, s_19, t);
  return(t);
}
ATerm y_20 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,p_20 = NULL,a_8 = NULL;
  t = SSLgetAnnotations(h_20);
  l_20 = t;
  t = SSL_is_string(f_20);
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_20, g_20);
  a_8 = t;
  t = SSLsetAnnotations(a_8, l_20);
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(j_20, k_20, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      ATerm x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t_20 = t;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      v_20 = ATgetArgument(t, 1);
      {
        ATerm y_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_20(t_20, t);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = y_8;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_20(u_20, v_20, t_20, t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  t = y_20(u_20, v_20, t_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_20(t_20, t);
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_21 = NULL;
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_21, term_i_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = debug_1_0(d_1, t);
      _fail(t);
    }
  b_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(c_21, t);
  a_21 = t;
  t = b_21;
  t = fclose_0_0(t);
  t = a_21;
  return(t);
}
ATerm fetch_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm w_22 (ATerm t)
  {
    ATerm n_22 = NULL,o_22 = NULL,s_22 = NULL;
    n_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_22 = ATgetFirst((ATermList) t);
        s_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_8 = NULL,j_8 = NULL,i_8 = NULL;
          t = SSLgetAnnotations(n_22);
          e_8 = t;
          t = o_22;
          t = x_78(t);
          j_8 = t;
          t = (ATerm) ATinsert(CheckATermList(s_22), j_8);
          i_8 = t;
          t = SSLsetAnnotations(i_8, e_8);
          ;
          LocalPopChoice(l_9);
        }
      else
        {
          t = j_9;
          {
            ATerm b_9 = NULL,f_9 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(n_22);
            b_9 = t;
            t = s_22;
            t = w_22(t);
            f_9 = t;
            t = (ATerm) ATinsert(CheckATermList(f_9), o_22);
            m_8 = t;
            t = SSLsetAnnotations(m_8, b_9);
          }
        }
    }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm l_5 (ATerm j_31, ATerm k_31, ATerm t)
{
  t = SSL_strcat(j_31, k_31);
  return(t);
}
ATerm debug_1_0 (ATerm i_91 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  z_22 = t;
  t = i_91(t);
  a_23 = t;
  t = term_d_4;
  b_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_22), a_23);
  c_23 = t;
  t = SSL_printnl(b_23, c_23);
  t = z_22;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm m_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = m_9;
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = NULL;
      j_23 = t;
      t = SSL_is_string(j_23);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm t_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_1, t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = t_9;
            {
              ATerm r_23 = NULL,u_23 = NULL,v_23 = NULL;
              r_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_23 = ATgetArgument(t, 0);
                  t = u_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_23 = ATgetArgument(t, 0);
                      t = u_23;
                      {
                        ATerm x_9 = t;
                        int a_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_10);
                          }
                        else
                          {
                            t = x_9;
                            t = debug_1_0(i_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_24 = NULL,e_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          u_23 = ATgetArgument(t, 0);
                          v_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_23;
                      t = eval_config_0_0(t);
                      d_24 = t;
                      t = v_23;
                      t = eval_config_0_0(t);
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_24, e_24);
                      t = l_5(d_24, e_24, t);
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
  ATerm j_24 = NULL,k_24 = NULL;
  j_24 = t;
  t = term_c_10;
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, j_24);
  t = u_5(k_24, j_24, t);
  {
    ATerm d_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL,m_24 = NULL;
        t = eval_config_0_0(t);
        l_24 = t;
        t = term_c_10;
        m_24 = t;
        t = SSL_table_put(m_24, j_24, l_24);
        t = l_24;
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = d_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_92 (ATerm), ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_24 = NULL;
        t = term_m_10;
        t = get_config_0_0(t);
        u_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_24, term_n_10);
        t = geq_0_0(t);
        t = q_24;
        t = v_92(t);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = q_24;
      }
  }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  if(match_string(t, "-k"))
    {
      t = x_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_24;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  t = SSL_string_to_int(y_24);
  z_24 = t;
  t = term_o_10;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, z_24);
  t = x_5(a_25, z_24, t);
  t = y_24;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_1, l_1, n_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  if(match_string(t, "-S"))
    {
      t = c_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_25;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  t = term_m_10;
  d_25 = t;
  t = term_q_10;
  e_25 = t;
  t = term_r_10;
  t = x_5(d_25, e_25, t);
  t = term_s_10;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm t_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  f_25 = t;
  t = SSL_string_to_int(f_25);
  g_25 = t;
  t = term_m_10;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, g_25);
  t = x_5(h_25, g_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_25);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm x_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  t = term_v_10;
  m_25 = t;
  t = term_u_0;
  n_25 = t;
  t = term_w_10;
  t = x_5(m_25, n_25, t);
  t = term_x_10;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_1, q_1, s_1, t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_1, v_1, w_1, t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = Option_3_0(x_1, y_1, a_2, t);
          }
      }
    }
  return(t);
}
ATerm x_5 (ATerm k_41, ATerm l_41, ATerm t)
{
  ATerm o_25 = NULL;
  t = term_c_10;
  o_25 = t;
  t = SSL_table_put(o_25, k_41, l_41);
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, k_41, l_41);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
      t = term_u_0;
      t = h_0(t);
      t_25 = t;
      t = term_d_11;
      u_25 = t;
      t = term_e_11;
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_11, term_e_11, t_25);
      t = v_5(u_25, v_25, t_25, t);
      _fail(t);
    }
  else
    {
      ATerm y_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_25 = ATgetFirst((ATermList) t);
          s_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_25;
      t = d_0(t);
      t = term_u_0;
      t = g_0(t);
      y_25 = t;
      t = (ATerm) ATinsert(CheckATermList(s_25), y_25);
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  if(match_string(t, "-o"))
    {
      t = a_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_26;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL;
  b_26 = t;
  t = term_f_11;
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, b_26);
  t = x_5(c_26, b_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_26);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_2, d_2, f_2, t);
  return(t);
}
ATerm v_5 (ATerm i_46, ATerm j_46, ATerm h_46, ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm i_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_11 = ATgetArgument(t, 0);
            ATerm o_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = u_5(i_46, j_46, t);
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATempty;
      }
    f_26 = t;
    t = (ATerm) ATinsert(CheckATermList(f_26), h_46);
    g_26 = t;
    t = SSL_table_put(i_46, j_46, g_26);
    t = e_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
      t = term_u_0;
      t = m_0(t);
      r_26 = t;
      t = term_d_11;
      s_26 = t;
      t = term_e_11;
      t_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_11, term_e_11, r_26);
      t = v_5(s_26, t_26, r_26, t);
      _fail(t);
    }
  else
    {
      ATerm x_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_26 = ATgetFirst((ATermList) t);
          o_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_26 = ATgetFirst((ATermList) t);
          q_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_26;
      t = k_0(t);
      t = p_26;
      t = l_0(t);
      x_26 = t;
      t = (ATerm) ATinsert(CheckATermList(q_26), x_26);
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm z_26 = NULL;
  z_26 = t;
  if(match_string(t, "-i"))
    {
      t = z_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_26;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  a_27 = t;
  t = term_p_11;
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, a_27);
  t = x_5(b_27, a_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_27);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, i_2, j_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_0;
  t = whoami_0_0(t);
  c_27 = t;
  t = term_d_4;
  e_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_11), c_27);
  f_27 = t;
  t = SSL_printnl(e_27, f_27);
  t = term_h_4;
  d_27 = t;
  t = SSL_exit(d_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_5 (ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_33, u_33);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      t = SSL_addr(t_33, u_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_27;
      t = q_84(t);
    }
  else
    {
      ATerm m_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_27 = ATgetFirst((ATermList) t);
          j_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_27;
      t = foldr_2_0(q_84, r_84, t);
      m_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_27, m_27);
      t = r_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(i_10, j_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_27 = NULL,e_10 = NULL,f_10 = NULL;
  t = times_0_0(t);
  f_10 = t;
  t = SSL_explode_term(f_10);
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10;
  t = foldr_2_0(k_2, l_2, t);
  p_27 = t;
  t = SSL_TicksToSeconds(p_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_28;
        if((b_28 != t))
          {
            _fail(t);
          }
        t = a_28;
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_28, c_28);
              ;
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              t = SSL_gtr(b_28, c_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_92 (ATerm), ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = NULL;
        t = term_m_10;
        t = get_config_0_0(t);
        i_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_28, term_h_4);
        t = geq_0_0(t);
        t = g_28;
        t = u_92(t);
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = g_28;
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = run_time_0_0(t);
  k_28 = t;
  t = term_u_0;
  t = whoami_0_0(t);
  l_28 = t;
  t = term_d_4;
  n_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_12), k_28), term_d_12), l_28);
  o_28 = t;
  t = SSL_printnl(n_28, o_28);
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_12), k_28), term_d_12), l_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_10;
  p_28 = t;
  t = SSL_exit(p_28);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  y_28 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_28;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_28 = ATgetArgument(t, 0);
          {
            ATerm h_11 = NULL,r_8 = NULL;
            t = SSLgetAnnotations(y_28);
            h_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_28);
            r_8 = t;
            t = SSLsetAnnotations(r_8, h_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_28;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = fetch_1_0(n_2, t);
    }
  t = k_95(t);
  return(t);
}
ATerm map_1_0 (ATerm n_78 (ATerm), ATerm t)
{
  ATerm o_29 (ATerm t)
  {
    ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
    l_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_29;
      }
    else
      {
        ATerm y_11 = NULL,e_12 = NULL,f_12 = NULL,z_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_29 = ATgetFirst((ATermList) t);
            n_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_29);
        y_11 = t;
        t = m_29;
        t = n_78(t);
        e_12 = t;
        t = n_29;
        t = o_29(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), e_12);
        z_8 = t;
        t = SSLsetAnnotations(z_8, y_11);
      }
    return(t);
  }
  t = o_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_29 = NULL,x_29 = NULL;
        ATerm o_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_29)), not_null(x_29));
          return(t);
        }
        t = s_29;
        t = j_0(t);
        if(((w_29 != NULL) && (w_29 != t)))
          _fail(t);
        else
          w_29 = t;
        t = r_29;
        t = i_0(t);
        if(((x_29 != NULL) && (x_29 != t)))
          _fail(t);
        else
          x_29 = t;
        t = s_29;
        t = reverse_acc_2_0(i_0, o_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_0;
      t = j_0(t);
    }
  return(t);
}
ATerm u_5 (ATerm z_47, ATerm a_48, ATerm t)
{
  t = SSL_table_get(z_47, a_48);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,k_9 = NULL;
  d_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_30);
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_30);
  k_9 = t;
  t = SSLsetAnnotations(k_9, b_30);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_30), term_m_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      t = fetch_1_0(q_2, t);
    }
  t = term_q_12;
  t = echo_0_0(t);
  t = term_d_11;
  z_29 = t;
  t = term_e_11;
  a_30 = t;
  t = term_r_12;
  t = u_5(z_29, a_30, t);
  t = reverse_acc_2_0(_id, r_2, t);
  t = map_1_0(t_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  {
    ATerm t_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_30;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_12 = ATgetFirst((ATermList) t);
                ATerm y_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_30;
          }
        ;
        LocalPopChoice(w_12);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATinsert(ATempty, h_30);
      }
    i_30 = t;
    t = term_h_8;
    j_30 = t;
    t = SSL_printnl(j_30, i_30);
    t = h_30;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_z_12;
  n_30 = t;
  t = term_u_0;
  o_30 = t;
  t = term_a_13;
  t = x_5(n_30, o_30, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_b_13;
  return(t);
}
ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = term_z_12;
  r_30 = t;
  t = term_u_0;
  s_30 = t;
  t = term_a_13;
  t = x_5(r_30, s_30, t);
  t = term_f_13;
  p_30 = t;
  t = term_u_0;
  q_30 = t;
  t = term_h_13;
  t = x_5(p_30, q_30, t);
  t = term_i_13;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_2, x_2, y_2, t);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = l_13;
      t = Option_3_0(z_2, a_3, b_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,n_9 = NULL;
  y_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_30 = ATgetFirst((ATermList) t);
      v_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_30);
  t_30 = t;
  t = u_30;
  t = b_59(t);
  w_30 = t;
  t = v_30;
  t = c_59(t);
  x_30 = t;
  t = (ATerm) ATinsert(CheckATermList(x_30), w_30);
  n_9 = t;
  t = SSLsetAnnotations(n_9, t_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL,l_31 = NULL,q_9 = NULL;
  d_31 = t;
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_13;
        t = n_97(t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
      }
    t = d_31;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_31 = ATgetFirst((ATermList) t);
        g_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_31);
    e_31 = t;
    t = term_s_11;
    l_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_11, f_31);
    t = x_5(l_31, f_31, t);
    t = g_31;
    {
      ATerm w_31 (ATerm t)
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_31 = NULL;
                o_31 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_31;
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                t = n_97(t);
                t = Cons_2_0(_id, w_31, t);
              }
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm s_31 = NULL,t_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_31 = ATgetFirst((ATermList) t);
                  t_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_31), (ATerm) ATmakeAppl(sym_Undefined_1, s_31));
            }
          }
        return(t);
      }
      t = w_31(t);
      i_31 = t;
      t = (ATerm) ATinsert(CheckATermList(i_31), (ATerm) ATmakeAppl(sym_Program_1, f_31));
      q_9 = t;
      t = SSLsetAnnotations(q_9, e_31);
    }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  if(match_string(t, "--help"))
    {
      t = i_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_32;
        }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  t = term_l_12;
  j_32 = t;
  t = term_u_0;
  k_32 = t;
  t = term_z_13;
  t = x_5(j_32, k_32, t);
  t = term_a_14;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm i_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  d_32 = t;
  t = term_d_11;
  f_32 = t;
  t = term_e_11;
  g_32 = t;
  t = (ATerm) ATempty;
  h_32 = t;
  t = SSL_table_put(f_32, g_32, h_32);
  t = d_32;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm d_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_97(t);
          ;
          LocalPopChoice(e_14);
        }
      else
        {
          t = d_14;
          {
            ATerm f_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_3, f_3, g_3, t);
                ;
                LocalPopChoice(g_14);
              }
            else
              {
                t = f_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_3, t);
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_32 = NULL;
          r_32 = t;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_12 = NULL;
                t = r_32;
                {
                  ATerm n_14 = t;
                  int o_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_14);
                    }
                  else
                    {
                      t = n_14;
                      t = fetch_1_0(i_3, t);
                    }
                  t = r_32;
                  t = default_system_usage_0_0(t);
                  t = term_q_10;
                  u_12 = t;
                  t = SSL_exit(u_12);
                }
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                {
                  ATerm c_13 = NULL;
                  t = term_z_12;
                  t = get_config_0_0(t);
                  t = r_32;
                  t = default_system_about_0_0(t);
                  t = term_q_10;
                  c_13 = t;
                  t = SSL_exit(c_13);
                }
              }
          }
          ;
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm r_14 = t;
            int s_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
                ATerm j_3 (ATerm t)
                {
                  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,u_9 = NULL;
                  x_32 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_32);
                  v_32 = t;
                  t = w_32;
                  if(((b_32 != NULL) && (b_32 != t)))
                    _fail(t);
                  else
                    b_32 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_32);
                  u_9 = t;
                  t = SSLsetAnnotations(u_9, v_32);
                  return(t);
                }
                t = fetch_1_0(j_3, t);
                t = term_d_4;
                t_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_32)), term_t_14);
                u_32 = t;
                t = SSL_printnl(t_32, u_32);
                t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_32)), term_t_14));
                t = default_system_usage_0_0(t);
                t = term_h_4;
                s_32 = t;
                t = SSL_exit(s_32);
                ;
                LocalPopChoice(s_14);
              }
            else
              {
                t = r_14;
              }
          }
        }
      c_32 = t;
      t = term_d_11;
      e_32 = t;
      t = SSL_table_destroy(e_32);
      t = c_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_95 (ATerm), ATerm n_95 (ATerm), ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL;
  t = parse_options_1_0(m_95, t);
  c_33 = t;
  t = term_u_14;
  f_33 = t;
  t = SSL_table_create(f_33);
  t = term_u_14;
  d_33 = t;
  t = term_v_14;
  e_33 = t;
  t = SSL_table_put(d_33, e_33, c_33);
  t = c_33;
  t = o_95(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_95, t);
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm b_15 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_15);
            }
          else
            {
              t = b_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = if_verbose2_1_0(x_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  t = term_d_15;
  g_33 = t;
  t = term_u_0;
  h_33 = t;
  t = term_e_15;
  t = x_5(g_33, h_33, t);
  t = term_f_15;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_k_15;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  i_33 = t;
  t = term_s_11;
  t = get_config_0_0(t);
  j_33 = t;
  t = term_d_4;
  k_33 = t;
  t = (ATerm) ATinsert(ATempty, j_33);
  l_33 = t;
  t = SSL_printnl(k_33, l_33);
  t = i_33;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_94 (ATerm), ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_94(t);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        {
          ATerm o_15 = t;
          int q_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(q_15);
            }
          else
            {
              t = o_15;
              {
                ATerm r_15 = t;
                int s_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(s_15);
                  }
                else
                  {
                    t = r_15;
                    {
                      ATerm x_15 = t;
                      int y_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_3, v_3, w_3, t);
                          ;
                          LocalPopChoice(y_15);
                        }
                      else
                        {
                          t = x_15;
                          {
                            ATerm z_15 = t;
                            int a_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(a_16);
                              }
                            else
                              {
                                t = z_15;
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
  ATerm s_3 (ATerm t)
  {
    ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
    n_33 = t;
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_33 != NULL) && (m_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_3, t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = term_d_16;
          m_33 = t;
        }
      t = not_null(m_33);
      t = ReadFromFile_0_0(t);
      o_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_33, o_33);
      t = apply_strategy_1_0(v_94, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(p_3, x_94, r_3, s_3, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm s_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,g_10 = NULL;
  y_33 = t;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_33);
  s_33 = t;
  t = w_33;
  t = topdown_1_0(b_4, t);
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_33, x_33);
  g_10 = t;
  t = SSLsetAnnotations(g_10, s_33);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL;
  e_34 = t;
  if(match_cons(t, sym_appl_2))
    {
      d_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
      t = d_34;
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                z_33 = ATgetArgument(t, 0);
                a_34 = ATgetArgument(t, 1);
                {
                  ATerm g_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_16);
            {
              ATerm h_16 = t;
              int i_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_34;
                  t = j_5(z_33, a_34, c_34, t);
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  t = e_34;
                }
            }
          }
        else
          {
            t = e_16;
            t = e_34;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          d_34 = ATgetArgument(t, 0);
          t = d_34;
        }
      else
        {
          t = e_34;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_4, _fail, default_usage_0_0, t);
  return(t);
}

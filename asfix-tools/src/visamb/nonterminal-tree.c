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
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_h_11;
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
ATerm term_a_10;
ATerm term_o_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_i_8;
ATerm term_e_8;
ATerm term_z_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_j_6;
ATerm term_e_6;
ATerm term_k_5;
ATerm term_i_5;
ATerm term_g_5;
ATerm term_q_4;
ATerm term_m_4;
ATerm term_i_4;
ATerm term_g_4;
ATerm term_e_4;
ATerm term_c_4;
ATerm term_u_0;
void init_constant_terms (void)
{
  ATprotect(&(term_u_0));
  term_u_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_4));
  term_e_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
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
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_e_11);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_u_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_u_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_u_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_u_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm b_95 (ATerm), ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm j_5 (ATerm v_32, ATerm x_32, ATerm w_32, ATerm);
ATerm topdown_1_0 (ATerm u_88 (ATerm), ATerm);
ATerm m_5 (ATerm r_52, ATerm s_52, ATerm);
ATerm n_5 (ATerm f_56, ATerm g_56, ATerm);
ATerm p_5 (ATerm c_107 (ATerm), ATerm q_431, ATerm j_56, ATerm);
ATerm o_5 (ATerm b_56, ATerm c_56, ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm e_110 (ATerm), ATerm);
ATerm r_18 (ATerm l_18, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm q_5 (ATerm h_56, ATerm);
ATerm r_5 (ATerm t_52, ATerm u_52, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_20 (ATerm d_19, ATerm);
ATerm r_20 (ATerm i_19, ATerm j_19, ATerm k_19, ATerm);
ATerm s_20 (ATerm z_19, ATerm a_20, ATerm c_20, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm d_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm l_5 (ATerm h_47, ATerm i_47, ATerm);
ATerm debug_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm n_108 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_5 (ATerm i_57, ATerm j_57, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_5 (ATerm g_62, ATerm h_62, ATerm f_62, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_5 (ATerm r_49, ATerm s_49, ATerm);
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm need_help_1_0 (ATerm c_111 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_5 (ATerm x_63, ATerm y_63, ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm f_113 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm i_3 (ATerm);
ATerm parse_options_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm iowrap_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm b_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,k_0 = NULL,l_0 = NULL,n_0 = NULL;
  b_0 = t;
  t = term_u_0;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_c_4;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_4), f_0), term_e_4);
  n_0 = t;
  t = SSL_printnl(l_0, n_0);
  t = term_i_4;
  k_0 = t;
  t = SSL_exit(k_0);
  t = b_0;
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
      ATerm m_0 (ATerm t)
      {
        t = not_null(r_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_0 != NULL) && (q_0 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_0 = ATgetFirst((ATermList) t);
          if(((r_0 != NULL) && (r_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_0);
      t = at_end_1_0(m_0, t);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_1 = ATgetFirst((ATermList) t);
      h_1 = (ATerm) ATgetNext((ATermList) t);
      t = h_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_1 = ATgetFirst((ATermList) t);
          e_1 = (ATerm) ATgetNext((ATermList) t);
          t = c_1;
          if(match_int(t, 34))
            {
              t = g_1;
              if(match_int(t, 92))
                {
                  ATerm k_4 = t;
                  int l_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 = NULL;
                      t = e_1;
                      t = De_Escape_0_0(t);
                      k_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_1), term_m_4);
                      ;
                      LocalPopChoice(l_4);
                    }
                  else
                    {
                      t = k_4;
                      {
                        ATerm n_1 = NULL;
                        t = h_1;
                        t = De_Escape_0_0(t);
                        n_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(n_1), g_1);
                      }
                    }
                }
              else
                {
                  ATerm q_1 = NULL;
                  t = h_1;
                  t = De_Escape_0_0(t);
                  q_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_1), g_1);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = g_1;
                  if(match_int(t, 92))
                    {
                      ATerm o_4 = t;
                      int p_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_1 = NULL;
                          t = e_1;
                          t = De_Escape_0_0(t);
                          s_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_1), term_q_4);
                          ;
                          LocalPopChoice(p_4);
                        }
                      else
                        {
                          t = o_4;
                          {
                            ATerm x_1 = NULL;
                            t = h_1;
                            t = De_Escape_0_0(t);
                            x_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(x_1), g_1);
                          }
                        }
                    }
                  else
                    {
                      ATerm a_2 = NULL;
                      t = h_1;
                      t = De_Escape_0_0(t);
                      a_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_2), g_1);
                    }
                }
              else
                {
                  ATerm j_2 = NULL;
                  t = h_1;
                  t = De_Escape_0_0(t);
                  j_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_2), g_1);
                }
            }
        }
      else
        {
          ATerm v_2 = NULL;
          t = h_1;
          t = De_Escape_0_0(t);
          v_2 = t;
          t = (ATerm) ATinsert(CheckATermList(v_2), g_1);
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
  ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,q_3 = NULL,r_3 = NULL;
  m_3 = t;
  t = SSL_explode_string(m_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_3 = ATgetFirst((ATermList) t);
      r_3 = (ATerm) ATgetNext((ATermList) t);
      t = r_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_3 = ATgetFirst((ATermList) t);
          o_3 = (ATerm) ATgetNext((ATermList) t);
          t = n_3;
          if(match_int(t, 34))
            {
              t = q_3;
              if(match_int(t, 92))
                {
                  ATerm s_4 = t;
                  int t_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_3 = NULL;
                      t = o_3;
                      t = De_Escape_0_0(t);
                      u_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_3), term_m_4);
                      ;
                      LocalPopChoice(t_4);
                    }
                  else
                    {
                      t = s_4;
                      {
                        ATerm a_4 = NULL;
                        t = r_3;
                        t = De_Escape_0_0(t);
                        a_4 = t;
                        t = (ATerm) ATinsert(CheckATermList(a_4), q_3);
                      }
                    }
                }
              else
                {
                  ATerm d_4 = NULL;
                  t = r_3;
                  t = De_Escape_0_0(t);
                  d_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(d_4), q_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = q_3;
                  if(match_int(t, 92))
                    {
                      ATerm u_4 = t;
                      int v_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_4 = NULL;
                          t = o_3;
                          t = De_Escape_0_0(t);
                          f_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(f_4), term_q_4);
                          ;
                          LocalPopChoice(v_4);
                        }
                      else
                        {
                          t = u_4;
                          {
                            ATerm j_4 = NULL;
                            t = r_3;
                            t = De_Escape_0_0(t);
                            j_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_4), q_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm n_4 = NULL;
                      t = r_3;
                      t = De_Escape_0_0(t);
                      n_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_4), q_3);
                    }
                }
              else
                {
                  ATerm r_4 = NULL;
                  t = r_3;
                  t = De_Escape_0_0(t);
                  r_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_4), q_3);
                }
            }
        }
      else
        {
          ATerm d_5 = NULL;
          t = r_3;
          t = De_Escape_0_0(t);
          d_5 = t;
          t = (ATerm) ATinsert(CheckATermList(d_5), q_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  l_3 = t;
  t = SSL_implode_string(l_3);
  return(t);
}
ATerm at_last_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
    f_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_7 = ATgetFirst((ATermList) t);
        h_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_4 = t;
      int x_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 = NULL,y_5 = NULL;
          t = SSLgetAnnotations(f_7);
          w_0 = t;
          t = h_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(h_7), g_7);
          y_5 = t;
          t = SSLsetAnnotations(y_5, w_0);
          t = m_95(t);
          ;
          LocalPopChoice(x_4);
        }
      else
        {
          t = w_4;
          {
            ATerm b_2 = NULL,g_2 = NULL,z_5 = NULL;
            t = SSLgetAnnotations(f_7);
            b_2 = t;
            t = h_7;
            t = i_7(t);
            g_2 = t;
            t = (ATerm) ATinsert(CheckATermList(g_2), g_7);
            z_5 = t;
            t = SSLsetAnnotations(z_5, b_2);
          }
        }
    }
    return(t);
  }
  t = i_7(t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_4 = ATgetFirst((ATermList) t);
      if(((ATgetType(z_4) != AT_INT) || (ATgetInt((ATermInt) z_4) != 34)))
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
  ATerm o_7 = NULL,q_7 = NULL,v_7 = NULL,x_7 = NULL,y_7 = NULL;
  y_7 = t;
  t = SSL_explode_string(y_7);
  o_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_7 = ATgetFirst((ATermList) t);
      {
        ATerm b_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_7;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = o_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_5 = ATgetFirst((ATermList) t);
      v_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_7;
  t = at_last_1_0(o_0, t);
  q_7 = t;
  t = SSL_implode_string(q_7);
  return(t);
}
ATerm filter_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL;
  u_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_8 = ATgetFirst((ATermList) t);
          w_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 = NULL,u_2 = NULL,w_2 = NULL,g_6 = NULL;
            t = SSLgetAnnotations(u_8);
            r_2 = t;
            t = v_8;
            t = r_101(t);
            u_2 = t;
            t = w_8;
            t = filter_1_0(r_101, t);
            w_2 = t;
            t = (ATerm) ATinsert(CheckATermList(w_2), u_2);
            g_6 = t;
            t = SSLsetAnnotations(g_6, r_2);
            ;
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            t = w_8;
            t = filter_1_0(r_101, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    ATerm y_9 = NULL,z_9 = NULL,b_10 = NULL;
    b_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_9 = ATgetFirst((ATermList) t);
        z_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_3 = NULL,h_3 = NULL,m_6 = NULL;
          t = SSLgetAnnotations(b_10);
          e_3 = t;
          t = z_9;
          t = c_10(t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), y_9);
          m_6 = t;
          t = SSLsetAnnotations(m_6, e_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_10;
        t = b_95(t);
      }
    return(t);
  }
  t = c_10(t);
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
  ATerm l_11 = NULL,m_11 = NULL,o_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_cf_1))
    {
      l_11 = ATgetArgument(t, 0);
      t = l_11;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          l_11 = ATgetArgument(t, 0);
          t = l_11;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_e_6);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  l_11 = ATgetArgument(t, 0);
                  m_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(m_11), l_11);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      l_11 = ATgetArgument(t, 0);
                      t = l_11;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(s_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          l_11 = ATgetArgument(t, 0);
                          t = l_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(t_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              l_11 = ATgetArgument(t, 0);
                              t = l_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(v_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  l_11 = ATgetArgument(t, 0);
                                  m_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm i_12 = NULL,m_12 = NULL;
                                    t = l_11;
                                    t = Sym2Strs_0_0(t);
                                    i_12 = t;
                                    t = m_11;
                                    t = Sym2Strs_0_0(t);
                                    m_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_5)), m_12), i_12);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      l_11 = ATgetArgument(t, 0);
                                      m_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm s_12 = NULL,t_12 = NULL;
                                        t = l_11;
                                        t = Sym2Strs_0_0(t);
                                        s_12 = t;
                                        t = m_11;
                                        t = Sym2Strs_0_0(t);
                                        t_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_5)), t_12), s_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm f_6 = t;
                                      int h_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              l_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(h_6);
                                          {
                                            ATerm w_12 = NULL;
                                            t = l_11;
                                            t = Sym2Strs_0_0(t);
                                            w_12 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_6)), w_12);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = f_6;
                                          {
                                            ATerm k_6 = t;
                                            int l_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    l_11 = ATgetArgument(t, 0);
                                                    m_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(l_6);
                                                {
                                                  ATerm e_13 = NULL,f_13 = NULL;
                                                  t = l_11;
                                                  t = Sym2Strs_0_0(t);
                                                  e_13 = t;
                                                  t = m_11;
                                                  t = Sym2Strs_0_0(t);
                                                  f_13 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_6)), f_13), e_13);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = k_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    l_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_13 = NULL;
                                                      t = l_11;
                                                      t = Sym2Strs_0_0(t);
                                                      h_13 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, h_13), (ATerm) ATinsert(ATempty, term_p_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        l_11 = ATgetArgument(t, 0);
                                                        m_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_13 = NULL,o_13 = NULL;
                                                          t = l_11;
                                                          t = Sym2Strs_0_0(t);
                                                          m_13 = t;
                                                          t = m_11;
                                                          t = Sym2Strs_0_0(t);
                                                          o_13 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_13), (ATerm) ATinsert(ATempty, term_t_6)), m_13);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            l_11 = ATgetArgument(t, 0);
                                                            m_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_13 = NULL,v_13 = NULL;
                                                              t = l_11;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              u_13 = t;
                                                              t = m_11;
                                                              t = Sym2Strs_0_0(t);
                                                              v_13 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_13), (ATerm) ATinsert(ATempty, term_c_7)), u_13);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                l_11 = ATgetArgument(t, 0);
                                                                m_11 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm y_13 = NULL,b_14 = NULL;
                                                                  t = l_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  y_13 = t;
                                                                  t = m_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  b_14 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_14), (ATerm) ATinsert(ATempty, term_d_7)), y_13);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    l_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm d_14 = NULL;
                                                                      t = l_11;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      d_14 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(d_14), term_e_7);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        l_11 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, l_11);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            l_11 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm h_4 = NULL;
                                                                              t = l_11;
                                                                              {
                                                                                ATerm j_7 = t;
                                                                                int l_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(l_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_7;
                                                                                  }
                                                                                h_4 = t;
                                                                                t = (ATerm) ATinsert(ATempty, h_4);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm m_7 = t;
                                                                            int p_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    l_11 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm r_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(p_7);
                                                                                {
                                                                                  ATerm y_4 = NULL;
                                                                                  t = l_11;
                                                                                  {
                                                                                    ATerm s_7 = t;
                                                                                    int t_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(t_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = s_7;
                                                                                      }
                                                                                    y_4 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, y_4);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_7;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_u_7);
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
  ATerm m_14 = NULL,p_14 = NULL,q_14 = NULL;
  t = x_32;
  t = Sym2Strs_0_0(t);
  p_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_7)), p_14), (ATerm) ATinsert(ATempty, term_w_7));
  t = concat_0_0(t);
  q_14 = t;
  t = SSL_concat_strings(q_14);
  m_14 = t;
  t = SSL_mkterm(m_14, w_32);
  return(t);
}
ATerm topdown_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(u_88, t);
    return(t);
  }
  t = u_88(t);
  t = SRTS_all(x_0, t);
  return(t);
}
ATerm m_5 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_fputc(r_52, s_52);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm n_5 (ATerm f_56, ATerm g_56, ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_write_term_to_stream_text(f_56, g_56);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm p_5 (ATerm c_107 (ATerm), ATerm q_431, ATerm j_56, ATerm t)
{
  ATerm a_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_431, term_z_7);
  t = open_stream_0_0(t);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_15, j_56);
  t = c_107(t);
  t = fclose_0_0(t);
  t = j_56;
  return(t);
}
ATerm o_5 (ATerm b_56, ATerm c_56, ATerm t)
{
  ATerm b_15 = NULL;
  t = SSL_write_term_to_stream_baf(b_56, c_56);
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_15);
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
  ATerm c_6 = NULL,d_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          c_6 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      d_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(c_6, d_6, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL,z_6 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          z_6 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(z_6, k_7, t);
  v_6 = t;
  t = term_e_8;
  w_6 = t;
  t = v_6;
  if(match_cons(t, sym_Stream_1))
    {
      x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, v_6);
  t = m_5(w_6, x_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,n_15 = NULL,o_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,o_17 = NULL,r_17 = NULL,y_6 = NULL,u_6 = NULL;
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  if(match_cons(t, sym__2))
    {
      if(((v_15 != NULL) && (v_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_15 = ATgetArgument(t, 0);
      if(((w_15 != NULL) && (w_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(i_15));
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  t = not_null(v_15);
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_15 != NULL) && (h_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_15 = ATgetArgument(t, 0);
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
        t = term_i_8;
        if(((h_15 != NULL) && (h_15 != t)))
          _fail(t);
        else
          h_15 = t;
      }
    if(((x_15 != NULL) && (x_15 != t)))
      _fail(t);
    else
      x_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(w_15));
    if(((u_6 != NULL) && (u_6 != t)))
      _fail(t);
    else
      u_6 = t;
    t = SSLsetAnnotations(not_null(u_6), not_null(u_15));
    t = not_null(i_15);
    if(match_cons(t, sym__2))
      {
        if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          n_15 = ATgetArgument(t, 0);
        if(((o_15 != NULL) && (o_15 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          o_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(i_15));
    if(((j_15 != NULL) && (j_15 != t)))
      _fail(t);
    else
      j_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), (ATerm) ATmakeAppl(sym__2, not_null(h_15), not_null(o_15)));
    if(((y_6 != NULL) && (y_6 != t)))
      _fail(t);
    else
      y_6 = t;
    t = SSLsetAnnotations(not_null(y_6), not_null(j_15));
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    if(match_cons(t, sym__2))
      {
        if(((o_17 != NULL) && (o_17 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          o_17 = ATgetArgument(t, 0);
        if(((r_17 != NULL) && (r_17 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          r_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_5 = NULL,t_5 = NULL,w_5 = NULL,a_6 = NULL,b_6 = NULL,a_7 = NULL;
          t = SSLgetAnnotations(not_null(t_15));
          h_5 = t;
          t = not_null(o_17);
          t = fetch_1_0(z_0, t);
          t_5 = t;
          t = not_null(r_17);
          if(match_cons(t, sym__2))
            {
              a_6 = ATgetArgument(t, 0);
              b_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_5(a_1, a_6, b_6, t);
          w_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_5, w_5);
          a_7 = t;
          t = SSLsetAnnotations(a_7, h_5);
          ;
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
          {
            ATerm n_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,b_7 = NULL;
            t = SSLgetAnnotations(not_null(t_15));
            n_6 = t;
            t = not_null(r_17);
            if(match_cons(t, sym__2))
              {
                r_6 = ATgetArgument(t, 0);
                s_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_5(b_1, r_6, s_6, t);
            q_6 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_17), q_6);
            b_7 = t;
            t = SSLsetAnnotations(b_7, n_6);
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
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,z_17 = NULL,a_18 = NULL;
  a_18 = t;
  t = dtime_0_0(t);
  t = a_18;
  t = e_110(t);
  z_17 = t;
  t = dtime_0_0(t);
  u_17 = t;
  t = z_17;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_17), (ATerm) ATmakeAppl(sym_Runtime_1, u_17)), w_17);
  return(t);
}
ATerm r_18 (ATerm l_18, ATerm t)
{
  t = SSL_fclose(l_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_18 = ATgetArgument(t, 0);
      {
        ATerm l_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_18);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = l_8;
            t = r_18(p_18, t);
          }
      }
    }
  else
    {
      t = r_18(p_18, t);
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
  ATerm s_18 = NULL;
  t = SSL_fopen(t_52, u_52);
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t = SSL_stdin_stream();
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_stdout_stream();
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_18 = NULL;
  t = SSL_stderr_stream();
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_18);
  return(t);
}
ATerm q_20 (ATerm d_19, ATerm t)
{
  ATerm e_19 = NULL;
  t = SSL_explode_term(d_19);
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_8 = ATgetArgument(t, 1);
        if(((ATgetType(q_8) == AT_LIST) && !(ATisEmpty(q_8))))
          {
            e_19 = ATgetFirst((ATermList) q_8);
            {
              ATerm r_8 = (ATerm) ATgetNext((ATermList) q_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_20 (ATerm i_19, ATerm j_19, ATerm k_19, ATerm t)
{
  ATerm l_19 = NULL,s_19 = NULL,t_19 = NULL,x_19 = NULL,n_7 = NULL;
  t = SSLgetAnnotations(k_19);
  t_19 = t;
  t = i_19;
  if(match_cons(t, sym_Path_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_19, j_19);
  n_7 = t;
  t = SSLsetAnnotations(n_7, t_19);
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(l_19, s_19, t);
  return(t);
}
ATerm s_20 (ATerm z_19, ATerm a_20, ATerm c_20, ATerm t)
{
  ATerm d_20 = NULL,g_20 = NULL,h_20 = NULL,k_20 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(c_20);
  h_20 = t;
  t = SSL_is_string(z_19);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, a_20);
  b_8 = t;
  t = SSLsetAnnotations(b_8, h_20);
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(d_20, g_20, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_8 = ATgetArgument(t, 0);
      ATerm x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_20 = t;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_20(m_20, t);
            ;
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_20(o_20, p_20, m_20, t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  t = s_20(o_20, p_20, m_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_20(m_20, t);
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_20 = NULL;
      w_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_20, term_i_9);
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
  u_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(v_20, t);
  t_20 = t;
  t = u_20;
  t = fclose_0_0(t);
  t = t_20;
  return(t);
}
ATerm fetch_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm p_22 (ATerm t)
  {
    ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
    m_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_22 = ATgetFirst((ATermList) t);
        o_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_8 = NULL,h_8 = NULL,m_8 = NULL;
          t = SSLgetAnnotations(m_22);
          d_8 = t;
          t = n_22;
          t = v_94(t);
          h_8 = t;
          t = (ATerm) ATinsert(CheckATermList(o_22), h_8);
          m_8 = t;
          t = SSLsetAnnotations(m_8, d_8);
          ;
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
          {
            ATerm a_9 = NULL,e_9 = NULL,p_8 = NULL;
            t = SSLgetAnnotations(m_22);
            a_9 = t;
            t = o_22;
            t = p_22(t);
            e_9 = t;
            t = (ATerm) ATinsert(CheckATermList(e_9), n_22);
            p_8 = t;
            t = SSLsetAnnotations(p_8, a_9);
          }
        }
    }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm l_5 (ATerm h_47, ATerm i_47, ATerm t)
{
  t = SSL_strcat(h_47, i_47);
  return(t);
}
ATerm debug_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  s_22 = t;
  t = a_107(t);
  t_22 = t;
  t = term_c_4;
  u_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_22), t_22);
  v_22 = t;
  t = SSL_printnl(u_22, v_22);
  t = s_22;
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = NULL;
      e_23 = t;
      t = SSL_is_string(e_23);
      ;
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm t_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_1, t);
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = t_9;
            {
              ATerm o_23 = NULL,r_23 = NULL,s_23 = NULL;
              o_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_23 = ATgetArgument(t, 0);
                  t = r_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_23 = ATgetArgument(t, 0);
                      t = r_23;
                      {
                        ATerm w_9 = t;
                        int x_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_9);
                          }
                        else
                          {
                            t = w_9;
                            t = debug_1_0(i_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_23 = NULL,y_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_23 = ATgetArgument(t, 0);
                          s_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_23;
                      t = eval_config_0_0(t);
                      x_23 = t;
                      t = s_23;
                      t = eval_config_0_0(t);
                      y_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_23, y_23);
                      t = l_5(x_23, y_23, t);
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
  ATerm c_24 = NULL,d_24 = NULL;
  c_24 = t;
  t = term_a_10;
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, c_24);
  t = u_5(d_24, c_24, t);
  {
    ATerm d_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL,f_24 = NULL;
        t = eval_config_0_0(t);
        e_24 = t;
        t = term_a_10;
        f_24 = t;
        t = SSL_table_put(f_24, c_24, e_24);
        t = e_24;
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
ATerm if_verbose2_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL;
        t = term_m_10;
        t = get_config_0_0(t);
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_24, term_n_10);
        t = geq_0_0(t);
        t = j_24;
        t = n_108(t);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = j_24;
      }
  }
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  if(match_string(t, "-k"))
    {
      t = o_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_24;
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  t = SSL_string_to_int(p_24);
  q_24 = t;
  t = term_o_10;
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, q_24);
  t = x_5(r_24, q_24, t);
  t = p_24;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_1, l_1, m_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  if(match_string(t, "-S"))
    {
      t = t_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_24;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  t = term_m_10;
  y_24 = t;
  t = term_q_10;
  z_24 = t;
  t = term_r_10;
  t = x_5(y_24, z_24, t);
  t = term_s_10;
  return(t);
}
ATerm r_1 (ATerm t)
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
ATerm u_1 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  t = SSL_string_to_int(a_25);
  b_25 = t;
  t = term_m_10;
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, b_25);
  t = x_5(c_25, b_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_25);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL;
  t = term_v_10;
  d_25 = t;
  t = term_u_0;
  e_25 = t;
  t = term_w_10;
  t = x_5(d_25, e_25, t);
  t = term_x_10;
  return(t);
}
ATerm z_1 (ATerm t)
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
      t = Option_3_0(o_1, p_1, r_1, t);
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
            t = ArgOption_3_0(t_1, u_1, v_1, t);
            ;
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = Option_3_0(w_1, y_1, z_1, t);
          }
      }
    }
  return(t);
}
ATerm x_5 (ATerm i_57, ATerm j_57, ATerm t)
{
  ATerm f_25 = NULL;
  t = term_a_10;
  f_25 = t;
  t = SSL_table_put(f_25, i_57, j_57);
  t = (ATerm) ATmakeAppl(sym__3, term_a_10, i_57, j_57);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL;
      t = term_u_0;
      t = d_0(t);
      k_25 = t;
      t = term_d_11;
      l_25 = t;
      t = term_e_11;
      m_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_11, term_e_11, k_25);
      t = v_5(l_25, m_25, k_25, t);
      _fail(t);
    }
  else
    {
      ATerm p_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_25 = ATgetFirst((ATermList) t);
          j_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_25;
      t = a_0(t);
      t = term_u_0;
      t = c_0(t);
      p_25 = t;
      t = (ATerm) ATinsert(CheckATermList(j_25), p_25);
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  if(match_string(t, "-o"))
    {
      t = r_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_25;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  s_25 = t;
  t = term_f_11;
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, s_25);
  t = x_5(t_25, s_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_25);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_h_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
ATerm v_5 (ATerm g_62, ATerm h_62, ATerm f_62, ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_62, h_62);
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            ATerm n_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_62, h_62);
        t = u_5(g_62, h_62, t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATempty;
      }
    w_25 = t;
    t = (ATerm) ATinsert(CheckATermList(w_25), f_62);
    x_25 = t;
    t = SSL_table_put(g_62, h_62, x_25);
    t = v_25;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
      t = term_u_0;
      t = j_0(t);
      i_26 = t;
      t = term_d_11;
      j_26 = t;
      t = term_e_11;
      k_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_11, term_e_11, i_26);
      t = v_5(j_26, k_26, i_26, t);
      _fail(t);
    }
  else
    {
      ATerm o_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_26 = ATgetFirst((ATermList) t);
          f_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_26 = ATgetFirst((ATermList) t);
          h_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_26;
      t = h_0(t);
      t = g_26;
      t = i_0(t);
      o_26 = t;
      t = (ATerm) ATinsert(CheckATermList(h_26), o_26);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  if(match_string(t, "-i"))
    {
      t = q_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_26;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  r_26 = t;
  t = term_p_11;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, r_26);
  t = x_5(s_26, r_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_26);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, h_2, i_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_0;
  t = whoami_0_0(t);
  t_26 = t;
  t = term_c_4;
  v_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_11), t_26);
  w_26 = t;
  t = SSL_printnl(v_26, w_26);
  t = term_i_4;
  u_26 = t;
  t = SSL_exit(u_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_5 (ATerm r_49, ATerm s_49, ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_49, s_49);
      ;
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      t = SSL_addr(r_49, s_49);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_26;
      t = o_100(t);
    }
  else
    {
      ATerm d_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_26 = ATgetFirst((ATermList) t);
          a_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_27;
      t = foldr_2_0(o_100, p_100, t);
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_26, d_27);
      t = p_100(t);
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
  ATerm g_27 = NULL,e_10 = NULL,f_10 = NULL;
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
  g_27 = t;
  t = SSL_TicksToSeconds(g_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      t_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_27;
        if((s_27 != t))
          {
            _fail(t);
          }
        t = r_27;
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_27, t_27);
              ;
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              t = SSL_gtr(s_27, t_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_27, t_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_27 = NULL;
        t = term_m_10;
        t = get_config_0_0(t);
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_27, term_i_4);
        t = geq_0_0(t);
        t = x_27;
        t = m_108(t);
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = x_27;
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,e_28 = NULL,f_28 = NULL;
  t = run_time_0_0(t);
  b_28 = t;
  t = term_u_0;
  t = whoami_0_0(t);
  c_28 = t;
  t = term_c_4;
  e_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_12), b_28), term_f_12), c_28);
  f_28 = t;
  t = SSL_printnl(e_28, f_28);
  t = (ATerm) ATmakeAppl(sym__2, term_c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_12), b_28), term_f_12), c_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_10;
  g_28 = t;
  t = SSL_exit(g_28);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  p_28 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_28;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_28 = ATgetArgument(t, 0);
          {
            ATerm g_11 = NULL,s_8 = NULL;
            t = SSLgetAnnotations(p_28);
            g_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_28);
            s_8 = t;
            t = SSLsetAnnotations(s_8, g_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_28;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  ATerm h_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = h_12;
      t = fetch_1_0(n_2, t);
    }
  t = c_111(t);
  return(t);
}
ATerm map_1_0 (ATerm l_94 (ATerm), ATerm t)
{
  ATerm f_29 (ATerm t)
  {
    ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
    c_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_29;
      }
    else
      {
        ATerm x_11 = NULL,d_12 = NULL,e_12 = NULL,b_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_29 = ATgetFirst((ATermList) t);
            e_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_29);
        x_11 = t;
        t = d_29;
        t = l_94(t);
        d_12 = t;
        t = e_29;
        t = f_29(t);
        e_12 = t;
        t = (ATerm) ATinsert(CheckATermList(e_12), d_12);
        b_9 = t;
        t = SSLsetAnnotations(b_9, x_11);
      }
    return(t);
  }
  t = f_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_29 = ATgetFirst((ATermList) t);
      j_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_29 = NULL,o_29 = NULL;
        ATerm o_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_29)), not_null(o_29));
          return(t);
        }
        t = not_null(j_29);
        t = g_0(t);
        if(((n_29 != NULL) && (n_29 != t)))
          _fail(t);
        else
          n_29 = t;
        t = not_null(i_29);
        t = e_0(t);
        if(((o_29 != NULL) && (o_29 != t)))
          _fail(t);
        else
          o_29 = t;
        t = not_null(j_29);
        t = reverse_acc_2_0(e_0, o_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_0;
      t = g_0(t);
    }
  return(t);
}
ATerm u_5 (ATerm x_63, ATerm y_63, ATerm t)
{
  t = SSL_table_get(x_63, y_63);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,l_9 = NULL;
  u_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_29);
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_29);
  l_9 = t;
  t = SSLsetAnnotations(l_9, s_29);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_29), term_l_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
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
      t = fetch_1_0(p_2, t);
    }
  t = term_p_12;
  t = echo_0_0(t);
  t = term_d_11;
  q_29 = t;
  t = term_e_11;
  r_29 = t;
  t = term_q_12;
  t = u_5(q_29, r_29, t);
  t = reverse_acc_2_0(_id, q_2, t);
  t = map_1_0(s_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_29;
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
            t = y_29;
          }
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = (ATerm) ATinsert(ATempty, y_29);
      }
    z_29 = t;
    t = term_i_8;
    a_30 = t;
    t = SSL_printnl(a_30, z_29);
    t = y_29;
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
ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  t = term_z_12;
  e_30 = t;
  t = term_u_0;
  f_30 = t;
  t = term_b_13;
  t = x_5(e_30, f_30, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_c_13;
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
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  t = term_z_12;
  i_30 = t;
  t = term_u_0;
  j_30 = t;
  t = term_b_13;
  t = x_5(i_30, j_30, t);
  t = term_d_13;
  g_30 = t;
  t = term_u_0;
  h_30 = t;
  t = term_g_13;
  t = x_5(g_30, h_30, t);
  t = term_i_13;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_2, x_2, y_2, t);
      ;
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      t = Option_3_0(z_2, a_3, b_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_74 (ATerm), ATerm a_75 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,p_9 = NULL;
  p_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_30 = ATgetFirst((ATermList) t);
      m_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  k_30 = t;
  t = l_30;
  t = z_74(t);
  n_30 = t;
  t = m_30;
  t = a_75(t);
  o_30 = t;
  t = (ATerm) ATinsert(CheckATermList(o_30), n_30);
  p_9 = t;
  t = SSLsetAnnotations(p_9, k_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_113 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,z_30 = NULL,a_31 = NULL,s_9 = NULL;
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  {
    ATerm n_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_13;
        t = f_113(t);
        ;
        LocalPopChoice(p_13);
      }
    else
      {
        t = n_13;
      }
    t = not_null(u_30);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_30 != NULL) && (w_30 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_30 = ATgetFirst((ATermList) t);
        if(((x_30 != NULL) && (x_30 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          x_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(u_30));
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = term_s_11;
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_11, not_null(w_30));
    t = x_5(not_null(a_31), not_null(w_30), t);
    t = not_null(x_30);
    {
      ATerm k_31 (ATerm t)
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_31 = NULL;
                d_31 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_31;
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = t_13;
                t = f_113(t);
                t = Cons_2_0(_id, k_31, t);
              }
            ;
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm g_31 = NULL,h_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_31 = ATgetFirst((ATermList) t);
                  h_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_31), (ATerm) ATmakeAppl(sym_Undefined_1, g_31));
            }
          }
        return(t);
      }
      t = k_31(t);
      if(((z_30 != NULL) && (z_30 != t)))
        _fail(t);
      else
        z_30 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(z_30)), (ATerm) ATmakeAppl(sym_Program_1, not_null(w_30)));
      if(((s_9 != NULL) && (s_9 != t)))
        _fail(t);
      else
        s_9 = t;
      t = SSLsetAnnotations(not_null(s_9), not_null(v_30));
    }
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm w_31 = NULL;
  w_31 = t;
  if(match_string(t, "--help"))
    {
      t = w_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_31;
        }
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  t = term_k_12;
  x_31 = t;
  t = term_u_0;
  y_31 = t;
  t = term_x_13;
  t = x_5(x_31, y_31, t);
  t = term_z_13;
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm i_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  t = term_d_11;
  if(((t_31 != NULL) && (t_31 != t)))
    _fail(t);
  else
    t_31 = t;
  t = term_e_11;
  if(((u_31 != NULL) && (u_31 != t)))
    _fail(t);
  else
    u_31 = t;
  t = (ATerm) ATempty;
  if(((v_31 != NULL) && (v_31 != t)))
    _fail(t);
  else
    v_31 = t;
  t = SSL_table_put(not_null(t_31), not_null(u_31), not_null(v_31));
  t = not_null(r_31);
  {
    ATerm c_3 (ATerm t)
    {
      ATerm c_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_113(t);
          ;
          LocalPopChoice(e_14);
        }
      else
        {
          t = c_14;
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
          ATerm f_32 = NULL;
          f_32 = t;
          {
            ATerm j_14 = t;
            int k_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_12 = NULL;
                t = f_32;
                {
                  ATerm l_14 = t;
                  int n_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_k_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(n_14);
                    }
                  else
                    {
                      t = l_14;
                      t = fetch_1_0(i_3, t);
                    }
                  t = f_32;
                  t = default_system_usage_0_0(t);
                  t = term_q_10;
                  r_12 = t;
                  t = SSL_exit(r_12);
                }
                ;
                LocalPopChoice(k_14);
              }
            else
              {
                t = j_14;
                {
                  ATerm a_13 = NULL;
                  t = term_z_12;
                  t = get_config_0_0(t);
                  t = f_32;
                  t = default_system_about_0_0(t);
                  t = term_q_10;
                  a_13 = t;
                  t = SSL_exit(a_13);
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
            ATerm o_14 = t;
            int r_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
                ATerm j_3 (ATerm t)
                {
                  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,v_9 = NULL;
                  l_32 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_32);
                  j_32 = t;
                  t = k_32;
                  if(((p_31 != NULL) && (p_31 != t)))
                    _fail(t);
                  else
                    p_31 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_32);
                  v_9 = t;
                  t = SSLsetAnnotations(v_9, j_32);
                  return(t);
                }
                t = fetch_1_0(j_3, t);
                t = term_c_4;
                if(((h_32 != NULL) && (h_32 != t)))
                  _fail(t);
                else
                  h_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_31)), term_s_14);
                if(((i_32 != NULL) && (i_32 != t)))
                  _fail(t);
                else
                  i_32 = t;
                t = SSL_printnl(not_null(h_32), not_null(i_32));
                t = (ATerm) ATmakeAppl(sym__2, term_c_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_31)), term_s_14));
                t = default_system_usage_0_0(t);
                t = term_i_4;
                if(((g_32 != NULL) && (g_32 != t)))
                  _fail(t);
                else
                  g_32 = t;
                t = SSL_exit(not_null(g_32));
                ;
                LocalPopChoice(r_14);
              }
            else
              {
                t = o_14;
              }
          }
        }
      if(((q_31 != NULL) && (q_31 != t)))
        _fail(t);
      else
        q_31 = t;
      t = term_d_11;
      if(((s_31 != NULL) && (s_31 != t)))
        _fail(t);
      else
        s_31 = t;
      t = SSL_table_destroy(not_null(s_31));
      t = not_null(q_31);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm h_111 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL;
  t = parse_options_1_0(e_111, t);
  q_32 = t;
  t = term_t_14;
  t_32 = t;
  t = SSL_table_create(t_32);
  t = term_t_14;
  r_32 = t;
  t = term_u_14;
  s_32 = t;
  t = SSL_table_put(r_32, s_32, q_32);
  t = q_32;
  t = g_111(t);
  {
    ATerm v_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_111, t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = v_14;
        {
          ATerm z_14 = t;
          int c_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_15);
            }
          else
            {
              t = z_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = if_verbose2_1_0(x_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm u_32 = NULL,z_32 = NULL;
  t = term_d_15;
  u_32 = t;
  t = term_u_0;
  z_32 = t;
  t = term_e_15;
  t = x_5(u_32, z_32, t);
  t = term_f_15;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_g_15;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  a_33 = t;
  t = term_s_11;
  t = get_config_0_0(t);
  b_33 = t;
  t = term_c_4;
  c_33 = t;
  t = (ATerm) ATinsert(ATempty, b_33);
  d_33 = t;
  t = SSL_printnl(c_33, d_33);
  t = a_33;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm p_110 (ATerm), ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_110(t);
        ;
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        {
          ATerm m_15 = t;
          int p_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_15);
            }
          else
            {
              t = m_15;
              {
                ATerm q_15 = t;
                int r_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_15);
                  }
                else
                  {
                    t = q_15;
                    {
                      ATerm s_15 = t;
                      int y_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_3, v_3, w_3, t);
                          ;
                          LocalPopChoice(y_15);
                        }
                      else
                        {
                          t = s_15;
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
    ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
    if(((f_33 != NULL) && (f_33 != t)))
      _fail(t);
    else
      f_33 = t;
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_33 != NULL) && (e_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_3, t);
          ;
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = term_d_16;
          if(((e_33 != NULL) && (e_33 != t)))
            _fail(t);
          else
            e_33 = t;
        }
      t = not_null(e_33);
      t = ReadFromFile_0_0(t);
      if(((g_33 != NULL) && (g_33 != t)))
        _fail(t);
      else
        g_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_33), not_null(g_33));
      t = apply_strategy_1_0(n_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(k_3, p_110, p_3, s_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,g_10 = NULL;
  o_33 = t;
  if(match_cons(t, sym__2))
    {
      l_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_33);
  k_33 = t;
  t = m_33;
  t = topdown_1_0(b_4, t);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_33, n_33);
  g_10 = t;
  t = SSLsetAnnotations(g_10, k_33);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  u_33 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      t = t_33;
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                p_33 = ATgetArgument(t, 0);
                q_33 = ATgetArgument(t, 1);
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
                  t = u_33;
                  t = j_5(p_33, q_33, s_33, t);
                  ;
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  t = u_33;
                }
            }
          }
        else
          {
            t = e_16;
            t = u_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          t_33 = ATgetArgument(t, 0);
          t = t_33;
        }
      else
        {
          t = u_33;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_3, _fail, default_usage_0_0, t);
  return(t);
}

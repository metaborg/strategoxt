#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
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
Symbol sym_Hashtable_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_layout_0;
Symbol sym_func_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_sort_1;
Symbol sym_seq_2;
Symbol sym_alt_2;
Symbol sym_opt_1;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
Symbol sym_empty_0;
Symbol sym_alt_2;
Symbol sym_seq_2;
Symbol sym_label_2;
Symbol sym_lit_1;
Symbol sym_sort_1;
Symbol sym_alt_2;
Symbol sym_func_2;
Symbol sym_pair_2;
Symbol sym_iter_sep_n_3;
Symbol sym_iter_n_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_1;
Symbol sym_iter_1;
Symbol sym_opt_1;
Symbol sym_seq_2;
Symbol sym_empty_0;
Symbol sym_layout_0;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
}
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_v_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_s_6;
ATerm term_l_6;
ATerm term_j_6;
ATerm term_f_6;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_w_4;
ATerm term_q_4;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_v_3;
ATerm term_r_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_3));
  term_v_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_y_6);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_i_7);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_p_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_h_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_v_8);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_l_10);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_g_9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_e_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_y_9);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_v_8);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_v_8);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_v_8);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__3, term_x_9, term_y_9, (ATerm) ATempty);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_w_6, term_f_12);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_v_8);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm t_104 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_111 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm i_104 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm f_5 (ATerm p_18, ATerm r_18, ATerm q_18, ATerm t);
ATerm topdown_1_0 (ATerm f_97 (ATerm), ATerm t);
static ATerm g_5 (ATerm k_47, ATerm l_47, ATerm t);
static ATerm h_5 (ATerm p_31, ATerm q_31, ATerm t);
static ATerm j_5 (ATerm i_103 (ATerm), ATerm k_230, ATerm v_31, ATerm t);
static ATerm i_5 (ATerm l_31, ATerm m_31, ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm output_1_0 (ATerm n_122 (ATerm), ATerm t);
static ATerm c_16 (ATerm o_15, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_5 (ATerm r_31, ATerm t);
static ATerm l_5 (ATerm o_45, ATerm p_45, ATerm t);
static ATerm m_5 (ATerm m_47, ATerm n_47, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_18 (ATerm o_16, ATerm t);
static ATerm d_18 (ATerm w_16, ATerm x_16, ATerm a_17, ATerm t);
static ATerm e_18 (ATerm l_17, ATerm m_17, ATerm n_17, ATerm t);
static ATerm n_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm o_122 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_5 (ATerm e_66, ATerm f_66, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_5 (ATerm q_52, ATerm r_52, ATerm p_52, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_5 (ATerm z_50, ATerm a_51, ATerm t);
ATerm foldr_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_119 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm need_help_1_0 (ATerm e_122 (ATerm), ATerm t);
static ATerm x_5 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t);
ATerm lookup_table_0_1 (ATerm c_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_5 (ATerm n_57, ATerm o_57, ATerm t);
static ATerm r_5 (ATerm s_57, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_5 (ATerm l_57, ATerm m_57, ATerm t);
static ATerm t_5 (ATerm j_54, ATerm k_54, ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_124 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm parse_options_1_0 (ATerm b_124 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      static ATerm a_0 (ATerm t);
      static ATerm a_0 (ATerm t)
      {
        t = not_null(e_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_0 = ATgetFirst((ATermList) t);
          if(((e_0 != NULL) && (e_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_0;
      t = at_end_1_0(a_0, t);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_0 = ATgetFirst((ATermList) t);
      a_1 = (ATerm) ATgetNext((ATermList) t);
      t = a_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_0 = ATgetFirst((ATermList) t);
          y_0 = (ATerm) ATgetNext((ATermList) t);
          t = x_0;
          if(match_int(t, 34))
            {
              t = z_0;
              if(match_int(t, 92))
                {
                  ATerm p_0 = t;
                  int p_3 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_1 = NULL;
                      t = y_0;
                      t = De_Escape_0_0(t);
                      e_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_1), term_r_3);
                      LocalPopChoice(p_3);
                    }
                  else
                    {
                      t = p_0;
                      {
                        ATerm h_1 = NULL;
                        t = a_1;
                        t = De_Escape_0_0(t);
                        h_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_1), z_0);
                      }
                    }
                }
              else
                {
                  ATerm k_1 = NULL;
                  t = a_1;
                  t = De_Escape_0_0(t);
                  k_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_1), z_0);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = z_0;
                  if(match_int(t, 92))
                    {
                      ATerm s_3 = t;
                      int u_3 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_1 = NULL;
                          t = y_0;
                          t = De_Escape_0_0(t);
                          m_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(m_1), term_v_3);
                          LocalPopChoice(u_3);
                        }
                      else
                        {
                          t = s_3;
                          {
                            ATerm p_1 = NULL;
                            t = a_1;
                            t = De_Escape_0_0(t);
                            p_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(p_1), z_0);
                          }
                        }
                    }
                  else
                    {
                      ATerm y_1 = NULL;
                      t = a_1;
                      t = De_Escape_0_0(t);
                      y_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(y_1), z_0);
                    }
                }
              else
                {
                  ATerm k_2 = NULL;
                  t = a_1;
                  t = De_Escape_0_0(t);
                  k_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_2), z_0);
                }
            }
        }
      else
        {
          ATerm o_2 = NULL;
          t = a_1;
          t = De_Escape_0_0(t);
          o_2 = t;
          t = (ATerm) ATinsert(CheckATermList(o_2), z_0);
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
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  b_3 = t;
  t = SSL_explode_string(b_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_3 = ATgetFirst((ATermList) t);
      f_3 = (ATerm) ATgetNext((ATermList) t);
      t = f_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_3 = ATgetFirst((ATermList) t);
          d_3 = (ATerm) ATgetNext((ATermList) t);
          t = c_3;
          if(match_int(t, 34))
            {
              t = e_3;
              if(match_int(t, 92))
                {
                  ATerm w_3 = t;
                  int x_3 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_3 = NULL;
                      t = d_3;
                      t = De_Escape_0_0(t);
                      k_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_3), term_r_3);
                      LocalPopChoice(x_3);
                    }
                  else
                    {
                      t = w_3;
                      {
                        ATerm q_3 = NULL;
                        t = f_3;
                        t = De_Escape_0_0(t);
                        q_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(q_3), e_3);
                      }
                    }
                }
              else
                {
                  ATerm t_3 = NULL;
                  t = f_3;
                  t = De_Escape_0_0(t);
                  t_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_3), e_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = e_3;
                  if(match_int(t, 92))
                    {
                      ATerm z_3 = t;
                      int a_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_3 = NULL;
                          t = d_3;
                          t = De_Escape_0_0(t);
                          y_3 = t;
                          t = (ATerm) ATinsert(CheckATermList(y_3), term_v_3);
                          LocalPopChoice(a_4);
                        }
                      else
                        {
                          t = z_3;
                          {
                            ATerm e_4 = NULL;
                            t = f_3;
                            t = De_Escape_0_0(t);
                            e_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(e_4), e_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm k_4 = NULL;
                      t = f_3;
                      t = De_Escape_0_0(t);
                      k_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_4), e_3);
                    }
                }
              else
                {
                  ATerm p_4 = NULL;
                  t = f_3;
                  t = De_Escape_0_0(t);
                  p_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_4), e_3);
                }
            }
        }
      else
        {
          ATerm v_4 = NULL;
          t = f_3;
          t = De_Escape_0_0(t);
          v_4 = t;
          t = (ATerm) ATinsert(CheckATermList(v_4), e_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  a_3 = t;
  t = SSL_implode_string(a_3);
  return(t);
}
ATerm at_last_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  static ATerm g_7 (ATerm t);
  static ATerm g_7 (ATerm t)
  {
    ATerm a_7 = NULL,d_7 = NULL,f_7 = NULL;
    a_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_7 = ATgetFirst((ATermList) t);
        f_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_4 = t;
      int c_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_0 = NULL,a_6 = NULL;
          t = SSLgetAnnotations(a_7);
          r_0 = t;
          t = f_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(f_7), d_7);
          a_6 = t;
          t = SSLsetAnnotations(a_6, r_0);
          t = t_104(t);
          LocalPopChoice(c_4);
        }
      else
        {
          t = b_4;
          {
            ATerm u_1 = NULL,a_2 = NULL,d_6 = NULL;
            t = SSLgetAnnotations(a_7);
            u_1 = t;
            t = f_7;
            t = g_7(t);
            a_2 = t;
            t = (ATerm) ATinsert(CheckATermList(a_2), d_7);
            d_6 = t;
            t = SSLsetAnnotations(d_6, u_1);
          }
        }
    }
    return(t);
  }
  t = g_7(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_4 = ATgetFirst((ATermList) t);
      if(((ATgetType(f_4) != AT_INT) || (ATgetInt((ATermInt) f_4) != 34)))
        _fail(t);
      {
        ATerm g_4 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(g_4) != AT_LIST) || !(ATisEmpty(g_4))))
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
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  t_7 = t;
  t = SSL_explode_string(t_7);
  p_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_7 = ATgetFirst((ATermList) t);
      {
        ATerm h_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_7;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = p_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_4 = ATgetFirst((ATermList) t);
      r_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_7;
  t = at_last_1_0(i_0, t);
  q_7 = t;
  t = SSL_implode_string(q_7);
  return(t);
}
ATerm filter_1_0 (ATerm u_111 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,z_8 = NULL,a_9 = NULL;
  s_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_8 = ATgetFirst((ATermList) t);
          a_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_4 = t;
        int l_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_2 = NULL,q_2 = NULL,r_2 = NULL,i_6 = NULL;
            t = SSLgetAnnotations(s_8);
            j_2 = t;
            t = z_8;
            t = u_111(t);
            q_2 = t;
            t = a_9;
            t = filter_1_0(u_111, t);
            r_2 = t;
            t = (ATerm) ATinsert(CheckATermList(r_2), q_2);
            i_6 = t;
            t = SSLsetAnnotations(i_6, j_2);
            LocalPopChoice(l_4);
          }
        else
          {
            t = j_4;
            t = a_9;
            t = filter_1_0(u_111, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  static ATerm c_10 (ATerm t);
  static ATerm c_10 (ATerm t)
  {
    ATerm w_9 = NULL,z_9 = NULL,a_10 = NULL;
    a_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_9 = ATgetFirst((ATermList) t);
        z_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_2 = NULL,l_3 = NULL,k_6 = NULL;
          t = SSLgetAnnotations(a_10);
          z_2 = t;
          t = z_9;
          t = c_10(t);
          l_3 = t;
          t = (ATerm) ATinsert(CheckATermList(l_3), w_9);
          k_6 = t;
          t = SSLsetAnnotations(k_6, z_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_10;
        t = i_104(t);
      }
    return(t);
  }
  t = c_10(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_4);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_4);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_4);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm k_11 = NULL,m_11 = NULL,n_11 = NULL;
  n_11 = t;
  if(match_cons(t, sym_cf_1))
    {
      k_11 = ATgetArgument(t, 0);
      t = k_11;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          k_11 = ATgetArgument(t, 0);
          t = k_11;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_q_4);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  k_11 = ATgetArgument(t, 0);
                  m_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(m_11), k_11);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      k_11 = ATgetArgument(t, 0);
                      t = k_11;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(k_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          k_11 = ATgetArgument(t, 0);
                          t = k_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(n_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              k_11 = ATgetArgument(t, 0);
                              t = k_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(q_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  k_11 = ATgetArgument(t, 0);
                                  m_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_11 = NULL,a_12 = NULL;
                                    t = k_11;
                                    t = Sym2Strs_0_0(t);
                                    z_11 = t;
                                    t = m_11;
                                    t = Sym2Strs_0_0(t);
                                    a_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_4)), a_12), z_11);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      k_11 = ATgetArgument(t, 0);
                                      m_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm d_12 = NULL,e_12 = NULL;
                                        t = k_11;
                                        t = Sym2Strs_0_0(t);
                                        d_12 = t;
                                        t = m_11;
                                        t = Sym2Strs_0_0(t);
                                        e_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_4)), e_12), d_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm r_4 = t;
                                      int s_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              k_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm t_4 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(s_4);
                                          {
                                            ATerm g_12 = NULL;
                                            t = k_11;
                                            t = Sym2Strs_0_0(t);
                                            g_12 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_4)), g_12);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = r_4;
                                          {
                                            ATerm x_4 = t;
                                            int y_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    k_11 = ATgetArgument(t, 0);
                                                    m_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_4 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(y_4);
                                                {
                                                  ATerm k_12 = NULL,l_12 = NULL;
                                                  t = k_11;
                                                  t = Sym2Strs_0_0(t);
                                                  k_12 = t;
                                                  t = m_11;
                                                  t = Sym2Strs_0_0(t);
                                                  l_12 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_4)), l_12), k_12);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = x_4;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    k_11 = ATgetArgument(t, 0);
                                                    m_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm s_12 = NULL,t_12 = NULL;
                                                      t = k_11;
                                                      t = Sym2Strs_0_0(t);
                                                      s_12 = t;
                                                      t = m_11;
                                                      t = Sym2Strs_0_0(t);
                                                      t_12 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_12), (ATerm) ATinsert(ATempty, term_a_5)), s_12);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        k_11 = ATgetArgument(t, 0);
                                                        m_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_12 = NULL,z_12 = NULL;
                                                          t = k_11;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          y_12 = t;
                                                          t = m_11;
                                                          t = Sym2Strs_0_0(t);
                                                          z_12 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_12), (ATerm) ATinsert(ATempty, term_b_5)), y_12);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            k_11 = ATgetArgument(t, 0);
                                                            m_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm h_13 = NULL,i_13 = NULL;
                                                              t = k_11;
                                                              t = Sym2Strs_0_0(t);
                                                              h_13 = t;
                                                              t = m_11;
                                                              t = Sym2Strs_0_0(t);
                                                              i_13 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_13), (ATerm) ATinsert(ATempty, term_c_5)), h_13);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                k_11 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, k_11);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    k_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm d_4 = NULL;
                                                                      t = k_11;
                                                                      {
                                                                        ATerm d_5 = t;
                                                                        int e_5 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(e_5);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_5;
                                                                          }
                                                                      }
                                                                      d_4 = t;
                                                                      t = (ATerm) ATinsert(ATempty, d_4);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm p_5 = t;
                                                                    int s_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            k_11 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm v_5 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(s_5);
                                                                        {
                                                                          ATerm u_4 = NULL;
                                                                          t = k_11;
                                                                          {
                                                                            ATerm c_6 = t;
                                                                            int e_6 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(e_6);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = c_6;
                                                                              }
                                                                          }
                                                                          u_4 = t;
                                                                          t = (ATerm) ATinsert(ATempty, u_4);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_5;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_f_6);
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
static ATerm f_5 (ATerm p_18, ATerm r_18, ATerm q_18, ATerm t)
{
  ATerm p_13 = NULL,t_13 = NULL,u_13 = NULL;
  t = r_18;
  t = Sym2Strs_0_0(t);
  t_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_6)), t_13), (ATerm) ATinsert(ATempty, term_j_6));
  t = concat_0_0(t);
  u_13 = t;
  t = SSL_concat_strings(u_13);
  p_13 = t;
  t = SSL_mkterm(p_13, q_18);
  return(t);
}
ATerm topdown_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = topdown_1_0(f_97, t);
    return(t);
  }
  t = f_97(t);
  t = SRTS_all(s_0, t);
  return(t);
}
static ATerm g_5 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm v_13 = NULL;
  t = SSL_fputc(k_47, l_47);
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_13);
  return(t);
}
static ATerm h_5 (ATerm p_31, ATerm q_31, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_write_term_to_stream_text(p_31, q_31);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
static ATerm j_5 (ATerm i_103 (ATerm), ATerm k_230, ATerm v_31, ATerm t)
{
  ATerm c_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_230, term_l_6);
  t = n_5(t);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_14, v_31);
  t = i_103(t);
  t = fclose_0_0(t);
  t = v_31;
  return(t);
}
static ATerm i_5 (ATerm l_31, ATerm m_31, ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_write_term_to_stream_baf(l_31, m_31);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm t_14 = NULL,v_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(match_cons(p_6, sym_Stream_1))
        {
          t_14 = ATgetArgument(p_6, 0);
        }
      else
        _fail(t);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(t_14, v_14, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm w_14 = NULL,z_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(match_cons(q_6, sym_Stream_1))
        {
          c_15 = ATgetArgument(q_6, 0);
        }
      else
        _fail(t);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(c_15, d_15, t);
  w_14 = t;
  t = term_s_6;
  z_14 = t;
  t = w_14;
  if(match_cons(t, sym_Stream_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, w_14);
  t = g_5(z_14, b_15, t);
  return(t);
}
ATerm output_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,i_14 = NULL;
  t = n_122(t);
  i_14 = t;
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_14 = NULL,n_14 = NULL;
        t = term_w_6;
        l_14 = t;
        t = term_y_6;
        n_14 = t;
        t = term_b_7;
        t = t_5(l_14, n_14, t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = term_c_7;
      }
  }
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_14, i_14);
  {
    ATerm e_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,s_14 = NULL;
        t = term_w_6;
        r_14 = t;
        t = term_i_7;
        s_14 = t;
        t = term_j_7;
        t = t_5(r_14, s_14, t);
        t = (ATerm) ATmakeAppl(sym__2, g_14, i_14);
        LocalPopChoice(h_7);
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm l_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_5(t_0, g_14, i_14, t);
      }
    else
      {
        t = e_7;
        if(match_cons(t, sym__2))
          {
            ATerm m_7 = ATgetArgument(t, 0);
            ATerm u_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_5(u_0, g_14, i_14, t);
      }
  }
  return(t);
}
static ATerm c_16 (ATerm o_15, ATerm t)
{
  t = SSL_fclose(o_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_15 = NULL,v_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_15 = ATgetArgument(t, 0);
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_15);
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = c_16(v_15, t);
          }
      }
    }
  else
    {
      t = c_16(v_15, t);
    }
  return(t);
}
static ATerm k_5 (ATerm r_31, ATerm t)
{
  t = SSL_read_term_from_stream(r_31);
  return(t);
}
static ATerm l_5 (ATerm o_45, ATerm p_45, ATerm t)
{
  t = SSL_strcat(o_45, p_45);
  return(t);
}
static ATerm m_5 (ATerm m_47, ATerm n_47, ATerm t)
{
  ATerm d_16 = NULL;
  t = SSL_fopen(m_47, n_47);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_stdin_stream();
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  t = SSL_stdout_stream();
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_16 = NULL;
  t = SSL_stderr_stream();
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_16);
  return(t);
}
static ATerm a_18 (ATerm o_16, ATerm t)
{
  ATerm r_16 = NULL;
  t = SSL_explode_term(o_16);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            r_16 = ATgetFirst((ATermList) y_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_18 (ATerm w_16, ATerm x_16, ATerm a_17, ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,e_17 = NULL,j_17 = NULL,m_6 = NULL;
  t = SSLgetAnnotations(a_17);
  e_17 = t;
  t = w_16;
  if(match_cons(t, sym_Path_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_17, x_16);
  m_6 = t;
  t = SSLsetAnnotations(m_6, e_17);
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(b_17, c_17, t);
  return(t);
}
static ATerm e_18 (ATerm l_17, ATerm m_17, ATerm n_17, ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,u_17 = NULL,r_6 = NULL;
  t = SSLgetAnnotations(n_17);
  q_17 = t;
  t = SSL_is_string(l_17);
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_17, m_17);
  r_6 = t;
  t = SSLsetAnnotations(r_6, q_17);
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(o_17, p_17, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_18(x_17, t);
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            {
              ATerm e_8 = t;
              int f_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_18(y_17, z_17, x_17, t);
                  LocalPopChoice(f_8);
                }
              else
                {
                  t = e_8;
                  t = e_18(y_17, z_17, x_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_18(x_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_18 = NULL,k_18 = NULL,l_18 = NULL,u_18 = NULL;
  u_18 = t;
  {
    ATerm g_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_18, term_k_8);
        t = n_5(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = g_8;
        {
          ATerm z_5 = NULL,b_6 = NULL;
          t = term_l_8;
          b_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_8, u_18);
          t = l_5(b_6, u_18, t);
          z_5 = t;
          t = SSL_perror(z_5);
          _fail(t);
        }
      }
  }
  k_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(l_18, t);
  g_18 = t;
  t = k_18;
  t = fclose_0_0(t);
  t = g_18;
  return(t);
}
ATerm input_1_0 (ATerm o_122 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_18 = NULL,y_18 = NULL;
      t = term_w_6;
      x_18 = t;
      t = term_p_8;
      y_18 = t;
      t = term_r_8;
      t = t_5(x_18, y_18, t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      t = term_u_8;
    }
  t = ReadFromFile_0_0(t);
  t = o_122(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  z_18 = t;
  t = term_v_8;
  t = whoami_0_0(t);
  a_19 = t;
  t = term_y_8;
  c_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), a_19), term_b_9);
  d_19 = t;
  t = SSL_printnl(c_19, d_19);
  t = term_d_9;
  b_19 = t;
  t = SSL_exit(b_19);
  t = z_18;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  if(match_string(t, "-k"))
    {
      t = g_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_19;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  t = SSL_string_to_int(h_19);
  i_19 = t;
  t = term_e_9;
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, i_19);
  t = w_5(j_19, i_19, t);
  t = h_19;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_0, w_0, b_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm n_19 = NULL;
  n_19 = t;
  if(match_string(t, "-S"))
    {
      t = n_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_19;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm o_19 = NULL,v_19 = NULL;
  t = term_g_9;
  o_19 = t;
  t = term_h_9;
  v_19 = t;
  t = term_i_9;
  t = w_5(o_19, v_19, t);
  t = term_k_9;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  t = SSL_string_to_int(y_19);
  z_19 = t;
  t = term_g_9;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, z_19);
  t = w_5(a_20, z_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_19);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_m_9;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  t = term_n_9;
  b_20 = t;
  t = term_v_8;
  c_20 = t;
  t = term_o_9;
  t = w_5(b_20, c_20, t);
  t = term_p_9;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_1, d_1, f_1, t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = r_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_1, i_1, j_1, t);
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            t = Option_3_0(l_1, n_1, o_1, t);
          }
      }
    }
  return(t);
}
static ATerm w_5 (ATerm e_66, ATerm f_66, ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  t = term_w_6;
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_6, e_66, f_66);
  t = lookup_table_0_1(d_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(e_66, f_66, e_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_6, e_66, f_66);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_20 = NULL,r_20 = NULL,s_20 = NULL;
      t = term_v_8;
      t = g_0(t);
      o_20 = t;
      t = term_x_9;
      r_20 = t;
      t = term_y_9;
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_y_9, o_20);
      t = u_5(r_20, s_20, o_20, t);
      _fail(t);
    }
  else
    {
      ATerm v_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_20 = ATgetFirst((ATermList) t);
          n_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_20;
      t = d_0(t);
      t = term_v_8;
      t = f_0(t);
      v_20 = t;
      t = (ATerm) ATinsert(CheckATermList(n_20), v_20);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  if(match_string(t, "-o"))
    {
      t = x_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_20;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  t = term_y_6;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, z_20);
  t = w_5(a_21, z_20, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_20);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, r_1, s_1, t);
  return(t);
}
static ATerm u_5 (ATerm q_52, ATerm r_52, ATerm p_52, ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_52, r_52);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_10 = ATgetArgument(t, 0);
            ATerm g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_52, r_52);
        t = t_5(q_52, r_52, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATempty;
      }
  }
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_52, r_52, (ATerm) ATinsert(CheckATermList(d_21), p_52));
  t = lookup_table_0_1(q_52, t);
  i_21 = t;
  t = (ATerm) ATinsert(CheckATermList(d_21), p_52);
  g_21 = t;
  t = i_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(r_52, g_21, h_21, t);
  t = c_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_21 = NULL,a_22 = NULL,b_22 = NULL;
      t = term_v_8;
      t = o_0(t);
      x_21 = t;
      t = term_x_9;
      a_22 = t;
      t = term_y_9;
      b_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_9, term_y_9, x_21);
      t = u_5(a_22, b_22, x_21, t);
      _fail(t);
    }
  else
    {
      ATerm h_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_21 = ATgetFirst((ATermList) t);
          u_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_21;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_21 = ATgetFirst((ATermList) t);
          w_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_21;
      t = l_0(t);
      t = v_21;
      t = m_0(t);
      h_22 = t;
      t = (ATerm) ATinsert(CheckATermList(w_21), h_22);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  if(match_string(t, "-i"))
    {
      t = m_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_22;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  n_22 = t;
  t = term_p_8;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, n_22);
  t = w_5(o_22, n_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_22);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_1, v_1, w_1, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,t_22 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_8;
  t = whoami_0_0(t);
  p_22 = t;
  t = term_y_8;
  r_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_10), p_22);
  t_22 = t;
  t = SSL_printnl(r_22, t_22);
  t = term_d_9;
  q_22 = t;
  t = SSL_exit(q_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL;
  t = term_w_6;
  u_22 = t;
  t = term_l_10;
  v_22 = t;
  t = term_m_10;
  t = t_5(u_22, v_22, t);
  return(t);
}
static ATerm o_5 (ATerm z_50, ATerm a_51, ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_50, a_51);
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      t = SSL_addr(z_50, a_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_110 (ATerm), ATerm r_110 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,g_23 = NULL,h_23 = NULL;
  d_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_23;
      t = q_110(t);
    }
  else
    {
      ATerm n_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_23 = ATgetFirst((ATermList) t);
          h_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_23;
      t = foldr_2_0(q_110, r_110, t);
      n_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_23, n_23);
      t = r_110(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_h_9;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      o_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(n_6, o_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_23 = NULL,g_6 = NULL,h_6 = NULL;
  t = times_0_0(t);
  h_6 = t;
  t = SSL_explode_term(h_6);
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6;
  t = foldr_2_0(x_1, z_1, t);
  t_23 = t;
  t = SSL_TicksToSeconds(t_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym__2))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_24;
        if((n_24 != t))
          {
            _fail(t);
          }
        t = m_24;
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = (ATerm) ATmakeAppl(sym__2, n_24, o_24);
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_24, o_24);
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              t = SSL_gtr(n_24, o_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_24, o_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_119 (ATerm), ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
        t = term_w_6;
        v_24 = t;
        t = term_g_9;
        w_24 = t;
        t = term_w_10;
        t = t_5(v_24, w_24, t);
        u_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_24, term_d_9);
        t = geq_0_0(t);
        t = s_24;
        t = o_119(t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = s_24;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL;
  t = run_time_0_0(t);
  y_24 = t;
  t = term_v_8;
  t = whoami_0_0(t);
  z_24 = t;
  t = term_y_8;
  b_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_10), y_24), term_x_10), z_24);
  c_25 = t;
  t = SSL_printnl(b_25, c_25);
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_10), y_24), term_x_10), z_24));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_9;
  d_25 = t;
  t = SSL_exit(d_25);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_25;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_25 = ATgetArgument(t, 0);
          {
            ATerm n_7 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(o_25);
            n_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_25);
            v_6 = t;
            t = SSLsetAnnotations(v_6, n_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_25;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_122 (ATerm), ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_25 = NULL,h_25 = NULL;
      t = term_w_6;
      g_25 = t;
      t = term_e_11;
      h_25 = t;
      t = term_f_11;
      t = t_5(g_25, h_25, t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = fetch_1_0(c_2, t);
    }
  t = e_122(t);
  return(t);
}
static ATerm x_5 (ATerm i_57, ATerm j_57, ATerm k_57, ATerm t)
{
  ATerm q_25 = NULL;
  t = SSL_hashtable_put(k_57, i_57, j_57);
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_25);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_54, ATerm t)
{
  ATerm f_26 = NULL;
  t = table_hashtable_0_0(t);
  f_26 = t;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL;
        t = f_26;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_5(c_54, b_8, t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          ATerm i_8 = NULL;
          t = c_54;
          t = table_create_0_0(t);
          t = f_26;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_5(c_54, i_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm i_26 = NULL;
  t = SSL_hashtable_create(q_57, r_57);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_26);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL;
  j_26 = t;
  t = term_i_11;
  n_26 = t;
  t = term_j_11;
  o_26 = t;
  t = j_26;
  t = new_hashtable_0_2(n_26, o_26, t);
  k_26 = t;
  t = j_26;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(j_26, k_26, l_26, t);
  t = j_26;
  return(t);
}
static ATerm q_5 (ATerm n_57, ATerm o_57, ATerm t)
{
  ATerm p_26 = NULL;
  t = SSL_hashtable_remove(o_57, n_57);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_26);
  return(t);
}
static ATerm r_5 (ATerm s_57, ATerm t)
{
  ATerm q_26 = NULL;
  t = SSL_hashtable_destroy(s_57);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_26);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_table_hashtable();
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_26);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  s_26 = t;
  t = table_hashtable_0_0(t);
  t_26 = t;
  t = lookup_table_0_1(s_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(v_26, t);
  t = t_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(s_26, u_26, t);
  t = s_26;
  return(t);
}
ATerm map_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
    h_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_27;
      }
    else
      {
        ATerm t_8 = NULL,w_8 = NULL,x_8 = NULL,x_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_27 = ATgetFirst((ATermList) t);
            j_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_27);
        t_8 = t;
        t = i_27;
        t = r_103(t);
        w_8 = t;
        t = j_27;
        t = k_27(t);
        x_8 = t;
        t = (ATerm) ATinsert(CheckATermList(x_8), w_8);
        x_6 = t;
        t = SSLsetAnnotations(x_6, t_8);
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_27 = NULL,t_27 = NULL;
        static ATerm d_2 (ATerm t);
        static ATerm d_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_27)), not_null(t_27));
          return(t);
        }
        t = o_27;
        t = j_0(t);
        if(((s_27 != NULL) && (s_27 != t)))
          _fail(t);
        else
          s_27 = t;
        t = n_27;
        t = h_0(t);
        if(((t_27 != NULL) && (t_27 != t)))
          _fail(t);
        else
          t_27 = t;
        t = o_27;
        t = reverse_acc_2_0(h_0, d_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_8;
      t = j_0(t);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,z_6 = NULL;
  b_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_28);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_28);
  z_6 = t;
  t = SSLsetAnnotations(z_6, z_27);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_28), term_p_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL;
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_27 = NULL,y_27 = NULL;
      t = term_w_6;
      x_27 = t;
      t = term_l_10;
      y_27 = t;
      t = term_m_10;
      t = t_5(x_27, y_27, t);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = fetch_1_0(e_2, t);
    }
  t = term_s_11;
  t = echo_0_0(t);
  t = term_x_9;
  v_27 = t;
  t = term_y_9;
  w_27 = t;
  t = term_t_11;
  t = t_5(v_27, w_27, t);
  t = reverse_acc_2_0(_id, f_2, t);
  t = map_1_0(g_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  static ATerm a_29 (ATerm t);
  static ATerm a_29 (ATerm t)
  {
    ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
    x_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_28 = ATgetFirst((ATermList) t);
        z_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_9 = NULL,s_9 = NULL,o_7 = NULL;
          t = SSLgetAnnotations(x_28);
          j_9 = t;
          t = y_28;
          t = b_104(t);
          s_9 = t;
          t = (ATerm) ATinsert(CheckATermList(z_28), s_9);
          o_7 = t;
          t = SSLsetAnnotations(o_7, j_9);
          LocalPopChoice(w_11);
        }
      else
        {
          t = u_11;
          {
            ATerm h_10 = NULL,k_10 = NULL,z_7 = NULL;
            t = SSLgetAnnotations(x_28);
            h_10 = t;
            t = z_28;
            t = a_29(t);
            k_10 = t;
            t = (ATerm) ATinsert(CheckATermList(k_10), y_28);
            z_7 = t;
            t = SSLsetAnnotations(z_7, h_10);
          }
        }
    }
    return(t);
  }
  t = a_29(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
  e_29 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_12 = ATgetFirst((ATermList) t);
                ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_29;
          }
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = (ATerm) ATinsert(ATempty, e_29);
      }
  }
  f_29 = t;
  t = term_c_7;
  g_29 = t;
  t = SSL_printnl(g_29, f_29);
  t = e_29;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  t = term_w_6;
  k_29 = t;
  t = term_l_10;
  l_29 = t;
  t = term_m_10;
  t = t_5(k_29, l_29, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_5 (ATerm l_57, ATerm m_57, ATerm t)
{
  t = SSL_hashtable_get(m_57, l_57);
  return(t);
}
static ATerm t_5 (ATerm j_54, ATerm k_54, ATerm t)
{
  ATerm m_29 = NULL;
  t = lookup_table_0_1(j_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(k_54, m_29, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  t = term_f_12;
  o_29 = t;
  t = term_v_8;
  p_29 = t;
  t = term_h_12;
  t = w_5(o_29, p_29, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_i_12;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  t = term_f_12;
  s_29 = t;
  t = term_v_8;
  t_29 = t;
  t = term_h_12;
  t = w_5(s_29, t_29, t);
  t = term_j_12;
  q_29 = t;
  t = term_v_8;
  r_29 = t;
  t = term_m_12;
  t = w_5(q_29, r_29, t);
  t = term_n_12;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_2, i_2, l_2, t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = Option_3_0(m_2, n_2, p_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_79 (ATerm), ATerm q_79 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,h_8 = NULL;
  z_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_29 = ATgetFirst((ATermList) t);
      w_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_29);
  u_29 = t;
  t = v_29;
  t = p_79(t);
  x_29 = t;
  t = w_29;
  t = q_79(t);
  y_29 = t;
  t = (ATerm) ATinsert(CheckATermList(y_29), x_29);
  h_8 = t;
  t = SSLsetAnnotations(h_8, u_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_124 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,j_30 = NULL,k_30 = NULL,o_8 = NULL;
  e_30 = t;
  {
    ATerm r_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_12;
        t = c_124(t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = r_12;
      }
  }
  t = e_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_30 = ATgetFirst((ATermList) t);
      h_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_30);
  f_30 = t;
  t = term_l_10;
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, g_30);
  t = w_5(k_30, g_30, t);
  t = h_30;
  {
    static ATerm u_30 (ATerm t);
    static ATerm u_30 (ATerm t)
    {
      ATerm w_12 = t;
      int x_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_30 = NULL;
              n_30 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_30;
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
              t = c_124(t);
              t = Cons_2_0(_id, u_30, t);
            }
          LocalPopChoice(x_12);
        }
      else
        {
          t = w_12;
          {
            ATerm q_30 = NULL,r_30 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_30 = ATgetFirst((ATermList) t);
                r_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATmakeAppl(sym_Undefined_1, q_30));
          }
        }
      return(t);
    }
    t = u_30(t);
  }
  j_30 = t;
  t = (ATerm) ATinsert(CheckATermList(j_30), (ATerm) ATmakeAppl(sym_Program_1, g_30));
  o_8 = t;
  t = SSLsetAnnotations(o_8, f_30);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  if(match_string(t, "--help"))
    {
      t = h_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_31;
        }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  t = term_e_11;
  i_31 = t;
  t = term_v_8;
  j_31 = t;
  t = term_c_13;
  t = w_5(i_31, j_31, t);
  t = term_d_13;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_e_13;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_124 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  b_31 = t;
  t = term_x_9;
  c_31 = t;
  t = term_f_13;
  t = lookup_table_0_1(c_31, t);
  g_31 = t;
  t = term_y_9;
  d_31 = t;
  t = (ATerm) ATempty;
  e_31 = t;
  t = g_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(d_31, e_31, f_31, t);
  t = b_31;
  {
    static ATerm s_2 (ATerm t);
    static ATerm s_2 (ATerm t)
    {
      ATerm g_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_124(t);
          LocalPopChoice(j_13);
        }
      else
        {
          t = g_13;
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_2, u_2, v_2, t);
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_2, t);
  }
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_32 = NULL;
        b_32 = t;
        {
          ATerm o_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_10 = NULL;
              t = b_32;
              {
                ATerm r_13 = t;
                int s_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_11 = NULL,b_11 = NULL;
                    t = term_w_6;
                    a_11 = t;
                    t = term_e_11;
                    b_11 = t;
                    t = term_f_11;
                    t = t_5(a_11, b_11, t);
                    LocalPopChoice(s_13);
                  }
                else
                  {
                    t = r_13;
                    t = fetch_1_0(w_2, t);
                  }
              }
              t = b_32;
              t = default_system_usage_0_0(t);
              t = term_h_9;
              y_10 = t;
              t = SSL_exit(y_10);
              LocalPopChoice(q_13);
            }
          else
            {
              t = o_13;
              {
                ATerm l_11 = NULL,o_11 = NULL,v_11 = NULL;
                t = term_w_6;
                o_11 = t;
                t = term_f_12;
                v_11 = t;
                t = term_w_13;
                t = t_5(o_11, v_11, t);
                t = b_32;
                t = default_system_about_0_0(t);
                t = term_h_9;
                l_11 = t;
                t = SSL_exit(l_11);
              }
            }
        }
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
              static ATerm x_2 (ATerm t);
              static ATerm x_2 (ATerm t)
              {
                ATerm f_32 = NULL,i_32 = NULL,j_32 = NULL,q_8 = NULL;
                j_32 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_32 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_32);
                f_32 = t;
                t = i_32;
                if(((z_30 != NULL) && (z_30 != t)))
                  _fail(t);
                else
                  z_30 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_32);
                q_8 = t;
                t = SSLsetAnnotations(q_8, f_32);
                return(t);
              }
              t = fetch_1_0(x_2, t);
              t = term_y_8;
              d_32 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_30)), term_a_14);
              e_32 = t;
              t = SSL_printnl(d_32, e_32);
              t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_30)), term_a_14));
              t = default_system_usage_0_0(t);
              t = term_d_9;
              c_32 = t;
              t = SSL_exit(c_32);
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
            }
        }
      }
  }
  a_31 = t;
  t = term_x_9;
  t = table_destroy_0_0(t);
  t = a_31;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm j_122 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  t = parse_options_1_0(g_122, t);
  o_32 = t;
  t = term_b_14;
  t = table_create_0_0(t);
  t = term_b_14;
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_e_14, o_32);
  t = lookup_table_0_1(p_32, t);
  s_32 = t;
  t = term_e_14;
  q_32 = t;
  t = s_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(q_32, o_32, r_32, t);
  t = o_32;
  t = i_122(t);
  {
    ATerm f_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_122, t);
        LocalPopChoice(h_14);
      }
    else
      {
        t = f_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_122(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm m_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(o_14);
    }
  else
    {
      t = m_14;
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm u_14 = t;
              int x_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_3, i_3, j_3, t);
                  LocalPopChoice(x_14);
                }
              else
                {
                  t = u_14;
                  {
                    ATerm y_14 = t;
                    int a_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_15);
                      }
                    else
                      {
                        t = y_14;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = input_1_0(m_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL;
  t = term_i_7;
  x_32 = t;
  t = term_v_8;
  y_32 = t;
  t = term_e_15;
  t = w_5(x_32, y_32, t);
  t = term_f_15;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_g_15;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = output_1_0(n_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = topdown_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_33 = ATgetArgument(t, 0);
      f_33 = ATgetArgument(t, 1);
      t = g_33;
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                c_33 = ATgetArgument(t, 0);
                d_33 = ATgetArgument(t, 1);
                {
                  ATerm j_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_15);
            {
              ATerm k_15 = t;
              int l_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_33;
                  t = f_5(c_33, d_33, f_33, t);
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = k_15;
                  t = h_33;
                }
            }
          }
        else
          {
            t = h_15;
            t = h_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          g_33 = ATgetArgument(t, 0);
          t = g_33;
        }
      else
        {
          t = h_33;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_2, default_usage_0_0, _id, g_3, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_t_6;
ATerm term_m_6;
ATerm term_k_6;
ATerm term_g_6;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_x_4;
ATerm term_r_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_w_3;
ATerm term_s_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_z_6);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_j_7);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_q_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_i_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_w_8);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_m_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_h_9);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_f_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_z_9);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_w_8);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_w_8);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_w_8);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__3, term_y_9, term_z_9, (ATerm) ATempty);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_x_6, term_g_12);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_w_8);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm k_97 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_104 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_96 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm g_5 (ATerm n_0, ATerm j_18, ATerm i_18, ATerm t);
ATerm topdown_1_0 (ATerm w_89 (ATerm), ATerm t);
static ATerm h_5 (ATerm e_35, ATerm f_35, ATerm t);
static ATerm i_5 (ATerm z_19, ATerm a_20, ATerm t);
static ATerm k_5 (ATerm z_95 (ATerm), ATerm x_155, ATerm f_20, ATerm t);
static ATerm j_5 (ATerm v_19, ATerm w_19, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm output_1_0 (ATerm e_116 (ATerm), ATerm t);
static ATerm d_16 (ATerm p_15, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_5 (ATerm b_20, ATerm t);
static ATerm m_5 (ATerm x_33, ATerm y_33, ATerm t);
static ATerm n_5 (ATerm g_35, ATerm h_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_18 (ATerm p_16, ATerm t);
static ATerm e_18 (ATerm x_16, ATerm y_16, ATerm b_17, ATerm t);
static ATerm f_18 (ATerm m_17, ATerm n_17, ATerm o_17, ATerm t);
static ATerm o_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm f_116 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_5 (ATerm l_53, ATerm m_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_5 (ATerm d_58, ATerm e_58, ATerm c_58, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_5 (ATerm z_37, ATerm a_38, ATerm t);
ATerm foldr_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_113 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm need_help_1_0 (ATerm v_115 (ATerm), ATerm t);
static ATerm y_5 (ATerm v_62, ATerm w_62, ATerm x_62, ATerm t);
ATerm lookup_table_0_1 (ATerm p_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm d_63, ATerm e_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_5 (ATerm a_63, ATerm b_63, ATerm t);
static ATerm s_5 (ATerm f_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_96 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_5 (ATerm y_62, ATerm z_62, ATerm t);
static ATerm u_5 (ATerm w_59, ATerm x_59, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_117 (ATerm), ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm parse_options_1_0 (ATerm x_117 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
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
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_1 = ATgetFirst((ATermList) t);
      b_1 = (ATerm) ATgetNext((ATermList) t);
      t = b_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_0 = ATgetFirst((ATermList) t);
          z_0 = (ATerm) ATgetNext((ATermList) t);
          t = y_0;
          if(match_int(t, 34))
            {
              t = a_1;
              if(match_int(t, 92))
                {
                  ATerm q_0 = t;
                  int q_3 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 = NULL;
                      t = z_0;
                      t = De_Escape_0_0(t);
                      f_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_1), term_s_3);
                      LocalPopChoice(q_3);
                    }
                  else
                    {
                      t = q_0;
                      {
                        ATerm i_1 = NULL;
                        t = b_1;
                        t = De_Escape_0_0(t);
                        i_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(i_1), a_1);
                      }
                    }
                }
              else
                {
                  ATerm l_1 = NULL;
                  t = b_1;
                  t = De_Escape_0_0(t);
                  l_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_1), a_1);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = a_1;
                  if(match_int(t, 92))
                    {
                      ATerm t_3 = t;
                      int v_3 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_1 = NULL;
                          t = z_0;
                          t = De_Escape_0_0(t);
                          n_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_1), term_w_3);
                          LocalPopChoice(v_3);
                        }
                      else
                        {
                          t = t_3;
                          {
                            ATerm q_1 = NULL;
                            t = b_1;
                            t = De_Escape_0_0(t);
                            q_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(q_1), a_1);
                          }
                        }
                    }
                  else
                    {
                      ATerm z_1 = NULL;
                      t = b_1;
                      t = De_Escape_0_0(t);
                      z_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(z_1), a_1);
                    }
                }
              else
                {
                  ATerm l_2 = NULL;
                  t = b_1;
                  t = De_Escape_0_0(t);
                  l_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_2), a_1);
                }
            }
        }
      else
        {
          ATerm p_2 = NULL;
          t = b_1;
          t = De_Escape_0_0(t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), a_1);
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
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL;
  c_3 = t;
  t = SSL_explode_string(c_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_3 = ATgetFirst((ATermList) t);
      g_3 = (ATerm) ATgetNext((ATermList) t);
      t = g_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_3 = ATgetFirst((ATermList) t);
          e_3 = (ATerm) ATgetNext((ATermList) t);
          t = d_3;
          if(match_int(t, 34))
            {
              t = f_3;
              if(match_int(t, 92))
                {
                  ATerm x_3 = t;
                  int y_3 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_3 = NULL;
                      t = e_3;
                      t = De_Escape_0_0(t);
                      l_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_3), term_s_3);
                      LocalPopChoice(y_3);
                    }
                  else
                    {
                      t = x_3;
                      {
                        ATerm r_3 = NULL;
                        t = g_3;
                        t = De_Escape_0_0(t);
                        r_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(r_3), f_3);
                      }
                    }
                }
              else
                {
                  ATerm u_3 = NULL;
                  t = g_3;
                  t = De_Escape_0_0(t);
                  u_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_3), f_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = f_3;
                  if(match_int(t, 92))
                    {
                      ATerm a_4 = t;
                      int b_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_3 = NULL;
                          t = e_3;
                          t = De_Escape_0_0(t);
                          z_3 = t;
                          t = (ATerm) ATinsert(CheckATermList(z_3), term_w_3);
                          LocalPopChoice(b_4);
                        }
                      else
                        {
                          t = a_4;
                          {
                            ATerm f_4 = NULL;
                            t = g_3;
                            t = De_Escape_0_0(t);
                            f_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(f_4), f_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm l_4 = NULL;
                      t = g_3;
                      t = De_Escape_0_0(t);
                      l_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_4), f_3);
                    }
                }
              else
                {
                  ATerm q_4 = NULL;
                  t = g_3;
                  t = De_Escape_0_0(t);
                  q_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_4), f_3);
                }
            }
        }
      else
        {
          ATerm w_4 = NULL;
          t = g_3;
          t = De_Escape_0_0(t);
          w_4 = t;
          t = (ATerm) ATinsert(CheckATermList(w_4), f_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  b_3 = t;
  t = SSL_implode_string(b_3);
  return(t);
}
ATerm at_last_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  static ATerm h_7 (ATerm t)
  {
    ATerm b_7 = NULL,e_7 = NULL,g_7 = NULL;
    b_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_7 = ATgetFirst((ATermList) t);
        g_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_4 = t;
      int d_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_0 = NULL,b_6 = NULL;
          t = SSLgetAnnotations(b_7);
          s_0 = t;
          t = g_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_7), e_7);
          b_6 = t;
          t = SSLsetAnnotations(b_6, s_0);
          t = k_97(t);
          LocalPopChoice(d_4);
        }
      else
        {
          t = c_4;
          {
            ATerm v_1 = NULL,b_2 = NULL,e_6 = NULL;
            t = SSLgetAnnotations(b_7);
            v_1 = t;
            t = g_7;
            t = h_7(t);
            b_2 = t;
            t = (ATerm) ATinsert(CheckATermList(b_2), e_7);
            e_6 = t;
            t = SSLsetAnnotations(e_6, v_1);
          }
        }
    }
    return(t);
  }
  t = h_7(t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_4 = ATgetFirst((ATermList) t);
      if(((ATgetType(g_4) != AT_INT) || (ATgetInt((ATermInt) g_4) != 34)))
        _fail(t);
      {
        ATerm h_4 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(h_4) != AT_LIST) || !(ATisEmpty(h_4))))
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
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
  u_7 = t;
  t = SSL_explode_string(u_7);
  q_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_7 = ATgetFirst((ATermList) t);
      {
        ATerm i_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_7;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = q_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_4 = ATgetFirst((ATermList) t);
      s_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_7;
  t = at_last_1_0(f_0, t);
  r_7 = t;
  t = SSL_implode_string(r_7);
  return(t);
}
ATerm filter_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm t_8 = NULL,a_9 = NULL,b_9 = NULL;
  t_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_9 = ATgetFirst((ATermList) t);
          b_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_4 = t;
        int m_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 = NULL,r_2 = NULL,s_2 = NULL,j_6 = NULL;
            t = SSLgetAnnotations(t_8);
            k_2 = t;
            t = a_9;
            t = l_104(t);
            r_2 = t;
            t = b_9;
            t = filter_1_0(l_104, t);
            s_2 = t;
            t = (ATerm) ATinsert(CheckATermList(s_2), r_2);
            j_6 = t;
            t = SSLsetAnnotations(j_6, k_2);
            LocalPopChoice(m_4);
          }
        else
          {
            t = k_4;
            t = b_9;
            t = filter_1_0(l_104, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  static ATerm d_10 (ATerm t)
  {
    ATerm x_9 = NULL,a_10 = NULL,b_10 = NULL;
    b_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_9 = ATgetFirst((ATermList) t);
        a_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm a_3 = NULL,m_3 = NULL,l_6 = NULL;
          t = SSLgetAnnotations(b_10);
          a_3 = t;
          t = a_10;
          t = d_10(t);
          m_3 = t;
          t = (ATerm) ATinsert(CheckATermList(m_3), x_9);
          l_6 = t;
          t = SSLsetAnnotations(l_6, a_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_10;
        t = z_96(t);
      }
    return(t);
  }
  t = d_10(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_n_4);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_4);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_p_4);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL,o_11 = NULL;
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
              t = (ATerm) ATinsert(ATempty, term_r_4);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  l_11 = ATgetArgument(t, 0);
                  n_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(n_11), l_11);
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
                      t = at_end_1_0(i_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          l_11 = ATgetArgument(t, 0);
                          t = l_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(k_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              l_11 = ATgetArgument(t, 0);
                              t = l_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(r_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  l_11 = ATgetArgument(t, 0);
                                  n_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm a_12 = NULL,b_12 = NULL;
                                    t = l_11;
                                    t = Sym2Strs_0_0(t);
                                    a_12 = t;
                                    t = n_11;
                                    t = Sym2Strs_0_0(t);
                                    b_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_4)), b_12), a_12);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      l_11 = ATgetArgument(t, 0);
                                      n_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm e_12 = NULL,f_12 = NULL;
                                        t = l_11;
                                        t = Sym2Strs_0_0(t);
                                        e_12 = t;
                                        t = n_11;
                                        t = Sym2Strs_0_0(t);
                                        f_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_4)), f_12), e_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm s_4 = t;
                                      int t_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              l_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm u_4 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(t_4);
                                          {
                                            ATerm h_12 = NULL;
                                            t = l_11;
                                            t = Sym2Strs_0_0(t);
                                            h_12 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_4)), h_12);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = s_4;
                                          {
                                            ATerm y_4 = t;
                                            int z_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    l_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm a_5 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(z_4);
                                                {
                                                  ATerm l_12 = NULL,m_12 = NULL;
                                                  t = l_11;
                                                  t = Sym2Strs_0_0(t);
                                                  l_12 = t;
                                                  t = n_11;
                                                  t = Sym2Strs_0_0(t);
                                                  m_12 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_4)), m_12), l_12);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = y_4;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    l_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm t_12 = NULL,u_12 = NULL;
                                                      t = l_11;
                                                      t = Sym2Strs_0_0(t);
                                                      t_12 = t;
                                                      t = n_11;
                                                      t = Sym2Strs_0_0(t);
                                                      u_12 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_12), (ATerm) ATinsert(ATempty, term_b_5)), t_12);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        l_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_12 = NULL,a_13 = NULL;
                                                          t = l_11;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          z_12 = t;
                                                          t = n_11;
                                                          t = Sym2Strs_0_0(t);
                                                          a_13 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_13), (ATerm) ATinsert(ATempty, term_c_5)), z_12);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            l_11 = ATgetArgument(t, 0);
                                                            n_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm i_13 = NULL,j_13 = NULL;
                                                              t = l_11;
                                                              t = Sym2Strs_0_0(t);
                                                              i_13 = t;
                                                              t = n_11;
                                                              t = Sym2Strs_0_0(t);
                                                              j_13 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_13), (ATerm) ATinsert(ATempty, term_d_5)), i_13);
                                                              t = concat_0_0(t);
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
                                                                      ATerm e_4 = NULL;
                                                                      t = l_11;
                                                                      {
                                                                        ATerm e_5 = t;
                                                                        int f_5 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(f_5);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = e_5;
                                                                          }
                                                                      }
                                                                      e_4 = t;
                                                                      t = (ATerm) ATinsert(ATempty, e_4);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    ATerm q_5 = t;
                                                                    int t_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        if(match_cons(t, sym_label_2))
                                                                          {
                                                                            l_11 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm w_5 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(t_5);
                                                                        {
                                                                          ATerm v_4 = NULL;
                                                                          t = l_11;
                                                                          {
                                                                            ATerm d_6 = t;
                                                                            int f_6 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(f_6);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = d_6;
                                                                              }
                                                                          }
                                                                          v_4 = t;
                                                                          t = (ATerm) ATinsert(ATempty, v_4);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_5;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_g_6);
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
static ATerm g_5 (ATerm n_0, ATerm j_18, ATerm i_18, ATerm t)
{
  ATerm q_13 = NULL,u_13 = NULL,v_13 = NULL;
  t = j_18;
  t = Sym2Strs_0_0(t);
  u_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_6)), u_13), (ATerm) ATinsert(ATempty, term_k_6));
  t = concat_0_0(t);
  v_13 = t;
  t = SSL_concat_strings(v_13);
  q_13 = t;
  t = SSL_mkterm(q_13, i_18);
  return(t);
}
ATerm topdown_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  static ATerm t_0 (ATerm t)
  {
    t = topdown_1_0(w_89, t);
    return(t);
  }
  t = w_89(t);
  t = SRTS_all(t_0, t);
  return(t);
}
static ATerm h_5 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm w_13 = NULL;
  t = SSL_fputc(e_35, f_35);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_13);
  return(t);
}
static ATerm i_5 (ATerm z_19, ATerm a_20, ATerm t)
{
  ATerm a_14 = NULL;
  t = SSL_write_term_to_stream_text(z_19, a_20);
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_14);
  return(t);
}
static ATerm k_5 (ATerm z_95 (ATerm), ATerm x_155, ATerm f_20, ATerm t)
{
  ATerm d_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_155, term_m_6);
  t = o_5(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_14, f_20);
  t = z_95(t);
  t = fclose_0_0(t);
  t = f_20;
  return(t);
}
static ATerm j_5 (ATerm v_19, ATerm w_19, ATerm t)
{
  ATerm e_14 = NULL;
  t = SSL_write_term_to_stream_baf(v_19, w_19);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_14);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm u_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(match_cons(q_6, sym_Stream_1))
        {
          u_14 = ATgetArgument(q_6, 0);
        }
      else
        _fail(t);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(u_14, w_14, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm x_14 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if(match_cons(r_6, sym_Stream_1))
        {
          d_15 = ATgetArgument(r_6, 0);
        }
      else
        _fail(t);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(d_15, e_15, t);
  x_14 = t;
  t = term_t_6;
  a_15 = t;
  t = x_14;
  if(match_cons(t, sym_Stream_1))
    {
      c_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, x_14);
  t = h_5(a_15, c_15, t);
  return(t);
}
ATerm output_1_0 (ATerm e_116 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,j_14 = NULL;
  t = e_116(t);
  j_14 = t;
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL,o_14 = NULL;
        t = term_x_6;
        m_14 = t;
        t = term_z_6;
        o_14 = t;
        t = term_c_7;
        t = u_5(m_14, o_14, t);
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        t = term_d_7;
      }
  }
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, j_14);
  {
    ATerm f_7 = t;
    int i_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,t_14 = NULL;
        t = term_x_6;
        s_14 = t;
        t = term_j_7;
        t_14 = t;
        t = term_k_7;
        t = u_5(s_14, t_14, t);
        t = (ATerm) ATmakeAppl(sym__2, h_14, j_14);
        LocalPopChoice(i_7);
        if(match_cons(t, sym__2))
          {
            ATerm l_7 = ATgetArgument(t, 0);
            ATerm m_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_5(u_0, h_14, j_14, t);
      }
    else
      {
        t = f_7;
        if(match_cons(t, sym__2))
          {
            ATerm n_7 = ATgetArgument(t, 0);
            ATerm v_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_5(v_0, h_14, j_14, t);
      }
  }
  return(t);
}
static ATerm d_16 (ATerm p_15, ATerm t)
{
  t = SSL_fclose(p_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_15 = NULL,w_15 = NULL;
  w_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_15 = ATgetArgument(t, 0);
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_15);
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            t = d_16(w_15, t);
          }
      }
    }
  else
    {
      t = d_16(w_15, t);
    }
  return(t);
}
static ATerm l_5 (ATerm b_20, ATerm t)
{
  t = SSL_read_term_from_stream(b_20);
  return(t);
}
static ATerm m_5 (ATerm x_33, ATerm y_33, ATerm t)
{
  t = SSL_strcat(x_33, y_33);
  return(t);
}
static ATerm n_5 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_fopen(g_35, h_35);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_16 = NULL;
  t = SSL_stdin_stream();
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_16 = NULL;
  t = SSL_stdout_stream();
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_16 = NULL;
  t = SSL_stderr_stream();
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_16);
  return(t);
}
static ATerm b_18 (ATerm p_16, ATerm t)
{
  ATerm s_16 = NULL;
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            s_16 = ATgetFirst((ATermList) z_7);
            {
              ATerm b_8 = (ATerm) ATgetNext((ATermList) z_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_18 (ATerm x_16, ATerm y_16, ATerm b_17, ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,f_17 = NULL,k_17 = NULL,n_6 = NULL;
  t = SSLgetAnnotations(b_17);
  f_17 = t;
  t = x_16;
  if(match_cons(t, sym_Path_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_17, y_16);
  n_6 = t;
  t = SSLsetAnnotations(n_6, f_17);
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(c_17, d_17, t);
  return(t);
}
static ATerm f_18 (ATerm m_17, ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,v_17 = NULL,s_6 = NULL;
  t = SSLgetAnnotations(o_17);
  r_17 = t;
  t = SSL_is_string(m_17);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, n_17);
  s_6 = t;
  t = SSLsetAnnotations(s_6, r_17);
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(p_17, q_17, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_18(y_17, t);
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            {
              ATerm f_8 = t;
              int g_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_18(z_17, a_18, y_17, t);
                  LocalPopChoice(g_8);
                }
              else
                {
                  t = f_8;
                  t = f_18(z_17, a_18, y_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_18(y_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_18 = NULL,l_18 = NULL,o_18 = NULL,t_18 = NULL;
  t_18 = t;
  {
    ATerm h_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_18, term_l_8);
        t = o_5(t);
        LocalPopChoice(k_8);
      }
    else
      {
        t = h_8;
        {
          ATerm a_6 = NULL,c_6 = NULL;
          t = term_m_8;
          c_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_8, t_18);
          t = m_5(c_6, t_18, t);
          a_6 = t;
          t = SSL_perror(a_6);
          _fail(t);
        }
      }
  }
  l_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(o_18, t);
  h_18 = t;
  t = l_18;
  t = fclose_0_0(t);
  t = h_18;
  return(t);
}
ATerm input_1_0 (ATerm f_116 (ATerm), ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18 = NULL,x_18 = NULL;
      t = term_x_6;
      w_18 = t;
      t = term_q_8;
      x_18 = t;
      t = term_s_8;
      t = u_5(w_18, x_18, t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      t = term_v_8;
    }
  t = ReadFromFile_0_0(t);
  t = f_116(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  y_18 = t;
  t = term_w_8;
  t = whoami_0_0(t);
  z_18 = t;
  t = term_z_8;
  b_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_9), z_18), term_c_9);
  c_19 = t;
  t = SSL_printnl(b_19, c_19);
  t = term_e_9;
  a_19 = t;
  t = SSL_exit(a_19);
  t = y_18;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  if(match_string(t, "-k"))
    {
      t = f_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_19;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  t = SSL_string_to_int(g_19);
  h_19 = t;
  t = term_f_9;
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, h_19);
  t = x_5(i_19, h_19, t);
  t = g_19;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_0, x_0, c_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  if(match_string(t, "-S"))
    {
      t = m_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_19;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm n_19 = NULL,t_19 = NULL;
  t = term_h_9;
  n_19 = t;
  t = term_i_9;
  t_19 = t;
  t = term_j_9;
  t = x_5(n_19, t_19, t);
  t = term_l_9;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_m_9;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm u_19 = NULL,y_19 = NULL,g_20 = NULL;
  u_19 = t;
  t = SSL_string_to_int(u_19);
  y_19 = t;
  t = term_h_9;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, y_19);
  t = x_5(g_20, y_19, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_19);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_n_9;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  t = term_o_9;
  h_20 = t;
  t = term_w_8;
  i_20 = t;
  t = term_p_9;
  t = x_5(h_20, i_20, t);
  t = term_q_9;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_1, e_1, g_1, t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = s_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_1, j_1, k_1, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = Option_3_0(m_1, o_1, p_1, t);
          }
      }
    }
  return(t);
}
static ATerm x_5 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  t = term_x_6;
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_6, l_53, m_53);
  t = lookup_table_0_1(j_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(l_53, m_53, k_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_6, l_53, m_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_20 = NULL,x_20 = NULL,y_20 = NULL;
      t = term_w_8;
      t = h_0(t);
      v_20 = t;
      t = term_y_9;
      x_20 = t;
      t = term_z_9;
      y_20 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_9, term_z_9, v_20);
      t = v_5(x_20, y_20, v_20, t);
      _fail(t);
    }
  else
    {
      ATerm d_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_20 = ATgetFirst((ATermList) t);
          u_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_20;
      t = d_0(t);
      t = term_w_8;
      t = g_0(t);
      d_21 = t;
      t = (ATerm) ATinsert(CheckATermList(u_20), d_21);
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm f_21 = NULL;
  f_21 = t;
  if(match_string(t, "-o"))
    {
      t = f_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_21;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  g_21 = t;
  t = term_z_6;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, g_21);
  t = x_5(h_21, g_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_21);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_c_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_1, s_1, t_1, t);
  return(t);
}
static ATerm v_5 (ATerm d_58, ATerm e_58, ATerm c_58, ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_58, e_58);
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_10 = ATgetArgument(t, 0);
            ATerm h_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_58, e_58);
        t = u_5(d_58, e_58, t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = (ATerm) ATempty;
      }
  }
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_58, e_58, (ATerm) ATinsert(CheckATermList(m_21), c_58));
  t = lookup_table_0_1(d_58, t);
  q_21 = t;
  t = (ATerm) ATinsert(CheckATermList(m_21), c_58);
  o_21 = t;
  t = q_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(e_58, o_21, p_21, t);
  t = l_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_22 = NULL,g_22 = NULL,j_22 = NULL;
      t = term_w_8;
      t = p_0(t);
      d_22 = t;
      t = term_y_9;
      g_22 = t;
      t = term_z_9;
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_9, term_z_9, d_22);
      t = v_5(g_22, j_22, d_22, t);
      _fail(t);
    }
  else
    {
      ATerm p_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_22 = ATgetFirst((ATermList) t);
          c_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_21;
      t = m_0(t);
      t = b_22;
      t = o_0(t);
      p_22 = t;
      t = (ATerm) ATinsert(CheckATermList(c_22), p_22);
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  if(match_string(t, "-i"))
    {
      t = r_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_22;
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm s_22 = NULL,v_22 = NULL;
  s_22 = t;
  t = term_q_8;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, s_22);
  t = x_5(v_22, s_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_22);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, w_1, x_1, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_22 = NULL,z_22 = NULL,b_23 = NULL,c_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_8;
  t = whoami_0_0(t);
  w_22 = t;
  t = term_z_8;
  b_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_10), w_22);
  c_23 = t;
  t = SSL_printnl(b_23, c_23);
  t = term_e_9;
  z_22 = t;
  t = SSL_exit(z_22);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL;
  t = term_x_6;
  d_23 = t;
  t = term_m_10;
  e_23 = t;
  t = term_n_10;
  t = u_5(d_23, e_23, t);
  return(t);
}
static ATerm p_5 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_37, a_38);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = SSL_addr(z_37, a_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,j_23 = NULL;
  g_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_23;
      t = h_103(t);
    }
  else
    {
      ATerm s_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_23 = ATgetFirst((ATermList) t);
          j_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_23;
      t = foldr_2_0(h_103, i_103, t);
      s_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_23, s_23);
      t = i_103(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_i_9;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      p_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(o_6, p_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_23 = NULL,h_6 = NULL,i_6 = NULL;
  t = times_0_0(t);
  i_6 = t;
  t = SSL_explode_term(i_6);
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      h_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6;
  t = foldr_2_0(y_1, a_2, t);
  z_23 = t;
  t = SSL_TicksToSeconds(z_23);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym__2))
    {
      u_24 = ATgetArgument(t, 0);
      v_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_24;
        if((u_24 != t))
          {
            _fail(t);
          }
        t = t_24;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = (ATerm) ATmakeAppl(sym__2, u_24, v_24);
        {
          ATerm t_10 = t;
          int u_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_24, v_24);
              LocalPopChoice(u_10);
            }
          else
            {
              t = t_10;
              t = SSL_gtr(u_24, v_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_24, v_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_113 (ATerm), ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
        t = term_x_6;
        f_25 = t;
        t = term_h_9;
        g_25 = t;
        t = term_x_10;
        t = u_5(f_25, g_25, t);
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_25, term_e_9);
        t = geq_0_0(t);
        t = c_25;
        t = f_113(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = c_25;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,l_25 = NULL,m_25 = NULL;
  t = run_time_0_0(t);
  i_25 = t;
  t = term_w_8;
  t = whoami_0_0(t);
  j_25 = t;
  t = term_z_8;
  l_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), i_25), term_y_10), j_25);
  m_25 = t;
  t = SSL_printnl(l_25, m_25);
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), i_25), term_y_10), j_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_9;
  n_25 = t;
  t = SSL_exit(n_25);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  y_25 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_25;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_25 = ATgetArgument(t, 0);
          {
            ATerm o_7 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(y_25);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_25);
            w_6 = t;
            t = SSLsetAnnotations(w_6, o_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_25;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_25 = NULL,r_25 = NULL;
      t = term_x_6;
      q_25 = t;
      t = term_f_11;
      r_25 = t;
      t = term_g_11;
      t = u_5(q_25, r_25, t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = fetch_1_0(d_2, t);
    }
  t = v_115(t);
  return(t);
}
static ATerm y_5 (ATerm v_62, ATerm w_62, ATerm x_62, ATerm t)
{
  ATerm a_26 = NULL;
  t = SSL_hashtable_put(x_62, v_62, w_62);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_26);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_59, ATerm t)
{
  ATerm j_26 = NULL;
  t = table_hashtable_0_0(t);
  j_26 = t;
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = j_26;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_5(p_59, c_8, t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        {
          ATerm j_8 = NULL;
          t = p_59;
          t = table_create_0_0(t);
          t = j_26;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_5(p_59, j_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm d_63, ATerm e_63, ATerm t)
{
  ATerm o_26 = NULL;
  t = SSL_hashtable_create(d_63, e_63);
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_26);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,x_26 = NULL,y_26 = NULL;
  t_26 = t;
  t = term_j_11;
  x_26 = t;
  t = term_k_11;
  y_26 = t;
  t = t_26;
  t = new_hashtable_0_2(x_26, y_26, t);
  u_26 = t;
  t = t_26;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(t_26, u_26, v_26, t);
  t = t_26;
  return(t);
}
static ATerm r_5 (ATerm a_63, ATerm b_63, ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_hashtable_remove(b_63, a_63);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_26);
  return(t);
}
static ATerm s_5 (ATerm f_63, ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_hashtable_destroy(f_63);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_27);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_table_hashtable();
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_27);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  c_27 = t;
  t = table_hashtable_0_0(t);
  f_27 = t;
  t = lookup_table_0_1(c_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(h_27, t);
  t = f_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(c_27, g_27, t);
  t = c_27;
  return(t);
}
ATerm map_1_0 (ATerm i_96 (ATerm), ATerm t)
{
  static ATerm w_27 (ATerm t)
  {
    ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
    t_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_27;
      }
    else
      {
        ATerm u_8 = NULL,x_8 = NULL,y_8 = NULL,y_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_27 = ATgetFirst((ATermList) t);
            v_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_27);
        u_8 = t;
        t = u_27;
        t = i_96(t);
        x_8 = t;
        t = v_27;
        t = w_27(t);
        y_8 = t;
        t = (ATerm) ATinsert(CheckATermList(y_8), x_8);
        y_6 = t;
        t = SSLsetAnnotations(y_6, u_8);
      }
    return(t);
  }
  t = w_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_27 = ATgetFirst((ATermList) t);
      a_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_28 = NULL,f_28 = NULL;
        static ATerm e_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_28)), not_null(f_28));
          return(t);
        }
        t = a_28;
        t = l_0(t);
        if(((e_28 != NULL) && (e_28 != t)))
          _fail(t);
        else
          e_28 = t;
        t = z_27;
        t = j_0(t);
        if(((f_28 != NULL) && (f_28 != t)))
          _fail(t);
        else
          f_28 = t;
        t = a_28;
        t = reverse_acc_2_0(j_0, e_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_8;
      t = l_0(t);
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,a_7 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_28);
  a_7 = t;
  t = SSLsetAnnotations(a_7, l_28);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm p_28 = NULL;
  p_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_28), term_q_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_28 = NULL,k_28 = NULL;
      t = term_x_6;
      j_28 = t;
      t = term_m_10;
      k_28 = t;
      t = term_n_10;
      t = u_5(j_28, k_28, t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      t = fetch_1_0(f_2, t);
    }
  t = term_t_11;
  t = echo_0_0(t);
  t = term_y_9;
  h_28 = t;
  t = term_z_9;
  i_28 = t;
  t = term_u_11;
  t = u_5(h_28, i_28, t);
  t = reverse_acc_2_0(_id, g_2, t);
  t = map_1_0(h_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_96 (ATerm), ATerm t)
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
      ATerm v_11 = t;
      int x_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_9 = NULL,t_9 = NULL,p_7 = NULL;
          t = SSLgetAnnotations(j_29);
          k_9 = t;
          t = k_29;
          t = s_96(t);
          t_9 = t;
          t = (ATerm) ATinsert(CheckATermList(l_29), t_9);
          p_7 = t;
          t = SSLsetAnnotations(p_7, k_9);
          LocalPopChoice(x_11);
        }
      else
        {
          t = v_11;
          {
            ATerm i_10 = NULL,l_10 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(j_29);
            i_10 = t;
            t = l_29;
            t = m_29(t);
            l_10 = t;
            t = (ATerm) ATinsert(CheckATermList(l_10), k_29);
            a_8 = t;
            t = SSLsetAnnotations(a_8, i_10);
          }
        }
    }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
  q_29 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_12 = ATgetFirst((ATermList) t);
                ATerm d_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_29;
          }
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = (ATerm) ATinsert(ATempty, q_29);
      }
  }
  r_29 = t;
  t = term_d_7;
  s_29 = t;
  t = SSL_printnl(s_29, r_29);
  t = q_29;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  t = term_x_6;
  w_29 = t;
  t = term_m_10;
  x_29 = t;
  t = term_n_10;
  t = u_5(w_29, x_29, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_5 (ATerm y_62, ATerm z_62, ATerm t)
{
  t = SSL_hashtable_get(z_62, y_62);
  return(t);
}
static ATerm u_5 (ATerm w_59, ATerm x_59, ATerm t)
{
  ATerm y_29 = NULL;
  t = lookup_table_0_1(w_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(x_59, y_29, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  t = term_g_12;
  a_30 = t;
  t = term_w_8;
  b_30 = t;
  t = term_i_12;
  t = x_5(a_30, b_30, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_j_12;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  t = term_g_12;
  e_30 = t;
  t = term_w_8;
  f_30 = t;
  t = term_i_12;
  t = x_5(e_30, f_30, t);
  t = term_k_12;
  c_30 = t;
  t = term_w_8;
  d_30 = t;
  t = term_n_12;
  t = x_5(c_30, d_30, t);
  t = term_o_12;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, j_2, m_2, t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = Option_3_0(n_2, o_2, q_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,i_8 = NULL;
  l_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  g_30 = t;
  t = h_30;
  t = w_69(t);
  j_30 = t;
  t = i_30;
  t = x_69(t);
  k_30 = t;
  t = (ATerm) ATinsert(CheckATermList(k_30), j_30);
  i_8 = t;
  t = SSLsetAnnotations(i_8, g_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,v_30 = NULL,w_30 = NULL,p_8 = NULL;
  q_30 = t;
  {
    ATerm s_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_12;
        t = y_117(t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = s_12;
      }
  }
  t = q_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_30 = ATgetFirst((ATermList) t);
      t_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_30);
  r_30 = t;
  t = term_m_10;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, s_30);
  t = x_5(w_30, s_30, t);
  t = t_30;
  {
    static ATerm g_31 (ATerm t)
    {
      ATerm x_12 = t;
      int y_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_30 = NULL;
              z_30 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_30;
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              t = y_117(t);
              t = Cons_2_0(_id, g_31, t);
            }
          LocalPopChoice(y_12);
        }
      else
        {
          t = x_12;
          {
            ATerm c_31 = NULL,d_31 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_31 = ATgetFirst((ATermList) t);
                d_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_31), (ATerm) ATmakeAppl(sym_Undefined_1, c_31));
          }
        }
      return(t);
    }
    t = g_31(t);
  }
  v_30 = t;
  t = (ATerm) ATinsert(CheckATermList(v_30), (ATerm) ATmakeAppl(sym_Program_1, s_30));
  p_8 = t;
  t = SSLsetAnnotations(p_8, r_30);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  if(match_string(t, "--help"))
    {
      t = t_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_31;
        }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  t = term_f_11;
  u_31 = t;
  t = term_w_8;
  v_31 = t;
  t = term_d_13;
  t = x_5(u_31, v_31, t);
  t = term_e_13;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_117 (ATerm), ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL;
  n_31 = t;
  t = term_y_9;
  o_31 = t;
  t = term_g_13;
  t = lookup_table_0_1(o_31, t);
  s_31 = t;
  t = term_z_9;
  p_31 = t;
  t = (ATerm) ATempty;
  q_31 = t;
  t = s_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(p_31, q_31, r_31, t);
  t = n_31;
  {
    static ATerm t_2 (ATerm t)
    {
      ATerm h_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_117(t);
          LocalPopChoice(k_13);
        }
      else
        {
          t = h_13;
          {
            ATerm l_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_2, v_2, w_2, t);
                LocalPopChoice(m_13);
              }
            else
              {
                t = l_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_2, t);
  }
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_32 = NULL;
        g_32 = t;
        {
          ATerm p_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_10 = NULL;
              t = g_32;
              {
                ATerm s_13 = t;
                int t_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_11 = NULL,c_11 = NULL;
                    t = term_x_6;
                    b_11 = t;
                    t = term_f_11;
                    c_11 = t;
                    t = term_g_11;
                    t = u_5(b_11, c_11, t);
                    LocalPopChoice(t_13);
                  }
                else
                  {
                    t = s_13;
                    t = fetch_1_0(x_2, t);
                  }
              }
              t = g_32;
              t = default_system_usage_0_0(t);
              t = term_i_9;
              z_10 = t;
              t = SSL_exit(z_10);
              LocalPopChoice(r_13);
            }
          else
            {
              t = p_13;
              {
                ATerm m_11 = NULL,p_11 = NULL,w_11 = NULL;
                t = term_x_6;
                p_11 = t;
                t = term_g_12;
                w_11 = t;
                t = term_x_13;
                t = u_5(p_11, w_11, t);
                t = g_32;
                t = default_system_about_0_0(t);
                t = term_i_9;
                m_11 = t;
                t = SSL_exit(m_11);
              }
            }
        }
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
              static ATerm y_2 (ATerm t)
              {
                ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,r_8 = NULL;
                m_32 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_32 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_32);
                k_32 = t;
                t = l_32;
                if(((l_31 != NULL) && (l_31 != t)))
                  _fail(t);
                else
                  l_31 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_32);
                r_8 = t;
                t = SSLsetAnnotations(r_8, k_32);
                return(t);
              }
              t = fetch_1_0(y_2, t);
              t = term_z_8;
              i_32 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_31)), term_b_14);
              j_32 = t;
              t = SSL_printnl(i_32, j_32);
              t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_31)), term_b_14));
              t = default_system_usage_0_0(t);
              t = term_e_9;
              h_32 = t;
              t = SSL_exit(h_32);
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
            }
        }
      }
  }
  m_31 = t;
  t = term_y_9;
  t = table_destroy_0_0(t);
  t = m_31;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_115 (ATerm), ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  t = parse_options_1_0(x_115, t);
  r_32 = t;
  t = term_c_14;
  t = table_create_0_0(t);
  t = term_c_14;
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_14, term_f_14, r_32);
  t = lookup_table_0_1(s_32, t);
  v_32 = t;
  t = term_f_14;
  t_32 = t;
  t = v_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(t_32, r_32, u_32, t);
  t = r_32;
  t = z_115(t);
  {
    ATerm g_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_115, t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = g_14;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_116(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm n_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = n_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_14);
          }
        else
          {
            t = q_14;
            {
              ATerm v_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_3, j_3, k_3, t);
                  LocalPopChoice(y_14);
                }
              else
                {
                  t = v_14;
                  {
                    ATerm z_14 = t;
                    int b_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(b_15);
                      }
                    else
                      {
                        t = z_14;
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
static ATerm h_3 (ATerm t)
{
  t = input_1_0(n_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  t = term_j_7;
  a_33 = t;
  t = term_w_8;
  b_33 = t;
  t = term_f_15;
  t = x_5(a_33, b_33, t);
  t = term_g_15;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_h_15;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = output_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = topdown_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  i_33 = t;
  if(match_cons(t, sym_appl_2))
    {
      h_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
      t = h_33;
      {
        ATerm i_15 = t;
        int j_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                d_33 = ATgetArgument(t, 0);
                e_33 = ATgetArgument(t, 1);
                {
                  ATerm k_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_15);
            {
              ATerm l_15 = t;
              int m_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_33;
                  t = g_5(d_33, e_33, g_33, t);
                  LocalPopChoice(m_15);
                }
              else
                {
                  t = l_15;
                  t = i_33;
                }
            }
          }
        else
          {
            t = i_15;
            t = i_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          h_33 = ATgetArgument(t, 0);
          t = h_33;
        }
      else
        {
          t = i_33;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_2, default_usage_0_0, _id, h_3, t);
  return(t);
}

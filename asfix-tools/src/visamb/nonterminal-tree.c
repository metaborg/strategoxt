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
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_u_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_q_9;
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
ATerm term_y_8;
ATerm term_x_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_q_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_b_5;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_v_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_u_3;
ATerm term_q_3;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_3));
  term_u_3 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_v_4));
  term_v_4 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_x_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_i_7);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_q_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
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
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_u_8);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_l_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_g_9);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_e_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_x_9);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_u_8);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_u_8);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_u_8);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__3, term_w_9, term_x_9, (ATerm) ATempty);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_d_12);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_u_8);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm concat_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm z_96 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm o_96 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm p_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm f_5 (ATerm g_18, ATerm i_18, ATerm h_18, ATerm t);
ATerm topdown_1_0 (ATerm l_89 (ATerm), ATerm t);
static ATerm g_5 (ATerm d_35, ATerm e_35, ATerm t);
static ATerm h_5 (ATerm y_19, ATerm z_19, ATerm t);
static ATerm j_5 (ATerm o_95 (ATerm), ATerm l_155, ATerm e_20, ATerm t);
static ATerm i_5 (ATerm u_19, ATerm v_19, ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm output_1_0 (ATerm r_115 (ATerm), ATerm t);
static ATerm d_16 (ATerm r_15, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_5 (ATerm a_20, ATerm t);
static ATerm l_5 (ATerm w_33, ATerm x_33, ATerm t);
static ATerm m_5 (ATerm f_35, ATerm g_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_18 (ATerm r_16, ATerm t);
static ATerm e_18 (ATerm x_16, ATerm a_17, ATerm b_17, ATerm t);
static ATerm f_18 (ATerm m_17, ATerm n_17, ATerm o_17, ATerm t);
static ATerm n_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm s_115 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_5 (ATerm f_53, ATerm g_53, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_5 (ATerm x_57, ATerm y_57, ATerm w_57, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_5 (ATerm y_37, ATerm z_37, ATerm t);
ATerm foldr_2_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm s_112 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm need_help_1_0 (ATerm i_115 (ATerm), ATerm t);
static ATerm x_5 (ATerm p_62, ATerm q_62, ATerm r_62, ATerm t);
ATerm lookup_table_0_1 (ATerm j_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_62, ATerm y_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_5 (ATerm u_62, ATerm v_62, ATerm t);
static ATerm r_5 (ATerm z_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm x_95 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_96 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_5 (ATerm s_62, ATerm t_62, ATerm t);
static ATerm t_5 (ATerm q_59, ATerm r_59, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_117 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm parse_options_1_0 (ATerm k_117 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,m_0 = NULL;
  b_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_0;
    }
  else
    {
      static ATerm a_0 (ATerm t)
      {
        t = not_null(m_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_0 = ATgetFirst((ATermList) t);
          if(((m_0 != NULL) && (m_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_0;
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
                  int p_3 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_1 = NULL;
                      t = z_0;
                      t = De_Escape_0_0(t);
                      f_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(f_1), term_q_3);
                      LocalPopChoice(p_3);
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
                      ATerm s_3 = t;
                      int t_3 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_1 = NULL;
                          t = z_0;
                          t = De_Escape_0_0(t);
                          n_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_1), term_u_3);
                          LocalPopChoice(t_3);
                        }
                      else
                        {
                          t = s_3;
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
                  ATerm v_3 = t;
                  int w_3 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_3 = NULL;
                      t = e_3;
                      t = De_Escape_0_0(t);
                      o_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(o_3), term_q_3);
                      LocalPopChoice(w_3);
                    }
                  else
                    {
                      t = v_3;
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
                  ATerm x_3 = NULL;
                  t = g_3;
                  t = De_Escape_0_0(t);
                  x_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_3), f_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = f_3;
                  if(match_int(t, 92))
                    {
                      ATerm y_3 = t;
                      int z_3 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_4 = NULL;
                          t = e_3;
                          t = De_Escape_0_0(t);
                          b_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(b_4), term_u_3);
                          LocalPopChoice(z_3);
                        }
                      else
                        {
                          t = y_3;
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
                      ATerm n_4 = NULL;
                      t = g_3;
                      t = De_Escape_0_0(t);
                      n_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(n_4), f_3);
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
          ATerm d_5 = NULL;
          t = g_3;
          t = De_Escape_0_0(t);
          d_5 = t;
          t = (ATerm) ATinsert(CheckATermList(d_5), f_3);
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
ATerm at_last_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  static ATerm h_7 (ATerm t)
  {
    ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL;
    d_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_7 = ATgetFirst((ATermList) t);
        g_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_4 = t;
      int d_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_0 = NULL,d_6 = NULL;
          t = SSLgetAnnotations(d_7);
          r_0 = t;
          t = g_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_7), f_7);
          d_6 = t;
          t = SSLsetAnnotations(d_6, r_0);
          t = z_96(t);
          LocalPopChoice(d_4);
        }
      else
        {
          t = c_4;
          {
            ATerm t_1 = NULL,x_1 = NULL,e_6 = NULL;
            t = SSLgetAnnotations(d_7);
            t_1 = t;
            t = g_7;
            t = h_7(t);
            x_1 = t;
            t = (ATerm) ATinsert(CheckATermList(x_1), f_7);
            e_6 = t;
            t = SSLsetAnnotations(e_6, t_1);
          }
        }
    }
    return(t);
  }
  t = h_7(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_4 = ATgetFirst((ATermList) t);
      if(((ATgetType(e_4) != AT_INT) || (ATgetInt((ATermInt) e_4) != 34)))
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
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,w_7 = NULL;
  w_7 = t;
  t = SSL_explode_string(w_7);
  q_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_7 = ATgetFirst((ATermList) t);
      {
        ATerm h_4 = (ATerm) ATgetNext((ATermList) t);
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
      ATerm i_4 = ATgetFirst((ATermList) t);
      s_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_7;
  t = at_last_1_0(h_0, t);
  r_7 = t;
  t = SSL_implode_string(r_7);
  return(t);
}
ATerm filter_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_8;
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
        ATerm j_4 = t;
        int k_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_2 = NULL,q_2 = NULL,r_2 = NULL,i_6 = NULL;
            t = SSLgetAnnotations(z_8);
            h_2 = t;
            t = a_9;
            t = a_104(t);
            q_2 = t;
            t = b_9;
            t = filter_1_0(a_104, t);
            r_2 = t;
            t = (ATerm) ATinsert(CheckATermList(r_2), q_2);
            i_6 = t;
            t = SSLsetAnnotations(i_6, h_2);
            LocalPopChoice(k_4);
          }
        else
          {
            t = j_4;
            t = b_9;
            t = filter_1_0(a_104, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  static ATerm d_10 (ATerm t)
  {
    ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL;
    c_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_9 = ATgetFirst((ATermList) t);
        a_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_2 = NULL,i_3 = NULL,k_6 = NULL;
          t = SSLgetAnnotations(c_10);
          z_2 = t;
          t = a_10;
          t = d_10(t);
          i_3 = t;
          t = (ATerm) ATinsert(CheckATermList(i_3), z_9);
          k_6 = t;
          t = SSLsetAnnotations(k_6, z_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_10;
        t = o_96(t);
      }
    return(t);
  }
  t = d_10(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_4);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_4);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_4);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,p_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym_cf_1))
    {
      m_11 = ATgetArgument(t, 0);
      t = m_11;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          m_11 = ATgetArgument(t, 0);
          t = m_11;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_p_4);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  m_11 = ATgetArgument(t, 0);
                  n_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(n_11), m_11);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      m_11 = ATgetArgument(t, 0);
                      t = m_11;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(k_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          m_11 = ATgetArgument(t, 0);
                          t = m_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(o_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              m_11 = ATgetArgument(t, 0);
                              t = m_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(p_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  m_11 = ATgetArgument(t, 0);
                                  n_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm a_12 = NULL,b_12 = NULL;
                                    t = m_11;
                                    t = Sym2Strs_0_0(t);
                                    a_12 = t;
                                    t = n_11;
                                    t = Sym2Strs_0_0(t);
                                    b_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_4)), b_12), a_12);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      m_11 = ATgetArgument(t, 0);
                                      n_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm e_12 = NULL,f_12 = NULL;
                                        t = m_11;
                                        t = Sym2Strs_0_0(t);
                                        e_12 = t;
                                        t = n_11;
                                        t = Sym2Strs_0_0(t);
                                        f_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_4)), f_12), e_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm r_4 = t;
                                      int t_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              m_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm u_4 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(t_4);
                                          {
                                            ATerm h_12 = NULL;
                                            t = m_11;
                                            t = Sym2Strs_0_0(t);
                                            h_12 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_4)), h_12);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = r_4;
                                          {
                                            ATerm w_4 = t;
                                            int x_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    m_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm y_4 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(x_4);
                                                {
                                                  ATerm l_12 = NULL,o_12 = NULL;
                                                  t = m_11;
                                                  t = Sym2Strs_0_0(t);
                                                  l_12 = t;
                                                  t = n_11;
                                                  t = Sym2Strs_0_0(t);
                                                  o_12 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_4)), o_12), l_12);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = w_4;
                                                if(match_cons(t, sym_pair_2))
                                                  {
                                                    m_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm t_12 = NULL,w_12 = NULL;
                                                      t = m_11;
                                                      t = Sym2Strs_0_0(t);
                                                      t_12 = t;
                                                      t = n_11;
                                                      t = Sym2Strs_0_0(t);
                                                      w_12 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_12), (ATerm) ATinsert(ATempty, term_z_4)), t_12);
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_func_2))
                                                      {
                                                        m_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_12 = NULL,a_13 = NULL;
                                                          t = m_11;
                                                          t = filter_1_0(Sym2Strs_0_0, t);
                                                          t = concat_0_0(t);
                                                          z_12 = t;
                                                          t = n_11;
                                                          t = Sym2Strs_0_0(t);
                                                          a_13 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_13), (ATerm) ATinsert(ATempty, term_a_5)), z_12);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_alt_2))
                                                          {
                                                            m_11 = ATgetArgument(t, 0);
                                                            n_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm i_13 = NULL,j_13 = NULL;
                                                              t = m_11;
                                                              t = Sym2Strs_0_0(t);
                                                              i_13 = t;
                                                              t = n_11;
                                                              t = Sym2Strs_0_0(t);
                                                              j_13 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_13), (ATerm) ATinsert(ATempty, term_b_5)), i_13);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_sort_1))
                                                              {
                                                                m_11 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATinsert(ATempty, m_11);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_lit_1))
                                                                  {
                                                                    m_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm a_4 = NULL;
                                                                      t = m_11;
                                                                      {
                                                                        ATerm c_5 = t;
                                                                        int e_5 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = de_quote_0_0(t);
                                                                            t = de_escape_0_0(t);
                                                                            LocalPopChoice(e_5);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = c_5;
                                                                          }
                                                                      }
                                                                      a_4 = t;
                                                                      t = (ATerm) ATinsert(ATempty, a_4);
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
                                                                            m_11 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm v_5 = ATgetArgument(t, 1);
                                                                            }
                                                                          }
                                                                        else
                                                                          _fail(t);
                                                                        LocalPopChoice(s_5);
                                                                        {
                                                                          ATerm s_4 = NULL;
                                                                          t = m_11;
                                                                          {
                                                                            ATerm b_6 = t;
                                                                            int f_6 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = de_quote_0_0(t);
                                                                                t = de_escape_0_0(t);
                                                                                LocalPopChoice(f_6);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = b_6;
                                                                              }
                                                                          }
                                                                          s_4 = t;
                                                                          t = (ATerm) ATinsert(ATempty, s_4);
                                                                        }
                                                                      }
                                                                    else
                                                                      {
                                                                        t = p_5;
                                                                        if(!(match_cons(t, sym_layout_0)))
                                                                          _fail(t);
                                                                        t = (ATerm) ATinsert(ATempty, term_h_6);
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
static ATerm f_5 (ATerm g_18, ATerm i_18, ATerm h_18, ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t = i_18;
  t = Sym2Strs_0_0(t);
  u_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_6)), u_13), (ATerm) ATinsert(ATempty, term_j_6));
  t = concat_0_0(t);
  v_13 = t;
  t = SSL_concat_strings(v_13);
  t_13 = t;
  t = SSL_mkterm(t_13, h_18);
  return(t);
}
ATerm topdown_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  static ATerm s_0 (ATerm t)
  {
    t = topdown_1_0(l_89, t);
    return(t);
  }
  t = l_89(t);
  t = SRTS_all(s_0, t);
  return(t);
}
static ATerm g_5 (ATerm d_35, ATerm e_35, ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_fputc(d_35, e_35);
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
static ATerm h_5 (ATerm y_19, ATerm z_19, ATerm t)
{
  ATerm c_14 = NULL;
  t = SSL_write_term_to_stream_text(y_19, z_19);
  c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_14);
  return(t);
}
static ATerm j_5 (ATerm o_95 (ATerm), ATerm l_155, ATerm e_20, ATerm t)
{
  ATerm d_14 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_155, term_m_6);
  t = n_5(t);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_14, e_20);
  t = o_95(t);
  t = fclose_0_0(t);
  t = e_20;
  return(t);
}
static ATerm i_5 (ATerm u_19, ATerm v_19, ATerm t)
{
  ATerm g_14 = NULL;
  t = SSL_write_term_to_stream_baf(u_19, v_19);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_6 = ATgetArgument(t, 0);
      if(match_cons(o_6, sym_Stream_1))
        {
          v_14 = ATgetArgument(o_6, 0);
        }
      else
        _fail(t);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(v_14, w_14, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm z_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(match_cons(p_6, sym_Stream_1))
        {
          d_15 = ATgetArgument(p_6, 0);
        }
      else
        _fail(t);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(d_15, e_15, t);
  z_14 = t;
  t = term_q_6;
  b_15 = t;
  t = z_14;
  if(match_cons(t, sym_Stream_1))
    {
      c_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, z_14);
  t = g_5(b_15, c_15, t);
  return(t);
}
ATerm output_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  ATerm i_14 = NULL,l_14 = NULL;
  t = r_115(t);
  l_14 = t;
  {
    ATerm s_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL,r_14 = NULL;
        t = term_v_6;
        n_14 = t;
        t = term_x_6;
        r_14 = t;
        t = term_z_6;
        t = t_5(n_14, r_14, t);
        LocalPopChoice(u_6);
      }
    else
      {
        t = s_6;
        t = term_b_7;
      }
  }
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_14, l_14);
  {
    ATerm c_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 = NULL,t_14 = NULL;
        t = term_v_6;
        s_14 = t;
        t = term_i_7;
        t_14 = t;
        t = term_j_7;
        t = t_5(s_14, t_14, t);
        t = (ATerm) ATmakeAppl(sym__2, i_14, l_14);
        LocalPopChoice(e_7);
        if(match_cons(t, sym__2))
          {
            ATerm k_7 = ATgetArgument(t, 0);
            ATerm l_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_5(t_0, i_14, l_14, t);
      }
    else
      {
        t = c_7;
        if(match_cons(t, sym__2))
          {
            ATerm n_7 = ATgetArgument(t, 0);
            ATerm o_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_5(u_0, i_14, l_14, t);
      }
  }
  return(t);
}
static ATerm d_16 (ATerm r_15, ATerm t)
{
  t = SSL_fclose(r_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  w_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_15 = ATgetArgument(t, 0);
      {
        ATerm u_7 = t;
        int v_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_15);
            LocalPopChoice(v_7);
          }
        else
          {
            t = u_7;
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
static ATerm k_5 (ATerm a_20, ATerm t)
{
  t = SSL_read_term_from_stream(a_20);
  return(t);
}
static ATerm l_5 (ATerm w_33, ATerm x_33, ATerm t)
{
  t = SSL_strcat(w_33, x_33);
  return(t);
}
static ATerm m_5 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm e_16 = NULL;
  t = SSL_fopen(f_35, g_35);
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
  ATerm j_16 = NULL;
  t = SSL_stderr_stream();
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_16);
  return(t);
}
static ATerm d_18 (ATerm r_16, ATerm t)
{
  ATerm s_16 = NULL;
  t = SSL_explode_term(r_16);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            s_16 = ATgetFirst((ATermList) y_7);
            {
              ATerm b_8 = (ATerm) ATgetNext((ATermList) y_7);
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
static ATerm e_18 (ATerm x_16, ATerm a_17, ATerm b_17, ATerm t)
{
  ATerm c_17 = NULL,e_17 = NULL,f_17 = NULL,k_17 = NULL,r_6 = NULL;
  t = SSLgetAnnotations(b_17);
  f_17 = t;
  t = x_16;
  if(match_cons(t, sym_Path_1))
    {
      k_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_17, a_17);
  r_6 = t;
  t = SSLsetAnnotations(r_6, f_17);
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(c_17, e_17, t);
  return(t);
}
static ATerm f_18 (ATerm m_17, ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,w_17 = NULL,t_6 = NULL;
  t = SSLgetAnnotations(o_17);
  r_17 = t;
  t = SSL_is_string(m_17);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_17, n_17);
  t_6 = t;
  t = SSLsetAnnotations(t_6, r_17);
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(p_17, q_17, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
  y_17 = t;
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_18(y_17, t);
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
                  t = e_18(z_17, a_18, y_17, t);
                  LocalPopChoice(f_8);
                }
              else
                {
                  t = e_8;
                  t = f_18(z_17, a_18, y_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_18(y_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_18 = NULL,o_18 = NULL,p_18 = NULL,u_18 = NULL;
  u_18 = t;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_18, term_j_8);
        t = n_5(t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm z_5 = NULL,a_6 = NULL;
          t = term_k_8;
          a_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_8, u_18);
          t = l_5(a_6, u_18, t);
          z_5 = t;
          t = SSL_perror(z_5);
          _fail(t);
        }
      }
  }
  o_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(p_18, t);
  l_18 = t;
  t = o_18;
  t = fclose_0_0(t);
  t = l_18;
  return(t);
}
ATerm input_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm m_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_18 = NULL,y_18 = NULL;
      t = term_v_6;
      x_18 = t;
      t = term_q_8;
      y_18 = t;
      t = term_s_8;
      t = t_5(x_18, y_18, t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = m_8;
      t = term_t_8;
    }
  t = ReadFromFile_0_0(t);
  t = s_115(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,e_19 = NULL;
  z_18 = t;
  t = term_u_8;
  t = whoami_0_0(t);
  a_19 = t;
  t = term_x_8;
  c_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_9), a_19), term_y_8);
  e_19 = t;
  t = SSL_printnl(c_19, e_19);
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
static ATerm x_0 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_0, w_0, x_0, t);
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
  ATerm s_19 = NULL,t_19 = NULL;
  t = term_g_9;
  s_19 = t;
  t = term_h_9;
  t_19 = t;
  t = term_i_9;
  t = w_5(s_19, t_19, t);
  t = term_k_9;
  return(t);
}
static ATerm e_1 (ATerm t)
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
static ATerm h_1 (ATerm t)
{
  ATerm b_20 = NULL,g_20 = NULL,h_20 = NULL;
  b_20 = t;
  t = SSL_string_to_int(b_20);
  g_20 = t;
  t = term_g_9;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_9, g_20);
  t = w_5(h_20, g_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_20);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_m_9;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  t = term_n_9;
  i_20 = t;
  t = term_u_8;
  j_20 = t;
  t = term_o_9;
  t = w_5(i_20, j_20, t);
  t = term_q_9;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_r_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_1, d_1, e_1, t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_1, h_1, j_1, t);
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            t = Option_3_0(k_1, m_1, o_1, t);
          }
      }
    }
  return(t);
}
static ATerm w_5 (ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  t = term_v_6;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_6, f_53, g_53);
  t = lookup_table_0_1(k_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(f_53, g_53, l_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_6, f_53, g_53);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL;
      t = term_u_8;
      t = e_0(t);
      x_20 = t;
      t = term_w_9;
      y_20 = t;
      t = term_x_9;
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_9, term_x_9, x_20);
      t = u_5(y_20, b_21, x_20, t);
      _fail(t);
    }
  else
    {
      ATerm e_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_20 = ATgetFirst((ATermList) t);
          v_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_20;
      t = c_0(t);
      t = term_u_8;
      t = d_0(t);
      e_21 = t;
      t = (ATerm) ATinsert(CheckATermList(v_20), e_21);
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  if(match_string(t, "-o"))
    {
      t = g_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_21;
    }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  t = term_x_6;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, j_21);
  t = w_5(k_21, j_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_21);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_1, r_1, s_1, t);
  return(t);
}
static ATerm u_5 (ATerm x_57, ATerm y_57, ATerm w_57, ATerm t)
{
  ATerm m_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_57, y_57);
  {
    ATerm b_10 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, x_57, y_57);
        t = t_5(x_57, y_57, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = b_10;
        t = (ATerm) ATempty;
      }
  }
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_57, y_57, (ATerm) ATinsert(CheckATermList(o_21), w_57));
  t = lookup_table_0_1(x_57, t);
  r_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), w_57);
  p_21 = t;
  t = r_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(y_57, p_21, q_21, t);
  t = m_21;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_22 = NULL,j_22 = NULL,k_22 = NULL;
      t = term_u_8;
      t = n_0(t);
      g_22 = t;
      t = term_w_9;
      j_22 = t;
      t = term_x_9;
      k_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_9, term_x_9, g_22);
      t = u_5(j_22, k_22, g_22, t);
      _fail(t);
    }
  else
    {
      ATerm q_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_22;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_22 = ATgetFirst((ATermList) t);
          d_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_22;
      t = j_0(t);
      t = c_22;
      t = l_0(t);
      q_22 = t;
      t = (ATerm) ATinsert(CheckATermList(d_22), q_22);
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  if(match_string(t, "-i"))
    {
      t = s_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_22;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  t = term_q_8;
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, v_22);
  t = w_5(w_22, v_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_22);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, v_1, w_1, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_22 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_8;
  t = whoami_0_0(t);
  z_22 = t;
  t = term_x_8;
  c_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_10), z_22);
  d_23 = t;
  t = SSL_printnl(c_23, d_23);
  t = term_d_9;
  b_23 = t;
  t = SSL_exit(b_23);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  t = term_v_6;
  e_23 = t;
  t = term_l_10;
  f_23 = t;
  t = term_m_10;
  t = t_5(e_23, f_23, t);
  return(t);
}
static ATerm o_5 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_37, z_37);
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      t = SSL_addr(y_37, z_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_23;
      t = w_102(t);
    }
  else
    {
      ATerm v_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_23 = ATgetFirst((ATermList) t);
          k_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_23;
      t = foldr_2_0(w_102, x_102, t);
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_23, v_23);
      t = x_102(t);
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
  t = term_h_9;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm l_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      l_6 = ATgetArgument(t, 0);
      n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(l_6, n_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_6 = NULL,g_6 = NULL;
  t = times_0_0(t);
  g_6 = t;
  t = SSL_explode_term(g_6);
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6;
  t = foldr_2_0(y_1, a_2, t);
  b_24 = t;
  t = SSL_TicksToSeconds(b_24);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,x_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_24;
        if((v_24 != t))
          {
            _fail(t);
          }
        t = u_24;
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = (ATerm) ATmakeAppl(sym__2, v_24, x_24);
        {
          ATerm s_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_24, x_24);
              LocalPopChoice(t_10);
            }
          else
            {
              t = s_10;
              t = SSL_gtr(v_24, x_24);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_24, x_24);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
        t = term_v_6;
        g_25 = t;
        t = term_g_9;
        h_25 = t;
        t = term_x_10;
        t = t_5(g_25, h_25, t);
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_25, term_d_9);
        t = geq_0_0(t);
        t = d_25;
        t = s_112(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = d_25;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,m_25 = NULL,n_25 = NULL;
  t = run_time_0_0(t);
  j_25 = t;
  t = term_u_8;
  t = whoami_0_0(t);
  k_25 = t;
  t = term_x_8;
  m_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), j_25), term_z_10), k_25);
  n_25 = t;
  t = SSL_printnl(m_25, n_25);
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), j_25), term_z_10), k_25));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_9;
  o_25 = t;
  t = SSL_exit(o_25);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  z_25 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_25;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_25 = ATgetArgument(t, 0);
          {
            ATerm m_7 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(z_25);
            m_7 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_25);
            w_6 = t;
            t = SSLsetAnnotations(w_6, m_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_25;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_25 = NULL,s_25 = NULL;
      t = term_v_6;
      r_25 = t;
      t = term_e_11;
      s_25 = t;
      t = term_f_11;
      t = t_5(r_25, s_25, t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = fetch_1_0(c_2, t);
    }
  t = i_115(t);
  return(t);
}
static ATerm x_5 (ATerm p_62, ATerm q_62, ATerm r_62, ATerm t)
{
  ATerm b_26 = NULL;
  t = SSL_hashtable_put(r_62, p_62, q_62);
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_26);
  return(t);
}
ATerm lookup_table_0_1 (ATerm j_59, ATerm t)
{
  ATerm k_26 = NULL;
  t = table_hashtable_0_0(t);
  k_26 = t;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        t = k_26;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_5(j_59, z_7, t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          ATerm g_8 = NULL;
          t = j_59;
          t = table_create_0_0(t);
          t = k_26;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_5(j_59, g_8, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_62, ATerm y_62, ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_hashtable_create(x_62, y_62);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_26);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,z_26 = NULL;
  u_26 = t;
  t = term_j_11;
  y_26 = t;
  t = term_k_11;
  z_26 = t;
  t = u_26;
  t = new_hashtable_0_2(y_26, z_26, t);
  v_26 = t;
  t = u_26;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(u_26, v_26, w_26, t);
  t = u_26;
  return(t);
}
static ATerm q_5 (ATerm u_62, ATerm v_62, ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_hashtable_remove(v_62, u_62);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_27);
  return(t);
}
static ATerm r_5 (ATerm z_62, ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_hashtable_destroy(z_62);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_27);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_27 = NULL;
  t = SSL_table_hashtable();
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_27);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
  f_27 = t;
  t = table_hashtable_0_0(t);
  g_27 = t;
  t = lookup_table_0_1(f_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(i_27, t);
  t = g_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(f_27, h_27, t);
  t = f_27;
  return(t);
}
ATerm map_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  static ATerm x_27 (ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
    u_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_27;
      }
    else
      {
        ATerm n_8 = NULL,v_8 = NULL,w_8 = NULL,y_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_27 = ATgetFirst((ATermList) t);
            w_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_27);
        n_8 = t;
        t = v_27;
        t = x_95(t);
        v_8 = t;
        t = w_27;
        t = x_27(t);
        w_8 = t;
        t = (ATerm) ATinsert(CheckATermList(w_8), v_8);
        y_6 = t;
        t = SSLsetAnnotations(y_6, n_8);
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      b_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_28 = NULL,g_28 = NULL;
        static ATerm d_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_28)), not_null(g_28));
          return(t);
        }
        t = b_28;
        t = i_0(t);
        if(((f_28 != NULL) && (f_28 != t)))
          _fail(t);
        else
          f_28 = t;
        t = a_28;
        t = g_0(t);
        if(((g_28 != NULL) && (g_28 != t)))
          _fail(t);
        else
          g_28 = t;
        t = b_28;
        t = reverse_acc_2_0(g_0, d_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,a_7 = NULL;
  o_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_28);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_28);
  a_7 = t;
  t = SSLsetAnnotations(a_7, m_28);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_28), term_q_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_28 = NULL,l_28 = NULL;
      t = term_v_6;
      k_28 = t;
      t = term_l_10;
      l_28 = t;
      t = term_m_10;
      t = t_5(k_28, l_28, t);
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      t = fetch_1_0(e_2, t);
    }
  t = term_t_11;
  t = echo_0_0(t);
  t = term_w_9;
  i_28 = t;
  t = term_x_9;
  j_28 = t;
  t = term_u_11;
  t = t_5(i_28, j_28, t);
  t = reverse_acc_2_0(_id, f_2, t);
  t = map_1_0(g_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  static ATerm n_29 (ATerm t)
  {
    ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL;
    k_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_29 = ATgetFirst((ATermList) t);
        m_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_9 = NULL,p_9 = NULL,p_7 = NULL;
          t = SSLgetAnnotations(k_29);
          j_9 = t;
          t = l_29;
          t = h_96(t);
          p_9 = t;
          t = (ATerm) ATinsert(CheckATermList(m_29), p_9);
          p_7 = t;
          t = SSLsetAnnotations(p_7, j_9);
          LocalPopChoice(w_11);
        }
      else
        {
          t = v_11;
          {
            ATerm h_10 = NULL,k_10 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(k_29);
            h_10 = t;
            t = m_29;
            t = n_29(t);
            k_10 = t;
            t = (ATerm) ATinsert(CheckATermList(k_10), l_29);
            a_8 = t;
            t = SSLsetAnnotations(a_8, h_10);
          }
        }
    }
    return(t);
  }
  t = n_29(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_11 = ATgetFirst((ATermList) t);
                ATerm c_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_29;
          }
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = (ATerm) ATinsert(ATempty, r_29);
      }
  }
  s_29 = t;
  t = term_b_7;
  t_29 = t;
  t = SSL_printnl(t_29, s_29);
  t = r_29;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  t = term_v_6;
  x_29 = t;
  t = term_l_10;
  y_29 = t;
  t = term_m_10;
  t = t_5(x_29, y_29, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_5 (ATerm s_62, ATerm t_62, ATerm t)
{
  t = SSL_hashtable_get(t_62, s_62);
  return(t);
}
static ATerm t_5 (ATerm q_59, ATerm r_59, ATerm t)
{
  ATerm z_29 = NULL;
  t = lookup_table_0_1(q_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_5(r_59, z_29, t);
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
  ATerm b_30 = NULL,c_30 = NULL;
  t = term_d_12;
  b_30 = t;
  t = term_u_8;
  c_30 = t;
  t = term_g_12;
  t = w_5(b_30, c_30, t);
  return(t);
}
static ATerm k_2 (ATerm t)
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
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  t = term_d_12;
  f_30 = t;
  t = term_u_8;
  g_30 = t;
  t = term_g_12;
  t = w_5(f_30, g_30, t);
  t = term_j_12;
  d_30 = t;
  t = term_u_8;
  e_30 = t;
  t = term_k_12;
  t = w_5(d_30, e_30, t);
  t = term_m_12;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, j_2, k_2, t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = Option_3_0(m_2, n_2, o_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_69 (ATerm), ATerm r_69 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,l_8 = NULL;
  m_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_30 = ATgetFirst((ATermList) t);
      j_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_30);
  h_30 = t;
  t = i_30;
  t = q_69(t);
  k_30 = t;
  t = j_30;
  t = r_69(t);
  l_30 = t;
  t = (ATerm) ATinsert(CheckATermList(l_30), k_30);
  l_8 = t;
  t = SSLsetAnnotations(l_8, h_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_117 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,w_30 = NULL,x_30 = NULL,p_8 = NULL;
  r_30 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_12;
        t = l_117(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
      }
  }
  t = r_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_30 = ATgetFirst((ATermList) t);
      u_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_30);
  s_30 = t;
  t = term_l_10;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, t_30);
  t = w_5(x_30, t_30, t);
  t = u_30;
  {
    static ATerm h_31 (ATerm t)
    {
      ATerm v_12 = t;
      int x_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_31 = NULL;
              a_31 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_31;
              LocalPopChoice(b_13);
            }
          else
            {
              t = y_12;
              t = l_117(t);
              t = Cons_2_0(_id, h_31, t);
            }
          LocalPopChoice(x_12);
        }
      else
        {
          t = v_12;
          {
            ATerm d_31 = NULL,e_31 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_31 = ATgetFirst((ATermList) t);
                e_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_31), (ATerm) ATmakeAppl(sym_Undefined_1, d_31));
          }
        }
      return(t);
    }
    t = h_31(t);
  }
  w_30 = t;
  t = (ATerm) ATinsert(CheckATermList(w_30), (ATerm) ATmakeAppl(sym_Program_1, t_30));
  p_8 = t;
  t = SSLsetAnnotations(p_8, s_30);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  if(match_string(t, "--help"))
    {
      t = u_31;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_31;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_31;
        }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  t = term_e_11;
  v_31 = t;
  t = term_u_8;
  w_31 = t;
  t = term_c_13;
  t = w_5(v_31, w_31, t);
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
ATerm parse_options_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  o_31 = t;
  t = term_w_9;
  p_31 = t;
  t = term_f_13;
  t = lookup_table_0_1(p_31, t);
  t_31 = t;
  t = term_x_9;
  q_31 = t;
  t = (ATerm) ATempty;
  r_31 = t;
  t = t_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(q_31, r_31, s_31, t);
  t = o_31;
  {
    static ATerm s_2 (ATerm t)
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_117(t);
          LocalPopChoice(h_13);
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
        ATerm h_32 = NULL;
        h_32 = t;
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_10 = NULL;
              t = h_32;
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_10 = NULL,a_11 = NULL;
                    t = term_v_6;
                    y_10 = t;
                    t = term_e_11;
                    a_11 = t;
                    t = term_f_11;
                    t = t_5(y_10, a_11, t);
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = q_13;
                    t = fetch_1_0(w_2, t);
                  }
              }
              t = h_32;
              t = default_system_usage_0_0(t);
              t = term_h_9;
              u_10 = t;
              t = SSL_exit(u_10);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              {
                ATerm i_11 = NULL,l_11 = NULL,o_11 = NULL;
                t = term_v_6;
                l_11 = t;
                t = term_d_12;
                o_11 = t;
                t = term_s_13;
                t = t_5(l_11, o_11, t);
                t = h_32;
                t = default_system_about_0_0(t);
                t = term_h_9;
                i_11 = t;
                t = SSL_exit(i_11);
              }
            }
        }
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
              static ATerm x_2 (ATerm t)
              {
                ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,r_8 = NULL;
                n_32 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_32 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_32);
                l_32 = t;
                t = m_32;
                if(((m_31 != NULL) && (m_31 != t)))
                  _fail(t);
                else
                  m_31 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_32);
                r_8 = t;
                t = SSLsetAnnotations(r_8, l_32);
                return(t);
              }
              t = fetch_1_0(x_2, t);
              t = term_x_8;
              j_32 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_31)), term_y_13);
              k_32 = t;
              t = SSL_printnl(j_32, k_32);
              t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_31)), term_y_13));
              t = default_system_usage_0_0(t);
              t = term_d_9;
              i_32 = t;
              t = SSL_exit(i_32);
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
            }
        }
      }
  }
  n_31 = t;
  t = term_w_9;
  t = table_destroy_0_0(t);
  t = n_31;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_115 (ATerm), ATerm l_115 (ATerm), ATerm m_115 (ATerm), ATerm n_115 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  t = parse_options_1_0(k_115, t);
  s_32 = t;
  t = term_a_14;
  t = table_create_0_0(t);
  t = term_a_14;
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, s_32);
  t = lookup_table_0_1(t_32, t);
  w_32 = t;
  t = term_b_14;
  u_32 = t;
  t = w_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(u_32, s_32, v_32, t);
  t = s_32;
  t = m_115(t);
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_115, t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          ATerm h_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_115(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_14);
            }
          else
            {
              t = h_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm k_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_14);
    }
  else
    {
      t = k_14;
      {
        ATerm o_14 = t;
        int p_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_14);
          }
        else
          {
            t = o_14;
            {
              ATerm q_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(h_3, j_3, k_3, t);
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = q_14;
                  {
                    ATerm x_14 = t;
                    int y_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_14);
                      }
                    else
                      {
                        t = x_14;
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
static ATerm a_3 (ATerm t)
{
  t = input_1_0(l_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  t = term_i_7;
  b_33 = t;
  t = term_u_8;
  c_33 = t;
  t = term_a_15;
  t = w_5(b_33, c_33, t);
  t = term_f_15;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_g_15;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = output_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = topdown_1_0(n_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_appl_2))
    {
      i_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      t = i_33;
      {
        ATerm h_15 = t;
        int i_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                e_33 = ATgetArgument(t, 0);
                f_33 = ATgetArgument(t, 1);
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
                  t = j_33;
                  t = f_5(e_33, f_33, h_33, t);
                  LocalPopChoice(l_15);
                }
              else
                {
                  t = k_15;
                  t = j_33;
                }
            }
          }
        else
          {
            t = h_15;
            t = j_33;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          i_33 = ATgetArgument(t, 0);
          t = i_33;
        }
      else
        {
          t = j_33;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_2, default_usage_0_0, _id, a_3, t);
  return(t);
}

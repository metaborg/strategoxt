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
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
}
ATerm term_c_16;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_p_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_t_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_n_6;
ATerm term_f_6;
ATerm term_g_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_b_5;
ATerm term_l_4;
ATerm term_g_4;
ATerm term_c_4;
ATerm term_b_4;
ATerm term_z_3;
ATerm term_y_3;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_3));
  term_z_3 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_a_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym__2, term_i_10, term_v_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_h_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_a_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_w_10);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_v_0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_v_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_v_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, (ATerm) ATempty);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_t_12);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_v_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm i_89 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_96 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_88 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm p_5 (ATerm w_18, ATerm y_18, ATerm x_18, ATerm t);
ATerm topdown_1_0 (ATerm u_81 (ATerm), ATerm t);
static ATerm r_5 (ATerm t_35, ATerm u_35, ATerm t);
static ATerm s_5 (ATerm o_20, ATerm p_20, ATerm t);
static ATerm u_5 (ATerm x_87 (ATerm), ATerm z_145, ATerm u_20, ATerm t);
static ATerm t_5 (ATerm k_20, ATerm l_20, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm o_19 (ATerm g_19, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_5 (ATerm q_20, ATerm t);
static ATerm w_5 (ATerm m_34, ATerm n_34, ATerm t);
static ATerm x_5 (ATerm v_35, ATerm w_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_22 (ATerm c_20, ATerm t);
static ATerm d_22 (ATerm g_20, ATerm h_20, ATerm i_20, ATerm t);
static ATerm e_22 (ATerm y_20, ATerm j_21, ATerm m_21, ATerm t);
static ATerm y_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_88 (ATerm), ATerm t);
static ATerm d_6 (ATerm a_52, ATerm b_52, ATerm t);
ATerm if_verbose2_1_0 (ATerm x_103 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_6 (ATerm m_45, ATerm n_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_6 (ATerm h_50, ATerm i_50, ATerm g_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_5 (ATerm p_38, ATerm q_38, ATerm t);
ATerm foldr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm h_6 (ATerm z_53, ATerm a_54, ATerm b_54, ATerm t);
static ATerm i_6 (ATerm c_54, ATerm d_54, ATerm t);
ATerm lookup_table_0_1 (ATerm t_51, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_54, ATerm i_54, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_6 (ATerm e_54, ATerm f_54, ATerm t);
static ATerm c_6 (ATerm j_54, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm g_88 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm iowrap_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_y_3;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_4), b_0), term_z_3);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_c_4;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL,s_0 = NULL;
  q_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_0;
    }
  else
    {
      static ATerm h_0 (ATerm t)
      {
        t = not_null(s_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_0 = ATgetFirst((ATermList) t);
          if(((s_0 != NULL) && (s_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_0;
      t = at_end_1_0(h_0, t);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_1 = ATgetFirst((ATermList) t);
      h_1 = (ATerm) ATgetNext((ATermList) t);
      t = h_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_1 = ATgetFirst((ATermList) t);
          f_1 = (ATerm) ATgetNext((ATermList) t);
          t = e_1;
          if(match_int(t, 34))
            {
              t = g_1;
              if(match_int(t, 92))
                {
                  ATerm e_4 = t;
                  int f_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 = NULL;
                      t = f_1;
                      t = De_Escape_0_0(t);
                      k_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_1), term_g_4);
                      LocalPopChoice(f_4);
                    }
                  else
                    {
                      t = e_4;
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
                      ATerm i_4 = t;
                      int j_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_1 = NULL;
                          t = f_1;
                          t = De_Escape_0_0(t);
                          s_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_1), term_l_4);
                          LocalPopChoice(j_4);
                        }
                      else
                        {
                          t = i_4;
                          {
                            ATerm z_1 = NULL;
                            t = h_1;
                            t = De_Escape_0_0(t);
                            z_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(z_1), g_1);
                          }
                        }
                    }
                  else
                    {
                      ATerm r_2 = NULL;
                      t = h_1;
                      t = De_Escape_0_0(t);
                      r_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(r_2), g_1);
                    }
                }
              else
                {
                  ATerm x_2 = NULL;
                  t = h_1;
                  t = De_Escape_0_0(t);
                  x_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_2), g_1);
                }
            }
        }
      else
        {
          ATerm b_3 = NULL;
          t = h_1;
          t = De_Escape_0_0(t);
          b_3 = t;
          t = (ATerm) ATinsert(CheckATermList(b_3), g_1);
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
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,t_3 = NULL,u_3 = NULL;
  n_3 = t;
  t = SSL_explode_string(n_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_3 = ATgetFirst((ATermList) t);
      u_3 = (ATerm) ATgetNext((ATermList) t);
      t = u_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_3 = ATgetFirst((ATermList) t);
          p_3 = (ATerm) ATgetNext((ATermList) t);
          t = o_3;
          if(match_int(t, 34))
            {
              t = t_3;
              if(match_int(t, 92))
                {
                  ATerm m_4 = t;
                  int n_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_4 = NULL;
                      t = p_3;
                      t = De_Escape_0_0(t);
                      a_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_4), term_g_4);
                      LocalPopChoice(n_4);
                    }
                  else
                    {
                      t = m_4;
                      {
                        ATerm d_4 = NULL;
                        t = u_3;
                        t = De_Escape_0_0(t);
                        d_4 = t;
                        t = (ATerm) ATinsert(CheckATermList(d_4), t_3);
                      }
                    }
                }
              else
                {
                  ATerm h_4 = NULL;
                  t = u_3;
                  t = De_Escape_0_0(t);
                  h_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_4), t_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = t_3;
                  if(match_int(t, 92))
                    {
                      ATerm p_4 = t;
                      int q_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_4 = NULL;
                          t = p_3;
                          t = De_Escape_0_0(t);
                          k_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(k_4), term_l_4);
                          LocalPopChoice(q_4);
                        }
                      else
                        {
                          t = p_4;
                          {
                            ATerm o_4 = NULL;
                            t = u_3;
                            t = De_Escape_0_0(t);
                            o_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(o_4), t_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm x_4 = NULL;
                      t = u_3;
                      t = De_Escape_0_0(t);
                      x_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_4), t_3);
                    }
                }
              else
                {
                  ATerm h_5 = NULL;
                  t = u_3;
                  t = De_Escape_0_0(t);
                  h_5 = t;
                  t = (ATerm) ATinsert(CheckATermList(h_5), t_3);
                }
            }
        }
      else
        {
          ATerm q_5 = NULL;
          t = u_3;
          t = De_Escape_0_0(t);
          q_5 = t;
          t = (ATerm) ATinsert(CheckATermList(q_5), t_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATempty;
    }
  m_3 = t;
  t = SSL_implode_string(m_3);
  return(t);
}
ATerm at_last_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  static ATerm x_7 (ATerm t)
  {
    ATerm r_7 = NULL,s_7 = NULL,w_7 = NULL;
    r_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_7 = ATgetFirst((ATermList) t);
        w_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_4 = t;
      int s_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 = NULL,o_6 = NULL;
          t = SSLgetAnnotations(r_7);
          w_0 = t;
          t = w_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(w_7), s_7);
          o_6 = t;
          t = SSLsetAnnotations(o_6, w_0);
          t = i_89(t);
          LocalPopChoice(s_4);
        }
      else
        {
          t = r_4;
          {
            ATerm x_1 = NULL,b_2 = NULL,p_6 = NULL;
            t = SSLgetAnnotations(r_7);
            x_1 = t;
            t = w_7;
            t = x_7(t);
            b_2 = t;
            t = (ATerm) ATinsert(CheckATermList(b_2), s_7);
            p_6 = t;
            t = SSLsetAnnotations(p_6, x_1);
          }
        }
    }
    return(t);
  }
  t = x_7(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_4 = ATgetFirst((ATermList) t);
      if(((ATgetType(u_4) != AT_INT) || (ATgetInt((ATermInt) u_4) != 34)))
        _fail(t);
      {
        ATerm v_4 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(v_4) != AT_LIST) || !(ATisEmpty(v_4))))
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
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  k_8 = t;
  t = SSL_explode_string(k_8);
  g_8 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_8 = ATgetFirst((ATermList) t);
      {
        ATerm w_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_8;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = g_8;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_4 = ATgetFirst((ATermList) t);
      i_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_8;
  t = at_last_1_0(j_0, t);
  h_8 = t;
  t = SSL_implode_string(h_8);
  return(t);
}
ATerm filter_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,k_9 = NULL,l_9 = NULL;
  i_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_9;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_9 = ATgetFirst((ATermList) t);
          l_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL,c_7 = NULL;
            t = SSLgetAnnotations(i_9);
            l_2 = t;
            t = k_9;
            t = j_96(t);
            o_2 = t;
            t = l_9;
            t = filter_1_0(j_96, t);
            p_2 = t;
            t = (ATerm) ATinsert(CheckATermList(p_2), o_2);
            c_7 = t;
            t = SSLsetAnnotations(c_7, l_2);
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            t = l_9;
            t = filter_1_0(j_96, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  static ATerm o_10 (ATerm t)
  {
    ATerm k_10 = NULL,m_10 = NULL,n_10 = NULL;
    n_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_10 = ATgetFirst((ATermList) t);
        m_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_3 = NULL,h_3 = NULL,h_7 = NULL;
          t = SSLgetAnnotations(n_10);
          e_3 = t;
          t = m_10;
          t = o_10(t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), k_10);
          h_7 = t;
          t = SSLsetAnnotations(h_7, e_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_10;
        t = x_88(t);
      }
    return(t);
  }
  t = o_10(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_5);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_5);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_5);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm x_11 = NULL,z_11 = NULL,g_12 = NULL;
  g_12 = t;
  if(match_cons(t, sym_cf_1))
    {
      x_11 = ATgetArgument(t, 0);
      t = x_11;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          x_11 = ATgetArgument(t, 0);
          t = x_11;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_g_5);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  x_11 = ATgetArgument(t, 0);
                  z_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(z_11), x_11);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      x_11 = ATgetArgument(t, 0);
                      t = x_11;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(p_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          x_11 = ATgetArgument(t, 0);
                          t = x_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(t_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              x_11 = ATgetArgument(t, 0);
                              t = x_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(u_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  x_11 = ATgetArgument(t, 0);
                                  z_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm a_13 = NULL,e_13 = NULL;
                                    t = x_11;
                                    t = Sym2Strs_0_0(t);
                                    a_13 = t;
                                    t = z_11;
                                    t = Sym2Strs_0_0(t);
                                    e_13 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_5)), e_13), a_13);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      x_11 = ATgetArgument(t, 0);
                                      z_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm h_13 = NULL,i_13 = NULL;
                                        t = x_11;
                                        t = Sym2Strs_0_0(t);
                                        h_13 = t;
                                        t = z_11;
                                        t = Sym2Strs_0_0(t);
                                        i_13 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_5)), i_13), h_13);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm i_5 = t;
                                      int m_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              x_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm a_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_5);
                                          {
                                            ATerm k_13 = NULL;
                                            t = x_11;
                                            t = Sym2Strs_0_0(t);
                                            k_13 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_6)), k_13);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = i_5;
                                          {
                                            ATerm j_6 = t;
                                            int k_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    x_11 = ATgetArgument(t, 0);
                                                    z_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm m_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(k_6);
                                                {
                                                  ATerm r_13 = NULL,v_13 = NULL;
                                                  t = x_11;
                                                  t = Sym2Strs_0_0(t);
                                                  r_13 = t;
                                                  t = z_11;
                                                  t = Sym2Strs_0_0(t);
                                                  v_13 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_6)), v_13), r_13);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = j_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    x_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm x_13 = NULL;
                                                      t = x_11;
                                                      t = Sym2Strs_0_0(t);
                                                      x_13 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, x_13), (ATerm) ATinsert(ATempty, term_n_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        x_11 = ATgetArgument(t, 0);
                                                        z_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_14 = NULL,d_14 = NULL;
                                                          t = x_11;
                                                          t = Sym2Strs_0_0(t);
                                                          c_14 = t;
                                                          t = z_11;
                                                          t = Sym2Strs_0_0(t);
                                                          d_14 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_14), (ATerm) ATinsert(ATempty, term_t_6)), c_14);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            x_11 = ATgetArgument(t, 0);
                                                            z_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm k_14 = NULL,l_14 = NULL;
                                                              t = x_11;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              k_14 = t;
                                                              t = z_11;
                                                              t = Sym2Strs_0_0(t);
                                                              l_14 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_14), (ATerm) ATinsert(ATempty, term_v_6)), k_14);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                x_11 = ATgetArgument(t, 0);
                                                                z_11 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm q_14 = NULL,w_14 = NULL;
                                                                  t = x_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  q_14 = t;
                                                                  t = z_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  w_14 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_14), (ATerm) ATinsert(ATempty, term_a_7)), q_14);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    x_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm y_14 = NULL;
                                                                      t = x_11;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      y_14 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(y_14), term_b_7);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        x_11 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, x_11);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            x_11 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm v_3 = NULL;
                                                                              t = x_11;
                                                                              {
                                                                                ATerm d_7 = t;
                                                                                int e_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(e_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = d_7;
                                                                                  }
                                                                              }
                                                                              v_3 = t;
                                                                              t = (ATerm) ATinsert(ATempty, v_3);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm f_7 = t;
                                                                            int g_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    x_11 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm i_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(g_7);
                                                                                {
                                                                                  ATerm t_4 = NULL;
                                                                                  t = x_11;
                                                                                  {
                                                                                    ATerm j_7 = t;
                                                                                    int o_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(o_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_7;
                                                                                      }
                                                                                  }
                                                                                  t_4 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, t_4);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = f_7;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_p_7);
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
static ATerm p_5 (ATerm w_18, ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  t = y_18;
  t = Sym2Strs_0_0(t);
  j_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_7)), j_15), (ATerm) ATinsert(ATempty, term_q_7));
  t = concat_0_0(t);
  k_15 = t;
  t = SSL_concat_strings(k_15);
  i_15 = t;
  t = SSL_mkterm(i_15, x_18);
  return(t);
}
ATerm topdown_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  static ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(u_81, t);
    return(t);
  }
  t = u_81(t);
  t = SRTS_all(x_0, t);
  return(t);
}
static ATerm r_5 (ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm o_15 = NULL;
  t = SSL_fputc(t_35, u_35);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_15);
  return(t);
}
static ATerm s_5 (ATerm o_20, ATerm p_20, ATerm t)
{
  ATerm r_15 = NULL;
  t = SSL_write_term_to_stream_text(o_20, p_20);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_15);
  return(t);
}
static ATerm u_5 (ATerm x_87 (ATerm), ATerm z_145, ATerm u_20, ATerm t)
{
  ATerm s_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_145, term_t_7);
  t = y_5(t);
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_15, u_20);
  t = x_87(t);
  t = fclose_0_0(t);
  t = u_20;
  return(t);
}
static ATerm t_5 (ATerm k_20, ATerm l_20, ATerm t)
{
  ATerm t_15 = NULL;
  t = SSL_write_term_to_stream_baf(k_20, l_20);
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_15);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_7 = ATgetArgument(t, 0);
      if(match_cons(u_7, sym_Stream_1))
        {
          n_5 = ATgetArgument(u_7, 0);
        }
      else
        _fail(t);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(n_5, o_5, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm u_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if(match_cons(v_7, sym_Stream_1))
        {
          y_6 = ATgetArgument(v_7, 0);
        }
      else
        _fail(t);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(y_6, z_6, t);
  u_6 = t;
  t = term_y_7;
  w_6 = t;
  t = u_6;
  if(match_cons(t, sym_Stream_1))
    {
      x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, u_6);
  t = r_5(w_6, x_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,a_16 = NULL,d_16 = NULL,f_16 = NULL,k_16 = NULL,l_16 = NULL,n_16 = NULL,o_16 = NULL,r_16 = NULL,h_18 = NULL,i_18 = NULL,l_7 = NULL,k_7 = NULL;
  y_15 = t;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_15);
  l_16 = t;
  t = n_16;
  {
    ATerm z_7 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((x_15 != NULL) && (x_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                x_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_0, t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = z_7;
        t = term_d_8;
        x_15 = t;
      }
  }
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_16, o_16);
  k_7 = t;
  t = SSLsetAnnotations(k_7, l_16);
  t = y_15;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_15);
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, (ATerm) ATmakeAppl(sym__2, not_null(x_15), f_16));
  l_7 = t;
  t = SSLsetAnnotations(l_7, a_16);
  k_16 = t;
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL,f_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_7 = NULL;
        t = SSLgetAnnotations(k_16);
        c_5 = t;
        t = h_18;
        t = fetch_1_0(z_0, t);
        f_5 = t;
        t = i_18;
        if(match_cons(t, sym__2))
          {
            k_5 = ATgetArgument(t, 0);
            l_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_5(a_1, k_5, l_5, t);
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_5, j_5);
        m_7 = t;
        t = SSLsetAnnotations(m_7, c_5);
        LocalPopChoice(l_8);
      }
    else
      {
        t = f_8;
        {
          ATerm l_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(k_16);
          l_6 = t;
          t = i_18;
          if(match_cons(t, sym__2))
            {
              r_6 = ATgetArgument(t, 0);
              s_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_5(b_1, r_6, s_6, t);
          q_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_18, q_6);
          n_7 = t;
          t = SSLsetAnnotations(n_7, l_6);
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
ATerm apply_strategy_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL,t_18 = NULL,u_18 = NULL;
  u_18 = t;
  t = dtime_0_0(t);
  t = u_18;
  t = o_105(t);
  t_18 = t;
  t = dtime_0_0(t);
  n_18 = t;
  t = t_18;
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      q_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_18), (ATerm) ATmakeAppl(sym_Runtime_1, n_18)), q_18);
  return(t);
}
static ATerm o_19 (ATerm g_19, ATerm t)
{
  t = SSL_fclose(g_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_19 = NULL,m_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_19 = ATgetArgument(t, 0);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_19);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = o_19(m_19, t);
          }
      }
    }
  else
    {
      t = o_19(m_19, t);
    }
  return(t);
}
static ATerm v_5 (ATerm q_20, ATerm t)
{
  t = SSL_read_term_from_stream(q_20);
  return(t);
}
static ATerm w_5 (ATerm m_34, ATerm n_34, ATerm t)
{
  t = SSL_strcat(m_34, n_34);
  return(t);
}
static ATerm x_5 (ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm p_19 = NULL;
  t = SSL_fopen(v_35, w_35);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_19);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_19 = NULL;
  t = SSL_stdin_stream();
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_19 = NULL;
  t = SSL_stdout_stream();
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  t = SSL_stderr_stream();
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_19);
  return(t);
}
static ATerm c_22 (ATerm c_20, ATerm t)
{
  ATerm d_20 = NULL;
  t = SSL_explode_term(c_20);
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_8 = ATgetArgument(t, 1);
        if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
          {
            d_20 = ATgetFirst((ATermList) r_8);
            {
              ATerm s_8 = (ATerm) ATgetNext((ATermList) r_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_20;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_20;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_20;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_20;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_22 (ATerm g_20, ATerm h_20, ATerm i_20, ATerm t)
{
  ATerm j_20 = NULL,m_20 = NULL,r_20 = NULL,w_20 = NULL,e_8 = NULL;
  t = SSLgetAnnotations(i_20);
  r_20 = t;
  t = g_20;
  if(match_cons(t, sym_Path_1))
    {
      w_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_20, h_20);
  e_8 = t;
  t = SSLsetAnnotations(e_8, r_20);
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(j_20, m_20, t);
  return(t);
}
static ATerm e_22 (ATerm y_20, ATerm j_21, ATerm m_21, ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,s_21 = NULL,v_8 = NULL;
  t = SSLgetAnnotations(m_21);
  p_21 = t;
  t = SSL_is_string(y_20);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_21, j_21);
  v_8 = t;
  t = SSLsetAnnotations(v_8, p_21);
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(n_21, o_21, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  z_21 = t;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_22(z_21, t);
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            {
              ATerm w_8 = t;
              int x_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_22(a_22, b_22, z_21, t);
                  LocalPopChoice(x_8);
                }
              else
                {
                  t = w_8;
                  t = e_22(a_22, b_22, z_21, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_22(z_21, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_22 = NULL,k_22 = NULL,l_22 = NULL,q_22 = NULL;
  q_22 = t;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_22, term_c_9);
        t = y_5(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          ATerm a_8 = NULL,b_8 = NULL;
          t = term_d_9;
          b_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_9, q_22);
          t = w_5(b_8, q_22, t);
          a_8 = t;
          t = SSL_perror(a_8);
          _fail(t);
        }
      }
  }
  k_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_5(l_22, t);
  h_22 = t;
  t = k_22;
  t = fclose_0_0(t);
  t = h_22;
  return(t);
}
ATerm fetch_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  static ATerm a_24 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL,z_23 = NULL;
    v_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_23 = ATgetFirst((ATermList) t);
        z_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_9 = t;
      int h_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_8 = NULL,p_8 = NULL,a_9 = NULL;
          t = SSLgetAnnotations(v_23);
          m_8 = t;
          t = w_23;
          t = q_88(t);
          p_8 = t;
          t = (ATerm) ATinsert(CheckATermList(z_23), p_8);
          a_9 = t;
          t = SSLsetAnnotations(a_9, m_8);
          LocalPopChoice(h_9);
        }
      else
        {
          t = f_9;
          {
            ATerm g_9 = NULL,n_9 = NULL,b_9 = NULL;
            t = SSLgetAnnotations(v_23);
            g_9 = t;
            t = z_23;
            t = a_24(t);
            n_9 = t;
            t = (ATerm) ATinsert(CheckATermList(n_9), w_23);
            b_9 = t;
            t = SSLsetAnnotations(b_9, g_9);
          }
        }
    }
    return(t);
  }
  t = a_24(t);
  return(t);
}
static ATerm d_6 (ATerm a_52, ATerm b_52, ATerm t)
{
  ATerm g_24 = NULL;
  t = lookup_table_0_1(a_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(b_52, g_24, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm j_24 = NULL;
  j_24 = t;
  {
    ATerm j_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
        t = term_o_9;
        n_24 = t;
        t = term_p_9;
        o_24 = t;
        t = term_q_9;
        t = d_6(n_24, o_24, t);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_24, term_r_9);
        t = geq_0_0(t);
        t = j_24;
        t = x_103(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = j_9;
        t = j_24;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  if(match_string(t, "-k"))
    {
      t = z_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_24;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm a_25 = NULL,d_25 = NULL,f_25 = NULL;
  a_25 = t;
  t = SSL_string_to_int(a_25);
  d_25 = t;
  t = term_v_9;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, d_25);
  t = g_6(f_25, d_25, t);
  t = a_25;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_1, d_1, i_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  if(match_string(t, "-S"))
    {
      t = k_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_25;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  t = term_p_9;
  l_25 = t;
  t = term_a_10;
  m_25 = t;
  t = term_d_10;
  t = g_6(l_25, m_25, t);
  t = term_e_10;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm n_25 = NULL,q_25 = NULL,r_25 = NULL;
  n_25 = t;
  t = SSL_string_to_int(n_25);
  q_25 = t;
  t = term_p_9;
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, q_25);
  t = g_6(r_25, q_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_25);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_h_10;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm s_25 = NULL,v_25 = NULL;
  t = term_i_10;
  s_25 = t;
  t = term_v_0;
  v_25 = t;
  t = term_l_10;
  t = g_6(s_25, v_25, t);
  t = term_p_10;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_1, l_1, m_1, t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_1, p_1, r_1, t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = Option_3_0(t_1, u_1, v_1, t);
          }
      }
    }
  return(t);
}
static ATerm g_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  t = term_o_9;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, m_45, n_45);
  t = lookup_table_0_1(x_25, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(m_45, n_45, y_25, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_9, m_45, n_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL;
      t = term_v_0;
      t = e_0(t);
      h_26 = t;
      t = term_v_10;
      i_26 = t;
      t = term_w_10;
      j_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, h_26);
      t = e_6(i_26, j_26, h_26, t);
      _fail(t);
    }
  else
    {
      ATerm m_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_26 = ATgetFirst((ATermList) t);
          g_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_26;
      t = c_0(t);
      t = term_v_0;
      t = d_0(t);
      m_26 = t;
      t = (ATerm) ATinsert(CheckATermList(g_26), m_26);
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  if(match_string(t, "-o"))
    {
      t = o_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_26;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  p_26 = t;
  t = term_y_10;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, p_26);
  t = g_6(q_26, p_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_26);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_1, y_1, a_2, t);
  return(t);
}
static ATerm e_6 (ATerm h_50, ATerm i_50, ATerm g_50, ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL,y_26 = NULL;
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_11 = ATgetArgument(t, 0);
            ATerm d_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
        t = d_6(h_50, i_50, t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATempty;
      }
  }
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_50, i_50, (ATerm) ATinsert(CheckATermList(t_26), g_50));
  t = lookup_table_0_1(h_50, t);
  y_26 = t;
  t = (ATerm) ATinsert(CheckATermList(t_26), g_50);
  u_26 = t;
  t = y_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(i_50, u_26, x_26, t);
  t = s_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,o_27 = NULL,p_27 = NULL,r_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
      t = term_v_0;
      t = n_0(t);
      u_27 = t;
      t = term_v_10;
      v_27 = t;
      t = term_w_10;
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, u_27);
      t = e_6(v_27, w_27, u_27, t);
      _fail(t);
    }
  else
    {
      ATerm a_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_27 = ATgetFirst((ATermList) t);
          o_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_27 = ATgetFirst((ATermList) t);
          r_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_27;
      t = k_0(t);
      t = p_27;
      t = l_0(t);
      a_28 = t;
      t = (ATerm) ATinsert(CheckATermList(r_27), a_28);
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm c_28 = NULL;
  c_28 = t;
  if(match_string(t, "-i"))
    {
      t = c_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_28;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  d_28 = t;
  t = term_e_11;
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, d_28);
  t = g_6(e_28, d_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_28);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_0;
  t = whoami_0_0(t);
  f_28 = t;
  t = term_y_3;
  h_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_11), f_28);
  i_28 = t;
  t = SSL_printnl(h_28, i_28);
  t = term_c_4;
  g_28 = t;
  t = SSL_exit(g_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  t = term_o_9;
  j_28 = t;
  t = term_h_11;
  k_28 = t;
  t = term_j_11;
  t = d_6(j_28, k_28, t);
  return(t);
}
static ATerm z_5 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_38, q_38);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = SSL_addr(p_38, q_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_28;
      t = f_95(t);
    }
  else
    {
      ATerm v_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_28;
      t = foldr_2_0(f_95, g_95, t);
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_28, v_28);
      t = g_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm z_9 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_5(z_9, c_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_28 = NULL,s_9 = NULL,u_9 = NULL;
  t = times_0_0(t);
  u_9 = t;
  t = SSL_explode_term(u_9);
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9;
  t = foldr_2_0(f_2, g_2, t);
  y_28 = t;
  t = SSL_TicksToSeconds(y_28);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  if(match_cons(t, sym__2))
    {
      k_29 = ATgetArgument(t, 0);
      l_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_29;
        if((k_29 != t))
          {
            _fail(t);
          }
        t = j_29;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATmakeAppl(sym__2, k_29, l_29);
        {
          ATerm p_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_29, l_29);
              LocalPopChoice(q_11);
            }
          else
            {
              t = p_11;
              t = SSL_gtr(k_29, l_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_29, l_29);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  {
    ATerm r_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
        t = term_o_9;
        s_29 = t;
        t = term_p_9;
        t_29 = t;
        t = term_q_9;
        t = d_6(s_29, t_29, t);
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_29, term_c_4);
        t = geq_0_0(t);
        t = p_29;
        t = w_103(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = r_11;
        t = p_29;
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,y_29 = NULL,z_29 = NULL;
  t = run_time_0_0(t);
  v_29 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  w_29 = t;
  t = term_y_3;
  y_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_11), v_29), term_u_11), w_29);
  z_29 = t;
  t = SSL_printnl(y_29, z_29);
  t = (ATerm) ATmakeAppl(sym__2, term_y_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_11), v_29), term_u_11), w_29));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_10;
  a_30 = t;
  t = SSL_exit(a_30);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  l_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_30 = ATgetArgument(t, 0);
          {
            ATerm x_10 = NULL,e_9 = NULL;
            t = SSLgetAnnotations(l_30);
            x_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_30);
            e_9 = t;
            t = SSLsetAnnotations(e_9, x_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm w_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_30 = NULL,e_30 = NULL;
      t = term_o_9;
      d_30 = t;
      t = term_a_12;
      e_30 = t;
      t = term_b_12;
      t = d_6(d_30, e_30, t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(i_2, t);
    }
  t = m_106(t);
  return(t);
}
static ATerm h_6 (ATerm z_53, ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_hashtable_put(b_54, z_53, a_54);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_30);
  return(t);
}
static ATerm i_6 (ATerm c_54, ATerm d_54, ATerm t)
{
  t = SSL_hashtable_get(d_54, c_54);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_51, ATerm t)
{
  ATerm w_30 = NULL;
  t = table_hashtable_0_0(t);
  w_30 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 = NULL;
        t = w_30;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_6(t_51, i_11, t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        {
          ATerm s_11 = NULL;
          t = t_51;
          t = table_create_0_0(t);
          t = w_30;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_6(t_51, s_11, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_54, ATerm i_54, ATerm t)
{
  ATerm z_30 = NULL;
  t = SSL_hashtable_create(h_54, i_54);
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_30);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,e_31 = NULL,f_31 = NULL;
  a_31 = t;
  t = term_h_12;
  e_31 = t;
  t = term_j_12;
  f_31 = t;
  t = a_31;
  t = new_hashtable_0_2(e_31, f_31, t);
  b_31 = t;
  t = a_31;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(a_31, b_31, c_31, t);
  t = a_31;
  return(t);
}
static ATerm b_6 (ATerm e_54, ATerm f_54, ATerm t)
{
  ATerm g_31 = NULL;
  t = SSL_hashtable_remove(f_54, e_54);
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_31);
  return(t);
}
static ATerm c_6 (ATerm j_54, ATerm t)
{
  ATerm h_31 = NULL;
  t = SSL_hashtable_destroy(j_54);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_31);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_31 = NULL;
  t = SSL_table_hashtable();
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_31);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  j_31 = t;
  t = table_hashtable_0_0(t);
  k_31 = t;
  t = lookup_table_0_1(j_31, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(m_31, t);
  t = k_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(j_31, l_31, t);
  t = j_31;
  return(t);
}
ATerm map_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  static ATerm b_32 (ATerm t)
  {
    ATerm y_31 = NULL,z_31 = NULL,a_32 = NULL;
    y_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_31;
      }
    else
      {
        ATerm c_12 = NULL,f_12 = NULL,i_12 = NULL,t_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_31 = ATgetFirst((ATermList) t);
            a_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_31);
        c_12 = t;
        t = z_31;
        t = g_88(t);
        f_12 = t;
        t = a_32;
        t = b_32(t);
        i_12 = t;
        t = (ATerm) ATinsert(CheckATermList(i_12), f_12);
        t_9 = t;
        t = SSLsetAnnotations(t_9, c_12);
      }
    return(t);
  }
  t = b_32(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_32 = ATgetFirst((ATermList) t);
      f_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_32 = NULL,k_32 = NULL;
        static ATerm j_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_32)), not_null(k_32));
          return(t);
        }
        t = f_32;
        t = i_0(t);
        if(((j_32 != NULL) && (j_32 != t)))
          _fail(t);
        else
          j_32 = t;
        t = e_32;
        t = g_0(t);
        if(((k_32 != NULL) && (k_32 != t)))
          _fail(t);
        else
          k_32 = t;
        t = f_32;
        t = reverse_acc_2_0(g_0, j_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_0;
      t = i_0(t);
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,w_9 = NULL;
  s_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_32);
  w_9 = t;
  t = SSLsetAnnotations(w_9, q_32);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_32), term_k_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_32 = NULL,p_32 = NULL;
      t = term_o_9;
      o_32 = t;
      t = term_h_11;
      p_32 = t;
      t = term_j_11;
      t = d_6(o_32, p_32, t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = fetch_1_0(k_2, t);
    }
  t = term_n_12;
  t = echo_0_0(t);
  t = term_v_10;
  m_32 = t;
  t = term_w_10;
  n_32 = t;
  t = term_o_12;
  t = d_6(m_32, n_32, t);
  t = reverse_acc_2_0(_id, m_2, t);
  t = map_1_0(n_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  w_32 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_12 = ATgetFirst((ATermList) t);
                ATerm s_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_32;
          }
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = (ATerm) ATinsert(ATempty, w_32);
      }
  }
  x_32 = t;
  t = term_d_8;
  y_32 = t;
  t = SSL_printnl(y_32, x_32);
  t = w_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  t = term_o_9;
  c_33 = t;
  t = term_h_11;
  d_33 = t;
  t = term_j_11;
  t = d_6(c_33, d_33, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL;
  t = term_t_12;
  e_33 = t;
  t = term_v_0;
  f_33 = t;
  t = term_u_12;
  t = g_6(e_33, f_33, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  t = term_t_12;
  i_33 = t;
  t = term_v_0;
  j_33 = t;
  t = term_u_12;
  t = g_6(i_33, j_33, t);
  t = term_z_12;
  g_33 = t;
  t = term_v_0;
  h_33 = t;
  t = term_b_13;
  t = g_6(g_33, h_33, t);
  t = term_c_13;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_2, s_2, t_2, t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      t = Option_3_0(u_2, v_2, w_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_61 (ATerm), ATerm k_61 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,y_9 = NULL;
  p_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_33 = ATgetFirst((ATermList) t);
      m_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_33);
  k_33 = t;
  t = l_33;
  t = j_61(t);
  n_33 = t;
  t = m_33;
  t = k_61(t);
  o_33 = t;
  t = (ATerm) ATinsert(CheckATermList(o_33), n_33);
  y_9 = t;
  t = SSLsetAnnotations(y_9, k_33);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,z_33 = NULL,a_34 = NULL,b_10 = NULL;
  u_33 = t;
  {
    ATerm j_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_13;
        t = p_108(t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = j_13;
      }
  }
  t = u_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_33 = ATgetFirst((ATermList) t);
      x_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_33);
  v_33 = t;
  t = term_h_11;
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, w_33);
  t = g_6(a_34, w_33, t);
  t = x_33;
  {
    static ATerm k_34 (ATerm t)
    {
      ATerm q_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_34 = NULL;
              d_34 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_34;
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = p_108(t);
              t = Cons_2_0(_id, k_34, t);
            }
          LocalPopChoice(s_13);
        }
      else
        {
          t = q_13;
          {
            ATerm g_34 = NULL,h_34 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_34 = ATgetFirst((ATermList) t);
                h_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_34), (ATerm) ATmakeAppl(sym_Undefined_1, g_34));
          }
        }
      return(t);
    }
    t = k_34(t);
  }
  z_33 = t;
  t = (ATerm) ATinsert(CheckATermList(z_33), (ATerm) ATmakeAppl(sym_Program_1, w_33));
  b_10 = t;
  t = SSLsetAnnotations(b_10, v_33);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "--help"))
    {
      t = z_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_34;
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  t = term_a_12;
  a_35 = t;
  t = term_v_0;
  b_35 = t;
  t = term_w_13;
  t = g_6(a_35, b_35, t);
  t = term_y_13;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  t_34 = t;
  t = term_v_10;
  u_34 = t;
  t = term_a_14;
  t = lookup_table_0_1(u_34, t);
  y_34 = t;
  t = term_w_10;
  v_34 = t;
  t = (ATerm) ATempty;
  w_34 = t;
  t = y_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(v_34, w_34, x_34, t);
  t = t_34;
  {
    static ATerm y_2 (ATerm t)
    {
      ATerm b_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_108(t);
          LocalPopChoice(e_14);
        }
      else
        {
          t = b_14;
          {
            ATerm f_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_2, a_3, c_3, t);
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
    t = parse_options_p__1_0(y_2, t);
  }
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_35 = NULL;
        m_35 = t;
        {
          ATerm j_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_12 = NULL;
              t = m_35;
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_12 = NULL,x_12 = NULL;
                    t = term_o_9;
                    w_12 = t;
                    t = term_a_12;
                    x_12 = t;
                    t = term_b_12;
                    t = d_6(w_12, x_12, t);
                    LocalPopChoice(o_14);
                  }
                else
                  {
                    t = n_14;
                    t = fetch_1_0(d_3, t);
                  }
              }
              t = m_35;
              t = default_system_usage_0_0(t);
              t = term_a_10;
              v_12 = t;
              t = SSL_exit(v_12);
              LocalPopChoice(m_14);
            }
          else
            {
              t = j_14;
              {
                ATerm l_13 = NULL,m_13 = NULL,o_13 = NULL;
                t = term_o_9;
                m_13 = t;
                t = term_t_12;
                o_13 = t;
                t = term_p_14;
                t = d_6(m_13, o_13, t);
                t = m_35;
                t = default_system_about_0_0(t);
                t = term_a_10;
                l_13 = t;
                t = SSL_exit(l_13);
              }
            }
        }
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
              ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
              static ATerm f_3 (ATerm t)
              {
                ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,f_10 = NULL;
                s_35 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_35);
                q_35 = t;
                t = r_35;
                if(((r_34 != NULL) && (r_34 != t)))
                  _fail(t);
                else
                  r_34 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_35);
                f_10 = t;
                t = SSLsetAnnotations(f_10, q_35);
                return(t);
              }
              t = fetch_1_0(f_3, t);
              t = term_y_3;
              o_35 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_34)), term_t_14);
              p_35 = t;
              t = SSL_printnl(o_35, p_35);
              t = (ATerm) ATmakeAppl(sym__2, term_y_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_34)), term_t_14));
              t = default_system_usage_0_0(t);
              t = term_c_4;
              n_35 = t;
              t = SSL_exit(n_35);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
            }
        }
      }
  }
  s_34 = t;
  t = term_v_10;
  t = table_destroy_0_0(t);
  t = s_34;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  t = parse_options_1_0(o_106, t);
  e_36 = t;
  t = term_u_14;
  t = table_create_0_0(t);
  t = term_u_14;
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_14, term_v_14, e_36);
  t = lookup_table_0_1(f_36, t);
  i_36 = t;
  t = term_v_14;
  g_36 = t;
  t = i_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(g_36, e_36, h_36, t);
  t = e_36;
  t = q_106(t);
  {
    ATerm x_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_106, t);
        LocalPopChoice(z_14);
      }
    else
      {
        t = x_14;
        {
          ATerm a_15 = t;
          int b_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_15);
            }
          else
            {
              t = a_15;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = if_verbose2_1_0(r_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  t = term_c_15;
  j_36 = t;
  t = term_v_0;
  k_36 = t;
  t = term_d_15;
  t = g_6(j_36, k_36, t);
  t = term_e_15;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_f_15;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL;
  l_36 = t;
  t = term_o_9;
  p_36 = t;
  t = term_h_11;
  q_36 = t;
  t = term_j_11;
  t = d_6(p_36, q_36, t);
  m_36 = t;
  t = term_y_3;
  n_36 = t;
  t = (ATerm) ATinsert(ATempty, m_36);
  o_36 = t;
  t = SSL_printnl(n_36, o_36);
  t = l_36;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  static ATerm g_3 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        {
          ATerm l_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(m_15);
            }
          else
            {
              t = l_15;
              {
                ATerm n_15 = t;
                int p_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(p_15);
                  }
                else
                  {
                    t = n_15;
                    {
                      ATerm q_15 = t;
                      int u_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_3, l_3, q_3, t);
                          LocalPopChoice(u_15);
                        }
                      else
                        {
                          t = q_15;
                          {
                            ATerm v_15 = t;
                            int w_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(w_15);
                              }
                            else
                              {
                                t = v_15;
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
  static ATerm j_3 (ATerm t)
  {
    ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
    s_36 = t;
    {
      ATerm z_15 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm s_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_36 != NULL) && (r_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_3, t);
          LocalPopChoice(b_16);
        }
      else
        {
          t = z_15;
          t = term_c_16;
          r_36 = t;
        }
    }
    t = not_null(r_36);
    t = ReadFromFile_0_0(t);
    t_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_36, t_36);
    t = apply_strategy_1_0(x_105, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_3, z_105, i_3, j_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,j_10 = NULL;
  b_37 = t;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_37);
  x_36 = t;
  t = z_36;
  t = topdown_1_0(x_3, t);
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, a_37);
  j_10 = t;
  t = SSLsetAnnotations(j_10, x_36);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  h_37 = t;
  if(match_cons(t, sym_appl_2))
    {
      g_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
      t = g_37;
      {
        ATerm e_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                c_37 = ATgetArgument(t, 0);
                d_37 = ATgetArgument(t, 1);
                {
                  ATerm h_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_16);
            {
              ATerm i_16 = t;
              int j_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_37;
                  t = p_5(c_37, d_37, f_37, t);
                  LocalPopChoice(j_16);
                }
              else
                {
                  t = i_16;
                  t = h_37;
                }
            }
          }
        else
          {
            t = e_16;
            t = h_37;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          g_37 = ATgetArgument(t, 0);
          t = g_37;
        }
      else
        {
          t = h_37;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_3, _fail, default_usage_0_0, t);
  return(t);
}

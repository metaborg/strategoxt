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
ATerm term_o_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_f_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_e_8;
ATerm term_x_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_e_6;
ATerm term_t_5;
ATerm term_o_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_l_4;
ATerm term_h_4;
ATerm term_d_4;
ATerm term_c_4;
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
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_m_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_v_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_v_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_d_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_s_10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_v_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_v_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_v_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_m_12);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_q_14, term_v_0);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm o_87 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm d_87 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm d_5 (ATerm w_18, ATerm y_18, ATerm x_18, ATerm t);
ATerm topdown_1_0 (ATerm a_80 (ATerm), ATerm t);
static ATerm f_5 (ATerm t_35, ATerm u_35, ATerm t);
static ATerm g_5 (ATerm o_20, ATerm p_20, ATerm t);
static ATerm i_5 (ATerm d_86 (ATerm), ATerm w_143, ATerm u_20, ATerm t);
static ATerm h_5 (ATerm k_20, ATerm l_20, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_103 (ATerm), ATerm t);
static ATerm f_19 (ATerm t_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_5 (ATerm q_20, ATerm t);
static ATerm k_5 (ATerm m_34, ATerm n_34, ATerm t);
static ATerm l_5 (ATerm v_35, ATerm w_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_21 (ATerm q_19, ATerm t);
static ATerm o_21 (ATerm c_20, ATerm d_20, ATerm f_20, ATerm t);
static ATerm p_21 (ATerm x_20, ATerm y_20, ATerm z_20, ATerm t);
static ATerm m_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_86 (ATerm), ATerm t);
static ATerm p_5 (ATerm y_51, ATerm z_51, ATerm t);
ATerm if_verbose2_1_0 (ATerm v_101 (ATerm), ATerm t);
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
static ATerm s_5 (ATerm m_45, ATerm n_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm h_50, ATerm i_50, ATerm g_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_5 (ATerm p_38, ATerm q_38, ATerm t);
ATerm foldr_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_101 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm need_help_1_0 (ATerm k_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_86 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm p_59 (ATerm), ATerm q_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_106 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm parse_options_1_0 (ATerm m_106 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm iowrap_3_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_4), b_0), term_z_3);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_d_4;
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
                  int g_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 = NULL;
                      t = f_1;
                      t = De_Escape_0_0(t);
                      k_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_1), term_h_4);
                      LocalPopChoice(g_4);
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
                      ATerm j_4 = t;
                      int k_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_1 = NULL;
                          t = f_1;
                          t = De_Escape_0_0(t);
                          s_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_1), term_l_4);
                          LocalPopChoice(k_4);
                        }
                      else
                        {
                          t = j_4;
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
                  ATerm n_4 = t;
                  int o_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_3 = NULL;
                      t = p_3;
                      t = De_Escape_0_0(t);
                      x_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(x_3), term_h_4);
                      LocalPopChoice(o_4);
                    }
                  else
                    {
                      t = n_4;
                      {
                        ATerm b_4 = NULL;
                        t = u_3;
                        t = De_Escape_0_0(t);
                        b_4 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_4), t_3);
                      }
                    }
                }
              else
                {
                  ATerm f_4 = NULL;
                  t = u_3;
                  t = De_Escape_0_0(t);
                  f_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(f_4), t_3);
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
                          ATerm i_4 = NULL;
                          t = p_3;
                          t = De_Escape_0_0(t);
                          i_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(i_4), term_l_4);
                          LocalPopChoice(q_4);
                        }
                      else
                        {
                          t = p_4;
                          {
                            ATerm m_4 = NULL;
                            t = u_3;
                            t = De_Escape_0_0(t);
                            m_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_4), t_3);
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
                  ATerm r_5 = NULL;
                  t = u_3;
                  t = De_Escape_0_0(t);
                  r_5 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_5), t_3);
                }
            }
        }
      else
        {
          ATerm z_5 = NULL;
          t = u_3;
          t = De_Escape_0_0(t);
          z_5 = t;
          t = (ATerm) ATinsert(CheckATermList(z_5), t_3);
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
ATerm at_last_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  static ATerm s_7 (ATerm t)
  {
    ATerm j_7 = NULL,l_7 = NULL,q_7 = NULL;
    j_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_7 = ATgetFirst((ATermList) t);
        q_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_4 = t;
      int t_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(j_7);
          w_0 = t;
          t = q_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(q_7), l_7);
          h_6 = t;
          t = SSLsetAnnotations(h_6, w_0);
          t = o_87(t);
          LocalPopChoice(t_4);
        }
      else
        {
          t = r_4;
          {
            ATerm x_1 = NULL,b_2 = NULL,o_6 = NULL;
            t = SSLgetAnnotations(j_7);
            x_1 = t;
            t = q_7;
            t = s_7(t);
            b_2 = t;
            t = (ATerm) ATinsert(CheckATermList(b_2), l_7);
            o_6 = t;
            t = SSLsetAnnotations(o_6, x_1);
          }
        }
    }
    return(t);
  }
  t = s_7(t);
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
  ATerm v_7 = NULL,w_7 = NULL,b_8 = NULL,d_8 = NULL,h_8 = NULL;
  h_8 = t;
  t = SSL_explode_string(h_8);
  v_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_8 = ATgetFirst((ATermList) t);
      {
        ATerm w_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_8;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = v_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_4 = ATgetFirst((ATermList) t);
      b_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_8;
  t = at_last_1_0(j_0, t);
  w_7 = t;
  t = SSL_implode_string(w_7);
  return(t);
}
ATerm filter_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,f_9 = NULL,g_9 = NULL;
  y_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_9 = ATgetFirst((ATermList) t);
          g_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_4 = t;
        int a_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 = NULL,o_2 = NULL,p_2 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(y_8);
            l_2 = t;
            t = f_9;
            t = h_94(t);
            o_2 = t;
            t = g_9;
            t = filter_1_0(h_94, t);
            p_2 = t;
            t = (ATerm) ATinsert(CheckATermList(p_2), o_2);
            v_6 = t;
            t = SSLsetAnnotations(v_6, l_2);
            LocalPopChoice(a_5);
          }
        else
          {
            t = z_4;
            t = g_9;
            t = filter_1_0(h_94, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  static ATerm i_10 (ATerm t)
  {
    ATerm d_10 = NULL,e_10 = NULL,g_10 = NULL;
    g_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_10 = ATgetFirst((ATermList) t);
        e_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_3 = NULL,h_3 = NULL,x_6 = NULL;
          t = SSLgetAnnotations(g_10);
          e_3 = t;
          t = e_10;
          t = i_10(t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), d_10);
          x_6 = t;
          t = SSLsetAnnotations(x_6, e_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_10;
        t = d_87(t);
      }
    return(t);
  }
  t = i_10(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_5);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_5);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_o_5);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL;
  v_11 = t;
  if(match_cons(t, sym_cf_1))
    {
      r_11 = ATgetArgument(t, 0);
      t = r_11;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          r_11 = ATgetArgument(t, 0);
          t = r_11;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_t_5);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  r_11 = ATgetArgument(t, 0);
                  u_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(u_11), r_11);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      r_11 = ATgetArgument(t, 0);
                      t = r_11;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(p_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          r_11 = ATgetArgument(t, 0);
                          t = r_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(t_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              r_11 = ATgetArgument(t, 0);
                              t = r_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(u_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  r_11 = ATgetArgument(t, 0);
                                  u_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_12 = NULL,t_12 = NULL;
                                    t = r_11;
                                    t = Sym2Strs_0_0(t);
                                    s_12 = t;
                                    t = u_11;
                                    t = Sym2Strs_0_0(t);
                                    t_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_5)), t_12), s_12);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      r_11 = ATgetArgument(t, 0);
                                      u_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm w_12 = NULL,z_12 = NULL;
                                        t = r_11;
                                        t = Sym2Strs_0_0(t);
                                        w_12 = t;
                                        t = u_11;
                                        t = Sym2Strs_0_0(t);
                                        z_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_5)), z_12), w_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm u_5 = t;
                                      int v_5 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              r_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm d_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(v_5);
                                          {
                                            ATerm c_13 = NULL;
                                            t = r_11;
                                            t = Sym2Strs_0_0(t);
                                            c_13 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_6)), c_13);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = u_5;
                                          {
                                            ATerm f_6 = t;
                                            int g_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    u_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(g_6);
                                                {
                                                  ATerm i_13 = NULL,j_13 = NULL;
                                                  t = r_11;
                                                  t = Sym2Strs_0_0(t);
                                                  i_13 = t;
                                                  t = u_11;
                                                  t = Sym2Strs_0_0(t);
                                                  j_13 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_6)), j_13), i_13);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = f_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    r_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm o_13 = NULL;
                                                      t = r_11;
                                                      t = Sym2Strs_0_0(t);
                                                      o_13 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, o_13), (ATerm) ATinsert(ATempty, term_k_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        r_11 = ATgetArgument(t, 0);
                                                        u_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm v_13 = NULL,w_13 = NULL;
                                                          t = r_11;
                                                          t = Sym2Strs_0_0(t);
                                                          v_13 = t;
                                                          t = u_11;
                                                          t = Sym2Strs_0_0(t);
                                                          w_13 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_13), (ATerm) ATinsert(ATempty, term_p_6)), v_13);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            r_11 = ATgetArgument(t, 0);
                                                            u_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm g_14 = NULL,h_14 = NULL;
                                                              t = r_11;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              g_14 = t;
                                                              t = u_11;
                                                              t = Sym2Strs_0_0(t);
                                                              h_14 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_14), (ATerm) ATinsert(ATempty, term_t_6)), g_14);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                r_11 = ATgetArgument(t, 0);
                                                                u_11 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm m_14 = NULL,n_14 = NULL;
                                                                  t = r_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  m_14 = t;
                                                                  t = u_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  n_14 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_14), (ATerm) ATinsert(ATempty, term_w_6)), m_14);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    r_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm s_14 = NULL;
                                                                      t = r_11;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      s_14 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(s_14), term_y_6);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        r_11 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, r_11);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            r_11 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm a_4 = NULL;
                                                                              t = r_11;
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
                                                                              a_4 = t;
                                                                              t = (ATerm) ATinsert(ATempty, a_4);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm g_7 = t;
                                                                            int h_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    r_11 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm i_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(h_7);
                                                                                {
                                                                                  ATerm s_4 = NULL;
                                                                                  t = r_11;
                                                                                  {
                                                                                    ATerm k_7 = t;
                                                                                    int m_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(m_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = k_7;
                                                                                      }
                                                                                  }
                                                                                  s_4 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, s_4);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = g_7;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_n_7);
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
static ATerm d_5 (ATerm w_18, ATerm y_18, ATerm x_18, ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  t = y_18;
  t = Sym2Strs_0_0(t);
  d_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_7)), d_15), (ATerm) ATinsert(ATempty, term_o_7));
  t = concat_0_0(t);
  e_15 = t;
  t = SSL_concat_strings(e_15);
  c_15 = t;
  t = SSL_mkterm(c_15, x_18);
  return(t);
}
ATerm topdown_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  static ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(a_80, t);
    return(t);
  }
  t = a_80(t);
  t = SRTS_all(x_0, t);
  return(t);
}
static ATerm f_5 (ATerm t_35, ATerm u_35, ATerm t)
{
  ATerm f_15 = NULL;
  t = SSL_fputc(t_35, u_35);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_15);
  return(t);
}
static ATerm g_5 (ATerm o_20, ATerm p_20, ATerm t)
{
  ATerm g_15 = NULL;
  t = SSL_write_term_to_stream_text(o_20, p_20);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_15);
  return(t);
}
static ATerm i_5 (ATerm d_86 (ATerm), ATerm w_143, ATerm u_20, ATerm t)
{
  ATerm h_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_143, term_p_7);
  t = m_5(t);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_15, u_20);
  t = d_86(t);
  t = fclose_0_0(t);
  t = u_20;
  return(t);
}
static ATerm h_5 (ATerm k_20, ATerm l_20, ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_write_term_to_stream_baf(k_20, l_20);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_15);
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
  ATerm b_6 = NULL,c_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_Stream_1))
        {
          b_6 = ATgetArgument(r_7, 0);
        }
      else
        _fail(t);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(b_6, c_6, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,u_6 = NULL,f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if(match_cons(t_7, sym_Stream_1))
        {
          u_6 = ATgetArgument(t_7, 0);
        }
      else
        _fail(t);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(u_6, f_7, t);
  q_6 = t;
  t = term_x_7;
  r_6 = t;
  t = q_6;
  if(match_cons(t, sym_Stream_1))
    {
      s_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, q_6);
  t = f_5(r_6, s_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,x_15 = NULL,y_15 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,y_17 = NULL,z_17 = NULL,a_7 = NULL,z_6 = NULL;
  u_15 = t;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_15);
  e_16 = t;
  t = f_16;
  {
    ATerm y_7 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_15 = ATgetArgument(t, 0);
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
        t = y_7;
        t = term_e_8;
        t_15 = t;
      }
  }
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_16, g_16);
  z_6 = t;
  t = SSLsetAnnotations(z_6, e_16);
  t = u_15;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_15);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, (ATerm) ATmakeAppl(sym__2, not_null(t_15), y_15));
  a_7 = t;
  t = SSLsetAnnotations(a_7, v_15);
  d_16 = t;
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,a_6 = NULL,b_7 = NULL;
        t = SSLgetAnnotations(d_16);
        e_5 = t;
        t = y_17;
        t = fetch_1_0(z_0, t);
        w_5 = t;
        t = z_17;
        if(match_cons(t, sym__2))
          {
            y_5 = ATgetArgument(t, 0);
            a_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_5(a_1, y_5, a_6, t);
        x_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_5, x_5);
        b_7 = t;
        t = SSLsetAnnotations(b_7, e_5);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        {
          ATerm i_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL,c_7 = NULL;
          t = SSLgetAnnotations(d_16);
          i_6 = t;
          t = z_17;
          if(match_cons(t, sym__2))
            {
              m_6 = ATgetArgument(t, 0);
              n_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_5(b_1, m_6, n_6, t);
          l_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_17, l_6);
          c_7 = t;
          t = SSLsetAnnotations(c_7, i_6);
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
ATerm apply_strategy_1_0 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  j_18 = t;
  t = dtime_0_0(t);
  t = j_18;
  t = m_103(t);
  i_18 = t;
  t = dtime_0_0(t);
  e_18 = t;
  t = i_18;
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_18), (ATerm) ATmakeAppl(sym_Runtime_1, e_18)), h_18);
  return(t);
}
static ATerm f_19 (ATerm t_18, ATerm t)
{
  t = SSL_fclose(t_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_19 = ATgetArgument(t, 0);
      {
        ATerm j_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_19);
            LocalPopChoice(k_8);
          }
        else
          {
            t = j_8;
            t = f_19(d_19, t);
          }
      }
    }
  else
    {
      t = f_19(d_19, t);
    }
  return(t);
}
static ATerm j_5 (ATerm q_20, ATerm t)
{
  t = SSL_read_term_from_stream(q_20);
  return(t);
}
static ATerm k_5 (ATerm m_34, ATerm n_34, ATerm t)
{
  t = SSL_strcat(m_34, n_34);
  return(t);
}
static ATerm l_5 (ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm g_19 = NULL;
  t = SSL_fopen(v_35, w_35);
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_19);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_19 = NULL;
  t = SSL_stdin_stream();
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_19);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_19 = NULL;
  t = SSL_stdout_stream();
  i_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_19 = NULL;
  t = SSL_stderr_stream();
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_19);
  return(t);
}
static ATerm n_21 (ATerm q_19, ATerm t)
{
  ATerm r_19 = NULL;
  t = SSL_explode_term(q_19);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_8 = ATgetArgument(t, 1);
        if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
          {
            r_19 = ATgetFirst((ATermList) o_8);
            {
              ATerm r_8 = (ATerm) ATgetNext((ATermList) o_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_21 (ATerm c_20, ATerm d_20, ATerm f_20, ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,r_20 = NULL,u_7 = NULL;
  t = SSLgetAnnotations(f_20);
  i_20 = t;
  t = c_20;
  if(match_cons(t, sym_Path_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_20, d_20);
  u_7 = t;
  t = SSLsetAnnotations(u_7, i_20);
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(g_20, h_20, t);
  return(t);
}
static ATerm p_21 (ATerm x_20, ATerm y_20, ATerm z_20, ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,i_21 = NULL,m_8 = NULL;
  t = SSLgetAnnotations(z_20);
  c_21 = t;
  t = SSL_is_string(x_20);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_21, y_20);
  m_8 = t;
  t = SSLsetAnnotations(m_8, c_21);
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(a_21, b_21, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_21(k_21, t);
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            {
              ATerm u_8 = t;
              int v_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_21(l_21, m_21, k_21, t);
                  LocalPopChoice(v_8);
                }
              else
                {
                  t = u_8;
                  t = p_21(l_21, m_21, k_21, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_21(k_21, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_21 = NULL,u_21 = NULL,z_21 = NULL,e_22 = NULL;
  e_22 = t;
  {
    ATerm x_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_22, term_a_9);
        t = m_5(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = x_8;
        {
          ATerm z_7 = NULL,a_8 = NULL;
          t = term_b_9;
          a_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_9, e_22);
          t = k_5(a_8, e_22, t);
          z_7 = t;
          t = SSL_perror(z_7);
          _fail(t);
        }
      }
  }
  u_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(z_21, t);
  r_21 = t;
  t = u_21;
  t = fclose_0_0(t);
  t = r_21;
  return(t);
}
ATerm fetch_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  static ATerm y_23 (ATerm t)
  {
    ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
    v_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_23 = ATgetFirst((ATermList) t);
        x_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_8 = NULL,l_8 = NULL,p_8 = NULL;
          t = SSLgetAnnotations(v_23);
          i_8 = t;
          t = w_23;
          t = w_86(t);
          l_8 = t;
          t = (ATerm) ATinsert(CheckATermList(x_23), l_8);
          p_8 = t;
          t = SSLsetAnnotations(p_8, i_8);
          LocalPopChoice(e_9);
        }
      else
        {
          t = c_9;
          {
            ATerm d_9 = NULL,j_9 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(v_23);
            d_9 = t;
            t = x_23;
            t = y_23(t);
            j_9 = t;
            t = (ATerm) ATinsert(CheckATermList(j_9), w_23);
            q_8 = t;
            t = SSLsetAnnotations(q_8, d_9);
          }
        }
    }
    return(t);
  }
  t = y_23(t);
  return(t);
}
static ATerm p_5 (ATerm y_51, ATerm z_51, ATerm t)
{
  t = SSL_table_get(y_51, z_51);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm c_24 = NULL;
  c_24 = t;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
        t = term_l_9;
        f_24 = t;
        t = term_m_9;
        g_24 = t;
        t = term_n_9;
        t = p_5(f_24, g_24, t);
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_24, term_o_9);
        t = geq_0_0(t);
        t = c_24;
        t = v_101(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        t = c_24;
      }
  }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  if(match_string(t, "-k"))
    {
      t = l_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_24;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL;
  o_24 = t;
  t = SSL_string_to_int(o_24);
  p_24 = t;
  t = term_p_9;
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, p_24);
  t = s_5(s_24, p_24, t);
  t = o_24;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_1, d_1, i_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  if(match_string(t, "-S"))
    {
      t = w_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_24;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL;
  t = term_m_9;
  x_24 = t;
  t = term_v_9;
  y_24 = t;
  t = term_x_9;
  t = s_5(x_24, y_24, t);
  t = term_z_9;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_f_10;
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
  ATerm b_25 = NULL,c_25 = NULL,e_25 = NULL;
  b_25 = t;
  t = SSL_string_to_int(b_25);
  c_25 = t;
  t = term_m_9;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, c_25);
  t = s_5(e_25, c_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_25);
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
  ATerm f_25 = NULL,g_25 = NULL;
  t = term_j_10;
  f_25 = t;
  t = term_v_0;
  g_25 = t;
  t = term_k_10;
  t = s_5(f_25, g_25, t);
  t = term_l_10;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_1, l_1, m_1, t);
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_1, p_1, r_1, t);
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            t = Option_3_0(t_1, u_1, v_1, t);
          }
      }
    }
  return(t);
}
static ATerm s_5 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm h_25 = NULL;
  t = term_l_9;
  h_25 = t;
  t = SSL_table_put(h_25, m_45, n_45);
  t = (ATerm) ATmakeAppl(sym__3, term_l_9, m_45, n_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
      t = term_v_0;
      t = e_0(t);
      m_25 = t;
      t = term_r_10;
      n_25 = t;
      t = term_s_10;
      o_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, m_25);
      t = q_5(n_25, o_25, m_25, t);
      _fail(t);
    }
  else
    {
      ATerm r_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_25 = ATgetFirst((ATermList) t);
          l_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_25;
      t = c_0(t);
      t = term_v_0;
      t = d_0(t);
      r_25 = t;
      t = (ATerm) ATinsert(CheckATermList(l_25), r_25);
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm t_25 = NULL;
  t_25 = t;
  if(match_string(t, "-o"))
    {
      t = t_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_25;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  u_25 = t;
  t = term_t_10;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, u_25);
  t = s_5(v_25, u_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_25);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_1, y_1, a_2, t);
  return(t);
}
static ATerm q_5 (ATerm h_50, ATerm i_50, ATerm g_50, ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_10 = ATgetArgument(t, 0);
            ATerm z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_50, i_50);
        t = p_5(h_50, i_50, t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATempty;
      }
  }
  c_26 = t;
  t = (ATerm) ATinsert(CheckATermList(c_26), g_50);
  d_26 = t;
  t = SSL_table_put(h_50, i_50, d_26);
  t = b_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
      t = term_v_0;
      t = n_0(t);
      o_26 = t;
      t = term_r_10;
      p_26 = t;
      t = term_s_10;
      q_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_10, term_s_10, o_26);
      t = q_5(p_26, q_26, o_26, t);
      _fail(t);
    }
  else
    {
      ATerm u_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_26 = ATgetFirst((ATermList) t);
          l_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_26 = ATgetFirst((ATermList) t);
          n_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_26;
      t = k_0(t);
      t = m_26;
      t = l_0(t);
      u_26 = t;
      t = (ATerm) ATinsert(CheckATermList(n_26), u_26);
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm w_26 = NULL;
  w_26 = t;
  if(match_string(t, "-i"))
    {
      t = w_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_26;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  x_26 = t;
  t = term_a_11;
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_11, x_26);
  t = s_5(y_26, x_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_26);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_0;
  t = whoami_0_0(t);
  z_26 = t;
  t = term_y_3;
  b_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_11), z_26);
  c_27 = t;
  t = SSL_printnl(b_27, c_27);
  t = term_d_4;
  a_27 = t;
  t = SSL_exit(a_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  t = term_l_9;
  d_27 = t;
  t = term_d_11;
  e_27 = t;
  t = term_e_11;
  t = p_5(d_27, e_27, t);
  return(t);
}
static ATerm n_5 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_38, q_38);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      t = SSL_addr(p_38, q_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_93 (ATerm), ATerm e_93 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_27;
      t = d_93(t);
    }
  else
    {
      ATerm l_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_27 = ATgetFirst((ATermList) t);
          i_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_27;
      t = foldr_2_0(d_93, e_93, t);
      l_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_27, l_27);
      t = e_93(t);
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
  t = term_v_9;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(a_10, c_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_27 = NULL,r_9 = NULL,s_9 = NULL;
  t = times_0_0(t);
  s_9 = t;
  t = SSL_explode_term(s_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_9;
  t = foldr_2_0(f_2, g_2, t);
  o_27 = t;
  t = SSL_TicksToSeconds(o_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_28;
        if((c_28 != t))
          {
            _fail(t);
          }
        t = b_28;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
        {
          ATerm k_11 = t;
          int l_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_28, d_28);
              LocalPopChoice(l_11);
            }
          else
            {
              t = k_11;
              t = SSL_gtr(c_28, d_28);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_28, d_28);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  {
    ATerm m_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
        t = term_l_9;
        k_28 = t;
        t = term_m_9;
        l_28 = t;
        t = term_n_9;
        t = p_5(k_28, l_28, t);
        j_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_28, term_d_4);
        t = geq_0_0(t);
        t = h_28;
        t = u_101(t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = m_11;
        t = h_28;
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,q_28 = NULL,r_28 = NULL;
  t = run_time_0_0(t);
  n_28 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  o_28 = t;
  t = term_y_3;
  q_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), n_28), term_p_11), o_28);
  r_28 = t;
  t = SSL_printnl(q_28, r_28);
  t = (ATerm) ATmakeAppl(sym__2, term_y_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_11), n_28), term_p_11), o_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_9;
  s_28 = t;
  t = SSL_exit(s_28);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  d_29 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_29;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm x_10 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(d_29);
            x_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_29);
            w_8 = t;
            t = SSLsetAnnotations(w_8, x_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_29;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28 = NULL,w_28 = NULL;
      t = term_l_9;
      v_28 = t;
      t = term_y_11;
      w_28 = t;
      t = term_z_11;
      t = p_5(v_28, w_28, t);
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      t = fetch_1_0(i_2, t);
    }
  t = k_104(t);
  return(t);
}
ATerm map_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  static ATerm t_29 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
    q_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_29;
      }
    else
      {
        ATerm n_11 = NULL,s_11 = NULL,t_11 = NULL,k_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_29 = ATgetFirst((ATermList) t);
            s_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_29);
        n_11 = t;
        t = r_29;
        t = m_86(t);
        s_11 = t;
        t = s_29;
        t = t_29(t);
        t_11 = t;
        t = (ATerm) ATinsert(CheckATermList(t_11), s_11);
        k_9 = t;
        t = SSLsetAnnotations(k_9, n_11);
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_30 = NULL,c_30 = NULL;
        static ATerm j_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_30)), not_null(c_30));
          return(t);
        }
        t = x_29;
        t = i_0(t);
        if(((b_30 != NULL) && (b_30 != t)))
          _fail(t);
        else
          b_30 = t;
        t = w_29;
        t = g_0(t);
        if(((c_30 != NULL) && (c_30 != t)))
          _fail(t);
        else
          c_30 = t;
        t = x_29;
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
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,q_9 = NULL;
  k_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_30);
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_30);
  q_9 = t;
  t = SSLsetAnnotations(q_9, i_30);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_30), term_a_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_30 = NULL,h_30 = NULL;
      t = term_l_9;
      g_30 = t;
      t = term_d_11;
      h_30 = t;
      t = term_e_11;
      t = p_5(g_30, h_30, t);
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      t = fetch_1_0(k_2, t);
    }
  t = term_d_12;
  t = echo_0_0(t);
  t = term_r_10;
  e_30 = t;
  t = term_s_10;
  f_30 = t;
  t = term_e_12;
  t = p_5(e_30, f_30, t);
  t = reverse_acc_2_0(_id, m_2, t);
  t = map_1_0(n_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  {
    ATerm f_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_30;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_12 = ATgetFirst((ATermList) t);
                ATerm k_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_30;
          }
        LocalPopChoice(i_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATinsert(ATempty, o_30);
      }
  }
  p_30 = t;
  t = term_e_8;
  q_30 = t;
  t = SSL_printnl(q_30, p_30);
  t = o_30;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  t = term_l_9;
  u_30 = t;
  t = term_d_11;
  v_30 = t;
  t = term_e_11;
  t = p_5(u_30, v_30, t);
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
  ATerm w_30 = NULL,x_30 = NULL;
  t = term_m_12;
  w_30 = t;
  t = term_v_0;
  x_30 = t;
  t = term_n_12;
  t = s_5(w_30, x_30, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_o_12;
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
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  t = term_m_12;
  a_31 = t;
  t = term_v_0;
  b_31 = t;
  t = term_n_12;
  t = s_5(a_31, b_31, t);
  t = term_q_12;
  y_30 = t;
  t = term_v_0;
  z_30 = t;
  t = term_r_12;
  t = s_5(y_30, z_30, t);
  t = term_u_12;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_2, s_2, t_2, t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = Option_3_0(u_2, v_2, w_2, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_59 (ATerm), ATerm q_59 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,u_9 = NULL;
  h_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_31 = ATgetFirst((ATermList) t);
      e_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  c_31 = t;
  t = d_31;
  t = p_59(t);
  f_31 = t;
  t = e_31;
  t = q_59(t);
  g_31 = t;
  t = (ATerm) ATinsert(CheckATermList(g_31), f_31);
  u_9 = t;
  t = SSLsetAnnotations(u_9, c_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,r_31 = NULL,s_31 = NULL,w_9 = NULL;
  m_31 = t;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_13;
        t = n_106(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
      }
  }
  t = m_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_31 = ATgetFirst((ATermList) t);
      p_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_31);
  n_31 = t;
  t = term_d_11;
  s_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, o_31);
  t = s_5(s_31, o_31, t);
  t = p_31;
  {
    static ATerm c_32 (ATerm t)
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_31 = NULL;
              v_31 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_31;
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
              t = n_106(t);
              t = Cons_2_0(_id, c_32, t);
            }
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          {
            ATerm y_31 = NULL,z_31 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_31 = ATgetFirst((ATermList) t);
                z_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_31), (ATerm) ATmakeAppl(sym_Undefined_1, y_31));
          }
        }
      return(t);
    }
    t = c_32(t);
  }
  r_31 = t;
  t = (ATerm) ATinsert(CheckATermList(r_31), (ATerm) ATmakeAppl(sym_Program_1, o_31));
  w_9 = t;
  t = SSLsetAnnotations(w_9, n_31);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm o_32 = NULL;
  o_32 = t;
  if(match_string(t, "--help"))
    {
      t = o_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_32;
        }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL;
  t = term_y_11;
  p_32 = t;
  t = term_v_0;
  q_32 = t;
  t = term_m_13;
  t = s_5(p_32, q_32, t);
  t = term_n_13;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL;
  j_32 = t;
  t = term_r_10;
  l_32 = t;
  t = term_s_10;
  m_32 = t;
  t = (ATerm) ATempty;
  n_32 = t;
  t = SSL_table_put(l_32, m_32, n_32);
  t = j_32;
  {
    static ATerm y_2 (ATerm t)
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_106(t);
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
          {
            ATerm s_13 = t;
            int t_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_2, a_3, c_3, t);
                LocalPopChoice(t_13);
              }
            else
              {
                t = s_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_2, t);
  }
  {
    ATerm u_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_33 = NULL;
        b_33 = t;
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_12 = NULL;
              t = b_33;
              {
                ATerm a_14 = t;
                int b_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_12 = NULL,l_12 = NULL;
                    t = term_l_9;
                    h_12 = t;
                    t = term_y_11;
                    l_12 = t;
                    t = term_z_11;
                    t = p_5(h_12, l_12, t);
                    LocalPopChoice(b_14);
                  }
                else
                  {
                    t = a_14;
                    t = fetch_1_0(d_3, t);
                  }
              }
              t = b_33;
              t = default_system_usage_0_0(t);
              t = term_v_9;
              g_12 = t;
              t = SSL_exit(g_12);
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              {
                ATerm p_12 = NULL,x_12 = NULL,y_12 = NULL;
                t = term_l_9;
                x_12 = t;
                t = term_m_12;
                y_12 = t;
                t = term_c_14;
                t = p_5(x_12, y_12, t);
                t = b_33;
                t = default_system_about_0_0(t);
                t = term_v_9;
                p_12 = t;
                t = SSL_exit(p_12);
              }
            }
        }
        LocalPopChoice(x_13);
      }
    else
      {
        t = u_13;
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
              static ATerm f_3 (ATerm t)
              {
                ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,y_9 = NULL;
                h_33 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_33 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_33);
                f_33 = t;
                t = g_33;
                if(((h_32 != NULL) && (h_32 != t)))
                  _fail(t);
                else
                  h_32 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_33);
                y_9 = t;
                t = SSLsetAnnotations(y_9, f_33);
                return(t);
              }
              t = fetch_1_0(f_3, t);
              t = term_y_3;
              d_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_32)), term_f_14);
              e_33 = t;
              t = SSL_printnl(d_33, e_33);
              t = (ATerm) ATmakeAppl(sym__2, term_y_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_32)), term_f_14));
              t = default_system_usage_0_0(t);
              t = term_d_4;
              c_33 = t;
              t = SSL_exit(c_33);
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
            }
        }
      }
  }
  i_32 = t;
  t = term_r_10;
  k_32 = t;
  t = SSL_table_destroy(k_32);
  t = i_32;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  t = parse_options_1_0(m_104, t);
  m_33 = t;
  t = term_i_14;
  p_33 = t;
  t = SSL_table_create(p_33);
  t = term_i_14;
  n_33 = t;
  t = term_j_14;
  o_33 = t;
  t = SSL_table_put(n_33, o_33, m_33);
  t = m_33;
  t = o_104(t);
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_104, t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_104(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_14);
            }
          else
            {
              t = o_14;
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
  ATerm q_33 = NULL,r_33 = NULL;
  t = term_q_14;
  q_33 = t;
  t = term_v_0;
  r_33 = t;
  t = term_r_14;
  t = s_5(q_33, r_33, t);
  t = term_t_14;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_u_14;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL;
  s_33 = t;
  t = term_l_9;
  w_33 = t;
  t = term_d_11;
  x_33 = t;
  t = term_e_11;
  t = p_5(w_33, x_33, t);
  t_33 = t;
  t = term_y_3;
  u_33 = t;
  t = (ATerm) ATinsert(ATempty, t_33);
  v_33 = t;
  t = SSL_printnl(u_33, v_33);
  t = s_33;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm t)
{
  static ATerm g_3 (ATerm t)
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_103(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              {
                ATerm z_14 = t;
                int a_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(a_15);
                  }
                else
                  {
                    t = z_14;
                    {
                      ATerm b_15 = t;
                      int j_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_3, l_3, q_3, t);
                          LocalPopChoice(j_15);
                        }
                      else
                        {
                          t = b_15;
                          {
                            ATerm k_15 = t;
                            int l_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(l_15);
                              }
                            else
                              {
                                t = k_15;
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
    ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
    z_33 = t;
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm s_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_33 != NULL) && (y_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(s_3, t);
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
          t = term_o_15;
          y_33 = t;
        }
    }
    t = not_null(y_33);
    t = ReadFromFile_0_0(t);
    a_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_33, a_34);
    t = apply_strategy_1_0(v_103, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_3, x_103, i_3, j_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,b_10 = NULL;
  i_34 = t;
  if(match_cons(t, sym__2))
    {
      f_34 = ATgetArgument(t, 0);
      g_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_34);
  e_34 = t;
  t = g_34;
  t = topdown_1_0(w_3, t);
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_34, h_34);
  b_10 = t;
  t = SSLsetAnnotations(b_10, e_34);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  q_34 = t;
  if(match_cons(t, sym_appl_2))
    {
      p_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
      t = p_34;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                j_34 = ATgetArgument(t, 0);
                k_34 = ATgetArgument(t, 1);
                {
                  ATerm r_15 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_15);
            {
              ATerm s_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_34;
                  t = d_5(j_34, k_34, o_34, t);
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = s_15;
                  t = q_34;
                }
            }
          }
        else
          {
            t = p_15;
            t = q_34;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          p_34 = ATgetArgument(t, 0);
          t = p_34;
        }
      else
        {
          t = q_34;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(v_3, _fail, default_usage_0_0, t);
  return(t);
}

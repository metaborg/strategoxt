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
}
ATerm term_d_16;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_p_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
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
ATerm term_z_9;
ATerm term_o_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_k_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_v_6;
ATerm term_r_6;
ATerm term_l_6;
ATerm term_g_6;
ATerm term_k_5;
ATerm term_j_5;
ATerm term_h_5;
ATerm term_r_4;
ATerm term_n_4;
ATerm term_j_4;
ATerm term_h_4;
ATerm term_f_4;
ATerm term_d_4;
ATerm term_w_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_0));
  term_w_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_4));
  term_f_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_4));
  term_j_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
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
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_w_0);
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
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_e_11);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_w_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_w_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_w_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_w_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm De_Escape_0_0 (ATerm t);
ATerm de_escape_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm i_85 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_91 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_84 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm l_5 (ATerm m_0, ATerm x_18, ATerm w_18, ATerm t);
ATerm topdown_1_0 (ATerm v_77 (ATerm), ATerm t);
static ATerm o_5 (ATerm h_35, ATerm i_35, ATerm t);
static ATerm p_5 (ATerm n_20, ATerm o_20, ATerm t);
static ATerm r_5 (ATerm y_83 (ATerm), ATerm f_140, ATerm r_20, ATerm t);
static ATerm q_5 (ATerm j_20, ATerm k_20, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_100 (ATerm), ATerm t);
static ATerm u_18 (ATerm o_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_5 (ATerm p_20, ATerm t);
static ATerm t_5 (ATerm j_35, ATerm k_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_21 (ATerm j_19, ATerm t);
static ATerm g_21 (ATerm n_19, ATerm p_19, ATerm q_19, ATerm t);
static ATerm h_21 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t);
static ATerm u_5 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_84 (ATerm), ATerm t);
static ATerm n_5 (ATerm a_34, ATerm b_34, ATerm t);
ATerm debug_1_0 (ATerm w_83 (ATerm), ATerm t);
static ATerm e_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm x_98 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_6 (ATerm e_44, ATerm f_44, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_5 (ATerm e_49, ATerm f_49, ATerm d_49, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_5 (ATerm d_38, ATerm e_38, ATerm t);
ATerm foldr_2_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_98 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm need_help_1_0 (ATerm m_101 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm v_50, ATerm w_50, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_103 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm parse_options_1_0 (ATerm o_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm iowrap_3_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_w_0;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_4;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_4), b_0), term_f_4);
  j_0 = t;
  t = SSL_printnl(e_0, j_0);
  t = term_j_4;
  c_0 = t;
  t = SSL_exit(c_0);
  t = a_0;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  r_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_0;
    }
  else
    {
      static ATerm f_0 (ATerm t)
      {
        t = not_null(t_0);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_0 = ATgetFirst((ATermList) t);
          if(((t_0 != NULL) && (t_0 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_0;
      t = at_end_1_0(f_0, t);
    }
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_1 = ATgetFirst((ATermList) t);
      i_1 = (ATerm) ATgetNext((ATermList) t);
      t = i_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_1 = ATgetFirst((ATermList) t);
          g_1 = (ATerm) ATgetNext((ATermList) t);
          t = f_1;
          if(match_int(t, 34))
            {
              t = h_1;
              if(match_int(t, 92))
                {
                  ATerm l_4 = t;
                  int m_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_1 = NULL;
                      t = g_1;
                      t = De_Escape_0_0(t);
                      l_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(l_1), term_n_4);
                      LocalPopChoice(m_4);
                    }
                  else
                    {
                      t = l_4;
                      {
                        ATerm o_1 = NULL;
                        t = i_1;
                        t = De_Escape_0_0(t);
                        o_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(o_1), h_1);
                      }
                    }
                }
              else
                {
                  ATerm r_1 = NULL;
                  t = i_1;
                  t = De_Escape_0_0(t);
                  r_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_1), h_1);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = h_1;
                  if(match_int(t, 92))
                    {
                      ATerm p_4 = t;
                      int q_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_1 = NULL;
                          t = g_1;
                          t = De_Escape_0_0(t);
                          t_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(t_1), term_r_4);
                          LocalPopChoice(q_4);
                        }
                      else
                        {
                          t = p_4;
                          {
                            ATerm y_1 = NULL;
                            t = i_1;
                            t = De_Escape_0_0(t);
                            y_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(y_1), h_1);
                          }
                        }
                    }
                  else
                    {
                      ATerm b_2 = NULL;
                      t = i_1;
                      t = De_Escape_0_0(t);
                      b_2 = t;
                      t = (ATerm) ATinsert(CheckATermList(b_2), h_1);
                    }
                }
              else
                {
                  ATerm k_2 = NULL;
                  t = i_1;
                  t = De_Escape_0_0(t);
                  k_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(k_2), h_1);
                }
            }
        }
      else
        {
          ATerm w_2 = NULL;
          t = i_1;
          t = De_Escape_0_0(t);
          w_2 = t;
          t = (ATerm) ATinsert(CheckATermList(w_2), h_1);
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
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL;
  n_3 = t;
  t = SSL_explode_string(n_3);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_3 = ATgetFirst((ATermList) t);
      s_3 = (ATerm) ATgetNext((ATermList) t);
      t = s_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_3 = ATgetFirst((ATermList) t);
          p_3 = (ATerm) ATgetNext((ATermList) t);
          t = o_3;
          if(match_int(t, 34))
            {
              t = r_3;
              if(match_int(t, 92))
                {
                  ATerm t_4 = t;
                  int u_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_3 = NULL;
                      t = p_3;
                      t = De_Escape_0_0(t);
                      v_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(v_3), term_n_4);
                      LocalPopChoice(u_4);
                    }
                  else
                    {
                      t = t_4;
                      {
                        ATerm b_4 = NULL;
                        t = s_3;
                        t = De_Escape_0_0(t);
                        b_4 = t;
                        t = (ATerm) ATinsert(CheckATermList(b_4), r_3);
                      }
                    }
                }
              else
                {
                  ATerm e_4 = NULL;
                  t = s_3;
                  t = De_Escape_0_0(t);
                  e_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(e_4), r_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = r_3;
                  if(match_int(t, 92))
                    {
                      ATerm v_4 = t;
                      int w_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_4 = NULL;
                          t = p_3;
                          t = De_Escape_0_0(t);
                          g_4 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_4), term_r_4);
                          LocalPopChoice(w_4);
                        }
                      else
                        {
                          t = v_4;
                          {
                            ATerm k_4 = NULL;
                            t = s_3;
                            t = De_Escape_0_0(t);
                            k_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(k_4), r_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm o_4 = NULL;
                      t = s_3;
                      t = De_Escape_0_0(t);
                      o_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(o_4), r_3);
                    }
                }
              else
                {
                  ATerm s_4 = NULL;
                  t = s_3;
                  t = De_Escape_0_0(t);
                  s_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_4), r_3);
                }
            }
        }
      else
        {
          ATerm e_5 = NULL;
          t = s_3;
          t = De_Escape_0_0(t);
          e_5 = t;
          t = (ATerm) ATinsert(CheckATermList(e_5), r_3);
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
ATerm at_last_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  static ATerm k_7 (ATerm t)
  {
    ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
    h_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_7 = ATgetFirst((ATermList) t);
        j_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_4 = t;
      int y_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_0 = NULL,z_5 = NULL;
          t = SSLgetAnnotations(h_7);
          x_0 = t;
          t = j_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(j_7), i_7);
          z_5 = t;
          t = SSLsetAnnotations(z_5, x_0);
          t = i_85(t);
          LocalPopChoice(y_4);
        }
      else
        {
          t = x_4;
          {
            ATerm c_2 = NULL,h_2 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(h_7);
            c_2 = t;
            t = j_7;
            t = k_7(t);
            h_2 = t;
            t = (ATerm) ATinsert(CheckATermList(h_2), i_7);
            b_6 = t;
            t = SSLsetAnnotations(b_6, c_2);
          }
        }
    }
    return(t);
  }
  t = k_7(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_5 = ATgetFirst((ATermList) t);
      if(((ATgetType(a_5) != AT_INT) || (ATgetInt((ATermInt) a_5) != 34)))
        _fail(t);
      {
        ATerm b_5 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(b_5) != AT_LIST) || !(ATisEmpty(b_5))))
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
  ATerm q_7 = NULL,s_7 = NULL,x_7 = NULL,z_7 = NULL,a_8 = NULL;
  a_8 = t;
  t = SSL_explode_string(a_8);
  q_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_7 = ATgetFirst((ATermList) t);
      {
        ATerm c_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_7;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = q_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_5 = ATgetFirst((ATermList) t);
      x_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_7;
  t = at_last_1_0(h_0, t);
  s_7 = t;
  t = SSL_implode_string(s_7);
  return(t);
}
ATerm filter_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
  w_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_8 = ATgetFirst((ATermList) t);
          y_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_5 = t;
        int g_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_2 = NULL,v_2 = NULL,x_2 = NULL,i_6 = NULL;
            t = SSLgetAnnotations(w_8);
            s_2 = t;
            t = x_8;
            t = o_91(t);
            v_2 = t;
            t = y_8;
            t = filter_1_0(o_91, t);
            x_2 = t;
            t = (ATerm) ATinsert(CheckATermList(x_2), v_2);
            i_6 = t;
            t = SSLsetAnnotations(i_6, s_2);
            LocalPopChoice(g_5);
          }
        else
          {
            t = f_5;
            t = y_8;
            t = filter_1_0(o_91, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_84 (ATerm), ATerm t)
{
  static ATerm e_10 (ATerm t)
  {
    ATerm y_9 = NULL,b_10 = NULL,c_10 = NULL;
    c_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_9 = ATgetFirst((ATermList) t);
        b_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_3 = NULL,i_3 = NULL,o_6 = NULL;
          t = SSLgetAnnotations(c_10);
          f_3 = t;
          t = b_10;
          t = e_10(t);
          i_3 = t;
          t = (ATerm) ATinsert(CheckATermList(i_3), y_9);
          o_6 = t;
          t = SSLsetAnnotations(o_6, f_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_10;
        t = x_84(t);
      }
    return(t);
  }
  t = e_10(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_h_5);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_5);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_5);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL;
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
              t = (ATerm) ATinsert(ATempty, term_g_6);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  m_11 = ATgetArgument(t, 0);
                  o_11 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(o_11), m_11);
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
                      t = at_end_1_0(q_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          m_11 = ATgetArgument(t, 0);
                          t = m_11;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(u_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              m_11 = ATgetArgument(t, 0);
                              t = m_11;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(v_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  m_11 = ATgetArgument(t, 0);
                                  o_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_12 = NULL,p_12 = NULL;
                                    t = m_11;
                                    t = Sym2Strs_0_0(t);
                                    k_12 = t;
                                    t = o_11;
                                    t = Sym2Strs_0_0(t);
                                    p_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_5)), p_12), k_12);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      m_11 = ATgetArgument(t, 0);
                                      o_11 = ATgetArgument(t, 1);
                                      {
                                        ATerm v_12 = NULL,w_12 = NULL;
                                        t = m_11;
                                        t = Sym2Strs_0_0(t);
                                        v_12 = t;
                                        t = o_11;
                                        t = Sym2Strs_0_0(t);
                                        w_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_5)), w_12), v_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm h_6 = t;
                                      int j_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              m_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm k_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(j_6);
                                          {
                                            ATerm z_12 = NULL;
                                            t = m_11;
                                            t = Sym2Strs_0_0(t);
                                            z_12 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_6)), z_12);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = h_6;
                                          {
                                            ATerm m_6 = t;
                                            int n_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    m_11 = ATgetArgument(t, 0);
                                                    o_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm q_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(n_6);
                                                {
                                                  ATerm g_13 = NULL,h_13 = NULL;
                                                  t = m_11;
                                                  t = Sym2Strs_0_0(t);
                                                  g_13 = t;
                                                  t = o_11;
                                                  t = Sym2Strs_0_0(t);
                                                  h_13 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_6)), h_13), g_13);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = m_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    m_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm j_13 = NULL;
                                                      t = m_11;
                                                      t = Sym2Strs_0_0(t);
                                                      j_13 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, j_13), (ATerm) ATinsert(ATempty, term_r_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        m_11 = ATgetArgument(t, 0);
                                                        o_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_13 = NULL,q_13 = NULL;
                                                          t = m_11;
                                                          t = Sym2Strs_0_0(t);
                                                          o_13 = t;
                                                          t = o_11;
                                                          t = Sym2Strs_0_0(t);
                                                          q_13 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_13), (ATerm) ATinsert(ATempty, term_v_6)), o_13);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            m_11 = ATgetArgument(t, 0);
                                                            o_11 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_13 = NULL,y_13 = NULL;
                                                              t = m_11;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              w_13 = t;
                                                              t = o_11;
                                                              t = Sym2Strs_0_0(t);
                                                              y_13 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_13), (ATerm) ATinsert(ATempty, term_e_7)), w_13);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                m_11 = ATgetArgument(t, 0);
                                                                o_11 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm b_14 = NULL,d_14 = NULL;
                                                                  t = m_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  b_14 = t;
                                                                  t = o_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  d_14 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_14), (ATerm) ATinsert(ATempty, term_f_7)), b_14);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    m_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm f_14 = NULL;
                                                                      t = m_11;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      f_14 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(f_14), term_g_7);
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
                                                                              ATerm i_4 = NULL;
                                                                              t = m_11;
                                                                              {
                                                                                ATerm l_7 = t;
                                                                                int n_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    LocalPopChoice(n_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_7;
                                                                                  }
                                                                              }
                                                                              i_4 = t;
                                                                              t = (ATerm) ATinsert(ATempty, i_4);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm o_7 = t;
                                                                            int r_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    m_11 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm t_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(r_7);
                                                                                {
                                                                                  ATerm z_4 = NULL;
                                                                                  t = m_11;
                                                                                  {
                                                                                    ATerm u_7 = t;
                                                                                    int v_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(v_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_7;
                                                                                      }
                                                                                  }
                                                                                  z_4 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, z_4);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = o_7;
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
static ATerm l_5 (ATerm m_0, ATerm x_18, ATerm w_18, ATerm t)
{
  ATerm o_14 = NULL,r_14 = NULL,s_14 = NULL;
  t = x_18;
  t = Sym2Strs_0_0(t);
  r_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_7)), r_14), (ATerm) ATinsert(ATempty, term_y_7));
  t = concat_0_0(t);
  s_14 = t;
  t = SSL_concat_strings(s_14);
  o_14 = t;
  t = SSL_mkterm(o_14, w_18);
  return(t);
}
ATerm topdown_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    t = topdown_1_0(v_77, t);
    return(t);
  }
  t = v_77(t);
  t = SRTS_all(y_0, t);
  return(t);
}
static ATerm o_5 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_fputc(h_35, i_35);
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
static ATerm p_5 (ATerm n_20, ATerm o_20, ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_write_term_to_stream_text(n_20, o_20);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
static ATerm r_5 (ATerm y_83 (ATerm), ATerm f_140, ATerm r_20, ATerm t)
{
  ATerm c_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_140, term_b_8);
  t = u_5(t);
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_15, r_20);
  t = y_83(t);
  t = fclose_0_0(t);
  t = r_20;
  return(t);
}
static ATerm q_5 (ATerm j_20, ATerm k_20, ATerm t)
{
  ATerm d_15 = NULL;
  t = SSL_write_term_to_stream_baf(j_20, k_20);
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_15);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if(match_cons(c_8, sym_Stream_1))
        {
          e_6 = ATgetArgument(c_8, 0);
        }
      else
        _fail(t);
      f_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(e_6, f_6, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL,b_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(match_cons(e_8, sym_Stream_1))
        {
          b_7 = ATgetArgument(e_8, 0);
        }
      else
        _fail(t);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(b_7, m_7, t);
  x_6 = t;
  t = term_g_8;
  y_6 = t;
  t = x_6;
  if(match_cons(t, sym_Stream_1))
    {
      z_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, x_6);
  t = o_5(y_6, z_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,p_15 = NULL,q_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,q_17 = NULL,t_17 = NULL,a_7 = NULL,w_6 = NULL;
  k_15 = t;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_15);
  w_15 = t;
  t = x_15;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = term_k_8;
        j_15 = t;
      }
  }
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_15, y_15);
  w_6 = t;
  t = SSLsetAnnotations(w_6, w_15);
  t = k_15;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_15);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_15, (ATerm) ATmakeAppl(sym__2, not_null(j_15), q_15));
  a_7 = t;
  t = SSLsetAnnotations(a_7, l_15);
  v_15 = t;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL,m_5 = NULL,w_5 = NULL,c_6 = NULL,d_6 = NULL,c_7 = NULL;
        t = SSLgetAnnotations(v_15);
        i_5 = t;
        t = q_17;
        t = fetch_1_0(a_1, t);
        m_5 = t;
        t = t_17;
        if(match_cons(t, sym__2))
          {
            c_6 = ATgetArgument(t, 0);
            d_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_5(b_1, c_6, d_6, t);
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_5, w_5);
        c_7 = t;
        t = SSLsetAnnotations(c_7, i_5);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
          ATerm p_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,d_7 = NULL;
          t = SSLgetAnnotations(v_15);
          p_6 = t;
          t = t_17;
          if(match_cons(t, sym__2))
            {
              t_6 = ATgetArgument(t, 0);
              u_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_5(c_1, t_6, u_6, t);
          s_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_17, s_6);
          d_7 = t;
          t = SSLsetAnnotations(d_7, p_6);
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
ATerm apply_strategy_1_0 (ATerm o_100 (ATerm), ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,b_18 = NULL,c_18 = NULL;
  c_18 = t;
  t = dtime_0_0(t);
  t = c_18;
  t = o_100(t);
  b_18 = t;
  t = dtime_0_0(t);
  w_17 = t;
  t = b_18;
  if(match_cons(t, sym__2))
    {
      x_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_17), (ATerm) ATmakeAppl(sym_Runtime_1, w_17)), y_17);
  return(t);
}
static ATerm u_18 (ATerm o_18, ATerm t)
{
  t = SSL_fclose(o_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_18 = ATgetArgument(t, 0);
      {
        ATerm n_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_18);
            LocalPopChoice(p_8);
          }
        else
          {
            t = n_8;
            t = u_18(s_18, t);
          }
      }
    }
  else
    {
      t = u_18(s_18, t);
    }
  return(t);
}
static ATerm s_5 (ATerm p_20, ATerm t)
{
  t = SSL_read_term_from_stream(p_20);
  return(t);
}
static ATerm t_5 (ATerm j_35, ATerm k_35, ATerm t)
{
  ATerm v_18 = NULL;
  t = SSL_fopen(j_35, k_35);
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_18 = NULL;
  t = SSL_stdin_stream();
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_19 = NULL;
  t = SSL_stdout_stream();
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_19 = NULL;
  t = SSL_stderr_stream();
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_19);
  return(t);
}
static ATerm e_21 (ATerm j_19, ATerm t)
{
  ATerm k_19 = NULL;
  t = SSL_explode_term(j_19);
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_8 = ATgetArgument(t, 1);
        if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
          {
            k_19 = ATgetFirst((ATermList) s_8);
            {
              ATerm t_8 = (ATerm) ATgetNext((ATermList) s_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_21 (ATerm n_19, ATerm p_19, ATerm q_19, ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,z_19 = NULL,c_20 = NULL,p_7 = NULL;
  t = SSLgetAnnotations(q_19);
  z_19 = t;
  t = n_19;
  if(match_cons(t, sym_Path_1))
    {
      c_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_20, p_19);
  p_7 = t;
  t = SSLsetAnnotations(p_7, z_19);
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(r_19, s_19, t);
  return(t);
}
static ATerm h_21 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm i_20 = NULL,l_20 = NULL,s_20 = NULL,x_20 = NULL,d_8 = NULL;
  t = SSLgetAnnotations(h_20);
  s_20 = t;
  t = SSL_is_string(f_20);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_20, g_20);
  d_8 = t;
  t = SSLsetAnnotations(d_8, s_20);
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(i_20, l_20, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
      {
        ATerm v_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_21(z_20, t);
            LocalPopChoice(z_8);
          }
        else
          {
            t = v_8;
            {
              ATerm a_9 = t;
              int b_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_21(a_21, b_21, z_20, t);
                  LocalPopChoice(b_9);
                }
              else
                {
                  t = a_9;
                  t = h_21(a_21, b_21, z_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_21(z_20, t);
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  ATerm f_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL;
      l_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_21, term_i_9);
      t = u_5(t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = f_9;
      t = debug_1_0(d_1, t);
      _fail(t);
    }
  j_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_5(k_21, t);
  i_21 = t;
  t = j_21;
  t = fclose_0_0(t);
  t = i_21;
  return(t);
}
ATerm fetch_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  static ATerm d_23 (ATerm t)
  {
    ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
    x_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_22 = ATgetFirst((ATermList) t);
        z_22 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_8 = NULL,j_8 = NULL,o_8 = NULL;
          t = SSLgetAnnotations(x_22);
          f_8 = t;
          t = y_22;
          t = r_84(t);
          j_8 = t;
          t = (ATerm) ATinsert(CheckATermList(z_22), j_8);
          o_8 = t;
          t = SSLsetAnnotations(o_8, f_8);
          LocalPopChoice(k_9);
        }
      else
        {
          t = j_9;
          {
            ATerm c_9 = NULL,g_9 = NULL,r_8 = NULL;
            t = SSLgetAnnotations(x_22);
            c_9 = t;
            t = z_22;
            t = d_23(t);
            g_9 = t;
            t = (ATerm) ATinsert(CheckATermList(g_9), y_22);
            r_8 = t;
            t = SSLsetAnnotations(r_8, c_9);
          }
        }
    }
    return(t);
  }
  t = d_23(t);
  return(t);
}
static ATerm n_5 (ATerm a_34, ATerm b_34, ATerm t)
{
  t = SSL_strcat(a_34, b_34);
  return(t);
}
ATerm debug_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  j_23 = t;
  t = w_83(t);
  k_23 = t;
  t = term_d_4;
  l_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_23), k_23);
  m_23 = t;
  t = SSL_printnl(l_23, m_23);
  t = j_23;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = NULL;
      t_23 = t;
      t = SSL_is_string(t_23);
      LocalPopChoice(r_9);
    }
  else
    {
      t = p_9;
      {
        ATerm s_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_1, t);
            LocalPopChoice(u_9);
          }
        else
          {
            t = s_9;
            {
              ATerm b_24 = NULL,c_24 = NULL,f_24 = NULL;
              b_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_24 = ATgetArgument(t, 0);
                  t = c_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_24 = ATgetArgument(t, 0);
                      t = c_24;
                      {
                        ATerm v_9 = t;
                        int w_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_9);
                          }
                        else
                          {
                            t = v_9;
                            t = debug_1_0(j_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_24 = NULL,o_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_24 = ATgetArgument(t, 0);
                          f_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_24;
                      t = eval_config_0_0(t);
                      l_24 = t;
                      t = f_24;
                      t = eval_config_0_0(t);
                      o_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_24, o_24);
                      t = n_5(l_24, o_24, t);
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
  ATerm t_24 = NULL,u_24 = NULL;
  t_24 = t;
  t = term_z_9;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, t_24);
  t = x_5(u_24, t_24, t);
  {
    ATerm a_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,w_24 = NULL;
        t = eval_config_0_0(t);
        v_24 = t;
        t = term_z_9;
        w_24 = t;
        t = SSL_table_put(w_24, t_24, v_24);
        t = v_24;
        LocalPopChoice(d_10);
      }
    else
      {
        t = a_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    ATerm f_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL;
        t = term_m_10;
        t = get_config_0_0(t);
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_n_10);
        t = geq_0_0(t);
        t = a_25;
        t = x_98(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = f_10;
        t = a_25;
      }
  }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  if(match_string(t, "-k"))
    {
      t = f_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_25;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  t = SSL_string_to_int(g_25);
  h_25 = t;
  t = term_o_10;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, h_25);
  t = a_6(i_25, h_25, t);
  t = g_25;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_1, m_1, n_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  if(match_string(t, "-S"))
    {
      t = o_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_25;
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  t = term_m_10;
  p_25 = t;
  t = term_q_10;
  q_25 = t;
  t = term_r_10;
  t = a_6(p_25, q_25, t);
  t = term_s_10;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  t = SSL_string_to_int(r_25);
  s_25 = t;
  t = term_m_10;
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, s_25);
  t = a_6(t_25, s_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_25);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  t = term_v_10;
  u_25 = t;
  t = term_w_0;
  v_25 = t;
  t = term_w_10;
  t = a_6(u_25, v_25, t);
  t = term_x_10;
  return(t);
}
static ATerm a_2 (ATerm t)
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
      t = Option_3_0(p_1, q_1, s_1, t);
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
            t = ArgOption_3_0(u_1, v_1, w_1, t);
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = Option_3_0(x_1, z_1, a_2, t);
          }
      }
    }
  return(t);
}
static ATerm a_6 (ATerm e_44, ATerm f_44, ATerm t)
{
  ATerm w_25 = NULL;
  t = term_z_9;
  w_25 = t;
  t = SSL_table_put(w_25, e_44, f_44);
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, e_44, f_44);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
      t = term_w_0;
      t = i_0(t);
      b_26 = t;
      t = term_d_11;
      c_26 = t;
      t = term_e_11;
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_11, term_e_11, b_26);
      t = y_5(c_26, d_26, b_26, t);
      _fail(t);
    }
  else
    {
      ATerm g_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_25 = ATgetFirst((ATermList) t);
          a_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_25;
      t = d_0(t);
      t = term_w_0;
      t = g_0(t);
      g_26 = t;
      t = (ATerm) ATinsert(CheckATermList(a_26), g_26);
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  if(match_string(t, "-o"))
    {
      t = i_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_26;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  t = term_f_11;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_11, j_26);
  t = a_6(k_26, j_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_26);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, e_2, f_2, t);
  return(t);
}
static ATerm y_5 (ATerm e_49, ATerm f_49, ATerm d_49, ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_49, f_49);
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            ATerm l_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_49, f_49);
        t = x_5(e_49, f_49, t);
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATempty;
      }
  }
  n_26 = t;
  t = (ATerm) ATinsert(CheckATermList(n_26), d_49);
  o_26 = t;
  t = SSL_table_put(e_49, f_49, o_26);
  t = m_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
      t = term_w_0;
      t = p_0(t);
      z_26 = t;
      t = term_d_11;
      a_27 = t;
      t = term_e_11;
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_11, term_e_11, z_26);
      t = y_5(a_27, b_27, z_26, t);
      _fail(t);
    }
  else
    {
      ATerm f_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_26 = ATgetFirst((ATermList) t);
          w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          y_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      t = n_0(t);
      t = x_26;
      t = o_0(t);
      f_27 = t;
      t = (ATerm) ATinsert(CheckATermList(y_26), f_27);
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  if(match_string(t, "-i"))
    {
      t = j_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_27;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  t = term_n_11;
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, k_27);
  t = a_6(l_27, k_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_27);
  return(t);
}
static ATerm j_2 (ATerm t)
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
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_0;
  t = whoami_0_0(t);
  m_27 = t;
  t = term_d_4;
  o_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_11), m_27);
  p_27 = t;
  t = SSL_printnl(o_27, p_27);
  t = term_j_4;
  n_27 = t;
  t = SSL_exit(n_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_11;
  t = get_config_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_38, e_38);
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      t = SSL_addr(d_38, e_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_27;
      t = k_90(t);
    }
  else
    {
      ATerm w_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_27 = ATgetFirst((ATermList) t);
          t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_27;
      t = foldr_2_0(k_90, l_90, t);
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, w_27);
      t = l_90(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(k_10, l_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_27 = NULL,g_10 = NULL,h_10 = NULL;
  t = times_0_0(t);
  h_10 = t;
  t = SSL_explode_term(h_10);
  if(match_cons(t, sym__2))
    {
      ATerm v_11 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10;
  t = foldr_2_0(l_2, m_2, t);
  z_27 = t;
  t = SSL_TicksToSeconds(z_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_28;
        if((l_28 != t))
          {
            _fail(t);
          }
        t = k_28;
        LocalPopChoice(y_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_28, m_28);
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              t = SSL_gtr(l_28, m_28);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_28 = NULL;
        t = term_m_10;
        t = get_config_0_0(t);
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_28, term_j_4);
        t = geq_0_0(t);
        t = q_28;
        t = w_98(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = q_28;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL;
  t = run_time_0_0(t);
  u_28 = t;
  t = term_w_0;
  t = whoami_0_0(t);
  v_28 = t;
  t = term_d_4;
  x_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_12), u_28), term_d_12), v_28);
  y_28 = t;
  t = SSL_printnl(x_28, y_28);
  t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_12), u_28), term_d_12), v_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_10;
  z_28 = t;
  t = SSL_exit(z_28);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  i_29 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_29;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_29 = ATgetArgument(t, 0);
          {
            ATerm j_11 = NULL,u_8 = NULL;
            t = SSLgetAnnotations(i_29);
            j_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_29);
            u_8 = t;
            t = SSLsetAnnotations(u_8, j_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_29;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_12;
      t = get_config_0_0(t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      t = fetch_1_0(o_2, t);
    }
  t = m_101(t);
  return(t);
}
ATerm map_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  static ATerm y_29 (ATerm t)
  {
    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
    v_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_29;
      }
    else
      {
        ATerm x_11 = NULL,f_12 = NULL,g_12 = NULL,d_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_29 = ATgetFirst((ATermList) t);
            x_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_29);
        x_11 = t;
        t = w_29;
        t = h_84(t);
        f_12 = t;
        t = x_29;
        t = y_29(t);
        g_12 = t;
        t = (ATerm) ATinsert(CheckATermList(g_12), f_12);
        d_9 = t;
        t = SSLsetAnnotations(d_9, x_11);
      }
    return(t);
  }
  t = y_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_30 = ATgetFirst((ATermList) t);
      c_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_30 = NULL,h_30 = NULL;
        static ATerm p_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_30)), not_null(h_30));
          return(t);
        }
        t = c_30;
        t = l_0(t);
        if(((g_30 != NULL) && (g_30 != t)))
          _fail(t);
        else
          g_30 = t;
        t = b_30;
        t = k_0(t);
        if(((h_30 != NULL) && (h_30 != t)))
          _fail(t);
        else
          h_30 = t;
        t = c_30;
        t = reverse_acc_2_0(k_0, p_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_0;
      t = l_0(t);
    }
  return(t);
}
static ATerm x_5 (ATerm v_50, ATerm w_50, ATerm t)
{
  t = SSL_table_get(v_50, w_50);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,n_9 = NULL;
  n_30 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_30);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_30);
  n_9 = t;
  t = SSLsetAnnotations(n_9, l_30);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_30), term_l_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_11;
      t = get_config_0_0(t);
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      t = fetch_1_0(q_2, t);
    }
  t = term_o_12;
  t = echo_0_0(t);
  t = term_d_11;
  j_30 = t;
  t = term_e_11;
  k_30 = t;
  t = term_q_12;
  t = x_5(j_30, k_30, t);
  t = reverse_acc_2_0(_id, r_2, t);
  t = map_1_0(t_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_30;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_12 = ATgetFirst((ATermList) t);
                ATerm x_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_30;
          }
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        t = (ATerm) ATinsert(ATempty, r_30);
      }
  }
  s_30 = t;
  t = term_k_8;
  t_30 = t;
  t = SSL_printnl(t_30, s_30);
  t = r_30;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  t = term_y_12;
  x_30 = t;
  t = term_w_0;
  y_30 = t;
  t = term_a_13;
  t = a_6(x_30, y_30, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_b_13;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  t = term_y_12;
  b_31 = t;
  t = term_w_0;
  c_31 = t;
  t = term_a_13;
  t = a_6(b_31, c_31, t);
  t = term_d_13;
  z_30 = t;
  t = term_w_0;
  a_31 = t;
  t = term_e_13;
  t = a_6(z_30, a_31, t);
  t = term_f_13;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_2, y_2, z_2, t);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      t = Option_3_0(a_3, b_3, c_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,q_9 = NULL;
  i_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_31 = ATgetFirst((ATermList) t);
      f_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  d_31 = t;
  t = e_31;
  t = l_57(t);
  g_31 = t;
  t = f_31;
  t = m_57(t);
  h_31 = t;
  t = (ATerm) ATinsert(CheckATermList(h_31), g_31);
  q_9 = t;
  t = SSLsetAnnotations(q_9, d_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,s_31 = NULL,t_31 = NULL,t_9 = NULL;
  n_31 = t;
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_13;
        t = p_103(t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
      }
  }
  t = n_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_31 = ATgetFirst((ATermList) t);
      q_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_31);
  o_31 = t;
  t = term_s_11;
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, p_31);
  t = a_6(t_31, p_31, t);
  t = q_31;
  {
    static ATerm d_32 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_31 = NULL;
              w_31 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_31;
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = p_103(t);
              t = Cons_2_0(_id, d_32, t);
            }
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          {
            ATerm z_31 = NULL,a_32 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_31 = ATgetFirst((ATermList) t);
                a_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_32), (ATerm) ATmakeAppl(sym_Undefined_1, z_31));
          }
        }
      return(t);
    }
    t = d_32(t);
  }
  s_31 = t;
  t = (ATerm) ATinsert(CheckATermList(s_31), (ATerm) ATmakeAppl(sym_Program_1, p_31));
  t_9 = t;
  t = SSLsetAnnotations(t_9, o_31);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  if(match_string(t, "--help"))
    {
      t = p_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_32;
        }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  t = term_j_12;
  q_32 = t;
  t = term_w_0;
  r_32 = t;
  t = term_v_13;
  t = a_6(q_32, r_32, t);
  t = term_x_13;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  k_32 = t;
  t = term_d_11;
  m_32 = t;
  t = term_e_11;
  n_32 = t;
  t = (ATerm) ATempty;
  o_32 = t;
  t = SSL_table_put(m_32, n_32, o_32);
  t = k_32;
  {
    static ATerm d_3 (ATerm t)
    {
      ATerm a_14 = t;
      int c_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_103(t);
          LocalPopChoice(c_14);
        }
      else
        {
          t = a_14;
          {
            ATerm e_14 = t;
            int g_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_3, g_3, h_3, t);
                LocalPopChoice(g_14);
              }
            else
              {
                t = e_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_3, t);
  }
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_32 = NULL;
        y_32 = t;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_12 = NULL;
              t = y_32;
              {
                ATerm l_14 = t;
                int m_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_j_12;
                    t = get_config_0_0(t);
                    LocalPopChoice(m_14);
                  }
                else
                  {
                    t = l_14;
                    t = fetch_1_0(j_3, t);
                  }
              }
              t = y_32;
              t = default_system_usage_0_0(t);
              t = term_q_10;
              t_12 = t;
              t = SSL_exit(t_12);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              {
                ATerm c_13 = NULL;
                t = term_y_12;
                t = get_config_0_0(t);
                t = y_32;
                t = default_system_about_0_0(t);
                t = term_q_10;
                c_13 = t;
                t = SSL_exit(c_13);
              }
            }
        }
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm n_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
              static ATerm k_3 (ATerm t)
              {
                ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,x_9 = NULL;
                e_33 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_33 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_33);
                c_33 = t;
                t = d_33;
                if(((i_32 != NULL) && (i_32 != t)))
                  _fail(t);
                else
                  i_32 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_33);
                x_9 = t;
                t = SSLsetAnnotations(x_9, c_33);
                return(t);
              }
              t = fetch_1_0(k_3, t);
              t = term_d_4;
              a_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_32)), term_q_14);
              b_33 = t;
              t = SSL_printnl(a_33, b_33);
              t = (ATerm) ATmakeAppl(sym__2, term_d_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_32)), term_q_14));
              t = default_system_usage_0_0(t);
              t = term_j_4;
              z_32 = t;
              t = SSL_exit(z_32);
              LocalPopChoice(p_14);
            }
          else
            {
              t = n_14;
            }
        }
      }
  }
  j_32 = t;
  t = term_d_11;
  l_32 = t;
  t = SSL_table_destroy(l_32);
  t = j_32;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_101 (ATerm), ATerm p_101 (ATerm), ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  t = parse_options_1_0(o_101, t);
  j_33 = t;
  t = term_t_14;
  m_33 = t;
  t = SSL_table_create(m_33);
  t = term_t_14;
  k_33 = t;
  t = term_u_14;
  l_33 = t;
  t = SSL_table_put(k_33, l_33, j_33);
  t = j_33;
  t = q_101(t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_101, t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
        {
          ATerm x_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_15);
            }
          else
            {
              t = x_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = if_verbose2_1_0(y_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_b_15;
  n_33 = t;
  t = term_w_0;
  o_33 = t;
  t = term_e_15;
  t = a_6(n_33, o_33, t);
  t = term_f_15;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_g_15;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  p_33 = t;
  t = term_s_11;
  t = get_config_0_0(t);
  q_33 = t;
  t = term_d_4;
  r_33 = t;
  t = (ATerm) ATinsert(ATempty, q_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = p_33;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t)
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_100(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              {
                ATerm o_15 = t;
                int r_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(r_15);
                  }
                else
                  {
                    t = o_15;
                    {
                      ATerm s_15 = t;
                      int t_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_3, w_3, x_3, t);
                          LocalPopChoice(t_15);
                        }
                      else
                        {
                          t = s_15;
                          {
                            ATerm u_15 = t;
                            int a_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(a_16);
                              }
                            else
                              {
                                t = u_15;
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
  static ATerm t_3 (ATerm t)
  {
    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
    u_33 = t;
    {
      ATerm b_16 = t;
      int c_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_33 != NULL) && (t_33 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_33 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_3, t);
          LocalPopChoice(c_16);
        }
      else
        {
          t = b_16;
          t = term_d_16;
          t_33 = t;
        }
    }
    t = not_null(t_33);
    t = ReadFromFile_0_0(t);
    v_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_33, v_33);
    t = apply_strategy_1_0(x_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(l_3, z_100, q_3, t_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm z_33 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,i_10 = NULL;
  f_34 = t;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_34);
  z_33 = t;
  t = d_34;
  t = topdown_1_0(c_4, t);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, e_34);
  i_10 = t;
  t = SSLsetAnnotations(i_10, z_33);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  l_34 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
      t = k_34;
      {
        ATerm e_16 = t;
        int f_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                g_34 = ATgetArgument(t, 0);
                h_34 = ATgetArgument(t, 1);
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
                  t = l_34;
                  t = l_5(g_34, h_34, j_34, t);
                  LocalPopChoice(i_16);
                }
              else
                {
                  t = h_16;
                  t = l_34;
                }
            }
          }
        else
          {
            t = e_16;
            t = l_34;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_lit_1))
        {
          k_34 = ATgetArgument(t, 0);
          t = k_34;
        }
      else
        {
          t = l_34;
        }
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_4, _fail, default_usage_0_0, t);
  return(t);
}

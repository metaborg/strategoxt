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
ATerm term_c_16;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_a_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
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
ATerm term_l_10;
ATerm term_y_9;
ATerm term_n_9;
ATerm term_h_9;
ATerm term_d_9;
ATerm term_j_8;
ATerm term_f_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_u_6;
ATerm term_q_6;
ATerm term_k_6;
ATerm term_f_6;
ATerm term_j_5;
ATerm term_i_5;
ATerm term_g_5;
ATerm term_q_4;
ATerm term_m_4;
ATerm term_i_4;
ATerm term_g_4;
ATerm term_e_4;
ATerm term_c_4;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_v_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_d_11);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_v_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_v_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_v_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_v_0);
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
ATerm at_last_1_0 (ATerm c_85 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
ATerm de_quote_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_91 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm r_84 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm Sym2Strs_0_0 (ATerm t);
static ATerm k_5 (ATerm v_18, ATerm x_18, ATerm w_18, ATerm t);
ATerm topdown_1_0 (ATerm p_77 (ATerm), ATerm t);
static ATerm n_5 (ATerm e_35, ATerm f_35, ATerm t);
static ATerm o_5 (ATerm n_20, ATerm o_20, ATerm t);
static ATerm q_5 (ATerm s_83 (ATerm), ATerm z_139, ATerm r_20, ATerm t);
static ATerm p_5 (ATerm j_20, ATerm k_20, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm i_100 (ATerm), ATerm t);
static ATerm t_18 (ATerm n_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_5 (ATerm p_20, ATerm t);
static ATerm s_5 (ATerm g_35, ATerm h_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_21 (ATerm j_19, ATerm t);
static ATerm g_21 (ATerm n_19, ATerm p_19, ATerm q_19, ATerm t);
static ATerm h_21 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t);
static ATerm t_5 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_84 (ATerm), ATerm t);
static ATerm m_5 (ATerm y_33, ATerm z_33, ATerm t);
ATerm debug_1_0 (ATerm q_83 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm r_98 (ATerm), ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_5 (ATerm a_44, ATerm b_44, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_5 (ATerm y_48, ATerm z_48, ATerm x_48, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_5 (ATerm z_37, ATerm a_38, ATerm t);
ATerm foldr_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_98 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm need_help_1_0 (ATerm g_101 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm w_5 (ATerm p_50, ATerm q_50, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_103 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm parse_options_1_0 (ATerm i_103 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm iowrap_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
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
  t = term_c_4;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_4), b_0), term_e_4);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_i_4;
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
                  ATerm k_4 = t;
                  int l_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 = NULL;
                      t = f_1;
                      t = De_Escape_0_0(t);
                      k_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(k_1), term_m_4);
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
                          t = f_1;
                          t = De_Escape_0_0(t);
                          s_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(s_1), term_q_4);
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
ATerm at_last_1_0 (ATerm c_85 (ATerm), ATerm t)
{
  static ATerm j_7 (ATerm t)
  {
    ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
    g_7 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_7 = ATgetFirst((ATermList) t);
        i_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_4 = t;
      int x_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_0 = NULL,y_5 = NULL;
          t = SSLgetAnnotations(g_7);
          w_0 = t;
          t = i_7;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(i_7), h_7);
          y_5 = t;
          t = SSLsetAnnotations(y_5, w_0);
          t = c_85(t);
          LocalPopChoice(x_4);
        }
      else
        {
          t = w_4;
          {
            ATerm b_2 = NULL,g_2 = NULL,a_6 = NULL;
            t = SSLgetAnnotations(g_7);
            b_2 = t;
            t = i_7;
            t = j_7(t);
            g_2 = t;
            t = (ATerm) ATinsert(CheckATermList(g_2), h_7);
            a_6 = t;
            t = SSLsetAnnotations(a_6, b_2);
          }
        }
    }
    return(t);
  }
  t = j_7(t);
  return(t);
}
static ATerm j_0 (ATerm t)
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
  ATerm p_7 = NULL,r_7 = NULL,w_7 = NULL,y_7 = NULL,z_7 = NULL;
  z_7 = t;
  t = SSL_explode_string(z_7);
  p_7 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_7 = ATgetFirst((ATermList) t);
      {
        ATerm b_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_7;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = p_7;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_5 = ATgetFirst((ATermList) t);
      w_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_7;
  t = at_last_1_0(j_0, t);
  r_7 = t;
  t = SSL_implode_string(r_7);
  return(t);
}
ATerm filter_1_0 (ATerm i_91 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  v_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_8 = ATgetFirst((ATermList) t);
          x_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_5 = t;
        int f_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 = NULL,u_2 = NULL,w_2 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(v_8);
            r_2 = t;
            t = w_8;
            t = i_91(t);
            u_2 = t;
            t = x_8;
            t = filter_1_0(i_91, t);
            w_2 = t;
            t = (ATerm) ATinsert(CheckATermList(w_2), u_2);
            h_6 = t;
            t = SSLsetAnnotations(h_6, r_2);
            LocalPopChoice(f_5);
          }
        else
          {
            t = e_5;
            t = x_8;
            t = filter_1_0(i_91, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_84 (ATerm), ATerm t)
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
          ATerm e_3 = NULL,h_3 = NULL,n_6 = NULL;
          t = SSLgetAnnotations(b_10);
          e_3 = t;
          t = a_10;
          t = d_10(t);
          h_3 = t;
          t = (ATerm) ATinsert(CheckATermList(h_3), x_9);
          n_6 = t;
          t = SSLsetAnnotations(n_6, e_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_10;
        t = r_84(t);
      }
    return(t);
  }
  t = d_10(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_5);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_5);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_5);
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
              t = (ATerm) ATinsert(ATempty, term_f_6);
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
                      t = at_end_1_0(p_0, t);
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
                              t = at_end_1_0(u_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  l_11 = ATgetArgument(t, 0);
                                  n_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_12 = NULL,o_12 = NULL;
                                    t = l_11;
                                    t = Sym2Strs_0_0(t);
                                    j_12 = t;
                                    t = n_11;
                                    t = Sym2Strs_0_0(t);
                                    o_12 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_5)), o_12), j_12);
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
                                        ATerm u_12 = NULL,v_12 = NULL;
                                        t = l_11;
                                        t = Sym2Strs_0_0(t);
                                        u_12 = t;
                                        t = n_11;
                                        t = Sym2Strs_0_0(t);
                                        v_12 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_5)), v_12), u_12);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm g_6 = t;
                                      int i_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              l_11 = ATgetArgument(t, 0);
                                              {
                                                ATerm j_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(i_6);
                                          {
                                            ATerm y_12 = NULL;
                                            t = l_11;
                                            t = Sym2Strs_0_0(t);
                                            y_12 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_6)), y_12);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = g_6;
                                          {
                                            ATerm l_6 = t;
                                            int m_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    l_11 = ATgetArgument(t, 0);
                                                    n_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm p_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(m_6);
                                                {
                                                  ATerm f_13 = NULL,g_13 = NULL;
                                                  t = l_11;
                                                  t = Sym2Strs_0_0(t);
                                                  f_13 = t;
                                                  t = n_11;
                                                  t = Sym2Strs_0_0(t);
                                                  g_13 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_6)), g_13), f_13);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = l_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    l_11 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_13 = NULL;
                                                      t = l_11;
                                                      t = Sym2Strs_0_0(t);
                                                      i_13 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, i_13), (ATerm) ATinsert(ATempty, term_q_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        l_11 = ATgetArgument(t, 0);
                                                        n_11 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_13 = NULL,p_13 = NULL;
                                                          t = l_11;
                                                          t = Sym2Strs_0_0(t);
                                                          n_13 = t;
                                                          t = n_11;
                                                          t = Sym2Strs_0_0(t);
                                                          p_13 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_13), (ATerm) ATinsert(ATempty, term_u_6)), n_13);
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
                                                              ATerm v_13 = NULL,x_13 = NULL;
                                                              t = l_11;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              v_13 = t;
                                                              t = n_11;
                                                              t = Sym2Strs_0_0(t);
                                                              x_13 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_13), (ATerm) ATinsert(ATempty, term_d_7)), v_13);
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
                                                                  ATerm a_14 = NULL,c_14 = NULL;
                                                                  t = l_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  a_14 = t;
                                                                  t = n_11;
                                                                  t = Sym2Strs_0_0(t);
                                                                  c_14 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_14), (ATerm) ATinsert(ATempty, term_e_7)), a_14);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    l_11 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm e_14 = NULL;
                                                                      t = l_11;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      e_14 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(e_14), term_f_7);
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
                                                                              h_4 = t;
                                                                              t = (ATerm) ATinsert(ATempty, h_4);
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm n_7 = t;
                                                                            int q_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    l_11 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm s_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(q_7);
                                                                                {
                                                                                  ATerm y_4 = NULL;
                                                                                  t = l_11;
                                                                                  {
                                                                                    ATerm t_7 = t;
                                                                                    int u_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        LocalPopChoice(u_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = t_7;
                                                                                      }
                                                                                  }
                                                                                  y_4 = t;
                                                                                  t = (ATerm) ATinsert(ATempty, y_4);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_7;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_v_7);
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
static ATerm k_5 (ATerm v_18, ATerm x_18, ATerm w_18, ATerm t)
{
  ATerm n_14 = NULL,q_14 = NULL,r_14 = NULL;
  t = x_18;
  t = Sym2Strs_0_0(t);
  q_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_7)), q_14), (ATerm) ATinsert(ATempty, term_x_7));
  t = concat_0_0(t);
  r_14 = t;
  t = SSL_concat_strings(r_14);
  n_14 = t;
  t = SSL_mkterm(n_14, w_18);
  return(t);
}
ATerm topdown_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  static ATerm x_0 (ATerm t)
  {
    t = topdown_1_0(p_77, t);
    return(t);
  }
  t = p_77(t);
  t = SRTS_all(x_0, t);
  return(t);
}
static ATerm n_5 (ATerm e_35, ATerm f_35, ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_fputc(e_35, f_35);
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
static ATerm o_5 (ATerm n_20, ATerm o_20, ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_write_term_to_stream_text(n_20, o_20);
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
static ATerm q_5 (ATerm s_83 (ATerm), ATerm z_139, ATerm r_20, ATerm t)
{
  ATerm b_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_139, term_a_8);
  t = t_5(t);
  b_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_15, r_20);
  t = s_83(t);
  t = fclose_0_0(t);
  t = r_20;
  return(t);
}
static ATerm p_5 (ATerm j_20, ATerm k_20, ATerm t)
{
  ATerm c_15 = NULL;
  t = SSL_write_term_to_stream_baf(j_20, k_20);
  c_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_15);
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
  ATerm d_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(match_cons(b_8, sym_Stream_1))
        {
          d_6 = ATgetArgument(b_8, 0);
        }
      else
        _fail(t);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_5(d_6, e_6, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(match_cons(d_8, sym_Stream_1))
        {
          a_7 = ATgetArgument(d_8, 0);
        }
      else
        _fail(t);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5(a_7, l_7, t);
  w_6 = t;
  t = term_f_8;
  x_6 = t;
  t = w_6;
  if(match_cons(t, sym_Stream_1))
    {
      y_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, w_6);
  t = n_5(x_6, y_6, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,o_15 = NULL,p_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,p_17 = NULL,s_17 = NULL,z_6 = NULL,v_6 = NULL;
  j_15 = t;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_15);
  v_15 = t;
  t = w_15;
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_0, t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = term_j_8;
        i_15 = t;
      }
  }
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_15, x_15);
  v_6 = t;
  t = SSLsetAnnotations(v_6, v_15);
  t = j_15;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_15);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_15, (ATerm) ATmakeAppl(sym__2, not_null(i_15), p_15));
  z_6 = t;
  t = SSLsetAnnotations(z_6, k_15);
  u_15 = t;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL,l_5 = NULL,v_5 = NULL,b_6 = NULL,c_6 = NULL,b_7 = NULL;
        t = SSLgetAnnotations(u_15);
        h_5 = t;
        t = p_17;
        t = fetch_1_0(z_0, t);
        l_5 = t;
        t = s_17;
        if(match_cons(t, sym__2))
          {
            b_6 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_5(a_1, b_6, c_6, t);
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_5, v_5);
        b_7 = t;
        t = SSLsetAnnotations(b_7, h_5);
        LocalPopChoice(l_8);
      }
    else
      {
        t = k_8;
        {
          ATerm o_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,c_7 = NULL;
          t = SSLgetAnnotations(u_15);
          o_6 = t;
          t = s_17;
          if(match_cons(t, sym__2))
            {
              s_6 = ATgetArgument(t, 0);
              t_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_5(b_1, s_6, t_6, t);
          r_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_17, r_6);
          c_7 = t;
          t = SSLsetAnnotations(c_7, o_6);
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
ATerm apply_strategy_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  t = dtime_0_0(t);
  t = b_18;
  t = i_100(t);
  a_18 = t;
  t = dtime_0_0(t);
  v_17 = t;
  t = a_18;
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_17), (ATerm) ATmakeAppl(sym_Runtime_1, v_17)), x_17);
  return(t);
}
static ATerm t_18 (ATerm n_18, ATerm t)
{
  t = SSL_fclose(n_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  r_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_18 = ATgetArgument(t, 0);
      {
        ATerm m_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_18);
            LocalPopChoice(o_8);
          }
        else
          {
            t = m_8;
            t = t_18(r_18, t);
          }
      }
    }
  else
    {
      t = t_18(r_18, t);
    }
  return(t);
}
static ATerm r_5 (ATerm p_20, ATerm t)
{
  t = SSL_read_term_from_stream(p_20);
  return(t);
}
static ATerm s_5 (ATerm g_35, ATerm h_35, ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_fopen(g_35, h_35);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
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
      ATerm p_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_8 = ATgetArgument(t, 1);
        if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
          {
            k_19 = ATgetFirst((ATermList) r_8);
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
  ATerm r_19 = NULL,s_19 = NULL,z_19 = NULL,c_20 = NULL,o_7 = NULL;
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
  o_7 = t;
  t = SSLsetAnnotations(o_7, z_19);
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(r_19, s_19, t);
  return(t);
}
static ATerm h_21 (ATerm f_20, ATerm g_20, ATerm h_20, ATerm t)
{
  ATerm i_20 = NULL,l_20 = NULL,s_20 = NULL,x_20 = NULL,c_8 = NULL;
  t = SSLgetAnnotations(h_20);
  s_20 = t;
  t = SSL_is_string(f_20);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_20, g_20);
  c_8 = t;
  t = SSLsetAnnotations(c_8, s_20);
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(i_20, l_20, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  if(match_cons(t, sym__2))
    {
      a_21 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
      {
        ATerm u_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_21(z_20, t);
            LocalPopChoice(y_8);
          }
        else
          {
            t = u_8;
            {
              ATerm z_8 = t;
              int a_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_21(a_21, b_21, z_20, t);
                  LocalPopChoice(a_9);
                }
              else
                {
                  t = z_8;
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
static ATerm c_1 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  ATerm e_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL;
      l_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_21, term_h_9);
      t = t_5(t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = e_9;
      t = debug_1_0(c_1, t);
      _fail(t);
    }
  j_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_5(k_21, t);
  i_21 = t;
  t = j_21;
  t = fclose_0_0(t);
  t = i_21;
  return(t);
}
ATerm fetch_1_0 (ATerm l_84 (ATerm), ATerm t)
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
      ATerm i_9 = t;
      int j_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_8 = NULL,i_8 = NULL,n_8 = NULL;
          t = SSLgetAnnotations(x_22);
          e_8 = t;
          t = y_22;
          t = l_84(t);
          i_8 = t;
          t = (ATerm) ATinsert(CheckATermList(z_22), i_8);
          n_8 = t;
          t = SSLsetAnnotations(n_8, e_8);
          LocalPopChoice(j_9);
        }
      else
        {
          t = i_9;
          {
            ATerm b_9 = NULL,f_9 = NULL,q_8 = NULL;
            t = SSLgetAnnotations(x_22);
            b_9 = t;
            t = z_22;
            t = d_23(t);
            f_9 = t;
            t = (ATerm) ATinsert(CheckATermList(f_9), y_22);
            q_8 = t;
            t = SSLsetAnnotations(q_8, b_9);
          }
        }
    }
    return(t);
  }
  t = d_23(t);
  return(t);
}
static ATerm m_5 (ATerm y_33, ATerm z_33, ATerm t)
{
  t = SSL_strcat(y_33, z_33);
  return(t);
}
ATerm debug_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  j_23 = t;
  t = q_83(t);
  k_23 = t;
  t = term_c_4;
  l_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_23), k_23);
  m_23 = t;
  t = SSL_printnl(l_23, m_23);
  t = j_23;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_n_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = NULL;
      t_23 = t;
      t = SSL_is_string(t_23);
      LocalPopChoice(q_9);
    }
  else
    {
      t = o_9;
      {
        ATerm r_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_1, t);
            LocalPopChoice(t_9);
          }
        else
          {
            t = r_9;
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
                        ATerm u_9 = t;
                        int v_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(v_9);
                          }
                        else
                          {
                            t = u_9;
                            t = debug_1_0(i_1, t);
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
                      t = m_5(l_24, o_24, t);
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
  t = term_y_9;
  u_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, t_24);
  t = w_5(u_24, t_24, t);
  {
    ATerm z_9 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,w_24 = NULL;
        t = eval_config_0_0(t);
        v_24 = t;
        t = term_y_9;
        w_24 = t;
        t = SSL_table_put(w_24, t_24, v_24);
        t = v_24;
        LocalPopChoice(c_10);
      }
    else
      {
        t = z_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    ATerm e_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL;
        t = term_l_10;
        t = get_config_0_0(t);
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_m_10);
        t = geq_0_0(t);
        t = a_25;
        t = r_98(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = e_10;
        t = a_25;
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
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
static ATerm l_1 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  t = SSL_string_to_int(g_25);
  h_25 = t;
  t = term_n_10;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, h_25);
  t = z_5(i_25, h_25, t);
  t = g_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_1, l_1, m_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
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
static ATerm p_1 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  t = term_l_10;
  p_25 = t;
  t = term_p_10;
  q_25 = t;
  t = term_q_10;
  t = z_5(p_25, q_25, t);
  t = term_r_10;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_s_10;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  t = SSL_string_to_int(r_25);
  s_25 = t;
  t = term_l_10;
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, s_25);
  t = z_5(t_25, s_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_25);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_t_10;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  t = term_u_10;
  u_25 = t;
  t = term_v_0;
  v_25 = t;
  t = term_v_10;
  t = z_5(u_25, v_25, t);
  t = term_w_10;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_1, p_1, r_1, t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_1, u_1, v_1, t);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            t = Option_3_0(w_1, y_1, z_1, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm a_44, ATerm b_44, ATerm t)
{
  ATerm w_25 = NULL;
  t = term_y_9;
  w_25 = t;
  t = SSL_table_put(w_25, a_44, b_44);
  t = (ATerm) ATmakeAppl(sym__3, term_y_9, a_44, b_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL;
      t = term_v_0;
      t = e_0(t);
      b_26 = t;
      t = term_c_11;
      c_26 = t;
      t = term_d_11;
      d_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_11, term_d_11, b_26);
      t = x_5(c_26, d_26, b_26, t);
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
      t = c_0(t);
      t = term_v_0;
      t = d_0(t);
      g_26 = t;
      t = (ATerm) ATinsert(CheckATermList(a_26), g_26);
    }
  return(t);
}
static ATerm c_2 (ATerm t)
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
static ATerm d_2 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  j_26 = t;
  t = term_e_11;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, j_26);
  t = z_5(k_26, j_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_26);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
static ATerm x_5 (ATerm y_48, ATerm z_48, ATerm x_48, ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_11 = ATgetArgument(t, 0);
            ATerm k_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
        t = w_5(y_48, z_48, t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = (ATerm) ATempty;
      }
  }
  n_26 = t;
  t = (ATerm) ATinsert(CheckATermList(n_26), x_48);
  o_26 = t;
  t = SSL_table_put(y_48, z_48, o_26);
  t = m_26;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
      t = term_v_0;
      t = n_0(t);
      z_26 = t;
      t = term_c_11;
      a_27 = t;
      t = term_d_11;
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_11, term_d_11, z_26);
      t = x_5(a_27, b_27, z_26, t);
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
      t = k_0(t);
      t = x_26;
      t = l_0(t);
      f_27 = t;
      t = (ATerm) ATinsert(CheckATermList(y_26), f_27);
    }
  return(t);
}
static ATerm f_2 (ATerm t)
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
static ATerm h_2 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  t = term_m_11;
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, k_27);
  t = z_5(l_27, k_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_27);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, h_2, i_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_0;
  t = whoami_0_0(t);
  m_27 = t;
  t = term_c_4;
  o_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_11), m_27);
  p_27 = t;
  t = SSL_printnl(o_27, p_27);
  t = term_i_4;
  n_27 = t;
  t = SSL_exit(n_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_11;
  t = get_config_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_37, a_38);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      t = SSL_addr(z_37, a_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_90 (ATerm), ATerm f_90 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_27;
      t = e_90(t);
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
      t = foldr_2_0(e_90, f_90, t);
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, w_27);
      t = f_90(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_p_10;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_5(j_10, k_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_27 = NULL,f_10 = NULL,g_10 = NULL;
  t = times_0_0(t);
  g_10 = t;
  t = SSL_explode_term(g_10);
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
  t = foldr_2_0(k_2, l_2, t);
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
    ATerm v_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_28;
        if((l_28 != t))
          {
            _fail(t);
          }
        t = k_28;
        LocalPopChoice(x_11);
      }
    else
      {
        t = v_11;
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
        {
          ATerm y_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_28, m_28);
              LocalPopChoice(z_11);
            }
          else
            {
              t = y_11;
              t = SSL_gtr(l_28, m_28);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_98 (ATerm), ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_28 = NULL;
        t = term_l_10;
        t = get_config_0_0(t);
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_28, term_i_4);
        t = geq_0_0(t);
        t = q_28;
        t = q_98(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = q_28;
      }
  }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL;
  t = run_time_0_0(t);
  u_28 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  v_28 = t;
  t = term_c_4;
  x_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_12), u_28), term_c_12), v_28);
  y_28 = t;
  t = SSL_printnl(x_28, y_28);
  t = (ATerm) ATmakeAppl(sym__2, term_c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_12), u_28), term_c_12), v_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_10;
  z_28 = t;
  t = SSL_exit(z_28);
  return(t);
}
static ATerm n_2 (ATerm t)
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
            ATerm i_11 = NULL,t_8 = NULL;
            t = SSLgetAnnotations(i_29);
            i_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_29);
            t_8 = t;
            t = SSLsetAnnotations(t_8, i_11);
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
ATerm need_help_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_12;
      t = get_config_0_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = fetch_1_0(n_2, t);
    }
  t = g_101(t);
  return(t);
}
ATerm map_1_0 (ATerm b_84 (ATerm), ATerm t)
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
        ATerm w_11 = NULL,e_12 = NULL,f_12 = NULL,c_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_29 = ATgetFirst((ATermList) t);
            x_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_29);
        w_11 = t;
        t = w_29;
        t = b_84(t);
        e_12 = t;
        t = x_29;
        t = y_29(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), e_12);
        c_9 = t;
        t = SSLsetAnnotations(c_9, w_11);
      }
    return(t);
  }
  t = y_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_30 = ATgetFirst((ATermList) t);
      c_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_30 = NULL,h_30 = NULL;
        static ATerm o_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_30)), not_null(h_30));
          return(t);
        }
        t = c_30;
        t = i_0(t);
        if(((g_30 != NULL) && (g_30 != t)))
          _fail(t);
        else
          g_30 = t;
        t = b_30;
        t = g_0(t);
        if(((h_30 != NULL) && (h_30 != t)))
          _fail(t);
        else
          h_30 = t;
        t = c_30;
        t = reverse_acc_2_0(g_0, o_2, t);
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
static ATerm w_5 (ATerm p_50, ATerm q_50, ATerm t)
{
  t = SSL_table_get(p_50, q_50);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,m_9 = NULL;
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
  m_9 = t;
  t = SSLsetAnnotations(m_9, l_30);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_30), term_k_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_11;
      t = get_config_0_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = fetch_1_0(p_2, t);
    }
  t = term_n_12;
  t = echo_0_0(t);
  t = term_c_11;
  j_30 = t;
  t = term_d_11;
  k_30 = t;
  t = term_p_12;
  t = w_5(j_30, k_30, t);
  t = reverse_acc_2_0(_id, q_2, t);
  t = map_1_0(s_2, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
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
                ATerm t_12 = ATgetFirst((ATermList) t);
                ATerm w_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_30;
          }
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATinsert(ATempty, r_30);
      }
  }
  s_30 = t;
  t = term_j_8;
  t_30 = t;
  t = SSL_printnl(t_30, s_30);
  t = r_30;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  t = term_x_12;
  x_30 = t;
  t = term_v_0;
  y_30 = t;
  t = term_z_12;
  t = z_5(x_30, y_30, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_a_13;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  t = term_x_12;
  b_31 = t;
  t = term_v_0;
  c_31 = t;
  t = term_z_12;
  t = z_5(b_31, c_31, t);
  t = term_c_13;
  z_30 = t;
  t = term_v_0;
  a_31 = t;
  t = term_d_13;
  t = z_5(z_30, a_31, t);
  t = term_e_13;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_2, x_2, y_2, t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = Option_3_0(z_2, a_3, b_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_57 (ATerm), ATerm g_57 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,p_9 = NULL;
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
  t = f_57(t);
  g_31 = t;
  t = f_31;
  t = g_57(t);
  h_31 = t;
  t = (ATerm) ATinsert(CheckATermList(h_31), g_31);
  p_9 = t;
  t = SSLsetAnnotations(p_9, d_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,s_31 = NULL,t_31 = NULL,s_9 = NULL;
  n_31 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_13;
        t = j_103(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
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
  t = term_r_11;
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, p_31);
  t = z_5(t_31, p_31, t);
  t = q_31;
  {
    static ATerm d_32 (ATerm t)
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_31 = NULL;
              w_31 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_31;
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = j_103(t);
              t = Cons_2_0(_id, d_32, t);
            }
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
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
  s_9 = t;
  t = SSLsetAnnotations(s_9, o_31);
  return(t);
}
static ATerm d_3 (ATerm t)
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
static ATerm f_3 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  t = term_i_12;
  q_32 = t;
  t = term_v_0;
  r_32 = t;
  t = term_u_13;
  t = z_5(q_32, r_32, t);
  t = term_w_13;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_y_13;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_103 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  k_32 = t;
  t = term_c_11;
  m_32 = t;
  t = term_d_11;
  n_32 = t;
  t = (ATerm) ATempty;
  o_32 = t;
  t = SSL_table_put(m_32, n_32, o_32);
  t = k_32;
  {
    static ATerm c_3 (ATerm t)
    {
      ATerm z_13 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_103(t);
          LocalPopChoice(b_14);
        }
      else
        {
          t = z_13;
          {
            ATerm d_14 = t;
            int f_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_3, f_3, g_3, t);
                LocalPopChoice(f_14);
              }
            else
              {
                t = d_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_3, t);
  }
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_32 = NULL;
        y_32 = t;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_12 = NULL;
              t = y_32;
              {
                ATerm k_14 = t;
                int l_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_12;
                    t = get_config_0_0(t);
                    LocalPopChoice(l_14);
                  }
                else
                  {
                    t = k_14;
                    t = fetch_1_0(i_3, t);
                  }
              }
              t = y_32;
              t = default_system_usage_0_0(t);
              t = term_p_10;
              s_12 = t;
              t = SSL_exit(s_12);
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
              {
                ATerm b_13 = NULL;
                t = term_x_12;
                t = get_config_0_0(t);
                t = y_32;
                t = default_system_about_0_0(t);
                t = term_p_10;
                b_13 = t;
                t = SSL_exit(b_13);
              }
            }
        }
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        {
          ATerm m_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
              static ATerm j_3 (ATerm t)
              {
                ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,w_9 = NULL;
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
                w_9 = t;
                t = SSLsetAnnotations(w_9, c_33);
                return(t);
              }
              t = fetch_1_0(j_3, t);
              t = term_c_4;
              a_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_32)), term_p_14);
              b_33 = t;
              t = SSL_printnl(a_33, b_33);
              t = (ATerm) ATmakeAppl(sym__2, term_c_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_32)), term_p_14));
              t = default_system_usage_0_0(t);
              t = term_i_4;
              z_32 = t;
              t = SSL_exit(z_32);
              LocalPopChoice(o_14);
            }
          else
            {
              t = m_14;
            }
        }
      }
  }
  j_32 = t;
  t = term_c_11;
  l_32 = t;
  t = SSL_table_destroy(l_32);
  t = j_32;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  t = parse_options_1_0(i_101, t);
  j_33 = t;
  t = term_s_14;
  m_33 = t;
  t = SSL_table_create(m_33);
  t = term_s_14;
  k_33 = t;
  t = term_t_14;
  l_33 = t;
  t = SSL_table_put(k_33, l_33, j_33);
  t = j_33;
  t = k_101(t);
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_101, t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        {
          ATerm w_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_101(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_14);
            }
          else
            {
              t = w_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = if_verbose2_1_0(x_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_a_15;
  n_33 = t;
  t = term_v_0;
  o_33 = t;
  t = term_d_15;
  t = z_5(n_33, o_33, t);
  t = term_e_15;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_f_15;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  p_33 = t;
  t = term_r_11;
  t = get_config_0_0(t);
  q_33 = t;
  t = term_c_4;
  r_33 = t;
  t = (ATerm) ATinsert(ATempty, q_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = p_33;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  static ATerm k_3 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_100(t);
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
                int q_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(q_15);
                  }
                else
                  {
                    t = n_15;
                    {
                      ATerm r_15 = t;
                      int s_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_3, v_3, w_3, t);
                          LocalPopChoice(s_15);
                        }
                      else
                        {
                          t = r_15;
                          {
                            ATerm t_15 = t;
                            int z_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_15);
                              }
                            else
                              {
                                t = t_15;
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
  static ATerm s_3 (ATerm t)
  {
    ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
    u_33 = t;
    {
      ATerm a_16 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_3 (ATerm t)
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
          t = fetch_1_0(y_3, t);
          LocalPopChoice(b_16);
        }
      else
        {
          t = a_16;
          t = term_c_16;
          t_33 = t;
        }
    }
    t = not_null(t_33);
    t = ReadFromFile_0_0(t);
    v_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_33, v_33);
    t = apply_strategy_1_0(r_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(k_3, t_100, p_3, s_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,h_10 = NULL;
  f_34 = t;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_34);
  b_34 = t;
  t = d_34;
  t = topdown_1_0(b_4, t);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, e_34);
  h_10 = t;
  t = SSLsetAnnotations(h_10, b_34);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL;
  l_34 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
      t = k_34;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_prod_3))
              {
                g_34 = ATgetArgument(t, 0);
                h_34 = ATgetArgument(t, 1);
                {
                  ATerm f_16 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_16);
            {
              ATerm g_16 = t;
              int h_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_34;
                  t = k_5(g_34, h_34, j_34, t);
                  LocalPopChoice(h_16);
                }
              else
                {
                  t = g_16;
                  t = l_34;
                }
            }
          }
        else
          {
            t = d_16;
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
  t = iowrap_3_0(z_3, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_ATerm_1;
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
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_m_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_g_18;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_y_9;
ATerm term_d_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_q_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_u_6;
ATerm term_o_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_e_6;
ATerm term_j_5;
ATerm term_d_5;
ATerm term_w_4;
void init_constant_terms (void)
{
  ATprotect(&(term_w_4));
  term_w_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__3, term_s_15, term_v_15, term_w_4);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm at_last_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm k_0 (ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm filter_1_0 (ATerm p_101 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm topdown_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm _2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_110 (ATerm), ATerm);
ATerm m_10 (ATerm e_10, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_95 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm v_1 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm w_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm need_help_1_0 (ATerm a_111 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm p_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm l_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_113 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm parse_options_1_0 (ATerm c_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm iowrap_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm v_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL;
  m_0 = t;
  t = term_w_4;
  t = whoami_0_0(t);
  n_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), n_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_0;
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  t = SSL_explode_string(p_0);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm o_0 = NULL;
  t = map_1_0(c_0, t);
  t = concat_0_0(t);
  o_0 = t;
  t = SSL_implode_string(o_0);
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,b_1 = NULL,c_1 = NULL;
  c_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_0 = ATgetFirst((ATermList) t);
      b_1 = (ATerm) ATgetNext((ATermList) t);
      t = b_1;
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
                  ATerm a_5 = t;
                  int b_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_1 = NULL;
                      t = y_0;
                      t = De_Escape_0_0(t);
                      e_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(e_1), term_d_5);
                      ;
                      LocalPopChoice(b_5);
                    }
                  else
                    {
                      t = a_5;
                      {
                        ATerm i_1 = NULL;
                        t = b_1;
                        t = De_Escape_0_0(t);
                        i_1 = t;
                        t = (ATerm) ATinsert(CheckATermList(i_1), z_0);
                      }
                    }
                }
              else
                {
                  ATerm l_1 = NULL;
                  t = b_1;
                  t = De_Escape_0_0(t);
                  l_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(l_1), z_0);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = z_0;
                  if(match_int(t, 92))
                    {
                      ATerm e_5 = t;
                      int f_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_1 = NULL;
                          t = y_0;
                          t = De_Escape_0_0(t);
                          n_1 = t;
                          t = (ATerm) ATinsert(CheckATermList(n_1), term_j_5);
                          ;
                          LocalPopChoice(f_5);
                        }
                      else
                        {
                          t = e_5;
                          {
                            ATerm q_1 = NULL;
                            t = b_1;
                            t = De_Escape_0_0(t);
                            q_1 = t;
                            t = (ATerm) ATinsert(CheckATermList(q_1), z_0);
                          }
                        }
                    }
                  else
                    {
                      ATerm u_1 = NULL;
                      t = b_1;
                      t = De_Escape_0_0(t);
                      u_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(u_1), z_0);
                    }
                }
              else
                {
                  ATerm y_1 = NULL;
                  t = b_1;
                  t = De_Escape_0_0(t);
                  y_1 = t;
                  t = (ATerm) ATinsert(CheckATermList(y_1), z_0);
                }
            }
        }
      else
        {
          ATerm c_2 = NULL;
          t = b_1;
          t = De_Escape_0_0(t);
          c_2 = t;
          t = (ATerm) ATinsert(CheckATermList(c_2), z_0);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_1;
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,m_3 = NULL,n_3 = NULL;
  f_3 = t;
  t = SSL_explode_string(f_3);
  n_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_3 = ATgetFirst((ATermList) t);
      m_3 = (ATerm) ATgetNext((ATermList) t);
      t = m_3;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_3 = ATgetFirst((ATermList) t);
          j_3 = (ATerm) ATgetNext((ATermList) t);
          t = i_3;
          if(match_int(t, 34))
            {
              t = k_3;
              if(match_int(t, 92))
                {
                  ATerm k_5 = t;
                  int p_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_3 = NULL;
                      t = j_3;
                      t = De_Escape_0_0(t);
                      p_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_3), term_d_5);
                      ;
                      LocalPopChoice(p_5);
                    }
                  else
                    {
                      t = k_5;
                      {
                        ATerm t_3 = NULL;
                        t = m_3;
                        t = De_Escape_0_0(t);
                        t_3 = t;
                        t = (ATerm) ATinsert(CheckATermList(t_3), k_3);
                      }
                    }
                }
              else
                {
                  ATerm w_3 = NULL;
                  t = m_3;
                  t = De_Escape_0_0(t);
                  w_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_3), k_3);
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = k_3;
                  if(match_int(t, 92))
                    {
                      ATerm q_5 = t;
                      int s_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_3 = NULL;
                          t = j_3;
                          t = De_Escape_0_0(t);
                          y_3 = t;
                          t = (ATerm) ATinsert(CheckATermList(y_3), term_j_5);
                          ;
                          LocalPopChoice(s_5);
                        }
                      else
                        {
                          t = q_5;
                          {
                            ATerm g_4 = NULL;
                            t = m_3;
                            t = De_Escape_0_0(t);
                            g_4 = t;
                            t = (ATerm) ATinsert(CheckATermList(g_4), k_3);
                          }
                        }
                    }
                  else
                    {
                      ATerm j_4 = NULL;
                      t = m_3;
                      t = De_Escape_0_0(t);
                      j_4 = t;
                      t = (ATerm) ATinsert(CheckATermList(j_4), k_3);
                    }
                }
              else
                {
                  ATerm p_4 = NULL;
                  t = m_3;
                  t = De_Escape_0_0(t);
                  p_4 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_4), k_3);
                }
            }
        }
      else
        {
          ATerm t_4 = NULL;
          t = m_3;
          t = De_Escape_0_0(t);
          t_4 = t;
          t = (ATerm) ATinsert(CheckATermList(t_4), k_3);
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_3;
    }
  g_3 = t;
  t = SSL_implode_string(g_3);
  return(t);
}
ATerm e_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm t_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_0, t);
        t = m_95(t);
        ;
        LocalPopChoice(u_5);
      }
    else
      {
        t = t_5;
        t = Cons_2_0(_id, u_4, t);
      }
    return(t);
  }
  t = u_4(t);
  return(t);
}
ATerm k_0 (ATerm t)
{
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_5 = ATgetFirst((ATermList) t);
      if(((ATgetType(v_5) != AT_INT) || (ATgetInt((ATermInt) v_5) != 34)))
        _fail(t);
      {
        ATerm w_5 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(w_5) != AT_LIST) || !(ATisEmpty(w_5))))
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
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,m_5 = NULL,n_5 = NULL;
  y_4 = t;
  t = SSL_explode_string(y_4);
  x_4 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_4 = ATgetFirst((ATermList) t);
      {
        ATerm x_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_4;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = x_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_5 = ATgetFirst((ATermList) t);
      m_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_5;
  t = at_last_1_0(k_0, t);
  n_5 = t;
  t = SSL_implode_string(n_5);
  return(t);
}
ATerm filter_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm b_6 = t;
        int c_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_0 (ATerm t)
            {
              t = filter_1_0(p_101, t);
              return(t);
            }
            t = Cons_2_0(p_101, l_0, t);
            ;
            LocalPopChoice(c_6);
          }
        else
          {
            t = b_6;
            {
              ATerm r_5 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_6 = ATgetFirst((ATermList) t);
                  r_5 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_5;
              t = filter_1_0(p_101, t);
            }
          }
      }
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_6);
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_i_6);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_6);
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  h_6 = t;
  if(match_cons(t, sym_cf_1))
    {
      f_6 = ATgetArgument(t, 0);
      t = f_6;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          f_6 = ATgetArgument(t, 0);
          t = f_6;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_k_6);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  f_6 = ATgetArgument(t, 0);
                  g_6 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(g_6), f_6);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      f_6 = ATgetArgument(t, 0);
                      t = f_6;
                      t = Sym2Strs_0_0(t);
                      t = at_end_1_0(r_0, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          f_6 = ATgetArgument(t, 0);
                          t = f_6;
                          t = Sym2Strs_0_0(t);
                          t = at_end_1_0(s_0, t);
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              f_6 = ATgetArgument(t, 0);
                              t = f_6;
                              t = Sym2Strs_0_0(t);
                              t = at_end_1_0(t_0, t);
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  f_6 = ATgetArgument(t, 0);
                                  g_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_6 = NULL,s_6 = NULL;
                                    t = f_6;
                                    t = Sym2Strs_0_0(t);
                                    r_6 = t;
                                    t = g_6;
                                    t = Sym2Strs_0_0(t);
                                    s_6 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_6)), s_6), r_6);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      f_6 = ATgetArgument(t, 0);
                                      g_6 = ATgetArgument(t, 1);
                                      {
                                        ATerm v_6 = NULL,w_6 = NULL;
                                        t = f_6;
                                        t = Sym2Strs_0_0(t);
                                        v_6 = t;
                                        t = g_6;
                                        t = Sym2Strs_0_0(t);
                                        w_6 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_6)), w_6), v_6);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm l_6 = t;
                                      int m_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              f_6 = ATgetArgument(t, 0);
                                              {
                                                ATerm n_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(m_6);
                                          {
                                            ATerm y_6 = NULL;
                                            t = f_6;
                                            t = Sym2Strs_0_0(t);
                                            y_6 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_6)), y_6);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = l_6;
                                          {
                                            ATerm p_6 = t;
                                            int q_6 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    f_6 = ATgetArgument(t, 0);
                                                    g_6 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm t_6 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(q_6);
                                                {
                                                  ATerm c_7 = NULL,d_7 = NULL;
                                                  t = f_6;
                                                  t = Sym2Strs_0_0(t);
                                                  c_7 = t;
                                                  t = g_6;
                                                  t = Sym2Strs_0_0(t);
                                                  d_7 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_6)), d_7), c_7);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = p_6;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    f_6 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_7 = NULL;
                                                      t = f_6;
                                                      t = Sym2Strs_0_0(t);
                                                      f_7 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, f_7), (ATerm) ATinsert(ATempty, term_u_6));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        f_6 = ATgetArgument(t, 0);
                                                        g_6 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_7 = NULL,j_7 = NULL;
                                                          t = f_6;
                                                          t = Sym2Strs_0_0(t);
                                                          i_7 = t;
                                                          t = g_6;
                                                          t = Sym2Strs_0_0(t);
                                                          j_7 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, j_7), (ATerm) ATinsert(ATempty, term_x_6)), i_7);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            f_6 = ATgetArgument(t, 0);
                                                            g_6 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm o_7 = NULL,p_7 = NULL;
                                                              t = f_6;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              o_7 = t;
                                                              t = g_6;
                                                              t = Sym2Strs_0_0(t);
                                                              p_7 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_7), (ATerm) ATinsert(ATempty, term_z_6)), o_7);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                f_6 = ATgetArgument(t, 0);
                                                                g_6 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm u_7 = NULL,v_7 = NULL;
                                                                  t = f_6;
                                                                  t = Sym2Strs_0_0(t);
                                                                  u_7 = t;
                                                                  t = g_6;
                                                                  t = Sym2Strs_0_0(t);
                                                                  v_7 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_7), (ATerm) ATinsert(ATempty, term_a_7)), u_7);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    f_6 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm x_7 = NULL;
                                                                      t = f_6;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      x_7 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(x_7), term_b_7);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        f_6 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, f_6);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            f_6 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm q_0 = NULL;
                                                                              t = f_6;
                                                                              {
                                                                                ATerm e_7 = t;
                                                                                int g_7 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = de_quote_0_0(t);
                                                                                    t = de_escape_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(g_7);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_7;
                                                                                  }
                                                                                q_0 = t;
                                                                                t = (ATerm) ATinsert(ATempty, q_0);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm h_7 = t;
                                                                            int k_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    f_6 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm l_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(k_7);
                                                                                {
                                                                                  ATerm w_0 = NULL;
                                                                                  t = f_6;
                                                                                  {
                                                                                    ATerm m_7 = t;
                                                                                    int n_7 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        t = de_quote_0_0(t);
                                                                                        t = de_escape_0_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(n_7);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = m_7;
                                                                                      }
                                                                                    w_0 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, w_0);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = h_7;
                                                                                if(!(match_cons(t, sym_layout_0)))
                                                                                  _fail(t);
                                                                                t = (ATerm) ATinsert(ATempty, term_q_7);
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
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm g_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_prod_3))
        {
          ATerm s_7 = ATgetArgument(r_7, 0);
          g_8 = ATgetArgument(r_7, 1);
          {
            ATerm t_7 = ATgetArgument(r_7, 2);
          }
        }
      else
        _fail(t);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8;
  t = Sym2Strs_0_0(t);
  k_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_7)), k_8), (ATerm) ATinsert(ATempty, term_w_7));
  t = concat_0_0(t);
  t = concat_strings_0_0(t);
  l_8 = t;
  t = SSL_mkterm(l_8, i_8);
  return(t);
}
ATerm topdown_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  t = t_88(t);
  {
    ATerm u_0 (ATerm t)
    {
      t = topdown_1_0(t_88, t);
      return(t);
    }
    t = SRTS_all(u_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,o_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym__2))
    {
      o_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_8);
  m_8 = t;
  t = o_8;
  t = j_70(t);
  r_8 = t;
  t = q_8;
  t = k_70(t);
  s_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_8, s_8), m_8);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,c_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_9, term_y_7);
  t = open_stream_0_0(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, c_9);
  t = a_107(t);
  t = fclose_0_0(t);
  t = c_9;
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = fetch_1_0(h_1, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = WriteToFile_1_0(j_1, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      if(match_cons(z_7, sym_Stream_1))
        {
          j_9 = ATgetArgument(z_7, 0);
        }
      else
        _fail(t);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(j_9, k_9);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_9);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = WriteToFile_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_8 = ATgetArgument(t, 0);
      if(match_cons(a_8, sym_Stream_1))
        {
          m_9 = ATgetArgument(a_8, 0);
        }
      else
        _fail(t);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(m_9, n_9);
  o_9 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), o_9);
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_9);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL;
  g_9 = t;
  {
    ATerm v_0 (ATerm t)
    {
      ATerm b_8 = t;
      int c_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((i_9 != NULL) && (i_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_1, t);
          ;
          LocalPopChoice(c_8);
        }
      else
        {
          t = b_8;
          t = term_d_8;
          if(((i_9 != NULL) && (i_9 != t)))
            _fail(t);
          else
            i_9 = t;
        }
      return(t);
    }
    t = _2_0(v_0, _id, t);
    t = g_9;
    {
      ATerm d_1 (ATerm t)
      {
        ATerm t_1 = NULL;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), t_1);
        return(t);
      }
      t = _2_0(_id, d_1, t);
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(f_1, g_1, t);
            ;
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            t = _2_0(_id, k_1, t);
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
ATerm apply_strategy_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  q_9 = t;
  t = dtime_0_0(t);
  t = q_9;
  t = c_110(t);
  r_9 = t;
  t = dtime_0_0(t);
  s_9 = t;
  t = r_9;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_9), (ATerm) ATmakeAppl(sym_Runtime_1, s_9)), u_9);
  return(t);
}
ATerm m_10 (ATerm e_10, ATerm t)
{
  t = SSL_fclose(e_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_10 = NULL,k_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_10 = ATgetArgument(t, 0);
      {
        ATerm h_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_10);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = h_8;
            t = m_10(k_10, t);
          }
      }
    }
  else
    {
      t = m_10(k_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  t = SSL_stdin_stream();
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  t = SSL_stdout_stream();
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stderr_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm a_11 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      a_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  t = SSL_is_string(e_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      ATerm u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL,o_2 = NULL;
        n_2 = t;
        t = SSL_explode_term(n_2);
        if(match_cons(t, sym__2))
          {
            ATerm y_8 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_8 = ATgetArgument(t, 1);
              if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
                {
                  o_2 = ATgetFirst((ATermList) z_8);
                  {
                    ATerm b_9 = (ATerm) ATgetNext((ATermList) z_8);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        {
          ATerm f_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
              t = _2_0(o_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_10 = ATgetArgument(t, 0);
                  y_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_10, y_10);
              z_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_10);
              ;
              LocalPopChoice(h_9);
            }
          else
            {
              t = f_9;
              {
                ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
                t = _2_0(p_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_11 = ATgetArgument(t, 0);
                    c_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_11, c_11);
                d_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  ATerm v_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      j_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_11, term_y_9);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = v_9;
      {
        ATerm p_2 = NULL;
        p_2 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_2;
        _fail(t);
      }
    }
  f_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_11);
  g_11 = t;
  t = f_11;
  t = fclose_0_0(t);
  t = g_11;
  return(t);
}
ATerm fetch_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm p_11 (ATerm t)
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_94, _id, t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = Cons_2_0(_id, p_11, t);
      }
    return(t);
  }
  t = p_11(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm s_11 = NULL,t_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_11 = ATgetFirst((ATermList) t);
            t_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_11;
        {
          ATerm r_1 (ATerm t)
          {
            t = t_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_1, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm z_11 (ATerm t)
  {
    ATerm d_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_11, t);
        ;
        LocalPopChoice(f_10);
      }
    else
      {
        t = d_10;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_95(t);
      }
    return(t);
  }
  t = z_11(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  t = SSL_explode_string(c_12);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  t = SSL_explode_string(d_12);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = _2_0(s_1, v_1, t);
  {
    ATerm g_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_12 = NULL,g_12 = NULL;
        if(match_cons(t, sym__2))
          {
            f_12 = ATgetArgument(t, 0);
            g_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_12;
        {
          ATerm w_1 (ATerm t)
          {
            t = g_12;
            return(t);
          }
          t = at_end_1_0(w_1, t);
        }
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = g_10;
        {
          ATerm u_2 = NULL,v_2 = NULL;
          u_2 = t;
          t = SSL_explode_term(u_2);
          if(match_cons(t, sym__2))
            {
              ATerm j_10 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_10) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_2;
          t = concat_0_0(t);
        }
      }
    b_12 = t;
    t = SSL_implode_string(b_12);
  }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm l_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = l_10;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL;
      t_12 = t;
      t = SSL_is_string(t_12);
      ;
      LocalPopChoice(s_10);
    }
  else
    {
      t = p_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_1, t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            {
              ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
              x_12 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_12 = ATgetArgument(t, 0);
                  t = y_12;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_12 = ATgetArgument(t, 0);
                      t = y_12;
                      {
                        ATerm v_10 = t;
                        int w_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_12);
                            {
                              ATerm i_11 = t;
                              int k_11 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm l_4 = NULL;
                                  t = eval_config_0_0(t);
                                  l_4 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_12, l_4);
                                  t = l_4;
                                  ;
                                  LocalPopChoice(k_11);
                                }
                              else
                                {
                                  t = i_11;
                                }
                            }
                            ;
                            LocalPopChoice(w_10);
                          }
                        else
                          {
                            t = v_10;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_12), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = y_12;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_13 = NULL,h_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_12 = ATgetArgument(t, 0);
                          z_12 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_12;
                      t = eval_config_0_0(t);
                      g_13 = t;
                      t = z_12;
                      t = eval_config_0_0(t);
                      h_13 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_13, h_13);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_13 = NULL,p_13 = NULL;
      n_13 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_5 = NULL;
            t = eval_config_0_0(t);
            c_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_5);
            t = c_5;
            ;
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
          }
        p_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_13, term_q_11);
        t = geq_0_0(t);
        t = n_13;
        t = l_108(t);
      }
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  if(match_string(t, "-k"))
    {
      t = r_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_13;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  s_13 = t;
  t = SSL_string_to_int(s_13);
  t_13 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_13);
  t = s_13;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_1, a_2, b_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  if(match_string(t, "-S"))
    {
      t = v_13;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_13;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_v_11;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm g_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm w_13 = NULL,a_14 = NULL;
  w_13 = t;
  t = SSL_string_to_int(w_13);
  a_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_14);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_13);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_11;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_a_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, e_2, f_2, t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = e_12;
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_2, h_2, i_2, t);
            ;
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            t = Option_3_0(j_2, k_2, l_2, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_14 = NULL;
      t = term_w_4;
      t = d_0(t);
      g_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_l_12, g_14);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm n_14 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_14 = ATgetFirst((ATermList) t);
          f_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_14;
      t = a_0(t);
      t = term_w_4;
      t = b_0(t);
      n_14 = t;
      t = (ATerm) ATinsert(CheckATermList(f_14), n_14);
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  if(match_string(t, "-o"))
    {
      t = p_14;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_14;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), q_14);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_14);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_2, q_2, r_2, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__3))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      v_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, u_14);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_12 = ATgetArgument(t, 0);
            ATerm r_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_14, u_14);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATempty;
      }
    w_14 = t;
    t = SSL_table_put(t_14, u_14, (ATerm) ATinsert(CheckATermList(w_14), v_14));
    t = (ATerm) ATmakeAppl(sym__3, t_14, u_14, v_14);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_15 = NULL;
      t = term_w_4;
      t = j_0(t);
      i_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_l_12, i_15);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_15 = ATgetFirst((ATermList) t);
          f_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_15;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_15 = ATgetFirst((ATermList) t);
          h_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_15;
      t = h_0(t);
      t = g_15;
      t = i_0(t);
      m_15 = t;
      t = (ATerm) ATinsert(CheckATermList(h_15), m_15);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm o_15 = NULL;
  o_15 = t;
  if(match_string(t, "-i"))
    {
      t = o_15;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_15;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_15);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_15);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, w_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_4;
  t = whoami_0_0(t);
  q_15 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), q_15));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL;
        t = eval_config_0_0(t);
        g_5 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_5);
        t = g_5;
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t)
{
  ATerm w_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_100(t);
      ;
      LocalPopChoice(a_13);
    }
  else
    {
      t = w_12;
      {
        ATerm t_15 = NULL,u_15 = NULL,x_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_15 = ATgetFirst((ATermList) t);
            u_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_15;
        t = foldr_2_0(m_100, n_100, t);
        x_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_15, x_15);
        t = n_100(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm l_5 = NULL,o_5 = NULL;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_5, o_5);
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = SSL_addr(l_5, o_5);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_16 = NULL,h_5 = NULL,i_5 = NULL;
  t = times_0_0(t);
  h_5 = t;
  t = SSL_explode_term(h_5);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5;
  t = foldr_2_0(x_2, y_2, t);
  a_16 = t;
  t = SSL_TicksToSeconds(a_16);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_16;
        if((m_16 != t))
          {
            _fail(t);
          }
        t = l_16;
        ;
        LocalPopChoice(i_13);
      }
    else
      {
        t = f_13;
        t = l_16;
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_16, n_16);
              ;
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              t = SSL_gtr(m_16, n_16);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_16 = NULL,s_16 = NULL;
      q_16 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm o_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL;
            t = eval_config_0_0(t);
            j_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_8);
            t = j_8;
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = o_13;
          }
        s_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_16, term_u_13);
        t = geq_0_0(t);
        t = q_16;
        t = k_108(t);
      }
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  t = run_time_0_0(t);
  u_16 = t;
  t = term_w_4;
  t = whoami_0_0(t);
  v_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), u_16), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), v_16));
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_14), u_16), term_z_13), v_16));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm d_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = d_14;
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm m_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_8 = NULL;
            t = eval_config_0_0(t);
            v_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), v_8);
            t = v_8;
            ;
            LocalPopChoice(o_14);
          }
        else
          {
            t = m_14;
          }
      }
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      t = fetch_1_0(a_3, t);
    }
  t = a_111(t);
  return(t);
}
ATerm map_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm w_16 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = Cons_2_0(k_94, w_16, t);
      }
    return(t);
  }
  t = w_16(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_16 = ATgetFirst((ATermList) t);
      z_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_17 = NULL,e_17 = NULL;
        t = z_16;
        t = g_0(t);
        d_17 = t;
        t = y_16;
        t = f_0(t);
        e_17 = t;
        t = z_16;
        {
          ATerm b_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_17), e_17);
            return(t);
          }
          t = reverse_acc_2_0(f_0, b_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_4;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_17);
  f_17 = t;
  t = g_17;
  t = o_80(t);
  h_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, h_17), f_17);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm l_17 = NULL;
  l_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_17), term_x_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_9 = NULL;
            t = eval_config_0_0(t);
            d_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_9);
            t = d_9;
            ;
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
          }
      }
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = y_14;
      t = fetch_1_0(c_3, t);
    }
  t = term_c_15;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, d_3, t);
  t = map_1_0(e_3, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      o_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  m_17 = t;
  t = o_17;
  t = p_80(t);
  p_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, p_17), m_17);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  {
    ATerm d_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_17;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_15 = ATgetFirst((ATermList) t);
                ATerm l_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_17;
          }
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = d_15;
        t = (ATerm) ATinsert(ATempty, u_17);
      }
    v_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), v_17);
    t = u_17;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm n_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL;
        t = eval_config_0_0(t);
        w_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_9);
        t = w_9;
        ;
        LocalPopChoice(r_15);
      }
    else
      {
        t = n_15;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_w_15;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_y_15;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_15;
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_b_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, l_3, o_3, t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      t = Option_3_0(q_3, r_3, s_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_74 (ATerm), ATerm z_74 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL;
  e_18 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_18 = ATgetFirst((ATermList) t);
      b_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_18);
  z_17 = t;
  t = a_18;
  t = y_74(t);
  c_18 = t;
  t = b_18;
  t = z_74(t);
  d_18 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_18), c_18), z_17);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm j_18 = NULL;
  j_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_18);
  t = (ATerm) ATmakeAppl(sym_Program_1, j_18);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm i_18 = NULL;
  i_18 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_16;
        t = d_113(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
      }
    t = i_18;
    {
      ATerm v_3 (ATerm t)
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_16 = t;
            int k_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(k_16);
              }
            else
              {
                t = j_16;
                t = d_113(t);
                t = Cons_2_0(_id, v_3, t);
              }
            ;
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            {
              ATerm l_18 = NULL,m_18 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_18 = ATgetFirst((ATermList) t);
                  m_18 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_18), (ATerm) ATmakeAppl(sym_Undefined_1, l_18));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_3, v_3, t);
    }
  }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  if(match_string(t, "--help"))
    {
      t = w_18;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_18;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_18;
        }
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_16;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm c_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_18;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm r_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_113(t);
          ;
          LocalPopChoice(t_16);
        }
      else
        {
          t = r_16;
          {
            ATerm x_16 = t;
            int a_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_3, a_4, b_4, t);
                ;
                LocalPopChoice(a_17);
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
    t = parse_options_p__1_0(x_3, t);
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_19 = NULL;
          e_19 = t;
          {
            ATerm j_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = e_19;
                {
                  ATerm n_17 = t;
                  int r_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm s_17 = t;
                        int t_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_12 = NULL;
                            t = eval_config_0_0(t);
                            m_12 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), m_12);
                            t = m_12;
                            ;
                            LocalPopChoice(t_17);
                          }
                        else
                          {
                            t = s_17;
                          }
                      }
                      ;
                      LocalPopChoice(r_17);
                    }
                  else
                    {
                      t = n_17;
                      t = fetch_1_0(c_4, t);
                    }
                  t = e_19;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(k_17);
              }
            else
              {
                t = j_17;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm w_17 = t;
                  int x_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_13 = NULL;
                      t = eval_config_0_0(t);
                      d_13 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), d_13);
                      t = d_13;
                      ;
                      LocalPopChoice(x_17);
                    }
                  else
                    {
                      t = w_17;
                    }
                  t = e_19;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          {
            ATerm y_17 = t;
            int f_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm e_4 (ATerm t)
                  {
                    if(((u_18 != NULL) && (u_18 != t)))
                      _fail(t);
                    else
                      u_18 = t;
                    return(t);
                  }
                  t = Undefined_1_0(e_4, t);
                  return(t);
                }
                t = fetch_1_0(d_4, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_18)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_y_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_18)), term_g_18));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_18);
              }
            else
              {
                t = y_17;
              }
          }
        }
      v_18 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = v_18;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm t)
{
  ATerm j_19 = NULL;
  t = parse_options_1_0(c_111, t);
  j_19 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), j_19);
  t = j_19;
  t = e_111(t);
  {
    ATerm h_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_111, t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = h_18;
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = if_verbose2_1_0(o_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_18;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm l_19 = NULL,n_19 = NULL;
  l_19 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL;
        t = eval_config_0_0(t);
        x_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_13);
        t = x_13;
        ;
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
      }
    n_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, n_19));
    t = l_19;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_110(t);
        ;
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        {
          ATerm z_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(a_19);
            }
          else
            {
              t = z_18;
              {
                ATerm b_19 = t;
                int c_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_19);
                  }
                else
                  {
                    t = b_19;
                    {
                      ATerm d_19 = t;
                      int f_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(k_4, m_4, n_4, t);
                          ;
                          LocalPopChoice(f_19);
                        }
                      else
                        {
                          t = d_19;
                          {
                            ATerm g_19 = t;
                            int h_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(h_19);
                              }
                            else
                              {
                                t = g_19;
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
  ATerm i_4 (ATerm t)
  {
    ATerm o_19 = NULL,p_19 = NULL,b_14 = NULL;
    o_19 = t;
    {
      ATerm i_19 = t;
      int k_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_19 != NULL) && (p_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_4, t);
          ;
          LocalPopChoice(k_19);
        }
      else
        {
          t = i_19;
          t = term_m_19;
          p_19 = t;
        }
      t = not_null(p_19);
      t = ReadFromFile_0_0(t);
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_19, b_14);
      t = apply_strategy_1_0(l_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_4, n_110, h_4, i_4, t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = _2_0(_id, s_4, t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = topdown_1_0(v_4, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_19 = t;
      int u_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = ApplToSort_0_0(t);
          ;
          LocalPopChoice(u_19);
        }
      else
        {
          t = t_19;
          {
            ATerm s_19 = NULL;
            if(match_cons(t, sym_lit_1))
              {
                s_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_19;
          }
        }
      ;
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_4, _fail, default_usage_0_0, t);
  return(t);
}

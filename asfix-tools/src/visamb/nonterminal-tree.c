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
ATerm term_b_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_u_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_h_15;
ATerm term_o_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_z_13;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_i_10;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_c_8;
ATerm term_y_7;
ATerm term_u_7;
ATerm term_q_7;
ATerm term_o_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_y_6;
ATerm term_u_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_h_5;
ATerm term_b_5;
void init_constant_terms (void)
{
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__3, term_y_16, term_z_16, term_c_8);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm concat_strings_0_0 (ATerm);
ATerm De_Escape3_0_0 (ATerm);
ATerm De_Escape2_0_0 (ATerm);
ATerm De_Escape1_0_0 (ATerm);
ATerm De_Escape_0_0 (ATerm);
ATerm de_escape_0_0 (ATerm);
ATerm at_last_1_0 (ATerm t_88 (ATerm), ATerm);
ATerm de_quote_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm Sym2Strs_0_0 (ATerm);
ATerm ApplToSort_0_0 (ATerm);
ATerm try_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm _2_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_101 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm);
ATerm crush_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_101 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm e_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_73 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_106 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_68 (ATerm), ATerm h_68 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_106 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm g_106 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm nonterminal_tree_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm s_0 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm t_0 = NULL;
    t_0 = t;
    t = SSL_explode_string(t_0);
    return(t);
  }
  t = map_1_0(c_0, t);
  t = concat_0_0(t);
  s_0 = t;
  t = SSL_implode_string(s_0);
  return(t);
}
ATerm De_Escape3_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL,w_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_0 = ATgetFirst((ATermList) t);
      v_0 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_0;
  t = De_Escape_0_0(t);
  w_0 = t;
  t = (ATerm) ATinsert(CheckATermList(w_0), u_0);
  return(t);
}
ATerm De_Escape2_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_4 = ATgetFirst((ATermList) t);
      if(((ATgetType(y_4) != AT_INT) || (ATgetInt((ATermInt) y_4) != 92)))
        _fail(t);
      {
        ATerm z_4 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(z_4) == AT_LIST) && !(ATisEmpty(z_4))))
          {
            ATerm a_5 = ATgetFirst((ATermList) z_4);
            if(((ATgetType(a_5) != AT_INT) || (ATgetInt((ATermInt) a_5) != 92)))
              _fail(t);
            x_0 = (ATerm) ATgetNext((ATermList) z_4);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_0;
  t = De_Escape_0_0(t);
  y_0 = t;
  t = (ATerm) ATinsert(CheckATermList(y_0), term_b_5);
  return(t);
}
ATerm De_Escape1_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_5 = ATgetFirst((ATermList) t);
      if(((ATgetType(c_5) != AT_INT) || (ATgetInt((ATermInt) c_5) != 92)))
        _fail(t);
      {
        ATerm f_5 = (ATerm) ATgetNext((ATermList) t);
        if(((ATgetType(f_5) == AT_LIST) && !(ATisEmpty(f_5))))
          {
            ATerm g_5 = ATgetFirst((ATermList) f_5);
            if(((ATgetType(g_5) != AT_INT) || (ATgetInt((ATermInt) g_5) != 34)))
              _fail(t);
            z_0 = (ATerm) ATgetNext((ATermList) f_5);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_0;
  t = De_Escape_0_0(t);
  a_1 = t;
  t = (ATerm) ATinsert(CheckATermList(a_1), term_h_5);
  return(t);
}
ATerm De_Escape_0_0 (ATerm t)
{
  ATerm i_5 = t;
  int j_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0_0(t);
      ;
      LocalPopChoice(j_5);
    }
  else
    {
      t = i_5;
      {
        ATerm k_5 = t;
        int m_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0_0(t);
            ;
            LocalPopChoice(m_5);
          }
        else
          {
            t = k_5;
            {
              ATerm n_5 = t;
              int o_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0_0(t);
                  ;
                  LocalPopChoice(o_5);
                }
              else
                {
                  t = n_5;
                  {
                    ATerm c_1 = NULL;
                    c_1 = t;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = c_1;
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm de_escape_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  d_1 = t;
  t = SSL_explode_string(d_1);
  t = De_Escape_0_0(t);
  e_1 = t;
  t = SSL_implode_string(e_1);
  return(t);
}
ATerm at_last_1_0 (ATerm t_88 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, e_0, t);
        t = t_88(t);
        ;
        LocalPopChoice(q_5);
      }
    else
      {
        t = p_5;
        t = Cons_2_0(_id, g_1, t);
      }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm de_quote_0_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,m_1 = NULL,o_1 = NULL;
  j_1 = t;
  t = SSL_explode_string(j_1);
  i_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_1 = ATgetFirst((ATermList) t);
      {
        ATerm t_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = i_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_5 = ATgetFirst((ATermList) t);
      m_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_1;
  {
    ATerm k_0 (ATerm t)
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm w_5 = ATgetFirst((ATermList) t);
          if(((ATgetType(w_5) != AT_INT) || (ATgetInt((ATermInt) w_5) != 34)))
            _fail(t);
          {
            ATerm y_5 = (ATerm) ATgetNext((ATermList) t);
            if(((ATgetType(y_5) != AT_LIST) || !(ATisEmpty(y_5))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    t = at_last_1_0(k_0, t);
    o_1 = t;
    t = SSL_implode_string(o_1);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm a_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_6);
    }
  else
    {
      t = a_6;
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_0 (ATerm t)
            {
              t = filter_1_0(w_94, t);
              return(t);
            }
            t = Cons_2_0(w_94, l_0, t);
            ;
            LocalPopChoice(h_6);
          }
        else
          {
            t = g_6;
            {
              ATerm a_2 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_6 = ATgetFirst((ATermList) t);
                  a_2 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_2;
              t = filter_1_0(w_94, t);
            }
          }
      }
    }
  return(t);
}
ATerm Sym2Strs_0_0 (ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL,q_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_cf_1))
    {
      n_2 = ATgetArgument(t, 0);
      t = n_2;
      t = Sym2Strs_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_lex_1))
        {
          n_2 = ATgetArgument(t, 0);
          t = n_2;
          t = Sym2Strs_0_0(t);
        }
      else
        {
          if(match_cons(t, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_p_6);
            }
          else
            {
              if(match_cons(t, sym_seq_2))
                {
                  n_2 = ATgetArgument(t, 0);
                  p_2 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(CheckATermList(p_2), n_2);
                  t = filter_1_0(Sym2Strs_0_0, t);
                  t = concat_0_0(t);
                }
              else
                {
                  if(match_cons(t, sym_opt_1))
                    {
                      n_2 = ATgetArgument(t, 0);
                      t = n_2;
                      t = Sym2Strs_0_0(t);
                      {
                        ATerm m_0 (ATerm t)
                        {
                          t = (ATerm) ATinsert(ATempty, term_q_6);
                          return(t);
                        }
                        t = at_end_1_0(m_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_1))
                        {
                          n_2 = ATgetArgument(t, 0);
                          t = n_2;
                          t = Sym2Strs_0_0(t);
                          {
                            ATerm n_0 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_r_6);
                              return(t);
                            }
                            t = at_end_1_0(n_0, t);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_iter_star_1))
                            {
                              n_2 = ATgetArgument(t, 0);
                              t = n_2;
                              t = Sym2Strs_0_0(t);
                              {
                                ATerm o_0 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_u_6);
                                  return(t);
                                }
                                t = at_end_1_0(o_0, t);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_iter_sep_2))
                                {
                                  n_2 = ATgetArgument(t, 0);
                                  p_2 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_3 = NULL,d_3 = NULL;
                                    t = n_2;
                                    t = Sym2Strs_0_0(t);
                                    c_3 = t;
                                    t = p_2;
                                    t = Sym2Strs_0_0(t);
                                    d_3 = t;
                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_6)), d_3), c_3);
                                    t = concat_0_0(t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_iter_star_sep_2))
                                    {
                                      n_2 = ATgetArgument(t, 0);
                                      p_2 = ATgetArgument(t, 1);
                                      {
                                        ATerm j_3 = NULL,k_3 = NULL;
                                        t = n_2;
                                        t = Sym2Strs_0_0(t);
                                        j_3 = t;
                                        t = p_2;
                                        t = Sym2Strs_0_0(t);
                                        k_3 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_6)), k_3), j_3);
                                        t = concat_0_0(t);
                                      }
                                    }
                                  else
                                    {
                                      ATerm v_6 = t;
                                      int w_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(match_cons(t, sym_iter_n_2))
                                            {
                                              n_2 = ATgetArgument(t, 0);
                                              {
                                                ATerm x_6 = ATgetArgument(t, 1);
                                              }
                                            }
                                          else
                                            _fail(t);
                                          LocalPopChoice(w_6);
                                          {
                                            ATerm m_3 = NULL;
                                            t = n_2;
                                            t = Sym2Strs_0_0(t);
                                            m_3 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_6)), m_3);
                                            t = concat_0_0(t);
                                          }
                                        }
                                      else
                                        {
                                          t = v_6;
                                          {
                                            ATerm b_7 = t;
                                            int c_7 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                if(match_cons(t, sym_iter_sep_n_3))
                                                  {
                                                    n_2 = ATgetArgument(t, 0);
                                                    p_2 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm d_7 = ATgetArgument(t, 2);
                                                    }
                                                  }
                                                else
                                                  _fail(t);
                                                LocalPopChoice(c_7);
                                                {
                                                  ATerm s_3 = NULL,t_3 = NULL;
                                                  t = n_2;
                                                  t = Sym2Strs_0_0(t);
                                                  s_3 = t;
                                                  t = p_2;
                                                  t = Sym2Strs_0_0(t);
                                                  t_3 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_6)), t_3), s_3);
                                                  t = concat_0_0(t);
                                                }
                                              }
                                            else
                                              {
                                                t = b_7;
                                                if(match_cons(t, sym_set_1))
                                                  {
                                                    n_2 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm v_3 = NULL;
                                                      t = n_2;
                                                      t = Sym2Strs_0_0(t);
                                                      v_3 = t;
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, v_3), (ATerm) ATinsert(ATempty, term_j_7));
                                                      t = concat_0_0(t);
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_pair_2))
                                                      {
                                                        n_2 = ATgetArgument(t, 0);
                                                        p_2 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_4 = NULL,b_4 = NULL;
                                                          t = n_2;
                                                          t = Sym2Strs_0_0(t);
                                                          a_4 = t;
                                                          t = p_2;
                                                          t = Sym2Strs_0_0(t);
                                                          b_4 = t;
                                                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_4), (ATerm) ATinsert(ATempty, term_k_7)), a_4);
                                                          t = concat_0_0(t);
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_func_2))
                                                          {
                                                            n_2 = ATgetArgument(t, 0);
                                                            p_2 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm d_5 = NULL,e_5 = NULL;
                                                              t = n_2;
                                                              t = filter_1_0(Sym2Strs_0_0, t);
                                                              t = concat_0_0(t);
                                                              d_5 = t;
                                                              t = p_2;
                                                              t = Sym2Strs_0_0(t);
                                                              e_5 = t;
                                                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_5), (ATerm) ATinsert(ATempty, term_l_7)), d_5);
                                                              t = concat_0_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_alt_2))
                                                              {
                                                                n_2 = ATgetArgument(t, 0);
                                                                p_2 = ATgetArgument(t, 1);
                                                                {
                                                                  ATerm r_5 = NULL,s_5 = NULL;
                                                                  t = n_2;
                                                                  t = Sym2Strs_0_0(t);
                                                                  r_5 = t;
                                                                  t = p_2;
                                                                  t = Sym2Strs_0_0(t);
                                                                  s_5 = t;
                                                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_5), (ATerm) ATinsert(ATempty, term_o_7)), r_5);
                                                                  t = concat_0_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_perm_1))
                                                                  {
                                                                    n_2 = ATgetArgument(t, 0);
                                                                    {
                                                                      ATerm u_5 = NULL;
                                                                      t = n_2;
                                                                      t = filter_1_0(Sym2Strs_0_0, t);
                                                                      t = concat_0_0(t);
                                                                      u_5 = t;
                                                                      t = (ATerm) ATinsert(CheckATermList(u_5), term_q_7);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_sort_1))
                                                                      {
                                                                        n_2 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATinsert(ATempty, n_2);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_lit_1))
                                                                          {
                                                                            n_2 = ATgetArgument(t, 0);
                                                                            {
                                                                              ATerm x_5 = NULL;
                                                                              t = n_2;
                                                                              {
                                                                                ATerm p_0 (ATerm t)
                                                                                {
                                                                                  t = de_quote_0_0(t);
                                                                                  t = de_escape_0_0(t);
                                                                                  return(t);
                                                                                }
                                                                                t = try_1_0(p_0, t);
                                                                                x_5 = t;
                                                                                t = (ATerm) ATinsert(ATempty, x_5);
                                                                              }
                                                                            }
                                                                          }
                                                                        else
                                                                          {
                                                                            ATerm r_7 = t;
                                                                            int s_7 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                if(match_cons(t, sym_label_2))
                                                                                  {
                                                                                    n_2 = ATgetArgument(t, 0);
                                                                                    {
                                                                                      ATerm t_7 = ATgetArgument(t, 1);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  _fail(t);
                                                                                LocalPopChoice(s_7);
                                                                                {
                                                                                  ATerm z_5 = NULL;
                                                                                  t = n_2;
                                                                                  {
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = de_quote_0_0(t);
                                                                                      t = de_escape_0_0(t);
                                                                                      return(t);
                                                                                    }
                                                                                    t = try_1_0(q_0, t);
                                                                                    z_5 = t;
                                                                                    t = (ATerm) ATinsert(ATempty, z_5);
                                                                                  }
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                t = r_7;
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
ATerm ApplToSort_0_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if(match_cons(v_7, sym_prod_3))
        {
          ATerm w_7 = ATgetArgument(v_7, 0);
          b_6 = ATgetArgument(v_7, 1);
          {
            ATerm x_7 = ATgetArgument(v_7, 2);
          }
        }
      else
        _fail(t);
      c_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6;
  t = Sym2Strs_0_0(t);
  d_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_7)), d_6), (ATerm) ATinsert(ATempty, term_y_7));
  t = concat_0_0(t);
  t = concat_strings_0_0(t);
  e_6 = t;
  t = SSL_mkterm(e_6, c_6);
  return(t);
}
ATerm try_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_80(t);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  t = b_82(t);
  {
    ATerm r_0 (ATerm t)
    {
      t = topdown_1_0(b_82, t);
      return(t);
    }
    t = SRTS_all(r_0, t);
  }
  return(t);
}
ATerm _2_0 (ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  n_6 = t;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_6);
  i_6 = t;
  t = j_6;
  t = x_66(t);
  l_6 = t;
  t = k_6;
  t = y_66(t);
  m_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_6, m_6), i_6);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  t = term_c_8;
  t = whoami_0_0(t);
  t_6 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), t_6), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = s_6;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm z_6 = NULL,a_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_6 = ATgetFirst((ATermList) t);
            a_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_6;
        {
          ATerm b_1 (ATerm t)
          {
            t = a_7;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(b_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL;
  e_7 = t;
  t = SSL_explode_term(e_7);
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_7, t);
        ;
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_88(t);
      }
    return(t);
  }
  t = g_7(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7;
  {
    ATerm f_1 (ATerm t)
    {
      t = h_7;
      return(t);
    }
    t = at_end_1_0(f_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm n_7 = NULL;
    n_7 = t;
    t = SSL_explode_string(n_7);
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm p_7 = NULL;
    p_7 = t;
    t = SSL_explode_string(p_7);
    return(t);
  }
  t = _2_0(h_1, p_1, t);
  t = conc_0_0(t);
  m_7 = t;
  t = SSL_implode_string(m_7);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_7 = NULL;
      z_7 = t;
      t = SSL_is_string(z_7);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = q_8;
      {
        ATerm v_8 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(q_1, t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = v_8;
            {
              ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL;
              d_8 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_8 = ATgetArgument(t, 0);
                  t = e_8;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_8 = ATgetArgument(t, 0);
                      t = e_8;
                      {
                        ATerm o_9 = t;
                        int p_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_9);
                          }
                        else
                          {
                            t = o_9;
                            {
                              ATerm r_1 (ATerm t)
                              {
                                t = term_q_9;
                                return(t);
                              }
                              t = debug_1_0(r_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm j_8 = NULL,k_8 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_8 = ATgetArgument(t, 0);
                          f_8 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_8;
                      t = eval_config_0_0(t);
                      j_8 = t;
                      t = f_8;
                      t = eval_config_0_0(t);
                      k_8 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_8, k_8);
                      t = conc_strings_0_0(t);
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
  ATerm p_8 = NULL;
  p_8 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_8);
  {
    ATerm s_1 (ATerm t)
    {
      ATerm r_8 = NULL;
      t = eval_config_0_0(t);
      r_8 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), p_8, r_8);
      t = r_8;
      return(t);
    }
    t = try_1_0(s_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm s_8 = NULL,t_8 = NULL;
    s_8 = t;
    t = term_r_9;
    t = get_config_0_0(t);
    t_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_8, term_s_9);
    t = geq_0_0(t);
    t = s_8;
    t = i_101(t);
    return(t);
  }
  t = try_1_0(t_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm t_9 = ATgetArgument(t, 0);
        if(match_cons(t_9, sym_Stream_1))
          {
            w_8 = ATgetArgument(t_9, 0);
          }
        else
          _fail(t);
        x_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(w_8, x_8);
    y_8 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), y_8);
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_8);
    return(t);
  }
  t = WriteToFile_1_0(u_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_9, term_v_9);
  t = open_stream_0_0(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, b_9);
  t = e_100(t);
  t = fclose_0_0(t);
  t = b_9;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm w_9 = ATgetArgument(t, 0);
        if(match_cons(w_9, sym_Stream_1))
          {
            d_9 = ATgetArgument(w_9, 0);
          }
        else
          _fail(t);
        e_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(d_9, e_9);
    f_9 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
    return(t);
  }
  t = WriteToFile_1_0(v_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_9 = NULL,h_9 = NULL;
  g_9 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm z_9 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                h_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(x_1, t);
          ;
          LocalPopChoice(g_10);
        }
      else
        {
          t = z_9;
          t = term_i_10;
          h_9 = t;
        }
      return(t);
    }
    t = _2_0(w_1, _id, t);
    t = g_9;
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          t = not_null(h_9);
          return(t);
        }
        t = split_2_0(z_1, _id, t);
        return(t);
      }
      t = _2_0(_id, y_1, t);
      {
        ATerm j_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm c_2 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(c_2, t);
              return(t);
            }
            t = _2_0(b_2, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = j_10;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  i_9 = t;
  t = dtime_0_0(t);
  t = i_9;
  t = g_103(t);
  j_9 = t;
  t = dtime_0_0(t);
  k_9 = t;
  t = j_9;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_9), (ATerm) ATmakeAppl(sym_Runtime_1, k_9)), m_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_10 (ATerm u_9, ATerm t)
  {
    t = SSL_fclose(u_9);
    return(t);
  }
  ATerm x_9 = NULL,y_9 = NULL;
  y_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_9 = ATgetArgument(t, 0);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_9);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            t = a_10(y_9, t);
          }
      }
    }
  else
    {
      t = a_10(y_9, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  b_10 = t;
  t = q_99(t);
  c_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_10), c_10));
  t = b_10;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_10 = NULL;
  t = SSL_stdin_stream();
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_10 = NULL;
  t = SSL_stdout_stream();
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_10 = NULL;
  t = SSL_stderr_stream();
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_10);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_10;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_10;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_10;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      ATerm i_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL,n_1 = NULL;
        l_1 = t;
        t = SSL_explode_term(l_1);
        if(match_cons(t, sym__2))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_11) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_11 = ATgetArgument(t, 1);
              if(((ATgetType(w_11) == AT_LIST) && !(ATisEmpty(w_11))))
                {
                  n_1 = ATgetFirst((ATermList) w_11);
                  {
                    ATerm x_11 = (ATerm) ATgetNext((ATermList) w_11);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = m_11;
        {
          ATerm y_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
              ATerm d_2 (ATerm t)
              {
                ATerm n_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    n_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_10;
                return(t);
              }
              t = _2_0(d_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_10 = ATgetArgument(t, 0);
                  l_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(k_10, l_10);
              m_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, m_10);
              ;
              LocalPopChoice(a_12);
            }
          else
            {
              t = y_11;
              {
                ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
                ATerm e_2 (ATerm t)
                {
                  ATerm r_10 = NULL;
                  r_10 = t;
                  t = SSL_is_string(r_10);
                  return(t);
                }
                t = _2_0(e_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    o_10 = ATgetArgument(t, 0);
                    p_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(o_10, p_10);
                q_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
  ATerm c_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_10 = NULL;
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_10, term_g_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_12);
    }
  else
    {
      t = c_12;
      {
        ATerm f_2 (ATerm t)
        {
          t = term_j_12;
          return(t);
        }
        t = debug_1_0(f_2, t);
        _fail(t);
      }
    }
  s_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_10);
  t_10 = t;
  t = s_10;
  t = fclose_0_0(t);
  t = t_10;
  return(t);
}
ATerm split_2_0 (ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  z_10 = t;
  t = i_95(t);
  a_11 = t;
  t = z_10;
  t = j_95(t);
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, b_11);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL;
  c_11 = t;
  {
    ATerm k_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              d_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(g_2, t);
        ;
        LocalPopChoice(r_12);
      }
    else
      {
        t = k_12;
        t = term_s_12;
        d_11 = t;
      }
    t = c_11;
    {
      ATerm h_2 (ATerm t)
      {
        t = not_null(d_11);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, h_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm f_11 = NULL;
    f_11 = t;
    if(match_string(t, "-k"))
      {
        t = f_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = f_11;
      }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    ATerm g_11 = NULL,h_11 = NULL;
    g_11 = t;
    t = SSL_string_to_int(g_11);
    h_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_11);
    t = g_11;
    return(t);
  }
  ATerm k_2 (ATerm t)
  {
    t = term_t_12;
    return(t);
  }
  t = ArgOption_3_0(i_2, j_2, k_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm j_11 = NULL;
        j_11 = t;
        if(match_string(t, "-S"))
          {
            t = j_11;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = j_11;
          }
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_12;
        return(t);
      }
      ATerm o_2 (ATerm t)
      {
        t = term_y_12;
        return(t);
      }
      t = Option_3_0(l_2, m_2, o_2, t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm s_2 (ATerm t)
            {
              ATerm k_11 = NULL,l_11 = NULL;
              k_11 = t;
              t = SSL_string_to_int(k_11);
              l_11 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_11);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, k_11);
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_g_13;
              return(t);
            }
            t = ArgOption_3_0(r_2, s_2, t_2, t);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            {
              ATerm u_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm v_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_j_13;
                return(t);
              }
              ATerm w_2 (ATerm t)
              {
                t = term_l_13;
                return(t);
              }
              t = Option_3_0(u_2, v_2, w_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm n_11 = NULL;
    n_11 = t;
    if(match_string(t, "-o"))
      {
        t = n_11;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = n_11;
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm o_11 = NULL;
    o_11 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_11);
    t = (ATerm) ATmakeAppl(sym_Output_1, o_11);
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_q_13;
    return(t);
  }
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm a_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_13;
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          t = term_f_14;
          return(t);
        }
        t = Option_3_0(a_3, b_3, e_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  r_11 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_11;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm z_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_11 = ATgetFirst((ATermList) t);
          t_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_11;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_11 = ATgetFirst((ATermList) t);
          v_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_11;
      t = h_0(t);
      t = u_11;
      t = i_0(t);
      z_11 = t;
      t = (ATerm) ATinsert(CheckATermList(v_11), z_11);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm b_12 = NULL;
    b_12 = t;
    if(match_string(t, "-i"))
      {
        t = b_12;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = b_12;
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm d_12 = NULL;
    d_12 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), d_12);
    t = (ATerm) ATmakeAppl(sym_Input_1, d_12);
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_g_14;
    return(t);
  }
  t = ArgOption_3_0(f_3, g_3, h_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm h_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = h_14;
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_8;
  t = whoami_0_0(t);
  e_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), e_12));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_93(t);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm h_12 = NULL,i_12 = NULL,l_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_12 = ATgetFirst((ATermList) t);
            i_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_12;
        t = foldr_2_0(t_93, u_93, t);
        l_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_12, l_12);
        t = u_93(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  m_12 = t;
  t = SSL_explode_term(m_12);
  if(match_cons(t, sym__2))
    {
      ATerm v_14 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12;
  t = foldr_2_0(m_97, n_97, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_12 = NULL;
  t = times_0_0(t);
  {
    ATerm i_3 (ATerm t)
    {
      t = term_w_12;
      return(t);
    }
    ATerm l_3 (ATerm t)
    {
      ATerm p_12 = NULL,q_12 = NULL;
      if(match_cons(t, sym__2))
        {
          p_12 = ATgetArgument(t, 0);
          q_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(p_12, q_12);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = SSL_addr(p_12, q_12);
          }
      }
      return(t);
    }
    t = crush_2_0(i_3, l_3, t);
    o_12 = t;
    t = SSL_TicksToSeconds(o_12);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  if(match_cons(t, sym__2))
    {
      a_13 = ATgetArgument(t, 0);
      b_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_13;
        if((a_13 != t))
          {
            _fail(t);
          }
        t = z_12;
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = y_14;
        t = z_12;
        {
          ATerm e_15 = t;
          int f_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_13, b_13);
              ;
              LocalPopChoice(f_15);
            }
          else
            {
              t = e_15;
              t = SSL_gtr(a_13, b_13);
            }
          t = (ATerm) ATmakeAppl(sym__2, a_13, b_13);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm e_13 = NULL,f_13 = NULL;
    e_13 = t;
    t = term_r_9;
    t = get_config_0_0(t);
    f_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_13, term_h_15);
    t = geq_0_0(t);
    t = e_13;
    t = h_101(t);
    return(t);
  }
  t = try_1_0(n_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL;
    t = run_time_0_0(t);
    h_13 = t;
    t = term_c_8;
    t = whoami_0_0(t);
    i_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), h_13), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), i_13));
    t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_15), h_13), term_q_15), i_13));
    return(t);
  }
  t = if_verbose1_1_0(o_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
      {
        ATerm p_3 (ATerm t)
        {
          ATerm x_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(a_16);
            }
          else
            {
              t = x_15;
              {
                ATerm b_16 = t;
                int c_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(c_16);
                  }
                else
                  {
                    t = b_16;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(p_3, t);
      }
    }
  t = e_104(t);
  return(t);
}
ATerm map_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm k_13 (ATerm t)
  {
    ATerm d_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = d_16;
        t = Cons_2_0(s_87, k_13, t);
      }
    return(t);
  }
  t = k_13(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_13 = ATgetFirst((ATermList) t);
      n_13 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_13 = NULL,s_13 = NULL;
        t = n_13;
        t = g_0(t);
        r_13 = t;
        t = m_13;
        t = f_0(t);
        s_13 = t;
        t = n_13;
        {
          ATerm q_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_13), s_13);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_8;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, r_3, t);
  return(t);
}
ATerm Program_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_13);
  t_13 = t;
  t = u_13;
  t = w_73(t);
  v_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, v_13), t_13);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      {
        ATerm u_3 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(u_3, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_k_16;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm w_3 (ATerm t)
    {
      ATerm a_14 = NULL;
      a_14 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, a_14), term_l_16);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(w_3, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm x_73 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_14);
  b_14 = t;
  t = c_14;
  t = x_73(t);
  d_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, d_14), b_14);
  return(t);
}
ATerm fetch_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm i_14 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_88, _id, t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        t = Cons_2_0(_id, i_14, t);
      }
    return(t);
  }
  t = i_14(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  t = fetch_1_0(e_105, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  k_14 = t;
  {
    ATerm r_16 = t;
    int s_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_14;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_16 = ATgetFirst((ATermList) t);
                ATerm v_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_14;
          }
        ;
        LocalPopChoice(s_16);
      }
    else
      {
        t = r_16;
        t = (ATerm) ATinsert(ATempty, k_14);
      }
    l_14 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), l_14);
    t = k_14;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_16 = t;
  int x_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm y_3 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_a_17;
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_b_17;
        return(t);
      }
      t = Option_3_0(x_3, y_3, z_3, t);
      ;
      LocalPopChoice(x_16);
    }
  else
    {
      t = w_16;
      {
        ATerm c_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm d_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_c_17;
          return(t);
        }
        ATerm e_4 (ATerm t)
        {
          t = term_d_17;
          return(t);
        }
        t = Option_3_0(c_4, d_4, e_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__3))
    {
      r_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
      t_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_14, s_14);
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            ATerm h_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_14, s_14);
        ;
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
        t = (ATerm) ATempty;
      }
    u_14 = t;
    t = SSL_table_put(r_14, s_14, (ATerm) ATinsert(CheckATermList(u_14), t_14));
    t = (ATerm) ATmakeAppl(sym__3, r_14, s_14, t_14);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_106 (ATerm), ATerm t)
{
  ATerm z_14 = NULL;
  t = term_c_8;
  t = j_106(t);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_17, term_j_17, z_14);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = b_15;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm g_15 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_15 = ATgetFirst((ATermList) t);
          d_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_15;
      t = a_0(t);
      t = term_c_8;
      t = b_0(t);
      g_15 = t;
      t = (ATerm) ATinsert(CheckATermList(d_15), g_15);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm i_15 = NULL;
    i_15 = t;
    if(match_string(t, "--help"))
      {
        t = i_15;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = i_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = i_15;
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_k_17;
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_l_17;
    return(t);
  }
  t = Option_3_0(f_4, g_4, h_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm g_68 (ATerm), ATerm h_68 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
  o_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_15 = ATgetFirst((ATermList) t);
      l_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_15);
  j_15 = t;
  t = k_15;
  t = g_68(t);
  m_15 = t;
  t = l_15;
  t = h_68(t);
  n_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(n_15), m_15), j_15);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_106 (ATerm), ATerm t)
{
  ATerm v_15 = NULL;
  v_15 = t;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_m_17;
      t = h_106(t);
      return(t);
    }
    t = try_1_0(i_4, t);
    t = v_15;
    {
      ATerm j_4 (ATerm t)
      {
        ATerm w_15 = NULL;
        w_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_15);
        t = (ATerm) ATmakeAppl(sym_Program_1, w_15);
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_17 = t;
            int q_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_17);
              }
            else
              {
                t = p_17;
                t = h_106(t);
                t = Cons_2_0(_id, k_4, t);
              }
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            {
              ATerm y_15 = NULL,z_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_15 = ATgetFirst((ATermList) t);
                  z_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_15), (ATerm) ATmakeAppl(sym_Undefined_1, y_15));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_4, k_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = f_16;
  {
    ATerm l_4 (ATerm t)
    {
      ATerm r_17 = t;
      int s_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_106(t);
          ;
          LocalPopChoice(s_17);
        }
      else
        {
          t = r_17;
          {
            ATerm t_17 = t;
            int u_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(u_17);
              }
            else
              {
                t = t_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_4, t);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_16 = NULL;
            m_16 = t;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_16;
                  {
                    ATerm z_17 = t;
                    int a_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_u_15;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(a_18);
                      }
                    else
                      {
                        t = z_17;
                        {
                          ATerm n_4 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(n_4, t);
                        }
                      }
                    t = m_16;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  t = term_z_16;
                  t = get_config_0_0(t);
                  t = m_16;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm o_4 (ATerm t)
              {
                ATerm p_4 (ATerm t)
                {
                  g_16 = t;
                  return(t);
                }
                t = Undefined_1_0(p_4, t);
                return(t);
              }
              t = option_defined_1_0(o_4, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_p_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_16)), term_b_18));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(m_4, t);
      h_16 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = h_16;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_104 (ATerm), ATerm h_104 (ATerm), ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm t)
{
  ATerm l_5 = NULL;
  t = parse_options_1_0(g_104, t);
  l_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_5);
  t = l_5;
  t = i_104(t);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_104, t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_104(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_103(t);
        ;
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(v_103, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(q_4, x_103, y_103, r_4, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm t_4 (ATerm t)
    {
      ATerm p_16 = NULL,q_16 = NULL;
      p_16 = t;
      t = term_o_14;
      t = get_config_0_0(t);
      q_16 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, q_16));
      t = p_16;
      return(t);
    }
    t = if_verbose2_1_0(t_4, t);
    return(t);
  }
  t = iowrap_4_0(p_103, q_103, r_103, s_4, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  t = iowrap_3_0(n_103, o_103, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    t = _2_0(_id, k_103, t);
    return(t);
  }
  t = iowrap_2_0(u_4, _fail, t);
  return(t);
}
ATerm nonterminal_tree_0_0 (ATerm t)
{
  ATerm v_4 (ATerm t)
  {
    ATerm w_4 (ATerm t)
    {
      ATerm x_4 (ATerm t)
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ApplToSort_0_0(t);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm t_16 = NULL;
              if(match_cons(t, sym_lit_1))
                {
                  t_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = t_16;
            }
          }
        return(t);
      }
      t = try_1_0(x_4, t);
      return(t);
    }
    t = topdown_1_0(w_4, t);
    return(t);
  }
  t = iowrap_1_0(v_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = nonterminal_tree_0_0(t);
  return(t);
}

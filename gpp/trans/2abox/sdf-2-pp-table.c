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
Symbol sym_Verbose_0;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_S_1;
Symbol sym_KW_0;
Symbol sym_FBOX_2;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_cons_1;
Symbol sym_prod_3;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
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
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_prod_3;
Symbol sym_prod_fun_4;
Symbol sym_ATerm_1;
Symbol sym_context_free_syntax_1;
Symbol sym_bracket_symbol_1;
Symbol sym_Strict_0;
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
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
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_m_24;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_m_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_f_14;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_x_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_o_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_x_6;
ATerm term_w_6;
void init_constant_terms (void)
{
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_a_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_9, term_b_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_lit_1, term_r_9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_lit_1, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__3, term_k_21, term_l_21, term_w_6);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm double_quote_chars_0_0 (ATerm);
ATerm double_quote_0_0 (ATerm);
ATerm S_1_0 (ATerm t_63 (ATerm), ATerm);
ATerm selector_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm q_63 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm filter_1_0 (ATerm z_88 (ATerm), ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm symbol2abox_1_0 (ATerm e_74 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm t_65 (ATerm), ATerm);
ATerm iter_1_0 (ATerm s_65 (ATerm), ATerm);
ATerm pair_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm number_node_1_0 (ATerm h_74 (ATerm), ATerm);
ATerm no_labels_0_0 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm at_last_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm init_0_0 (ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm un_double_quote_chars_0_0 (ATerm);
ATerm string_as_chars_1_0 (ATerm i_91 (ATerm), ATerm);
ATerm un_double_quote_0_0 (ATerm);
ATerm sort_1_0 (ATerm x_65 (ATerm), ATerm);
ATerm lit_1_0 (ATerm n_65 (ATerm), ATerm);
ATerm cons_1_0 (ATerm b_66 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm);
ATerm crush_3_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm);
ATerm collect_p__1_0 (ATerm e_103 (ATerm), ATerm);
ATerm ppgenerate_0_0 (ATerm);
ATerm _2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm is_subterm_0_0 (ATerm);
ATerm get_options_0_0 (ATerm);
ATerm check_option_0_0 (ATerm);
ATerm has_option_1_0 (ATerm k_97 (ATerm), ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm p_103 (ATerm), ATerm);
ATerm OutId_1_0 (ATerm q_103 (ATerm), ATerm);
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm termid_set_p__1_0 (ATerm x_103 (ATerm), ATerm);
ATerm try_1_0 (ATerm k_74 (ATerm), ATerm);
ATerm termid_check_p__1_0 (ATerm v_103 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_82 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm l_95 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm h_94 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm);
ATerm crush_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm d_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm f_82 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm h_99 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm k_100 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm);
ATerm io_idwrap_3_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm);
ATerm io_sdf_2_pp_table_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,y_1 = NULL,z_1 = NULL;
  w_1 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_1;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm e_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_1 = ATgetFirst((ATermList) t);
          z_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_1;
      t = j_0(t);
      t = term_w_6;
      t = k_0(t);
      e_2 = t;
      t = (ATerm) ATinsert(CheckATermList(z_1), e_2);
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL;
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      h_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_2), j_2), (ATerm) ATinsert(ATempty, j_2));
  t = conc_0_0(t);
  return(t);
}
ATerm double_quote_chars_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, p_2);
  t = quote_chars_0_0(t);
  return(t);
}
ATerm double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(double_quote_chars_0_0, t);
  return(t);
}
ATerm S_1_0 (ATerm t_63 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,v_2 = NULL,z_2 = NULL,c_3 = NULL;
  c_3 = t;
  if(match_cons(t, sym_S_1))
    {
      v_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_3);
  q_2 = t;
  t = v_2;
  t = t_63(t);
  z_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, z_2), q_2);
  return(t);
}
ATerm selector_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL;
  n_3 = t;
  if(match_cons(t, sym_selector_2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  h_3 = t;
  t = j_3;
  t = o_63(t);
  l_3 = t;
  t = k_3;
  t = p_63(t);
  m_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, l_3, m_3), h_3);
  return(t);
}
ATerm Arg_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL;
  v_3 = t;
  if(match_cons(t, sym_Arg_1))
    {
      t_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_3);
  s_3 = t;
  t = t_3;
  t = q_63(t);
  u_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, u_3), s_3);
  return(t);
}
ATerm topdown_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  t = e_76(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = topdown_1_0(e_76, t);
      return(t);
    }
    t = SRTS_all(c_0, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm z_88 (ATerm), ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm c_7 = t;
        int d_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = filter_1_0(z_88, t);
              return(t);
            }
            t = Cons_2_0(z_88, e_0, t);
            ;
            LocalPopChoice(d_7);
          }
        else
          {
            t = c_7;
            {
              ATerm f_4 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_7 = ATgetFirst((ATermList) t);
                  f_4 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = f_4;
              t = filter_1_0(z_88, t);
            }
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm a_5 = NULL,b_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6;
  if(match_cons(t, sym_alt_2))
    {
      a_5 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
      {
        ATerm f_7 = t;
        int h_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, a_5, b_6);
            t = flat_alt_0_0(t);
            g_7 = t;
            t = (ATerm) ATinsert(CheckATermList(g_7), y_6);
            ;
            LocalPopChoice(h_7);
          }
        else
          {
            t = f_7;
            t = (ATerm) ATinsert(ATinsert(ATempty, z_6), y_6);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, z_6), y_6);
    }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm n_0 (ATerm t)
    {
      ATerm k_4 = NULL;
      k_4 = t;
      {
        ATerm i_7 = t;
        if((PushChoice() == 0))
          {
            ATerm l_4 = NULL;
            l_4 = t;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = l_4;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm j_7 = ATgetFirst((ATermList) t);
                    ATerm k_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_4;
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = i_7;
          }
        t = (ATerm) ATinsert(ATempty, k_4);
      }
      return(t);
    }
    t = try_1_0(n_0, t);
    return(t);
  }
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm symbol2abox_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    t = term_w_6;
    t = e_74(t);
    return(t);
  }
  t = split_2_0(o_0, _id, t);
  {
    ATerm i_12 (ATerm t)
    {
      ATerm k_12 (ATerm y_10, ATerm z_10, ATerm a_11, ATerm b_11, ATerm c_11, ATerm t)
      {
        ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,n_11 = NULL,p_11 = NULL;
        t = SSL_explode_term(b_11);
        if(match_cons(t, sym__2))
          {
            h_11 = ATgetArgument(t, 0);
            i_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, a_11, h_11)));
        t = conc_0_0(t);
        j_11 = t;
        t = i_11;
        t = argument_list_0_0(t);
        t = number_nonterminals_0_0(t);
        k_11 = t;
        t = make_0_0(t);
        n_11 = t;
        t = k_11;
        {
          ATerm p_0 (ATerm t)
          {
            ATerm q_11 = NULL;
            q_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_10, j_11), q_11);
            t = i_12(t);
            return(t);
          }
          t = map_1_0(p_0, t);
          t = concat_0_0(t);
          p_11 = t;
          t = (ATerm) ATinsert(CheckATermList(p_11), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, y_10, j_11), n_11));
        }
        return(t);
      }
      ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
      x_11 = t;
      if(match_cons(t, sym__2))
        {
          y_11 = ATgetArgument(t, 0);
          b_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_12;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm n_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(m_7);
            t = (ATerm) ATempty;
          }
        else
          {
            t = l_7;
            if(match_cons(t, sym__2))
              {
                c_12 = ATgetArgument(t, 0);
                d_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_12;
            {
              ATerm o_7 = t;
              int p_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm q_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_7);
                  t = y_11;
                  if(match_cons(t, sym__2))
                    {
                      z_11 = ATgetArgument(t, 0);
                      a_12 = ATgetArgument(t, 1);
                      {
                        ATerm r_7 = t;
                        int s_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(s_7);
                          }
                        else
                          {
                            t = r_7;
                            t = k_12(z_11, a_12, c_12, d_12, x_11, t);
                          }
                      }
                    }
                  else
                    {
                      t = (ATerm) ATempty;
                    }
                }
              else
                {
                  t = o_7;
                  {
                    ATerm t_7 = t;
                    int u_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm v_7 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_7);
                        t = y_11;
                        if(match_cons(t, sym__2))
                          {
                            z_11 = ATgetArgument(t, 0);
                            a_12 = ATgetArgument(t, 1);
                            {
                              ATerm w_7 = t;
                              int x_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(x_7);
                                }
                              else
                                {
                                  t = w_7;
                                  t = k_12(z_11, a_12, c_12, d_12, x_11, t);
                                }
                            }
                          }
                        else
                          {
                            t = (ATerm) ATempty;
                          }
                      }
                    else
                      {
                        t = t_7;
                        if(match_cons(t, sym_alt_2))
                          {
                            w_11 = ATgetArgument(t, 0);
                            r_11 = ATgetArgument(t, 1);
                            t = y_11;
                            if(match_cons(t, sym__2))
                              {
                                z_11 = ATgetArgument(t, 0);
                                a_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = r_11;
                            if(match_cons(t, sym_alt_2))
                              {
                                u_11 = ATgetArgument(t, 0);
                                v_11 = ATgetArgument(t, 1);
                                {
                                  ATerm y_7 = t;
                                  int z_7 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm v_0 = NULL,w_0 = NULL;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, w_11, (ATerm) ATmakeAppl(sym_alt_2, u_11, v_11));
                                      t = flat_alt_0_0(t);
                                      v_0 = t;
                                      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), v_0);
                                      w_0 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_11, a_12), (ATerm) ATmakeAppl(sym__2, c_12, w_0));
                                      t = i_12(t);
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          ATerm r_0 (ATerm t)
                                          {
                                            ATerm s_0 (ATerm t)
                                            {
                                              t = Arg_1_0(_id, t);
                                              t = term_b_8;
                                              return(t);
                                            }
                                            t = try_1_0(s_0, t);
                                            return(t);
                                          }
                                          t = topdown_1_0(r_0, t);
                                          return(t);
                                        }
                                        t = Cons_2_0(q_0, _id, t);
                                      }
                                      ;
                                      LocalPopChoice(z_7);
                                    }
                                  else
                                    {
                                      t = y_7;
                                      t = k_12(z_11, a_12, c_12, d_12, x_11, t);
                                    }
                                }
                              }
                            else
                              {
                                t = k_12(z_11, a_12, c_12, d_12, x_11, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                w_11 = ATgetArgument(t, 0);
                                t = y_11;
                                if(match_cons(t, sym__2))
                                  {
                                    z_11 = ATgetArgument(t, 0);
                                    a_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm c_8 = t;
                                  int d_8 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_11, a_12), (ATerm) ATmakeAppl(sym__2, c_12, w_11));
                                      t = i_12(t);
                                      ;
                                      LocalPopChoice(d_8);
                                    }
                                  else
                                    {
                                      t = c_8;
                                      t = k_12(z_11, a_12, c_12, d_12, x_11, t);
                                    }
                                }
                              }
                            else
                              {
                                t = y_11;
                                if(match_cons(t, sym__2))
                                  {
                                    z_11 = ATgetArgument(t, 0);
                                    a_12 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = k_12(z_11, a_12, c_12, d_12, x_11, t);
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
    t = i_12(t);
  }
  return(t);
}
ATerm iter_star_1_0 (ATerm t_65 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      m_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_12);
  l_12 = t;
  t = m_12;
  t = t_65(t);
  n_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, n_12), l_12);
  return(t);
}
ATerm iter_1_0 (ATerm s_65 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  v_12 = t;
  if(match_cons(t, sym_iter_1))
    {
      t_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_12);
  s_12 = t;
  t = t_12;
  t = s_65(t);
  u_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, u_12), s_12);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
      {
        ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,l_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_13 = ATgetFirst((ATermList) t);
            d_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_13;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_13 = ATgetFirst((ATermList) t);
            f_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_13;
        t = pair_0_0(t);
        l_13 = t;
        t = (ATerm) ATinsert(CheckATermList(l_13), (ATerm) ATmakeAppl(sym__2, c_13, e_13));
      }
    }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm q_65 (ATerm), ATerm r_65 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  n_13 = t;
  t = o_13;
  t = q_65(t);
  q_13 = t;
  t = p_13;
  t = r_65(t);
  r_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, q_13, r_13), n_13);
  return(t);
}
ATerm iter_sep_2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      x_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_14);
  w_13 = t;
  t = x_13;
  t = o_65(t);
  z_13 = t;
  t = y_13;
  t = p_65(t);
  a_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, z_13, a_14), w_13);
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_14 = NULL;
      t = reverse_0_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm s_14 = NULL;
          ATerm x_0 (ATerm t)
          {
            ATerm i_8 = t;
            int j_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1_0(_id, t);
                ;
                LocalPopChoice(j_8);
              }
            else
              {
                t = i_8;
                {
                  ATerm k_8 = t;
                  int l_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1_0(_id, t);
                      ;
                      LocalPopChoice(l_8);
                    }
                  else
                    {
                      t = k_8;
                      {
                        ATerm m_8 = t;
                        int n_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2_0(_id, _id, t);
                            ;
                            LocalPopChoice(n_8);
                          }
                        else
                          {
                            t = m_8;
                            t = iter_star_sep_2_0(_id, _id, t);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2_0(_id, x_0, t);
          if(match_cons(t, sym_lit_1))
            {
              s_14 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, s_14));
            }
          else
            {
              if(match_cons(t, sym__2))
                {
                  s_14 = ATgetArgument(t, 0);
                  {
                    ATerm p_8 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Arg_1, s_14);
            }
          return(t);
        }
        ATerm u_0 (ATerm t)
        {
          ATerm y_0 (ATerm t)
          {
            ATerm x_14 = NULL;
            t = lit_1_0(_id, t);
            if(match_cons(t, sym_lit_1))
              {
                x_14 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, x_14));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    x_14 = ATgetArgument(t, 0);
                    {
                      ATerm q_8 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, x_14);
              }
            return(t);
          }
          t = map_1_0(y_0, t);
          return(t);
        }
        t = Cons_2_0(t_0, u_0, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_14 = ATgetFirst((ATermList) t);
            l_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_8 = t;
          if((PushChoice() == 0))
            {
              ATerm z_0 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, z_0, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_8;
            }
          t = l_14;
          t = reverse_0_0(t);
          q_14 = t;
          t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, m_14), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, q_14)));
        }
      }
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm s_8 = t;
        int t_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_0_0(t);
            {
              ATerm a_1 (ATerm t)
              {
                ATerm c_15 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    c_15 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, c_15));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        c_15 = ATgetArgument(t, 0);
                        {
                          ATerm u_8 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, c_15);
                  }
                p_14 = t;
                return(t);
              }
              ATerm d_1 (ATerm t)
              {
                ATerm v_8 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_8;
                  }
                t = reverse_0_0(t);
                n_14 = t;
                return(t);
              }
              t = Cons_2_0(a_1, d_1, t);
              t = not_null(n_14);
              t = pair_0_0(t);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm g_15 = NULL,h_15 = NULL;
                  ATerm f_1 (ATerm t)
                  {
                    ATerm j_15 = NULL;
                    t = lit_1_0(_id, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        j_15 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, j_15));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            j_15 = ATgetArgument(t, 0);
                            {
                              ATerm w_8 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, j_15);
                      }
                    g_15 = t;
                    return(t);
                  }
                  ATerm g_1 (ATerm t)
                  {
                    ATerm o_15 = NULL;
                    ATerm h_1 (ATerm t)
                    {
                      ATerm x_8 = t;
                      int y_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = iter_1_0(_id, t);
                          ;
                          LocalPopChoice(y_8);
                        }
                      else
                        {
                          t = x_8;
                          t = iter_star_1_0(_id, t);
                        }
                      return(t);
                    }
                    t = _2_0(_id, h_1, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        o_15 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, o_15));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            o_15 = ATgetArgument(t, 0);
                            {
                              ATerm z_8 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, o_15);
                      }
                    h_15 = t;
                    return(t);
                  }
                  t = _2_0(f_1, g_1, t);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_c_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(h_15)), not_null(g_15)));
                  return(t);
                }
                t = map_1_0(e_1, t);
                o_14 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_14)), o_14));
              }
            }
            ;
            LocalPopChoice(t_8);
          }
        else
          {
            t = s_8;
            {
              ATerm i_1 (ATerm t)
              {
                ATerm t_15 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    t_15 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_8, (ATerm) ATmakeAppl(sym_S_1, t_15));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        t_15 = ATgetArgument(t, 0);
                        {
                          ATerm d_9 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, t_15);
                  }
                return(t);
              }
              t = map_1_0(i_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm e_9 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_9;
    }
  return(t);
}
ATerm number_node_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = term_a_8;
    return(t);
  }
  t = split_2_0(j_1, _id, t);
  {
    ATerm p_16 (ATerm t)
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_1 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = _2_0(_id, k_1, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
          {
            ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
            j_16 = t;
            if(match_cons(t, sym__2))
              {
                k_16 = ATgetArgument(t, 0);
                l_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_16;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_16 = ATgetFirst((ATermList) t);
                n_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm h_9 = t;
              int i_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_1 = NULL,c_1 = NULL;
                  t = m_16;
                  t = h_74(t);
                  t = (ATerm) ATmakeAppl(sym__2, k_16, term_a_8);
                  {
                    ATerm j_9 = t;
                    int k_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(k_16, (ATerm) ATmakeInt(1));
                        ;
                        LocalPopChoice(k_9);
                      }
                    else
                      {
                        t = j_9;
                        t = SSL_addr(k_16, (ATerm) ATmakeInt(1));
                      }
                    b_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_1, n_16);
                    t = p_16(t);
                    c_1 = t;
                    t = (ATerm) ATinsert(CheckATermList(c_1), (ATerm) ATmakeAppl(sym__2, k_16, m_16));
                  }
                  ;
                  LocalPopChoice(i_9);
                }
              else
                {
                  t = h_9;
                  {
                    ATerm o_16 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, k_16, n_16);
                    t = p_16(t);
                    o_16 = t;
                    t = (ATerm) ATinsert(CheckATermList(o_16), m_16);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = p_16(t);
  }
  return(t);
}
ATerm no_labels_0_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      ATerm r_16 = NULL;
      if(match_cons(t, sym_label_2))
        {
          ATerm l_9 = ATgetArgument(t, 0);
          r_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_16;
      return(t);
    }
    t = try_1_0(m_1, t);
    return(t);
  }
  t = map_1_0(l_1, t);
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = no_labels_0_0(t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  t = number_nonterminals_0_0(t);
  s_16 = t;
  t = make_0_0(t);
  t_16 = t;
  t = s_16;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        ATerm w_16 = NULL;
        t = term_w_6;
        t = d_74(t);
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_16, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(o_1, t);
      return(t);
    }
    t = map_1_0(n_1, t);
    t = concat_0_0(t);
    u_16 = t;
    t = term_w_6;
    t = d_74(t);
    v_16 = t;
    t = (ATerm) ATinsert(CheckATermList(u_16), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, v_16), t_16));
  }
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm y_16 = NULL;
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL;
      ATerm o_9 = t;
      int p_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              e_17 = ATgetArgument(t, 0);
              {
                ATerm q_9 = ATgetArgument(t, 1);
              }
              g_17 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(p_9);
          t = g_17;
          {
            ATerm p_1 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
                {
                  y_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(p_1, t);
            t = e_17;
            {
              ATerm q_1 (ATerm t)
              {
                t = not_null(y_16);
                return(t);
              }
              t = symbols2pp_entries_1_0(q_1, t);
            }
          }
        }
      else
        {
          t = o_9;
          {
            ATerm i_17 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                e_17 = ATgetArgument(t, 0);
                f_17 = ATgetArgument(t, 1);
                g_17 = ATgetArgument(t, 2);
                h_17 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_u_9)), f_17), (ATerm) ATinsert(ATinsert(ATempty, term_s_9), (ATerm) ATmakeAppl(sym_lit_1, e_17)));
            t = concat_0_0(t);
            i_17 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, i_17, g_17, h_17);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm v_9 = t;
          if((PushChoice() == 0))
            {
              ATerm u_1 (ATerm t)
              {
                t = term_w_9;
                return(t);
              }
              t = has_option_1_0(u_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_9;
            }
          {
            ATerm v_1 (ATerm t)
            {
              t = term_x_9;
              return(t);
            }
            t = debug_1_0(v_1, t);
          }
          return(t);
        }
        t = try_1_0(r_1, t);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm j_17 (ATerm t)
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, x_1, t);
        t = w_82(t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = Cons_2_0(_id, j_17, t);
      }
    return(t);
  }
  t = j_17(t);
  return(t);
}
ATerm init_0_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm k_17 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        ATerm a_10 = ATgetFirst((ATermList) t);
        k_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = k_17;
    return(t);
  }
  t = at_last_1_0(a_2, t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_17 = ATgetFirst((ATermList) t);
      p_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm b_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_17;
          ;
          LocalPopChoice(c_10);
        }
      else
        {
          t = b_10;
          t = p_17;
          t = last_0_0(t);
        }
    }
  else
    {
      t = p_17;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  u_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_17 = ATgetFirst((ATermList) t);
      {
        ATerm d_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_17;
  t = x_90(t);
  t = u_17;
  t = last_0_0(t);
  t = x_90(t);
  t = u_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_10 = ATgetFirst((ATermList) t);
      w_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_17;
  t = init_0_0(t);
  return(t);
}
ATerm un_double_quote_chars_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  t = unquote_chars_1_0(b_2, t);
  return(t);
}
ATerm string_as_chars_1_0 (ATerm i_91 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  x_17 = t;
  t = SSL_explode_string(x_17);
  t = i_91(t);
  y_17 = t;
  t = SSL_implode_string(y_17);
  return(t);
}
ATerm un_double_quote_0_0 (ATerm t)
{
  t = string_as_chars_1_0(un_double_quote_chars_0_0, t);
  return(t);
}
ATerm sort_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_sort_1))
    {
      a_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_18);
  z_17 = t;
  t = a_18;
  t = x_65(t);
  b_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, b_18), z_17);
  return(t);
}
ATerm lit_1_0 (ATerm n_65 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym_lit_1))
    {
      h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_18);
  g_18 = t;
  t = h_18;
  t = n_65(t);
  i_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, i_18), g_18);
  return(t);
}
ATerm cons_1_0 (ATerm b_66 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  q_18 = t;
  if(match_cons(t, sym_cons_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  n_18 = t;
  t = o_18;
  t = b_66(t);
  p_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, p_18), n_18);
  return(t);
}
ATerm foldr_3_0 (ATerm y_87 (ATerm), ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_87(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm w_18 = NULL,x_18 = NULL,a_19 = NULL,b_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_18 = ATgetFirst((ATermList) t);
            x_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = w_18;
        t = a_88(t);
        a_19 = t;
        t = x_18;
        t = foldr_3_0(y_87, z_87, a_88, t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
        t = z_87(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm r_91 (ATerm), ATerm s_91 (ATerm), ATerm t_91 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  c_19 = t;
  t = SSL_explode_term(c_19);
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  t = foldr_3_0(r_91, s_91, t_91, t);
  return(t);
}
ATerm collect_p__1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm f_19 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_19 = NULL;
        t = e_103(t);
        e_19 = t;
        t = (ATerm) ATinsert(ATempty, e_19);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        {
          ATerm c_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3_0(c_2, conc_0_0, f_19, t);
        }
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm d_2 (ATerm t)
  {
    ATerm h_19 = NULL;
    if(match_cons(t, sym_context_free_syntax_1))
      {
        h_19 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = h_19;
    return(t);
  }
  t = collect_p__1_0(d_2, t);
  t = concat_0_0(t);
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cons_1_0(un_double_quote_0_0, t);
            ;
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = lit_1_0(un_double_quote_0_0, t);
                  ;
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  t = sort_1_0(un_double_quote_0_0, t);
                }
            }
          }
        return(t);
      }
      t = try_1_0(g_2, t);
      return(t);
    }
    t = topdown_1_0(f_2, t);
    t = map_1_0(generate_pp_entries_0_0, t);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm o_10 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_10;
          }
        return(t);
      }
      t = filter_1_0(i_2, t);
      t = concat_0_0(t);
      g_19 = t;
      t = (ATerm) ATmakeAppl(sym_PP_Table_1, g_19);
      {
        ATerm k_2 (ATerm t)
        {
          ATerm l_2 (ATerm t)
          {
            ATerm p_10 = t;
            int q_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm i_19 = NULL;
                  i_19 = t;
                  t = SSL_int_to_string(i_19);
                  return(t);
                }
                t = Arg_1_0(m_2, t);
                ;
                LocalPopChoice(q_10);
              }
            else
              {
                t = p_10;
                {
                  ATerm r_10 = t;
                  int s_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_2 (ATerm t)
                      {
                        ATerm j_19 = NULL;
                        j_19 = t;
                        t = SSL_int_to_string(j_19);
                        return(t);
                      }
                      t = selector_2_0(n_2, _id, t);
                      ;
                      LocalPopChoice(s_10);
                    }
                  else
                    {
                      t = r_10;
                      t = S_1_0(double_quote_0_0, t);
                    }
                }
              }
            return(t);
          }
          t = try_1_0(l_2, t);
          return(t);
        }
        t = topdown_1_0(k_2, t);
      }
    }
  }
  return(t);
}
ATerm _2_0 (ATerm x_61 (ATerm), ATerm y_61 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  p_19 = t;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_19);
  k_19 = t;
  t = l_19;
  t = x_61(t);
  n_19 = t;
  t = m_19;
  t = y_61(t);
  o_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, n_19, o_19), k_19);
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), u_19);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_19;
  return(t);
}
ATerm oncetd_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm v_19 (ATerm t)
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_77(t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        t = SRTS_one(v_19, t);
      }
    return(t);
  }
  t = v_19(t);
  return(t);
}
ATerm is_subterm_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_19;
  {
    ATerm o_2 (ATerm t)
    {
      if((w_19 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = oncetd_1_0(o_2, t);
    t = (ATerm) ATmakeAppl(sym__2, w_19, x_19);
  }
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm check_option_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL;
  y_19 = t;
  t = get_options_0_0(t);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_19, z_19);
  t = is_subterm_0_0(t);
  t = term_w_6;
  return(t);
}
ATerm has_option_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = term_w_6;
  t = k_97(t);
  t = check_option_0_0(t);
  t = a_20;
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 (ATerm t)
      {
        t = term_x_10;
        return(t);
      }
      t = has_option_1_0(r_2, t);
      t = (ATerm) ATinsert(ATempty, term_d_11);
      t = fatal_error_0_0(t);
      ;
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_e_11);
    }
  return(t);
}
ATerm InId_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_20);
  if(match_cons(t, sym__2))
    {
      c_20 = ATgetArgument(t, 0);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
          {
            d_20 = ATgetFirst((ATermList) g_11);
            {
              ATerm l_11 = (ATerm) ATgetNext((ATermList) g_11);
              if(((ATgetType(l_11) != AT_LIST) || !(ATisEmpty(l_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_20;
  {
    ATerm m_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_103(t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = m_11;
        t = type_failure_0_0(t);
      }
    t = d_20;
  }
  return(t);
}
ATerm OutId_1_0 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_11) != ATmakeSymbol("out-type", 0, ATtrue)))
        _fail(t);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_w_6;
  t = q_103(t);
  f_20 = t;
  t = SSL_mkterm(f_20, (ATerm) ATinsert(ATempty, e_20));
  return(t);
}
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_11 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      t = _2_0(s_2, _id, t);
      t = OutId_1_0(i_0, t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = t_11;
      {
        ATerm t_2 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = _2_0(t_2, _id, t);
        t = InId_1_0(h_0, t);
      }
    }
  return(t);
}
ATerm termid_set_p__1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, h_20);
  t = x_103(t);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_20, i_20);
  return(t);
}
ATerm try_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_74(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
    }
  return(t);
}
ATerm termid_check_p__1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, k_20);
  t = v_103(t);
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_20, l_20);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL;
  m_20 = t;
  t = term_w_6;
  t = whoami_0_0(t);
  n_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), n_20), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = m_20;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      {
        ATerm q_20 = NULL,r_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_20 = ATgetFirst((ATermList) t);
            r_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_20;
        {
          ATerm u_2 (ATerm t)
          {
            t = r_20;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_2, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  v_20 = t;
  t = SSL_explode_term(v_20);
  if(match_cons(t, sym__2))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_20;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm x_20 (ATerm t)
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_20, t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_82(t);
      }
    return(t);
  }
  t = x_20(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_20;
  {
    ATerm w_2 (ATerm t)
    {
      t = y_20;
      return(t);
    }
    t = at_end_1_0(w_2, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_21 = NULL;
  ATerm x_2 (ATerm t)
  {
    ATerm b_21 = NULL;
    b_21 = t;
    t = SSL_explode_string(b_21);
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm c_21 = NULL;
    c_21 = t;
    t = SSL_explode_string(c_21);
    return(t);
  }
  t = _2_0(x_2, y_2, t);
  t = conc_0_0(t);
  a_21 = t;
  t = SSL_implode_string(a_21);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL;
      i_21 = t;
      t = SSL_is_string(i_21);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(a_3, t);
            ;
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
              m_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_21 = ATgetArgument(t, 0);
                  t = n_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_21 = ATgetArgument(t, 0);
                      t = n_21;
                      {
                        ATerm i_13 = t;
                        int j_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_13);
                          }
                        else
                          {
                            t = i_13;
                            {
                              ATerm b_3 (ATerm t)
                              {
                                t = term_k_13;
                                return(t);
                              }
                              t = debug_1_0(b_3, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_21 = NULL,t_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_21 = ATgetArgument(t, 0);
                          o_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_21;
                      t = eval_config_0_0(t);
                      s_21 = t;
                      t = o_21;
                      t = eval_config_0_0(t);
                      t_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
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
  ATerm w_21 = NULL;
  w_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_21);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm x_21 = NULL;
      t = eval_config_0_0(t);
      x_21 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_21, x_21);
      t = x_21;
      return(t);
    }
    t = try_1_0(d_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm y_21 = NULL,z_21 = NULL;
    y_21 = t;
    t = term_m_13;
    t = get_config_0_0(t);
    z_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_21, term_t_13);
    t = geq_0_0(t);
    t = y_21;
    t = l_95(t);
    return(t);
  }
  t = try_1_0(e_3, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_13 = ATgetArgument(t, 0);
        if(match_cons(u_13, sym_Stream_1))
          {
            a_22 = ATgetArgument(u_13, 0);
          }
        else
          _fail(t);
        b_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(a_22, b_22);
    c_22 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), c_22);
    d_22 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
    return(t);
  }
  t = WriteToFile_1_0(f_3, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm h_94 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_22, term_v_13);
  t = open_stream_0_0(t);
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_22, f_22);
  t = h_94(t);
  t = fclose_0_0(t);
  t = f_22;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_14 = ATgetArgument(t, 0);
        if(match_cons(c_14, sym_Stream_1))
          {
            h_22 = ATgetArgument(c_14, 0);
          }
        else
          _fail(t);
        i_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(h_22, i_22);
    j_22 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, j_22);
    return(t);
  }
  t = WriteToFile_1_0(g_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  k_22 = t;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm d_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                l_22 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(o_3, t);
          ;
          LocalPopChoice(e_14);
        }
      else
        {
          t = d_14;
          t = term_f_14;
          l_22 = t;
        }
      return(t);
    }
    t = _2_0(i_3, _id, t);
    t = k_22;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm q_3 (ATerm t)
        {
          t = not_null(l_22);
          return(t);
        }
        t = split_2_0(q_3, _id, t);
        return(t);
      }
      t = _2_0(_id, p_3, t);
      {
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              ATerm w_3 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(w_3, t);
              return(t);
            }
            t = _2_0(r_3, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
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
ATerm apply_strategy_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  m_22 = t;
  t = dtime_0_0(t);
  t = m_22;
  t = j_97(t);
  n_22 = t;
  t = dtime_0_0(t);
  o_22 = t;
  t = n_22;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_22), (ATerm) ATmakeAppl(sym_Runtime_1, o_22)), q_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_23 (ATerm y_22, ATerm t)
  {
    t = SSL_fclose(y_22);
    return(t);
  }
  ATerm b_23 = NULL,c_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_23 = ATgetArgument(t, 0);
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_23);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            t = e_23(c_23, t);
          }
      }
    }
  else
    {
      t = e_23(c_23, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  t = t_93(t);
  g_23 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_23), g_23));
  t = f_23;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_23 = NULL;
  t = SSL_stdin_stream();
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_23 = NULL;
  t = SSL_stdout_stream();
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = SSL_stderr_stream();
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_23);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_14 = ATgetArgument(t, 0);
      ATerm r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,t_1 = NULL;
        s_1 = t;
        t = SSL_explode_term(s_1);
        if(match_cons(t, sym__2))
          {
            ATerm v_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_14 = ATgetArgument(t, 1);
              if(((ATgetType(w_14) == AT_LIST) && !(ATisEmpty(w_14))))
                {
                  t_1 = ATgetFirst((ATermList) w_14);
                  {
                    ATerm y_14 = (ATerm) ATgetNext((ATermList) w_14);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_1;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
              ATerm x_3 (ATerm t)
              {
                ATerm r_23 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    r_23 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = r_23;
                return(t);
              }
              t = _2_0(x_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_23 = ATgetArgument(t, 0);
                  p_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(o_23, p_23);
              q_23 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, q_23);
              ;
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              {
                ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
                ATerm y_3 (ATerm t)
                {
                  ATerm v_23 = NULL;
                  v_23 = t;
                  t = SSL_is_string(v_23);
                  return(t);
                }
                t = _2_0(y_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_23 = ATgetArgument(t, 0);
                    t_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(s_23, t_23);
                u_23 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, u_23);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_23 = NULL;
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_23, term_e_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = b_15;
      {
        ATerm z_3 (ATerm t)
        {
          t = term_f_15;
          return(t);
        }
        t = debug_1_0(z_3, t);
        _fail(t);
      }
    }
  w_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(y_23);
  x_23 = t;
  t = w_23;
  t = fclose_0_0(t);
  t = x_23;
  return(t);
}
ATerm split_2_0 (ATerm l_89 (ATerm), ATerm m_89 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  t = l_89(t);
  c_24 = t;
  t = b_24;
  t = m_89(t);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  e_24 = t;
  {
    ATerm i_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              f_24 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(a_4, t);
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = i_15;
        t = term_l_15;
        f_24 = t;
      }
    t = e_24;
    {
      ATerm b_4 (ATerm t)
      {
        t = not_null(f_24);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, b_4, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm h_24 = NULL;
    h_24 = t;
    if(match_string(t, "-k"))
      {
        t = h_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = h_24;
      }
    return(t);
  }
  ATerm d_4 (ATerm t)
  {
    ATerm i_24 = NULL,j_24 = NULL;
    i_24 = t;
    t = SSL_string_to_int(i_24);
    j_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), j_24);
    t = i_24;
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    t = term_m_15;
    return(t);
  }
  t = ArgOption_3_0(c_4, d_4, e_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_15 = t;
  int p_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 (ATerm t)
      {
        ATerm l_24 = NULL;
        l_24 = t;
        if(match_string(t, "-S"))
          {
            t = l_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = l_24;
          }
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_r_15;
        return(t);
      }
      ATerm i_4 (ATerm t)
      {
        t = term_s_15;
        return(t);
      }
      t = Option_3_0(g_4, h_4, i_4, t);
      ;
      LocalPopChoice(p_15);
    }
  else
    {
      t = n_15;
      {
        ATerm u_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              ATerm o_24 = NULL,p_24 = NULL;
              o_24 = t;
              t = SSL_string_to_int(o_24);
              p_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_24);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, o_24);
              return(t);
            }
            ATerm n_4 (ATerm t)
            {
              t = term_w_15;
              return(t);
            }
            t = ArgOption_3_0(j_4, m_4, n_4, t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = u_15;
            {
              ATerm o_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm p_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_x_15;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_y_15;
                return(t);
              }
              t = Option_3_0(o_4, p_4, q_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
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
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
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
  ATerm s_4 (ATerm t)
  {
    ATerm u_25 = NULL;
    u_25 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_25);
    t = (ATerm) ATmakeAppl(sym_Output_1, u_25);
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_b_16;
    return(t);
  }
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm u_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_e_16;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_f_16;
          return(t);
        }
        t = Option_3_0(u_4, v_4, w_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL;
  if(match_cons(t, sym__3))
    {
      p_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
      r_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_16 = ATgetArgument(t, 0);
            ATerm q_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_26, q_26);
        ;
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = (ATerm) ATempty;
      }
    s_26 = t;
    t = SSL_table_put(p_26, q_26, (ATerm) ATinsert(CheckATermList(s_26), r_26));
    t = (ATerm) ATmakeAppl(sym__3, p_26, q_26, r_26);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm x_26 = NULL;
  t = term_w_6;
  t = m_100(t);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_16, term_z_16, x_26);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  a_27 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = a_27;
      t = register_usage_1_0(g_0, t);
    }
  else
    {
      ATerm i_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_27 = ATgetFirst((ATermList) t);
          c_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_27 = ATgetFirst((ATermList) t);
          e_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_27;
      t = d_0(t);
      t = d_27;
      t = f_0(t);
      i_27 = t;
      t = (ATerm) ATinsert(CheckATermList(e_27), i_27);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm k_27 = NULL;
    k_27 = t;
    if(match_string(t, "-i"))
      {
        t = k_27;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = k_27;
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    ATerm l_27 = NULL;
    l_27 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), l_27);
    t = (ATerm) ATmakeAppl(sym_Input_1, l_27);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm b_17 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(c_17);
    }
  else
    {
      t = b_17;
      {
        ATerm d_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(l_17);
          }
        else
          {
            t = d_17;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_6;
  t = whoami_0_0(t);
  m_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_27));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_87(t);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = n_17;
      {
        ATerm p_27 = NULL,q_27 = NULL,v_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_27 = ATgetFirst((ATermList) t);
            q_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_27;
        t = foldr_2_0(w_87, x_87, t);
        v_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_27, v_27);
        t = x_87(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  w_27 = t;
  t = SSL_explode_term(w_27);
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_27;
  t = foldr_2_0(p_91, q_91, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_27 = NULL;
  t = times_0_0(t);
  {
    ATerm b_5 (ATerm t)
    {
      t = term_q_15;
      return(t);
    }
    ATerm c_5 (ATerm t)
    {
      ATerm z_27 = NULL,a_28 = NULL;
      if(match_cons(t, sym__2))
        {
          z_27 = ATgetArgument(t, 0);
          a_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(z_27, a_28);
            ;
            LocalPopChoice(t_17);
          }
        else
          {
            t = s_17;
            t = SSL_addr(z_27, a_28);
          }
      }
      return(t);
    }
    t = crush_2_0(b_5, c_5, t);
    y_27 = t;
    t = SSL_TicksToSeconds(y_27);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_28;
        if((k_28 != t))
          {
            _fail(t);
          }
        t = j_28;
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = j_28;
        {
          ATerm f_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_28, l_28);
              ;
              LocalPopChoice(k_18);
            }
          else
            {
              t = f_18;
              t = SSL_gtr(k_28, l_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_28, l_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm o_28 = NULL,p_28 = NULL;
    o_28 = t;
    t = term_m_13;
    t = get_config_0_0(t);
    p_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_28, term_a_8);
    t = geq_0_0(t);
    t = o_28;
    t = k_95(t);
    return(t);
  }
  t = try_1_0(d_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm r_28 = NULL,s_28 = NULL;
    t = run_time_0_0(t);
    r_28 = t;
    t = term_w_6;
    t = whoami_0_0(t);
    s_28 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_28), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_28));
    t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_18), r_28), term_m_18), s_28));
    return(t);
  }
  t = if_verbose1_1_0(e_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm f_5 (ATerm t)
        {
          ATerm v_18 = t;
          int y_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(y_18);
            }
          else
            {
              t = v_18;
              {
                ATerm z_18 = t;
                int q_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_19);
                  }
                else
                  {
                    t = z_18;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(f_5, t);
      }
    }
  t = h_98(t);
  return(t);
}
ATerm map_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm u_28 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = Cons_2_0(v_81, u_28, t);
      }
    return(t);
  }
  t = u_28(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_28 = ATgetFirst((ATermList) t);
      x_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_29 = NULL,h_29 = NULL;
        t = x_28;
        t = b_0(t);
        g_29 = t;
        t = w_28;
        t = a_0(t);
        h_29 = t;
        t = x_28;
        {
          ATerm g_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_29), h_29);
            return(t);
          }
          t = reverse_acc_2_0(a_0, g_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_6;
      t = b_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, h_5, t);
  return(t);
}
ATerm Program_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  l_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_29);
  i_29 = t;
  t = j_29;
  t = d_72(t);
  k_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_29), i_29);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_19 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = t_19;
      {
        ATerm i_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(i_5, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_p_20;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm j_5 (ATerm t)
    {
      ATerm p_29 = NULL;
      p_29 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, p_29), term_s_20);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(j_5, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,v_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_29);
  q_29 = t;
  t = r_29;
  t = e_72(t);
  s_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, s_29), q_29);
  return(t);
}
ATerm fetch_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm z_29 (ATerm t)
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_82, _id, t);
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = Cons_2_0(_id, z_29, t);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm h_99 (ATerm), ATerm t)
{
  t = fetch_1_0(h_99, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_30;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_21 = ATgetFirst((ATermList) t);
                ATerm g_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_30;
          }
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATinsert(ATempty, b_30);
      }
    c_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_30);
    t = b_30;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_17;
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
  ATerm h_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_p_21;
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_q_21;
        return(t);
      }
      t = Option_3_0(k_5, l_5, m_5, t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = h_21;
      {
        ATerm n_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm o_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_21;
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = term_u_21;
          return(t);
        }
        t = Option_3_0(n_5, o_5, p_5, t);
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm h_30 = NULL;
    h_30 = t;
    if(match_string(t, "--help"))
      {
        t = h_30;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = h_30;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = h_30;
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_v_21;
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_r_22;
    return(t);
  }
  t = Option_3_0(r_5, s_5, t_5, t);
  return(t);
}
ATerm Cons_2_0 (ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  n_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_30 = ATgetFirst((ATermList) t);
      k_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_30);
  i_30 = t;
  t = j_30;
  t = g_63(t);
  l_30 = t;
  t = k_30;
  t = h_63(t);
  m_30 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(m_30), l_30), i_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm u_30 = NULL;
  u_30 = t;
  {
    ATerm u_5 (ATerm t)
    {
      t = term_s_22;
      t = k_100(t);
      return(t);
    }
    t = try_1_0(u_5, t);
    t = u_30;
    {
      ATerm v_5 (ATerm t)
      {
        ATerm v_30 = NULL;
        v_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), v_30);
        t = (ATerm) ATmakeAppl(sym_Program_1, v_30);
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_22);
              }
            else
              {
                t = v_22;
                t = k_100(t);
                t = Cons_2_0(_id, w_5, t);
              }
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            {
              ATerm x_30 = NULL,y_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_30 = ATgetFirst((ATermList) t);
                  y_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_30), (ATerm) ATmakeAppl(sym_Undefined_1, x_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_5, w_5, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = e_31;
  {
    ATerm x_5 (ATerm t)
    {
      ATerm x_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_100(t);
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = x_22;
          {
            ATerm a_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(d_23);
              }
            else
              {
                t = a_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_5, t);
    {
      ATerm y_5 (ATerm t)
      {
        ATerm k_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_31 = NULL;
            l_31 = t;
            {
              ATerm n_23 = t;
              int a_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_31;
                  {
                    ATerm g_24 = t;
                    int k_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_u_18;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(k_24);
                      }
                    else
                      {
                        t = g_24;
                        {
                          ATerm z_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(z_5, t);
                        }
                      }
                    t = l_31;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(a_24);
                }
              else
                {
                  t = n_23;
                  t = term_l_21;
                  t = get_config_0_0(t);
                  t = l_31;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = k_23;
            {
              ATerm a_6 (ATerm t)
              {
                ATerm c_6 (ATerm t)
                {
                  f_31 = t;
                  return(t);
                }
                t = Undefined_1_0(c_6, t);
                return(t);
              }
              t = option_defined_1_0(a_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_31)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_31)), term_m_24));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(y_5, t);
      g_31 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = g_31;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm q_5 = NULL;
  t = parse_options_1_0(j_98, t);
  q_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), q_5);
  t = q_5;
  t = l_98(t);
  {
    ATerm n_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_98, t);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = n_24;
        {
          ATerm r_24 = t;
          int s_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_24);
            }
          else
            {
              t = r_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm b_98 (ATerm), ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_97(t);
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(y_97, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(d_6, a_98, b_98, e_6, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm o_31 = NULL,p_31 = NULL;
      o_31 = t;
      t = term_m_17;
      t = get_config_0_0(t);
      p_31 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, p_31));
      t = o_31;
      return(t);
    }
    t = if_verbose2_1_0(g_6, t);
    return(t);
  }
  t = iowrap_4_0(s_97, t_97, u_97, f_6, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm t)
{
  t = iowrap_3_0(q_97, r_97, default_usage_0_0, t);
  return(t);
}
ATerm io_idwrap_3_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm j_6 (ATerm t)
    {
      t = termid_check_p__1_0(m_103, t);
      return(t);
    }
    t = try_1_0(j_6, t);
    t = n_103(t);
    {
      ATerm k_6 (ATerm t)
      {
        t = termid_set_p__1_0(m_103, t);
        return(t);
      }
      t = try_1_0(k_6, t);
    }
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_103(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        {
          ATerm l_6 (ATerm t)
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
              _fail(t);
            return(t);
          }
          ATerm m_6 (ATerm t)
          {
            t = term_x_10;
            return(t);
          }
          ATerm n_6 (ATerm t)
          {
            t = term_x_24;
            return(t);
          }
          t = Option_3_0(l_6, m_6, n_6, t);
        }
      }
    return(t);
  }
  t = iowrap_2_0(h_6, i_6, t);
  return(t);
}
ATerm io_sdf_2_pp_table_0_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm r_6 (ATerm t)
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
        _fail(t);
      return(t);
    }
    ATerm s_6 (ATerm t)
    {
      t = term_y_24;
      return(t);
    }
    t = InOutId_2_0(r_6, s_6, t);
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    t = _2_0(_id, ppgenerate_0_0, t);
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm t_6 (ATerm t)
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
        _fail(t);
      return(t);
    }
    ATerm u_6 (ATerm t)
    {
      t = term_z_24;
      return(t);
    }
    ATerm v_6 (ATerm t)
    {
      t = term_a_25;
      return(t);
    }
    t = Option_3_0(t_6, u_6, v_6, t);
    return(t);
  }
  t = io_idwrap_3_0(o_6, p_6, q_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_sdf_2_pp_table_0_0(t);
  return(t);
}

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
ATerm term_d_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_w_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_s_27;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_u_24;
ATerm term_d_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_q_18;
ATerm term_q_17;
ATerm term_d_17;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_w_15;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_o_10;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_x_4;
void init_constant_terms (void)
{
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Arg_1, term_b_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_SOpt_2, term_v_11, term_w_11);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_lit_1, term_x_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_lit_1, term_a_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__3, term_g_25, term_h_25, term_x_4);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm quote_chars_0_0 (ATerm);
ATerm S_1_0 (ATerm l_70 (ATerm), ATerm);
ATerm selector_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm i_70 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm filter_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm y_0 (ATerm);
ATerm symbol2abox_1_0 (ATerm w_80 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm l_72 (ATerm), ATerm);
ATerm iter_1_0 (ATerm k_72 (ATerm), ATerm);
ATerm pair_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm number_node_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm v_80 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm at_last_1_0 (ATerm p_89 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm unquote_chars_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm sort_1_0 (ATerm p_72 (ATerm), ATerm);
ATerm lit_1_0 (ATerm f_72 (ATerm), ATerm);
ATerm cons_1_0 (ATerm t_72 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm collect_p__1_0 (ATerm a_110 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm j_3 (ATerm);
ATerm ppgenerate_0_0 (ATerm);
ATerm _2_0 (ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm a_84 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm l_110 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm d_101 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_104 (ATerm), ATerm);
ATerm d_21 (ATerm x_20, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_102 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm a_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm o_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_102 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm need_help_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_88 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm v_78 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm n_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm);
ATerm o_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_107 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm x_6 (ATerm);
ATerm parse_options_1_0 (ATerm f_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm iowrap_3_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm io_idwrap_3_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_0 = NULL,p_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_0 = NULL;
      t = term_x_4;
      t = l_0(t);
      q_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_7, term_y_7, q_0);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_0 = ATgetFirst((ATermList) t);
          p_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_0;
      t = j_0(t);
      t = term_x_4;
      t = k_0(t);
      u_0 = t;
      t = (ATerm) ATinsert(CheckATermList(p_0), u_0);
    }
  return(t);
}
ATerm quote_chars_0_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym__2))
    {
      w_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_0), w_0), (ATerm) ATinsert(ATempty, w_0));
  {
    ATerm z_7 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_8 = ATgetArgument(t, 0);
            ATerm d_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_0), w_0);
        {
          ATerm c_0 (ATerm t)
          {
            t = (ATerm) ATinsert(ATempty, w_0);
            return(t);
          }
          t = at_end_1_0(c_0, t);
        }
        ;
        LocalPopChoice(b_8);
      }
    else
      {
        t = z_7;
        {
          ATerm v_0 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_0), w_0), (ATerm) ATinsert(ATempty, w_0)));
          if(match_cons(t, sym__2))
            {
              ATerm e_8 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_8) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              v_0 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_0;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm S_1_0 (ATerm l_70 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
  j_1 = t;
  if(match_cons(t, sym_S_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_1);
  g_1 = t;
  t = h_1;
  t = l_70(t);
  i_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, i_1), g_1);
  return(t);
}
ATerm selector_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,z_1 = NULL,b_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym_selector_2))
    {
      t_1 = ATgetArgument(t, 0);
      u_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_2);
  s_1 = t;
  t = t_1;
  t = g_70(t);
  v_1 = t;
  t = u_1;
  t = h_70(t);
  z_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, v_1, z_1), s_1);
  return(t);
}
ATerm Arg_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym_Arg_1))
    {
      g_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_2);
  f_2 = t;
  t = g_2;
  t = i_70(t);
  h_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, h_2), f_2);
  return(t);
}
ATerm topdown_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  t = w_82(t);
  {
    ATerm e_0 (ATerm t)
    {
      t = topdown_1_0(w_82, t);
      return(t);
    }
    t = SRTS_all(e_0, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_0 (ATerm t)
            {
              t = filter_1_0(s_95, t);
              return(t);
            }
            t = Cons_2_0(s_95, n_0, t);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            {
              ATerm h_3 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_8 = ATgetFirst((ATermList) t);
                  h_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_3;
              t = filter_1_0(s_95, t);
            }
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      d_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_4;
  if(match_cons(t, sym_alt_2))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_4 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, a_4, b_4);
            t = flat_alt_0_0(t);
            n_4 = t;
            t = (ATerm) ATinsert(CheckATermList(n_4), d_4);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            t = (ATerm) ATinsert(ATinsert(ATempty, e_4), d_4);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, e_4), d_4);
    }
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm n_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_3 = NULL;
      u_3 = t;
      {
        ATerm q_8 = t;
        if((PushChoice() == 0))
          {
            ATerm f_1 = NULL;
            f_1 = t;
            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
              {
                t = f_1;
              }
            else
              {
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm v_8 = ATgetFirst((ATermList) t);
                    ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_1;
              }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_8;
          }
        t = (ATerm) ATinsert(ATempty, u_3);
      }
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = n_8;
    }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  t = map_1_0(o_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = topdown_1_0(y_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm z_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1_0(_id, t);
      t = term_c_9;
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = z_8;
    }
  return(t);
}
ATerm symbol2abox_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,o_1 = NULL,p_1 = NULL;
  o_1 = t;
  t = term_x_4;
  t = w_80(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_1, o_1);
  {
    ATerm f_11 (ATerm t)
    {
      ATerm h_11 (ATerm o_8, ATerm t_8, ATerm g_9, ATerm l_9, ATerm m_9, ATerm t)
      {
        ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
        t = SSL_explode_term(l_9);
        if(match_cons(t, sym__2))
          {
            g_10 = ATgetArgument(t, 0);
            h_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, g_9, g_10)));
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, g_9, g_10));
                return(t);
              }
              if(match_cons(t, sym__2))
                {
                  ATerm f_9 = ATgetArgument(t, 0);
                  ATerm h_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_8;
              t = at_end_1_0(r_0, t);
              ;
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              {
                ATerm j_2 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, t_8, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, g_9, g_10))));
                if(match_cons(t, sym__2))
                  {
                    ATerm i_9 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    j_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_2;
                t = concat_0_0(t);
              }
            }
          i_10 = t;
          t = h_10;
          t = argument_list_0_0(t);
          t = number_nonterminals_0_0(t);
          j_10 = t;
          t = make_0_0(t);
          k_10 = t;
          t = j_10;
          {
            ATerm s_0 (ATerm t)
            {
              ATerm p_10 = NULL;
              p_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_8, i_10), p_10);
              t = f_11(t);
              return(t);
            }
            t = map_1_0(s_0, t);
            t = concat_0_0(t);
            l_10 = t;
            t = (ATerm) ATinsert(CheckATermList(l_10), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, o_8, i_10), k_10));
          }
        }
        return(t);
      }
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL;
      u_10 = t;
      if(match_cons(t, sym__2))
        {
          v_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_10;
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm n_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(k_9);
            t = (ATerm) ATempty;
          }
        else
          {
            t = j_9;
            if(match_cons(t, sym__2))
              {
                z_10 = ATgetArgument(t, 0);
                a_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_11;
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm r_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_9);
                  t = v_10;
                  if(match_cons(t, sym__2))
                    {
                      w_10 = ATgetArgument(t, 0);
                      x_10 = ATgetArgument(t, 1);
                      {
                        ATerm t_9 = t;
                        int u_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(u_9);
                          }
                        else
                          {
                            t = t_9;
                            t = h_11(w_10, x_10, z_10, a_11, u_10, t);
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
                  t = p_9;
                  {
                    ATerm v_9 = t;
                    int w_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm x_9 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_9);
                        t = v_10;
                        if(match_cons(t, sym__2))
                          {
                            w_10 = ATgetArgument(t, 0);
                            x_10 = ATgetArgument(t, 1);
                            {
                              ATerm z_9 = t;
                              int a_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(a_10);
                                }
                              else
                                {
                                  t = z_9;
                                  t = h_11(w_10, x_10, z_10, a_11, u_10, t);
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
                        t = v_9;
                        if(match_cons(t, sym_alt_2))
                          {
                            t_10 = ATgetArgument(t, 0);
                            q_10 = ATgetArgument(t, 1);
                            t = v_10;
                            if(match_cons(t, sym__2))
                              {
                                w_10 = ATgetArgument(t, 0);
                                x_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = q_10;
                            if(match_cons(t, sym_alt_2))
                              {
                                r_10 = ATgetArgument(t, 0);
                                s_10 = ATgetArgument(t, 1);
                                {
                                  ATerm b_10 = t;
                                  int d_10 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm w_2 = NULL,x_2 = NULL;
                                      t = w_10;
                                      if(((k_6 != NULL) && (k_6 != t)))
                                        _fail(t);
                                      else
                                        k_6 = t;
                                      t = x_10;
                                      if(((l_6 != NULL) && (l_6 != t)))
                                        _fail(t);
                                      else
                                        l_6 = t;
                                      t = z_10;
                                      if(((m_6 != NULL) && (m_6 != t)))
                                        _fail(t);
                                      else
                                        m_6 = t;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, t_10, (ATerm) ATmakeAppl(sym_alt_2, r_10, s_10));
                                      t = flat_alt_0_0(t);
                                      w_2 = t;
                                      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), w_2);
                                      x_2 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_10, x_10), (ATerm) ATmakeAppl(sym__2, z_10, x_2));
                                      t = f_11(t);
                                      t = Cons_2_0(t_0, _id, t);
                                      ;
                                      LocalPopChoice(d_10);
                                    }
                                  else
                                    {
                                      t = b_10;
                                      t = h_11(w_10, x_10, z_10, a_11, u_10, t);
                                    }
                                }
                              }
                            else
                              {
                                t = h_11(w_10, x_10, z_10, a_11, u_10, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                t_10 = ATgetArgument(t, 0);
                                t = v_10;
                                if(match_cons(t, sym__2))
                                  {
                                    w_10 = ATgetArgument(t, 0);
                                    x_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm e_10 = t;
                                  int f_10 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_10, x_10), (ATerm) ATmakeAppl(sym__2, z_10, t_10));
                                      t = f_11(t);
                                      ;
                                      LocalPopChoice(f_10);
                                    }
                                  else
                                    {
                                      t = e_10;
                                      t = h_11(w_10, x_10, z_10, a_11, u_10, t);
                                    }
                                }
                              }
                            else
                              {
                                t = v_10;
                                if(match_cons(t, sym__2))
                                  {
                                    w_10 = ATgetArgument(t, 0);
                                    x_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = h_11(w_10, x_10, z_10, a_11, u_10, t);
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
    t = f_11(t);
  }
  return(t);
}
ATerm iter_star_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_11);
  i_11 = t;
  t = j_11;
  t = l_72(t);
  k_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, k_11), i_11);
  return(t);
}
ATerm iter_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  r_11 = t;
  if(match_cons(t, sym_iter_1))
    {
      p_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_11);
  o_11 = t;
  t = p_11;
  t = k_72(t);
  q_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, q_11), o_11);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,f_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_11 = ATgetFirst((ATermList) t);
            z_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_11;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_12 = ATgetFirst((ATermList) t);
            b_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_12;
        t = pair_0_0(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), (ATerm) ATmakeAppl(sym__2, y_11, a_12));
      }
    }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  m_12 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_12);
  h_12 = t;
  t = i_12;
  t = i_72(t);
  k_12 = t;
  t = j_12;
  t = j_72(t);
  l_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, k_12, l_12), h_12);
  return(t);
}
ATerm iter_sep_2_0 (ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL;
  u_12 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      q_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  p_12 = t;
  t = q_12;
  t = g_72(t);
  s_12 = t;
  t = r_12;
  t = h_72(t);
  t_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, s_12, t_12), p_12);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm k_13 = NULL;
  t = _2_0(_id, c_1, t);
  if(match_cons(t, sym_lit_1))
    {
      k_13 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_10, (ATerm) ATmakeAppl(sym_S_1, k_13));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          k_13 = ATgetArgument(t, 0);
          {
            ATerm b_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, k_13);
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = map_1_0(d_1, t);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_star_1_0(_id, t);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = e_11;
            {
              ATerm m_11 = t;
              int n_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_sep_2_0(_id, _id, t);
                  ;
                  LocalPopChoice(n_11);
                }
              else
                {
                  t = m_11;
                  t = iter_star_sep_2_0(_id, _id, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm p_13 = NULL;
  t = lit_1_0(_id, t);
  if(match_cons(t, sym_lit_1))
    {
      p_13 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_10, (ATerm) ATmakeAppl(sym_S_1, p_13));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          p_13 = ATgetArgument(t, 0);
          {
            ATerm s_11 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, p_13);
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm z_13 = NULL,b_14 = NULL;
  ATerm w_1 (ATerm t)
  {
    ATerm d_14 = NULL;
    t = lit_1_0(_id, t);
    if(match_cons(t, sym_lit_1))
      {
        d_14 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_10, (ATerm) ATmakeAppl(sym_S_1, d_14));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            d_14 = ATgetArgument(t, 0);
            {
              ATerm t_11 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, d_14);
      }
    if(((z_13 != NULL) && (z_13 != t)))
      _fail(t);
    else
      z_13 = t;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    ATerm l_14 = NULL;
    t = _2_0(_id, y_1, t);
    if(match_cons(t, sym_lit_1))
      {
        l_14 = ATgetArgument(t, 0);
        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_10, (ATerm) ATmakeAppl(sym_S_1, l_14));
      }
    else
      {
        if(match_cons(t, sym__2))
          {
            l_14 = ATgetArgument(t, 0);
            {
              ATerm u_11 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Arg_1, l_14);
      }
    if(((b_14 != NULL) && (b_14 != t)))
      _fail(t);
    else
      b_14 = t;
    return(t);
  }
  t = _2_0(w_1, x_1, t);
  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_x_11), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_14)), not_null(z_13)));
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1_0(_id, t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = iter_star_1_0(_id, t);
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm r_14 = NULL;
  if(match_cons(t, sym_lit_1))
    {
      r_14 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_10, (ATerm) ATmakeAppl(sym_S_1, r_14));
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          r_14 = ATgetArgument(t, 0);
          {
            ATerm e_12 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Arg_1, r_14);
    }
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  ATerm g_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_13 = NULL;
      t = reverse_acc_2_0(_id, z_0, t);
      t = Cons_2_0(a_1, b_1, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_13 = ATgetFirst((ATermList) t);
          d_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_12 = t;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(_id, e_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_12;
          }
        t = d_13;
        t = reverse_acc_2_0(_id, k_1, t);
        i_13 = t;
        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_13), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, i_13)));
      }
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = g_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = reverse_acc_2_0(_id, l_1, t);
            {
              ATerm m_1 (ATerm t)
              {
                ATerm u_13 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    u_13 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_10, (ATerm) ATmakeAppl(sym_S_1, u_13));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        u_13 = ATgetArgument(t, 0);
                        {
                          ATerm x_12 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, u_13);
                  }
                if(((h_13 != NULL) && (h_13 != t)))
                  _fail(t);
                else
                  h_13 = t;
                return(t);
              }
              ATerm n_1 (ATerm t)
              {
                ATerm y_12 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_12;
                  }
                t = reverse_acc_2_0(_id, q_1, t);
                if(((f_13 != NULL) && (f_13 != t)))
                  _fail(t);
                else
                  f_13 = t;
                return(t);
              }
              t = Cons_2_0(m_1, n_1, t);
              t = not_null(f_13);
              t = pair_0_0(t);
              t = map_1_0(r_1, t);
              g_13 = t;
              t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_13)), g_13));
            }
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            t = map_1_0(a_2, t);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm z_12 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_12;
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm number_node_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm i_3 = NULL;
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_9, i_3);
  {
    ATerm q_15 (ATerm t)
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2_0(_id, c_2, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          {
            ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
            k_15 = t;
            if(match_cons(t, sym__2))
              {
                l_15 = ATgetArgument(t, 0);
                m_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_15;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_15 = ATgetFirst((ATermList) t);
                o_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm c_13 = t;
              int j_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_3 = NULL,h_4 = NULL;
                  t = n_15;
                  t = z_80(t);
                  t = (ATerm) ATmakeAppl(sym__2, l_15, term_b_9);
                  {
                    ATerm l_13 = t;
                    int m_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(l_15, (ATerm) ATmakeInt(1));
                        ;
                        LocalPopChoice(m_13);
                      }
                    else
                      {
                        t = l_13;
                        t = SSL_addr(l_15, (ATerm) ATmakeInt(1));
                      }
                    z_3 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_3, o_15);
                    t = q_15(t);
                    h_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(h_4), (ATerm) ATmakeAppl(sym__2, l_15, n_15));
                  }
                  ;
                  LocalPopChoice(j_13);
                }
              else
                {
                  t = c_13;
                  {
                    ATerm p_15 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, l_15, o_15);
                    t = q_15(t);
                    p_15 = t;
                    t = (ATerm) ATinsert(CheckATermList(p_15), n_15);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = q_15(t);
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_15 = NULL;
      if(match_cons(t, sym_label_2))
        {
          ATerm q_13 = ATgetArgument(t, 0);
          v_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_15;
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
    }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  t = map_1_0(d_2, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  t = number_nonterminals_0_0(t);
  x_15 = t;
  t = make_0_0(t);
  y_15 = t;
  t = x_15;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        ATerm b_16 = NULL;
        t = term_x_4;
        t = v_80(t);
        b_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_16, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(k_2, t);
      return(t);
    }
    t = map_1_0(e_2, t);
    t = concat_0_0(t);
    z_15 = t;
    t = term_x_4;
    t = v_80(t);
    a_16 = t;
    t = (ATerm) ATinsert(CheckATermList(z_15), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, a_16), y_15));
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  if(!(match_cons(t, sym_Silent_0)))
    _fail(t);
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm d_16 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,p_16 = NULL;
      ATerm t_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              j_16 = ATgetArgument(t, 0);
              {
                ATerm w_13 = ATgetArgument(t, 1);
              }
              l_16 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(v_13);
          t = l_16;
          {
            ATerm l_2 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
                {
                  if(((d_16 != NULL) && (d_16 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_16 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(l_2, t);
            t = j_16;
            {
              ATerm m_2 (ATerm t)
              {
                t = not_null(d_16);
                return(t);
              }
              t = symbols2pp_entries_1_0(m_2, t);
            }
          }
        }
      else
        {
          t = t_13;
          {
            ATerm q_16 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                j_16 = ATgetArgument(t, 0);
                k_16 = ATgetArgument(t, 1);
                l_16 = ATgetArgument(t, 2);
                p_16 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_14)), k_16), (ATerm) ATinsert(ATinsert(ATempty, term_y_13), (ATerm) ATmakeAppl(sym_lit_1, j_16)));
            t = concat_0_0(t);
            q_16 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, q_16, l_16, p_16);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 = NULL;
            ATerm g_14 = t;
            if((PushChoice() == 0))
              {
                ATerm r_16 = NULL;
                r_16 = t;
                t = term_h_14;
                t = get_options_0_0(t);
                t = oncetd_1_0(n_2, t);
                t = r_16;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_14;
              }
            s_4 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, s_4), (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue))));
            t = s_4;
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  ATerm t_16 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_2, t);
        t = p_89(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = Cons_2_0(_id, t_16, t);
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_16 = NULL,b_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_16 = ATgetFirst((ATermList) t);
      b_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm m_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_16;
          ;
          LocalPopChoice(n_14);
        }
      else
        {
          t = m_14;
          t = b_17;
          t = last_0_0(t);
        }
    }
  else
    {
      t = b_17;
      t = last_0_0(t);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm k_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_14 = ATgetFirst((ATermList) t);
      k_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_17;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,j_17 = NULL;
  g_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_17 = ATgetFirst((ATermList) t);
      {
        ATerm p_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_17;
  t = q_97(t);
  t = g_17;
  t = last_0_0(t);
  t = q_97(t);
  t = g_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_14 = ATgetFirst((ATermList) t);
      j_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_17;
  t = at_last_1_0(p_2, t);
  return(t);
}
ATerm sort_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  o_17 = t;
  if(match_cons(t, sym_sort_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_17);
  l_17 = t;
  t = m_17;
  t = p_72(t);
  n_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, n_17), l_17);
  return(t);
}
ATerm lit_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,x_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym_lit_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_17);
  r_17 = t;
  t = s_17;
  t = f_72(t);
  t_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, t_17), r_17);
  return(t);
}
ATerm cons_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,h_18 = NULL;
  h_18 = t;
  if(match_cons(t, sym_cons_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_18);
  b_18 = t;
  t = c_18;
  t = t_72(t);
  d_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, d_18), b_18);
  return(t);
}
ATerm foldr_3_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_94(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm n_18 = NULL,o_18 = NULL,r_18 = NULL,s_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_18 = ATgetFirst((ATermList) t);
            o_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_18;
        t = t_94(t);
        r_18 = t;
        t = o_18;
        t = foldr_3_0(r_94, s_94, t_94, t);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_18, s_18);
        t = s_94(t);
      }
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,f_5 = NULL;
      ATerm s_2 (ATerm t)
      {
        t = not_null(f_5);
        return(t);
      }
      if(match_cons(t, sym__2))
        {
          if(((e_5 != NULL) && (e_5 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_5 = ATgetArgument(t, 0);
          if(((f_5 != NULL) && (f_5 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(e_5);
      t = at_end_1_0(s_2, t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
        ATerm k_5 = NULL,l_5 = NULL;
        k_5 = t;
        t = SSL_explode_term(k_5);
        if(match_cons(t, sym__2))
          {
            ATerm w_14 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_14) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            l_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_5;
        t = concat_0_0(t);
      }
    }
  return(t);
}
ATerm collect_p__1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm c_19 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL;
        t = a_110(t);
        w_18 = t;
        t = (ATerm) ATinsert(ATempty, w_18);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        {
          ATerm y_4 = NULL,z_4 = NULL;
          y_4 = t;
          t = SSL_explode_term(y_4);
          if(match_cons(t, sym__2))
            {
              ATerm z_14 = ATgetArgument(t, 0);
              z_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_4;
          t = foldr_3_0(q_2, r_2, c_19, t);
        }
      }
    return(t);
  }
  t = c_19(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm e_19 = NULL;
  if(match_cons(t, sym_context_free_syntax_1))
    {
      e_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_19;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = cons_1_0(v_2, t);
          ;
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          {
            ATerm e_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = lit_1_0(z_2, t);
                ;
                LocalPopChoice(f_15);
              }
            else
              {
                t = e_15;
                t = sort_1_0(b_3, t);
              }
          }
        }
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL;
  m_5 = t;
  t = SSL_explode_string(m_5);
  t = unquote_chars_1_0(y_2, t);
  n_5 = t;
  t = SSL_implode_string(n_5);
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm p_5 = NULL,q_5 = NULL;
  p_5 = t;
  t = SSL_explode_string(p_5);
  t = unquote_chars_1_0(a_3, t);
  q_5 = t;
  t = SSL_implode_string(q_5);
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL;
  s_5 = t;
  t = SSL_explode_string(s_5);
  t = unquote_chars_1_0(c_3, t);
  t_5 = t;
  t = SSL_implode_string(t_5);
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm g_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_15;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arg_1_0(f_3, t);
          ;
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
          {
            ATerm t_15 = t;
            int u_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = selector_2_0(g_3, _id, t);
                ;
                LocalPopChoice(u_15);
              }
            else
              {
                t = t_15;
                t = S_1_0(j_3, t);
              }
          }
        }
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm f_19 = NULL;
  f_19 = t;
  t = SSL_int_to_string(f_19);
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_19 = NULL;
  g_19 = t;
  t = SSL_int_to_string(g_19);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,y_5 = NULL;
  v_5 = t;
  t = SSL_explode_string(v_5);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_15, y_5);
  t = quote_chars_0_0(t);
  w_5 = t;
  t = SSL_implode_string(w_5);
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  t = collect_p__1_0(t_2, t);
  t = concat_0_0(t);
  t = topdown_1_0(u_2, t);
  t = map_1_0(generate_pp_entries_0_0, t);
  t = filter_1_0(d_3, t);
  t = concat_0_0(t);
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym_PP_Table_1, d_19);
  t = topdown_1_0(e_3, t);
  return(t);
}
ATerm _2_0 (ATerm j_65 (ATerm), ATerm k_65 (ATerm), ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  n_19 = t;
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_19);
  i_19 = t;
  t = j_19;
  t = j_65(t);
  l_19 = t;
  t = k_19;
  t = k_65(t);
  m_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_19, m_19), i_19);
  return(t);
}
ATerm oncetd_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm q_19 (ATerm t)
  {
    ATerm c_16 = t;
    int e_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_84(t);
        ;
        LocalPopChoice(e_16);
      }
    else
      {
        t = c_16;
        t = SRTS_one(q_19, t);
      }
    return(t);
  }
  t = q_19(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm k_3 (ATerm t)
{
  if(!(match_cons(t, sym_Strict_0)))
    _fail(t);
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm f_16 = t;
  int g_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_16;
      t = get_options_0_0(t);
      t = oncetd_1_0(k_3, t);
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = SSL_exit((ATerm) ATmakeInt(1));
      t = (ATerm) ATinsert(ATempty, term_i_16);
      ;
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_m_16);
    }
  return(t);
}
ATerm InId_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_16) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_19);
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            u_19 = ATgetFirst((ATermList) s_16);
            {
              ATerm u_16 = (ATerm) ATgetNext((ATermList) s_16);
              if(((ATgetType(u_16) != AT_LIST) || !(ATisEmpty(u_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_19;
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_110(t);
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = w_16;
        t = type_failure_0_0(t);
      }
    t = u_19;
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_5 = NULL,a_6 = NULL;
      t = _2_0(l_3, _id, t);
      if(match_cons(t, sym__2))
        {
          ATerm c_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) c_17) != ATmakeSymbol("out-type", 0, ATtrue)))
            _fail(t);
          z_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_x_4;
      t = i_0(t);
      a_6 = t;
      t = SSL_mkterm(a_6, (ATerm) ATinsert(ATempty, z_5));
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      t = _2_0(m_3, _id, t);
      t = InId_1_0(h_0, t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  t = term_x_4;
  t = whoami_0_0(t);
  y_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), y_19), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = x_19;
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_19, term_d_17);
  t = open_stream_0_0(t);
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_20, a_20);
  t = d_101(t);
  t = fclose_0_0(t);
  t = a_20;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = fetch_1_0(s_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = WriteToFile_1_0(t_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_17 = ATgetArgument(t, 0);
      if(match_cons(e_17, sym_Stream_1))
        {
          e_20 = ATgetArgument(e_17, 0);
        }
      else
        _fail(t);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(e_20, f_20);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_20);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = WriteToFile_1_0(w_3, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(match_cons(f_17, sym_Stream_1))
        {
          h_20 = ATgetArgument(f_17, 0);
        }
      else
        _fail(t);
      i_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(h_20, i_20);
  j_20 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), j_20);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_20);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL;
  c_20 = t;
  {
    ATerm n_3 (ATerm t)
    {
      ATerm i_17 = t;
      int p_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((d_20 != NULL) && (d_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_3, t);
          ;
          LocalPopChoice(p_17);
        }
      else
        {
          t = i_17;
          t = term_q_17;
          if(((d_20 != NULL) && (d_20 != t)))
            _fail(t);
          else
            d_20 = t;
        }
      return(t);
    }
    t = _2_0(n_3, _id, t);
    t = c_20;
    {
      ATerm p_3 (ATerm t)
      {
        ATerm c_6 = NULL;
        c_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), c_6);
        return(t);
      }
      t = _2_0(_id, p_3, t);
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(q_3, r_3, t);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = _2_0(_id, v_3, t);
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
ATerm apply_strategy_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  l_20 = t;
  t = dtime_0_0(t);
  t = l_20;
  t = f_104(t);
  m_20 = t;
  t = dtime_0_0(t);
  n_20 = t;
  t = m_20;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_20), (ATerm) ATmakeAppl(sym_Runtime_1, n_20)), p_20);
  return(t);
}
ATerm d_21 (ATerm x_20, ATerm t)
{
  t = SSL_fclose(x_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  b_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_21 = ATgetArgument(t, 0);
      {
        ATerm w_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_21);
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = w_17;
            t = d_21(b_21, t);
          }
      }
    }
  else
    {
      t = d_21(b_21, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  t = SSL_stdin_stream();
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_21 = NULL;
  t = SSL_stdout_stream();
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_21 = NULL;
  t = SSL_stderr_stream();
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_21);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm o_21 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_21;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  t = SSL_is_string(s_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      ATerm a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,v_6 = NULL;
        u_6 = t;
        t = SSL_explode_term(u_6);
        if(match_cons(t, sym__2))
          {
            ATerm g_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_18 = ATgetArgument(t, 1);
              if(((ATgetType(i_18) == AT_LIST) && !(ATisEmpty(i_18))))
                {
                  v_6 = ATgetFirst((ATermList) i_18);
                  {
                    ATerm j_18 = (ATerm) ATgetNext((ATermList) i_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = v_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = v_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = v_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
              t = _2_0(x_3, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_21 = ATgetArgument(t, 0);
                  m_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(l_21, m_21);
              n_21 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, n_21);
              ;
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              {
                ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
                t = _2_0(y_3, _id, t);
                if(match_cons(t, sym__2))
                  {
                    p_21 = ATgetArgument(t, 0);
                    q_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(p_21, q_21);
                r_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, r_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  ATerm m_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_21 = NULL;
      x_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_21, term_q_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = m_18;
      {
        ATerm w_6 = NULL;
        w_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = w_6;
        _fail(t);
      }
    }
  t_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(v_21);
  u_21 = t;
  t = t_21;
  t = fclose_0_0(t);
  t = u_21;
  return(t);
}
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  ATerm c_22 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_88, _id, t);
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = Cons_2_0(_id, c_22, t);
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = v_18;
      {
        ATerm f_22 = NULL,g_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_22 = ATgetFirst((ATermList) t);
            g_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_22;
        {
          ATerm c_4 (ATerm t)
          {
            t = g_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm m_22 (ATerm t)
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_22, t);
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_89(t);
      }
    return(t);
  }
  t = m_22(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm p_22 = NULL;
  p_22 = t;
  t = SSL_explode_string(p_22);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_explode_string(q_22);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_22 = NULL;
  t = _2_0(f_4, g_4, t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL,t_22 = NULL;
        if(match_cons(t, sym__2))
          {
            s_22 = ATgetArgument(t, 0);
            t_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_22;
        {
          ATerm i_4 (ATerm t)
          {
            t = t_22;
            return(t);
          }
          t = at_end_1_0(i_4, t);
        }
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        {
          ATerm b_7 = NULL,c_7 = NULL;
          b_7 = t;
          t = SSL_explode_term(b_7);
          if(match_cons(t, sym__2))
            {
              ATerm h_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              c_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_7;
          t = concat_0_0(t);
        }
      }
    o_22 = t;
    t = SSL_implode_string(o_22);
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_23 = NULL;
      d_23 = t;
      t = SSL_is_string(d_23);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = r_19;
      {
        ATerm w_19 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_4, t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = w_19;
            {
              ATerm h_23 = NULL,k_23 = NULL,m_23 = NULL;
              h_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_23 = ATgetArgument(t, 0);
                  t = k_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_23 = ATgetArgument(t, 0);
                      t = k_23;
                      {
                        ATerm r_20 = t;
                        int s_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_23);
                            {
                              ATerm t_20 = t;
                              int u_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_8 = NULL;
                                  t = eval_config_0_0(t);
                                  a_8 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_23, a_8);
                                  t = a_8;
                                  ;
                                  LocalPopChoice(u_20);
                                }
                              else
                                {
                                  t = t_20;
                                }
                            }
                            ;
                            LocalPopChoice(s_20);
                          }
                        else
                          {
                            t = r_20;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_23), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = k_23;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_23 = NULL,u_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_23 = ATgetArgument(t, 0);
                          m_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_23;
                      t = eval_config_0_0(t);
                      s_23 = t;
                      t = m_23;
                      t = eval_config_0_0(t);
                      u_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_23, u_23);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = NULL,c_24 = NULL;
      a_24 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL;
            t = eval_config_0_0(t);
            k_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_8);
            t = k_8;
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
          }
        c_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_24, term_c_21);
        t = geq_0_0(t);
        t = a_24;
        t = o_102(t);
      }
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  if(match_string(t, "-k"))
    {
      t = e_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_24;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  f_24 = t;
  t = SSL_string_to_int(f_24);
  g_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_24);
  t = f_24;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_h_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  if(match_string(t, "-S"))
    {
      t = i_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_24;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_j_21;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  j_24 = t;
  t = SSL_string_to_int(j_24);
  k_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), k_24);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_24);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_y_21;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, q_4, t);
      ;
      LocalPopChoice(b_22);
    }
  else
    {
      t = a_22;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, t_4, u_4, t);
            ;
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            t = Option_3_0(v_4, w_4, a_5, t);
          }
      }
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm m_24 = NULL;
  m_24 = t;
  if(match_string(t, "-o"))
    {
      t = m_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_24;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), n_24);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_24);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL;
  if(match_cons(t, sym__3))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
      s_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_24, r_24);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            ATerm l_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_24, r_24);
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATempty;
      }
    t_24 = t;
    t = SSL_table_put(q_24, r_24, (ATerm) ATinsert(CheckATermList(t_24), s_24));
    t = (ATerm) ATmakeAppl(sym__3, q_24, r_24, s_24);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_25 = NULL;
      t = term_x_4;
      t = g_0(t);
      f_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_7, term_y_7, f_25);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_25 = ATgetFirst((ATermList) t);
          c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_25 = ATgetFirst((ATermList) t);
          e_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_25;
      t = d_0(t);
      t = d_25;
      t = f_0(t);
      j_25 = t;
      t = (ATerm) ATinsert(CheckATermList(e_25), j_25);
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  if(match_string(t, "-i"))
    {
      t = l_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_25;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), m_25);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_25);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_n_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, h_5, i_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_4;
  t = whoami_0_0(t);
  n_25 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), n_25));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL;
        t = eval_config_0_0(t);
        r_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_8);
        t = r_8;
        ;
        LocalPopChoice(u_22);
      }
    else
      {
        t = r_22;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_94 (ATerm), ATerm q_94 (ATerm), ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_94(t);
      ;
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm q_25 = NULL,r_25 = NULL,u_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_25 = ATgetFirst((ATermList) t);
            r_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_25;
        t = foldr_2_0(p_94, q_94, t);
        u_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_25, u_25);
        t = q_94(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      x_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(x_8, y_8);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = SSL_addr(x_8, y_8);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_25 = NULL,s_8 = NULL,u_8 = NULL;
  t = times_0_0(t);
  s_8 = t;
  t = SSL_explode_term(s_8);
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  t = foldr_2_0(j_5, o_5, t);
  x_25 = t;
  t = SSL_TicksToSeconds(x_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  if(match_cons(t, sym__2))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_26;
        if((j_26 != t))
          {
            _fail(t);
          }
        t = i_26;
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = i_26;
        {
          ATerm c_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_26, k_26);
              ;
              LocalPopChoice(e_23);
            }
          else
            {
              t = c_23;
              t = SSL_gtr(j_26, k_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_26, k_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_26 = NULL,p_26 = NULL;
      n_26 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_9 = NULL;
            t = eval_config_0_0(t);
            o_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_9);
            t = o_9;
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
          }
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_26, term_b_9);
        t = geq_0_0(t);
        t = n_26;
        t = n_102(t);
      }
      ;
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  t = run_time_0_0(t);
  r_26 = t;
  t = term_x_4;
  t = whoami_0_0(t);
  s_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_26), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_26));
  t = (ATerm) ATmakeAppl(sym__2, term_l_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_23), r_26), term_n_23), s_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = r_23;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_9 = NULL;
            t = eval_config_0_0(t);
            s_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), s_9);
            t = s_9;
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
          }
      }
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = fetch_1_0(u_5, t);
    }
  t = d_105(t);
  return(t);
}
ATerm map_1_0 (ATerm n_88 (ATerm), ATerm t)
{
  ATerm t_26 (ATerm t)
  {
    ATerm z_23 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = z_23;
        t = Cons_2_0(n_88, t_26, t);
      }
    return(t);
  }
  t = t_26(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_26 = ATgetFirst((ATermList) t);
      w_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_27 = NULL,b_27 = NULL;
        t = w_26;
        t = b_0(t);
        a_27 = t;
        t = v_26;
        t = a_0(t);
        b_27 = t;
        t = w_26;
        {
          ATerm x_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_27), b_27);
            return(t);
          }
          t = reverse_acc_2_0(a_0, x_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_4;
      t = b_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm v_78 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL;
  f_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_27);
  c_27 = t;
  t = d_27;
  t = v_78(t);
  e_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_27), c_27);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_27), term_d_24);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm o_24 = t;
        int p_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 = NULL;
            t = eval_config_0_0(t);
            y_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_9);
            t = y_9;
            ;
            LocalPopChoice(p_24);
          }
        else
          {
            t = o_24;
          }
      }
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = h_24;
      t = fetch_1_0(b_6, t);
    }
  t = term_u_24;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, d_6, t);
  t = map_1_0(e_6, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_27);
  j_27 = t;
  t = k_27;
  t = w_78(t);
  l_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_27), j_27);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  q_27 = t;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_27;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_24 = ATgetFirst((ATermList) t);
                ATerm y_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_27;
          }
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATinsert(ATempty, q_27);
      }
    r_27 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), r_27);
    t = q_27;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = eval_config_0_0(t);
        c_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_10);
        t = c_10;
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_i_25;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_25;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_6, g_6, h_6, t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      t = Option_3_0(i_6, j_6, n_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,a_29 = NULL,b_29 = NULL,g_29 = NULL,j_29 = NULL;
  j_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_28 = ATgetFirst((ATermList) t);
      a_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_29);
  c_28 = t;
  t = d_28;
  t = y_69(t);
  b_29 = t;
  t = a_29;
  t = z_69(t);
  g_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(g_29), b_29), c_28);
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_29);
  t = (ATerm) ATmakeAppl(sym_Program_1, z_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_25;
        t = g_107(t);
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
      }
    t = y_29;
    {
      ATerm p_6 (ATerm t)
      {
        ATerm z_25 = t;
        int a_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
                t = g_107(t);
                t = Cons_2_0(_id, p_6, t);
              }
            ;
            LocalPopChoice(a_26);
          }
        else
          {
            t = z_25;
            {
              ATerm b_30 = NULL,e_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_30 = ATgetFirst((ATermList) t);
                  e_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_30), (ATerm) ATmakeAppl(sym_Undefined_1, b_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_6, p_6, t);
    }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm o_30 = NULL;
  o_30 = t;
  if(match_string(t, "--help"))
    {
      t = o_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_30;
        }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_26;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = l_30;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_107(t);
          ;
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          {
            ATerm h_26 = t;
            int l_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_6, s_6, t_6, t);
                ;
                LocalPopChoice(l_26);
              }
            else
              {
                t = h_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm m_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_30 = NULL;
          t_30 = t;
          {
            ATerm q_26 = t;
            int u_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_30;
                {
                  ATerm x_26 = t;
                  int y_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm z_26 = t;
                        int g_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm k_14 = NULL;
                            t = eval_config_0_0(t);
                            k_14 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), k_14);
                            t = k_14;
                            ;
                            LocalPopChoice(g_27);
                          }
                        else
                          {
                            t = z_26;
                          }
                      }
                      ;
                      LocalPopChoice(y_26);
                    }
                  else
                    {
                      t = x_26;
                      t = fetch_1_0(x_6, t);
                    }
                  t = t_30;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(u_26);
              }
            else
              {
                t = q_26;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm h_27 = t;
                  int n_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_15 = NULL;
                      t = eval_config_0_0(t);
                      h_15 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), h_15);
                      t = h_15;
                      ;
                      LocalPopChoice(n_27);
                    }
                  else
                    {
                      t = h_27;
                    }
                  t = t_30;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(o_26);
        }
      else
        {
          t = m_26;
          {
            ATerm o_27 = t;
            int p_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_6 (ATerm t)
                {
                  ATerm z_6 (ATerm t)
                  {
                    if(((m_30 != NULL) && (m_30 != t)))
                      _fail(t);
                    else
                      m_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_6, t);
                  return(t);
                }
                t = fetch_1_0(y_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_l_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_30)), term_s_27));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(p_27);
              }
            else
              {
                t = o_27;
              }
          }
        }
      n_30 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = n_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm w_30 = NULL;
  t = parse_options_1_0(f_105, t);
  w_30 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_30);
  t = w_30;
  t = h_105(t);
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_105, t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = if_verbose2_1_0(i_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_x_27;
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  x_30 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_16 = NULL;
        t = eval_config_0_0(t);
        n_16 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_16);
        t = n_16;
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
      }
    y_30 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, y_30));
    t = x_30;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm b_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_104(t);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = b_28;
        {
          ATerm f_28 = t;
          int g_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_28);
            }
          else
            {
              t = f_28;
              {
                ATerm h_28 = t;
                int i_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_28);
                  }
                else
                  {
                    t = h_28;
                    {
                      ATerm j_28 = t;
                      int k_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_7, g_7, h_7, t);
                          ;
                          LocalPopChoice(k_28);
                        }
                      else
                        {
                          t = j_28;
                          {
                            ATerm l_28 = t;
                            int m_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_28);
                              }
                            else
                              {
                                t = l_28;
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
  ATerm e_7 (ATerm t)
  {
    ATerm z_30 = NULL,a_31 = NULL,v_16 = NULL;
    z_30 = t;
    {
      ATerm n_28 = t;
      int o_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_31 != NULL) && (a_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_7, t);
          ;
          LocalPopChoice(o_28);
        }
      else
        {
          t = n_28;
          t = term_p_28;
          a_31 = t;
        }
      t = not_null(a_31);
      t = ReadFromFile_0_0(t);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_30, v_16);
      t = apply_strategy_1_0(o_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_7, q_104, d_7, e_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm io_idwrap_3_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t)
{
  ATerm k_7 (ATerm t)
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_31 = NULL,h_31 = NULL,k_31 = NULL;
        if(match_cons(t, sym__2))
          {
            g_31 = ATgetArgument(t, 0);
            h_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, term_t_28, h_31);
        t = i_110(t);
        k_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_31, k_31);
        ;
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
      }
    t = j_110(t);
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_31 = NULL,n_31 = NULL,q_31 = NULL;
          if(match_cons(t, sym__2))
            {
              m_31 = ATgetArgument(t, 0);
              n_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, term_w_28, n_31);
          t = i_110(t);
          q_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_31, q_31);
          ;
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
        }
    }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_110(t);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = Option_3_0(m_7, n_7, o_7, t);
      }
    return(t);
  }
  t = iowrap_3_0(k_7, l_7, default_usage_0_0, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = InOutId_2_0(s_7, t_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = _2_0(_id, ppgenerate_0_0, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = Option_3_0(u_7, v_7, w_7, t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_idwrap_3_0(p_7, q_7, r_7, t);
  return(t);
}

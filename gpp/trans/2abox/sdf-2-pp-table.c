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
ATerm term_d_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_n_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_g_26;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_l_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_o_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_r_18;
ATerm term_n_17;
ATerm term_j_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_w_15;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_11;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_c_5;
void init_constant_terms (void)
{
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Arg_1, term_w_9);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_SOpt_2, term_q_12, term_r_12);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_lit_1, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_lit_1, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__3, term_a_25, term_b_25, term_c_5);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm S_1_0 (ATerm a_64 (ATerm), ATerm);
ATerm selector_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm Arg_1_0 (ATerm x_63 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm l_76 (ATerm), ATerm);
ATerm filter_1_0 (ATerm h_89 (ATerm), ATerm);
ATerm flat_alt_0_0 (ATerm);
ATerm argument_list_0_0 (ATerm);
ATerm symbol2abox_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm iter_star_1_0 (ATerm a_66 (ATerm), ATerm);
ATerm iter_1_0 (ATerm z_65 (ATerm), ATerm);
ATerm pair_0_0 (ATerm);
ATerm iter_star_sep_2_0 (ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm);
ATerm iter_sep_2_0 (ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm);
ATerm make_0_0 (ATerm);
ATerm NonTerminal_0_0 (ATerm);
ATerm number_node_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm number_nonterminals_0_0 (ATerm);
ATerm symbols2pp_entries_1_0 (ATerm k_74 (ATerm), ATerm);
ATerm generate_pp_entries_0_0 (ATerm);
ATerm at_last_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm f_91 (ATerm), ATerm);
ATerm sort_1_0 (ATerm e_66 (ATerm), ATerm);
ATerm lit_1_0 (ATerm u_65 (ATerm), ATerm);
ATerm cons_1_0 (ATerm i_66 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm);
ATerm collect_p__1_0 (ATerm p_103 (ATerm), ATerm);
ATerm ppgenerate_0_0 (ATerm);
ATerm _2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm get_options_0_0 (ATerm);
ATerm type_failure_0_0 (ATerm);
ATerm InId_1_0 (ATerm a_104 (ATerm), ATerm);
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_97 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm w_95 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm k_72 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm l_72 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm v_100 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm);
ATerm io_idwrap_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Option_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_0 = NULL;
      t = term_c_5;
      t = l_0(t);
      r_0 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_8, term_e_8, r_0);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_0 = ATgetFirst((ATermList) t);
          p_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_0;
      t = j_0(t);
      t = term_c_5;
      t = k_0(t);
      u_0 = t;
      t = (ATerm) ATinsert(CheckATermList(p_0), u_0);
    }
  return(t);
}
ATerm S_1_0 (ATerm a_64 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL,b_1 = NULL;
  b_1 = t;
  if(match_cons(t, sym_S_1))
    {
      z_0 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_1);
  y_0 = t;
  t = z_0;
  t = a_64(t);
  a_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, a_1), y_0);
  return(t);
}
ATerm selector_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,n_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym_selector_2))
    {
      h_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_1);
  g_1 = t;
  t = h_1;
  t = v_63(t);
  p_1 = t;
  t = n_1;
  t = w_63(t);
  q_1 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, p_1, q_1), g_1);
  return(t);
}
ATerm Arg_1_0 (ATerm x_63 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,f_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_Arg_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_2);
  y_1 = t;
  t = z_1;
  t = x_63(t);
  a_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, a_2), y_1);
  return(t);
}
ATerm topdown_1_0 (ATerm l_76 (ATerm), ATerm t)
{
  t = l_76(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1_0(l_76, t);
      return(t);
    }
    t = SRTS_all(b_0, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm h_89 (ATerm), ATerm t)
{
  ATerm f_8 = t;
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
      t = f_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              t = filter_1_0(h_89, t);
              return(t);
            }
            t = Cons_2_0(h_89, f_0, t);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm c_3 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_8 = ATgetFirst((ATermList) t);
                  c_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_3;
              t = filter_1_0(h_89, t);
            }
          }
      }
    }
  return(t);
}
ATerm flat_alt_0_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL,b_4 = NULL;
  if(match_cons(t, sym_alt_2))
    {
      w_3 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_4;
  if(match_cons(t, sym_alt_2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 = NULL;
            t = (ATerm) ATmakeAppl(sym_alt_2, t_3, u_3);
            t = flat_alt_0_0(t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), w_3);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            t = (ATerm) ATinsert(ATinsert(ATempty, b_4), w_3);
          }
      }
    }
  else
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, b_4), w_3);
    }
  return(t);
}
ATerm argument_list_0_0 (ATerm t)
{
  ATerm m_0 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_3 = NULL;
        o_3 = t;
        {
          ATerm q_8 = t;
          if((PushChoice() == 0))
            {
              ATerm q_0 = NULL;
              q_0 = t;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_0;
                }
              else
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm r_8 = ATgetFirst((ATermList) t);
                      ATerm t_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_0;
                }
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_8;
            }
          t = (ATerm) ATinsert(ATempty, o_3);
        }
        ;
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
      }
    return(t);
  }
  t = map_1_0(m_0, t);
  t = concat_0_0(t);
  return(t);
}
ATerm symbol2abox_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,c_8 = NULL,d_8 = NULL,f_1 = NULL,i_1 = NULL;
  f_1 = t;
  t = term_c_5;
  t = l_74(t);
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_1, f_1);
  {
    ATerm z_10 (ATerm t)
    {
      ATerm b_11 (ATerm r_9, ATerm s_9, ATerm t_9, ATerm u_9, ATerm v_9, ATerm t)
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
        t = SSL_explode_term(u_9);
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            b_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, t_9, a_10)));
        {
          ATerm u_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm w_8 = ATgetArgument(t, 0);
                  ATerm x_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_9;
              {
                ATerm n_0 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, t_9, a_10));
                  return(t);
                }
                t = at_end_1_0(n_0, t);
              }
              ;
              LocalPopChoice(v_8);
            }
          else
            {
              t = u_8;
              {
                ATerm u_1 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, t_9, a_10))));
                if(match_cons(t, sym__2))
                  {
                    ATerm y_8 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    u_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_1;
                t = concat_0_0(t);
              }
            }
          c_10 = t;
          t = b_10;
          t = argument_list_0_0(t);
          t = number_nonterminals_0_0(t);
          d_10 = t;
          t = make_0_0(t);
          e_10 = t;
          t = d_10;
          {
            ATerm s_0 (ATerm t)
            {
              ATerm j_10 = NULL;
              j_10 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_9, c_10), j_10);
              t = z_10(t);
              return(t);
            }
            t = map_1_0(s_0, t);
            t = concat_0_0(t);
            f_10 = t;
            t = (ATerm) ATinsert(CheckATermList(f_10), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, r_9, c_10), e_10));
          }
        }
        return(t);
      }
      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
      o_10 = t;
      if(match_cons(t, sym__2))
        {
          p_10 = ATgetArgument(t, 0);
          s_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_10;
      {
        ATerm z_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_lit_1))
              {
                ATerm b_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(a_9);
            t = (ATerm) ATempty;
          }
        else
          {
            t = z_8;
            if(match_cons(t, sym__2))
              {
                t_10 = ATgetArgument(t, 0);
                u_10 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_10;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_sort_1))
                    {
                      ATerm e_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_9);
                  t = p_10;
                  if(match_cons(t, sym__2))
                    {
                      q_10 = ATgetArgument(t, 0);
                      r_10 = ATgetArgument(t, 1);
                      {
                        ATerm f_9 = t;
                        int h_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = (ATerm) ATempty;
                            ;
                            LocalPopChoice(h_9);
                          }
                        else
                          {
                            t = f_9;
                            t = b_11(q_10, r_10, t_10, u_10, o_10, t);
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
                  t = c_9;
                  {
                    ATerm i_9 = t;
                    int j_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_char_class_1))
                          {
                            ATerm k_9 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_9);
                        t = p_10;
                        if(match_cons(t, sym__2))
                          {
                            q_10 = ATgetArgument(t, 0);
                            r_10 = ATgetArgument(t, 1);
                            {
                              ATerm l_9 = t;
                              int m_9 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATempty;
                                  ;
                                  LocalPopChoice(m_9);
                                }
                              else
                                {
                                  t = l_9;
                                  t = b_11(q_10, r_10, t_10, u_10, o_10, t);
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
                        t = i_9;
                        if(match_cons(t, sym_alt_2))
                          {
                            n_10 = ATgetArgument(t, 0);
                            k_10 = ATgetArgument(t, 1);
                            t = p_10;
                            if(match_cons(t, sym__2))
                              {
                                q_10 = ATgetArgument(t, 0);
                                r_10 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = k_10;
                            if(match_cons(t, sym_alt_2))
                              {
                                l_10 = ATgetArgument(t, 0);
                                m_10 = ATgetArgument(t, 1);
                                {
                                  ATerm n_9 = t;
                                  int o_9 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm l_2 = NULL,m_2 = NULL;
                                      t = q_10;
                                      if(((u_7 != NULL) && (u_7 != t)))
                                        _fail(t);
                                      else
                                        u_7 = t;
                                      t = r_10;
                                      if(((c_8 != NULL) && (c_8 != t)))
                                        _fail(t);
                                      else
                                        c_8 = t;
                                      t = t_10;
                                      if(((d_8 != NULL) && (d_8 != t)))
                                        _fail(t);
                                      else
                                        d_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_alt_2, n_10, (ATerm) ATmakeAppl(sym_alt_2, l_10, m_10));
                                      t = flat_alt_0_0(t);
                                      l_2 = t;
                                      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), l_2);
                                      m_2 = t;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_10, r_10), (ATerm) ATmakeAppl(sym__2, t_10, m_2));
                                      t = z_10(t);
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          ATerm v_0 (ATerm t)
                                          {
                                            ATerm p_9 = t;
                                            int q_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Arg_1_0(_id, t);
                                                t = term_x_9;
                                                ;
                                                LocalPopChoice(q_9);
                                              }
                                            else
                                              {
                                                t = p_9;
                                              }
                                            return(t);
                                          }
                                          t = topdown_1_0(v_0, t);
                                          return(t);
                                        }
                                        t = Cons_2_0(t_0, _id, t);
                                      }
                                      ;
                                      LocalPopChoice(o_9);
                                    }
                                  else
                                    {
                                      t = n_9;
                                      t = b_11(q_10, r_10, t_10, u_10, o_10, t);
                                    }
                                }
                              }
                            else
                              {
                                t = b_11(q_10, r_10, t_10, u_10, o_10, t);
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_bracket_symbol_1))
                              {
                                n_10 = ATgetArgument(t, 0);
                                t = p_10;
                                if(match_cons(t, sym__2))
                                  {
                                    q_10 = ATgetArgument(t, 0);
                                    r_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                {
                                  ATerm y_9 = t;
                                  int z_9 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_10, r_10), (ATerm) ATmakeAppl(sym__2, t_10, n_10));
                                      t = z_10(t);
                                      ;
                                      LocalPopChoice(z_9);
                                    }
                                  else
                                    {
                                      t = y_9;
                                      t = b_11(q_10, r_10, t_10, u_10, o_10, t);
                                    }
                                }
                              }
                            else
                              {
                                t = p_10;
                                if(match_cons(t, sym__2))
                                  {
                                    q_10 = ATgetArgument(t, 0);
                                    r_10 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = b_11(q_10, r_10, t_10, u_10, o_10, t);
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
    t = z_10(t);
  }
  return(t);
}
ATerm iter_star_1_0 (ATerm a_66 (ATerm), ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  f_11 = t;
  if(match_cons(t, sym_iter_star_1))
    {
      d_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_11);
  c_11 = t;
  t = d_11;
  t = a_66(t);
  e_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, e_11), c_11);
  return(t);
}
ATerm iter_1_0 (ATerm z_65 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  l_11 = t;
  if(match_cons(t, sym_iter_1))
    {
      j_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_11);
  i_11 = t;
  t = j_11;
  t = z_65(t);
  k_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, k_11), i_11);
  return(t);
}
ATerm pair_0_0 (ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,v_11 = NULL,z_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_11 = ATgetFirst((ATermList) t);
            s_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_11;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_11;
        t = pair_0_0(t);
        z_11 = t;
        t = (ATerm) ATinsert(CheckATermList(z_11), (ATerm) ATmakeAppl(sym__2, r_11, t_11));
      }
    }
  return(t);
}
ATerm iter_star_sep_2_0 (ATerm x_65 (ATerm), ATerm y_65 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  g_12 = t;
  if(match_cons(t, sym_iter_star_sep_2))
    {
      c_12 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_12);
  b_12 = t;
  t = c_12;
  t = x_65(t);
  e_12 = t;
  t = d_12;
  t = y_65(t);
  f_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, e_12, f_12), b_12);
  return(t);
}
ATerm iter_sep_2_0 (ATerm v_65 (ATerm), ATerm w_65 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  o_12 = t;
  if(match_cons(t, sym_iter_sep_2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_12);
  j_12 = t;
  t = k_12;
  t = v_65(t);
  m_12 = t;
  t = l_12;
  t = w_65(t);
  n_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, m_12, n_12), j_12);
  return(t);
}
ATerm make_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  ATerm i_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL;
      ATerm w_0 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2_0(_id, w_0, t);
      {
        ATerm x_0 (ATerm t)
        {
          ATerm e_13 = NULL;
          ATerm d_1 (ATerm t)
          {
            ATerm w_10 = t;
            int x_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1_0(_id, t);
                ;
                LocalPopChoice(x_10);
              }
            else
              {
                t = w_10;
                {
                  ATerm y_10 = t;
                  int a_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1_0(_id, t);
                      ;
                      LocalPopChoice(a_11);
                    }
                  else
                    {
                      t = y_10;
                      {
                        ATerm g_11 = t;
                        int h_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2_0(_id, _id, t);
                            ;
                            LocalPopChoice(h_11);
                          }
                        else
                          {
                            t = g_11;
                            t = iter_star_sep_2_0(_id, _id, t);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2_0(_id, d_1, t);
          if(match_cons(t, sym_lit_1))
            {
              e_13 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_FBOX_2, term_m_11, (ATerm) ATmakeAppl(sym_S_1, e_13));
            }
          else
            {
              if(match_cons(t, sym__2))
                {
                  e_13 = ATgetArgument(t, 0);
                  {
                    ATerm n_11 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Arg_1, e_13);
            }
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            ATerm j_13 = NULL;
            t = lit_1_0(_id, t);
            if(match_cons(t, sym_lit_1))
              {
                j_13 = ATgetArgument(t, 0);
                t = (ATerm) ATmakeAppl(sym_FBOX_2, term_m_11, (ATerm) ATmakeAppl(sym_S_1, j_13));
              }
            else
              {
                if(match_cons(t, sym__2))
                  {
                    j_13 = ATgetArgument(t, 0);
                    {
                      ATerm o_11 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Arg_1, j_13);
              }
            return(t);
          }
          t = map_1_0(e_1, t);
          return(t);
        }
        t = Cons_2_0(x_0, c_1, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_12 = ATgetFirst((ATermList) t);
            x_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_11 = t;
          if((PushChoice() == 0))
            {
              ATerm j_1 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(_id, j_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_11;
            }
          t = x_12;
          {
            ATerm k_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, k_1, t);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, y_12), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, c_13)));
          }
        }
      }
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = i_10;
      {
        ATerm q_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, l_1, t);
            {
              ATerm m_1 (ATerm t)
              {
                ATerm o_13 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    o_13 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_m_11, (ATerm) ATmakeAppl(sym_S_1, o_13));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        o_13 = ATgetArgument(t, 0);
                        {
                          ATerm x_11 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, o_13);
                  }
                if(((b_13 != NULL) && (b_13 != t)))
                  _fail(t);
                else
                  b_13 = t;
                return(t);
              }
              ATerm o_1 (ATerm t)
              {
                ATerm y_11 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_11;
                  }
                {
                  ATerm s_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2_0(_id, s_1, t);
                  if(((z_12 != NULL) && (z_12 != t)))
                    _fail(t);
                  else
                    z_12 = t;
                }
                return(t);
              }
              t = Cons_2_0(m_1, o_1, t);
              t = not_null(z_12);
              t = pair_0_0(t);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm s_13 = NULL,t_13 = NULL;
                  ATerm v_1 (ATerm t)
                  {
                    ATerm x_13 = NULL;
                    t = lit_1_0(_id, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        x_13 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_m_11, (ATerm) ATmakeAppl(sym_S_1, x_13));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            x_13 = ATgetArgument(t, 0);
                            {
                              ATerm a_12 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, x_13);
                      }
                    if(((s_13 != NULL) && (s_13 != t)))
                      _fail(t);
                    else
                      s_13 = t;
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    ATerm g_14 = NULL;
                    ATerm x_1 (ATerm t)
                    {
                      ATerm h_12 = t;
                      int i_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = iter_1_0(_id, t);
                          ;
                          LocalPopChoice(i_12);
                        }
                      else
                        {
                          t = h_12;
                          t = iter_star_1_0(_id, t);
                        }
                      return(t);
                    }
                    t = _2_0(_id, x_1, t);
                    if(match_cons(t, sym_lit_1))
                      {
                        g_14 = ATgetArgument(t, 0);
                        t = (ATerm) ATmakeAppl(sym_FBOX_2, term_m_11, (ATerm) ATmakeAppl(sym_S_1, g_14));
                      }
                    else
                      {
                        if(match_cons(t, sym__2))
                          {
                            g_14 = ATgetArgument(t, 0);
                            {
                              ATerm p_12 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_Arg_1, g_14);
                      }
                    if(((t_13 != NULL) && (t_13 != t)))
                      _fail(t);
                    else
                      t_13 = t;
                    return(t);
                  }
                  t = _2_0(v_1, w_1, t);
                  t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_s_12), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_13)), not_null(s_13)));
                  return(t);
                }
                t = map_1_0(t_1, t);
                a_13 = t;
                t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_13)), a_13));
              }
            }
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = q_11;
            {
              ATerm b_2 (ATerm t)
              {
                ATerm m_14 = NULL;
                if(match_cons(t, sym_lit_1))
                  {
                    m_14 = ATgetArgument(t, 0);
                    t = (ATerm) ATmakeAppl(sym_FBOX_2, term_m_11, (ATerm) ATmakeAppl(sym_S_1, m_14));
                  }
                else
                  {
                    if(match_cons(t, sym__2))
                      {
                        m_14 = ATgetArgument(t, 0);
                        {
                          ATerm t_12 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Arg_1, m_14);
                  }
                return(t);
              }
              t = map_1_0(b_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0_0 (ATerm t)
{
  ATerm v_12 = t;
  if((PushChoice() == 0))
    {
      t = lit_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_12;
    }
  return(t);
}
ATerm number_node_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm n_2 = NULL;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, n_2);
  {
    ATerm k_15 (ATerm t)
    {
      ATerm w_12 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_2 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = _2_0(_id, c_2, t);
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(d_13);
        }
      else
        {
          t = w_12;
          {
            ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
            e_15 = t;
            if(match_cons(t, sym__2))
              {
                f_15 = ATgetArgument(t, 0);
                g_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_15;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_15 = ATgetFirst((ATermList) t);
                i_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm f_13 = t;
              int g_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_2 = NULL,a_3 = NULL;
                  t = h_15;
                  t = o_74(t);
                  t = (ATerm) ATmakeAppl(sym__2, f_15, term_w_9);
                  {
                    ATerm h_13 = t;
                    int i_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(f_15, (ATerm) ATmakeInt(1));
                        ;
                        LocalPopChoice(i_13);
                      }
                    else
                      {
                        t = h_13;
                        t = SSL_addr(f_15, (ATerm) ATmakeInt(1));
                      }
                    y_2 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_2, i_15);
                    t = k_15(t);
                    a_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(a_3), (ATerm) ATmakeAppl(sym__2, f_15, h_15));
                  }
                  ;
                  LocalPopChoice(g_13);
                }
              else
                {
                  t = f_13;
                  {
                    ATerm j_15 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, f_15, i_15);
                    t = k_15(t);
                    j_15 = t;
                    t = (ATerm) ATinsert(CheckATermList(j_15), h_15);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = k_15(t);
  }
  return(t);
}
ATerm number_nonterminals_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL;
        if(match_cons(t, sym_label_2))
          {
            ATerm m_13 = ATgetArgument(t, 0);
            p_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_15;
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
      }
    return(t);
  }
  t = map_1_0(d_2, t);
  t = number_node_1_0(NonTerminal_0_0, t);
  return(t);
}
ATerm symbols2pp_entries_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  t = number_nonterminals_0_0(t);
  r_15 = t;
  t = make_0_0(t);
  s_15 = t;
  t = r_15;
  {
    ATerm e_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        ATerm v_15 = NULL;
        t = term_c_5;
        t = k_74(t);
        v_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_15, (ATerm) ATempty);
        return(t);
      }
      t = symbol2abox_1_0(g_2, t);
      return(t);
    }
    t = map_1_0(e_2, t);
    t = concat_0_0(t);
    t_15 = t;
    t = term_c_5;
    t = k_74(t);
    u_15 = t;
    t = (ATerm) ATinsert(CheckATermList(t_15), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, u_15), s_15));
  }
  return(t);
}
ATerm generate_pp_entries_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm n_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_prod_3))
            {
              d_16 = ATgetArgument(t, 0);
              {
                ATerm v_13 = ATgetArgument(t, 1);
              }
              i_16 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          LocalPopChoice(r_13);
          t = i_16;
          {
            ATerm h_2 (ATerm t)
            {
              if(match_cons(t, sym_cons_1))
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
            t = oncetd_1_0(h_2, t);
            t = d_16;
            {
              ATerm i_2 (ATerm t)
              {
                t = not_null(x_15);
                return(t);
              }
              t = symbols2pp_entries_1_0(i_2, t);
            }
          }
        }
      else
        {
          t = q_13;
          {
            ATerm k_16 = NULL;
            if(match_cons(t, sym_prod_fun_4))
              {
                d_16 = ATgetArgument(t, 0);
                h_16 = ATgetArgument(t, 1);
                i_16 = ATgetArgument(t, 2);
                j_16 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_14)), h_16), (ATerm) ATinsert(ATinsert(ATempty, term_y_13), (ATerm) ATmakeAppl(sym_lit_1, d_16)));
            t = concat_0_0(t);
            k_16 = t;
            t = (ATerm) ATmakeAppl(sym_prod_3, k_16, i_16, j_16);
            t = generate_pp_entries_0_0(t);
          }
        }
      ;
      LocalPopChoice(p_13);
    }
  else
    {
      t = n_13;
      {
        ATerm b_14 = t;
        int c_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 = NULL;
            ATerm d_14 = t;
            if((PushChoice() == 0))
              {
                ATerm l_16 = NULL;
                l_16 = t;
                t = term_e_14;
                t = get_options_0_0(t);
                {
                  ATerm j_2 (ATerm t)
                  {
                    if(!(match_cons(t, sym_Silent_0)))
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1_0(j_2, t);
                  t = l_16;
                }
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_14;
              }
            b_3 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_3), (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue))));
            t = b_3;
            ;
            LocalPopChoice(c_14);
          }
        else
          {
            t = b_14;
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm n_16 (ATerm t)
  {
    ATerm f_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, k_2, t);
        t = e_83(t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = f_14;
        t = Cons_2_0(_id, n_16, t);
      }
    return(t);
  }
  t = n_16(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_16 = ATgetFirst((ATermList) t);
      v_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_16;
          ;
          LocalPopChoice(j_14);
        }
      else
        {
          t = i_14;
          t = v_16;
          t = last_0_0(t);
        }
    }
  else
    {
      t = v_16;
      t = last_0_0(t);
    }
  return(t);
}
ATerm unquote_chars_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_17 = ATgetFirst((ATermList) t);
      {
        ATerm k_14 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_17;
  t = f_91(t);
  t = b_17;
  t = last_0_0(t);
  t = f_91(t);
  t = b_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_14 = ATgetFirst((ATermList) t);
      d_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_17;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm e_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_14 = ATgetFirst((ATermList) t);
          e_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_17;
      return(t);
    }
    t = at_last_1_0(o_2, t);
  }
  return(t);
}
ATerm sort_1_0 (ATerm e_66 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym_sort_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_17);
  f_17 = t;
  t = g_17;
  t = e_66(t);
  h_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, h_17), f_17);
  return(t);
}
ATerm lit_1_0 (ATerm u_65 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,p_17 = NULL,q_17 = NULL,s_17 = NULL;
  s_17 = t;
  if(match_cons(t, sym_lit_1))
    {
      p_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_17);
  l_17 = t;
  t = p_17;
  t = u_65(t);
  q_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, q_17), l_17);
  return(t);
}
ATerm cons_1_0 (ATerm i_66 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,z_17 = NULL,a_18 = NULL,c_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_cons_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_18);
  v_17 = t;
  t = z_17;
  t = i_66(t);
  a_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, a_18), v_17);
  return(t);
}
ATerm foldr_3_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_88(t);
      ;
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm h_18 = NULL,i_18 = NULL,l_18 = NULL,m_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_18 = ATgetFirst((ATermList) t);
            i_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_18;
        t = i_88(t);
        l_18 = t;
        t = i_18;
        t = foldr_3_0(g_88, h_88, i_88, t);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_18, m_18);
        t = h_88(t);
      }
    }
  return(t);
}
ATerm collect_p__1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm w_18 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL;
        t = p_103(t);
        q_18 = t;
        t = (ATerm) ATinsert(ATempty, q_18);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm g_3 = NULL,i_3 = NULL;
          g_3 = t;
          t = SSL_explode_term(g_3);
          if(match_cons(t, sym__2))
            {
              ATerm s_14 = ATgetArgument(t, 0);
              i_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_3;
          {
            ATerm p_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm t_14 = t;
              int u_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_3 = NULL,y_3 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      x_3 = ATgetArgument(t, 0);
                      y_3 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_3;
                  {
                    ATerm r_2 (ATerm t)
                    {
                      t = y_3;
                      return(t);
                    }
                    t = at_end_1_0(r_2, t);
                  }
                  ;
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = t_14;
                  {
                    ATerm h_4 = NULL,i_4 = NULL;
                    h_4 = t;
                    t = SSL_explode_term(h_4);
                    if(match_cons(t, sym__2))
                      {
                        ATerm v_14 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) v_14) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        i_4 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = i_4;
                    t = concat_0_0(t);
                  }
                }
              return(t);
            }
            t = foldr_3_0(p_2, q_2, w_18, t);
          }
        }
      }
    return(t);
  }
  t = w_18(t);
  return(t);
}
ATerm ppgenerate_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  ATerm s_2 (ATerm t)
  {
    ATerm z_18 = NULL;
    if(match_cons(t, sym_context_free_syntax_1))
      {
        z_18 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = z_18;
    return(t);
  }
  t = collect_p__1_0(s_2, t);
  t = concat_0_0(t);
  {
    ATerm t_2 (ATerm t)
    {
      ATerm w_14 = t;
      int x_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_14 = t;
          int z_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_2 (ATerm t)
              {
                ATerm m_4 = NULL,n_4 = NULL;
                m_4 = t;
                t = SSL_explode_string(m_4);
                {
                  ATerm v_2 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                      _fail(t);
                    return(t);
                  }
                  t = unquote_chars_1_0(v_2, t);
                  n_4 = t;
                  t = SSL_implode_string(n_4);
                }
                return(t);
              }
              t = cons_1_0(u_2, t);
              ;
              LocalPopChoice(z_14);
            }
          else
            {
              t = y_14;
              {
                ATerm a_15 = t;
                int b_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_2 (ATerm t)
                    {
                      ATerm r_4 = NULL,t_4 = NULL;
                      r_4 = t;
                      t = SSL_explode_string(r_4);
                      {
                        ATerm x_2 (ATerm t)
                        {
                          if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                            _fail(t);
                          return(t);
                        }
                        t = unquote_chars_1_0(x_2, t);
                        t_4 = t;
                        t = SSL_implode_string(t_4);
                      }
                      return(t);
                    }
                    t = lit_1_0(w_2, t);
                    ;
                    LocalPopChoice(b_15);
                  }
                else
                  {
                    t = a_15;
                    {
                      ATerm z_2 (ATerm t)
                      {
                        ATerm v_4 = NULL,w_4 = NULL;
                        v_4 = t;
                        t = SSL_explode_string(v_4);
                        {
                          ATerm d_3 (ATerm t)
                          {
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
                              _fail(t);
                            return(t);
                          }
                          t = unquote_chars_1_0(d_3, t);
                          w_4 = t;
                          t = SSL_implode_string(w_4);
                        }
                        return(t);
                      }
                      t = sort_1_0(z_2, t);
                    }
                  }
              }
            }
          ;
          LocalPopChoice(x_14);
        }
      else
        {
          t = w_14;
        }
      return(t);
    }
    t = topdown_1_0(t_2, t);
    t = map_1_0(generate_pp_entries_0_0, t);
    {
      ATerm e_3 (ATerm t)
      {
        ATerm c_15 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_15;
          }
        return(t);
      }
      t = filter_1_0(e_3, t);
      t = concat_0_0(t);
      y_18 = t;
      t = (ATerm) ATmakeAppl(sym_PP_Table_1, y_18);
      {
        ATerm f_3 (ATerm t)
        {
          ATerm d_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_15 = t;
              int n_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_3 (ATerm t)
                  {
                    ATerm a_19 = NULL;
                    a_19 = t;
                    t = SSL_int_to_string(a_19);
                    return(t);
                  }
                  t = Arg_1_0(h_3, t);
                  ;
                  LocalPopChoice(n_15);
                }
              else
                {
                  t = m_15;
                  {
                    ATerm o_15 = t;
                    int q_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_3 (ATerm t)
                        {
                          ATerm b_19 = NULL;
                          b_19 = t;
                          t = SSL_int_to_string(b_19);
                          return(t);
                        }
                        t = selector_2_0(j_3, _id, t);
                        ;
                        LocalPopChoice(q_15);
                      }
                    else
                      {
                        t = o_15;
                        {
                          ATerm k_3 (ATerm t)
                          {
                            ATerm z_4 = NULL,a_5 = NULL,d_5 = NULL;
                            z_4 = t;
                            t = SSL_explode_string(z_4);
                            d_5 = t;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_5), term_w_15), (ATerm) ATinsert(ATempty, term_w_15));
                            {
                              ATerm y_15 = t;
                              int z_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym__2))
                                    {
                                      ATerm a_16 = ATgetArgument(t, 0);
                                      ATerm b_16 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATinsert(CheckATermList(d_5), term_w_15);
                                  {
                                    ATerm l_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_w_15);
                                      return(t);
                                    }
                                    t = at_end_1_0(l_3, t);
                                  }
                                  ;
                                  LocalPopChoice(z_15);
                                }
                              else
                                {
                                  t = y_15;
                                  {
                                    ATerm k_5 = NULL;
                                    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_5), (ATerm) ATmakeInt(34)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))));
                                    if(match_cons(t, sym__2))
                                      {
                                        ATerm c_16 = ATgetArgument(t, 0);
                                        if((ATgetSymbol((ATermAppl) c_16) != ATmakeSymbol("", 0, ATtrue)))
                                          _fail(t);
                                        k_5 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = k_5;
                                    t = concat_0_0(t);
                                  }
                                }
                              a_5 = t;
                              t = SSL_implode_string(a_5);
                            }
                            return(t);
                          }
                          t = S_1_0(k_3, t);
                        }
                      }
                  }
                }
              ;
              LocalPopChoice(l_15);
            }
          else
            {
              t = d_15;
            }
          return(t);
        }
        t = topdown_1_0(f_3, t);
      }
    }
  }
  return(t);
}
ATerm _2_0 (ATerm e_62 (ATerm), ATerm f_62 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_19);
  g_19 = t;
  t = h_19;
  t = e_62(t);
  j_19 = t;
  t = i_19;
  t = f_62(t);
  k_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, j_19, k_19), g_19);
  return(t);
}
ATerm oncetd_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm o_19 (ATerm t)
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_77(t);
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = SRTS_one(o_19, t);
      }
    return(t);
  }
  t = o_19(t);
  return(t);
}
ATerm get_options_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  return(t);
}
ATerm type_failure_0_0 (ATerm t)
{
  ATerm g_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_16;
      t = get_options_0_0(t);
      {
        ATerm m_3 (ATerm t)
        {
          if(!(match_cons(t, sym_Strict_0)))
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(m_3, t);
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue))));
        t = SSL_exit((ATerm) ATmakeInt(1));
        t = (ATerm) ATinsert(ATempty, term_p_16);
      }
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = g_16;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue))));
      t = (ATerm) ATinsert(ATempty, term_q_16);
    }
  return(t);
}
ATerm InId_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("in-type", 0, ATtrue)))
        _fail(t);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_19);
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            s_19 = ATgetFirst((ATermList) s_16);
            {
              ATerm t_16 = (ATerm) ATgetNext((ATermList) s_16);
              if(((ATgetType(t_16) != AT_LIST) || !(ATisEmpty(t_16))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_19;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_104(t);
        ;
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = type_failure_0_0(t);
      }
    t = s_19;
  }
  return(t);
}
ATerm InOutId_2_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 = NULL,m_5 = NULL;
      ATerm n_3 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("out-type", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      t = _2_0(n_3, _id, t);
      if(match_cons(t, sym__2))
        {
          ATerm a_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) a_17) != ATmakeSymbol("out-type", 0, ATtrue)))
            _fail(t);
          l_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = term_c_5;
      t = i_0(t);
      m_5 = t;
      t = SSL_mkterm(m_5, (ATerm) ATinsert(ATempty, l_5));
      ;
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm p_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("in-type", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = _2_0(p_3, _id, t);
        t = InId_1_0(h_0, t);
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  t = term_c_5;
  t = whoami_0_0(t);
  w_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), w_19), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = v_19;
  return(t);
}
ATerm WriteToFile_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_19, term_j_17);
  t = open_stream_0_0(t);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_19, y_19);
  t = s_94(t);
  t = fclose_0_0(t);
  t = y_19;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  a_20 = t;
  {
    ATerm q_3 (ATerm t)
    {
      ATerm k_17 = t;
      int m_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_3 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_3, t);
          ;
          LocalPopChoice(m_17);
        }
      else
        {
          t = k_17;
          t = term_n_17;
          if(((b_20 != NULL) && (b_20 != t)))
            _fail(t);
          else
            b_20 = t;
        }
      return(t);
    }
    t = _2_0(q_3, _id, t);
    t = a_20;
    {
      ATerm s_3 (ATerm t)
      {
        ATerm o_5 = NULL;
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), o_5);
        return(t);
      }
      t = _2_0(_id, s_3, t);
      {
        ATerm o_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm a_4 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(a_4, t);
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm c_4 (ATerm t)
              {
                ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm t_17 = ATgetArgument(t, 0);
                    if(match_cons(t_17, sym_Stream_1))
                      {
                        c_20 = ATgetArgument(t_17, 0);
                      }
                    else
                      _fail(t);
                    d_20 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(c_20, d_20);
                e_20 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_20);
                return(t);
              }
              t = WriteToFile_1_0(c_4, t);
              return(t);
            }
            t = _2_0(v_3, z_3, t);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = o_17;
            {
              ATerm d_4 (ATerm t)
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_17 = ATgetArgument(t, 0);
                      if(match_cons(u_17, sym_Stream_1))
                        {
                          f_20 = ATgetArgument(u_17, 0);
                        }
                      else
                        _fail(t);
                      g_20 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(f_20, g_20);
                  h_20 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), h_20);
                  i_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, i_20);
                  return(t);
                }
                t = WriteToFile_1_0(e_4, t);
                return(t);
              }
              t = _2_0(_id, d_4, t);
            }
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
ATerm apply_strategy_1_0 (ATerm u_97 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  j_20 = t;
  t = dtime_0_0(t);
  t = j_20;
  t = u_97(t);
  k_20 = t;
  t = dtime_0_0(t);
  l_20 = t;
  t = k_20;
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_20), (ATerm) ATmakeAppl(sym_Runtime_1, l_20)), n_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_21 (ATerm v_20, ATerm t)
  {
    t = SSL_fclose(v_20);
    return(t);
  }
  ATerm y_20 = NULL,z_20 = NULL;
  z_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_20 = ATgetArgument(t, 0);
      {
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_20);
            ;
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            t = b_21(z_20, t);
          }
      }
    }
  else
    {
      t = b_21(z_20, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_21 = NULL;
  t = SSL_stdin_stream();
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_21 = NULL;
  t = SSL_stdout_stream();
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_21 = NULL;
  t = SSL_stderr_stream();
  e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_21);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      ATerm b_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,a_6 = NULL;
        z_5 = t;
        t = SSL_explode_term(z_5);
        if(match_cons(t, sym__2))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_18 = ATgetArgument(t, 1);
              if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
                {
                  a_6 = ATgetFirst((ATermList) g_18);
                  {
                    ATerm j_18 = (ATerm) ATgetNext((ATermList) g_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = a_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = a_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = a_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm k_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
              ATerm f_4 (ATerm t)
              {
                ATerm m_21 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    m_21 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_21;
                return(t);
              }
              t = _2_0(f_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  j_21 = ATgetArgument(t, 0);
                  k_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(j_21, k_21);
              l_21 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, l_21);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = k_18;
              {
                ATerm n_21 = NULL,p_21 = NULL,q_21 = NULL;
                ATerm g_4 (ATerm t)
                {
                  ATerm r_21 = NULL;
                  r_21 = t;
                  t = SSL_is_string(r_21);
                  return(t);
                }
                t = _2_0(g_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_21 = ATgetArgument(t, 0);
                    p_21 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(n_21, p_21);
                q_21 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, q_21);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_21 = NULL;
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_21, term_r_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm b_6 = NULL;
        b_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = b_6;
        _fail(t);
      }
    }
  s_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(u_21);
  t_21 = t;
  t = s_21;
  t = fclose_0_0(t);
  t = t_21;
  return(t);
}
ATerm fetch_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm a_22 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_82, _id, t);
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = Cons_2_0(_id, a_22, t);
      }
    return(t);
  }
  t = a_22(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_18);
    }
  else
    {
      t = u_18;
      {
        ATerm d_22 = NULL,e_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_22 = ATgetFirst((ATermList) t);
            e_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = d_22;
        {
          ATerm k_4 (ATerm t)
          {
            t = e_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(k_4, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm k_22 (ATerm t)
  {
    ATerm x_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, k_22, t);
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = x_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_82(t);
      }
    return(t);
  }
  t = k_22(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm m_22 = NULL;
  ATerm l_4 (ATerm t)
  {
    ATerm n_22 = NULL;
    n_22 = t;
    t = SSL_explode_string(n_22);
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm o_22 = NULL;
    o_22 = t;
    t = SSL_explode_string(o_22);
    return(t);
  }
  t = _2_0(l_4, o_4, t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL,r_22 = NULL;
        if(match_cons(t, sym__2))
          {
            q_22 = ATgetArgument(t, 0);
            r_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_22;
        {
          ATerm p_4 (ATerm t)
          {
            t = r_22;
            return(t);
          }
          t = at_end_1_0(p_4, t);
        }
        ;
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        {
          ATerm g_6 = NULL,h_6 = NULL;
          g_6 = t;
          t = SSL_explode_term(g_6);
          if(match_cons(t, sym__2))
            {
              ATerm f_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              h_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_6;
          t = concat_0_0(t);
        }
      }
    m_22 = t;
    t = SSL_implode_string(m_22);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_23 = NULL;
      e_23 = t;
      t = SSL_is_string(e_23);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm p_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 (ATerm t)
            {
              ATerm u_19 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = u_19;
                }
              return(t);
            }
            t = map_1_0(q_4, t);
            ;
            LocalPopChoice(t_19);
          }
        else
          {
            t = p_19;
            {
              ATerm k_23 = NULL,m_23 = NULL,o_23 = NULL;
              k_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_23 = ATgetArgument(t, 0);
                  t = m_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_23 = ATgetArgument(t, 0);
                      t = m_23;
                      {
                        ATerm p_20 = t;
                        int q_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_23);
                            {
                              ATerm r_20 = t;
                              int s_20 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_6 = NULL;
                                  t = eval_config_0_0(t);
                                  x_6 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_23, x_6);
                                  t = x_6;
                                  ;
                                  LocalPopChoice(s_20);
                                }
                              else
                                {
                                  t = r_20;
                                }
                            }
                            ;
                            LocalPopChoice(q_20);
                          }
                        else
                          {
                            t = p_20;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_23), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = m_23;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_23 = NULL,t_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_23 = ATgetArgument(t, 0);
                          o_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_23;
                      t = eval_config_0_0(t);
                      s_23 = t;
                      t = o_23;
                      t = eval_config_0_0(t);
                      t_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_23, t_23);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_95 (ATerm), ATerm t)
{
  ATerm t_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_23 = NULL,a_24 = NULL;
      y_23 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_7 = NULL;
            t = eval_config_0_0(t);
            e_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_7);
            t = e_7;
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
          }
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_24, term_a_21);
        t = geq_0_0(t);
        t = y_23;
        t = w_95(t);
      }
      ;
      LocalPopChoice(u_20);
    }
  else
    {
      t = t_20;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm c_24 = NULL;
    c_24 = t;
    if(match_string(t, "-k"))
      {
        t = c_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = c_24;
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm d_24 = NULL,e_24 = NULL;
    d_24 = t;
    t = SSL_string_to_int(d_24);
    e_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), e_24);
    t = d_24;
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_f_21;
    return(t);
  }
  t = ArgOption_3_0(s_4, u_4, x_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_4 (ATerm t)
      {
        ATerm g_24 = NULL;
        g_24 = t;
        if(match_string(t, "-S"))
          {
            t = g_24;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = g_24;
          }
        return(t);
      }
      ATerm b_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_o_21;
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_w_21;
        return(t);
      }
      t = Option_3_0(y_4, b_5, e_5, t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              ATerm h_24 = NULL,i_24 = NULL;
              h_24 = t;
              t = SSL_string_to_int(h_24);
              i_24 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), i_24);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, h_24);
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              t = term_z_21;
              return(t);
            }
            t = ArgOption_3_0(f_5, g_5, h_5, t);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm i_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_b_22;
                return(t);
              }
              ATerm n_5 (ATerm t)
              {
                t = term_c_22;
                return(t);
              }
              t = Option_3_0(i_5, j_5, n_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm k_24 = NULL;
    k_24 = t;
    if(match_string(t, "-o"))
      {
        t = k_24;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = k_24;
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm l_24 = NULL;
    l_24 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), l_24);
    t = (ATerm) ATmakeAppl(sym_Output_1, l_24);
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_f_22;
    return(t);
  }
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm q_24 = NULL,w_24 = NULL,x_24 = NULL,u_25 = NULL;
  if(match_cons(t, sym__3))
    {
      q_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
      x_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_24, w_24);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            ATerm j_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_24, w_24);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATempty;
      }
    u_25 = t;
    t = SSL_table_put(q_24, w_24, (ATerm) ATinsert(CheckATermList(u_25), x_24));
    t = (ATerm) ATmakeAppl(sym__3, q_24, w_24, x_24);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_26 = NULL;
      t = term_c_5;
      t = g_0(t);
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_8, term_e_8, x_26);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_26 = ATgetFirst((ATermList) t);
          u_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_26 = ATgetFirst((ATermList) t);
          w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_26;
      t = d_0(t);
      t = v_26;
      t = e_0(t);
      b_27 = t;
      t = (ATerm) ATinsert(CheckATermList(w_26), b_27);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm d_27 = NULL;
    d_27 = t;
    if(match_string(t, "-i"))
      {
        t = d_27;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = d_27;
      }
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm e_27 = NULL;
    e_27 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_27);
    t = (ATerm) ATmakeAppl(sym_Input_1, e_27);
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_l_22;
    return(t);
  }
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_5;
  t = whoami_0_0(t);
  f_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_27));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm p_22 = t;
    int s_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL;
        t = eval_config_0_0(t);
        i_7 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_7);
        t = i_7;
        ;
        LocalPopChoice(s_22);
      }
    else
      {
        t = p_22;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t)
{
  ATerm t_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_88(t);
      ;
      LocalPopChoice(u_22);
    }
  else
    {
      t = t_22;
      {
        ATerm i_27 = NULL,j_27 = NULL,m_27 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_27 = ATgetFirst((ATermList) t);
            j_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_27;
        t = foldr_2_0(e_88, f_88, t);
        m_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_27, m_27);
        t = f_88(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_27 = NULL,j_7 = NULL,k_7 = NULL;
  t = times_0_0(t);
  j_7 = t;
  t = SSL_explode_term(j_7);
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7;
  {
    ATerm v_5 (ATerm t)
    {
      t = term_i_21;
      return(t);
    }
    ATerm w_5 (ATerm t)
    {
      ATerm n_7 = NULL,o_7 = NULL;
      if(match_cons(t, sym__2))
        {
          n_7 = ATgetArgument(t, 0);
          o_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(n_7, o_7);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = SSL_addr(n_7, o_7);
          }
      }
      return(t);
    }
    t = foldr_2_0(v_5, w_5, t);
    p_27 = t;
    t = SSL_TicksToSeconds(p_27);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_28;
        if((b_28 != t))
          {
            _fail(t);
          }
        t = a_28;
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = a_28;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_28, c_28);
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              t = SSL_gtr(b_28, c_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_28, c_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL,h_28 = NULL;
      f_28 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL;
            t = eval_config_0_0(t);
            z_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_7);
            t = z_7;
            ;
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
          }
        h_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_28, term_w_9);
        t = geq_0_0(t);
        t = f_28;
        t = v_95(t);
      }
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm j_28 = NULL,k_28 = NULL;
    t = run_time_0_0(t);
    j_28 = t;
    t = term_c_5;
    t = whoami_0_0(t);
    k_28 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_28), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_28));
    t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_23), j_28), term_i_23), k_28));
    return(t);
  }
  t = if_verbose1_1_0(x_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm l_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_8 = NULL;
            t = eval_config_0_0(t);
            g_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), g_8);
            t = g_8;
            ;
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
          }
      }
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = l_23;
      {
        ATerm y_5 (ATerm t)
        {
          ATerm r_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = r_23;
              {
                ATerm v_23 = t;
                int w_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(w_23);
                  }
                else
                  {
                    t = v_23;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(y_5, t);
      }
    }
  t = s_98(t);
  return(t);
}
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm l_28 (ATerm t)
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        t = Cons_2_0(c_82, l_28, t);
      }
    return(t);
  }
  t = l_28(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_28 = NULL,t_28 = NULL;
        t = o_28;
        t = c_0(t);
        s_28 = t;
        t = n_28;
        t = a_0(t);
        t_28 = t;
        t = o_28;
        {
          ATerm c_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(s_28), t_28);
            return(t);
          }
          t = reverse_acc_2_0(a_0, c_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_5;
      t = c_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  x_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_28);
  u_28 = t;
  t = v_28;
  t = k_72(t);
  w_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, w_28), u_28);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm j_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_8 = NULL;
            t = eval_config_0_0(t);
            n_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_8);
            t = n_8;
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = j_24;
          }
      }
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = b_24;
      {
        ATerm d_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(d_6, t);
      }
    }
  t = term_n_24;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm e_6 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, e_6, t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm a_29 = NULL;
        a_29 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_29), term_o_24);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(f_6, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,g_29 = NULL,h_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_29);
  b_29 = t;
  t = c_29;
  t = l_72(t);
  g_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_29), b_29);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  {
    ATerm p_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_24 = ATgetFirst((ATermList) t);
                ATerm t_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_29;
          }
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATinsert(ATempty, l_29);
      }
    m_29 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), m_29);
    t = l_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL;
        t = eval_config_0_0(t);
        s_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), s_8);
        t = s_8;
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_c_25;
        return(t);
      }
      ATerm k_6 (ATerm t)
      {
        t = term_d_25;
        return(t);
      }
      t = Option_3_0(i_6, j_6, k_6, t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm l_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_e_25;
          return(t);
        }
        ATerm n_6 (ATerm t)
        {
          t = term_f_25;
          return(t);
        }
        t = Option_3_0(l_6, m_6, n_6, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_63 (ATerm), ATerm o_63 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,w_29 = NULL,x_29 = NULL;
  x_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_29);
  q_29 = t;
  t = r_29;
  t = n_63(t);
  t_29 = t;
  t = s_29;
  t = o_63(t);
  w_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(w_29), t_29), q_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_100 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_25;
        t = v_100(t);
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
      }
    t = b_30;
    {
      ATerm o_6 (ATerm t)
      {
        ATerm c_30 = NULL;
        c_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_30);
        t = (ATerm) ATmakeAppl(sym_Program_1, c_30);
        return(t);
      }
      ATerm p_6 (ATerm t)
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_25 = t;
            int m_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_25);
              }
            else
              {
                t = l_25;
                t = v_100(t);
                t = Cons_2_0(_id, p_6, t);
              }
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            {
              ATerm e_30 = NULL,f_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_30 = ATgetFirst((ATermList) t);
                  f_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(f_30), (ATerm) ATmakeAppl(sym_Undefined_1, e_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_6, p_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = o_30;
  {
    ATerm q_6 (ATerm t)
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_100(t);
          ;
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_6 (ATerm t)
                {
                  ATerm r_30 = NULL;
                  r_30 = t;
                  if(match_string(t, "--help"))
                    {
                      t = r_30;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = r_30;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = r_30;
                        }
                    }
                  return(t);
                }
                ATerm s_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_r_25;
                  return(t);
                }
                ATerm t_6 (ATerm t)
                {
                  t = term_s_25;
                  return(t);
                }
                t = Option_3_0(r_6, s_6, t_6, t);
                ;
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_6, t);
    {
      ATerm t_25 = t;
      int v_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_30 = NULL;
          w_30 = t;
          {
            ATerm w_25 = t;
            int x_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = w_30;
                {
                  ATerm y_25 = t;
                  int z_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm a_26 = t;
                        int b_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_9 = NULL;
                            t = eval_config_0_0(t);
                            g_9 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), g_9);
                            t = g_9;
                            ;
                            LocalPopChoice(b_26);
                          }
                        else
                          {
                            t = a_26;
                          }
                      }
                      ;
                      LocalPopChoice(z_25);
                    }
                  else
                    {
                      t = y_25;
                      {
                        ATerm u_6 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(u_6, t);
                      }
                    }
                  t = w_30;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(x_25);
              }
            else
              {
                t = w_25;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm c_26 = t;
                  int d_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_11 = NULL;
                      t = eval_config_0_0(t);
                      u_11 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), u_11);
                      t = u_11;
                      ;
                      LocalPopChoice(d_26);
                    }
                  else
                    {
                      t = c_26;
                    }
                  t = w_30;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(v_25);
        }
      else
        {
          t = t_25;
          {
            ATerm e_26 = t;
            int f_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_6 (ATerm t)
                {
                  ATerm w_6 (ATerm t)
                  {
                    if(((p_30 != NULL) && (p_30 != t)))
                      _fail(t);
                    else
                      p_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_6, t);
                  return(t);
                }
                t = fetch_1_0(v_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_h_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), term_g_26));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(f_26);
              }
            else
              {
                t = e_26;
              }
          }
        }
      q_30 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = q_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm w_98 (ATerm), ATerm x_98 (ATerm), ATerm t)
{
  ATerm z_30 = NULL;
  t = parse_options_1_0(u_98, t);
  z_30 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_30);
  t = z_30;
  t = w_98(t);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_98, t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        {
          ATerm j_26 = t;
          int k_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(k_26);
            }
          else
            {
              t = j_26;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_98(t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        {
          ATerm n_26 = t;
          int o_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_26);
            }
          else
            {
              t = n_26;
              {
                ATerm p_26 = t;
                int q_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_26);
                  }
                else
                  {
                    t = p_26;
                    {
                      ATerm r_26 = t;
                      int s_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_7 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm c_7 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_y_26;
                            return(t);
                          }
                          ATerm d_7 (ATerm t)
                          {
                            t = term_z_26;
                            return(t);
                          }
                          t = Option_3_0(b_7, c_7, d_7, t);
                          ;
                          LocalPopChoice(s_26);
                        }
                      else
                        {
                          t = r_26;
                          {
                            ATerm a_27 = t;
                            int c_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_27);
                              }
                            else
                              {
                                t = a_27;
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
  ATerm z_6 (ATerm t)
  {
    ATerm f_7 (ATerm t)
    {
      ATerm a_31 = NULL,b_31 = NULL;
      a_31 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_12 = NULL;
            t = eval_config_0_0(t);
            u_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_12);
            t = u_12;
            ;
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
          }
        b_31 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_31));
        t = a_31;
      }
      return(t);
    }
    t = if_verbose2_1_0(f_7, t);
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    ATerm c_31 = NULL,d_31 = NULL,u_13 = NULL;
    c_31 = t;
    {
      ATerm k_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_7 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((d_31 != NULL) && (d_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_7, t);
          ;
          LocalPopChoice(l_27);
        }
      else
        {
          t = k_27;
          t = term_n_27;
          d_31 = t;
        }
      t = not_null(d_31);
      t = ReadFromFile_0_0(t);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_31, u_13);
      t = apply_strategy_1_0(d_98, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(y_6, f_98, z_6, a_7, t);
  return(t);
}
ATerm io_idwrap_3_0 (ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm o_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_31 = NULL,k_31 = NULL,n_31 = NULL;
        if(match_cons(t, sym__2))
          {
            j_31 = ATgetArgument(t, 0);
            k_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, term_r_27, k_31);
        t = x_103(t);
        n_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_31, n_31);
        ;
        LocalPopChoice(q_27);
      }
    else
      {
        t = o_27;
      }
    t = y_103(t);
    {
      ATerm s_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_31 = NULL,q_31 = NULL,t_31 = NULL;
          if(match_cons(t, sym__2))
            {
              p_31 = ATgetArgument(t, 0);
              q_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, term_u_27, q_31);
          t = x_103(t);
          t_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_31, t_31);
          ;
          LocalPopChoice(t_27);
        }
      else
        {
          t = s_27;
        }
    }
    return(t);
  }
  ATerm l_7 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_103(t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        {
          ATerm m_7 (ATerm t)
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--strict", 0, ATtrue)))
              _fail(t);
            return(t);
          }
          ATerm p_7 (ATerm t)
          {
            t = term_o_16;
            return(t);
          }
          ATerm q_7 (ATerm t)
          {
            t = term_x_27;
            return(t);
          }
          t = Option_3_0(m_7, p_7, q_7, t);
        }
      }
    return(t);
  }
  t = iowrap_3_0(h_7, l_7, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm v_7 (ATerm t)
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("\"sdf-2.1\"", 0, ATtrue)))
        _fail(t);
      return(t);
    }
    ATerm w_7 (ATerm t)
    {
      t = term_y_27;
      return(t);
    }
    t = InOutId_2_0(v_7, w_7, t);
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = _2_0(_id, ppgenerate_0_0, t);
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    ATerm x_7 (ATerm t)
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-v", 0, ATtrue)))
        _fail(t);
      return(t);
    }
    ATerm y_7 (ATerm t)
    {
      t = term_z_27;
      return(t);
    }
    ATerm a_8 (ATerm t)
    {
      t = term_d_28;
      return(t);
    }
    t = Option_3_0(x_7, y_7, a_8, t);
    return(t);
  }
  t = io_idwrap_3_0(r_7, s_7, t_7, t);
  return(t);
}

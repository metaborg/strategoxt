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
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_layout_0;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_left_0;
Symbol sym_assoc_0;
Symbol sym_char_class_1;
Symbol sym_range_2;
Symbol sym_ATerm_1;
Symbol sym_lit_1;
Symbol sym_list_1;
Symbol sym_lit_1;
Symbol sym_assoc_1;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_char_class_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
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
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
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
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_v_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_u_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_r_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_u_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_k_6;
ATerm term_j_6;
void init_constant_terms (void)
{
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_range_2, term_k_6, term_m_6);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_lex_1, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_cf_1, term_q_6);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_assoc_1, term_y_6);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_opt_1, term_q_6);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_cf_1, term_u_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_6);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__3, term_k_17, term_l_17, term_w_7);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm unflatten_lexical_0_0 (ATerm);
ATerm MkLayoutCharacter_0_0 (ATerm);
ATerm MkLayoutConsList_0_0 (ATerm);
ATerm unflatten_layout_0_0 (ATerm);
ATerm MkCfConsList_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm MkCfConsList_2_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm);
ATerm MkLexConsList_1_0 (ATerm f_77 (ATerm), ATerm);
ATerm unflatten_list_0_0 (ATerm);
ATerm list_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm list_some_1_0 (ATerm y_84 (ATerm), ATerm);
ATerm unflatten_literal_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm ExplodeAsFix2ME_0_0 (ATerm);
ATerm _2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm f_97 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm h_100 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm r_96 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm);
ATerm crush_2_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_98 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm f_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm t_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm f_102 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm i_63 (ATerm), ATerm j_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_103 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm h_103 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm explode_asfix2me_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm unflatten_lexical_0_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm e_2 = ATgetArgument(t, 0);
      if(match_cons(e_2, sym_prod_3))
        {
          ATerm r_5 = ATgetArgument(e_2, 0);
          if(((ATgetType(r_5) == AT_LIST) && !(ATisEmpty(r_5))))
            {
              ATerm u_5 = ATgetFirst((ATermList) r_5);
              if(match_cons(u_5, sym_lex_1))
                {
                  v_0 = ATgetArgument(u_5, 0);
                }
              else
                _fail(t);
              {
                ATerm v_5 = (ATerm) ATgetNext((ATermList) r_5);
                if(((ATgetType(v_5) != AT_LIST) || !(ATisEmpty(v_5))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm s_5 = ATgetArgument(e_2, 1);
            if(match_cons(s_5, sym_cf_1))
              {
                if((v_0 != ATgetArgument(s_5, 0)))
                  {
                    _fail(ATgetArgument(s_5, 0));
                  }
              }
            else
              _fail(t);
          }
          {
            ATerm t_5 = ATgetArgument(e_2, 2);
            if(!(match_cons(t_5, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm p_5 = ATgetArgument(t, 1);
        if(((ATgetType(p_5) == AT_LIST) && !(ATisEmpty(p_5))))
          {
            ATerm w_5 = ATgetFirst((ATermList) p_5);
            if(match_cons(w_5, sym_appl_2))
              {
                ATerm y_5 = ATgetArgument(w_5, 0);
                if(match_cons(y_5, sym_prod_3))
                  {
                    w_0 = ATgetArgument(y_5, 0);
                    {
                      ATerm z_5 = ATgetArgument(y_5, 1);
                      if(match_cons(z_5, sym_iter_star_1))
                        {
                          ATerm d_6 = ATgetArgument(z_5, 0);
                          if(match_cons(d_6, sym_char_class_1))
                            {
                              ATerm e_6 = ATgetArgument(d_6, 0);
                              if(((ATgetType(e_6) == AT_LIST) && !(ATisEmpty(e_6))))
                                {
                                  ATerm f_6 = ATgetFirst((ATermList) e_6);
                                  if(match_cons(f_6, sym_range_2))
                                    {
                                      ATerm h_6 = ATgetArgument(f_6, 0);
                                      if(((ATgetType(h_6) != AT_INT) || (ATgetInt((ATermInt) h_6) != 0)))
                                        _fail(t);
                                      {
                                        ATerm i_6 = ATgetArgument(f_6, 1);
                                        if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 255)))
                                          _fail(t);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm g_6 = (ATerm) ATgetNext((ATermList) e_6);
                                    if(((ATgetType(g_6) != AT_LIST) || !(ATisEmpty(g_6))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                    {
                      ATerm a_6 = ATgetArgument(y_5, 2);
                      if(!(match_cons(a_6, sym_no_attrs_0)))
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                x_0 = ATgetArgument(w_5, 1);
              }
            else
              _fail(t);
            {
              ATerm x_5 = (ATerm) ATgetNext((ATermList) p_5);
              if(((ATgetType(x_5) != AT_LIST) || !(ATisEmpty(x_5))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, v_0)), (ATerm)ATmakeAppl(sym_cf_1, v_0), term_j_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_n_6))))), (ATerm)ATmakeAppl(sym_lex_1, v_0), term_j_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, w_0, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_n_6)))), term_j_6), x_0))));
  return(t);
}
ATerm MkLayoutCharacter_0_0 (ATerm t)
{
  ATerm b_1 = NULL;
  b_1 = t;
  {
    ATerm o_6 = t;
    int p_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_is_int(b_1);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_r_6), term_s_6, term_j_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_n_6))), term_r_6, term_j_6), (ATerm) ATinsert(ATempty, b_1))));
        ;
        LocalPopChoice(p_6);
      }
    else
      {
        t = o_6;
        {
          ATerm t_6 = t;
          int u_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_1 = NULL,h_1 = NULL,i_1 = NULL;
              if(match_cons(t, sym_appl_2))
                {
                  e_1 = ATgetArgument(t, 0);
                  {
                    ATerm v_6 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = e_1;
              if(match_cons(t, sym_prod_3))
                {
                  ATerm w_6 = ATgetArgument(t, 0);
                  h_1 = ATgetArgument(t, 1);
                  {
                    ATerm x_6 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = h_1;
              if(match_cons(t, sym_lex_1))
                {
                  i_1 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_r_6), term_s_6, term_j_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, i_1)), term_r_6, term_j_6), (ATerm) ATinsert(ATempty, b_1))));
                }
              else
                {
                  if(match_cons(t, sym_lit_1))
                    {
                      i_1 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_r_6), term_s_6, term_j_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, i_1)), term_r_6, term_j_6), (ATerm) ATinsert(ATempty, b_1))));
                }
              ;
              LocalPopChoice(u_6);
            }
          else
            {
              t = t_6;
            }
        }
      }
  }
  return(t);
}
ATerm MkLayoutConsList_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_1 = ATgetFirst((ATermList) t);
      p_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_1;
      t = MkLayoutCharacter_0_0(t);
    }
  else
    {
      ATerm b_2 = NULL,d_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_1 = ATgetFirst((ATermList) t);
          r_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_1;
      t = MkLayoutCharacter_0_0(t);
      b_2 = t;
      t = q_1;
      t = MkLayoutCharacter_0_0(t);
      d_2 = t;
      t = (ATerm) ATinsert(CheckATermList(r_1), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_s_6), term_s_6), term_s_6, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_z_6))), (ATerm) ATinsert(ATinsert(ATempty, d_2), b_2)));
      t = MkLayoutConsList_0_0(t);
    }
  return(t);
}
ATerm unflatten_layout_0_0 (ATerm t)
{
  ATerm f_2 = NULL,h_2 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      ATerm a_7 = ATgetArgument(t, 0);
      if(match_cons(a_7, sym_prod_3))
        {
          ATerm b_7 = ATgetArgument(a_7, 0);
          if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
            {
              ATerm f_7 = ATgetFirst((ATermList) b_7);
              if(match_cons(f_7, sym_cf_1))
                {
                  ATerm h_7 = ATgetArgument(f_7, 0);
                  if(!(match_cons(h_7, sym_layout_0)))
                    _fail(t);
                }
              else
                _fail(t);
              {
                ATerm g_7 = (ATerm) ATgetNext((ATermList) b_7);
                if(((ATgetType(g_7) != AT_LIST) || !(ATisEmpty(g_7))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm c_7 = ATgetArgument(a_7, 1);
            if(match_cons(c_7, sym_cf_1))
              {
                ATerm s_7 = ATgetArgument(c_7, 0);
                if(match_cons(s_7, sym_opt_1))
                  {
                    ATerm t_7 = ATgetArgument(s_7, 0);
                    if(!(match_cons(t_7, sym_layout_0)))
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
          {
            ATerm d_7 = ATgetArgument(a_7, 2);
            if(!(match_cons(d_7, sym_no_attrs_0)))
              _fail(t);
          }
        }
      else
        _fail(t);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_2;
  t = MkLayoutConsList_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_s_6), term_v_7, term_j_6), (ATerm) ATinsert(ATempty, h_2));
  return(t);
}
ATerm MkCfConsList_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm u_2 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm v_2 = NULL,a_3 = NULL;
    u_2 = t;
    t = term_w_7;
    t = a_77(t);
    v_2 = t;
    t = term_w_7;
    t = a_77(t);
    a_3 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, v_2)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, a_3)), term_j_6), (ATerm) ATinsert(ATempty, u_2));
    return(t);
  }
  t = Cons_2_0(c_0, _id, t);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,o_3 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_3 = ATgetFirst((ATermList) t);
          i_3 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = h_3;
        }
      else
        {
          ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_3 = ATgetFirst((ATermList) t);
              l_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_3;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_3 = ATgetFirst((ATermList) t);
              o_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = term_w_7;
          t = a_77(t);
          d_4 = t;
          t = term_w_7;
          t = a_77(t);
          e_4 = t;
          t = term_w_7;
          t = a_77(t);
          f_4 = t;
          t = term_w_7;
          t = a_77(t);
          g_4 = t;
          t = term_w_7;
          t = a_77(t);
          h_4 = t;
          t = (ATerm) ATinsert(CheckATermList(o_3), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, e_4))), term_v_7), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, d_4))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, f_4)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_z_6))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, g_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, h_4)), term_j_6), (ATerm) ATinsert(ATempty, m_3))), k_3), h_3)));
          t = i_4(t);
        }
      return(t);
    }
    t = i_4(t);
  }
  return(t);
}
ATerm MkCfConsList_2_0 (ATerm c_77 (ATerm), ATerm d_77 (ATerm), ATerm t)
{
  ATerm q_4 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
    q_4 = t;
    t = term_w_7;
    t = c_77(t);
    r_4 = t;
    t = term_w_7;
    t = c_77(t);
    s_4 = t;
    t = term_w_7;
    t = d_77(t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, r_4)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, s_4, t_4)), term_j_6), (ATerm) ATinsert(ATempty, q_4));
    return(t);
  }
  t = Cons_2_0(e_0, _id, t);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm x_4 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL,b_6 = NULL,c_6 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_4 = ATgetFirst((ATermList) t);
          e_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_5;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = x_4;
        }
      else
        {
          ATerm e_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_5 = ATgetFirst((ATermList) t);
              i_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_5 = ATgetFirst((ATermList) t);
              n_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_5 = ATgetFirst((ATermList) t);
              q_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_5;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_6 = ATgetFirst((ATermList) t);
              c_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = term_w_7;
          t = c_77(t);
          e_7 = t;
          t = term_w_7;
          t = d_77(t);
          i_7 = t;
          t = term_w_7;
          t = d_77(t);
          j_7 = t;
          t = term_w_7;
          t = c_77(t);
          k_7 = t;
          t = term_w_7;
          t = d_77(t);
          l_7 = t;
          t = term_w_7;
          t = c_77(t);
          m_7 = t;
          t = term_w_7;
          t = d_77(t);
          n_7 = t;
          t = term_w_7;
          t = c_77(t);
          o_7 = t;
          t = term_w_7;
          t = c_77(t);
          p_7 = t;
          t = term_w_7;
          t = d_77(t);
          q_7 = t;
          t = (ATerm) ATinsert(CheckATermList(c_6), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, k_7, l_7))), term_v_7), j_7), term_v_7), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, e_7, i_7))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, m_7, n_7)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_z_6))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, o_7)), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, p_7, q_7)), term_j_6), (ATerm) ATinsert(ATempty, b_6))), o_5), m_5), g_5), x_4)));
          t = r_7(t);
        }
      return(t);
    }
    t = r_7(t);
  }
  return(t);
}
ATerm MkLexConsList_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm b_9 (ATerm t)
  {
    ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_7 = ATgetFirst((ATermList) t);
        a_8 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = a_8;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        ATerm l_8 = NULL,m_8 = NULL;
        t = term_w_7;
        t = f_77(t);
        l_8 = t;
        t = term_w_7;
        t = f_77(t);
        m_8 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, l_8)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, m_8)), term_j_6), (ATerm) ATinsert(ATempty, z_7));
      }
    else
      {
        ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,z_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_8 = ATgetFirst((ATermList) t);
            c_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = term_w_7;
        t = f_77(t);
        r_8 = t;
        t = term_w_7;
        t = f_77(t);
        s_8 = t;
        t = term_w_7;
        t = f_77(t);
        t_8 = t;
        t = term_w_7;
        t = f_77(t);
        u_8 = t;
        t = term_w_7;
        t = f_77(t);
        v_8 = t;
        t = term_w_7;
        t = f_77(t);
        w_8 = t;
        t = term_w_7;
        t = f_77(t);
        z_8 = t;
        t = (ATerm) ATinsert(CheckATermList(c_8), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, s_8))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, r_8))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, t_8)), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_z_6))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, w_8)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, z_8)), term_j_6), (ATerm) ATinsert(ATempty, b_8))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, u_8)), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, v_8)), term_j_6), (ATerm) ATinsert(ATempty, z_7)))));
        t = b_9(t);
      }
    return(t);
  }
  t = b_9(t);
  return(t);
}
ATerm unflatten_list_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      p_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_9;
  if(match_cons(t, sym_list_1))
    {
      q_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_9;
  if(match_cons(t, sym_iter_1))
    {
      r_9 = ATgetArgument(t, 0);
      t = t_9;
      {
        ATerm n_0 (ATerm t)
        {
          t = r_9;
          return(t);
        }
        t = MkLexConsList_1_0(n_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_iter_star_1))
        {
          r_9 = ATgetArgument(t, 0);
          t = t_9;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_9 = ATgetFirst((ATermList) t);
              n_9 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm z_9 = NULL;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, r_9)), (ATerm) ATinsert(CheckATermList(n_9), m_9));
                t = unflatten_list_0_0(t);
                z_9 = t;
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, r_9))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, r_9)), term_j_6), (ATerm) ATinsert(ATempty, z_9));
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, r_9)), term_j_6), (ATerm) ATempty);
            }
        }
      else
        {
          if(match_cons(t, sym_cf_1))
            {
              r_9 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_9;
          if(match_cons(t, sym_iter_sep_2))
            {
              s_9 = ATgetArgument(t, 0);
              l_9 = ATgetArgument(t, 1);
              t = t_9;
              {
                ATerm o_0 (ATerm t)
                {
                  t = s_9;
                  return(t);
                }
                ATerm q_0 (ATerm t)
                {
                  t = l_9;
                  return(t);
                }
                t = MkCfConsList_2_0(o_0, q_0, t);
              }
            }
          else
            {
              if(match_cons(t, sym_iter_star_sep_2))
                {
                  s_9 = ATgetArgument(t, 0);
                  l_9 = ATgetArgument(t, 1);
                  t = t_9;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_9 = ATgetFirst((ATermList) t);
                      n_9 = (ATerm) ATgetNext((ATermList) t);
                      {
                        ATerm i_10 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, s_9, l_9))), (ATerm) ATinsert(CheckATermList(n_9), m_9));
                        t = unflatten_list_0_0(t);
                        i_10 = t;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, s_9, l_9))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, s_9, l_9)), term_j_6), (ATerm) ATinsert(ATempty, i_10));
                      }
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, s_9, l_9)), term_j_6), (ATerm) ATempty);
                    }
                }
              else
                {
                  if(match_cons(t, sym_iter_1))
                    {
                      s_9 = ATgetArgument(t, 0);
                      t = t_9;
                      {
                        ATerm r_0 (ATerm t)
                        {
                          t = s_9;
                          return(t);
                        }
                        t = MkCfConsList_1_0(r_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_iter_star_1))
                        {
                          s_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = t_9;
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          m_9 = ATgetFirst((ATermList) t);
                          n_9 = (ATerm) ATgetNext((ATermList) t);
                          {
                            ATerm q_10 = NULL;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, s_9))), (ATerm) ATinsert(CheckATermList(n_9), m_9));
                            t = unflatten_list_0_0(t);
                            q_10 = t;
                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, s_9))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, s_9)), term_j_6), (ATerm) ATinsert(ATempty, q_10));
                          }
                        }
                      else
                        {
                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, s_9)), term_j_6), (ATerm) ATempty);
                        }
                    }
                }
            }
        }
    }
  return(t);
}
ATerm list_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 (ATerm t)
      {
        ATerm d_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = d_8;
            t = Cons_2_0(m_0, f_11, t);
          }
        return(t);
      }
      t = f_11(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm d_11 = NULL,e_11 = NULL,i_0 = NULL,p_0 = NULL;
        d_11 = t;
        if(match_cons(t, sym_list_1))
          {
            e_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_11);
        i_0 = t;
        t = e_11;
        t = m_0(t);
        p_0 = t;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_1, p_0), i_0);
      }
    }
  return(t);
}
ATerm list_some_1_0 (ATerm y_84 (ATerm), ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(y_84, _id, t);
        LocalPopChoice(g_8);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm t_0 (ATerm t)
            {
              t = try_1_0(y_84, t);
              return(t);
            }
            t = list_1_0(t_0, t);
            return(t);
          }
          t = Cons_2_0(_id, s_0, t);
        }
      }
    else
      {
        t = f_8;
        t = Cons_2_0(_id, j_11, t);
      }
    return(t);
  }
  t = j_11(t);
  return(t);
}
ATerm unflatten_literal_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym_appl_2))
    {
      k_11 = ATgetArgument(t, 0);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
      if(match_cons(t, sym_lit_1))
        {
          n_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_explode_string(n_11);
      o_11 = t;
      {
        ATerm y_0 (ATerm t)
        {
          ATerm q_11 = NULL;
          q_11 = t;
          t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, q_11));
          return(t);
        }
        t = map_1_0(y_0, t);
        p_11 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, p_11, (ATerm)ATmakeAppl(sym_lit_1, n_11), term_j_6), o_11);
      }
      return(t);
    }
    t = list_some_1_0(u_0, t);
    m_11 = t;
    t = (ATerm) ATmakeAppl(sym_appl_2, k_11, m_11);
  }
  return(t);
}
ATerm bottomup_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = bottomup_1_0(d_79, t);
    return(t);
  }
  t = SRTS_all(z_0, t);
  t = d_79(t);
  return(t);
}
ATerm ExplodeAsFix2ME_0_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = try_1_0(unflatten_literal_0_0, t);
    t = try_1_0(unflatten_list_0_0, t);
    t = try_1_0(unflatten_layout_0_0, t);
    t = try_1_0(unflatten_lexical_0_0, t);
    return(t);
  }
  t = bottomup_1_0(a_1, t);
  return(t);
}
ATerm _2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  w_11 = t;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_11);
  r_11 = t;
  t = s_11;
  t = z_61(t);
  u_11 = t;
  t = t_11;
  t = a_62(t);
  v_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, u_11, v_11), r_11);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  a_12 = t;
  t = term_w_7;
  t = whoami_0_0(t);
  b_12 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), b_12), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_12;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm e_12 = NULL,f_12 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_12 = ATgetFirst((ATermList) t);
            f_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_12;
        {
          ATerm c_1 (ATerm t)
          {
            t = f_12;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_1, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  j_12 = t;
  t = SSL_explode_term(j_12);
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm l_12 (ATerm t)
  {
    ATerm k_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_12, t);
        ;
        LocalPopChoice(n_8);
      }
    else
      {
        t = k_8;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_85(t);
      }
    return(t);
  }
  t = l_12(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12;
  {
    ATerm d_1 (ATerm t)
    {
      t = m_12;
      return(t);
    }
    t = at_end_1_0(d_1, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_12 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm p_12 = NULL;
    p_12 = t;
    t = SSL_explode_string(p_12);
    return(t);
  }
  ATerm g_1 (ATerm t)
  {
    ATerm q_12 = NULL;
    q_12 = t;
    t = SSL_explode_string(q_12);
    return(t);
  }
  t = _2_0(f_1, g_1, t);
  t = conc_0_0(t);
  o_12 = t;
  t = SSL_implode_string(o_12);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_8 = t;
  int x_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12 = NULL;
      w_12 = t;
      t = SSL_is_string(w_12);
      ;
      LocalPopChoice(x_8);
    }
  else
    {
      t = q_8;
      {
        ATerm y_8 = t;
        int a_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(j_1, t);
            ;
            LocalPopChoice(a_9);
          }
        else
          {
            t = y_8;
            {
              ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
              a_13 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_13 = ATgetArgument(t, 0);
                  t = b_13;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_13 = ATgetArgument(t, 0);
                      t = b_13;
                      {
                        ATerm c_9 = t;
                        int d_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_9);
                          }
                        else
                          {
                            t = c_9;
                            {
                              ATerm k_1 (ATerm t)
                              {
                                t = term_e_9;
                                return(t);
                              }
                              t = debug_1_0(k_1, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm g_13 = NULL,h_13 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_13 = ATgetArgument(t, 0);
                          c_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_13;
                      t = eval_config_0_0(t);
                      g_13 = t;
                      t = c_13;
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_13);
  {
    ATerm l_1 (ATerm t)
    {
      ATerm l_13 = NULL;
      t = eval_config_0_0(t);
      l_13 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_13, l_13);
      t = l_13;
      return(t);
    }
    t = try_1_0(l_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL;
    m_13 = t;
    t = term_f_9;
    t = get_config_0_0(t);
    n_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_13, term_g_9);
    t = geq_0_0(t);
    t = m_13;
    t = j_98(t);
    return(t);
  }
  t = try_1_0(m_1, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm n_1 (ATerm t)
  {
    ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_9 = ATgetArgument(t, 0);
        if(match_cons(h_9, sym_Stream_1))
          {
            o_13 = ATgetArgument(h_9, 0);
          }
        else
          _fail(t);
        p_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(o_13, p_13);
    q_13 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), q_13);
    r_13 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, r_13);
    return(t);
  }
  t = WriteToFile_1_0(n_1, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_13, term_i_9);
  t = open_stream_0_0(t);
  u_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_13, t_13);
  t = f_97(t);
  t = fclose_0_0(t);
  t = t_13;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_9 = ATgetArgument(t, 0);
        if(match_cons(j_9, sym_Stream_1))
          {
            v_13 = ATgetArgument(j_9, 0);
          }
        else
          _fail(t);
        w_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(v_13, w_13);
    x_13 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, x_13);
    return(t);
  }
  t = WriteToFile_1_0(s_1, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  y_13 = t;
  {
    ATerm t_1 (ATerm t)
    {
      ATerm k_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_1 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                z_13 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(u_1, t);
          ;
          LocalPopChoice(o_9);
        }
      else
        {
          t = k_9;
          t = term_u_9;
          z_13 = t;
        }
      return(t);
    }
    t = _2_0(t_1, _id, t);
    t = y_13;
    {
      ATerm v_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          t = not_null(z_13);
          return(t);
        }
        t = split_2_0(w_1, _id, t);
        return(t);
      }
      t = _2_0(_id, v_1, t);
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm y_1 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(y_1, t);
              return(t);
            }
            t = _2_0(x_1, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
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
ATerm apply_strategy_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  a_14 = t;
  t = dtime_0_0(t);
  t = a_14;
  t = h_100(t);
  b_14 = t;
  t = dtime_0_0(t);
  c_14 = t;
  t = b_14;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      e_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_14), (ATerm) ATmakeAppl(sym_Runtime_1, c_14)), e_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_14 (ATerm m_14, ATerm t)
  {
    t = SSL_fclose(m_14);
    return(t);
  }
  ATerm p_14 = NULL,q_14 = NULL;
  q_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_14 = ATgetArgument(t, 0);
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_14);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            t = s_14(q_14, t);
          }
      }
    }
  else
    {
      t = s_14(q_14, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm r_96 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t_14 = t;
  t = r_96(t);
  u_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_14), u_14));
  t = t_14;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  t = SSL_stdin_stream();
  v_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL;
  t = SSL_stdout_stream();
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_stderr_stream();
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  z_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      ATerm b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL,k_2 = NULL;
        j_2 = t;
        t = SSL_explode_term(j_2);
        if(match_cons(t, sym__2))
          {
            ATerm e_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_10 = ATgetArgument(t, 1);
              if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
                {
                  k_2 = ATgetFirst((ATermList) f_10);
                  {
                    ATerm g_10 = (ATerm) ATgetNext((ATermList) f_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          ATerm h_10 = t;
          int j_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
              ATerm z_1 (ATerm t)
              {
                ATerm f_15 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    f_15 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_15;
                return(t);
              }
              t = _2_0(z_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  c_15 = ATgetArgument(t, 0);
                  d_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(c_15, d_15);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
              ;
              LocalPopChoice(j_10);
            }
          else
            {
              t = h_10;
              {
                ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
                ATerm a_2 (ATerm t)
                {
                  ATerm j_15 = NULL;
                  j_15 = t;
                  t = SSL_is_string(j_15);
                  return(t);
                }
                t = _2_0(a_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    g_15 = ATgetArgument(t, 0);
                    h_15 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(g_15, h_15);
                i_15 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, i_15);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_15 = NULL;
      n_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_15, term_m_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm c_2 (ATerm t)
        {
          t = term_n_10;
          return(t);
        }
        t = debug_1_0(c_2, t);
        _fail(t);
      }
    }
  k_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(m_15);
  l_15 = t;
  t = k_15;
  t = fclose_0_0(t);
  t = l_15;
  return(t);
}
ATerm split_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL;
  p_15 = t;
  t = j_92(t);
  q_15 = t;
  t = p_15;
  t = k_92(t);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_15, r_15);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              t_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(g_2, t);
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        t = term_r_10;
        t_15 = t;
      }
    t = s_15;
    {
      ATerm i_2 (ATerm t)
      {
        t = not_null(t_15);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, i_2, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    ATerm v_15 = NULL;
    v_15 = t;
    if(match_string(t, "-k"))
      {
        t = v_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = v_15;
      }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm w_15 = NULL,x_15 = NULL;
    w_15 = t;
    t = SSL_string_to_int(w_15);
    x_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), x_15);
    t = w_15;
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_s_10;
    return(t);
  }
  t = ArgOption_3_0(l_2, m_2, n_2, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_2 (ATerm t)
      {
        ATerm z_15 = NULL;
        z_15 = t;
        if(match_string(t, "-S"))
          {
            t = z_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = z_15;
          }
        return(t);
      }
      ATerm p_2 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_v_10;
        return(t);
      }
      ATerm q_2 (ATerm t)
      {
        t = term_w_10;
        return(t);
      }
      t = Option_3_0(o_2, p_2, q_2, t);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
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
              ATerm a_16 = NULL,b_16 = NULL;
              a_16 = t;
              t = SSL_string_to_int(a_16);
              b_16 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_16);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, a_16);
              return(t);
            }
            ATerm t_2 (ATerm t)
            {
              t = term_z_10;
              return(t);
            }
            t = ArgOption_3_0(r_2, s_2, t_2, t);
            ;
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm w_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm x_2 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_a_11;
                return(t);
              }
              ATerm y_2 (ATerm t)
              {
                t = term_b_11;
                return(t);
              }
              t = Option_3_0(w_2, x_2, y_2, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = c_11;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm d_16 = NULL;
    d_16 = t;
    if(match_string(t, "-o"))
      {
        t = d_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = d_16;
      }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    ATerm e_16 = NULL;
    e_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), e_16);
    t = (ATerm) ATmakeAppl(sym_Output_1, e_16);
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_h_11;
    return(t);
  }
  t = ArgOption_3_0(z_2, b_3, c_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm i_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = i_11;
      {
        ATerm d_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_11;
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          t = term_z_11;
          return(t);
        }
        t = Option_3_0(d_3, e_3, f_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL;
  h_16 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = h_16;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm p_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_16 = ATgetFirst((ATermList) t);
          j_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_16 = ATgetFirst((ATermList) t);
          l_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_16;
      t = j_0(t);
      t = k_16;
      t = k_0(t);
      p_16 = t;
      t = (ATerm) ATinsert(CheckATermList(l_16), p_16);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm r_16 = NULL;
    r_16 = t;
    if(match_string(t, "-i"))
      {
        t = r_16;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = r_16;
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    ATerm s_16 = NULL;
    s_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), s_16);
    t = (ATerm) ATmakeAppl(sym_Input_1, s_16);
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_c_12;
    return(t);
  }
  t = ArgOption_3_0(g_3, j_3, n_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm d_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = d_12;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_7;
  t = whoami_0_0(t);
  t_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), t_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_12;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_90(t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_16 = ATgetFirst((ATermList) t);
            x_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_16;
        t = foldr_2_0(u_90, v_90, t);
        a_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_16, a_17);
        t = v_90(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm n_94 (ATerm), ATerm o_94 (ATerm), ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  b_17 = t;
  t = SSL_explode_term(b_17);
  if(match_cons(t, sym__2))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_17;
  t = foldr_2_0(n_94, o_94, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_17 = NULL;
  t = times_0_0(t);
  {
    ATerm p_3 (ATerm t)
    {
      t = term_k_6;
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      ATerm e_17 = NULL,f_17 = NULL;
      if(match_cons(t, sym__2))
        {
          e_17 = ATgetArgument(t, 0);
          f_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm v_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_17, f_17);
            ;
            LocalPopChoice(x_12);
          }
        else
          {
            t = v_12;
            t = SSL_addr(e_17, f_17);
          }
      }
      return(t);
    }
    t = crush_2_0(p_3, q_3, t);
    d_17 = t;
    t = SSL_TicksToSeconds(d_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_17;
        if((p_17 != t))
          {
            _fail(t);
          }
        t = o_17;
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = o_17;
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_17, q_17);
              ;
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              t = SSL_gtr(p_17, q_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_98 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm t_17 = NULL,u_17 = NULL;
    t_17 = t;
    t = term_f_9;
    t = get_config_0_0(t);
    u_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_17, term_f_13);
    t = geq_0_0(t);
    t = t_17;
    t = i_98(t);
    return(t);
  }
  t = try_1_0(r_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm w_17 = NULL,x_17 = NULL;
    t = run_time_0_0(t);
    w_17 = t;
    t = term_w_7;
    t = whoami_0_0(t);
    x_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), w_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), x_17));
    t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_14), w_17), term_j_13), x_17));
    return(t);
  }
  t = if_verbose1_1_0(s_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm f_101 (ATerm), ATerm t)
{
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              {
                ATerm l_14 = t;
                int n_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(n_14);
                  }
                else
                  {
                    t = l_14;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(t_3, t);
      }
    }
  t = f_101(t);
  return(t);
}
ATerm map_1_0 (ATerm t_84 (ATerm), ATerm t)
{
  ATerm z_17 (ATerm t)
  {
    ATerm o_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = o_14;
        t = Cons_2_0(t_84, z_17, t);
      }
    return(t);
  }
  t = z_17(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_18 = ATgetFirst((ATermList) t);
      c_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_18 = NULL,h_18 = NULL;
        t = c_18;
        t = h_0(t);
        g_18 = t;
        t = b_18;
        t = g_0(t);
        h_18 = t;
        t = c_18;
        {
          ATerm u_3 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_18), h_18);
            return(t);
          }
          t = reverse_acc_2_0(g_0, u_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_7;
      t = h_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, v_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm f_0 (ATerm), ATerm t)
{
  ATerm i_18 = NULL;
  t = term_w_7;
  t = f_0(t);
  i_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_15), i_18), term_y_14);
  return(t);
}
ATerm Program_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  m_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_18);
  j_18 = t;
  t = k_18;
  t = y_68(t);
  l_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, l_18), j_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_18 = NULL;
  ATerm b_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_12;
      t = get_config_0_0(t);
      q_18 = t;
      ;
      LocalPopChoice(o_15);
    }
  else
    {
      t = b_15;
      {
        ATerm w_3 (ATerm t)
        {
          ATerm x_3 (ATerm t)
          {
            q_18 = t;
            return(t);
          }
          t = Program_1_0(x_3, t);
          return(t);
        }
        t = option_defined_1_0(w_3, t);
      }
    }
  {
    ATerm y_3 (ATerm t)
    {
      ATerm z_3 (ATerm t)
      {
        t = q_18;
        return(t);
      }
      t = short_description_1_0(z_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(y_3, t);
    t = term_u_15;
    t = echo_0_0(t);
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
    t = reverse_0_0(t);
    {
      ATerm a_4 (ATerm t)
      {
        ATerm r_18 = NULL;
        r_18 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_18), term_y_15);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(a_4, t);
      {
        ATerm b_4 (ATerm t)
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_16), term_m_16), term_g_16), term_f_16), term_c_16);
          t = echo_0_0(t);
          return(t);
        }
        t = try_1_0(b_4, t);
      }
    }
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  v_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_18);
  s_18 = t;
  t = t_18;
  t = z_68(t);
  u_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_18), s_18);
  return(t);
}
ATerm fetch_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm z_18 (ATerm t)
  {
    ATerm o_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_85, _id, t);
        ;
        LocalPopChoice(q_16);
      }
    else
      {
        t = o_16;
        t = Cons_2_0(_id, z_18, t);
      }
    return(t);
  }
  t = z_18(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  t = fetch_1_0(f_102, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_16 = ATgetFirst((ATermList) t);
                ATerm z_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_19;
          }
        ;
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = (ATerm) ATinsert(ATempty, b_19);
      }
    c_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_19);
    t = b_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_12;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_77(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm j_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_m_17;
        return(t);
      }
      ATerm k_4 (ATerm t)
      {
        t = term_n_17;
        return(t);
      }
      t = Option_3_0(c_4, j_4, k_4, t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = i_17;
      {
        ATerm l_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_r_17;
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = term_s_17;
          return(t);
        }
        t = Option_3_0(l_4, m_4, n_4, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__3))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      k_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_19, j_19);
  {
    ATerm v_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_18 = ATgetArgument(t, 0);
            ATerm d_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_19, j_19);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = v_17;
        t = (ATerm) ATempty;
      }
    l_19 = t;
    t = SSL_table_put(i_19, j_19, (ATerm) ATinsert(CheckATermList(l_19), k_19));
    t = (ATerm) ATmakeAppl(sym__3, i_19, j_19, k_19);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm q_19 = NULL;
  t = term_w_7;
  t = k_103(t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_18, term_f_18, q_19);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
  s_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = s_19;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm x_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_19 = ATgetFirst((ATermList) t);
          u_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_19;
      t = a_0(t);
      t = term_w_7;
      t = b_0(t);
      x_19 = t;
      t = (ATerm) ATinsert(CheckATermList(u_19), x_19);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm o_4 (ATerm t)
  {
    ATerm z_19 = NULL;
    z_19 = t;
    if(match_string(t, "--help"))
      {
        t = z_19;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = z_19;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = z_19;
          }
      }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_n_18;
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  t = Option_3_0(o_4, p_4, u_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm i_63 (ATerm), ATerm j_63 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  f_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_20 = ATgetFirst((ATermList) t);
      c_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_20);
  a_20 = t;
  t = b_20;
  t = i_63(t);
  d_20 = t;
  t = c_20;
  t = j_63(t);
  e_20 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(e_20), d_20), a_20);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_103 (ATerm), ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  {
    ATerm v_4 (ATerm t)
    {
      t = term_p_18;
      t = i_103(t);
      return(t);
    }
    t = try_1_0(v_4, t);
    t = m_20;
    {
      ATerm w_4 (ATerm t)
      {
        ATerm n_20 = NULL;
        n_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_20);
        t = (ATerm) ATmakeAppl(sym_Program_1, n_20);
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_19);
              }
            else
              {
                t = y_18;
                t = i_103(t);
                t = Cons_2_0(_id, y_4, t);
              }
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            {
              ATerm p_20 = NULL,q_20 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_20 = ATgetFirst((ATermList) t);
                  q_20 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_20), (ATerm) ATmakeAppl(sym_Undefined_1, p_20));
            }
          }
        return(t);
      }
      t = Cons_2_0(w_4, y_4, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  w_20 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_20;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm d_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_103(t);
          ;
          LocalPopChoice(e_19);
        }
      else
        {
          t = d_19;
          {
            ATerm f_19 = t;
            int g_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(g_19);
              }
            else
              {
                t = f_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_4, t);
    {
      ATerm a_5 (ATerm t)
      {
        ATerm h_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_21 = NULL;
            d_21 = t;
            {
              ATerm n_19 = t;
              int o_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_21;
                  {
                    ATerm p_19 = t;
                    int r_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_i_14;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(r_19);
                      }
                    else
                      {
                        t = p_19;
                        {
                          ATerm b_5 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(b_5, t);
                        }
                      }
                    t = d_21;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(o_19);
                }
              else
                {
                  t = n_19;
                  t = term_l_17;
                  t = get_config_0_0(t);
                  t = d_21;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(m_19);
          }
        else
          {
            t = h_19;
            {
              ATerm c_5 (ATerm t)
              {
                ATerm d_5 (ATerm t)
                {
                  x_20 = t;
                  return(t);
                }
                t = Undefined_1_0(d_5, t);
                return(t);
              }
              t = option_defined_1_0(c_5, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_20)), term_v_19));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(a_5, t);
      y_20 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_20;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_101 (ATerm), ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t)
{
  ATerm l_6 = NULL;
  t = parse_options_1_0(h_101, t);
  l_6 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), l_6);
  t = l_6;
  t = j_101(t);
  {
    ATerm w_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_101, t);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = w_19;
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm z_100 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_100(t);
        ;
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(w_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(f_5, y_100, z_100, h_5, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm s_100 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    ATerm k_5 (ATerm t)
    {
      ATerm g_21 = NULL,h_21 = NULL;
      g_21 = t;
      t = term_r_12;
      t = get_config_0_0(t);
      h_21 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_21));
      t = g_21;
      return(t);
    }
    t = if_verbose2_1_0(k_5, t);
    return(t);
  }
  t = iowrap_4_0(q_100, r_100, s_100, j_5, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm t)
{
  t = iowrap_3_0(o_100, p_100, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    t = _2_0(_id, l_100, t);
    return(t);
  }
  t = iowrap_2_0(l_5, _fail, t);
  return(t);
}
ATerm explode_asfix2me_0_0 (ATerm t)
{
  t = iowrap_1_0(ExplodeAsFix2ME_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = explode_asfix2me_0_0(t);
  return(t);
}

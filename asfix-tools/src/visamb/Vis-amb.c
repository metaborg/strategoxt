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
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_amb_abbr_2;
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
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_lit_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_parsetree_2;
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
  sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
  ATprotectSymbol(sym_lexical_1);
  sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
  ATprotectSymbol(sym_root_1);
  sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
  ATprotectSymbol(sym_N_2);
  sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
  ATprotectSymbol(sym_amb_abbr_2);
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
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_k_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_i_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_k_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_y_7;
ATerm term_e_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_r_6;
void init_constant_terms (void)
{
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_e_7);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_7);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_r_6);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_j_11);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_r_6);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_r_6);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_n_14, term_r_6);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym__2, term_x_15, term_r_6);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm d_4 (ATerm e_41, ATerm f_41, ATerm);
ATerm foldr_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_4 (ATerm e_44, ATerm f_44, ATerm);
ATerm g_4 (ATerm s_47, ATerm t_47, ATerm);
ATerm i_4 (ATerm r_90 (ATerm), ATerm w_419, ATerm w_47, ATerm);
ATerm h_4 (ATerm o_47, ATerm p_47, ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm Lexical_0_0 (ATerm);
ATerm i_11 (ATerm l_10, ATerm);
ATerm abbrev_term_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm o_4 (ATerm l_24, ATerm);
ATerm p_4 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_31, ATerm i_31, ATerm);
ATerm q_4 (ATerm e_82 (ATerm), ATerm f_31, ATerm e_31, ATerm);
ATerm foldr_3_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm bu_collect_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm r_1 (ATerm);
ATerm visamb_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm v_21 (ATerm e_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_4 (ATerm u_47, ATerm);
ATerm s_4 (ATerm g_44, ATerm h_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_23 (ATerm n_22, ATerm);
ATerm p_23 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm);
ATerm q_23 (ATerm b_23, ATerm c_23, ATerm d_23, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm e_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm t_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_4 (ATerm v_48, ATerm w_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_4 (ATerm t_53, ATerm u_53, ATerm s_53, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm x_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_4 (ATerm u_38, ATerm v_38, ATerm);
ATerm debug_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_4 (ATerm k_55, ATerm l_55, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm u_96 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm parse_options_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm Vis_amb_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,m_0 = NULL,n_0 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_6;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_t_6;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_6), b_0);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_w_6;
  f_0 = t;
  t = SSL_exit(f_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_6;
  t = get_config_0_0(t);
  return(t);
}
ATerm d_4 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_41, f_41);
      ;
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      t = SSL_addr(e_41, f_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,t_0 = NULL,w_0 = NULL;
  r_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_0;
      t = d_84(t);
    }
  else
    {
      ATerm c_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_0 = ATgetFirst((ATermList) t);
          w_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_0;
      t = foldr_2_0(d_84, e_84, t);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, c_1);
      t = e_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_e_7;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm q_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      q_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(q_0, s_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_1 = NULL,e_0 = NULL,i_0 = NULL;
  t = times_0_0(t);
  i_0 = t;
  t = SSL_explode_term(i_0);
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
  t = foldr_2_0(u_0, v_0, t);
  g_1 = t;
  t = SSL_TicksToSeconds(g_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym__2))
    {
      f_2 = ATgetArgument(t, 0);
      g_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_2;
        if((f_2 != t))
          {
            _fail(t);
          }
        t = d_2;
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = (ATerm) ATmakeAppl(sym__2, f_2, g_2);
        {
          ATerm r_7 = t;
          int s_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_2, g_2);
              ;
              LocalPopChoice(s_7);
            }
          else
            {
              t = r_7;
              t = SSL_gtr(f_2, g_2);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_2, g_2);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm m_2 = NULL;
  m_2 = t;
  {
    ATerm t_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 = NULL;
        t = term_y_7;
        t = get_config_0_0(t);
        o_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_2, term_w_6);
        t = geq_0_0(t);
        t = m_2;
        t = b_92(t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = t_7;
        t = m_2;
      }
  }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm q_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL;
  t = run_time_0_0(t);
  q_2 = t;
  t = term_r_6;
  t = whoami_0_0(t);
  s_2 = t;
  t = term_t_6;
  u_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_8), q_2), term_a_8), s_2);
  v_2 = t;
  t = SSL_printnl(u_2, v_2);
  t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_8), q_2), term_a_8), s_2));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_0, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_2 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_7;
  w_2 = t;
  t = SSL_exit(w_2);
  return(t);
}
ATerm f_4 (ATerm e_44, ATerm f_44, ATerm t)
{
  ATerm x_2 = NULL;
  t = SSL_fputc(e_44, f_44);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_2);
  return(t);
}
ATerm g_4 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm c_3 = NULL;
  t = SSL_write_term_to_stream_text(s_47, t_47);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_3);
  return(t);
}
ATerm i_4 (ATerm r_90 (ATerm), ATerm w_419, ATerm w_47, ATerm t)
{
  ATerm d_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_419, term_d_8);
  t = open_stream_0_0(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_3, w_47);
  t = r_90(t);
  t = fclose_0_0(t);
  t = w_47;
  return(t);
}
ATerm h_4 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm f_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_47, p_47);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_3);
  return(t);
}
ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(match_cons(e_8, sym_Stream_1))
        {
          a_2 = ATgetArgument(e_8, 0);
        }
      else
        _fail(t);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(a_2, c_2, t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(match_cons(g_8, sym_Stream_1))
        {
          j_3 = ATgetArgument(g_8, 0);
        }
      else
        _fail(t);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(j_3, m_3, t);
  g_3 = t;
  t = term_h_8;
  h_3 = t;
  t = g_3;
  if(match_cons(t, sym_Stream_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, g_3);
  t = f_4(h_3, i_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,o_3 = NULL,p_3 = NULL,s_3 = NULL,v_3 = NULL,w_3 = NULL,b_4 = NULL,j_4 = NULL,k_4 = NULL,f_6 = NULL,g_6 = NULL,p_0 = NULL,o_0 = NULL;
  if(((l_3 != NULL) && (l_3 != t)))
    _fail(t);
  else
    l_3 = t;
  if(match_cons(t, sym__2))
    {
      if(((b_4 != NULL) && (b_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_4 = ATgetArgument(t, 0);
      if(((j_4 != NULL) && (j_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(l_3));
  if(((w_3 != NULL) && (w_3 != t)))
    _fail(t);
  else
    w_3 = t;
  t = not_null(b_4);
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_3 != NULL) && (k_3 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_0, t);
        ;
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        t = term_k_8;
        if(((k_3 != NULL) && (k_3 != t)))
          _fail(t);
        else
          k_3 = t;
      }
    if(((k_4 != NULL) && (k_4 != t)))
      _fail(t);
    else
      k_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), not_null(j_4));
    if(((o_0 != NULL) && (o_0 != t)))
      _fail(t);
    else
      o_0 = t;
    t = SSLsetAnnotations(not_null(o_0), not_null(w_3));
    t = not_null(l_3);
    if(match_cons(t, sym__2))
      {
        if(((p_3 != NULL) && (p_3 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          p_3 = ATgetArgument(t, 0);
        if(((s_3 != NULL) && (s_3 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(l_3));
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_3), (ATerm) ATmakeAppl(sym__2, not_null(k_3), not_null(s_3)));
    if(((p_0 != NULL) && (p_0 != t)))
      _fail(t);
    else
      p_0 = t;
    t = SSLsetAnnotations(not_null(p_0), not_null(o_3));
    if(((v_3 != NULL) && (v_3 != t)))
      _fail(t);
    else
      v_3 = t;
    if(match_cons(t, sym__2))
      {
        if(((f_6 != NULL) && (f_6 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          f_6 = ATgetArgument(t, 0);
        if(((g_6 != NULL) && (g_6 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          g_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm n_8 = t;
      int o_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,d_1 = NULL;
          t = SSLgetAnnotations(not_null(v_3));
          t_1 = t;
          t = not_null(f_6);
          t = fetch_1_0(z_0, t);
          w_1 = t;
          t = not_null(g_6);
          if(match_cons(t, sym__2))
            {
              y_1 = ATgetArgument(t, 0);
              z_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_4(a_1, y_1, z_1, t);
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
          d_1 = t;
          t = SSLsetAnnotations(d_1, t_1);
          ;
          LocalPopChoice(o_8);
        }
      else
        {
          t = n_8;
          {
            ATerm r_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(not_null(v_3));
            r_2 = t;
            t = not_null(g_6);
            if(match_cons(t, sym__2))
              {
                b_3 = ATgetArgument(t, 0);
                e_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_4(b_1, b_3, e_3, t);
            a_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), a_3);
            e_1 = t;
            t = SSLsetAnnotations(e_1, r_2);
          }
        }
    }
  }
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym_appl_2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 = NULL,z_3 = NULL,e_4 = NULL,b_5 = NULL,c_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,p_5 = NULL,q_5 = NULL,x_5 = NULL,y_5 = NULL,c_6 = NULL,d_6 = NULL,h_6 = NULL,i_6 = NULL,j_2 = NULL,b_2 = NULL,q_1 = NULL,p_1 = NULL,o_1 = NULL;
        t = SSLgetAnnotations(x_9);
        z_3 = t;
        t = y_9;
        if(match_cons(t, sym_prod_3))
          {
            b_5 = ATgetArgument(t, 0);
            c_5 = ATgetArgument(t, 1);
            g_5 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_9);
        e_4 = t;
        t = b_5;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_5 = ATgetFirst((ATermList) t);
            y_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_5);
        q_5 = t;
        t = x_5;
        if(match_cons(t, sym_lex_1))
          {
            h_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_5);
        d_6 = t;
        t = (ATerm) ATmakeAppl(sym_lex_1, h_6);
        o_1 = t;
        t = SSLsetAnnotations(o_1, d_6);
        i_6 = t;
        t = y_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_5), i_6);
        p_1 = t;
        t = SSLsetAnnotations(p_1, q_5);
        c_6 = t;
        t = c_5;
        if(match_cons(t, sym_cf_1))
          {
            j_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_5);
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, j_5);
        q_1 = t;
        t = SSLsetAnnotations(q_1, i_5);
        p_5 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, c_6, p_5, g_5);
        b_2 = t;
        t = SSLsetAnnotations(b_2, e_4);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, h_5, z_9);
        j_2 = t;
        t = SSLsetAnnotations(j_2, z_3);
        t = yield_0_0(t);
        y_3 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, y_3));
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm s_6 = NULL,y_6 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,n_4 = NULL,m_4 = NULL,l_4 = NULL;
          t = SSLgetAnnotations(x_9);
          s_6 = t;
          t = y_9;
          if(match_cons(t, sym_prod_3))
            {
              f_7 = ATgetArgument(t, 0);
              g_7 = ATgetArgument(t, 1);
              h_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_9);
          y_6 = t;
          t = g_7;
          if(match_cons(t, sym_lit_1))
            {
              k_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_7);
          j_7 = t;
          t = (ATerm) ATmakeAppl(sym_lit_1, k_7);
          l_4 = t;
          t = SSLsetAnnotations(l_4, j_7);
          l_7 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, f_7, l_7, h_7);
          m_4 = t;
          t = SSLsetAnnotations(m_4, y_6);
          i_7 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, i_7, z_9);
          n_4 = t;
          t = SSLsetAnnotations(n_4, s_6);
          t = (ATerm) ATempty;
        }
      }
  }
  return(t);
}
ATerm i_11 (ATerm l_10, ATerm t)
{
  t = SSL_is_int(l_10);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
      n_10 = t;
      if(match_cons(t, sym_amb_1))
        {
          o_10 = ATgetArgument(t, 0);
          t = o_10;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_10 = ATgetFirst((ATermList) t);
              q_10 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm t_8 = t;
                int u_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_11(n_10, t);
                    ;
                    LocalPopChoice(u_8);
                  }
                else
                  {
                    t = t_8;
                    t = p_10;
                  }
              }
            }
          else
            {
              t = i_11(n_10, t);
            }
        }
      else
        {
          t = i_11(n_10, t);
        }
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm u_7 = NULL,x_7 = NULL,b_8 = NULL;
        u_7 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm w_8 = ATgetArgument(t, 0);
            if(match_cons(w_8, sym_prod_3))
              {
                ATerm y_8 = ATgetArgument(w_8, 0);
                b_8 = ATgetArgument(w_8, 1);
                {
                  ATerm z_8 = ATgetArgument(w_8, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm x_8 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = u_7;
        {
          ATerm a_9 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              ;
              LocalPopChoice(b_9);
            }
          else
            {
              t = a_9;
              {
                ATerm l_8 = NULL,m_8 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    l_8 = ATgetArgument(t, 0);
                    m_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_8;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
          x_7 = t;
          t = (ATerm) ATmakeAppl(sym_N_2, b_8, x_7);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm u_12 (ATerm t)
  {
    ATerm o_12 = NULL,r_12 = NULL,t_12 = NULL;
    t_12 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_12 = ATgetFirst((ATermList) t);
        r_12 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_8 = NULL,c_9 = NULL,l_5 = NULL;
          t = SSLgetAnnotations(t_12);
          v_8 = t;
          t = r_12;
          t = u_12(t);
          c_9 = t;
          t = (ATerm) ATinsert(CheckATermList(c_9), o_12);
          l_5 = t;
          t = SSLsetAnnotations(l_5, v_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_12;
        t = q_78(t);
      }
    return(t);
  }
  t = u_12(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_12 = NULL,g_13 = NULL,l_13 = NULL;
  z_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_12;
    }
  else
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(l_13);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_13 != NULL) && (g_13 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_13 = ATgetFirst((ATermList) t);
          if(((l_13 != NULL) && (l_13 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_13);
      t = at_end_1_0(f_1, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm t_13 = NULL;
  ATerm k_15 (ATerm t)
  {
    ATerm u_14 = NULL,z_14 = NULL,a_15 = NULL;
    a_15 = t;
    if(match_cons(t, sym_appl_2))
      {
        u_14 = ATgetArgument(t, 0);
        z_14 = ATgetArgument(t, 1);
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9 = NULL,c_10 = NULL,i_10 = NULL,n_5 = NULL;
              t = SSLgetAnnotations(a_15);
              c_10 = t;
              t = z_14;
              t = map_1_0(k_15, t);
              i_10 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, u_14, i_10);
              n_5 = t;
              t = SSLsetAnnotations(n_5, c_10);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm f_9 = ATgetArgument(t, 0);
                  t_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_9;
              t = concat_0_0(t);
              ;
              LocalPopChoice(e_9);
            }
          else
            {
              t = d_9;
              t = (ATerm) ATinsert(ATempty, a_15);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, a_15);
      }
    return(t);
  }
  t = k_15(t);
  if(((t_13 != NULL) && (t_13 != t)))
    _fail(t);
  else
    t_13 = t;
  t = SSL_implode_string(not_null(t_13));
  return(t);
}
ATerm o_4 (ATerm l_24, ATerm t)
{
  ATerm m_15 = NULL,o_15 = NULL,q_15 = NULL;
  t = l_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_15 = ATgetFirst((ATermList) t);
      {
        ATerm g_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_15;
  t = yield_0_0(t);
  m_15 = t;
  t = l_24;
  t = map_1_0(abbrev_term_0_0, t);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, m_15, o_15);
  return(t);
}
ATerm p_4 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_31, ATerm i_31, ATerm t)
{
  t = i_82(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm r_15 = NULL;
      r_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), r_15);
      t = h_82(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
    t = not_null(i_31);
  }
  return(t);
}
ATerm q_4 (ATerm e_82 (ATerm), ATerm f_31, ATerm e_31, ATerm t)
{
  ATerm m_16 (ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL,i_16 = NULL;
    f_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(e_31);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_16 = ATgetFirst((ATermList) t);
            i_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_16;
              {
                ATerm i_1 (ATerm t)
                {
                  t = not_null(e_31);
                  return(t);
                }
                t = p_4(e_82, i_1, not_null(g_16), not_null(i_16), t);
                t = m_16(t);
              }
              ;
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              {
                ATerm k_11 = NULL,n_11 = NULL,r_5 = NULL;
                t = SSLgetAnnotations(f_16);
                k_11 = t;
                t = i_16;
                t = m_16(t);
                n_11 = t;
                t = (ATerm) ATinsert(CheckATermList(n_11), g_16);
                r_5 = t;
                t = SSLsetAnnotations(r_5, k_11);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(f_31);
  t = m_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,x_16 = NULL,y_16 = NULL;
  q_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_16;
      t = f_84(t);
    }
  else
    {
      ATerm c_17 = NULL,h_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_16 = ATgetFirst((ATermList) t);
          y_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_16;
      t = h_84(t);
      c_17 = t;
      t = y_16;
      t = foldr_3_0(f_84, g_84, h_84, t);
      h_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_17, h_17);
      t = g_84(t);
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(m_1, b_12, c_12, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      if((d_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm bu_collect_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_18 (ATerm t)
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_11 = NULL,w_11 = NULL;
            ATerm l_1 (ATerm t)
            {
              ATerm n_9 = t;
              int o_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_12 = NULL,v_12 = NULL,w_12 = NULL,d_13 = NULL,h_13 = NULL,t_5 = NULL;
                  s_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_12 = ATgetFirst((ATermList) t);
                      w_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_12);
                  d_13 = t;
                  t = v_12;
                  t = x_82(t);
                  h_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_12), h_13);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, d_13);
                  ;
                  LocalPopChoice(o_9);
                }
              else
                {
                  t = n_9;
                  t = (ATerm) ATempty;
                }
              return(t);
            }
            t = SRTS_some(t_18, t);
            if(((w_11 != NULL) && (w_11 != t)))
              _fail(t);
            else
              w_11 = t;
            t = SSL_explode_term(not_null(w_11));
            if(match_cons(t, sym__2))
              {
                ATerm p_9 = ATgetArgument(t, 0);
                if(((v_11 != NULL) && (v_11 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  v_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(v_11);
            t = foldr_3_0(j_1, k_1, l_1, t);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm q_18 = NULL;
              t = x_82(t);
              q_18 = t;
              t = (ATerm) ATinsert(ATempty, q_18);
            }
          }
        return(t);
      }
      t = t_18(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm t_19 = NULL,y_19 = NULL,a_20 = NULL,v_5 = NULL;
  a_20 = t;
  if(match_cons(t, sym_amb_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_20);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, y_19);
  v_5 = t;
  t = SSLsetAnnotations(v_5, t_19);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(i_20, t);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, h_20);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,k_19 = NULL,p_19 = NULL,q_19 = NULL,s_19 = NULL,z_5 = NULL,w_5 = NULL;
  s_19 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      h_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_19);
  g_19 = t;
  t = h_19;
  t = bu_collect_1_0(n_1, t);
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, p_19, k_19);
  w_5 = t;
  t = SSLsetAnnotations(w_5, g_19);
  q_19 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_19);
  z_18 = t;
  t = a_19;
  t = map_1_0(r_1, t);
  c_19 = t;
  t = SSL_int_to_string(b_19);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, c_19, f_19);
  z_5 = t;
  t = SSLsetAnnotations(z_5, z_18);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  n_20 = t;
  t = dtime_0_0(t);
  t = n_20;
  t = t_93(t);
  m_20 = t;
  t = dtime_0_0(t);
  j_20 = t;
  t = m_20;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_20), (ATerm) ATmakeAppl(sym_Runtime_1, j_20)), l_20);
  return(t);
}
ATerm v_21 (ATerm e_21, ATerm t)
{
  t = SSL_fclose(e_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_21 = NULL,t_21 = NULL;
  t_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_21 = ATgetArgument(t, 0);
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_21);
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = v_21(t_21, t);
          }
      }
    }
  else
    {
      t = v_21(t_21, t);
    }
  return(t);
}
ATerm r_4 (ATerm u_47, ATerm t)
{
  t = SSL_read_term_from_stream(u_47);
  return(t);
}
ATerm s_4 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm w_21 = NULL;
  t = SSL_fopen(g_44, h_44);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_stdin_stream();
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_21 = NULL;
  t = SSL_stdout_stream();
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_21 = NULL;
  t = SSL_stderr_stream();
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_21);
  return(t);
}
ATerm o_23 (ATerm n_22, ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_explode_term(n_22);
  if(match_cons(t, sym__2))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
          {
            o_22 = ATgetFirst((ATermList) u_9);
            {
              ATerm v_9 = (ATerm) ATgetNext((ATermList) u_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_23 (ATerm r_22, ATerm s_22, ATerm t_22, ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,z_22 = NULL,l_6 = NULL;
  t = SSLgetAnnotations(t_22);
  w_22 = t;
  t = r_22;
  if(match_cons(t, sym_Path_1))
    {
      z_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_22, s_22);
  l_6 = t;
  t = SSLsetAnnotations(l_6, w_22);
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(u_22, v_22, t);
  return(t);
}
ATerm q_23 (ATerm b_23, ATerm c_23, ATerm d_23, ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,j_23 = NULL,u_6 = NULL;
  t = SSLgetAnnotations(d_23);
  g_23 = t;
  t = SSL_is_string(b_23);
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, c_23);
  u_6 = t;
  t = SSLsetAnnotations(u_6, g_23);
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(e_23, f_23, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      ATerm a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  l_23 = t;
  if(match_cons(t, sym__2))
    {
      m_23 = ATgetArgument(t, 0);
      n_23 = ATgetArgument(t, 1);
      {
        ATerm b_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_23(l_23, t);
            ;
            LocalPopChoice(d_10);
          }
        else
          {
            t = b_10;
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_23(m_23, n_23, l_23, t);
                  ;
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  t = q_23(m_23, n_23, l_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_23(l_23, t);
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  ATerm h_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = NULL;
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_23, term_k_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = h_10;
      t = debug_1_0(s_1, t);
      _fail(t);
    }
  s_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(t_23, t);
  r_23 = t;
  t = s_23;
  t = fclose_0_0(t);
  t = r_23;
  return(t);
}
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm u_24 (ATerm t)
  {
    ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
    r_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_24 = ATgetFirst((ATermList) t);
        t_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_14 = NULL,j_14 = NULL,z_6 = NULL;
          t = SSLgetAnnotations(r_24);
          f_14 = t;
          t = s_24;
          t = k_78(t);
          j_14 = t;
          t = (ATerm) ATinsert(CheckATermList(t_24), j_14);
          z_6 = t;
          t = SSLsetAnnotations(z_6, f_14);
          ;
          LocalPopChoice(r_10);
        }
      else
        {
          t = m_10;
          {
            ATerm x_14 = NULL,d_15 = NULL,a_7 = NULL;
            t = SSLgetAnnotations(r_24);
            x_14 = t;
            t = t_24;
            t = u_24(t);
            d_15 = t;
            t = (ATerm) ATinsert(CheckATermList(d_15), s_24);
            a_7 = t;
            t = SSLsetAnnotations(a_7, x_14);
          }
        }
    }
    return(t);
  }
  t = u_24(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  if(match_string(t, "-k"))
    {
      t = y_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_24;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
  z_24 = t;
  t = SSL_string_to_int(z_24);
  a_25 = t;
  t = term_s_10;
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_10, a_25);
  t = y_4(b_25, a_25, t);
  t = z_24;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_1, v_1, e_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  if(match_string(t, "-S"))
    {
      t = d_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_25;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  t = term_y_7;
  e_25 = t;
  t = term_e_7;
  f_25 = t;
  t = term_u_10;
  t = y_4(e_25, f_25, t);
  t = term_v_10;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  t = SSL_string_to_int(g_25);
  h_25 = t;
  t = term_y_7;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, h_25);
  t = y_4(i_25, h_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_25);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  t = term_y_10;
  j_25 = t;
  t = term_r_6;
  k_25 = t;
  t = term_z_10;
  t = y_4(j_25, k_25, t);
  t = term_a_11;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_2, i_2, k_2, t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_2, n_2, p_2, t);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            t = Option_3_0(t_2, y_2, z_2, t);
          }
      }
    }
  return(t);
}
ATerm y_4 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm l_25 = NULL;
  t = term_g_11;
  l_25 = t;
  t = SSL_table_put(l_25, v_48, w_48);
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, v_48, w_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
      t = term_r_6;
      t = d_0(t);
      q_25 = t;
      t = term_h_11;
      r_25 = t;
      t = term_j_11;
      s_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_11, term_j_11, q_25);
      t = w_4(r_25, s_25, q_25, t);
      _fail(t);
    }
  else
    {
      ATerm v_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_25 = ATgetFirst((ATermList) t);
          p_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_25;
      t = a_0(t);
      t = term_r_6;
      t = c_0(t);
      v_25 = t;
      t = (ATerm) ATinsert(CheckATermList(p_25), v_25);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm x_25 = NULL;
  x_25 = t;
  if(match_string(t, "-o"))
    {
      t = x_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_25;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  t = term_l_11;
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, y_25);
  t = y_4(z_25, y_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_25);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_3, q_3, r_3, t);
  return(t);
}
ATerm w_4 (ATerm t_53, ATerm u_53, ATerm s_53, ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_11 = ATgetArgument(t, 0);
            ATerm r_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
        t = v_4(t_53, u_53, t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = (ATerm) ATempty;
      }
    e_26 = t;
    t = (ATerm) ATinsert(CheckATermList(e_26), s_53);
    f_26 = t;
    t = SSL_table_put(t_53, u_53, f_26);
    t = d_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_26 = NULL,t_26 = NULL,u_26 = NULL;
      t = term_r_6;
      t = l_0(t);
      q_26 = t;
      t = term_h_11;
      t_26 = t;
      t = term_j_11;
      u_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_11, term_j_11, q_26);
      t = w_4(t_26, u_26, q_26, t);
      _fail(t);
    }
  else
    {
      ATerm y_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_26 = ATgetFirst((ATermList) t);
          n_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_26 = ATgetFirst((ATermList) t);
          p_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_26;
      t = j_0(t);
      t = o_26;
      t = k_0(t);
      y_26 = t;
      t = (ATerm) ATinsert(CheckATermList(p_26), y_26);
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  if(match_string(t, "-i"))
    {
      t = a_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_27;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  t = term_s_11;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, b_27);
  t = y_4(c_27, b_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_27);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, u_3, x_3, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      f_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_27 = NULL,k_27 = NULL;
        ATerm a_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_27)), not_null(k_27));
          return(t);
        }
        t = not_null(f_27);
        t = h_0(t);
        if(((j_27 != NULL) && (j_27 != t)))
          _fail(t);
        else
          j_27 = t;
        t = not_null(e_27);
        t = g_0(t);
        if(((k_27 != NULL) && (k_27 != t)))
          _fail(t);
        else
          k_27 = t;
        t = not_null(f_27);
        t = reverse_acc_2_0(g_0, a_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_6;
      t = h_0(t);
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_27), term_u_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL,q_27 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_6;
      t = get_config_0_0(t);
      o_27 = t;
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,d_7 = NULL;
          t_27 = t;
          if(match_cons(t, sym_Program_1))
            {
              s_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_27);
          r_27 = t;
          t = s_27;
          if(((o_27 != NULL) && (o_27 != t)))
            _fail(t);
          else
            o_27 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, s_27);
          d_7 = t;
          t = SSLsetAnnotations(d_7, r_27);
          return(t);
        }
        t = fetch_1_0(c_4, t);
      }
    }
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), not_null(o_27)), term_e_12);
        t = echo_0_0(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
      }
    t = term_g_12;
    t = echo_0_0(t);
    t = term_h_11;
    if(((p_27 != NULL) && (p_27 != t)))
      _fail(t);
    else
      p_27 = t;
    t = term_j_11;
    if(((q_27 != NULL) && (q_27 != t)))
      _fail(t);
    else
      q_27 = t;
    t = term_h_12;
    t = v_4(not_null(p_27), not_null(q_27), t);
    t = reverse_acc_2_0(_id, t_4, t);
    t = map_1_0(x_4, t);
    {
      ATerm i_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_13), term_y_12), term_x_12), term_q_12), term_p_12), term_n_12), term_m_12), term_l_12), term_k_12);
          t = echo_0_0(t);
          ;
          LocalPopChoice(j_12);
        }
      else
        {
          t = i_12;
        }
    }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  b_28 = t;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_13 = ATgetFirst((ATermList) t);
                ATerm f_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_28;
          }
        ;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = (ATerm) ATinsert(ATempty, b_28);
      }
    c_28 = t;
    t = term_k_8;
    d_28 = t;
    t = SSL_printnl(d_28, c_28);
    t = b_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_6;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_4 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_strcat(u_38, v_38);
  return(t);
}
ATerm debug_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  h_28 = t;
  t = p_90(t);
  i_28 = t;
  t = term_t_6;
  j_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_28), i_28);
  k_28 = t;
  t = SSL_printnl(j_28, k_28);
  t = h_28;
  return(t);
}
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm z_28 (ATerm t)
  {
    ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
    w_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_28;
      }
    else
      {
        ATerm t_15 = NULL,d_16 = NULL,h_16 = NULL,m_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_28 = ATgetFirst((ATermList) t);
            y_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_28);
        t_15 = t;
        t = x_28;
        t = a_78(t);
        d_16 = t;
        t = y_28;
        t = z_28(t);
        h_16 = t;
        t = (ATerm) ATinsert(CheckATermList(h_16), d_16);
        m_7 = t;
        t = SSLsetAnnotations(m_7, t_15);
      }
    return(t);
  }
  t = z_28(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_k_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL;
      h_29 = t;
      t = SSL_is_string(h_29);
      ;
      LocalPopChoice(n_13);
    }
  else
    {
      t = m_13;
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_4, t);
            ;
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            {
              ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
              n_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_29 = ATgetArgument(t, 0);
                  t = o_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_29 = ATgetArgument(t, 0);
                      t = o_29;
                      {
                        ATerm q_13 = t;
                        int r_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_13);
                          }
                        else
                          {
                            t = q_13;
                            t = debug_1_0(a_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_29 = NULL,u_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_29 = ATgetArgument(t, 0);
                          p_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_29;
                      t = eval_config_0_0(t);
                      t_29 = t;
                      t = p_29;
                      t = eval_config_0_0(t);
                      u_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_29, u_29);
                      t = u_4(t_29, u_29, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_4 (ATerm k_55, ATerm l_55, ATerm t)
{
  t = SSL_table_get(k_55, l_55);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  y_29 = t;
  t = term_g_11;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, y_29);
  t = v_4(z_29, y_29, t);
  {
    ATerm s_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_30 = NULL,b_30 = NULL;
        t = eval_config_0_0(t);
        a_30 = t;
        t = term_g_11;
        b_30 = t;
        t = SSL_table_put(b_30, y_29, a_30);
        t = a_30;
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = s_13;
      }
  }
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  t = term_v_13;
  e_30 = t;
  t = term_r_6;
  f_30 = t;
  t = term_w_13;
  t = y_4(e_30, f_30, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  t = term_v_13;
  i_30 = t;
  t = term_r_6;
  j_30 = t;
  t = term_w_13;
  t = y_4(i_30, j_30, t);
  t = term_y_13;
  g_30 = t;
  t = term_r_6;
  h_30 = t;
  t = term_z_13;
  t = y_4(g_30, h_30, t);
  t = term_a_14;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_5, e_5, f_5, t);
      ;
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      t = Option_3_0(k_5, m_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL,q_7 = NULL;
  p_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_30 = ATgetFirst((ATermList) t);
      m_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  k_30 = t;
  t = l_30;
  t = a_63(t);
  n_30 = t;
  t = m_30;
  t = b_63(t);
  o_30 = t;
  t = (ATerm) ATinsert(CheckATermList(o_30), n_30);
  q_7 = t;
  t = SSLsetAnnotations(q_7, k_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,z_30 = NULL,a_31 = NULL,w_7 = NULL;
  if(((u_30 != NULL) && (u_30 != t)))
    _fail(t);
  else
    u_30 = t;
  {
    ATerm e_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_14;
        t = u_96(t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = e_14;
      }
    t = not_null(u_30);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_30 != NULL) && (w_30 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_30 = ATgetFirst((ATermList) t);
        if(((x_30 != NULL) && (x_30 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          x_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(u_30));
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = term_x_6;
    if(((a_31 != NULL) && (a_31 != t)))
      _fail(t);
    else
      a_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_6, not_null(w_30));
    t = y_4(not_null(a_31), not_null(w_30), t);
    t = not_null(x_30);
    {
      ATerm p_31 (ATerm t)
      {
        ATerm i_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_14 = t;
            int m_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_31 = NULL;
                d_31 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_31;
                ;
                LocalPopChoice(m_14);
              }
            else
              {
                t = l_14;
                t = u_96(t);
                t = Cons_2_0(_id, p_31, t);
              }
            ;
            LocalPopChoice(k_14);
          }
        else
          {
            t = i_14;
            {
              ATerm l_31 = NULL,m_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_31 = ATgetFirst((ATermList) t);
                  m_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_31), (ATerm) ATmakeAppl(sym_Undefined_1, l_31));
            }
          }
        return(t);
      }
      t = p_31(t);
      if(((z_30 != NULL) && (z_30 != t)))
        _fail(t);
      else
        z_30 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(z_30)), (ATerm) ATmakeAppl(sym_Program_1, not_null(w_30)));
      if(((w_7 != NULL) && (w_7 != t)))
        _fail(t);
      else
        w_7 = t;
      t = SSLsetAnnotations(not_null(w_7), not_null(v_30));
    }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm b_32 = NULL;
  b_32 = t;
  if(match_string(t, "--help"))
    {
      t = b_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_32;
        }
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  t = term_n_14;
  c_32 = t;
  t = term_r_6;
  d_32 = t;
  t = term_o_14;
  t = y_4(c_32, d_32, t);
  t = term_p_14;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_q_14;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL;
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  t = term_h_11;
  if(((y_31 != NULL) && (y_31 != t)))
    _fail(t);
  else
    y_31 = t;
  t = term_j_11;
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = (ATerm) ATempty;
  if(((a_32 != NULL) && (a_32 != t)))
    _fail(t);
  else
    a_32 = t;
  t = SSL_table_put(not_null(y_31), not_null(z_31), not_null(a_32));
  t = not_null(w_31);
  {
    ATerm s_5 (ATerm t)
    {
      ATerm r_14 = t;
      int s_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_96(t);
          ;
          LocalPopChoice(s_14);
        }
      else
        {
          t = r_14;
          {
            ATerm t_14 = t;
            int v_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, a_6, b_6, t);
                ;
                LocalPopChoice(v_14);
              }
            else
              {
                t = t_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm w_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_32 = NULL;
          o_32 = t;
          {
            ATerm b_15 = t;
            int c_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_17 = NULL;
                t = o_32;
                {
                  ATerm e_15 = t;
                  int f_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_n_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_15);
                    }
                  else
                    {
                      t = e_15;
                      t = fetch_1_0(e_6, t);
                    }
                  t = o_32;
                  t = default_system_usage_0_0(t);
                  t = term_e_7;
                  j_17 = t;
                  t = SSL_exit(j_17);
                }
                ;
                LocalPopChoice(c_15);
              }
            else
              {
                t = b_15;
                {
                  ATerm o_17 = NULL;
                  t = term_v_13;
                  t = get_config_0_0(t);
                  t = o_32;
                  t = default_system_about_0_0(t);
                  t = term_e_7;
                  o_17 = t;
                  t = SSL_exit(o_17);
                }
              }
          }
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = w_14;
          {
            ATerm g_15 = t;
            int h_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
                ATerm j_6 (ATerm t)
                {
                  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,z_7 = NULL;
                  u_32 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_32 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_32);
                  s_32 = t;
                  t = t_32;
                  if(((u_31 != NULL) && (u_31 != t)))
                    _fail(t);
                  else
                    u_31 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_32);
                  z_7 = t;
                  t = SSLsetAnnotations(z_7, s_32);
                  return(t);
                }
                t = fetch_1_0(j_6, t);
                t = term_t_6;
                if(((q_32 != NULL) && (q_32 != t)))
                  _fail(t);
                else
                  q_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_31)), term_i_15);
                if(((r_32 != NULL) && (r_32 != t)))
                  _fail(t);
                else
                  r_32 = t;
                t = SSL_printnl(not_null(q_32), not_null(r_32));
                t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_31)), term_i_15));
                t = default_system_usage_0_0(t);
                t = term_w_6;
                if(((p_32 != NULL) && (p_32 != t)))
                  _fail(t);
                else
                  p_32 = t;
                t = SSL_exit(not_null(p_32));
                ;
                LocalPopChoice(h_15);
              }
            else
              {
                t = g_15;
              }
          }
        }
      if(((v_31 != NULL) && (v_31 != t)))
        _fail(t);
      else
        v_31 = t;
      t = term_h_11;
      if(((x_31 != NULL) && (x_31 != t)))
        _fail(t);
      else
        x_31 = t;
      t = SSL_table_destroy(not_null(x_31));
      t = not_null(v_31);
    }
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm j_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = j_15;
      {
        ATerm n_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(p_15);
          }
        else
          {
            t = n_15;
            {
              ATerm s_15 = t;
              int u_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_6, n_6, o_6, t);
                  ;
                  LocalPopChoice(u_15);
                }
              else
                {
                  t = s_15;
                  {
                    ATerm v_15 = t;
                    int w_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
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
  return(t);
}
ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  t = term_x_15;
  a_33 = t;
  t = term_r_6;
  b_33 = t;
  t = term_y_15;
  t = y_4(a_33, b_33, t);
  t = term_z_15;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm y_17 = NULL,e_18 = NULL,f_18 = NULL,h_18 = NULL,i_18 = NULL,f_8 = NULL;
  i_18 = t;
  if(match_cons(t, sym__2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_18);
  y_17 = t;
  t = f_18;
  t = visamb_0_0(t);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_18, h_18);
  f_8 = t;
  t = SSLsetAnnotations(f_8, y_17);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(k_6, t);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL,r_17 = NULL,w_17 = NULL;
        if(((l_33 != NULL) && (l_33 != t)))
          _fail(t);
        else
          l_33 = t;
        {
          ATerm e_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_6 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((r_17 != NULL) && (r_17 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_6, t);
              ;
              LocalPopChoice(j_16);
            }
          else
            {
              t = e_16;
              t = term_k_16;
              if(((r_17 != NULL) && (r_17 != t)))
                _fail(t);
              else
                r_17 = t;
            }
          t = not_null(r_17);
          t = ReadFromFile_0_0(t);
          if(((w_17 != NULL) && (w_17 != t)))
            _fail(t);
          else
            w_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(w_17));
          t = apply_strategy_1_0(q_6, t);
          t = output_file_0_0(t);
          t = report_success_0_0(t);
        }
        ;
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = Vis_amb_0_0(t);
  return(t);
}

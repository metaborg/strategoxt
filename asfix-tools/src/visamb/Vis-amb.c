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
ATerm term_i_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_g_15;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_l_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_o_12;
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
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_r_6);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_r_6);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_r_6);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_r_6);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm d_4 (ATerm k_29, ATerm l_29, ATerm);
ATerm foldr_2_0 (ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_80 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_4 (ATerm k_32, ATerm l_32, ATerm);
ATerm g_4 (ATerm y_35, ATerm z_35, ATerm);
ATerm i_4 (ATerm d_79 (ATerm), ATerm v_396, ATerm c_36, ATerm);
ATerm h_4 (ATerm u_35, ATerm v_35, ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm Lexical_0_0 (ATerm);
ATerm i_11 (ATerm l_10, ATerm);
ATerm abbrev_term_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_66 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm yield_0_0 (ATerm);
ATerm o_4 (ATerm p_12, ATerm);
ATerm p_4 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm n_19, ATerm m_19, ATerm);
ATerm q_4 (ATerm k_70 (ATerm), ATerm j_19, ATerm i_19, ATerm);
ATerm foldr_3_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm bu_collect_1_0 (ATerm d_71 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm r_1 (ATerm);
ATerm visamb_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_82 (ATerm), ATerm);
ATerm k_22 (ATerm t_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_4 (ATerm a_36, ATerm);
ATerm s_4 (ATerm m_32, ATerm n_32, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_24 (ATerm a_23, ATerm);
ATerm e_24 (ATerm g_23, ATerm h_23, ATerm i_23, ATerm);
ATerm f_24 (ATerm q_23, ATerm r_23, ATerm s_23, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_66 (ATerm), ATerm);
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
ATerm y_4 (ATerm b_37, ATerm c_37, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_4 (ATerm z_41, ATerm a_42, ATerm y_41, ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm x_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_4 (ATerm a_27, ATerm b_27, ATerm);
ATerm debug_1_0 (ATerm b_79 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_66 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_4 (ATerm q_43, ATerm r_43, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_51 (ATerm), ATerm h_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm g_85 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm e_6 (ATerm);
ATerm parse_options_1_0 (ATerm f_85 (ATerm), ATerm);
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
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_6;
  t = whoami_0_0(t);
  a_0 = t;
  t = term_t_6;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_6), a_0);
  e_0 = t;
  t = SSL_printnl(c_0, e_0);
  t = term_w_6;
  b_0 = t;
  t = SSL_exit(b_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_6;
  t = get_config_0_0(t);
  return(t);
}
ATerm d_4 (ATerm k_29, ATerm l_29, ATerm t)
{
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_29, l_29);
      ;
      LocalPopChoice(c_7);
    }
  else
    {
      t = b_7;
      t = SSL_addr(k_29, l_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_72 (ATerm), ATerm k_72 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,t_0 = NULL,w_0 = NULL;
  r_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_0;
      t = j_72(t);
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
      t = foldr_2_0(j_72, k_72, t);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, c_1);
      t = k_72(t);
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
  ATerm g_1 = NULL,f_0 = NULL,i_0 = NULL;
  t = times_0_0(t);
  i_0 = t;
  t = SSL_explode_term(i_0);
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      f_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_0;
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
ATerm if_verbose1_1_0 (ATerm n_80 (ATerm), ATerm t)
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
        t = n_80(t);
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
ATerm f_4 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm x_2 = NULL;
  t = SSL_fputc(k_32, l_32);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_2);
  return(t);
}
ATerm g_4 (ATerm y_35, ATerm z_35, ATerm t)
{
  ATerm c_3 = NULL;
  t = SSL_write_term_to_stream_text(y_35, z_35);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_3);
  return(t);
}
ATerm i_4 (ATerm d_79 (ATerm), ATerm v_396, ATerm c_36, ATerm t)
{
  ATerm d_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_396, term_d_8);
  t = open_stream_0_0(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_3, c_36);
  t = d_79(t);
  t = fclose_0_0(t);
  t = c_36;
  return(t);
}
ATerm h_4 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm f_3 = NULL;
  t = SSL_write_term_to_stream_baf(u_35, v_35);
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
  ATerm k_3 = NULL,l_3 = NULL,o_3 = NULL,p_3 = NULL,s_3 = NULL,v_3 = NULL,w_3 = NULL,b_4 = NULL,j_4 = NULL,k_4 = NULL,f_6 = NULL,g_6 = NULL,o_0 = NULL,l_0 = NULL;
  l_3 = t;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  w_3 = t;
  t = b_4;
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
        k_3 = t;
      }
    k_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_4, j_4);
    l_0 = t;
    t = SSLsetAnnotations(l_0, w_3);
    t = l_3;
    if(match_cons(t, sym__2))
      {
        p_3 = ATgetArgument(t, 0);
        s_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_3);
    o_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_3, (ATerm) ATmakeAppl(sym__2, not_null(k_3), s_3));
    o_0 = t;
    t = SSLsetAnnotations(o_0, o_3);
    v_3 = t;
    if(match_cons(t, sym__2))
      {
        f_6 = ATgetArgument(t, 0);
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
          t = SSLgetAnnotations(v_3);
          t_1 = t;
          t = f_6;
          t = fetch_1_0(z_0, t);
          w_1 = t;
          t = g_6;
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
            t = SSLgetAnnotations(v_3);
            r_2 = t;
            t = g_6;
            if(match_cons(t, sym__2))
              {
                b_3 = ATgetArgument(t, 0);
                e_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_4(b_1, b_3, e_3, t);
            a_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_6, a_3);
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
ATerm at_end_1_0 (ATerm w_66 (ATerm), ATerm t)
{
  ATerm y_12 (ATerm t)
  {
    ATerm q_12 = NULL,r_12 = NULL,w_12 = NULL;
    w_12 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_12 = ATgetFirst((ATermList) t);
        r_12 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_8 = NULL,c_9 = NULL,l_5 = NULL;
          t = SSLgetAnnotations(w_12);
          v_8 = t;
          t = r_12;
          t = y_12(t);
          c_9 = t;
          t = (ATerm) ATinsert(CheckATermList(c_9), q_12);
          l_5 = t;
          t = SSLsetAnnotations(l_5, v_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_12;
        t = w_66(t);
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_13;
    }
  else
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(d_13);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_13 = ATgetFirst((ATermList) t);
          if(((d_13 != NULL) && (d_13 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_13;
      t = at_end_1_0(f_1, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm q_13 = NULL;
  ATerm o_15 (ATerm t)
  {
    ATerm i_15 = NULL,k_15 = NULL,l_15 = NULL;
    l_15 = t;
    if(match_cons(t, sym_appl_2))
      {
        i_15 = ATgetArgument(t, 0);
        k_15 = ATgetArgument(t, 1);
        {
          ATerm d_9 = t;
          int e_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_9 = NULL,c_10 = NULL,i_10 = NULL,n_5 = NULL;
              t = SSLgetAnnotations(l_15);
              c_10 = t;
              t = k_15;
              t = map_1_0(o_15, t);
              i_10 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, i_15, i_10);
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
              t = (ATerm) ATinsert(ATempty, l_15);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, l_15);
      }
    return(t);
  }
  t = o_15(t);
  q_13 = t;
  t = SSL_implode_string(q_13);
  return(t);
}
ATerm o_4 (ATerm p_12, ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,v_15 = NULL;
  t = p_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_15 = ATgetFirst((ATermList) t);
      {
        ATerm g_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_15;
  t = yield_0_0(t);
  q_15 = t;
  t = p_12;
  t = map_1_0(abbrev_term_0_0, t);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, q_15, r_15);
  return(t);
}
ATerm p_4 (ATerm n_70 (ATerm), ATerm o_70 (ATerm), ATerm n_19, ATerm m_19, ATerm t)
{
  t = o_70(t);
  {
    ATerm h_1 (ATerm t)
    {
      ATerm w_15 = NULL;
      w_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_19, w_15);
      t = n_70(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
    t = m_19;
  }
  return(t);
}
ATerm q_4 (ATerm k_70 (ATerm), ATerm j_19, ATerm i_19, ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm q_16 = NULL,r_16 = NULL,u_16 = NULL;
    q_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_19;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_16 = ATgetFirst((ATermList) t);
            u_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_16;
              {
                ATerm i_1 (ATerm t)
                {
                  t = i_19;
                  return(t);
                }
                t = p_4(k_70, i_1, r_16, u_16, t);
                t = x_16(t);
              }
              ;
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              {
                ATerm k_11 = NULL,n_11 = NULL,r_5 = NULL;
                t = SSLgetAnnotations(q_16);
                k_11 = t;
                t = u_16;
                t = x_16(t);
                n_11 = t;
                t = (ATerm) ATinsert(CheckATermList(n_11), r_16);
                r_5 = t;
                t = SSLsetAnnotations(r_5, k_11);
              }
            }
        }
      }
    return(t);
  }
  t = j_19;
  t = x_16(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm t)
{
  ATerm c_17 = NULL,e_17 = NULL,f_17 = NULL;
  c_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_17;
      t = l_72(t);
    }
  else
    {
      ATerm k_17 = NULL,l_17 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_17 = ATgetFirst((ATermList) t);
          f_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_17;
      t = n_72(t);
      k_17 = t;
      t = f_17;
      t = foldr_3_0(l_72, m_72, n_72, t);
      l_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
      t = m_72(t);
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
ATerm bu_collect_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 (ATerm t)
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
                  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,g_13 = NULL,m_13 = NULL,t_5 = NULL;
                  t_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_12 = ATgetFirst((ATermList) t);
                      v_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_12);
                  g_13 = t;
                  t = u_12;
                  t = d_71(t);
                  m_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(v_12), m_13);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, g_13);
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
            t = SRTS_some(y_18, t);
            w_11 = t;
            t = SSL_explode_term(w_11);
            if(match_cons(t, sym__2))
              {
                ATerm p_9 = ATgetArgument(t, 0);
                v_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_11;
            t = foldr_3_0(j_1, k_1, l_1, t);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm x_18 = NULL;
              t = d_71(t);
              x_18 = t;
              t = (ATerm) ATinsert(ATempty, x_18);
            }
          }
        return(t);
      }
      t = y_18(t);
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
  ATerm h_20 = NULL,i_20 = NULL,p_20 = NULL,v_5 = NULL;
  p_20 = t;
  if(match_cons(t, sym_amb_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, i_20);
  v_5 = t;
  t = SSLsetAnnotations(v_5, h_20);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm v_20 = NULL,x_20 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      x_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(x_20, t);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, v_20);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm c_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,k_19 = NULL,r_19 = NULL,u_19 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,g_20 = NULL,z_5 = NULL,w_5 = NULL;
  g_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      u_19 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_20);
  r_19 = t;
  t = u_19;
  t = bu_collect_1_0(n_1, t);
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, c_20, b_20);
  w_5 = t;
  t = SSLsetAnnotations(w_5, r_19);
  d_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  c_19 = t;
  t = f_19;
  t = map_1_0(r_1, t);
  h_19 = t;
  t = SSL_int_to_string(g_19);
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, h_19, k_19);
  z_5 = t;
  t = SSLsetAnnotations(z_5, c_19);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm f_82 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  c_21 = t;
  t = dtime_0_0(t);
  t = c_21;
  t = f_82(t);
  b_21 = t;
  t = dtime_0_0(t);
  y_20 = t;
  t = b_21;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_20), (ATerm) ATmakeAppl(sym_Runtime_1, y_20)), a_21);
  return(t);
}
ATerm k_22 (ATerm t_21, ATerm t)
{
  t = SSL_fclose(t_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  d_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_22 = ATgetArgument(t, 0);
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_22);
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = k_22(d_22, t);
          }
      }
    }
  else
    {
      t = k_22(d_22, t);
    }
  return(t);
}
ATerm r_4 (ATerm a_36, ATerm t)
{
  t = SSL_read_term_from_stream(a_36);
  return(t);
}
ATerm s_4 (ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm l_22 = NULL;
  t = SSL_fopen(m_32, n_32);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_22 = NULL;
  t = SSL_stdin_stream();
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  t = SSL_stdout_stream();
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_22 = NULL;
  t = SSL_stderr_stream();
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_22);
  return(t);
}
ATerm d_24 (ATerm a_23, ATerm t)
{
  ATerm d_23 = NULL;
  t = SSL_explode_term(a_23);
  if(match_cons(t, sym__2))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_9 = ATgetArgument(t, 1);
        if(((ATgetType(u_9) == AT_LIST) && !(ATisEmpty(u_9))))
          {
            d_23 = ATgetFirst((ATermList) u_9);
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
  t = d_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_24 (ATerm g_23, ATerm h_23, ATerm i_23, ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL,o_23 = NULL,l_6 = NULL;
  t = SSLgetAnnotations(i_23);
  l_23 = t;
  t = g_23;
  if(match_cons(t, sym_Path_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_23, h_23);
  l_6 = t;
  t = SSLsetAnnotations(l_6, l_23);
  if(match_cons(t, sym__2))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(j_23, k_23, t);
  return(t);
}
ATerm f_24 (ATerm q_23, ATerm r_23, ATerm s_23, ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,y_23 = NULL,u_6 = NULL;
  t = SSLgetAnnotations(s_23);
  v_23 = t;
  t = SSL_is_string(q_23);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, r_23);
  u_6 = t;
  t = SSLsetAnnotations(u_6, v_23);
  if(match_cons(t, sym__2))
    {
      t_23 = ATgetArgument(t, 0);
      u_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(t_23, u_23, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_9 = ATgetArgument(t, 0);
      ATerm a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  a_24 = t;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
      {
        ATerm b_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_24(a_24, t);
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
                  t = e_24(b_24, c_24, a_24, t);
                  ;
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  t = f_24(b_24, c_24, a_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_24(a_24, t);
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
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  ATerm h_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_24 = NULL;
      j_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_24, term_k_10);
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
  h_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(i_24, t);
  g_24 = t;
  t = h_24;
  t = fclose_0_0(t);
  t = g_24;
  return(t);
}
ATerm fetch_1_0 (ATerm q_66 (ATerm), ATerm t)
{
  ATerm h_25 (ATerm t)
  {
    ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
    e_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_25 = ATgetFirst((ATermList) t);
        g_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_14 = NULL,h_14 = NULL,z_6 = NULL;
          t = SSLgetAnnotations(e_25);
          d_14 = t;
          t = f_25;
          t = q_66(t);
          h_14 = t;
          t = (ATerm) ATinsert(CheckATermList(g_25), h_14);
          z_6 = t;
          t = SSLsetAnnotations(z_6, d_14);
          ;
          LocalPopChoice(r_10);
        }
      else
        {
          t = m_10;
          {
            ATerm t_14 = NULL,y_14 = NULL,a_7 = NULL;
            t = SSLgetAnnotations(e_25);
            t_14 = t;
            t = g_25;
            t = h_25(t);
            y_14 = t;
            t = (ATerm) ATinsert(CheckATermList(y_14), f_25);
            a_7 = t;
            t = SSLsetAnnotations(a_7, t_14);
          }
        }
    }
    return(t);
  }
  t = h_25(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  if(match_string(t, "-k"))
    {
      t = l_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_25;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  t = SSL_string_to_int(m_25);
  n_25 = t;
  t = term_s_10;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_10, n_25);
  t = y_4(o_25, n_25, t);
  t = m_25;
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
  ATerm q_25 = NULL;
  q_25 = t;
  if(match_string(t, "-S"))
    {
      t = q_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_25;
    }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  t = term_y_7;
  r_25 = t;
  t = term_e_7;
  s_25 = t;
  t = term_u_10;
  t = y_4(r_25, s_25, t);
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
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  t = SSL_string_to_int(t_25);
  u_25 = t;
  t = term_y_7;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_7, u_25);
  t = y_4(v_25, u_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_25);
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
  ATerm w_25 = NULL,x_25 = NULL;
  t = term_y_10;
  w_25 = t;
  t = term_r_6;
  x_25 = t;
  t = term_z_10;
  t = y_4(w_25, x_25, t);
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
ATerm y_4 (ATerm b_37, ATerm c_37, ATerm t)
{
  ATerm y_25 = NULL;
  t = term_g_11;
  y_25 = t;
  t = SSL_table_put(y_25, b_37, c_37);
  t = (ATerm) ATmakeAppl(sym__3, term_g_11, b_37, c_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
      t = term_r_6;
      t = h_0(t);
      d_26 = t;
      t = term_h_11;
      e_26 = t;
      t = term_j_11;
      f_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_11, term_j_11, d_26);
      t = w_4(e_26, f_26, d_26, t);
      _fail(t);
    }
  else
    {
      ATerm i_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_26 = ATgetFirst((ATermList) t);
          c_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_26;
      t = d_0(t);
      t = term_r_6;
      t = g_0(t);
      i_26 = t;
      t = (ATerm) ATinsert(CheckATermList(c_26), i_26);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  if(match_string(t, "-o"))
    {
      t = k_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_26;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  l_26 = t;
  t = term_l_11;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, l_26);
  t = y_4(m_26, l_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_26);
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
ATerm w_4 (ATerm z_41, ATerm a_42, ATerm y_41, ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
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
        t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
        t = v_4(z_41, a_42, t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = (ATerm) ATempty;
      }
    p_26 = t;
    t = (ATerm) ATinsert(CheckATermList(p_26), y_41);
    q_26 = t;
    t = SSL_table_put(z_41, a_42, q_26);
    t = o_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,c_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
      t = term_r_6;
      t = p_0(t);
      d_27 = t;
      t = term_h_11;
      e_27 = t;
      t = term_j_11;
      f_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_11, term_j_11, d_27);
      t = w_4(e_27, f_27, d_27, t);
      _fail(t);
    }
  else
    {
      ATerm l_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          y_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_26 = ATgetFirst((ATermList) t);
          c_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_26;
      t = m_0(t);
      t = z_26;
      t = n_0(t);
      l_27 = t;
      t = (ATerm) ATinsert(CheckATermList(c_27), l_27);
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  if(match_string(t, "-i"))
    {
      t = n_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_27;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  o_27 = t;
  t = term_s_11;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, o_27);
  t = y_4(p_27, o_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_27);
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
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_27 = ATgetFirst((ATermList) t);
      s_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_27 = NULL,x_27 = NULL;
        ATerm a_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_27)), not_null(x_27));
          return(t);
        }
        t = s_27;
        t = k_0(t);
        if(((w_27 != NULL) && (w_27 != t)))
          _fail(t);
        else
          w_27 = t;
        t = r_27;
        t = j_0(t);
        if(((x_27 != NULL) && (x_27 != t)))
          _fail(t);
        else
          x_27 = t;
        t = s_27;
        t = reverse_acc_2_0(j_0, a_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_6;
      t = k_0(t);
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
  ATerm k_28 = NULL;
  k_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_28), term_u_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_6;
      t = get_config_0_0(t);
      b_28 = t;
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,d_7 = NULL;
          g_28 = t;
          if(match_cons(t, sym_Program_1))
            {
              f_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_28);
          e_28 = t;
          t = f_28;
          if(((b_28 != NULL) && (b_28 != t)))
            _fail(t);
          else
            b_28 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, f_28);
          d_7 = t;
          t = SSLsetAnnotations(d_7, e_28);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), not_null(b_28)), term_e_12);
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
    c_28 = t;
    t = term_j_11;
    d_28 = t;
    t = term_h_12;
    t = v_4(c_28, d_28, t);
    t = reverse_acc_2_0(_id, t_4, t);
    t = map_1_0(x_4, t);
    {
      ATerm i_12 = t;
      int j_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_13), term_z_12), term_x_12), term_s_12), term_o_12), term_n_12), term_m_12), term_l_12), term_k_12);
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
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_13 = ATgetFirst((ATermList) t);
                ATerm i_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_28;
          }
        ;
        LocalPopChoice(f_13);
      }
    else
      {
        t = e_13;
        t = (ATerm) ATinsert(ATempty, o_28);
      }
    p_28 = t;
    t = term_k_8;
    q_28 = t;
    t = SSL_printnl(q_28, p_28);
    t = o_28;
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
ATerm u_4 (ATerm a_27, ATerm b_27, ATerm t)
{
  t = SSL_strcat(a_27, b_27);
  return(t);
}
ATerm debug_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  u_28 = t;
  t = b_79(t);
  v_28 = t;
  t = term_t_6;
  w_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_28), v_28);
  x_28 = t;
  t = SSL_printnl(w_28, x_28);
  t = u_28;
  return(t);
}
ATerm map_1_0 (ATerm g_66 (ATerm), ATerm t)
{
  ATerm o_29 (ATerm t)
  {
    ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL;
    j_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_29;
      }
    else
      {
        ATerm j_15 = NULL,x_15 = NULL,y_15 = NULL,m_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_29 = ATgetFirst((ATermList) t);
            n_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_29);
        j_15 = t;
        t = m_29;
        t = g_66(t);
        x_15 = t;
        t = n_29;
        t = o_29(t);
        y_15 = t;
        t = (ATerm) ATinsert(CheckATermList(y_15), x_15);
        m_7 = t;
        t = SSLsetAnnotations(m_7, j_15);
      }
    return(t);
  }
  t = o_29(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_29 = NULL;
      w_29 = t;
      t = SSL_is_string(w_29);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
        ATerm p_13 = t;
        int r_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_4, t);
            ;
            LocalPopChoice(r_13);
          }
        else
          {
            t = p_13;
            {
              ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
              c_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_30 = ATgetArgument(t, 0);
                  t = d_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_30 = ATgetArgument(t, 0);
                      t = d_30;
                      {
                        ATerm s_13 = t;
                        int t_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_13);
                          }
                        else
                          {
                            t = s_13;
                            t = debug_1_0(a_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_30 = NULL,j_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_30 = ATgetArgument(t, 0);
                          e_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_30;
                      t = eval_config_0_0(t);
                      i_30 = t;
                      t = e_30;
                      t = eval_config_0_0(t);
                      j_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
                      t = u_4(i_30, j_30, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_4 (ATerm q_43, ATerm r_43, ATerm t)
{
  t = SSL_table_get(q_43, r_43);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  n_30 = t;
  t = term_g_11;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, n_30);
  t = v_4(o_30, n_30, t);
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL,r_30 = NULL;
        t = eval_config_0_0(t);
        p_30 = t;
        t = term_g_11;
        r_30 = t;
        t = SSL_table_put(r_30, n_30, p_30);
        t = p_30;
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
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
  ATerm u_30 = NULL,v_30 = NULL;
  t = term_w_13;
  u_30 = t;
  t = term_r_6;
  v_30 = t;
  t = term_x_13;
  t = y_4(u_30, v_30, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_y_13;
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
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
  t = term_w_13;
  y_30 = t;
  t = term_r_6;
  z_30 = t;
  t = term_x_13;
  t = y_4(y_30, z_30, t);
  t = term_z_13;
  w_30 = t;
  t = term_r_6;
  x_30 = t;
  t = term_a_14;
  t = y_4(w_30, x_30, t);
  t = term_b_14;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_5, e_5, f_5, t);
      ;
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      t = Option_3_0(k_5, m_5, o_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_51 (ATerm), ATerm h_51 (ATerm), ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,q_7 = NULL;
  f_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_31 = ATgetFirst((ATermList) t);
      c_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_31);
  a_31 = t;
  t = b_31;
  t = g_51(t);
  d_31 = t;
  t = c_31;
  t = h_51(t);
  e_31 = t;
  t = (ATerm) ATinsert(CheckATermList(e_31), d_31);
  q_7 = t;
  t = SSLsetAnnotations(q_7, a_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,p_31 = NULL,q_31 = NULL,w_7 = NULL;
  k_31 = t;
  {
    ATerm g_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_14;
        t = g_85(t);
        ;
        LocalPopChoice(i_14);
      }
    else
      {
        t = g_14;
      }
    t = k_31;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_31 = ATgetFirst((ATermList) t);
        n_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_31);
    l_31 = t;
    t = term_x_6;
    q_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_6, m_31);
    t = y_4(q_31, m_31, t);
    t = n_31;
    {
      ATerm a_32 (ATerm t)
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_14 = t;
            int n_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_31 = NULL;
                t_31 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_31;
                ;
                LocalPopChoice(n_14);
              }
            else
              {
                t = m_14;
                t = g_85(t);
                t = Cons_2_0(_id, a_32, t);
              }
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            {
              ATerm w_31 = NULL,x_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_31 = ATgetFirst((ATermList) t);
                  x_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_31), (ATerm) ATmakeAppl(sym_Undefined_1, w_31));
            }
          }
        return(t);
      }
      t = a_32(t);
      p_31 = t;
      t = (ATerm) ATinsert(CheckATermList(p_31), (ATerm) ATmakeAppl(sym_Program_1, m_31));
      w_7 = t;
      t = SSLsetAnnotations(w_7, l_31);
    }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  if(match_string(t, "--help"))
    {
      t = s_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_32;
        }
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL;
  t = term_o_14;
  t_32 = t;
  t = term_r_6;
  u_32 = t;
  t = term_p_14;
  t = y_4(t_32, u_32, t);
  t = term_q_14;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,q_32 = NULL,r_32 = NULL;
  h_32 = t;
  t = term_h_11;
  j_32 = t;
  t = term_j_11;
  q_32 = t;
  t = (ATerm) ATempty;
  r_32 = t;
  t = SSL_table_put(j_32, q_32, r_32);
  t = h_32;
  {
    ATerm s_5 (ATerm t)
    {
      ATerm s_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_85(t);
          ;
          LocalPopChoice(u_14);
        }
      else
        {
          t = s_14;
          {
            ATerm v_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, a_6, b_6, t);
                ;
                LocalPopChoice(w_14);
              }
            else
              {
                t = v_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_5, t);
    {
      ATerm x_14 = t;
      int z_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_33 = NULL;
          b_33 = t;
          {
            ATerm a_15 = t;
            int b_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_17 = NULL;
                t = b_33;
                {
                  ATerm c_15 = t;
                  int d_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_15);
                    }
                  else
                    {
                      t = c_15;
                      t = fetch_1_0(e_6, t);
                    }
                  t = b_33;
                  t = default_system_usage_0_0(t);
                  t = term_e_7;
                  d_17 = t;
                  t = SSL_exit(d_17);
                }
                ;
                LocalPopChoice(b_15);
              }
            else
              {
                t = a_15;
                {
                  ATerm o_17 = NULL;
                  t = term_w_13;
                  t = get_config_0_0(t);
                  t = b_33;
                  t = default_system_about_0_0(t);
                  t = term_e_7;
                  o_17 = t;
                  t = SSL_exit(o_17);
                }
              }
          }
          ;
          LocalPopChoice(z_14);
        }
      else
        {
          t = x_14;
          {
            ATerm e_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
                ATerm j_6 (ATerm t)
                {
                  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,z_7 = NULL;
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
                  if(((f_32 != NULL) && (f_32 != t)))
                    _fail(t);
                  else
                    f_32 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_33);
                  z_7 = t;
                  t = SSLsetAnnotations(z_7, f_33);
                  return(t);
                }
                t = fetch_1_0(j_6, t);
                t = term_t_6;
                d_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_32)), term_g_15);
                e_33 = t;
                t = SSL_printnl(d_33, e_33);
                t = (ATerm) ATmakeAppl(sym__2, term_t_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_32)), term_g_15));
                t = default_system_usage_0_0(t);
                t = term_w_6;
                c_33 = t;
                t = SSL_exit(c_33);
                ;
                LocalPopChoice(f_15);
              }
            else
              {
                t = e_15;
              }
          }
        }
      g_32 = t;
      t = term_h_11;
      i_32 = t;
      t = SSL_table_destroy(i_32);
      t = g_32;
    }
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm h_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_15);
    }
  else
    {
      t = h_15;
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
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_6, n_6, o_6, t);
                  ;
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  {
                    ATerm u_15 = t;
                    int z_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(z_15);
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
  ATerm n_33 = NULL,o_33 = NULL;
  t = term_a_16;
  n_33 = t;
  t = term_r_6;
  o_33 = t;
  t = term_b_16;
  t = y_4(n_33, o_33, t);
  t = term_c_16;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_d_16;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm v_17 = NULL,x_17 = NULL,c_18 = NULL,e_18 = NULL,f_18 = NULL,f_8 = NULL;
  f_18 = t;
  if(match_cons(t, sym__2))
    {
      x_17 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  v_17 = t;
  t = c_18;
  t = visamb_0_0(t);
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_17, e_18);
  f_8 = t;
  t = SSLsetAnnotations(f_8, v_17);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(k_6, t);
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL,r_17 = NULL,u_17 = NULL;
        y_33 = t;
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
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
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              t = term_i_16;
              r_17 = t;
            }
          t = not_null(r_17);
          t = ReadFromFile_0_0(t);
          u_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_33, u_17);
          t = apply_strategy_1_0(q_6, t);
          t = output_file_0_0(t);
          t = report_success_0_0(t);
        }
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
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

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
ATerm term_n_18;
ATerm term_q_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_t_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_u_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_k_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_8;
ATerm term_n_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
void init_constant_terms (void)
{
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_g_8, term_x_7);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_7);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_o_7);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_u_11, term_v_11);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_v_14, term_o_7);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym__2, term_d_15, term_o_7);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_z_15, term_o_7);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_g_17, term_o_7);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm d_4 (ATerm e_41, ATerm f_41, ATerm);
ATerm foldr_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_92 (ATerm), ATerm);
ATerm u_1 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm f_4 (ATerm e_44, ATerm f_44, ATerm);
ATerm g_4 (ATerm s_47, ATerm t_47, ATerm);
ATerm i_4 (ATerm r_90 (ATerm), ATerm w_419, ATerm w_47, ATerm);
ATerm h_4 (ATerm o_47, ATerm p_47, ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm k_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm lit_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm prod_3_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm);
ATerm cf_1_0 (ATerm y_68 (ATerm), ATerm);
ATerm lex_1_0 (ATerm z_68 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm b_3 (ATerm);
ATerm Lexical_0_0 (ATerm);
ATerm b_11 (ATerm h_9, ATerm);
ATerm abbrev_term_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm appl_2_0 (ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm);
ATerm yield_0_0 (ATerm);
ATerm o_4 (ATerm l_24, ATerm);
ATerm parsetree_2_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm);
ATerm amb_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm p_4 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_31, ATerm i_31, ATerm);
ATerm q_4 (ATerm e_82 (ATerm), ATerm f_31, ATerm e_31, ATerm);
ATerm foldr_3_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm z_3 (ATerm);
ATerm bu_collect_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm j_4 (ATerm);
ATerm visamb_0_0 (ATerm);
ATerm _2_0 (ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm r_16 (ATerm h_16, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm r_4 (ATerm u_47, ATerm);
ATerm s_4 (ATerm g_44, ATerm h_44, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm x_4 (ATerm);
ATerm b_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_4 (ATerm v_48, ATerm w_48, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_4 (ATerm t_53, ATerm u_53, ATerm s_53, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm h_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm w_68 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_4 (ATerm u_38, ATerm v_38, ATerm);
ATerm debug_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_4 (ATerm k_55, ATerm l_55, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm);
ATerm v_6 (ATerm);
ATerm parse_options_p__1_0 (ATerm u_96 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm parse_options_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
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
  t = term_o_7;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_p_7;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_7), b_0);
  m_0 = t;
  t = SSL_printnl(f_0, m_0);
  t = term_r_7;
  n_0 = t;
  t = SSL_exit(n_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_7;
  t = get_config_0_0(t);
  return(t);
}
ATerm d_4 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_41, f_41);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      t = SSL_addr(e_41, f_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_84 (ATerm), ATerm e_84 (ATerm), ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_84(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm y_0 = NULL,b_1 = NULL,e_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_0 = ATgetFirst((ATermList) t);
            b_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_1;
        t = foldr_2_0(d_84, e_84, t);
        e_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_0, e_1);
        t = e_84(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm q_0 = NULL,r_0 = NULL;
  if(match_cons(t, sym__2))
    {
      q_0 = ATgetArgument(t, 0);
      r_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_4(q_0, r_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_1 = NULL,e_0 = NULL,i_0 = NULL;
  t = times_0_0(t);
  e_0 = t;
  t = SSL_explode_term(e_0);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      i_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_0;
  t = foldr_2_0(s_1, t_1, t);
  j_1 = t;
  t = SSL_TicksToSeconds(j_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_2;
        if((j_2 != t))
          {
            _fail(t);
          }
        t = i_2;
        ;
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
        t = (ATerm) ATmakeAppl(sym__2, j_2, l_2);
        {
          ATerm b_8 = t;
          int c_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_2, l_2);
              ;
              LocalPopChoice(c_8);
            }
          else
            {
              t = b_8;
              t = SSL_gtr(j_2, l_2);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_2, l_2);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 = NULL,s_2 = NULL;
      p_2 = t;
      t = term_g_8;
      t = get_config_0_0(t);
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_2, term_r_7);
      t = geq_0_0(t);
      t = p_2;
      t = b_92(t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  t = run_time_0_0(t);
  u_2 = t;
  t = term_o_7;
  t = whoami_0_0(t);
  v_2 = t;
  t = term_p_7;
  w_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), u_2), term_h_8), v_2);
  x_2 = t;
  t = SSL_printnl(w_2, x_2);
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), u_2), term_h_8), v_2));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(u_1, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_3 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_7;
  d_3 = t;
  t = SSL_exit(d_3);
  return(t);
}
ATerm f_4 (ATerm e_44, ATerm f_44, ATerm t)
{
  ATerm e_3 = NULL;
  t = SSL_fputc(e_44, f_44);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
  return(t);
}
ATerm g_4 (ATerm s_47, ATerm t_47, ATerm t)
{
  ATerm g_3 = NULL;
  t = SSL_write_term_to_stream_text(s_47, t_47);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_3);
  return(t);
}
ATerm i_4 (ATerm r_90 (ATerm), ATerm w_419, ATerm w_47, ATerm t)
{
  ATerm h_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_419, term_j_8);
  t = open_stream_0_0(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, w_47);
  t = r_90(t);
  t = fclose_0_0(t);
  t = w_47;
  return(t);
}
ATerm h_4 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm i_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_47, p_47);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_3);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = fetch_1_0(e_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  if(match_cons(t, sym__2))
    {
      n_3 = ATgetArgument(t, 0);
      o_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(f_2, n_3, o_3, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm q_3 = NULL,s_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if(match_cons(l_8, sym_Stream_1))
        {
          q_3 = ATgetArgument(l_8, 0);
        }
      else
        _fail(t);
      s_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_4(q_3, s_3, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm t_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(k_2, t_3, w_3, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_3 = NULL,k_4 = NULL,z_4 = NULL,a_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if(match_cons(m_8, sym_Stream_1))
        {
          k_4 = ATgetArgument(m_8, 0);
        }
      else
        _fail(t);
      z_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_4(k_4, z_4, t);
  x_3 = t;
  t = term_n_8;
  a_5 = t;
  t = x_3;
  if(match_cons(t, sym_Stream_1))
    {
      d_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, x_3);
  t = f_4(a_5, d_5, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  j_3 = t;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm o_8 = t;
      int r_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_1 (ATerm t)
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
          t = fetch_1_0(x_1, t);
          ;
          LocalPopChoice(r_8);
        }
      else
        {
          t = o_8;
          t = term_s_8;
          if(((k_3 != NULL) && (k_3 != t)))
            _fail(t);
          else
            k_3 = t;
        }
      return(t);
    }
    t = _2_0(w_1, _id, t);
    t = j_3;
    {
      ATerm y_1 (ATerm t)
      {
        ATerm l_3 = NULL;
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_3), l_3);
        return(t);
      }
      t = _2_0(_id, y_1, t);
      {
        ATerm t_8 = t;
        int u_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(b_2, c_2, t);
            ;
            LocalPopChoice(u_8);
          }
        else
          {
            t = t_8;
            t = _2_0(_id, h_2, t);
          }
      }
    }
  }
  return(t);
}
ATerm lit_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,l_5 = NULL,r_5 = NULL,o_0 = NULL,p_0 = NULL;
  r_5 = t;
  if(match_cons(t, sym_lit_1))
    {
      f_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  e_5 = t;
  t = f_5;
  t = c_69(t);
  l_5 = t;
  p_0 = t;
  t = (ATerm) ATmakeAppl(sym_lit_1, l_5);
  o_0 = t;
  t = SSLsetAnnotations(o_0, e_5);
  return(t);
}
ATerm prod_3_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,s_0 = NULL,t_0 = NULL;
  g_6 = t;
  if(match_cons(t, sym_prod_3))
    {
      v_5 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      a_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  u_5 = t;
  t = v_5;
  t = s_69(t);
  b_6 = t;
  t = y_5;
  t = t_69(t);
  e_6 = t;
  t = a_6;
  t = u_69(t);
  f_6 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_prod_3, b_6, e_6, f_6);
  s_0 = t;
  t = SSLsetAnnotations(s_0, u_5);
  return(t);
}
ATerm cf_1_0 (ATerm y_68 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,k_7 = NULL,u_0 = NULL,v_0 = NULL;
  k_7 = t;
  if(match_cons(t, sym_cf_1))
    {
      z_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_7);
  y_6 = t;
  t = z_6;
  t = y_68(t);
  a_7 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_cf_1, a_7);
  u_0 = t;
  t = SSLsetAnnotations(u_0, y_6);
  return(t);
}
ATerm lex_1_0 (ATerm z_68 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,k_8 = NULL,p_8 = NULL,q_8 = NULL,w_0 = NULL,x_0 = NULL;
  q_8 = t;
  if(match_cons(t, sym_lex_1))
    {
      k_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_8);
  d_8 = t;
  t = k_8;
  t = z_68(t);
  p_8 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_lex_1, p_8);
  w_0 = t;
  t = SSLsetAnnotations(w_0, d_8);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = prod_3_0(n_2, o_2, _id, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = Cons_2_0(q_2, r_2, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = cf_1_0(_id, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = lex_1_0(_id, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = prod_3_0(_id, b_3, _id, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = lit_1_0(_id, t);
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_8 = NULL;
      t = appl_2_0(m_2, _id, t);
      t = yield_0_0(t);
      x_8 = t;
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, x_8));
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      t = appl_2_0(t_2, _id, t);
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm b_11 (ATerm h_9, ATerm t)
{
  t = SSL_is_int(h_9);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL,k_9 = NULL,q_9 = NULL,t_9 = NULL;
      j_9 = t;
      if(match_cons(t, sym_amb_1))
        {
          k_9 = ATgetArgument(t, 0);
          t = k_9;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_9 = ATgetFirst((ATermList) t);
              t_9 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm a_9 = t;
                int b_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = b_11(j_9, t);
                    ;
                    LocalPopChoice(b_9);
                  }
                else
                  {
                    t = a_9;
                    t = q_9;
                  }
              }
            }
          else
            {
              t = b_11(j_9, t);
            }
        }
      else
        {
          t = b_11(j_9, t);
        }
      ;
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm m_1 = NULL,r_1 = NULL,v_1 = NULL;
        m_1 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm c_9 = ATgetArgument(t, 0);
            if(match_cons(c_9, sym_prod_3))
              {
                ATerm e_9 = ATgetArgument(c_9, 0);
                v_1 = ATgetArgument(c_9, 1);
                {
                  ATerm f_9 = ATgetArgument(c_9, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm d_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = m_1;
        {
          ATerm g_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              ;
              LocalPopChoice(i_9);
            }
          else
            {
              t = g_9;
              {
                ATerm z_1 = NULL,a_2 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    z_1 = ATgetArgument(t, 0);
                    a_2 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = a_2;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym_N_2, v_1, r_1);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm c_11 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_11, t);
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_78(t);
      }
    return(t);
  }
  t = c_11(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm m_11 = NULL,n_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_11 = ATgetFirst((ATermList) t);
            n_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_11;
        {
          ATerm c_3 (ATerm t)
          {
            t = n_11;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_3, t);
        }
      }
    }
  return(t);
}
ATerm appl_2_0 (ATerm v_69 (ATerm), ATerm w_69 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL,w_11 = NULL,y_11 = NULL,c_12 = NULL,d_12 = NULL,z_0 = NULL,a_1 = NULL;
  d_12 = t;
  if(match_cons(t, sym_appl_2))
    {
      t_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_12);
  r_11 = t;
  t = t_11;
  t = v_69(t);
  y_11 = t;
  t = w_11;
  t = w_69(t);
  c_12 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_appl_2, y_11, c_12);
  z_0 = t;
  t = SSLsetAnnotations(z_0, r_11);
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  ATerm p_12 (ATerm t)
  {
    ATerm p_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_12 = NULL;
        ATerm f_3 (ATerm t)
        {
          t = map_1_0(p_12, t);
          return(t);
        }
        t = appl_2_0(_id, f_3, t);
        if(match_cons(t, sym_appl_2))
          {
            ATerm s_9 = ATgetArgument(t, 0);
            m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_12;
        t = concat_0_0(t);
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = p_9;
        {
          ATerm n_12 = NULL;
          n_12 = t;
          t = (ATerm) ATinsert(ATempty, n_12);
        }
      }
    return(t);
  }
  t = p_12(t);
  h_12 = t;
  t = SSL_implode_string(h_12);
  return(t);
}
ATerm o_4 (ATerm l_24, ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  t = l_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_12 = ATgetFirst((ATermList) t);
      {
        ATerm u_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_12;
  t = yield_0_0(t);
  r_12 = t;
  t = l_24;
  t = map_1_0(abbrev_term_0_0, t);
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, r_12, s_12);
  return(t);
}
ATerm parsetree_2_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_1 = NULL,d_1 = NULL;
  b_13 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_13);
  u_12 = t;
  t = x_12;
  t = c_70(t);
  z_12 = t;
  t = y_12;
  t = d_70(t);
  a_13 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, z_12, a_13);
  c_1 = t;
  t = SSLsetAnnotations(c_1, u_12);
  return(t);
}
ATerm amb_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,f_1 = NULL,g_1 = NULL;
  h_13 = t;
  if(match_cons(t, sym_amb_1))
    {
      f_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_13);
  e_13 = t;
  t = f_13;
  t = x_69(t);
  g_13 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, g_13);
  f_1 = t;
  t = SSLsetAnnotations(f_1, e_13);
  return(t);
}
ATerm p_4 (ATerm h_82 (ATerm), ATerm i_82 (ATerm), ATerm j_31, ATerm i_31, ATerm t)
{
  t = i_82(t);
  {
    ATerm m_3 (ATerm t)
    {
      ATerm l_13 = NULL;
      l_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_31, l_13);
      t = h_82(t);
      return(t);
    }
    t = fetch_1_0(m_3, t);
    t = i_31;
  }
  return(t);
}
ATerm q_4 (ATerm e_82 (ATerm), ATerm f_31, ATerm e_31, ATerm t)
{
  t = f_31;
  {
    ATerm u_13 (ATerm t)
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_31;
          ;
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm x_9 = t;
            int y_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
                n_13 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_13 = ATgetFirst((ATermList) t);
                    p_13 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_13;
                {
                  ATerm p_3 (ATerm t)
                  {
                    t = e_31;
                    return(t);
                  }
                  t = p_4(e_82, p_3, o_13, p_13, t);
                  t = u_13(t);
                }
                ;
                LocalPopChoice(y_9);
              }
            else
              {
                t = x_9;
                t = Cons_2_0(_id, u_13, t);
              }
          }
        }
      return(t);
    }
    t = u_13(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_84(t);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm y_13 = NULL,z_13 = NULL,e_14 = NULL,f_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_13 = ATgetFirst((ATermList) t);
            z_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_13;
        t = h_84(t);
        e_14 = t;
        t = z_13;
        t = foldr_3_0(f_84, g_84, h_84, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_14, f_14);
        t = g_84(t);
      }
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4(z_3, y_2, z_2, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm a_3 = NULL;
  if(match_cons(t, sym__2))
    {
      a_3 = ATgetArgument(t, 0);
      if((a_3 != ATgetArgument(t, 1)))
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
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_14 (ATerm t)
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 = NULL,g_2 = NULL;
            ATerm v_3 (ATerm t)
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Cons_2_0(x_82, _id, t);
                  ;
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  t = (ATerm) ATempty;
                }
              return(t);
            }
            t = SRTS_some(t_14, t);
            if(((d_2 != NULL) && (d_2 != t)))
              _fail(t);
            else
              d_2 = t;
            t = SSL_explode_term(not_null(d_2));
            if(match_cons(t, sym__2))
              {
                ATerm h_10 = ATgetArgument(t, 0);
                if(((g_2 != NULL) && (g_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(g_2);
            t = foldr_3_0(r_3, u_3, v_3, t);
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm s_14 = NULL;
              t = x_82(t);
              s_14 = t;
              t = (ATerm) ATinsert(ATempty, s_14);
            }
          }
        return(t);
      }
      t = t_14(t);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = bu_collect_1_0(b_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = amb_1_0(_id, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = map_1_0(j_4, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_int_to_string(y_14);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      x_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_4(x_14, t);
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, w_14);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  t = parsetree_2_0(a_4, _id, t);
  t = parsetree_2_0(c_4, e_4, t);
  return(t);
}
ATerm _2_0 (ATerm l_58 (ATerm), ATerm m_58 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,b_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,h_1 = NULL,i_1 = NULL;
  h_15 = t;
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_15);
  z_14 = t;
  t = b_15;
  t = l_58(t);
  f_15 = t;
  t = e_15;
  t = m_58(t);
  g_15 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, g_15);
  h_1 = t;
  t = SSLsetAnnotations(h_1, z_14);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  k_15 = t;
  t = dtime_0_0(t);
  t = k_15;
  t = t_93(t);
  l_15 = t;
  t = dtime_0_0(t);
  n_15 = t;
  t = l_15;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_15), (ATerm) ATmakeAppl(sym_Runtime_1, n_15)), p_15);
  return(t);
}
ATerm r_16 (ATerm h_16, ATerm t)
{
  t = SSL_fclose(h_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_16 = NULL,p_16 = NULL;
  p_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_16 = ATgetArgument(t, 0);
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_16);
            ;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = r_16(p_16, t);
          }
      }
    }
  else
    {
      t = r_16(p_16, t);
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
  ATerm u_16 = NULL;
  t = SSL_fopen(g_44, h_44);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_16 = NULL;
  t = SSL_stdin_stream();
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_17 = NULL;
  t = SSL_stdout_stream();
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_17 = NULL;
  t = SSL_stderr_stream();
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_17);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm m_17 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_17;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm p_17 = NULL;
  p_17 = t;
  t = SSL_is_string(p_17);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      ATerm l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL,y_3 = NULL;
        j_17 = t;
        t = SSL_explode_term(j_17);
        if(match_cons(t, sym__2))
          {
            ATerm o_10 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_10) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_10 = ATgetArgument(t, 1);
              if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
                {
                  y_3 = ATgetFirst((ATermList) p_10);
                  {
                    ATerm q_10 = (ATerm) ATgetNext((ATermList) p_10);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = y_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = y_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = y_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_17 = NULL,l_17 = NULL;
              t = _2_0(l_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  k_17 = ATgetArgument(t, 0);
                  l_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_4(k_17, l_17, t);
              ;
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              {
                ATerm n_17 = NULL,o_17 = NULL;
                t = _2_0(m_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_17 = ATgetArgument(t, 0);
                    o_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_4(n_17, o_17, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_17 = NULL;
      u_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_17, term_w_10);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = debug_1_0(n_4, t);
      _fail(t);
    }
  r_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(t_17, t);
  s_17 = t;
  t = r_17;
  t = fclose_0_0(t);
  t = s_17;
  return(t);
}
ATerm fetch_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_78, _id, t);
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = Cons_2_0(_id, w_17, t);
      }
    return(t);
  }
  t = w_17(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm y_17 = NULL;
  y_17 = t;
  if(match_string(t, "-k"))
    {
      t = y_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_17;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  t = SSL_string_to_int(z_17);
  a_18 = t;
  t = term_z_10;
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, a_18);
  t = y_4(b_18, a_18, t);
  t = z_17;
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, x_4, b_5, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm d_18 = NULL;
  d_18 = t;
  if(match_string(t, "-S"))
    {
      t = d_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_18;
    }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  t = term_g_8;
  e_18 = t;
  t = term_x_7;
  f_18 = t;
  t = term_d_11;
  t = y_4(e_18, f_18, t);
  t = term_e_11;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  t = SSL_string_to_int(g_18);
  h_18 = t;
  t = term_g_8;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, h_18);
  t = y_4(i_18, h_18, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_18);
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL;
  t = term_h_11;
  j_18 = t;
  t = term_o_7;
  k_18 = t;
  t = term_i_11;
  t = y_4(j_18, k_18, t);
  t = term_j_11;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, h_5, i_5, t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = l_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_5, m_5, n_5, t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = Option_3_0(q_5, s_5, t_5, t);
          }
      }
    }
  return(t);
}
ATerm y_4 (ATerm v_48, ATerm w_48, ATerm t)
{
  ATerm l_18 = NULL;
  t = term_s_11;
  l_18 = t;
  t = SSL_table_put(l_18, v_48, w_48);
  t = (ATerm) ATmakeAppl(sym__3, term_s_11, v_48, w_48);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
      t = term_o_7;
      t = d_0(t);
      q_18 = t;
      t = term_u_11;
      r_18 = t;
      t = term_v_11;
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_11, term_v_11, q_18);
      t = w_4(r_18, s_18, q_18, t);
      _fail(t);
    }
  else
    {
      ATerm v_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_18 = ATgetFirst((ATermList) t);
          p_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_18;
      t = a_0(t);
      t = term_o_7;
      t = c_0(t);
      v_18 = t;
      t = (ATerm) ATinsert(CheckATermList(p_18), v_18);
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm x_18 = NULL;
  x_18 = t;
  if(match_string(t, "-o"))
    {
      t = x_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_18;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  t = term_x_11;
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, y_18);
  t = y_4(z_18, y_18, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_18);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_z_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_5, x_5, z_5, t);
  return(t);
}
ATerm w_4 (ATerm t_53, ATerm u_53, ATerm s_53, ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_12 = ATgetArgument(t, 0);
            ATerm f_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_53, u_53);
        t = v_4(t_53, u_53, t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = (ATerm) ATempty;
      }
    c_19 = t;
    t = (ATerm) ATinsert(CheckATermList(c_19), s_53);
    d_19 = t;
    t = SSL_table_put(t_53, u_53, d_19);
    t = b_19;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
      t = term_o_7;
      t = l_0(t);
      o_19 = t;
      t = term_u_11;
      p_19 = t;
      t = term_v_11;
      q_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_11, term_v_11, o_19);
      t = w_4(p_19, q_19, o_19, t);
      _fail(t);
    }
  else
    {
      ATerm u_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_19 = ATgetFirst((ATermList) t);
          l_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_19 = ATgetFirst((ATermList) t);
          n_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_19;
      t = j_0(t);
      t = m_19;
      t = k_0(t);
      u_19 = t;
      t = (ATerm) ATinsert(CheckATermList(n_19), u_19);
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  if(match_string(t, "-i"))
    {
      t = w_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_19;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  x_19 = t;
  t = term_g_12;
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, x_19);
  t = y_4(y_19, x_19, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_19);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_6, d_6, h_6, t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_20 = ATgetFirst((ATermList) t);
      b_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_20 = NULL,g_20 = NULL;
        t = b_20;
        t = h_0(t);
        f_20 = t;
        t = a_20;
        t = g_0(t);
        g_20 = t;
        t = b_20;
        {
          ATerm i_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(f_20), g_20);
            return(t);
          }
          t = reverse_acc_2_0(g_0, i_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_7;
      t = h_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,k_1 = NULL,l_1 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_20);
  h_20 = t;
  t = i_20;
  t = w_68(t);
  j_20 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_20);
  k_1 = t;
  t = SSLsetAnnotations(k_1, h_20);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_20), term_j_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_7;
      t = get_config_0_0(t);
      n_20 = t;
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      {
        ATerm j_6 (ATerm t)
        {
          ATerm k_6 (ATerm t)
          {
            if(((n_20 != NULL) && (n_20 != t)))
              _fail(t);
            else
              n_20 = t;
            return(t);
          }
          t = Program_1_0(k_6, t);
          return(t);
        }
        t = fetch_1_0(j_6, t);
      }
    }
  {
    ATerm o_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_12), not_null(n_20)), term_v_12);
        t = echo_0_0(t);
        ;
        LocalPopChoice(q_12);
      }
    else
      {
        t = o_12;
      }
    t = term_c_13;
    t = echo_0_0(t);
    t = term_u_11;
    o_20 = t;
    t = term_v_11;
    p_20 = t;
    t = term_d_13;
    t = v_4(o_20, p_20, t);
    t = reverse_acc_2_0(_id, l_6, t);
    t = map_1_0(m_6, t);
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_13), term_w_13), term_v_13), term_t_13), term_s_13), term_r_13), term_q_13), term_m_13), term_k_13);
          t = echo_0_0(t);
          ;
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
        }
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,n_1 = NULL,o_1 = NULL;
  u_20 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_20);
  r_20 = t;
  t = s_20;
  t = x_68(t);
  t_20 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_20);
  n_1 = t;
  t = SSLsetAnnotations(n_1, r_20);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_14 = ATgetFirst((ATermList) t);
                ATerm d_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_20;
          }
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATinsert(ATempty, y_20);
      }
    z_20 = t;
    t = term_s_8;
    a_21 = t;
    t = SSL_printnl(a_21, z_20);
    t = y_20;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_7;
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
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL;
  e_21 = t;
  t = p_90(t);
  f_21 = t;
  t = term_p_7;
  g_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_21), f_21);
  h_21 = t;
  t = SSL_printnl(g_21, h_21);
  t = e_21;
  return(t);
}
ATerm map_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm i_21 (ATerm t)
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = Cons_2_0(a_78, i_21, t);
      }
    return(t);
  }
  t = i_21(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL;
      o_21 = t;
      t = SSL_is_string(o_21);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm n_14 = t;
        int o_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_6, t);
            ;
            LocalPopChoice(o_14);
          }
        else
          {
            t = n_14;
            {
              ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
              s_21 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_21 = ATgetArgument(t, 0);
                  t = t_21;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_21 = ATgetArgument(t, 0);
                      t = t_21;
                      {
                        ATerm p_14 = t;
                        int q_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_14);
                          }
                        else
                          {
                            t = p_14;
                            t = debug_1_0(o_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_21 = NULL,z_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          t_21 = ATgetArgument(t, 0);
                          u_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = t_21;
                      t = eval_config_0_0(t);
                      y_21 = t;
                      t = u_21;
                      t = eval_config_0_0(t);
                      z_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_21, z_21);
                      t = u_4(y_21, z_21, t);
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
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  t = term_s_11;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_11, c_22);
  t = v_4(d_22, c_22, t);
  {
    ATerm r_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL,f_22 = NULL;
        t = eval_config_0_0(t);
        e_22 = t;
        t = term_s_11;
        f_22 = t;
        t = SSL_table_put(f_22, c_22, e_22);
        t = e_22;
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = r_14;
      }
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  t = term_v_14;
  g_22 = t;
  t = term_o_7;
  h_22 = t;
  t = term_a_15;
  t = y_4(g_22, h_22, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL;
  t = term_v_14;
  i_22 = t;
  t = term_o_7;
  j_22 = t;
  t = term_a_15;
  t = y_4(i_22, j_22, t);
  t = term_d_15;
  k_22 = t;
  t = term_o_7;
  l_22 = t;
  t = term_i_15;
  t = y_4(k_22, l_22, t);
  t = term_j_15;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_m_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_6, q_6, r_6, t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      t = Option_3_0(s_6, t_6, u_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_63 (ATerm), ATerm b_63 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,p_1 = NULL,q_1 = NULL;
  r_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_22 = ATgetFirst((ATermList) t);
      o_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_22);
  m_22 = t;
  t = n_22;
  t = a_63(t);
  p_22 = t;
  t = o_22;
  t = b_63(t);
  q_22 = t;
  q_1 = t;
  t = (ATerm) ATinsert(CheckATermList(q_22), p_22);
  p_1 = t;
  t = SSLsetAnnotations(p_1, m_22);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  t = term_s_7;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, w_22);
  t = y_4(x_22, w_22, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, w_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_15;
        t = u_96(t);
        ;
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
      }
    t = v_22;
    {
      ATerm w_6 (ATerm t)
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_15 = t;
            int y_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(y_15);
              }
            else
              {
                t = x_15;
                t = u_96(t);
                t = Cons_2_0(_id, w_6, t);
              }
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            {
              ATerm z_22 = NULL,a_23 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_22 = ATgetFirst((ATermList) t);
                  a_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_23), (ATerm) ATmakeAppl(sym_Undefined_1, z_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(v_6, w_6, t);
    }
  }
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  if(match_string(t, "--help"))
    {
      t = o_23;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_23;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_23;
        }
    }
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL;
  t = term_z_15;
  p_23 = t;
  t = term_o_7;
  q_23 = t;
  t = term_a_16;
  t = y_4(p_23, q_23, t);
  t = term_b_16;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  h_23 = t;
  t = term_u_11;
  k_23 = t;
  t = term_v_11;
  l_23 = t;
  t = (ATerm) ATempty;
  m_23 = t;
  t = SSL_table_put(k_23, l_23, m_23);
  t = h_23;
  {
    ATerm x_6 (ATerm t)
    {
      ATerm d_16 = t;
      int e_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_96(t);
          ;
          LocalPopChoice(e_16);
        }
      else
        {
          t = d_16;
          {
            ATerm f_16 = t;
            int g_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_7, c_7, d_7, t);
                ;
                LocalPopChoice(g_16);
              }
            else
              {
                t = f_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_23 = NULL;
          x_23 = t;
          {
            ATerm k_16 = t;
            int l_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_5 = NULL;
                t = x_23;
                {
                  ATerm n_16 = t;
                  int o_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_z_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_16);
                    }
                  else
                    {
                      t = n_16;
                      t = fetch_1_0(e_7, t);
                    }
                  t = x_23;
                  t = default_system_usage_0_0(t);
                  t = term_x_7;
                  c_5 = t;
                  t = SSL_exit(c_5);
                }
                ;
                LocalPopChoice(l_16);
              }
            else
              {
                t = k_16;
                {
                  ATerm j_5 = NULL;
                  t = term_v_14;
                  t = get_config_0_0(t);
                  t = x_23;
                  t = default_system_about_0_0(t);
                  t = term_x_7;
                  j_5 = t;
                  t = SSL_exit(j_5);
                }
              }
          }
          ;
          LocalPopChoice(j_16);
        }
      else
        {
          t = i_16;
          {
            ATerm q_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL;
                ATerm f_7 (ATerm t)
                {
                  ATerm g_7 (ATerm t)
                  {
                    if(((i_23 != NULL) && (i_23 != t)))
                      _fail(t);
                    else
                      i_23 = t;
                    return(t);
                  }
                  t = Undefined_1_0(g_7, t);
                  return(t);
                }
                t = fetch_1_0(f_7, t);
                t = term_p_7;
                y_23 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_23)), term_t_16);
                z_23 = t;
                t = SSL_printnl(y_23, z_23);
                t = (ATerm) ATmakeAppl(sym__2, term_p_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_23)), term_t_16));
                t = default_system_usage_0_0(t);
                t = term_r_7;
                a_24 = t;
                t = SSL_exit(a_24);
                ;
                LocalPopChoice(s_16);
              }
            else
              {
                t = q_16;
              }
          }
        }
      j_23 = t;
      t = term_u_11;
      n_23 = t;
      t = SSL_table_destroy(n_23);
      t = j_23;
    }
  }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        ATerm x_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = x_16;
            {
              ATerm c_17 = t;
              int d_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(i_7, j_7, l_7, t);
                  ;
                  LocalPopChoice(d_17);
                }
              else
                {
                  t = c_17;
                  {
                    ATerm e_17 = t;
                    int f_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(f_17);
                      }
                    else
                      {
                        t = e_17;
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
ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL;
  t = term_g_17;
  e_24 = t;
  t = term_o_7;
  f_24 = t;
  t = term_h_17;
  t = y_4(e_24, f_24, t);
  t = term_i_17;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_q_17;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = _2_0(_id, visamb_0_0, t);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(h_7, t);
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL,o_5 = NULL,p_5 = NULL;
        m_24 = t;
        {
          ATerm c_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((o_5 != NULL) && (o_5 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_5 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(m_7, t);
              ;
              LocalPopChoice(m_18);
            }
          else
            {
              t = c_18;
              t = term_n_18;
              o_5 = t;
            }
          t = not_null(o_5);
          t = ReadFromFile_0_0(t);
          p_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_24, p_5);
          t = apply_strategy_1_0(n_7, t);
          t = output_file_0_0(t);
          t = report_success_0_0(t);
        }
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = v_17;
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

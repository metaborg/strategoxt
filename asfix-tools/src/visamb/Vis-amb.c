#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_amb_abbr_2;
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
Symbol sym_Hashtable_1;
Symbol sym_Path_1;
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
Symbol sym_parsetree_2;
Symbol sym_amb_1;
Symbol sym_lit_1;
Symbol sym_appl_2;
Symbol sym_prod_3;
Symbol sym_lex_1;
Symbol sym_cf_1;
Symbol sym_lit_1;
static void init_module_constructors (void)
{
  sym_lexical_1 = ATmakeSymbol("lexical", 1, ATfalse);
  ATprotectSymbol(sym_lexical_1);
  sym_root_1 = ATmakeSymbol("root", 1, ATfalse);
  ATprotectSymbol(sym_root_1);
  sym_N_2 = ATmakeSymbol("N", 2, ATfalse);
  ATprotectSymbol(sym_N_2);
  sym_amb_abbr_2 = ATmakeSymbol("amb-abbr", 2, ATfalse);
  ATprotectSymbol(sym_amb_abbr_2);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
}
ATerm term_h_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_i_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_u_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_i_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_e_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_p_7);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_7);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_u_6);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_p_11, term_q_11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_u_6);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_u_6);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_u_6);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, (ATerm) ATempty);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_l_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_i_13);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_u_6);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm s_35, ATerm t_35, ATerm t);
ATerm foldr_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_107 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_4 (ATerm w_32, ATerm x_32, ATerm t);
static ATerm l_4 (ATerm b_17, ATerm c_17, ATerm t);
static ATerm n_4 (ATerm k_90 (ATerm), ATerm l_158, ATerm h_17, ATerm t);
static ATerm m_4 (ATerm x_16, ATerm y_16, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
static ATerm j_12 (ATerm f_11, ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm k_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
static ATerm t_4 (ATerm m_15, ATerm t);
static ATerm u_4 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm k_23, ATerm j_23, ATerm t);
static ATerm v_4 (ATerm e_95 (ATerm), ATerm g_23, ATerm f_23, ATerm t);
ATerm foldr_3_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm bu_collect_1_0 (ATerm t_95 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_109 (ATerm), ATerm t);
static ATerm n_23 (ATerm r_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_4 (ATerm d_17, ATerm t);
static ATerm x_4 (ATerm a_31, ATerm b_31, ATerm t);
static ATerm y_4 (ATerm y_32, ATerm z_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_25 (ATerm k_24, ATerm t);
static ATerm z_25 (ATerm t_24, ATerm u_24, ATerm v_24, ATerm t);
static ATerm a_26 (ATerm l_25, ATerm m_25, ATerm n_25, ATerm t);
static ATerm z_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_91 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_5 (ATerm b_59, ATerm c_59, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_5 (ATerm r_48, ATerm s_48, ATerm q_48, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm a_5 (ATerm o_53, ATerm p_53, ATerm t);
static ATerm b_5 (ATerm t_53, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm t_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_5 (ATerm k_50, ATerm l_50, ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_112 (ATerm), ATerm t);
static ATerm h_5 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm t);
static ATerm i_5 (ATerm m_53, ATerm n_53, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_53, ATerm s_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm d_50, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm parse_options_1_0 (ATerm o_112 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm Vis_amb_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_6;
  t = whoami_0_0(t);
  a_0 = t;
  t = term_v_6;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_6), a_0);
  e_0 = t;
  t = SSL_printnl(c_0, e_0);
  t = term_y_6;
  b_0 = t;
  t = SSL_exit(b_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_0 = NULL,r_0 = NULL;
  t = term_b_7;
  i_0 = t;
  t = term_i_7;
  r_0 = t;
  t = term_m_7;
  t = d_5(i_0, r_0, t);
  return(t);
}
static ATerm i_4 (ATerm s_35, ATerm t_35, ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_35, t_35);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = SSL_addr(s_35, t_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,y_0 = NULL,b_1 = NULL;
  w_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_0;
      t = s_97(t);
    }
  else
    {
      ATerm e_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_0 = ATgetFirst((ATermList) t);
          b_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_1;
      t = foldr_2_0(s_97, t_97, t);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, e_1);
      t = t_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_p_7;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(s_0, t_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_1 = NULL,h_0 = NULL,k_0 = NULL;
  t = times_0_0(t);
  k_0 = t;
  t = SSL_explode_term(k_0);
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      h_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_0;
  t = foldr_2_0(u_0, v_0, t);
  j_1 = t;
  t = SSL_TicksToSeconds(j_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym__2))
    {
      j_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_2;
        if((j_2 != t))
          {
            _fail(t);
          }
        t = h_2;
        LocalPopChoice(w_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
        {
          ATerm x_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_2, k_2);
              LocalPopChoice(z_7);
            }
          else
            {
              t = x_7;
              t = SSL_gtr(j_2, k_2);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL,t_2 = NULL,x_2 = NULL;
        t = term_b_7;
        t_2 = t;
        t = term_e_8;
        x_2 = t;
        t = term_f_8;
        t = d_5(t_2, x_2, t);
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_2, term_y_6);
        t = geq_0_0(t);
        t = p_2;
        t = w_107(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        t = p_2;
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,c_3 = NULL,h_3 = NULL;
  t = run_time_0_0(t);
  z_2 = t;
  t = term_u_6;
  t = whoami_0_0(t);
  a_3 = t;
  t = term_v_6;
  c_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), z_2), term_h_8), a_3);
  h_3 = t;
  t = SSL_printnl(c_3, h_3);
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), z_2), term_h_8), a_3));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_0, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_7;
  i_3 = t;
  t = SSL_exit(i_3);
  return(t);
}
static ATerm k_4 (ATerm w_32, ATerm x_32, ATerm t)
{
  ATerm l_3 = NULL;
  t = SSL_fputc(w_32, x_32);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
  return(t);
}
static ATerm l_4 (ATerm b_17, ATerm c_17, ATerm t)
{
  ATerm m_3 = NULL;
  t = SSL_write_term_to_stream_text(b_17, c_17);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
static ATerm n_4 (ATerm k_90 (ATerm), ATerm l_158, ATerm h_17, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_158, term_m_8);
  t = z_4(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, h_17);
  t = k_90(t);
  t = fclose_0_0(t);
  t = h_17;
  return(t);
}
static ATerm m_4 (ATerm x_16, ATerm y_16, ATerm t)
{
  ATerm q_3 = NULL;
  t = SSL_write_term_to_stream_baf(x_16, y_16);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_3);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Stream_1))
        {
          a_2 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(a_2, b_2, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Stream_1))
        {
          j_3 = ATgetArgument(o_8, 0);
        }
      else
        _fail(t);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(j_3, k_3, t);
  e_3 = t;
  t = term_p_8;
  f_3 = t;
  t = e_3;
  if(match_cons(t, sym_Stream_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_8, e_3);
  t = k_4(f_3, g_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_4 = NULL,f_4 = NULL,j_4 = NULL,o_4 = NULL,p_4 = NULL,r_4 = NULL,s_4 = NULL,c_5 = NULL,f_5 = NULL,j_5 = NULL,c_7 = NULL,h_7 = NULL,n_0 = NULL,m_0 = NULL;
  f_4 = t;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_4);
  s_4 = t;
  t = c_5;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t);
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_4 != NULL) && (a_4 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = term_t_8;
        a_4 = t;
      }
  }
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, f_5);
  m_0 = t;
  t = SSLsetAnnotations(m_0, s_4);
  t = f_4;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_4);
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATmakeAppl(sym__2, not_null(a_4), p_4));
  n_0 = t;
  t = SSLsetAnnotations(n_0, j_4);
  r_4 = t;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      h_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(r_4);
        t_1 = t;
        t = c_7;
        t = fetch_1_0(a_1, t);
        w_1 = t;
        t = h_7;
        if(match_cons(t, sym__2))
          {
            y_1 = ATgetArgument(t, 0);
            z_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_4(c_1, y_1, z_1, t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
        g_1 = t;
        t = SSLsetAnnotations(g_1, t_1);
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        {
          ATerm o_2 = NULL,v_2 = NULL,w_2 = NULL,d_3 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(r_4);
          o_2 = t;
          t = h_7;
          if(match_cons(t, sym__2))
            {
              w_2 = ATgetArgument(t, 0);
              d_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_4(d_1, w_2, d_3, t);
          v_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_7, v_2);
          i_1 = t;
          t = SSLsetAnnotations(i_1, o_2);
        }
      }
  }
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,v_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_10 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,v_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,l_5 = NULL,m_5 = NULL,q_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,n_2 = NULL,g_2 = NULL,e_2 = NULL,c_2 = NULL,q_1 = NULL;
        t = SSLgetAnnotations(r_10);
        v_3 = t;
        t = s_10;
        if(match_cons(t, sym_prod_3))
          {
            z_3 = ATgetArgument(t, 0);
            b_4 = ATgetArgument(t, 1);
            c_4 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_10);
        y_3 = t;
        t = z_3;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_5 = ATgetFirst((ATermList) t);
            q_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_3);
        l_5 = t;
        t = m_5;
        if(match_cons(t, sym_lex_1))
          {
            v_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_5);
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym_lex_1, v_5);
        q_1 = t;
        t = SSLsetAnnotations(q_1, u_5);
        w_5 = t;
        t = q_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_5), w_5);
        c_2 = t;
        t = SSLsetAnnotations(c_2, l_5);
        t_5 = t;
        t = b_4;
        if(match_cons(t, sym_cf_1))
          {
            g_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_4);
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, g_4);
        e_2 = t;
        t = SSLsetAnnotations(e_2, e_4);
        h_4 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, t_5, h_4, c_4);
        g_2 = t;
        t = SSLsetAnnotations(g_2, y_3);
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, d_4, v_10);
        n_2 = t;
        t = SSLsetAnnotations(n_2, v_3);
        t = yield_0_0(t);
        u_3 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, u_3));
        LocalPopChoice(b_9);
      }
    else
      {
        t = z_8;
        {
          ATerm r_6 = NULL,z_6 = NULL,a_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,k_7 = NULL,l_7 = NULL,o_5 = NULL,n_5 = NULL,k_5 = NULL;
          t = SSLgetAnnotations(r_10);
          r_6 = t;
          t = s_10;
          if(match_cons(t, sym_prod_3))
            {
              a_7 = ATgetArgument(t, 0);
              d_7 = ATgetArgument(t, 1);
              e_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_10);
          z_6 = t;
          t = d_7;
          if(match_cons(t, sym_lit_1))
            {
              k_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_7);
          g_7 = t;
          t = (ATerm) ATmakeAppl(sym_lit_1, k_7);
          k_5 = t;
          t = SSLsetAnnotations(k_5, g_7);
          l_7 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, a_7, l_7, e_7);
          n_5 = t;
          t = SSLsetAnnotations(n_5, z_6);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, f_7, v_10);
          o_5 = t;
          t = SSLsetAnnotations(o_5, r_6);
          t = (ATerm) ATempty;
        }
      }
  }
  return(t);
}
static ATerm j_12 (ATerm f_11, ATerm t)
{
  t = SSL_is_int(f_11);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL,i_11 = NULL,l_11 = NULL,m_11 = NULL;
      h_11 = t;
      if(match_cons(t, sym_amb_1))
        {
          i_11 = ATgetArgument(t, 0);
          t = i_11;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_11 = ATgetFirst((ATermList) t);
              m_11 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm e_9 = t;
                int f_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = j_12(h_11, t);
                    LocalPopChoice(f_9);
                  }
                else
                  {
                    t = e_9;
                    t = l_11;
                  }
              }
            }
          else
            {
              t = j_12(h_11, t);
            }
        }
      else
        {
          t = j_12(h_11, t);
        }
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      {
        ATerm s_7 = NULL,y_7 = NULL,d_8 = NULL;
        s_7 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm g_9 = ATgetArgument(t, 0);
            if(match_cons(g_9, sym_prod_3))
              {
                ATerm i_9 = ATgetArgument(g_9, 0);
                d_8 = ATgetArgument(g_9, 1);
                {
                  ATerm j_9 = ATgetArgument(g_9, 2);
                }
              }
            else
              _fail(t);
            {
              ATerm h_9 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = s_7;
        {
          ATerm k_9 = t;
          int l_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              LocalPopChoice(l_9);
            }
          else
            {
              t = k_9;
              {
                ATerm k_8 = NULL,l_8 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    k_8 = ATgetArgument(t, 0);
                    l_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_8;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
        }
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym_N_2, d_8, y_7);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm k_91 (ATerm), ATerm t)
{
  static ATerm t_13 (ATerm t);
  static ATerm t_13 (ATerm t)
  {
    ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
    p_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_13 = ATgetFirst((ATermList) t);
        o_13 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_8 = NULL,x_8 = NULL,f_6 = NULL;
          t = SSLgetAnnotations(p_13);
          s_8 = t;
          t = o_13;
          t = t_13(t);
          x_8 = t;
          t = (ATerm) ATinsert(CheckATermList(x_8), n_13);
          f_6 = t;
          t = SSLsetAnnotations(f_6, s_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_13;
        t = k_91(t);
      }
    return(t);
  }
  t = t_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_14 = NULL,h_14 = NULL,i_14 = NULL;
  f_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_14;
    }
  else
    {
      static ATerm f_1 (ATerm t);
      static ATerm f_1 (ATerm t)
      {
        t = not_null(i_14);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_14 = ATgetFirst((ATermList) t);
          if(((i_14 != NULL) && (i_14 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            i_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_14;
      t = at_end_1_0(f_1, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm v_14 = NULL;
  static ATerm k_16 (ATerm t);
  static ATerm k_16 (ATerm t)
  {
    ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL;
    f_16 = t;
    if(match_cons(t, sym_appl_2))
      {
        d_16 = ATgetArgument(t, 0);
        e_16 = ATgetArgument(t, 1);
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_9 = NULL,s_9 = NULL,x_9 = NULL,h_6 = NULL;
              t = SSLgetAnnotations(f_16);
              s_9 = t;
              t = e_16;
              t = map_1_0(k_16, t);
              x_9 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, d_16, x_9);
              h_6 = t;
              t = SSLsetAnnotations(h_6, s_9);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm o_9 = ATgetArgument(t, 0);
                  r_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_9;
              t = concat_0_0(t);
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              t = (ATerm) ATinsert(ATempty, f_16);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, f_16);
      }
    return(t);
  }
  t = k_16(t);
  v_14 = t;
  t = SSL_implode_string(v_14);
  return(t);
}
static ATerm t_4 (ATerm m_15, ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,r_16 = NULL;
  t = m_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_16 = ATgetFirst((ATermList) t);
      {
        ATerm p_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_16;
  t = yield_0_0(t);
  m_16 = t;
  t = m_15;
  t = map_1_0(abbrev_term_0_0, t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, m_16, n_16);
  return(t);
}
static ATerm u_4 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm k_23, ATerm j_23, ATerm t)
{
  t = i_95(t);
  {
    static ATerm h_1 (ATerm t);
    static ATerm h_1 (ATerm t)
    {
      ATerm s_16 = NULL;
      s_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_23, s_16);
      t = h_95(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
  }
  t = j_23;
  return(t);
}
static ATerm v_4 (ATerm e_95 (ATerm), ATerm g_23, ATerm f_23, ATerm t)
{
  static ATerm k_18 (ATerm t);
  static ATerm k_18 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
    u_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_23;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_17 = ATgetFirst((ATermList) t);
            w_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_17;
              {
                static ATerm k_1 (ATerm t);
                static ATerm k_1 (ATerm t)
                {
                  t = f_23;
                  return(t);
                }
                t = u_4(e_95, k_1, v_17, w_17, t);
              }
              t = k_18(t);
              LocalPopChoice(t_9);
            }
          else
            {
              t = q_9;
              {
                ATerm u_10 = NULL,d_11 = NULL,j_6 = NULL;
                t = SSLgetAnnotations(u_17);
                u_10 = t;
                t = w_17;
                t = k_18(t);
                d_11 = t;
                t = (ATerm) ATinsert(CheckATermList(d_11), v_17);
                j_6 = t;
                t = SSLsetAnnotations(j_6, u_10);
              }
            }
        }
      }
    return(t);
  }
  t = g_23;
  t = k_18(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_18;
      t = u_97(t);
    }
  else
    {
      ATerm y_18 = NULL,z_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_18 = ATgetFirst((ATermList) t);
          s_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_18;
      t = w_97(t);
      y_18 = t;
      t = s_18;
      t = foldr_3_0(u_97, v_97, w_97, t);
      z_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
      t = v_97(t);
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(o_1, f_12, g_12, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      if((h_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm bu_collect_1_0 (ATerm t_95 (ATerm), ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm h_20 (ATerm t);
      static ATerm h_20 (ATerm t)
      {
        ATerm w_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_11 = NULL,v_11 = NULL;
            static ATerm n_1 (ATerm t);
            static ATerm n_1 (ATerm t)
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_12 = NULL,t_12 = NULL,u_12 = NULL,c_13 = NULL,h_13 = NULL,o_6 = NULL;
                  r_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_12 = ATgetFirst((ATermList) t);
                      u_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_12);
                  c_13 = t;
                  t = t_12;
                  t = t_95(t);
                  h_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_12), h_13);
                  o_6 = t;
                  t = SSLsetAnnotations(o_6, c_13);
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
                  t = (ATerm) ATempty;
                }
              return(t);
            }
            t = SRTS_some(h_20, t);
            v_11 = t;
            t = SSL_explode_term(v_11);
            if(match_cons(t, sym__2))
              {
                ATerm b_10 = ATgetArgument(t, 0);
                s_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_11;
            t = foldr_3_0(l_1, m_1, n_1, t);
            LocalPopChoice(y_9);
          }
        else
          {
            t = w_9;
            {
              ATerm e_20 = NULL;
              t = t_95(t);
              e_20 = t;
              t = (ATerm) ATinsert(ATempty, e_20);
            }
          }
        return(t);
      }
      t = h_20(t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm f_21 = NULL,j_21 = NULL,k_21 = NULL,s_6 = NULL;
  k_21 = t;
  if(match_cons(t, sym_amb_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_21);
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, j_21);
  s_6 = t;
  t = SSLsetAnnotations(s_6, f_21);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm q_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(t_21, t);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, q_21);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL,x_20 = NULL,a_21 = NULL,c_21 = NULL,w_6 = NULL,t_6 = NULL;
  c_21 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      t_20 = ATgetArgument(t, 0);
      w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  s_20 = t;
  t = t_20;
  t = bu_collect_1_0(p_1, t);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, x_20, w_20);
  t_6 = t;
  t = SSLsetAnnotations(t_6, s_20);
  a_21 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      m_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_21);
  l_20 = t;
  t = m_20;
  t = map_1_0(r_1, t);
  q_20 = t;
  t = SSL_int_to_string(n_20);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, q_20, r_20);
  w_6 = t;
  t = SSLsetAnnotations(w_6, l_20);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,a_22 = NULL,c_22 = NULL,d_22 = NULL;
  d_22 = t;
  t = dtime_0_0(t);
  t = d_22;
  t = o_109(t);
  c_22 = t;
  t = dtime_0_0(t);
  w_21 = t;
  t = c_22;
  if(match_cons(t, sym__2))
    {
      x_21 = ATgetArgument(t, 0);
      a_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_21), (ATerm) ATmakeAppl(sym_Runtime_1, w_21)), a_22);
  return(t);
}
static ATerm n_23 (ATerm r_22, ATerm t)
{
  t = SSL_fclose(r_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_22 = ATgetArgument(t, 0);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_22);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = n_23(a_23, t);
          }
      }
    }
  else
    {
      t = n_23(a_23, t);
    }
  return(t);
}
static ATerm w_4 (ATerm d_17, ATerm t)
{
  t = SSL_read_term_from_stream(d_17);
  return(t);
}
static ATerm x_4 (ATerm a_31, ATerm b_31, ATerm t)
{
  t = SSL_strcat(a_31, b_31);
  return(t);
}
static ATerm y_4 (ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm o_23 = NULL;
  t = SSL_fopen(y_32, z_32);
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_23 = NULL;
  t = SSL_stdin_stream();
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_23 = NULL;
  t = SSL_stdout_stream();
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_23 = NULL;
  t = SSL_stderr_stream();
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_23);
  return(t);
}
static ATerm y_25 (ATerm k_24, ATerm t)
{
  ATerm l_24 = NULL;
  t = SSL_explode_term(k_24);
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_10 = ATgetArgument(t, 1);
        if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
          {
            l_24 = ATgetFirst((ATermList) f_10);
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
  t = l_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_25 (ATerm t_24, ATerm u_24, ATerm v_24, ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,a_25 = NULL,e_25 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(v_24);
  a_25 = t;
  t = t_24;
  if(match_cons(t, sym_Path_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_25, u_24);
  j_7 = t;
  t = SSLsetAnnotations(j_7, a_25);
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(w_24, x_24, t);
  return(t);
}
static ATerm a_26 (ATerm l_25, ATerm m_25, ATerm n_25, ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,t_25 = NULL,q_7 = NULL;
  t = SSLgetAnnotations(n_25);
  q_25 = t;
  t = SSL_is_string(l_25);
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_25, m_25);
  q_7 = t;
  t = SSLsetAnnotations(q_7, q_25);
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(o_25, p_25, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  if(match_cons(t, sym__2))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_25(v_25, t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            {
              ATerm j_10 = t;
              int k_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_25(w_25, x_25, v_25, t);
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
                  t = a_26(w_25, x_25, v_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_25(v_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,j_26 = NULL;
  j_26 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_26, term_n_10);
        t = z_4(t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        {
          ATerm b_14 = NULL,c_14 = NULL;
          t = term_o_10;
          c_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_10, j_26);
          t = x_4(c_14, j_26, t);
          b_14 = t;
          t = SSL_perror(b_14);
          _fail(t);
        }
      }
  }
  d_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(e_26, t);
  c_26 = t;
  t = d_26;
  t = fclose_0_0(t);
  t = c_26;
  return(t);
}
ATerm fetch_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  static ATerm i_27 (ATerm t);
  static ATerm i_27 (ATerm t)
  {
    ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
    f_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_27 = ATgetFirst((ATermList) t);
        h_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_14 = NULL,q_14 = NULL,u_7 = NULL;
          t = SSLgetAnnotations(f_27);
          m_14 = t;
          t = g_27;
          t = d_91(t);
          q_14 = t;
          t = (ATerm) ATinsert(CheckATermList(h_27), q_14);
          u_7 = t;
          t = SSLsetAnnotations(u_7, m_14);
          LocalPopChoice(q_10);
        }
      else
        {
          t = p_10;
          {
            ATerm e_15 = NULL,i_15 = NULL,v_7 = NULL;
            t = SSLgetAnnotations(f_27);
            e_15 = t;
            t = h_27;
            t = i_27(t);
            i_15 = t;
            t = (ATerm) ATinsert(CheckATermList(i_15), g_27);
            v_7 = t;
            t = SSLsetAnnotations(v_7, e_15);
          }
        }
    }
    return(t);
  }
  t = i_27(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_27 = NULL;
  m_27 = t;
  if(match_string(t, "-k"))
    {
      t = m_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_27;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  t = SSL_string_to_int(n_27);
  o_27 = t;
  t = term_t_10;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, o_27);
  t = g_5(p_27, o_27, t);
  t = n_27;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, u_1, v_1, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  if(match_string(t, "-S"))
    {
      t = r_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  t = term_e_8;
  s_27 = t;
  t = term_p_7;
  t_27 = t;
  t = term_x_10;
  t = g_5(s_27, t_27, t);
  t = term_y_10;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_z_10;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t = SSL_string_to_int(u_27);
  v_27 = t;
  t = term_e_8;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, v_27);
  t = g_5(w_27, v_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_27);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  t = term_b_11;
  x_27 = t;
  t = term_u_6;
  y_27 = t;
  t = term_c_11;
  t = g_5(x_27, y_27, t);
  t = term_e_11;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, f_2, i_2, t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_2, m_2, q_2, t);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = Option_3_0(s_2, u_2, y_2, t);
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm b_59, ATerm c_59, ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  t = term_b_7;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, b_59, c_59);
  t = lookup_table_0_1(z_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(b_59, c_59, a_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, b_59, c_59);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
      t = term_u_6;
      t = g_0(t);
      g_28 = t;
      t = term_p_11;
      h_28 = t;
      t = term_q_11;
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, g_28);
      t = e_5(h_28, i_28, g_28, t);
      _fail(t);
    }
  else
    {
      ATerm l_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_28 = ATgetFirst((ATermList) t);
          f_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_28;
      t = d_0(t);
      t = term_u_6;
      t = f_0(t);
      l_28 = t;
      t = (ATerm) ATinsert(CheckATermList(f_28), l_28);
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  if(match_string(t, "-o"))
    {
      t = n_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_28;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  t = term_r_11;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, o_28);
  t = g_5(p_28, o_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_28);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, n_3, o_3, t);
  return(t);
}
static ATerm e_5 (ATerm r_48, ATerm s_48, ATerm q_48, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
  {
    ATerm u_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_11 = ATgetArgument(t, 0);
            ATerm y_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_48, s_48);
        t = d_5(r_48, s_48, t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATempty;
      }
  }
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_48, s_48, (ATerm) ATinsert(CheckATermList(s_28), q_48));
  t = lookup_table_0_1(r_48, t);
  v_28 = t;
  t = (ATerm) ATinsert(CheckATermList(s_28), q_48);
  t_28 = t;
  t = v_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(s_48, t_28, u_28, t);
  t = r_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
      t = term_u_6;
      t = q_0(t);
      g_29 = t;
      t = term_p_11;
      h_29 = t;
      t = term_q_11;
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, g_29);
      t = e_5(h_29, i_29, g_29, t);
      _fail(t);
    }
  else
    {
      ATerm m_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_29 = ATgetFirst((ATermList) t);
          d_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_29 = ATgetFirst((ATermList) t);
          f_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_29;
      t = o_0(t);
      t = e_29;
      t = p_0(t);
      m_29 = t;
      t = (ATerm) ATinsert(CheckATermList(f_29), m_29);
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  if(match_string(t, "-i"))
    {
      t = o_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_29;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  p_29 = t;
  t = term_z_11;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, p_29);
  t = g_5(q_29, p_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_29);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_a_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_3, s_3, t_3, t);
  return(t);
}
static ATerm a_5 (ATerm o_53, ATerm p_53, ATerm t)
{
  ATerm r_29 = NULL;
  t = SSL_hashtable_remove(p_53, o_53);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_29);
  return(t);
}
static ATerm b_5 (ATerm t_53, ATerm t)
{
  ATerm s_29 = NULL;
  t = SSL_hashtable_destroy(t_53);
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_29);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  t_29 = t;
  t = table_hashtable_0_0(t);
  u_29 = t;
  t = lookup_table_0_1(t_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(w_29, t);
  t = u_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(t_29, v_29, t);
  t = t_29;
  return(t);
}
ATerm map_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  static ATerm l_30 (ATerm t);
  static ATerm l_30 (ATerm t)
  {
    ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
    i_30 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_30;
      }
    else
      {
        ATerm t_15 = NULL,x_15 = NULL,y_15 = NULL,a_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_30 = ATgetFirst((ATermList) t);
            k_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_30);
        t_15 = t;
        t = j_30;
        t = t_90(t);
        x_15 = t;
        t = k_30;
        t = l_30(t);
        y_15 = t;
        t = (ATerm) ATinsert(CheckATermList(y_15), x_15);
        a_8 = t;
        t = SSLsetAnnotations(a_8, t_15);
      }
    return(t);
  }
  t = l_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_30 = ATgetFirst((ATermList) t);
      p_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_30 = NULL,u_30 = NULL;
        static ATerm w_3 (ATerm t);
        static ATerm w_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_30)), not_null(u_30));
          return(t);
        }
        t = p_30;
        t = l_0(t);
        if(((t_30 != NULL) && (t_30 != t)))
          _fail(t);
        else
          t_30 = t;
        t = o_30;
        t = j_0(t);
        if(((u_30 != NULL) && (u_30 != t)))
          _fail(t);
        else
          u_30 = t;
        t = p_30;
        t = reverse_acc_2_0(j_0, w_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_6;
      t = l_0(t);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_31), term_b_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,c_31 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_31 = NULL,e_31 = NULL;
      t = term_b_7;
      d_31 = t;
      t = term_i_7;
      e_31 = t;
      t = term_m_7;
      t = d_5(d_31, e_31, t);
      y_30 = t;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        static ATerm x_3 (ATerm t);
        static ATerm x_3 (ATerm t)
        {
          ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,g_8 = NULL;
          h_31 = t;
          if(match_cons(t, sym_Program_1))
            {
              g_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_31);
          f_31 = t;
          t = g_31;
          if(((y_30 != NULL) && (y_30 != t)))
            _fail(t);
          else
            y_30 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, g_31);
          g_8 = t;
          t = SSLsetAnnotations(g_8, f_31);
          return(t);
        }
        t = fetch_1_0(x_3, t);
      }
    }
  {
    ATerm e_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_12), not_null(y_30)), term_k_12);
        t = echo_0_0(t);
        LocalPopChoice(i_12);
      }
    else
      {
        t = e_12;
      }
  }
  t = term_m_12;
  t = echo_0_0(t);
  t = term_p_11;
  z_30 = t;
  t = term_q_11;
  c_31 = t;
  t = term_n_12;
  t = d_5(z_30, c_31, t);
  t = reverse_acc_2_0(_id, q_4, t);
  t = map_1_0(p_5, t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_13), term_a_13), term_z_12), term_y_12), term_x_12), term_w_12), term_v_12), term_s_12), term_q_12);
        t = echo_0_0(t);
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_13 = ATgetFirst((ATermList) t);
                ATerm g_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_31;
          }
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = (ATerm) ATinsert(ATempty, p_31);
      }
  }
  q_31 = t;
  t = term_t_8;
  r_31 = t;
  t = SSL_printnl(r_31, q_31);
  t = p_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  t = term_b_7;
  v_31 = t;
  t = term_i_7;
  w_31 = t;
  t = term_m_7;
  t = d_5(v_31, w_31, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm x_31 = NULL;
  t = lookup_table_0_1(k_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(l_50, x_31, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  t = term_i_13;
  z_31 = t;
  t = term_u_6;
  a_32 = t;
  t = term_j_13;
  t = g_5(z_31, a_32, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_k_13;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL;
  t = term_i_13;
  d_32 = t;
  t = term_u_6;
  e_32 = t;
  t = term_j_13;
  t = g_5(d_32, e_32, t);
  t = term_l_13;
  b_32 = t;
  t = term_u_6;
  c_32 = t;
  t = term_m_13;
  t = g_5(b_32, c_32, t);
  t = term_q_13;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_5, s_5, x_5, t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = s_13;
      t = Option_3_0(y_5, z_5, a_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,i_8 = NULL;
  k_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_32 = ATgetFirst((ATermList) t);
      h_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_32);
  f_32 = t;
  t = g_32;
  t = o_67(t);
  i_32 = t;
  t = h_32;
  t = p_67(t);
  j_32 = t;
  t = (ATerm) ATinsert(CheckATermList(j_32), i_32);
  i_8 = t;
  t = SSLsetAnnotations(i_8, f_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_112 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,u_32 = NULL,v_32 = NULL,v_8 = NULL;
  p_32 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_13;
        t = p_112(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
      }
  }
  t = p_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_32 = ATgetFirst((ATermList) t);
      s_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  q_32 = t;
  t = term_i_7;
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, r_32);
  t = g_5(v_32, r_32, t);
  t = s_32;
  {
    static ATerm n_33 (ATerm t);
    static ATerm n_33 (ATerm t)
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_33 = NULL;
              e_33 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_33;
              LocalPopChoice(d_14);
            }
          else
            {
              t = a_14;
              t = p_112(t);
              t = Cons_2_0(_id, n_33, t);
            }
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm j_33 = NULL,k_33 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_33 = ATgetFirst((ATermList) t);
                k_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_33), (ATerm) ATmakeAppl(sym_Undefined_1, j_33));
          }
        }
      return(t);
    }
    t = n_33(t);
  }
  u_32 = t;
  t = (ATerm) ATinsert(CheckATermList(u_32), (ATerm) ATmakeAppl(sym_Program_1, r_32));
  v_8 = t;
  t = SSLsetAnnotations(v_8, q_32);
  return(t);
}
static ATerm h_5 (ATerm j_53, ATerm k_53, ATerm l_53, ATerm t)
{
  ATerm o_33 = NULL;
  t = SSL_hashtable_put(l_53, j_53, k_53);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_33);
  return(t);
}
static ATerm i_5 (ATerm m_53, ATerm n_53, ATerm t)
{
  t = SSL_hashtable_get(n_53, m_53);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_53, ATerm s_53, ATerm t)
{
  ATerm p_33 = NULL;
  t = SSL_hashtable_create(r_53, s_53);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_33);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,u_33 = NULL,v_33 = NULL;
  q_33 = t;
  t = term_e_14;
  u_33 = t;
  t = term_g_14;
  v_33 = t;
  t = q_33;
  t = new_hashtable_0_2(u_33, v_33, t);
  r_33 = t;
  t = q_33;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(q_33, r_33, s_33, t);
  t = q_33;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_33 = NULL;
  t = SSL_table_hashtable();
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_50, ATerm t)
{
  ATerm f_34 = NULL;
  t = table_hashtable_0_0(t);
  f_34 = t;
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_16 = NULL;
        t = f_34;
        if(match_cons(t, sym_Hashtable_1))
          {
            p_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_5(d_50, p_16, t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm z_16 = NULL;
          t = d_50;
          t = table_create_0_0(t);
          t = f_34;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_5(d_50, z_16, t);
        }
      }
  }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "--help"))
    {
      t = u_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_34;
        }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  t = term_l_14;
  v_34 = t;
  t = term_u_6;
  w_34 = t;
  t = term_n_14;
  t = g_5(v_34, w_34, t);
  t = term_o_14;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_14;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
  o_34 = t;
  t = term_p_11;
  p_34 = t;
  t = term_r_14;
  t = lookup_table_0_1(p_34, t);
  t_34 = t;
  t = term_q_11;
  q_34 = t;
  t = (ATerm) ATempty;
  r_34 = t;
  t = t_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(q_34, r_34, s_34, t);
  t = o_34;
  {
    static ATerm b_6 (ATerm t);
    static ATerm b_6 (ATerm t)
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_112(t);
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          {
            ATerm u_14 = t;
            int w_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_6, d_6, e_6, t);
                LocalPopChoice(w_14);
              }
            else
              {
                t = u_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
  }
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL;
        h_35 = t;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_17 = NULL;
              t = h_35;
              {
                ATerm b_15 = t;
                int c_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_17 = NULL,o_17 = NULL;
                    t = term_b_7;
                    l_17 = t;
                    t = term_l_14;
                    o_17 = t;
                    t = term_d_15;
                    t = d_5(l_17, o_17, t);
                    LocalPopChoice(c_15);
                  }
                else
                  {
                    t = b_15;
                    t = fetch_1_0(g_6, t);
                  }
              }
              t = h_35;
              t = default_system_usage_0_0(t);
              t = term_p_7;
              k_17 = t;
              t = SSL_exit(k_17);
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              {
                ATerm y_17 = NULL,z_17 = NULL,b_18 = NULL;
                t = term_b_7;
                z_17 = t;
                t = term_i_13;
                b_18 = t;
                t = term_f_15;
                t = d_5(z_17, b_18, t);
                t = h_35;
                t = default_system_about_0_0(t);
                t = term_p_7;
                y_17 = t;
                t = SSL_exit(y_17);
              }
            }
        }
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
              static ATerm i_6 (ATerm t);
              static ATerm i_6 (ATerm t)
              {
                ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,y_8 = NULL;
                n_35 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_35);
                l_35 = t;
                t = m_35;
                if(((m_34 != NULL) && (m_34 != t)))
                  _fail(t);
                else
                  m_34 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_35);
                y_8 = t;
                t = SSLsetAnnotations(y_8, l_35);
                return(t);
              }
              t = fetch_1_0(i_6, t);
              t = term_v_6;
              j_35 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_34)), term_j_15);
              k_35 = t;
              t = SSL_printnl(j_35, k_35);
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_34)), term_j_15));
              t = default_system_usage_0_0(t);
              t = term_y_6;
              i_35 = t;
              t = SSL_exit(i_35);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
            }
        }
      }
  }
  n_34 = t;
  t = term_p_11;
  t = table_destroy_0_0(t);
  t = n_34;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm p_15 = t;
              int q_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(l_6, m_6, n_6, t);
                  LocalPopChoice(q_15);
                }
              else
                {
                  t = p_15;
                  {
                    ATerm r_15 = t;
                    int s_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_15);
                      }
                    else
                      {
                        t = r_15;
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
static ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  t = term_u_15;
  v_35 = t;
  t = term_u_6;
  w_35 = t;
  t = term_v_15;
  t = g_5(v_35, w_35, t);
  t = term_w_15;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_z_15;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL,a_9 = NULL;
  o_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_18);
  i_18 = t;
  t = l_18;
  t = visamb_0_0(t);
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, m_18);
  a_9 = t;
  t = SSLsetAnnotations(a_9, i_18);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(k_6, t);
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_36 = NULL,e_18 = NULL,g_18 = NULL;
        g_36 = t;
        {
          ATerm c_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm p_6 (ATerm t);
              static ATerm p_6 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((e_18 != NULL) && (e_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_18 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_6, t);
              LocalPopChoice(g_16);
            }
          else
            {
              t = c_16;
              t = term_h_16;
              e_18 = t;
            }
        }
        t = not_null(e_18);
        t = ReadFromFile_0_0(t);
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_36, g_18);
        t = apply_strategy_1_0(q_6, t);
        t = output_file_0_0(t);
        t = report_success_0_0(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
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

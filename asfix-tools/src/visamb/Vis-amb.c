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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_m_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
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
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_s_11;
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
ATerm term_u_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_t_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_p_7;
ATerm term_m_7;
ATerm term_i_7;
ATerm term_b_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_s_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_i_7);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__2, term_b_7, term_f_8);
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
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_p_7);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_7);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_s_6);
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
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
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
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
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
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_s_6);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_s_6);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_s_6);
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
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_u_15, term_s_6);
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
static ATerm j_4 (ATerm a_35, ATerm b_35, ATerm t);
ATerm foldr_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_4 (ATerm e_32, ATerm f_32, ATerm t);
static ATerm m_4 (ATerm z_16, ATerm a_17, ATerm t);
static ATerm o_4 (ATerm z_86 (ATerm), ATerm y_154, ATerm f_17, ATerm t);
static ATerm n_4 (ATerm v_16, ATerm w_16, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
static ATerm j_12 (ATerm f_11, ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
static ATerm u_4 (ATerm k_15, ATerm t);
static ATerm v_4 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm h_23, ATerm g_23, ATerm t);
static ATerm w_4 (ATerm t_91 (ATerm), ATerm d_23, ATerm c_23, ATerm t);
ATerm foldr_3_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm bu_collect_1_0 (ATerm i_92 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm x_105 (ATerm), ATerm t);
static ATerm n_23 (ATerm r_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_4 (ATerm b_17, ATerm t);
static ATerm y_4 (ATerm x_30, ATerm y_30, ATerm t);
static ATerm z_4 (ATerm g_32, ATerm h_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_25 (ATerm k_24, ATerm t);
static ATerm z_25 (ATerm t_24, ATerm u_24, ATerm v_24, ATerm t);
static ATerm a_26 (ATerm l_25, ATerm m_25, ATerm n_25, ATerm t);
static ATerm a_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_87 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_5 (ATerm o_50, ATerm p_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_5 (ATerm j_55, ATerm k_55, ATerm i_55, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm b_5 (ATerm g_60, ATerm h_60, ATerm t);
static ATerm c_5 (ATerm l_60, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_5 (ATerm c_57, ATerm d_57, ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t);
static ATerm i_5 (ATerm b_60, ATerm c_60, ATerm d_60, ATerm t);
static ATerm j_5 (ATerm e_60, ATerm f_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_60, ATerm k_60, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm v_56, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
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
  t = term_s_6;
  t = whoami_0_0(t);
  a_0 = t;
  t = term_v_6;
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_6), a_0);
  e_0 = t;
  t = SSL_printnl(c_0, e_0);
  t = term_z_6;
  b_0 = t;
  t = SSL_exit(b_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_0 = NULL,o_0 = NULL;
  t = term_b_7;
  f_0 = t;
  t = term_i_7;
  o_0 = t;
  t = term_m_7;
  t = e_5(f_0, o_0, t);
  return(t);
}
static ATerm j_4 (ATerm a_35, ATerm b_35, ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_35, b_35);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = SSL_addr(a_35, b_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,x_0 = NULL,z_0 = NULL;
  u_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_0;
      t = h_94(t);
    }
  else
    {
      ATerm e_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_0 = ATgetFirst((ATermList) t);
          z_0 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_0;
      t = foldr_2_0(h_94, i_94, t);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_0, e_1);
      t = i_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_p_7;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      t_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(s_0, t_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_1 = NULL,i_0 = NULL,j_0 = NULL;
  t = times_0_0(t);
  j_0 = t;
  t = SSL_explode_term(j_0);
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      i_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_0;
  t = foldr_2_0(v_0, w_0, t);
  k_1 = t;
  t = SSL_TicksToSeconds(k_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,k_2 = NULL;
  h_2 = t;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_2;
        if((i_2 != t))
          {
            _fail(t);
          }
        t = h_2;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = (ATerm) ATmakeAppl(sym__2, i_2, k_2);
        {
          ATerm x_7 = t;
          int z_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_2, k_2);
              LocalPopChoice(z_7);
            }
          else
            {
              t = x_7;
              t = SSL_gtr(i_2, k_2);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_2, k_2);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  {
    ATerm b_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_2 = NULL,u_2 = NULL,y_2 = NULL;
        t = term_b_7;
        u_2 = t;
        t = term_f_8;
        y_2 = t;
        t = term_g_8;
        t = e_5(u_2, y_2, t);
        s_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_2, term_z_6);
        t = geq_0_0(t);
        t = q_2;
        t = f_104(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = b_8;
        t = q_2;
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,d_3 = NULL,i_3 = NULL;
  t = run_time_0_0(t);
  a_3 = t;
  t = term_s_6;
  t = whoami_0_0(t);
  b_3 = t;
  t = term_v_6;
  d_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), a_3), term_h_8), b_3);
  i_3 = t;
  t = SSL_printnl(d_3, i_3);
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), a_3), term_h_8), b_3));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_0, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_7;
  j_3 = t;
  t = SSL_exit(j_3);
  return(t);
}
static ATerm l_4 (ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm m_3 = NULL;
  t = SSL_fputc(e_32, f_32);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
static ATerm m_4 (ATerm z_16, ATerm a_17, ATerm t)
{
  ATerm n_3 = NULL;
  t = SSL_write_term_to_stream_text(z_16, a_17);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_3);
  return(t);
}
static ATerm o_4 (ATerm z_86 (ATerm), ATerm y_154, ATerm f_17, ATerm t)
{
  ATerm q_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_154, term_m_8);
  t = a_5(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, f_17);
  t = z_86(t);
  t = fclose_0_0(t);
  t = f_17;
  return(t);
}
static ATerm n_4 (ATerm v_16, ATerm w_16, ATerm t)
{
  ATerm r_3 = NULL;
  t = SSL_write_term_to_stream_baf(v_16, w_16);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_3);
  return(t);
}
static ATerm b_1 (ATerm t)
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
  t = n_4(a_2, b_2, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Stream_1))
        {
          h_3 = ATgetArgument(o_8, 0);
        }
      else
        _fail(t);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(h_3, k_3, t);
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
  t = l_4(f_3, g_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_4 = NULL,e_4 = NULL,h_4 = NULL,k_4 = NULL,p_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,d_5 = NULL,g_5 = NULL,c_7 = NULL,h_7 = NULL,n_0 = NULL,k_0 = NULL;
  e_4 = t;
  if(match_cons(t, sym__2))
    {
      t_4 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  s_4 = t;
  t = t_4;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm a_1 (ATerm t);
        static ATerm a_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((b_4 != NULL) && (b_4 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(a_1, t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = term_t_8;
        b_4 = t;
      }
  }
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, d_5);
  k_0 = t;
  t = SSLsetAnnotations(k_0, s_4);
  t = e_4;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_4);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_4, (ATerm) ATmakeAppl(sym__2, not_null(b_4), p_4));
  n_0 = t;
  t = SSLsetAnnotations(n_0, h_4);
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
        ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,h_1 = NULL;
        t = SSLgetAnnotations(r_4);
        t_1 = t;
        t = c_7;
        t = fetch_1_0(b_1, t);
        w_1 = t;
        t = h_7;
        if(match_cons(t, sym__2))
          {
            y_1 = ATgetArgument(t, 0);
            z_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_4(c_1, y_1, z_1, t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
        h_1 = t;
        t = SSLsetAnnotations(h_1, t_1);
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        {
          ATerm o_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,j_1 = NULL;
          t = SSLgetAnnotations(r_4);
          o_2 = t;
          t = h_7;
          if(match_cons(t, sym__2))
            {
              w_2 = ATgetArgument(t, 0);
              x_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_4(d_1, w_2, x_2, t);
          v_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_7, v_2);
          j_1 = t;
          t = SSLsetAnnotations(j_1, o_2);
        }
      }
  }
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_appl_2))
    {
      s_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_8 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,v_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,g_4 = NULL,i_4 = NULL,m_5 = NULL,n_5 = NULL,r_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,m_2 = NULL,f_2 = NULL,e_2 = NULL,c_2 = NULL,r_1 = NULL;
        t = SSLgetAnnotations(r_10);
        v_3 = t;
        t = s_10;
        if(match_cons(t, sym_prod_3))
          {
            z_3 = ATgetArgument(t, 0);
            a_4 = ATgetArgument(t, 1);
            c_4 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_10);
        y_3 = t;
        t = z_3;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_5 = ATgetFirst((ATermList) t);
            r_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_3);
        m_5 = t;
        t = n_5;
        if(match_cons(t, sym_lex_1))
          {
            w_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_5);
        v_5 = t;
        t = (ATerm) ATmakeAppl(sym_lex_1, w_5);
        r_1 = t;
        t = SSLsetAnnotations(r_1, v_5);
        x_5 = t;
        t = r_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_5), x_5);
        c_2 = t;
        t = SSLsetAnnotations(c_2, m_5);
        u_5 = t;
        t = a_4;
        if(match_cons(t, sym_cf_1))
          {
            g_4 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_4);
        f_4 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, g_4);
        e_2 = t;
        t = SSLsetAnnotations(e_2, f_4);
        i_4 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, u_5, i_4, c_4);
        f_2 = t;
        t = SSLsetAnnotations(f_2, y_3);
        d_4 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, d_4, t_10);
        m_2 = t;
        t = SSLsetAnnotations(m_2, v_3);
        t = yield_0_0(t);
        u_3 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, u_3));
        LocalPopChoice(b_9);
      }
    else
      {
        t = z_8;
        {
          ATerm r_6 = NULL,w_6 = NULL,a_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,k_7 = NULL,l_7 = NULL,o_5 = NULL,l_5 = NULL,k_5 = NULL;
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
          w_6 = t;
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
          l_5 = t;
          t = SSLsetAnnotations(l_5, w_6);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, f_7, t_10);
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
      ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL,m_11 = NULL;
      h_11 = t;
      if(match_cons(t, sym_amb_1))
        {
          i_11 = ATgetArgument(t, 0);
          t = i_11;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_11 = ATgetFirst((ATermList) t);
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
                    t = j_11;
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
        ATerm s_7 = NULL,y_7 = NULL,e_8 = NULL;
        s_7 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm g_9 = ATgetArgument(t, 0);
            if(match_cons(g_9, sym_prod_3))
              {
                ATerm i_9 = ATgetArgument(g_9, 0);
                e_8 = ATgetArgument(g_9, 1);
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
        t = (ATerm) ATmakeAppl(sym_N_2, e_8, y_7);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  static ATerm q_13 (ATerm t);
  static ATerm q_13 (ATerm t)
  {
    ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
    p_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_13 = ATgetFirst((ATermList) t);
        o_13 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_8 = NULL,x_8 = NULL,g_6 = NULL;
          t = SSLgetAnnotations(p_13);
          s_8 = t;
          t = o_13;
          t = q_13(t);
          x_8 = t;
          t = (ATerm) ATinsert(CheckATermList(x_8), n_13);
          g_6 = t;
          t = SSLsetAnnotations(g_6, s_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_13;
        t = z_87(t);
      }
    return(t);
  }
  t = q_13(t);
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
              ATerm r_9 = NULL,s_9 = NULL,x_9 = NULL,i_6 = NULL;
              t = SSLgetAnnotations(f_16);
              s_9 = t;
              t = e_16;
              t = map_1_0(k_16, t);
              x_9 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, d_16, x_9);
              i_6 = t;
              t = SSLsetAnnotations(i_6, s_9);
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
static ATerm u_4 (ATerm k_15, ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,r_16 = NULL;
  t = k_15;
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
  t = k_15;
  t = map_1_0(abbrev_term_0_0, t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, m_16, n_16);
  return(t);
}
static ATerm v_4 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm h_23, ATerm g_23, ATerm t)
{
  t = x_91(t);
  {
    static ATerm g_1 (ATerm t);
    static ATerm g_1 (ATerm t)
    {
      ATerm s_16 = NULL;
      s_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_23, s_16);
      t = w_91(t);
      return(t);
    }
    t = fetch_1_0(g_1, t);
  }
  t = g_23;
  return(t);
}
static ATerm w_4 (ATerm t_91 (ATerm), ATerm d_23, ATerm c_23, ATerm t)
{
  static ATerm k_18 (ATerm t);
  static ATerm k_18 (ATerm t)
  {
    ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
    u_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_23;
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
                static ATerm i_1 (ATerm t);
                static ATerm i_1 (ATerm t)
                {
                  t = c_23;
                  return(t);
                }
                t = v_4(t_91, i_1, v_17, w_17, t);
              }
              t = k_18(t);
              LocalPopChoice(t_9);
            }
          else
            {
              t = q_9;
              {
                ATerm v_10 = NULL,d_11 = NULL,k_6 = NULL;
                t = SSLgetAnnotations(u_17);
                v_10 = t;
                t = w_17;
                t = k_18(t);
                d_11 = t;
                t = (ATerm) ATinsert(CheckATermList(d_11), v_17);
                k_6 = t;
                t = SSLsetAnnotations(k_6, v_10);
              }
            }
        }
      }
    return(t);
  }
  t = d_23;
  t = k_18(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_94 (ATerm), ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_18;
      t = j_94(t);
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
      t = l_94(t);
      y_18 = t;
      t = s_18;
      t = foldr_3_0(j_94, k_94, l_94, t);
      z_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, z_18);
      t = k_94(t);
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
  t = w_4(o_1, f_12, g_12, t);
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
ATerm bu_collect_1_0 (ATerm i_92 (ATerm), ATerm t)
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
            ATerm t_11 = NULL,w_11 = NULL;
            static ATerm n_1 (ATerm t);
            static ATerm n_1 (ATerm t)
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,c_13 = NULL,g_13 = NULL,p_6 = NULL;
                  s_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_12 = ATgetFirst((ATermList) t);
                      u_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_12);
                  c_13 = t;
                  t = t_12;
                  t = i_92(t);
                  g_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_12), g_13);
                  p_6 = t;
                  t = SSLsetAnnotations(p_6, c_13);
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
            w_11 = t;
            t = SSL_explode_term(w_11);
            if(match_cons(t, sym__2))
              {
                ATerm b_10 = ATgetArgument(t, 0);
                t_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_11;
            t = foldr_3_0(l_1, m_1, n_1, t);
            LocalPopChoice(y_9);
          }
        else
          {
            t = w_9;
            {
              ATerm e_20 = NULL;
              t = i_92(t);
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
  ATerm f_21 = NULL,j_21 = NULL,k_21 = NULL,t_6 = NULL;
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
  t_6 = t;
  t = SSLsetAnnotations(t_6, f_21);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm q_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_4(t_21, t);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, q_21);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,w_20 = NULL,x_20 = NULL,a_21 = NULL,c_21 = NULL,x_6 = NULL,u_6 = NULL;
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
  u_6 = t;
  t = SSLsetAnnotations(u_6, s_20);
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
  t = map_1_0(q_1, t);
  q_20 = t;
  t = SSL_int_to_string(n_20);
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, q_20, r_20);
  x_6 = t;
  t = SSLsetAnnotations(x_6, l_20);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,a_22 = NULL,c_22 = NULL,d_22 = NULL;
  d_22 = t;
  t = dtime_0_0(t);
  t = d_22;
  t = x_105(t);
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
static ATerm x_4 (ATerm b_17, ATerm t)
{
  t = SSL_read_term_from_stream(b_17);
  return(t);
}
static ATerm y_4 (ATerm x_30, ATerm y_30, ATerm t)
{
  t = SSL_strcat(x_30, y_30);
  return(t);
}
static ATerm z_4 (ATerm g_32, ATerm h_32, ATerm t)
{
  ATerm o_23 = NULL;
  t = SSL_fopen(g_32, h_32);
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
  t = z_4(w_24, x_24, t);
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
  t = z_4(o_25, p_25, t);
  return(t);
}
static ATerm a_5 (ATerm t)
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
        t = a_5(t);
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
          t = y_4(c_14, j_26, t);
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
  t = x_4(e_26, t);
  c_26 = t;
  t = d_26;
  t = fclose_0_0(t);
  t = c_26;
  return(t);
}
ATerm fetch_1_0 (ATerm s_87 (ATerm), ATerm t)
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
          ATerm n_14 = NULL,q_14 = NULL,v_7 = NULL;
          t = SSLgetAnnotations(f_27);
          n_14 = t;
          t = g_27;
          t = s_87(t);
          q_14 = t;
          t = (ATerm) ATinsert(CheckATermList(h_27), q_14);
          v_7 = t;
          t = SSLsetAnnotations(v_7, n_14);
          LocalPopChoice(q_10);
        }
      else
        {
          t = p_10;
          {
            ATerm e_15 = NULL,h_15 = NULL,w_7 = NULL;
            t = SSLgetAnnotations(f_27);
            e_15 = t;
            t = h_27;
            t = i_27(t);
            h_15 = t;
            t = (ATerm) ATinsert(CheckATermList(h_15), g_27);
            w_7 = t;
            t = SSLsetAnnotations(w_7, e_15);
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
  t = term_u_10;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, o_27);
  t = h_5(p_27, o_27, t);
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
static ATerm g_2 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  t = term_f_8;
  s_27 = t;
  t = term_p_7;
  t_27 = t;
  t = term_x_10;
  t = h_5(s_27, t_27, t);
  t = term_y_10;
  return(t);
}
static ATerm j_2 (ATerm t)
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
static ATerm n_2 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
  u_27 = t;
  t = SSL_string_to_int(u_27);
  v_27 = t;
  t = term_f_8;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, v_27);
  t = h_5(w_27, v_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_27);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  t = term_b_11;
  x_27 = t;
  t = term_s_6;
  y_27 = t;
  t = term_c_11;
  t = h_5(x_27, y_27, t);
  t = term_e_11;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, g_2, j_2, t);
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_2, n_2, p_2, t);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = Option_3_0(r_2, t_2, z_2, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  t = term_b_7;
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, o_50, p_50);
  t = lookup_table_0_1(z_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(o_50, p_50, a_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, o_50, p_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
      t = term_s_6;
      t = h_0(t);
      g_28 = t;
      t = term_p_11;
      h_28 = t;
      t = term_q_11;
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, g_28);
      t = f_5(h_28, i_28, g_28, t);
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
      t = term_s_6;
      t = g_0(t);
      l_28 = t;
      t = (ATerm) ATinsert(CheckATermList(f_28), l_28);
    }
  return(t);
}
static ATerm c_3 (ATerm t)
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
static ATerm l_3 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  t = term_r_11;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, o_28);
  t = h_5(p_28, o_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_28);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_3, l_3, o_3, t);
  return(t);
}
static ATerm f_5 (ATerm j_55, ATerm k_55, ATerm i_55, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_11 = ATgetArgument(t, 0);
            ATerm y_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_55, k_55);
        t = e_5(j_55, k_55, t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATempty;
      }
  }
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_55, k_55, (ATerm) ATinsert(CheckATermList(s_28), i_55));
  t = lookup_table_0_1(j_55, t);
  v_28 = t;
  t = (ATerm) ATinsert(CheckATermList(s_28), i_55);
  t_28 = t;
  t = v_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(k_55, t_28, u_28, t);
  t = r_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
      t = term_s_6;
      t = r_0(t);
      g_29 = t;
      t = term_p_11;
      h_29 = t;
      t = term_q_11;
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, g_29);
      t = f_5(h_29, i_29, g_29, t);
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
      t = p_0(t);
      t = e_29;
      t = q_0(t);
      m_29 = t;
      t = (ATerm) ATinsert(CheckATermList(f_29), m_29);
    }
  return(t);
}
static ATerm p_3 (ATerm t)
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
  t = h_5(q_29, p_29, t);
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
  t = ArgOption_3_0(p_3, s_3, t_3, t);
  return(t);
}
static ATerm b_5 (ATerm g_60, ATerm h_60, ATerm t)
{
  ATerm r_29 = NULL;
  t = SSL_hashtable_remove(h_60, g_60);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_29);
  return(t);
}
static ATerm c_5 (ATerm l_60, ATerm t)
{
  ATerm s_29 = NULL;
  t = SSL_hashtable_destroy(l_60);
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
  t = c_5(w_29, t);
  t = u_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(t_29, v_29, t);
  t = t_29;
  return(t);
}
ATerm map_1_0 (ATerm i_87 (ATerm), ATerm t)
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
        t = i_87(t);
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
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
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
        t = m_0(t);
        if(((t_30 != NULL) && (t_30 != t)))
          _fail(t);
        else
          t_30 = t;
        t = o_30;
        t = l_0(t);
        if(((u_30 != NULL) && (u_30 != t)))
          _fail(t);
        else
          u_30 = t;
        t = p_30;
        t = reverse_acc_2_0(l_0, w_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_6;
      t = m_0(t);
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
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
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
      t = e_5(d_31, e_31, t);
      a_31 = t;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        static ATerm x_3 (ATerm t);
        static ATerm x_3 (ATerm t)
        {
          ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,c_8 = NULL;
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
          if(((a_31 != NULL) && (a_31 != t)))
            _fail(t);
          else
            a_31 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, g_31);
          c_8 = t;
          t = SSLsetAnnotations(c_8, f_31);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_12), not_null(a_31)), term_k_12);
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
  b_31 = t;
  t = term_q_11;
  c_31 = t;
  t = term_n_12;
  t = e_5(b_31, c_31, t);
  t = reverse_acc_2_0(_id, q_4, t);
  t = map_1_0(p_5, t);
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_13), term_a_13), term_z_12), term_y_12), term_x_12), term_w_12), term_v_12), term_r_12), term_q_12);
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
                ATerm h_13 = (ATerm) ATgetNext((ATermList) t);
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
  t = e_5(v_31, w_31, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_5 (ATerm c_57, ATerm d_57, ATerm t)
{
  ATerm x_31 = NULL;
  t = lookup_table_0_1(c_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(d_57, x_31, t);
  return(t);
}
static ATerm q_5 (ATerm t)
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
  t = term_s_6;
  a_32 = t;
  t = term_j_13;
  t = h_5(z_31, a_32, t);
  return(t);
}
static ATerm t_5 (ATerm t)
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
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,k_32 = NULL;
  t = term_i_13;
  d_32 = t;
  t = term_s_6;
  k_32 = t;
  t = term_j_13;
  t = h_5(d_32, k_32, t);
  t = term_l_13;
  b_32 = t;
  t = term_s_6;
  c_32 = t;
  t = term_m_13;
  t = h_5(b_32, c_32, t);
  t = term_r_13;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_5, s_5, t_5, t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      t = Option_3_0(y_5, z_5, a_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_64 (ATerm), ATerm g_64 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,i_8 = NULL;
  s_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_32 = ATgetFirst((ATermList) t);
      n_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_32);
  l_32 = t;
  t = m_32;
  t = f_64(t);
  q_32 = t;
  t = n_32;
  t = g_64(t);
  r_32 = t;
  t = (ATerm) ATinsert(CheckATermList(r_32), q_32);
  i_8 = t;
  t = SSLsetAnnotations(i_8, l_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,c_33 = NULL,d_33 = NULL,v_8 = NULL;
  x_32 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_13;
        t = y_108(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
      }
  }
  t = x_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_32 = ATgetFirst((ATermList) t);
      a_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_32);
  y_32 = t;
  t = term_i_7;
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, z_32);
  t = h_5(d_33, z_32, t);
  t = a_33;
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
              ATerm g_33 = NULL;
              g_33 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_33;
              LocalPopChoice(d_14);
            }
          else
            {
              t = a_14;
              t = y_108(t);
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
  c_33 = t;
  t = (ATerm) ATinsert(CheckATermList(c_33), (ATerm) ATmakeAppl(sym_Program_1, z_32));
  v_8 = t;
  t = SSLsetAnnotations(v_8, y_32);
  return(t);
}
static ATerm i_5 (ATerm b_60, ATerm c_60, ATerm d_60, ATerm t)
{
  ATerm o_33 = NULL;
  t = SSL_hashtable_put(d_60, b_60, c_60);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_33);
  return(t);
}
static ATerm j_5 (ATerm e_60, ATerm f_60, ATerm t)
{
  t = SSL_hashtable_get(f_60, e_60);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm p_33 = NULL;
  t = SSL_hashtable_create(j_60, k_60);
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
  t = i_5(q_33, r_33, s_33, t);
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
ATerm lookup_table_0_1 (ATerm v_56, ATerm t)
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
        t = j_5(v_56, p_16, t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm c_17 = NULL;
          t = v_56;
          t = table_create_0_0(t);
          t = f_34;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_5(v_56, c_17, t);
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
  t = term_s_6;
  w_34 = t;
  t = term_m_14;
  t = h_5(v_34, w_34, t);
  t = term_o_14;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_p_14;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t)
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
  t = i_5(q_34, r_34, s_34, t);
  t = o_34;
  {
    static ATerm b_6 (ATerm t);
    static ATerm b_6 (ATerm t)
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_108(t);
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
        ATerm j_35 = NULL;
        j_35 = t;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_17 = NULL;
              t = j_35;
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
                    t = e_5(l_17, o_17, t);
                    LocalPopChoice(c_15);
                  }
                else
                  {
                    t = b_15;
                    t = fetch_1_0(f_6, t);
                  }
              }
              t = j_35;
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
                t = e_5(z_17, b_18, t);
                t = j_35;
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
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
              static ATerm h_6 (ATerm t);
              static ATerm h_6 (ATerm t)
              {
                ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,y_8 = NULL;
                p_35 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_35 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_35);
                n_35 = t;
                t = o_35;
                if(((m_34 != NULL) && (m_34 != t)))
                  _fail(t);
                else
                  m_34 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_35);
                y_8 = t;
                t = SSLsetAnnotations(y_8, n_35);
                return(t);
              }
              t = fetch_1_0(h_6, t);
              t = term_v_6;
              l_35 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_34)), term_j_15);
              m_35 = t;
              t = SSL_printnl(l_35, m_35);
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_34)), term_j_15));
              t = default_system_usage_0_0(t);
              t = term_z_6;
              k_35 = t;
              t = SSL_exit(k_35);
              LocalPopChoice(i_15);
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
static ATerm j_6 (ATerm t)
{
  ATerm l_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = l_15;
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
  t = term_s_6;
  w_35 = t;
  t = term_v_15;
  t = h_5(v_35, w_35, t);
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
  ATerm i_18 = NULL,j_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,a_9 = NULL;
  n_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_18);
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
  t = parse_options_1_0(j_6, t);
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_36 = NULL,e_18 = NULL,g_18 = NULL;
        h_36 = t;
        {
          ATerm c_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm o_6 (ATerm t);
              static ATerm o_6 (ATerm t)
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
              t = fetch_1_0(o_6, t);
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
        t = (ATerm) ATmakeAppl(sym__2, h_36, g_18);
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

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_lexical_1;
Symbol sym_root_1;
Symbol sym_N_2;
Symbol sym_amb_abbr_2;
Symbol sym_Undefined_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_g_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
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
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_u_6);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_4 (ATerm u_47, ATerm v_47, ATerm t);
ATerm foldr_2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_110 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_4 (ATerm e_44, ATerm f_44, ATerm t);
static ATerm l_4 (ATerm j_28, ATerm k_28, ATerm t);
static ATerm n_4 (ATerm v_93 (ATerm), ATerm e_229, ATerm p_28, ATerm t);
static ATerm m_4 (ATerm f_28, ATerm g_28, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
static ATerm j_12 (ATerm f_11, ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm v_94 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
static ATerm t_4 (ATerm m_15, ATerm t);
static ATerm u_4 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm s_34, ATerm r_34, ATerm t);
static ATerm v_4 (ATerm p_98 (ATerm), ATerm o_34, ATerm n_34, ATerm t);
ATerm foldr_3_0 (ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm bu_collect_1_0 (ATerm e_99 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm t_111 (ATerm), ATerm t);
static ATerm x_22 (ATerm l_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_4 (ATerm l_28, ATerm t);
static ATerm x_4 (ATerm i_42, ATerm j_42, ATerm t);
static ATerm y_4 (ATerm g_44, ATerm h_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_25 (ATerm q_23, ATerm t);
static ATerm f_25 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t);
static ATerm g_25 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t);
static ATerm z_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_94 (ATerm), ATerm t);
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
static ATerm g_5 (ATerm c_63, ATerm d_63, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_5 (ATerm l_49, ATerm m_49, ATerm k_49, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm a_5 (ATerm i_54, ATerm j_54, ATerm t);
static ATerm b_5 (ATerm n_54, ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm e_94 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_5 (ATerm e_51, ATerm f_51, ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_114 (ATerm), ATerm t);
static ATerm h_5 (ATerm d_54, ATerm e_54, ATerm f_54, ATerm t);
static ATerm i_5 (ATerm g_54, ATerm h_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_54, ATerm m_54, ATerm t);
ATerm table_create_0_0 (ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm lookup_table_0_1 (ATerm x_50, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm parse_options_1_0 (ATerm o_114 (ATerm), ATerm t);
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
static ATerm i_4 (ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_47, v_47);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      t = SSL_addr(u_47, v_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm w_0 = NULL,y_0 = NULL,b_1 = NULL;
  w_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_0;
      t = d_101(t);
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
      t = foldr_2_0(d_101, e_101, t);
      e_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, e_1);
      t = e_101(t);
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
ATerm if_verbose1_1_0 (ATerm b_110 (ATerm), ATerm t)
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
        t = b_110(t);
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
static ATerm k_4 (ATerm e_44, ATerm f_44, ATerm t)
{
  ATerm l_3 = NULL;
  t = SSL_fputc(e_44, f_44);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
  return(t);
}
static ATerm l_4 (ATerm j_28, ATerm k_28, ATerm t)
{
  ATerm m_3 = NULL;
  t = SSL_write_term_to_stream_text(j_28, k_28);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
static ATerm n_4 (ATerm v_93 (ATerm), ATerm e_229, ATerm p_28, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_229, term_m_8);
  t = z_4(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, p_28);
  t = v_93(t);
  t = fclose_0_0(t);
  t = p_28;
  return(t);
}
static ATerm m_4 (ATerm f_28, ATerm g_28, ATerm t)
{
  ATerm q_3 = NULL;
  t = SSL_write_term_to_stream_baf(f_28, g_28);
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
ATerm at_end_1_0 (ATerm v_94 (ATerm), ATerm t)
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
        t = v_94(t);
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
    ATerm d_16 = NULL,e_16 = NULL,h_16 = NULL;
    h_16 = t;
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
              t = SSLgetAnnotations(h_16);
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
              t = (ATerm) ATinsert(ATempty, h_16);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, h_16);
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
  ATerm m_16 = NULL,p_16 = NULL,r_16 = NULL;
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
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, m_16, p_16);
  return(t);
}
static ATerm u_4 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm s_34, ATerm r_34, ATerm t)
{
  t = t_98(t);
  {
    static ATerm h_1 (ATerm t);
    static ATerm h_1 (ATerm t)
    {
      ATerm s_16 = NULL;
      s_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_34, s_16);
      t = s_98(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
  }
  t = r_34;
  return(t);
}
static ATerm v_4 (ATerm p_98 (ATerm), ATerm o_34, ATerm n_34, ATerm t)
{
  static ATerm z_17 (ATerm t);
  static ATerm z_17 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
    i_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_34;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_17 = ATgetFirst((ATermList) t);
            k_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_17;
              {
                static ATerm k_1 (ATerm t);
                static ATerm k_1 (ATerm t)
                {
                  t = n_34;
                  return(t);
                }
                t = u_4(p_98, k_1, j_17, k_17, t);
              }
              t = z_17(t);
              LocalPopChoice(t_9);
            }
          else
            {
              t = q_9;
              {
                ATerm u_10 = NULL,d_11 = NULL,j_6 = NULL;
                t = SSLgetAnnotations(i_17);
                u_10 = t;
                t = k_17;
                t = z_17(t);
                d_11 = t;
                t = (ATerm) ATinsert(CheckATermList(d_11), j_17);
                j_6 = t;
                t = SSLsetAnnotations(j_6, u_10);
              }
            }
        }
      }
    return(t);
  }
  t = o_34;
  t = z_17(t);
  return(t);
}
ATerm foldr_3_0 (ATerm f_101 (ATerm), ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_18;
      t = f_101(t);
    }
  else
    {
      ATerm n_18 = NULL,r_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_18 = ATgetFirst((ATermList) t);
          e_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_18;
      t = h_101(t);
      n_18 = t;
      t = e_18;
      t = foldr_3_0(f_101, g_101, h_101, t);
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_18, r_18);
      t = g_101(t);
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
ATerm bu_collect_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm w_19 (ATerm t);
      static ATerm w_19 (ATerm t)
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
                  t = e_99(t);
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
            t = SRTS_some(w_19, t);
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
              ATerm v_19 = NULL;
              t = e_99(t);
              v_19 = t;
              t = (ATerm) ATinsert(ATempty, v_19);
            }
          }
        return(t);
      }
      t = w_19(t);
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
  ATerm u_20 = NULL,v_20 = NULL,a_21 = NULL,s_6 = NULL;
  a_21 = t;
  if(match_cons(t, sym_amb_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_21);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, v_20);
  s_6 = t;
  t = SSLsetAnnotations(s_6, u_20);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm h_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      k_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_4(k_21, t);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, h_21);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL,k_20 = NULL,m_20 = NULL,n_20 = NULL,p_20 = NULL,t_20 = NULL,w_6 = NULL,t_6 = NULL;
  t_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      k_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_20);
  h_20 = t;
  t = k_20;
  t = bu_collect_1_0(p_1, t);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, n_20, m_20);
  t_6 = t;
  t = SSLsetAnnotations(t_6, h_20);
  p_20 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_20);
  a_20 = t;
  t = b_20;
  t = map_1_0(r_1, t);
  d_20 = t;
  t = SSL_int_to_string(c_20);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, d_20, g_20);
  w_6 = t;
  t = SSLsetAnnotations(w_6, a_20);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,t_21 = NULL,u_21 = NULL,x_21 = NULL;
  x_21 = t;
  t = dtime_0_0(t);
  t = x_21;
  t = t_111(t);
  u_21 = t;
  t = dtime_0_0(t);
  m_21 = t;
  t = u_21;
  if(match_cons(t, sym__2))
    {
      n_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_21), (ATerm) ATmakeAppl(sym_Runtime_1, m_21)), t_21);
  return(t);
}
static ATerm x_22 (ATerm l_22, ATerm t)
{
  t = SSL_fclose(l_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_22 = NULL,v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_22 = ATgetArgument(t, 0);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_22);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = x_22(v_22, t);
          }
      }
    }
  else
    {
      t = x_22(v_22, t);
    }
  return(t);
}
static ATerm w_4 (ATerm l_28, ATerm t)
{
  t = SSL_read_term_from_stream(l_28);
  return(t);
}
static ATerm x_4 (ATerm i_42, ATerm j_42, ATerm t)
{
  t = SSL_strcat(i_42, j_42);
  return(t);
}
static ATerm y_4 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm y_22 = NULL;
  t = SSL_fopen(g_44, h_44);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_22 = NULL;
  t = SSL_stdin_stream();
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_stdout_stream();
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_23 = NULL;
  t = SSL_stderr_stream();
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_23);
  return(t);
}
static ATerm e_25 (ATerm q_23, ATerm t)
{
  ATerm w_23 = NULL;
  t = SSL_explode_term(q_23);
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_10 = ATgetArgument(t, 1);
        if(((ATgetType(f_10) == AT_LIST) && !(ATisEmpty(f_10))))
          {
            w_23 = ATgetFirst((ATermList) f_10);
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
  t = w_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_25 (ATerm z_23, ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm c_24 = NULL,f_24 = NULL,h_24 = NULL,n_24 = NULL,j_7 = NULL;
  t = SSLgetAnnotations(b_24);
  h_24 = t;
  t = z_23;
  if(match_cons(t, sym_Path_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_24, a_24);
  j_7 = t;
  t = SSLsetAnnotations(j_7, h_24);
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(c_24, f_24, t);
  return(t);
}
static ATerm g_25 (ATerm r_24, ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL,z_24 = NULL,q_7 = NULL;
  t = SSLgetAnnotations(t_24);
  w_24 = t;
  t = SSL_is_string(r_24);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_24, s_24);
  q_7 = t;
  t = SSLsetAnnotations(q_7, w_24);
  if(match_cons(t, sym__2))
    {
      u_24 = ATgetArgument(t, 0);
      v_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(u_24, v_24, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym__2))
    {
      c_25 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_25(b_25, t);
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
                  t = f_25(c_25, d_25, b_25, t);
                  LocalPopChoice(k_10);
                }
              else
                {
                  t = j_10;
                  t = g_25(c_25, d_25, b_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_25(b_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,p_25 = NULL;
  p_25 = t;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_25, term_n_10);
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
          t = (ATerm) ATmakeAppl(sym__2, term_o_10, p_25);
          t = x_4(c_14, p_25, t);
          b_14 = t;
          t = SSL_perror(b_14);
          _fail(t);
        }
      }
  }
  j_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(k_25, t);
  i_25 = t;
  t = j_25;
  t = fclose_0_0(t);
  t = i_25;
  return(t);
}
ATerm fetch_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  static ATerm o_26 (ATerm t);
  static ATerm o_26 (ATerm t)
  {
    ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
    l_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_26 = ATgetFirst((ATermList) t);
        n_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_14 = NULL,q_14 = NULL,u_7 = NULL;
          t = SSLgetAnnotations(l_26);
          m_14 = t;
          t = m_26;
          t = o_94(t);
          q_14 = t;
          t = (ATerm) ATinsert(CheckATermList(n_26), q_14);
          u_7 = t;
          t = SSLsetAnnotations(u_7, m_14);
          LocalPopChoice(q_10);
        }
      else
        {
          t = p_10;
          {
            ATerm e_15 = NULL,i_15 = NULL,v_7 = NULL;
            t = SSLgetAnnotations(l_26);
            e_15 = t;
            t = n_26;
            t = o_26(t);
            i_15 = t;
            t = (ATerm) ATinsert(CheckATermList(i_15), m_26);
            v_7 = t;
            t = SSLsetAnnotations(v_7, e_15);
          }
        }
    }
    return(t);
  }
  t = o_26(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm s_26 = NULL;
  s_26 = t;
  if(match_string(t, "-k"))
    {
      t = s_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_26;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t_26 = t;
  t = SSL_string_to_int(t_26);
  u_26 = t;
  t = term_t_10;
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, u_26);
  t = g_5(v_26, u_26, t);
  t = t_26;
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
  ATerm x_26 = NULL;
  x_26 = t;
  if(match_string(t, "-S"))
    {
      t = x_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_26;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL;
  t = term_e_8;
  y_26 = t;
  t = term_p_7;
  z_26 = t;
  t = term_x_10;
  t = g_5(y_26, z_26, t);
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
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  t = SSL_string_to_int(a_27);
  b_27 = t;
  t = term_e_8;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, b_27);
  t = g_5(c_27, b_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_27);
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
  ATerm d_27 = NULL,e_27 = NULL;
  t = term_b_11;
  d_27 = t;
  t = term_u_6;
  e_27 = t;
  t = term_c_11;
  t = g_5(d_27, e_27, t);
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
static ATerm g_5 (ATerm c_63, ATerm d_63, ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  t = term_b_7;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, c_63, d_63);
  t = lookup_table_0_1(f_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(c_63, d_63, g_27, t);
  t = (ATerm) ATmakeAppl(sym__3, term_b_7, c_63, d_63);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
      t = term_u_6;
      t = g_0(t);
      m_27 = t;
      t = term_p_11;
      n_27 = t;
      t = term_q_11;
      o_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, m_27);
      t = e_5(n_27, o_27, m_27, t);
      _fail(t);
    }
  else
    {
      ATerm r_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_27 = ATgetFirst((ATermList) t);
          l_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_27;
      t = d_0(t);
      t = term_u_6;
      t = f_0(t);
      r_27 = t;
      t = (ATerm) ATinsert(CheckATermList(l_27), r_27);
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  if(match_string(t, "-o"))
    {
      t = t_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_27;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  u_27 = t;
  t = term_r_11;
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, u_27);
  t = g_5(v_27, u_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_27);
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
static ATerm e_5 (ATerm l_49, ATerm m_49, ATerm k_49, ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
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
        t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
        t = d_5(l_49, m_49, t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = u_11;
        t = (ATerm) ATempty;
      }
  }
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_49, m_49, (ATerm) ATinsert(CheckATermList(y_27), k_49));
  t = lookup_table_0_1(l_49, t);
  b_28 = t;
  t = (ATerm) ATinsert(CheckATermList(y_27), k_49);
  z_27 = t;
  t = b_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(m_49, z_27, a_28, t);
  t = x_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
      t = term_u_6;
      t = q_0(t);
      t_28 = t;
      t = term_p_11;
      u_28 = t;
      t = term_q_11;
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_11, term_q_11, t_28);
      t = e_5(u_28, v_28, t_28, t);
      _fail(t);
    }
  else
    {
      ATerm z_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_28 = ATgetFirst((ATermList) t);
          q_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_28;
      t = o_0(t);
      t = r_28;
      t = p_0(t);
      z_28 = t;
      t = (ATerm) ATinsert(CheckATermList(s_28), z_28);
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  if(match_string(t, "-i"))
    {
      t = d_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_29;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  e_29 = t;
  t = term_z_11;
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, e_29);
  t = g_5(f_29, e_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_29);
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
static ATerm a_5 (ATerm i_54, ATerm j_54, ATerm t)
{
  ATerm g_29 = NULL;
  t = SSL_hashtable_remove(j_54, i_54);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_29);
  return(t);
}
static ATerm b_5 (ATerm n_54, ATerm t)
{
  ATerm h_29 = NULL;
  t = SSL_hashtable_destroy(n_54);
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_29);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  i_29 = t;
  t = table_hashtable_0_0(t);
  j_29 = t;
  t = lookup_table_0_1(i_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_5(l_29, t);
  t = j_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(i_29, k_29, t);
  t = i_29;
  return(t);
}
ATerm map_1_0 (ATerm e_94 (ATerm), ATerm t)
{
  static ATerm c_30 (ATerm t);
  static ATerm c_30 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    z_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_29;
      }
    else
      {
        ATerm u_15 = NULL,x_15 = NULL,z_15 = NULL,a_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_30 = ATgetFirst((ATermList) t);
            b_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_29);
        u_15 = t;
        t = a_30;
        t = e_94(t);
        x_15 = t;
        t = b_30;
        t = c_30(t);
        z_15 = t;
        t = (ATerm) ATinsert(CheckATermList(z_15), x_15);
        a_8 = t;
        t = SSLsetAnnotations(a_8, u_15);
      }
    return(t);
  }
  t = c_30(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_30 = ATgetFirst((ATermList) t);
      g_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_30 = NULL,l_30 = NULL;
        static ATerm w_3 (ATerm t);
        static ATerm w_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_30)), not_null(l_30));
          return(t);
        }
        t = g_30;
        t = l_0(t);
        if(((k_30 != NULL) && (k_30 != t)))
          _fail(t);
        else
          k_30 = t;
        t = f_30;
        t = j_0(t);
        if(((l_30 != NULL) && (l_30 != t)))
          _fail(t);
        else
          l_30 = t;
        t = g_30;
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
  ATerm a_31 = NULL;
  a_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_31), term_b_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_30 = NULL,t_30 = NULL;
      t = term_b_7;
      s_30 = t;
      t = term_i_7;
      t_30 = t;
      t = term_m_7;
      t = d_5(s_30, t_30, t);
      p_30 = t;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        static ATerm x_3 (ATerm t);
        static ATerm x_3 (ATerm t)
        {
          ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,g_8 = NULL;
          w_30 = t;
          if(match_cons(t, sym_Program_1))
            {
              v_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_30);
          u_30 = t;
          t = v_30;
          if(((p_30 != NULL) && (p_30 != t)))
            _fail(t);
          else
            p_30 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, v_30);
          g_8 = t;
          t = SSLsetAnnotations(g_8, u_30);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_12), not_null(p_30)), term_k_12);
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
  q_30 = t;
  t = term_q_11;
  r_30 = t;
  t = term_n_12;
  t = d_5(q_30, r_30, t);
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
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_31;
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
            t = e_31;
          }
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = (ATerm) ATinsert(ATempty, e_31);
      }
  }
  f_31 = t;
  t = term_t_8;
  g_31 = t;
  t = SSL_printnl(g_31, f_31);
  t = e_31;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  t = term_b_7;
  k_31 = t;
  t = term_i_7;
  l_31 = t;
  t = term_m_7;
  t = d_5(k_31, l_31, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm e_51, ATerm f_51, ATerm t)
{
  ATerm m_31 = NULL;
  t = lookup_table_0_1(e_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(f_51, m_31, t);
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
  ATerm o_31 = NULL,p_31 = NULL;
  t = term_i_13;
  o_31 = t;
  t = term_u_6;
  p_31 = t;
  t = term_j_13;
  t = g_5(o_31, p_31, t);
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
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = term_i_13;
  s_31 = t;
  t = term_u_6;
  t_31 = t;
  t = term_j_13;
  t = g_5(s_31, t_31, t);
  t = term_l_13;
  q_31 = t;
  t = term_u_6;
  r_31 = t;
  t = term_m_13;
  t = g_5(q_31, r_31, t);
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
ATerm Cons_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,i_8 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_31 = ATgetFirst((ATermList) t);
      w_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_31);
  u_31 = t;
  t = v_31;
  t = r_73(t);
  x_31 = t;
  t = w_31;
  t = s_73(t);
  y_31 = t;
  t = (ATerm) ATinsert(CheckATermList(y_31), x_31);
  i_8 = t;
  t = SSLsetAnnotations(i_8, u_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_114 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,j_32 = NULL,k_32 = NULL,v_8 = NULL;
  e_32 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_13;
        t = p_114(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
      }
  }
  t = e_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_32 = ATgetFirst((ATermList) t);
      h_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_32);
  f_32 = t;
  t = term_i_7;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_7, g_32);
  t = g_5(k_32, g_32, t);
  t = h_32;
  {
    static ATerm u_32 (ATerm t);
    static ATerm u_32 (ATerm t)
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_32 = NULL;
              n_32 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_32;
              LocalPopChoice(d_14);
            }
          else
            {
              t = a_14;
              t = p_114(t);
              t = Cons_2_0(_id, u_32, t);
            }
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm q_32 = NULL,r_32 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_32 = ATgetFirst((ATermList) t);
                r_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_32), (ATerm) ATmakeAppl(sym_Undefined_1, q_32));
          }
        }
      return(t);
    }
    t = u_32(t);
  }
  j_32 = t;
  t = (ATerm) ATinsert(CheckATermList(j_32), (ATerm) ATmakeAppl(sym_Program_1, g_32));
  v_8 = t;
  t = SSLsetAnnotations(v_8, f_32);
  return(t);
}
static ATerm h_5 (ATerm d_54, ATerm e_54, ATerm f_54, ATerm t)
{
  ATerm v_32 = NULL;
  t = SSL_hashtable_put(f_54, d_54, e_54);
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_32);
  return(t);
}
static ATerm i_5 (ATerm g_54, ATerm h_54, ATerm t)
{
  t = SSL_hashtable_get(h_54, g_54);
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_54, ATerm m_54, ATerm t)
{
  ATerm w_32 = NULL;
  t = SSL_hashtable_create(l_54, m_54);
  w_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_32);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,b_33 = NULL,c_33 = NULL;
  x_32 = t;
  t = term_e_14;
  b_33 = t;
  t = term_g_14;
  c_33 = t;
  t = x_32;
  t = new_hashtable_0_2(b_33, c_33, t);
  y_32 = t;
  t = x_32;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(x_32, y_32, z_32, t);
  t = x_32;
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_33 = NULL;
  t = SSL_table_hashtable();
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_33);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_50, ATerm t)
{
  ATerm m_33 = NULL;
  t = table_hashtable_0_0(t);
  m_33 = t;
  {
    ATerm j_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL;
        t = m_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_5(x_50, o_16, t);
        LocalPopChoice(k_14);
      }
    else
      {
        t = j_14;
        {
          ATerm x_16 = NULL;
          t = x_50;
          t = table_create_0_0(t);
          t = m_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_5(x_50, x_16, t);
        }
      }
  }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  if(match_string(t, "--help"))
    {
      t = b_34;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_34;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_34;
        }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL;
  t = term_l_14;
  c_34 = t;
  t = term_u_6;
  d_34 = t;
  t = term_n_14;
  t = g_5(c_34, d_34, t);
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
ATerm parse_options_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  v_33 = t;
  t = term_p_11;
  w_33 = t;
  t = term_r_14;
  t = lookup_table_0_1(w_33, t);
  a_34 = t;
  t = term_q_11;
  x_33 = t;
  t = (ATerm) ATempty;
  y_33 = t;
  t = a_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(x_33, y_33, z_33, t);
  t = v_33;
  {
    static ATerm b_6 (ATerm t);
    static ATerm b_6 (ATerm t)
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_114(t);
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
        ATerm q_34 = NULL;
        q_34 = t;
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_17 = NULL;
              t = q_34;
              {
                ATerm b_15 = t;
                int c_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_17 = NULL,o_17 = NULL;
                    t = term_b_7;
                    n_17 = t;
                    t = term_l_14;
                    o_17 = t;
                    t = term_d_15;
                    t = d_5(n_17, o_17, t);
                    LocalPopChoice(c_15);
                  }
                else
                  {
                    t = b_15;
                    t = fetch_1_0(g_6, t);
                  }
              }
              t = q_34;
              t = default_system_usage_0_0(t);
              t = term_p_7;
              m_17 = t;
              t = SSL_exit(m_17);
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              {
                ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
                t = term_b_7;
                t_17 = t;
                t = term_i_13;
                u_17 = t;
                t = term_f_15;
                t = d_5(t_17, u_17, t);
                t = q_34;
                t = default_system_about_0_0(t);
                t = term_p_7;
                s_17 = t;
                t = SSL_exit(s_17);
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
              ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
              static ATerm i_6 (ATerm t);
              static ATerm i_6 (ATerm t)
              {
                ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,y_8 = NULL;
                z_34 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_34 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_34);
                x_34 = t;
                t = y_34;
                if(((t_33 != NULL) && (t_33 != t)))
                  _fail(t);
                else
                  t_33 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_34);
                y_8 = t;
                t = SSLsetAnnotations(y_8, x_34);
                return(t);
              }
              t = fetch_1_0(i_6, t);
              t = term_v_6;
              v_34 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_33)), term_j_15);
              w_34 = t;
              t = SSL_printnl(v_34, w_34);
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_33)), term_j_15));
              t = default_system_usage_0_0(t);
              t = term_y_6;
              u_34 = t;
              t = SSL_exit(u_34);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
            }
        }
      }
  }
  u_33 = t;
  t = term_p_11;
  t = table_destroy_0_0(t);
  t = u_33;
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
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_t_15;
  f_35 = t;
  t = term_u_6;
  g_35 = t;
  t = term_v_15;
  t = g_5(f_35, g_35, t);
  t = term_w_15;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_y_15;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm h_18 = NULL,j_18 = NULL,k_18 = NULL,m_18 = NULL,o_18 = NULL,a_9 = NULL;
  o_18 = t;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_18);
  h_18 = t;
  t = k_18;
  t = visamb_0_0(t);
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_18, m_18);
  a_9 = t;
  t = SSLsetAnnotations(a_9, h_18);
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
        ATerm u_35 = NULL,b_18 = NULL,g_18 = NULL;
        u_35 = t;
        {
          ATerm c_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm p_6 (ATerm t);
              static ATerm p_6 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((b_18 != NULL) && (b_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      b_18 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(p_6, t);
              LocalPopChoice(f_16);
            }
          else
            {
              t = c_16;
              t = term_g_16;
              b_18 = t;
            }
        }
        t = not_null(b_18);
        t = ReadFromFile_0_0(t);
        g_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_35, g_18);
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

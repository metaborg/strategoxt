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
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_lit_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_parsetree_2;
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
}
ATerm term_s_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_s_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_q_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_m_7;
ATerm term_g_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_q_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_w_6);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_b_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_m_7);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_7);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_q_6);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_l_11);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("The SDF2 implementation caters for arbitrary context-free grammars. That is,\n", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("even for ambiguous grammars the parser will produce a parse trees containing\n", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("a concise encoding of allpossible parses. Ambiguities are represented by\n", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("means of amb nodes that contain a list of possible parse trees at that\n", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("point. For most applications, however, it is desirable to develop\n", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("unambiguous grammars. To aid the grammar writer in detecting and solving the\n", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ambiguities, the visamb tool extracts the ambiguities from a parse tree and\n", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("displays them in a readable format.\n", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_q_6);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_h_13, term_q_6);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_q_6);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_b_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_v_6, term_d_13);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_k_15, term_q_6);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_3 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_89 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_3 (ATerm k_31, ATerm l_31, ATerm t);
static ATerm z_3 (ATerm f_16, ATerm g_16, ATerm t);
static ATerm b_4 (ATerm w_73 (ATerm), ATerm z_140, ATerm l_16, ATerm t);
static ATerm a_4 (ATerm b_16, ATerm c_16, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm Lexical_0_0 (ATerm t);
static ATerm i_12 (ATerm x_10, ATerm t);
ATerm abbrev_term_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm w_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm yield_0_0 (ATerm t);
static ATerm h_4 (ATerm q_14, ATerm t);
static ATerm i_4 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm n_22, ATerm m_22, ATerm t);
static ATerm j_4 (ATerm q_78 (ATerm), ATerm j_22, ATerm i_22, ATerm t);
ATerm foldr_3_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm bu_collect_1_0 (ATerm j_79 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm visamb_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_91 (ATerm), ATerm t);
static ATerm n_23 (ATerm v_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_4 (ATerm h_16, ATerm t);
static ATerm l_4 (ATerm d_30, ATerm e_30, ATerm t);
static ATerm m_4 (ATerm m_31, ATerm n_31, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_24 (ATerm x_23, ATerm t);
static ATerm z_24 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm t);
static ATerm a_25 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t);
static ATerm n_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm p_74 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_4 (ATerm d_41, ATerm e_41, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_4 (ATerm y_45, ATerm z_45, ATerm x_45, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm map_1_0 (ATerm f_74 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_4 (ATerm p_47, ATerm q_47, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_52 (ATerm), ATerm b_52 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_94 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm parse_options_1_0 (ATerm f_94 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,j_0 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_6;
  t = whoami_0_0(t);
  a_0 = t;
  t = term_s_6;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_6), a_0);
  j_0 = t;
  t = SSL_printnl(f_0, j_0);
  t = term_u_6;
  b_0 = t;
  t = SSL_exit(b_0);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_0 = NULL,t_0 = NULL;
  t = term_v_6;
  r_0 = t;
  t = term_w_6;
  t_0 = t;
  t = term_g_7;
  t = p_4(r_0, t_0, t);
  return(t);
}
static ATerm w_3 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm h_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(l_7);
    }
  else
    {
      t = h_7;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,b_1 = NULL,c_1 = NULL;
  y_0 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_0;
      t = w_80(t);
    }
  else
    {
      ATerm g_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_1 = ATgetFirst((ATermList) t);
          c_1 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_1;
      t = foldr_2_0(w_80, x_80, t);
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_1, g_1);
      t = x_80(t);
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
  t = term_m_7;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm s_0 = NULL,u_0 = NULL;
  if(match_cons(t, sym__2))
    {
      s_0 = ATgetArgument(t, 0);
      u_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(s_0, u_0, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_1 = NULL,h_0 = NULL,l_0 = NULL;
  t = times_0_0(t);
  l_0 = t;
  t = SSL_explode_term(l_0);
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      h_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_0;
  t = foldr_2_0(v_0, w_0, t);
  k_1 = t;
  t = SSL_TicksToSeconds(k_1);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_2;
        if((k_2 != t))
          {
            _fail(t);
          }
        t = j_2;
        LocalPopChoice(q_7);
      }
    else
      {
        t = o_7;
        t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
        {
          ATerm t_7 = t;
          int v_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_2, l_2);
              LocalPopChoice(v_7);
            }
          else
            {
              t = t_7;
              t = SSL_gtr(k_2, l_2);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_2, l_2);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  {
    ATerm x_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
        t = term_v_6;
        u_2 = t;
        t = term_b_8;
        v_2 = t;
        t = term_c_8;
        t = p_4(u_2, v_2, t);
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_2, term_u_6);
        t = geq_0_0(t);
        t = q_2;
        t = n_89(t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = x_7;
        t = q_2;
      }
  }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,e_3 = NULL,h_3 = NULL;
  t = run_time_0_0(t);
  x_2 = t;
  t = term_q_6;
  t = whoami_0_0(t);
  y_2 = t;
  t = term_s_6;
  e_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_8), x_2), term_d_8), y_2);
  h_3 = t;
  t = SSL_printnl(e_3, h_3);
  t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_8), x_2), term_d_8), y_2));
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
  t = term_m_7;
  i_3 = t;
  t = SSL_exit(i_3);
  return(t);
}
static ATerm y_3 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm l_3 = NULL;
  t = SSL_fputc(k_31, l_31);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_3);
  return(t);
}
static ATerm z_3 (ATerm f_16, ATerm g_16, ATerm t)
{
  ATerm m_3 = NULL;
  t = SSL_write_term_to_stream_text(f_16, g_16);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
static ATerm b_4 (ATerm w_73 (ATerm), ATerm z_140, ATerm l_16, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_140, term_h_8);
  t = n_4(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, l_16);
  t = w_73(t);
  t = fclose_0_0(t);
  t = l_16;
  return(t);
}
static ATerm a_4 (ATerm b_16, ATerm c_16, ATerm t)
{
  ATerm q_3 = NULL;
  t = SSL_write_term_to_stream_baf(b_16, c_16);
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
static ATerm d_1 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if(match_cons(j_8, sym_Stream_1))
        {
          a_2 = ATgetArgument(j_8, 0);
        }
      else
        _fail(t);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(a_2, b_2, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,j_3 = NULL,k_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(match_cons(k_8, sym_Stream_1))
        {
          k_3 = ATgetArgument(k_8, 0);
        }
      else
        _fail(t);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(k_3, n_3, t);
  f_3 = t;
  t = term_m_8;
  g_3 = t;
  t = f_3;
  if(match_cons(t, sym_Stream_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_8, f_3);
  t = y_3(g_3, j_3, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,o_4 = NULL,r_4 = NULL,t_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,b_5 = NULL,c_5 = NULL,x_6 = NULL,y_6 = NULL,m_0 = NULL,g_0 = NULL;
  g_4 = t;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_4);
  y_4 = t;
  t = z_4;
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_4 != NULL) && (f_4 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_4 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(z_0, t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = term_q_8;
        f_4 = t;
      }
  }
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_5, b_5);
  g_0 = t;
  t = SSLsetAnnotations(g_0, y_4);
  t = g_4;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_4);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATmakeAppl(sym__2, not_null(f_4), t_4));
  m_0 = t;
  t = SSLsetAnnotations(m_0, o_4);
  x_4 = t;
  if(match_cons(t, sym__2))
    {
      x_6 = ATgetArgument(t, 0);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,q_0 = NULL;
        t = SSLgetAnnotations(x_4);
        t_1 = t;
        t = x_6;
        t = fetch_1_0(a_1, t);
        w_1 = t;
        t = y_6;
        if(match_cons(t, sym__2))
          {
            y_1 = ATgetArgument(t, 0);
            z_1 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_4(d_1, y_1, z_1, t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
        q_0 = t;
        t = SSLsetAnnotations(q_0, t_1);
        LocalPopChoice(t_8);
      }
    else
      {
        t = r_8;
        {
          ATerm p_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(x_4);
          p_2 = t;
          t = y_6;
          if(match_cons(t, sym__2))
            {
              b_3 = ATgetArgument(t, 0);
              c_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_4(e_1, b_3, c_3, t);
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_6, a_3);
          i_1 = t;
          t = SSLsetAnnotations(i_1, p_2);
        }
      }
  }
  return(t);
}
ATerm Lexical_0_0 (ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  if(match_cons(t, sym_appl_2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_3 = NULL,x_3 = NULL,e_4 = NULL,v_4 = NULL,w_4 = NULL,a_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,n_5 = NULL,o_5 = NULL,v_5 = NULL,w_5 = NULL,a_6 = NULL,b_6 = NULL,h_2 = NULL,g_2 = NULL,e_2 = NULL,c_2 = NULL,q_1 = NULL;
        t = SSLgetAnnotations(j_10);
        x_3 = t;
        t = k_10;
        if(match_cons(t, sym_prod_3))
          {
            v_4 = ATgetArgument(t, 0);
            w_4 = ATgetArgument(t, 1);
            a_5 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_10);
        e_4 = t;
        t = v_4;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_5 = ATgetFirst((ATermList) t);
            o_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_4);
        h_5 = t;
        t = n_5;
        if(match_cons(t, sym_lex_1))
          {
            a_6 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_5);
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym_lex_1, a_6);
        q_1 = t;
        t = SSLsetAnnotations(q_1, w_5);
        b_6 = t;
        t = o_5;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_5), b_6);
        c_2 = t;
        t = SSLsetAnnotations(c_2, h_5);
        v_5 = t;
        t = w_4;
        if(match_cons(t, sym_cf_1))
          {
            f_5 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_4);
        e_5 = t;
        t = (ATerm) ATmakeAppl(sym_cf_1, f_5);
        e_2 = t;
        t = SSLsetAnnotations(e_2, e_5);
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym_prod_3, v_5, g_5, a_5);
        g_2 = t;
        t = SSLsetAnnotations(g_2, e_4);
        d_5 = t;
        t = (ATerm) ATmakeAppl(sym_appl_2, d_5, l_10);
        h_2 = t;
        t = SSLsetAnnotations(h_2, x_3);
        t = yield_0_0(t);
        v_3 = t;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lexical_1, v_3));
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        {
          ATerm r_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,j_5 = NULL,i_5 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(j_10);
          r_6 = t;
          t = k_10;
          if(match_cons(t, sym_prod_3))
            {
              b_7 = ATgetArgument(t, 0);
              d_7 = ATgetArgument(t, 1);
              e_7 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_10);
          a_7 = t;
          t = d_7;
          if(match_cons(t, sym_lit_1))
            {
              j_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_7);
          i_7 = t;
          t = (ATerm) ATmakeAppl(sym_lit_1, j_7);
          o_2 = t;
          t = SSLsetAnnotations(o_2, i_7);
          k_7 = t;
          t = (ATerm) ATmakeAppl(sym_prod_3, b_7, k_7, e_7);
          i_5 = t;
          t = SSLsetAnnotations(i_5, a_7);
          f_7 = t;
          t = (ATerm) ATmakeAppl(sym_appl_2, f_7, l_10);
          j_5 = t;
          t = SSLsetAnnotations(j_5, r_6);
          t = (ATerm) ATempty;
        }
      }
  }
  return(t);
}
static ATerm i_12 (ATerm x_10, ATerm t)
{
  t = SSL_is_int(x_10);
  return(t);
}
ATerm abbrev_term_0_0 (ATerm t)
{
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL,a_11 = NULL,d_11 = NULL,e_11 = NULL;
      z_10 = t;
      if(match_cons(t, sym_amb_1))
        {
          a_11 = ATgetArgument(t, 0);
          t = a_11;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_11 = ATgetFirst((ATermList) t);
              e_11 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm a_9 = t;
                int b_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_12(z_10, t);
                    LocalPopChoice(b_9);
                  }
                else
                  {
                    t = a_9;
                    t = d_11;
                  }
              }
            }
          else
            {
              t = i_12(z_10, t);
            }
        }
      else
        {
          t = i_12(z_10, t);
        }
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      {
        ATerm p_7 = NULL,u_7 = NULL,a_8 = NULL;
        p_7 = t;
        if(match_cons(t, sym_appl_2))
          {
            ATerm c_9 = ATgetArgument(t, 0);
            if(match_cons(c_9, sym_prod_3))
              {
                ATerm e_9 = ATgetArgument(c_9, 0);
                a_8 = ATgetArgument(c_9, 1);
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
        t = p_7;
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Lexical_0_0(t);
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              {
                ATerm e_8 = NULL,f_8 = NULL;
                if(match_cons(t, sym_appl_2))
                  {
                    e_8 = ATgetArgument(t, 0);
                    f_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_8;
                t = map_1_0(abbrev_term_0_0, t);
              }
            }
        }
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym_N_2, a_8, u_7);
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  static ATerm t_13 (ATerm t)
  {
    ATerm j_13 = NULL,m_13 = NULL,r_13 = NULL;
    r_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_13 = ATgetFirst((ATermList) t);
        m_13 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_8 = NULL,x_8 = NULL,u_5 = NULL;
          t = SSLgetAnnotations(r_13);
          u_8 = t;
          t = m_13;
          t = t_13(t);
          x_8 = t;
          t = (ATerm) ATinsert(CheckATermList(x_8), j_13);
          u_5 = t;
          t = SSLsetAnnotations(u_5, u_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_13;
        t = w_74(t);
      }
    return(t);
  }
  t = t_13(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_14 = NULL,d_14 = NULL,e_14 = NULL;
  a_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_14;
    }
  else
    {
      static ATerm f_1 (ATerm t)
      {
        t = not_null(e_14);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_14 = ATgetFirst((ATermList) t);
          if(((e_14 != NULL) && (e_14 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_14;
      t = at_end_1_0(f_1, t);
    }
  return(t);
}
ATerm yield_0_0 (ATerm t)
{
  ATerm o_14 = NULL;
  static ATerm a_16 (ATerm t)
  {
    ATerm t_15 = NULL,w_15 = NULL,x_15 = NULL;
    x_15 = t;
    if(match_cons(t, sym_appl_2))
      {
        t_15 = ATgetArgument(t, 0);
        w_15 = ATgetArgument(t, 1);
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_9 = NULL,r_9 = NULL,u_9 = NULL,y_5 = NULL;
              t = SSLgetAnnotations(x_15);
              r_9 = t;
              t = w_15;
              t = map_1_0(a_16, t);
              u_9 = t;
              t = (ATerm) ATmakeAppl(sym_appl_2, t_15, u_9);
              y_5 = t;
              t = SSLsetAnnotations(y_5, r_9);
              if(match_cons(t, sym_appl_2))
                {
                  ATerm k_9 = ATgetArgument(t, 0);
                  m_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_9;
              t = concat_0_0(t);
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              t = (ATerm) ATinsert(ATempty, x_15);
            }
        }
      }
    else
      {
        t = (ATerm) ATinsert(ATempty, x_15);
      }
    return(t);
  }
  t = a_16(t);
  o_14 = t;
  t = SSL_implode_string(o_14);
  return(t);
}
static ATerm h_4 (ATerm q_14, ATerm t)
{
  ATerm e_16 = NULL,n_16 = NULL,q_16 = NULL;
  t = q_14;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_16 = ATgetFirst((ATermList) t);
      {
        ATerm l_9 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_16;
  t = yield_0_0(t);
  e_16 = t;
  t = q_14;
  t = map_1_0(abbrev_term_0_0, t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym_amb_abbr_2, e_16, n_16);
  return(t);
}
static ATerm i_4 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm n_22, ATerm m_22, ATerm t)
{
  t = u_78(t);
  {
    static ATerm h_1 (ATerm t)
    {
      ATerm s_16 = NULL;
      s_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_22, s_16);
      t = t_78(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
  }
  t = m_22;
  return(t);
}
static ATerm j_4 (ATerm q_78 (ATerm), ATerm j_22, ATerm i_22, ATerm t)
{
  static ATerm b_18 (ATerm t)
  {
    ATerm t_17 = NULL,u_17 = NULL,w_17 = NULL;
    t_17 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_17 = ATgetFirst((ATermList) t);
            w_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_9 = t;
          int o_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_17;
              {
                static ATerm j_1 (ATerm t)
                {
                  t = i_22;
                  return(t);
                }
                t = i_4(q_78, j_1, u_17, w_17, t);
              }
              t = b_18(t);
              LocalPopChoice(o_9);
            }
          else
            {
              t = n_9;
              {
                ATerm b_11 = NULL,n_11 = NULL,c_6 = NULL;
                t = SSLgetAnnotations(t_17);
                b_11 = t;
                t = w_17;
                t = b_18(t);
                n_11 = t;
                t = (ATerm) ATinsert(CheckATermList(n_11), u_17);
                c_6 = t;
                t = SSLsetAnnotations(c_6, b_11);
              }
            }
        }
      }
    return(t);
  }
  t = j_22;
  t = b_18(t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_18;
      t = y_80(t);
    }
  else
    {
      ATerm p_18 = NULL,r_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_18 = ATgetFirst((ATermList) t);
          i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_18;
      t = a_81(t);
      p_18 = t;
      t = i_18;
      t = foldr_3_0(y_80, z_80, a_81, t);
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_18, r_18);
      t = z_80(t);
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
  ATerm b_12 = NULL,c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(o_1, b_12, c_12, t);
  return(t);
}
static ATerm o_1 (ATerm t)
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
ATerm bu_collect_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm i_20 (ATerm t)
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_11 = NULL,u_11 = NULL;
            static ATerm n_1 (ATerm t)
            {
              ATerm v_9 = t;
              int w_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_12 = NULL,p_12 = NULL,r_12 = NULL,a_13 = NULL,g_13 = NULL,g_6 = NULL;
                  o_12 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_12 = ATgetFirst((ATermList) t);
                      r_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_12);
                  a_13 = t;
                  t = p_12;
                  t = j_79(t);
                  g_13 = t;
                  t = (ATerm) ATinsert(CheckATermList(r_12), g_13);
                  g_6 = t;
                  t = SSLsetAnnotations(g_6, a_13);
                  LocalPopChoice(w_9);
                }
              else
                {
                  t = v_9;
                  t = (ATerm) ATempty;
                }
              return(t);
            }
            t = SRTS_some(i_20, t);
            u_11 = t;
            t = SSL_explode_term(u_11);
            if(match_cons(t, sym__2))
              {
                ATerm x_9 = ATgetArgument(t, 0);
                t_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_11;
            t = foldr_3_0(l_1, m_1, n_1, t);
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            {
              ATerm h_20 = NULL;
              t = j_79(t);
              h_20 = t;
              t = (ATerm) ATinsert(ATempty, h_20);
            }
          }
        return(t);
      }
      t = i_20(t);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,i_6 = NULL;
  m_21 = t;
  if(match_cons(t, sym_amb_1))
    {
      l_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_21);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_amb_1, l_21);
  i_6 = t;
  t = SSLsetAnnotations(i_6, k_21);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym_amb_1))
    {
      r_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4(r_21, t);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_root_1, o_21);
  return(t);
}
ATerm visamb_0_0 (ATerm t)
{
  ATerm m_20 = NULL,r_20 = NULL,s_20 = NULL,u_20 = NULL,v_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,j_21 = NULL,n_6 = NULL,k_6 = NULL;
  j_21 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  y_20 = t;
  t = z_20;
  t = bu_collect_1_0(p_1, t);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, b_21, a_21);
  k_6 = t;
  t = SSLsetAnnotations(k_6, y_20);
  c_21 = t;
  if(match_cons(t, sym_parsetree_2))
    {
      r_20 = ATgetArgument(t, 0);
      s_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  m_20 = t;
  t = r_20;
  t = map_1_0(r_1, t);
  u_20 = t;
  t = SSL_int_to_string(s_20);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_parsetree_2, u_20, v_20);
  n_6 = t;
  t = SSLsetAnnotations(n_6, m_20);
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,c_22 = NULL,d_22 = NULL;
  d_22 = t;
  t = dtime_0_0(t);
  t = d_22;
  t = f_91(t);
  c_22 = t;
  t = dtime_0_0(t);
  t_21 = t;
  t = c_22;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_21), (ATerm) ATmakeAppl(sym_Runtime_1, t_21)), v_21);
  return(t);
}
static ATerm n_23 (ATerm v_22, ATerm t)
{
  t = SSL_fclose(v_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_23 = ATgetArgument(t, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_23);
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            t = n_23(c_23, t);
          }
      }
    }
  else
    {
      t = n_23(c_23, t);
    }
  return(t);
}
static ATerm k_4 (ATerm h_16, ATerm t)
{
  t = SSL_read_term_from_stream(h_16);
  return(t);
}
static ATerm l_4 (ATerm d_30, ATerm e_30, ATerm t)
{
  t = SSL_strcat(d_30, e_30);
  return(t);
}
static ATerm m_4 (ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm o_23 = NULL;
  t = SSL_fopen(m_31, n_31);
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
static ATerm y_24 (ATerm x_23, ATerm t)
{
  ATerm y_23 = NULL;
  t = SSL_explode_term(x_23);
  if(match_cons(t, sym__2))
    {
      ATerm a_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_10 = ATgetArgument(t, 1);
        if(((ATgetType(b_10) == AT_LIST) && !(ATisEmpty(b_10))))
          {
            y_23 = ATgetFirst((ATermList) b_10);
            {
              ATerm c_10 = (ATerm) ATgetNext((ATermList) b_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_24 (ATerm b_24, ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,j_24 = NULL,z_6 = NULL;
  t = SSLgetAnnotations(d_24);
  g_24 = t;
  t = b_24;
  if(match_cons(t, sym_Path_1))
    {
      j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_24, c_24);
  z_6 = t;
  t = SSLsetAnnotations(z_6, g_24);
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      f_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(e_24, f_24, t);
  return(t);
}
static ATerm a_25 (ATerm l_24, ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,t_24 = NULL,c_7 = NULL;
  t = SSLgetAnnotations(n_24);
  q_24 = t;
  t = SSL_is_string(l_24);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_24, m_24);
  c_7 = t;
  t = SSLsetAnnotations(c_7, q_24);
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(o_24, p_24, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_24(v_24, t);
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_24(w_24, x_24, v_24, t);
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  t = a_25(w_24, x_24, v_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_24(v_24, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,j_25 = NULL;
  j_25 = t;
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_25, term_m_10);
        t = n_4(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          ATerm y_13 = NULL,z_13 = NULL;
          t = term_n_10;
          z_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_10, j_25);
          t = l_4(z_13, j_25, t);
          y_13 = t;
          t = SSL_perror(y_13);
          _fail(t);
        }
      }
  }
  d_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(e_25, t);
  c_25 = t;
  t = d_25;
  t = fclose_0_0(t);
  t = c_25;
  return(t);
}
ATerm fetch_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  static ATerm i_26 (ATerm t)
  {
    ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
    f_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_26 = ATgetFirst((ATermList) t);
        h_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_10 = t;
      int p_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_14 = NULL,n_14 = NULL,r_7 = NULL;
          t = SSLgetAnnotations(f_26);
          k_14 = t;
          t = g_26;
          t = p_74(t);
          n_14 = t;
          t = (ATerm) ATinsert(CheckATermList(h_26), n_14);
          r_7 = t;
          t = SSLsetAnnotations(r_7, k_14);
          LocalPopChoice(p_10);
        }
      else
        {
          t = o_10;
          {
            ATerm a_15 = NULL,f_15 = NULL,s_7 = NULL;
            t = SSLgetAnnotations(f_26);
            a_15 = t;
            t = h_26;
            t = i_26(t);
            f_15 = t;
            t = (ATerm) ATinsert(CheckATermList(f_15), g_26);
            s_7 = t;
            t = SSLsetAnnotations(s_7, a_15);
          }
        }
    }
    return(t);
  }
  t = i_26(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  if(match_string(t, "-k"))
    {
      t = m_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_26;
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  t = SSL_string_to_int(n_26);
  o_26 = t;
  t = term_q_10;
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, o_26);
  t = s_4(p_26, o_26, t);
  t = n_26;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_r_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, u_1, v_1, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  if(match_string(t, "-S"))
    {
      t = r_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_26;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  t = term_b_8;
  s_26 = t;
  t = term_m_7;
  t_26 = t;
  t = term_s_10;
  t = s_4(s_26, t_26, t);
  t = term_t_10;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t = SSL_string_to_int(u_26);
  v_26 = t;
  t = term_b_8;
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, v_26);
  t = s_4(w_26, v_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_26);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_v_10;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  t = term_w_10;
  x_26 = t;
  t = term_q_6;
  y_26 = t;
  t = term_y_10;
  t = s_4(x_26, y_26, t);
  t = term_c_11;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, f_2, i_2, t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, n_2, r_2, t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            t = Option_3_0(s_2, w_2, z_2, t);
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm d_41, ATerm e_41, ATerm t)
{
  ATerm z_26 = NULL;
  t = term_v_6;
  z_26 = t;
  t = SSL_table_put(z_26, d_41, e_41);
  t = (ATerm) ATmakeAppl(sym__3, term_v_6, d_41, e_41);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
      t = term_q_6;
      t = e_0(t);
      e_27 = t;
      t = term_k_11;
      f_27 = t;
      t = term_l_11;
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_11, term_l_11, e_27);
      t = q_4(f_27, g_27, e_27, t);
      _fail(t);
    }
  else
    {
      ATerm j_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_27 = ATgetFirst((ATermList) t);
          d_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_27;
      t = c_0(t);
      t = term_q_6;
      t = d_0(t);
      j_27 = t;
      t = (ATerm) ATinsert(CheckATermList(d_27), j_27);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  if(match_string(t, "-o"))
    {
      t = l_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_27;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  m_27 = t;
  t = term_m_11;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, m_27);
  t = s_4(n_27, m_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_27);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, o_3, r_3, t);
  return(t);
}
static ATerm q_4 (ATerm y_45, ATerm z_45, ATerm x_45, ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_45, z_45);
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_11 = ATgetArgument(t, 0);
            ATerm s_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_45, z_45);
        t = p_4(y_45, z_45, t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATempty;
      }
  }
  q_27 = t;
  t = (ATerm) ATinsert(CheckATermList(q_27), x_45);
  r_27 = t;
  t = SSL_table_put(y_45, z_45, r_27);
  t = p_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
      t = term_q_6;
      t = p_0(t);
      c_28 = t;
      t = term_k_11;
      d_28 = t;
      t = term_l_11;
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_11, term_l_11, c_28);
      t = q_4(d_28, e_28, c_28, t);
      _fail(t);
    }
  else
    {
      ATerm i_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_27 = ATgetFirst((ATermList) t);
          z_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_28 = ATgetFirst((ATermList) t);
          b_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_27;
      t = n_0(t);
      t = a_28;
      t = o_0(t);
      i_28 = t;
      t = (ATerm) ATinsert(CheckATermList(b_28), i_28);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  if(match_string(t, "-i"))
    {
      t = k_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_28;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  l_28 = t;
  t = term_v_11;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, l_28);
  t = s_4(m_28, l_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_28);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, t_3, u_3, t);
  return(t);
}
ATerm map_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  static ATerm b_29 (ATerm t)
  {
    ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
    y_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_28;
      }
    else
      {
        ATerm u_15 = NULL,j_16 = NULL,k_16 = NULL,w_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_28 = ATgetFirst((ATermList) t);
            a_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_28);
        u_15 = t;
        t = z_28;
        t = f_74(t);
        j_16 = t;
        t = a_29;
        t = b_29(t);
        k_16 = t;
        t = (ATerm) ATinsert(CheckATermList(k_16), j_16);
        w_7 = t;
        t = SSLsetAnnotations(w_7, u_15);
      }
    return(t);
  }
  t = b_29(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_29 = ATgetFirst((ATermList) t);
      f_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_29 = NULL,k_29 = NULL;
        static ATerm c_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_29)), not_null(k_29));
          return(t);
        }
        t = f_29;
        t = k_0(t);
        if(((j_29 != NULL) && (j_29 != t)))
          _fail(t);
        else
          j_29 = t;
        t = e_29;
        t = i_0(t);
        if(((k_29 != NULL) && (k_29 != t)))
          _fail(t);
        else
          k_29 = t;
        t = f_29;
        t = reverse_acc_2_0(i_0, c_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_6;
      t = k_0(t);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_29), term_x_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL,s_29 = NULL;
      t = term_v_6;
      r_29 = t;
      t = term_w_6;
      s_29 = t;
      t = term_g_7;
      t = p_4(r_29, s_29, t);
      o_29 = t;
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      {
        static ATerm d_4 (ATerm t)
        {
          ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,y_7 = NULL;
          v_29 = t;
          if(match_cons(t, sym_Program_1))
            {
              u_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_29);
          t_29 = t;
          t = u_29;
          if(((o_29 != NULL) && (o_29 != t)))
            _fail(t);
          else
            o_29 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, u_29);
          y_7 = t;
          t = SSLsetAnnotations(y_7, t_29);
          return(t);
        }
        t = fetch_1_0(d_4, t);
      }
    }
  {
    ATerm a_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_12), not_null(o_29)), term_f_12);
        t = echo_0_0(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = a_12;
      }
  }
  t = term_h_12;
  t = echo_0_0(t);
  t = term_k_11;
  p_29 = t;
  t = term_l_11;
  q_29 = t;
  t = term_j_12;
  t = p_4(p_29, q_29, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(k_5, t);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_12), term_w_12), term_v_12), term_u_12), term_t_12), term_s_12), term_q_12), term_n_12), term_m_12);
        t = echo_0_0(t);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_30;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_13 = ATgetFirst((ATermList) t);
                ATerm c_13 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_30;
          }
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = (ATerm) ATinsert(ATempty, f_30);
      }
  }
  g_30 = t;
  t = term_q_8;
  h_30 = t;
  t = SSL_printnl(h_30, g_30);
  t = f_30;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  t = term_v_6;
  l_30 = t;
  t = term_w_6;
  m_30 = t;
  t = term_g_7;
  t = p_4(l_30, m_30, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_4 (ATerm p_47, ATerm q_47, ATerm t)
{
  t = SSL_table_get(p_47, q_47);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  t = term_d_13;
  n_30 = t;
  t = term_q_6;
  o_30 = t;
  t = term_e_13;
  t = s_4(n_30, o_30, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  t = term_d_13;
  r_30 = t;
  t = term_q_6;
  s_30 = t;
  t = term_e_13;
  t = s_4(r_30, s_30, t);
  t = term_h_13;
  p_30 = t;
  t = term_q_6;
  q_30 = t;
  t = term_i_13;
  t = s_4(p_30, q_30, t);
  t = term_k_13;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_l_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, p_5, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = Option_3_0(q_5, r_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_52 (ATerm), ATerm b_52 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,i_8 = NULL;
  y_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_30 = ATgetFirst((ATermList) t);
      v_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_30);
  t_30 = t;
  t = u_30;
  t = a_52(t);
  w_30 = t;
  t = v_30;
  t = b_52(t);
  x_30 = t;
  t = (ATerm) ATinsert(CheckATermList(x_30), w_30);
  i_8 = t;
  t = SSLsetAnnotations(i_8, t_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL,j_31 = NULL,l_8 = NULL;
  d_31 = t;
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_13;
        t = g_94(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
      }
  }
  t = d_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_31 = ATgetFirst((ATermList) t);
      g_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_31);
  e_31 = t;
  t = term_w_6;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, f_31);
  t = s_4(j_31, f_31, t);
  t = g_31;
  {
    static ATerm b_32 (ATerm t)
    {
      ATerm u_13 = t;
      int v_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_31 = NULL;
              s_31 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_31;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              t = g_94(t);
              t = Cons_2_0(_id, b_32, t);
            }
          LocalPopChoice(v_13);
        }
      else
        {
          t = u_13;
          {
            ATerm x_31 = NULL,y_31 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_31 = ATgetFirst((ATermList) t);
                y_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_31), (ATerm) ATmakeAppl(sym_Undefined_1, x_31));
          }
        }
      return(t);
    }
    t = b_32(t);
  }
  i_31 = t;
  t = (ATerm) ATinsert(CheckATermList(i_31), (ATerm) ATmakeAppl(sym_Program_1, f_31));
  l_8 = t;
  t = SSLsetAnnotations(l_8, e_31);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  if(match_string(t, "--help"))
    {
      t = n_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_32;
        }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL;
  t = term_b_14;
  o_32 = t;
  t = term_q_6;
  p_32 = t;
  t = term_c_14;
  t = s_4(o_32, p_32, t);
  t = term_f_14;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_g_14;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  i_32 = t;
  t = term_k_11;
  k_32 = t;
  t = term_l_11;
  l_32 = t;
  t = (ATerm) ATempty;
  m_32 = t;
  t = SSL_table_put(k_32, l_32, m_32);
  t = i_32;
  {
    static ATerm t_5 (ATerm t)
    {
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_94(t);
          LocalPopChoice(i_14);
        }
      else
        {
          t = h_14;
          {
            ATerm j_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_5, z_5, d_6, t);
                LocalPopChoice(l_14);
              }
            else
              {
                t = j_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_5, t);
  }
  {
    ATerm m_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_33 = NULL;
        a_33 = t;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_16 = NULL;
              t = a_33;
              {
                ATerm t_14 = t;
                int u_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_16 = NULL,d_17 = NULL;
                    t = term_v_6;
                    x_16 = t;
                    t = term_b_14;
                    d_17 = t;
                    t = term_v_14;
                    t = p_4(x_16, d_17, t);
                    LocalPopChoice(u_14);
                  }
                else
                  {
                    t = t_14;
                    t = fetch_1_0(e_6, t);
                  }
              }
              t = a_33;
              t = default_system_usage_0_0(t);
              t = term_m_7;
              w_16 = t;
              t = SSL_exit(w_16);
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              {
                ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
                t = term_v_6;
                i_17 = t;
                t = term_d_13;
                j_17 = t;
                t = term_w_14;
                t = p_4(i_17, j_17, t);
                t = a_33;
                t = default_system_about_0_0(t);
                t = term_m_7;
                h_17 = t;
                t = SSL_exit(h_17);
              }
            }
        }
        LocalPopChoice(p_14);
      }
    else
      {
        t = m_14;
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
              static ATerm f_6 (ATerm t)
              {
                ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,n_8 = NULL;
                g_33 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_33 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_33);
                e_33 = t;
                t = f_33;
                if(((g_32 != NULL) && (g_32 != t)))
                  _fail(t);
                else
                  g_32 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_33);
                n_8 = t;
                t = SSLsetAnnotations(n_8, e_33);
                return(t);
              }
              t = fetch_1_0(f_6, t);
              t = term_s_6;
              c_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_32)), term_z_14);
              d_33 = t;
              t = SSL_printnl(c_33, d_33);
              t = (ATerm) ATmakeAppl(sym__2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_32)), term_z_14));
              t = default_system_usage_0_0(t);
              t = term_u_6;
              b_33 = t;
              t = SSL_exit(b_33);
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
            }
        }
      }
  }
  h_32 = t;
  t = term_k_11;
  j_32 = t;
  t = SSL_table_destroy(j_32);
  t = h_32;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
            {
              ATerm g_15 = t;
              int h_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(j_6, l_6, m_6, t);
                  LocalPopChoice(h_15);
                }
              else
                {
                  t = g_15;
                  {
                    ATerm i_15 = t;
                    int j_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_15);
                      }
                    else
                      {
                        t = i_15;
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
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  t = term_k_15;
  m_33 = t;
  t = term_q_6;
  n_33 = t;
  t = term_l_15;
  t = s_4(m_33, n_33, t);
  t = term_m_15;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_n_15;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm r_17 = NULL,v_17 = NULL,y_17 = NULL,a_18 = NULL,d_18 = NULL,s_8 = NULL;
  d_18 = t;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      y_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_18);
  r_17 = t;
  t = y_17;
  t = visamb_0_0(t);
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_17, a_18);
  s_8 = t;
  t = SSLsetAnnotations(s_8, r_17);
  return(t);
}
ATerm Vis_amb_0_0 (ATerm t)
{
  t = parse_options_1_0(h_6, t);
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL,m_17 = NULL,p_17 = NULL;
        x_33 = t;
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm o_6 (ATerm t)
              {
                if(match_cons(t, sym_Input_1))
                  {
                    if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_17 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(o_6, t);
              LocalPopChoice(r_15);
            }
          else
            {
              t = q_15;
              t = term_s_15;
              m_17 = t;
            }
        }
        t = not_null(m_17);
        t = ReadFromFile_0_0(t);
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, p_17);
        t = apply_strategy_1_0(p_6, t);
        t = output_file_0_0(t);
        t = report_success_0_0(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
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
